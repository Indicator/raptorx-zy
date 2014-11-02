/* 
 * File:   getProteinFeature.cpp
 * Author: wzy
 *
 * Created on May 14, 2013, 11:37 PM
 */

#include <cstdlib>
#include <string>
#include <map>
#include "bioh5.h"



using namespace std;
/*
 * 
 */
int main(int argc, char** argv) {
    if (argc == 1) {
        printf("Usage: getProteinFeature -seq [seq file] -msa [msa fasta file]\
 -mifile [output mi file] -outh5 -zy0file [output zy0file] -bpsfile [output bpsfile]\n");
        exit(0);

    }
    map<string, string> par;
    for (int i = 1; i+1 < argc; i = i + 2) {
        par[argv[i]] = argv[i + 1];
        //printf("%s %s\n",par[argv[i]].c_str(),par[])
    }
    Bioh5 xx;
    string f1=par["-seq"];
    string f2=par["-msa"];
    int r=xx.create_from_query(f1,f2);//par["-seq"], par["-msa"]);
    //write a h5 file, a3m,fasta 
    if (par["-outh5"] != "") {
        xx.writeh5(par["-outh5"],"/Data/feature2d");
    } else {
        if(par["-mipow2"]!="")
            xx.writeMiFeature(par["-mifile"], par["-zy0file"],true);
        else{
            xx.writeMiFeature(par["-mifile"], par["-zy0file"],false);
            xx.writeBpsFeature(par["-bpsfile"]);
        }
    }
    return 0;
}

