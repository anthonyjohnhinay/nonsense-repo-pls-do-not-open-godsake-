#!/bin/bash

# Download Cling binary
wget https://root.cern/download/cling/cling_2022-02-15_ubuntu2004.tar.bz2

# Extract Cling binary
tar xvf cling_2022-02-15_ubuntu2004.tar.bz2

# Add Cling binary to system path
echo 'export PATH="$PATH:'$(pwd)'/cling/bin"' >> ~/.bashrc
source ~/.bashrc
