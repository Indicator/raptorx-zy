#include "matrix.h"
#include "H5Cpp.h"

#include "bioh5.h"
//this 


int main(int argc,char** argv){
  
    Bioh5 xx(argv[1]);
      xx.read_dist("/Data/dist_1");
      xx.dist_1.Print();
      xx.read_pair_aa_frequency();
}