#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>
#include <ctime>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <unistd.h>
#include <math.h>
#include <exception>

#include <sstream>
#include <time.h>
#include <sys/time.h>
#include <iomanip>
#include "pnn1.h"

using namespace std;

int confusion[30][30];
int confusion_sum[30][30];
int contactStat[30];
int contactStat_sum[30];
int sum[30];
int test_mode=0;

int num_procs=1;
int proc_id=0;
bool toggle_error=false ;
double rt=1e-8 ;

//Local in this file
int Format;  
double regularizer;
int init_from_file=0;
string init_file;
int num_test_set;
string prefix_model_file;
string model_path;


int main(int argc, char **argv) {
    //if(proc_id==0)test();
    H5Eset_auto(H5E_DEFAULT , NULL, NULL);
    Nnpf cnfModel;
    cnfModel.Init(argc, argv);
    stringstream ss;
    ss<<"num train "<<cnfModel.trainData.size()<<" "<<cnfModel.testData.size()<<endl;
    eprint(0,ss.str());
    for(int i=0;i<cnfModel.trainData.size();i++)
        cnfModel.trainData[i]->subsampling_mode=1;
    for(int i=0;i<cnfModel.testData.size();i++)
        cnfModel.testData[i]->subsampling_mode=1;
    
    if (!proc_id) {
        cerr << "[D0] Initialization Finished!" << endl;
    }
    cnfModel.predict();
    return 0;
}
