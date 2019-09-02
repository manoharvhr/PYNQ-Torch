# Installing PyTorch v1.2.0 on PYNQ OS v2.4

## Prerequisites
Before beginning the following process, you must have a 64GB Micro SD card with [PYNQ OS v2.4](https://files.digilent.com/Products/PYNQ/pynq_z1_v2.4.zip?_ga=2.266370504.733201723.1567367199-111888654.1566846051) flashed onto it. This can be done using the [Etcher](https://www.balena.io/etcher/). Once booted up, continue the following steps.

## Steps
Update all packages & restart the board:
```sh
sudo su
apt-get update && apt-get upgrade
shutdown -r now
```
Create a new 10GB SWAP file:
```sh
sudo su
cd /
dd if=/dev/zero of=swapfile bs=1M count=10000
mkswap swapfile
swapon swapfile
```
Add the SWAP file to the File System Table, but also keep note of the location of the default SWAP file which comes with the PYNQ OS:
```sh
nano /etc/fstab
```
Remove the default SWAP file line (/var/swap) and add the following:
``
/swapfile none swap sw 0 0
``
Stop and remove the default SWAP file:
```sh
swapoff -v /var/swap
rm -R /var/swap
```
Verify whether the new SWAP is active & restart:
```sh
swapon -s
shutdown -r now
```
Give the necessary permission to the new SWAP file:
```sh
sudo su
chmod 600 /swapfile
```
Download the required packages & restart:
```sh
apt-get install libopenblas-dev cython3 libatlas-base-dev m4 libblas-dev cmake cython python3-dev python3-yaml tmux
pip3 install --user pyyaml numpy typing
shutdown -r now
```
Clone the PyTorch git repo and checkout v1.2.0. **Note:**If you plan to use SampleRNN, please follow the steps from the **SampleRNN** folder from here on:
```sh
sudo su
git clone --recursive https://github.com/pytorch/pytorch
cd pytorch
git checkout tags/v1.2.0 -b build
git submodule update --init --recursive
```
Begin compiling, it is recommended to use tmux so you can log-out and still continue:
```sh
tmux
export USE_CUDA=0
export USE_DISTRIBUTED=0
export MAX_JOBS=1
python3 setup.py build
```
This is a lengthy process, but you can detach from the terminal using Cntrl+B and then the key 'd'. Doing so can allow you to exit the ssh connection. When you wish to check on it simply login as super user and use:
```sh
tmux attach
```
Once complete, let us install the library now:
```sh
python3 setup.py develop
```
To test if this was successful, the following should not return any errors:
```sh
python3
import torch
x = torch.randn(5,5)
y = torch.randn(5,5)
print(x+y)
```

## Image File
For your convenience, an image file with everything pre-installed is available [here]().

## Simple illustration of the Framework
Now that we have ported PyTorch on the board, we can begin embedding accelerators within machine learning-based applications. An example is can be found in the **Example** folder.