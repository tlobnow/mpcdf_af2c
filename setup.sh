#!/usr/bin/env bash

# decompress the working AF2C partition
tar -xvzf ~/mpcdf_af2c/bin/af2complex.tar.gz
# move it into the main folder
mv af2complex ~

# set up the conda environment containing all necessary packages and dependenciess
echo ".. setting up your conda environment:"
conda env update -n mpcdf_af2c --file ~/mpcdf_af2c/mpcdf_af2c.yml

echo ".. activating the conda environment"
conda activate mpcdf_af2c 

echo "Please use the following command to activate the correct environment in order to use AlphaFold:"
echo ""
echo "conda activate mpcdf_af2c" 

