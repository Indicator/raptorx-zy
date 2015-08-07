# Pnn1v2 developer guide

## Training with new features

# get_pnn1inf_feature.pl
Change the codes to write the feature to h5 file.  

# void PairwiseSequence::LoadH5(string fn,string this_pdbid="")
 One need to change this function to properly load the feature data from each h5 file.
 
# void PairwiseSequence::ft1(void)
 In this function, one can convert the data load from h5 file to the final feature matrix, feature3D.

# Bioh5 

Bioh5 is a class to store feature about a protein, with various input and output functions. The file format hdf5 
can be read and written by most platform, including matlab, R, python, perl, and C++.
 
 
 Fasta2hdf5 is used to add those features derived from multiple sequence alignments.
 
 Find a sequence loading part and load dope at the same time. 
 
 TODO:
 Add pair position feature to feature3D. 