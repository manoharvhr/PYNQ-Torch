r"""
Weight Normalization from https://arxiv.org/abs/1602.07868
"""
from torch.nn.parameter import Parameter
import torch

# Packages needed for using accelerators
import pynq.lib.dma # DMA
from pynq import Xlnk # Allocating arrays
import numpy as np # Xlnk uses numpy arrays
from pynq import Overlay # PYNQ Overlay package for using hardware

# Any of the three can be used, each represents a different dimension of input
#overlay = Overlay('./compute_weight_new_64641.bit')
overlay = Overlay('./compute_weight_new_together.bit')
#overlay = Overlay('./compute_weight_256-64-1_unroll.bit')

# Uncomment both the below blocks of code for compute_weight_new_together.bit

# Uncomment the following block of code for compute_weight_new_64641.bit
dma1 = overlay.axi_dma_1 # Creating a variable to access DMA
xlnk = Xlnk() # creating an object for allocation
dim_mv = 64 # Allocating memory for both the input and the output
in_stream = xlnk.cma_array(shape=(dim_mv+dim_mv*dim_mv*1,1), dtype=np.float32)
out_stream = xlnk.cma_array(shape=(dim_mv*dim_mv*1,1), dtype=np.float32)

# Uncomment the following block of code for compute_weight_256-64-1_unroll.bit
dma2 = overlay.axi_dma_2
xlnk = Xlnk()
dim_l = 256
dim_r = 64
dim_c = 1
in_stream2 = xlnk.cma_array(shape=(dim_l+dim_l*dim_r*dim_c,1), dtype=np.float32)
out_stream2 = xlnk.cma_array(shape=(dim_l*dim_r*dim_c,1), dtype=np.float32)

# Function which handles compute_weight_new_64641.bit dimensions
def ComputeWeight_Hardware_1(g, v):
    in_stream[:] = torch.cat((v.data.reshape(dim_mv*dim_mv*1, 1), g.data.reshape(dim_mv, 1)), 0).numpy() # Pre-processing input data
    dma1.sendchannel.transfer(in_stream) # Sending out data
    dma1.recvchannel.transfer(out_stream) # Also providing the DMA space to place the output
    dma1.sendchannel.wait() # Wait for the data to be sent/received
    dma1.recvchannel.wait()
    return torch.tensor(out_stream).reshape(v.size()) # Post-processing output data so that the application can continue as it is

# Function which handles compute_weight_256-64-1_unroll.bit dimensions
def ComputeWeight_Hardware_2(g, v):
    in_stream2[:] = torch.cat((v.data.reshape(dim_l*dim_r*dim_c, 1), g.data.reshape(dim_l, 1)), 0).numpy() # Pre-processing input data
    dma2.sendchannel.transfer(in_stream2) # Sending out data
    dma2.recvchannel.transfer(out_stream2) # Also providing the DMA space to place the output
    dma2.sendchannel.wait() # Wait for the data to be sent/received
    dma2.recvchannel.wait()
    return torch.tensor(out_stream2).reshape(v.size()) # Post-processing output data so that the application can continue as it is

def _norm(p, dim):
    """Computes the norm over all dimensions except dim"""
    if dim is None:
        return p.norm()
    elif dim == 0:
        output_size = (p.size(0),) + (1,) * (p.dim() - 1)
        return p.contiguous().view(p.size(0), -1).norm(dim=1).view(*output_size)
    elif dim == p.dim() - 1:
        output_size = (1,) * (p.dim() - 1) + (p.size(-1),)
        return p.contiguous().view(-1, p.size(-1)).norm(dim=0).view(*output_size)
    else:
        return _norm(p.transpose(0, dim), 0).transpose(0, dim)


class WeightNorm(object):
    def __init__(self, name, dim):
        self.name = name
        self.dim = dim

    def compute_weight(self, module):
        g = getattr(module, self.name + '_g')
        v = getattr(module, self.name + '_v')
        if (v.size()[0] == 64 and v.size()[1] == 64 and v.size()[2] == 1):
#            return v * (g / _norm(v, self.dim)) # This line can be uncommented when not using compute_weight_new_64641.bit or compute_weight_new_together.bit
            return ComputeWeight_Hardware_1(g, v)
        elif (v.size()[0] == 256 and v.size()[1] == 64 and v.size()[2] == 1):
#            return v * (g / _norm(v, self.dim)) # This line can be uncommented when not using compute_weight_256-64-1_unroll.bit or compute_weight_new_together.bit
            return ComputeWeight_Hardware_2(g, v)

        return v * (g / _norm(v, self.dim))

    @staticmethod
    def apply(module, name, dim):
        fn = WeightNorm(name, dim)

        weight = getattr(module, name)

        # remove w from parameter list
        del module._parameters[name]

        # add g and v as new parameters and express w as g/||v|| * v
        module.register_parameter(name + '_g', Parameter(_norm(weight, dim).data))
        module.register_parameter(name + '_v', Parameter(weight.data))
        setattr(module, name, fn.compute_weight(module))

        # recompute weight before every forward()
        module.register_forward_pre_hook(fn)

        return fn

    def remove(self, module):
        weight = self.compute_weight(module)
        delattr(module, self.name)
        del module._parameters[self.name + '_g']
        del module._parameters[self.name + '_v']
        module.register_parameter(self.name, Parameter(weight.data))

    def __call__(self, module, inputs):
        setattr(module, self.name, self.compute_weight(module))

#    def mv_getData(self, module):
#        g = getattr(module, self.name + '_g')
#        v = getattr(module, self.name + '_v')
#        return g, v

def weight_norm(module, name='weight', dim=0):
    r"""Applies weight normalization to a parameter in the given module.

    .. math::
         \mathbf{w} = g \dfrac{\mathbf{v}}{\|\mathbf{v}\|}

    Weight normalization is a reparameterization that decouples the magnitude
    of a weight tensor from its direction. This replaces the parameter specified
    by `name` (e.g. "weight") with two parameters: one specifying the magnitude
    (e.g. "weight_g") and one specifying the direction (e.g. "weight_v").
    Weight normalization is implemented via a hook that recomputes the weight
    tensor from the magnitude and direction before every :meth:`~Module.forward`
    call.

    By default, with `dim=0`, the norm is computed independently per output
    channel/plane. To compute a norm over the entire weight tensor, use
    `dim=None`.

    See https://arxiv.org/abs/1602.07868

    Args:
        module (nn.Module): containing module
        name (str, optional): name of weight parameter
        dim (int, optional): dimension over which to compute the norm

    Returns:
        The original module with the weight norm hook

    Example::

        >>> m = weight_norm(nn.Linear(20, 40), name='weight')
        Linear (20 -> 40)
        >>> m.weight_g.size()
        torch.Size([40, 1])
        >>> m.weight_v.size()
        torch.Size([40, 20])

    """
    WeightNorm.apply(module, name, dim)
    return module


def remove_weight_norm(module, name='weight'):
    r"""Removes the weight normalization reparameterization from a module.

    Args:
        module (nn.Module): containing module
        name (str, optional): name of weight parameter

    Example:
        >>> m = weight_norm(nn.Linear(20, 40))
        >>> remove_weight_norm(m)
    """
    for k, hook in module._forward_pre_hooks.items():
        if isinstance(hook, WeightNorm) and hook.name == name:
            hook.remove(module)
            del module._forward_pre_hooks[k]
            return module

    raise ValueError("weight_norm of '{}' not found in {}"
                     .format(name, module))
