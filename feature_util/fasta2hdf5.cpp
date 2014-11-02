#include <stdio.h>
#include <fstream>
#include <iostream>
#include <exception>
#include <vector>
#include <map>
#include <string>
#include "protein_const.h"
#include "protein.h"
#include "bioh5.h"
#include "H5Cpp.h"
//#include "protein.h"

//#include "H5DataSpace.h"

using namespace std;
using namespace H5;


//*
int main(int argc, char **argv) {
    H5::Exception::dontPrint();
    //AAChar2NumAln['X']=20;
    //input: a fasta multi sequence alignment , output filename
    map<string, string> par;
    if (argc == 1) {
        printf("Usage: fasta2hdf5 -act [pairfreq|seqweight] -fasta [fasta file] -h5 [hdf5file]\n");
        return 0;
    }
    for (int i = 1; i < argc; i = i + 2)
        par[argv[i]] = argv[i + 1];
    Bioh5 xx;
    
    vector<vector<int> > msa = xx.readSimpleFasta(par["-fasta"]);
    double* pairFreq = NULL;
    int seqlen;
    Protein* tpl;
    if (par["-tpl"] != "")
        tpl = new Protein(par["-tpl"]);


    if (par["-act"] == "pairfreq") {
        vector<double> seqweight = xx.compute_sequence_weight(msa);
        xx.fasta2hdf5_add_weight(par["-h5"], seqweight);
        pairFreq = xx.getPairFreq(msa, msa[0].size(), msa.size(), seqlen, seqweight);
        xx.fasta2hdf5(par["-h5"], pairFreq, seqlen);
    } else if (par["-act"] == "seqweight") {
        vector<double> seqweight = xx.compute_sequence_weight(msa);
        xx.fasta2hdf5_add_weight(par["-h5"], seqweight);
    } else if (par["-act"] == "add_sequence") {
        //read 
        //fasta2hdf5_add_seqres(par["-h5"],tpl->sequence);
    }
}
//*/
