#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <iostream>
#include "matrix.h"
#include "engine.h"
#include "mat.h"

#pragma comment (lib, "Libmx.lib")
#pragma comment (lib, "libmex.lib")
#pragma comment (lib, "libeng.lib")

using namespace std;
using std::string;

Engine *ep;

int MatInv()
{
    mxArray *mxMat=NULL, *mxRet=NULL;
    mxMat = mxCreateDoubleMatrix(9, 9, mxREAL);
    //memcpy(mxGetPr(mxMat), M, 9 *9 * sizeof(double));
    engPutVariable(ep, "M", mxMat);

    double* ptr = mxGetPr(mxRet);
    //call Matlab inv() function
    engEvalString(ep, "invM=inv(M);");
    mxRet = engGetVariable(ep, "invM");
    if (mxRet == NULL)
    {
        cout << "Error - Matlab returns NULL pointer for invM=inv(M)" << endl;
        return 0;
    }
    ptr = mxGetPr(mxRet);
    mxDestroyArray(mxMat);
    return 1;
}

int main()
{
    if (!(ep = engOpen("\0")))
    {
         cout << "Cannot start MATLAB engine" << endl;
         cin.get();
    }

    engClose(ep);
    return 0;
    
} 
