# SampleRNN Accelerators
The following folder consists of some accelerators designed for the RNN-based sound synthesis application SampleRNN. The source code was taken from [here](https://github.com/deepsound-project/samplernn-pytorch).

In general, we identified two kernels to be accelerated. First of which was the matrix multiplication found within GRUs whereas, the second was weight normalisation.

The folder is organised as follows: For the two kernels, there are separate folders each containing the Vivado and Vivado HLS files, overlay files, and python files from the PyTorch library where the accelerators are to be embedded.

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

## Additional Packages Needed
To be able to run the SampleRNN application, the PYNQ OS is still missing some packages (i.e. LibROSA). The following are steps to install them.

To begin with, download the LLVM 6.0.1 source code from [here](http://releases.llvm.org/download.html#6.0.1) and copy it onto the board, preferably in a Downloads folder. Unzip the file:
```sh
sudo su
tar -xf llvm-6.0.1.src.tar.gz
```
Create a new directory and configure the LLVM build:
```sh
mkdir llvm_build
cd llvm_build
tmux
cmake ~/Downloads/llvm-6.0.1.src -DLLVM_TARGETS_TO_BUILD="ARM" -DCMAKE_BUILD_TYPE="Release"
```
Begin the build:
```sh
cmake --build . -- -j1
```
Install once the build finishes and restart the board:
```sh
cmake --build . --target install
shutdown -r now
```
Install additional packages, in this order as some packages which are installed with others need to be a different version to work:
```sh
sudo su
pip3 install librosa==0.6.1
pip3 install llvmlite==0.24.0
pip3 install numba==0.39.0
shutdown -r now
```
To test if this was successful, we should be able to import the package now:
```sh
sudo su
python3
import librosa
```

## Running SampleRNN
Once PyTorch is ported, the SampleRNN repo can be cloned, the steps can be followed on the repo but executed with the following command and **profiling.py** file, which is compatible with the accelerators designed and also profiles the application to monitor performance:
```sh
python3 profiling.py --exp TEST64 --frame_size 16 4 --n_rnn 2 --dataset piano --cuda False --sample_length 16000 --dim 64
```
This command generates one second of audio @ 16000Hz

## PYNQ-Z1 Image
An image file with PyTorch v0.4.1 on PYNQ OS v2.3 can be downloaded from [here](https://github.com/manoharvhr/PYNQ-Torch/releases/tag/v1.1). This also includes SampleRNN files.