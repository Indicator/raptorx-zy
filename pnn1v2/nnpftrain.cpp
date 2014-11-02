#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>
#include <ctime>
#include <cstdlib>
#include <cstdio>
#include <cstring>
#include <cmath>
#ifdef _MPI
#include <mpi.h>
#endif
#include <unistd.h>
#include <math.h>
#include <exception>
#include <stdexcept>
#include <fenv.h>
#include "matrix3.h"
#include "pnn1.h"

#define SM (CLS / sizeof (double))
#define MHXXWS 11
#define DEFAULT_INDEXMODE 0


int confusion[30][30];
int confusion_sum[30][30];
int contactStat[30];
int contactStat_sum[30];
int sum[30];
int test_mode = 0;

int num_procs=1;
int proc_id=0;
bool toggle_error = false;
double rt = 1e-8;

//Local in this file
int Format;  
double regularizer;
int init_from_file=0;
string init_file;
int num_test_set;
string prefix_model_file;
string model_path;


void Usage() {
    cerr << "PNN1 [-i input_file] [-d data_dir] [-w windowSize] [-s num_labels] "
            << "[-g gates] [-m model] [-l columncs] [-p pairwise_features] "
            << "[-r regularizer] [-F format] [-f init_model_file] [-t num_test] "
            << "[-S split_file] [-M model_path] [-R newModelFile] [-P model_file_prefix]\n";
    cerr << "\t-m model: singleton, pairwise, DistancePotential or contact_number"
            << endl;
    cerr << "\t-l columns: select those columns to calculate in the singleton "
            << "features section. Note: the columns start from 0. For example, "
            << "-l0,3-6 means columns 0, 3, 4, 5 and 6." << endl;
    cerr << "\t-p pairwise_feaures : select those columns to calculate in the "
            << "pairwise feature section. Similar to -l option. Default value is -1, meaning no feature." << endl;
    cerr << "\t-F format: 0 denotes sequence format; 1 denotes svm format. Default is 0." << endl;
    cerr << "\t-t num_test: number of sequences used as test set. It's counted "
            << "from the end of the input file. If -t option is not used, the 3rd "
            << "of every 4 sequences is included in the test set by default." << endl;
    cerr << "  Example: " << endl;
    cerr << "     mpirun -np 4 ./PNN1 -i ss70 -d . -w 5 -s 3 -g 20 -l 0-39 "
            << "-r 0.001 -m singleton -t 100" << endl;
    cerr << "  This command uses 4 cores to run a 3 state secondary structure "
            << "classfier. " << endl;
    cerr << "  The window size is set to be 5, using 20 gates, 40 features for "
            << "each residue, i.e. column 0 to 39. The regularizer is set to be 0.001." << endl;
    cerr << "  ss70 file has 513 proteins sequences. We use 100 of them from the "
            << "end as the test set." << endl;
}


void myunexpected() {
    cerr << "unexpected handler called " << proc_id << endl;
    throw;
}
void test(void){
    string s="1,2,3";
    stringstream ss(s);
    string ws;
    while(ss.good()){
        int x;
        getline(ss,ws,',');
        stringstream(ws)>>x;
        cerr<<"get "<<x<<endl;
    }
}

int main(int argc, char **argv) {
    H5Eset_auto(H5E_DEFAULT , NULL, NULL);
    #ifdef _MPI
    MPI_Init(&argc, &argv);
    MPI_Comm_rank(MPI_COMM_WORLD, &proc_id);
    MPI_Comm_size(MPI_COMM_WORLD, &num_procs);
#endif
    //if(proc_id==0)test();

    Nnpf cnfModel;
    cnfModel.Init(argc, argv);
    if (!proc_id) {
        cerr << "[D0] Initialization Finished!" << endl;
    }
    Lbfgs* lbfgs1 = new Lbfgs(&cnfModel);
    //todo cnfModel.CopyWeightsOut(w_init);
    #ifdef _MPI
    MPI_Barrier(MPI_COMM_WORLD);
#endif
    if(cnfModel.par["-op"]==""||cnfModel.par["-op"]=="0")
        lbfgs1->method=Minimizer::methodtype::lbfgs; 
    else
        lbfgs1->method=Minimizer::methodtype::annealing; 
    lbfgs1->run_lbfgs();
#ifdef _MPI
    MPI_Barrier(MPI_COMM_WORLD);
    MPI_Finalize();
#endif
    return 0;
}


