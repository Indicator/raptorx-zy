#include <stdio.h>
#include <fstream>
#include <iostream>
#include <exception>
#include <vector>
#include <map>
#include <cctype>
#include <string>
#include "protein_const.h"
#include "protein.h"
#include "bioh5.h"
#include "H5Cpp.h"

//#include "protein.h"

//#include "H5DataSpace.h"

using namespace std;
using namespace H5;

vector<int>  ARNDSequence(const vector<int> & charSequence)
{
  vector<int> res;
  // Check for letter based sequence
  for(int i=0;i< charSequence.size();i++)
  {
    if(AAChar2NumAln[toupper(charSequence[i])] == -1) return res;
  }

  res=vector<int>(charSequence.size(),0);
  for(int i=0;i< charSequence.size();i++)
  {
    res[i]=AAChar2NumAln[toupper(charSequence[i])];
  }
  return res;
}

//*
int main(int argc, char **argv) {
    H5::Exception::dontPrint();
    //AAChar2NumAln['X']=20; we need dope matrix has [20][20]
    //input: a fasta multi sequence alignment , output filename
    map<string, string> par;
    if (argc == 1) {
        printf("Usage: add_pair_feature_to_bioh5 {-seq [sequence file]|-tpl [tpl file]} -dopematrix [dope file] -h5 [hdf5file]\n");
        return 0;
    }
    for (int i = 1; i < argc; i = i + 2)
        par[argv[i]] = argv[i + 1];
    Bioh5 xx;
    
    vector<int> seq = xx.readSimpleFasta(par["-seq"])[0];

    int seqlen;
    Protein* tpl;
    if (par["-tpl"] != "")
        tpl = new Protein(par["-tpl"]);

    Matrix3<double> pairAminoAcidMatrix ;
    xx.ReadDopeMatrix(par["-dopematrix"], "CA", pairAminoAcidMatrix);
    // Convert to  ARND coded seq.
    seq = ARNDSequence(seq);
    
    Matrix3<double> pairPositionFeature;
    xx.CalcPairPositionFeature(seq,  pairAminoAcidMatrix, "dope", pairPositionFeature);
    xx.WritePairPositionFeature(seq.size(), par["-h5"], pairPositionFeature, "pairPositionFeature", 0);
    
}
//*/
