source ../../PATHS.inc
source 00_user_parameters.inc

FILE=$FILE

# Comma-separated list of protein data, passed to alphafold via --fasta_paths
FASTA_PATHS=${MAIN}/fasta_files/$FILE.fasta

# Output directory to write the results to, passed via --output
OUTPUT_DIR=${MAIN}/feature_files/

# Preset for alphafold, passed via --db_preset
#PRESET="full_dbs"
PRESET="reduced_dbs"

PYTHON_PATH=~/miniconda3/envs/mpcdf_af2c/bin
AF_DIR=~/af2complex/src
AF2_DIR=/mpcdf/soft/SLE_15/packages/x86_64/alphafold/2.2.0
DATA_DIR=/raven/ri/public_sequence_data/alphafold2/git-v2.2.0/data/

TOOL_DIR=/mpcdf/soft/SLE_15/packages/x86_64/alphafold/2.2.0/bin
