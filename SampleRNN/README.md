# SampleRNN Accelerators
The following folder consists of some accelerators designed for the RNN-based sound synthesis application SampleRNN. The source code was taken from [here](https://github.com/deepsound-project/samplernn-pytorch).

In general, we identified two kernels to be accelerated. First of which was the matrix multiplication found within GRUs whereas, the second was weight normalisation.

## PyTorch v0.4.1
In order to test the work presented here, PyTorch v0.4.1 must be used. To port this, the steps from the **PyTorch Installation** folder can be followed up until the git repository is being cloned. From there, the following steps have to be used instead:

Clone the PyTorch git repo and checkout v0.4.1:
```sh
sudo su
git clone --recursive https://github.com/pytorch/pytorch
cd pytorch
git checkout tags/v0.4.1 -b build
git submodule update --init --recursive
```
Begin compiling, it is recommended to use tmux so you can log-out and still continue:
```sh
tmux
export NO_CUDA=1
export NO_DISTRIBUTED=1
export MAX_JOBS=1
python3 setup.py build_deps
```
This is a lengthy process, but you can detach from the terminal using Cntrl+B and then the key 'd'. Doing so can allow you to exit the ssh connection. When you wish to check on it simply login as super user and use:
```sh
tmux attach
```
Once complete, let us install the library now:
```sh
python3 setup.py develop
```