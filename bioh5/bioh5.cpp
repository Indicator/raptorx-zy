#include <string>
#include <iostream>
#include <algorithm>
#include "H5Cpp.h"
#include "matrix.h"
#include "matrix3.h"
#include "protein_const.h"
#include "bioh5.h"
#include <gsl/gsl_linalg.h>


//This class is used for read/write/compute protein features, from/to .tpl and .h5 file
//One H5 file can be partially loaded in order to save memory.

//Read from a tpl/tgt file, add its information to h5 file.



using namespace std;
using namespace H5;

/**
 * @brief This constructor is used for open a h5file for reading in a simple way.
 * @param fn: the file name of the hdf5 file for reading.
 */
Bioh5::Bioh5(std::string fn){
    open_h5file_readonly(fn);
}

/**
 * @brief This method opens hdf5 file for reading.
 * @param fn: the file name of the hdf5 file for reading.
 * @return 
 */
void Bioh5::open_h5file_readonly(std::string fn)
{
  h5file=fn;
  try {
    file = new H5File(h5file ,H5F_ACC_RDONLY );
  } catch( FileIException error )  {
    error.printError();
  }
  seqres_seq=NULL;
  //No reading in action.
}


int Bioh5::create_from_query(const std::string & seqfile,const std::string & msafile){
    printf("seqfile %s\n",seqfile.c_str());
    vector<vector<int> > w=readSimpleFasta(seqfile);
    seqlen=w[0].size();
    for(int i=0;i<seqlen;i++)
    sequence=sequence+char(w[0][i]);
    naatype=21;
    isMissing=new int[seqlen];
    for(int i=0;i<seqlen;i++) isMissing[i]=0;
    
    vector<vector<int> > msa = readSimpleFasta(msafile);
    seqweight = compute_sequence_weight(msa);
    //fasta2hdf5_add_weight(h5file, seqweight);// h5file is not created yet.
    pairFreq = getPairFreq(msa, msa[0].size(), msa.size(), seqlen, seqweight);
    //fasta2hdf5(h5file, pairFreq, seqlen);
    
    return 1;
}


int Bioh5::read_all()
{
    return 1;
}

Bioh5::~Bioh5(){
  if(seqres_seq!=NULL) delete seqres_seq;
  if(file!=NULL)  file->close();  
}

int Bioh5::compute2_mi()
{
  //we need singleFreq.
  double* P1=singleFreq; // need to be computed.
  double* P2=pairFreq;
  entropy.reserve(seqlen);
  mi.resize(seqlen,seqlen);
  normmi.resize(seqlen,seqlen);
  int q=naatype;
  double eps=1e-15;
  
  for(int i=0; i<seqlen; i++)
    //for(int j=i+1; j<seqlen; j++) {
    for(int j=i; j<seqlen; j++) {
      double M = 0;
      double M2=0;
      double M1=0;
      double w0=0;
      double w1=0;
      for(int alpha=0; alpha<q; alpha++)
        for(int beta =0; beta<q; beta++) {
          unsigned long index=((i*seqlen+j)*q+alpha)*q+beta;
          unsigned long index2=i*q+alpha;
          unsigned long index3=j*q+beta;
          if(P2[index]>eps && P1[index2] > eps && P1[index3]> eps) {
            w0=w0+ P1[index2]* P1[index3];
            //w1=w1+ P2[index];
            //M = M + (P2[index]- P1[index2]* P1[index3] /w0)*log(P2[index] / P1[index2]/P1[index3]);
            M2+=P2[index]*log(P2[index] / P1[index2]/P1[index3]);
          }
        }
     //M=M+w1*log(w0);  // M is sum (fij-fi*fj/w0)*log(fij/fi/fj)+sum(fij*log(fi*fj));
      if(w0 > eps)
      M1=M2+log(w0);
      mi(i,j)=M1;
      if(j>i)
        mi(j,i)=M1;
      else  
        mi(i,j)=M1*2; //verified, same with compute_di_zy n=0
      //M1=M2+log(w0);
      double h = 0.;
      for(int alpha=0; alpha<q; alpha++)
        for(int beta =0; beta<q; beta++) {
          unsigned long index=((i*seqlen+j)*q+alpha)*q+beta;
          unsigned long index2=i*q+alpha;
          
          unsigned long index3=j*q+beta;
          if(P2[index]>eps && P1[index2]>eps && P1[index3]>eps)
            h = h + P2[index]/ P1[index2]/P1[index3];
        }
    } //end of (i,j)
    //mi.Dlmwrite("mitest0.dat");
    for(int i=0; i<seqlen; i++) {
        double s1=0.;
        for( int  alpha=0; alpha<q; alpha++) {
            unsigned long index2=i*q+alpha;
            if(P1[index2]>eps )
                s1 = s1 - P1[index2] * log(P1[index2]);
        }
        entropy[i]=s1; //initialize entropy
    }
    for (int i = 0; i < seqlen; i++)
        //for(int j=i+1; j<seqlen; j++) {
        for (int j = i; j < seqlen; j++)
            if (entropy[i] >eps || entropy[j] >eps)
                normmi(i, j) = mi(i, j) / ((entropy[i] > entropy[j]) ? entropy[i] : entropy[j]);
                   
                
    
}

void Bioh5::compute_p2aarecode(const double *p2, int seqlen, int q, const int* recode, double* p2out) {
    for (int i = 0; i < seqlen; i++)
        for (int j = i + 1; j < seqlen; j++) {
            for (int alpha = 0; alpha < naatype; alpha++)
                for (int beta = 0; beta < naatype; beta++) {
                    unsigned long index1 = getPos(i, j, recode[alpha], recode[beta], seqlen, q);
                    unsigned long index2 = getPos(i, j, alpha, beta, seqlen, naatype);
                    p2out[index1] += p2[index2];
                }
        }

}

int Bioh5::compute2_mimore() {
    //we need singleFreq.
    double* P1 = singleFreq; // need to be computed.
    double* P2 = pairFreq;

    entropy.reserve(seqlen);
    for (int i = 0; i < 15; i++) {
        miMore[i].resize(seqlen, seqlen);
        normmiMore[i].resize(seqlen, seqlen);
    }
    int q = naatype;
    double eps = 1e-15;
    int Naarecode = 15;
    for (int r = 0; r < Naarecode; r++) {
        //Do not use naatype in this loop, but q.
        int q = 0;
        for (int m = 0; m < naatype; m++) q = (q < aarecode[r][m]) ? aarecode[r][m] : q;
        q = q +1;
        fprintf(stderr,"recode %d %d\n",r,q);

        int np2 = getPos(seqlen - 1, seqlen - 1, q - 1, q - 1, seqlen, q) + 1; // Size of recoded P2, we need.
        int np1 = seqlen*q;

        double* p2r = new double[np2];
        double* p1r = new double[np1];
        memset(p2r,0,np2*sizeof(double));
        memset(p1r,0,np1*sizeof(double));

        compute_p2aarecode(P2, seqlen, q, aarecode[r], p2r);
        compute_singlefreq(p2r, seqlen, q, p1r);
        
        for (int i = 0; i < seqlen; i++)
            for (int k = 0; k < q; k++) {
                unsigned int index = getPos(i, i, k, k, seqlen, q);
                p2r[index] = p1r[i * q + k];
            }
        for (int i = 0; i < seqlen; i++)
            for (int j = i; j < seqlen; j++) {
                double M = 0;
                double M2 = 0;
                double M1 = 0;
                double w0 = 0;
                double w1 = 0;
                for (int alpha = 0; alpha < q; alpha++)
                    for (int beta = 0; beta < q; beta++) {
                        unsigned long index = ((i * seqlen + j) * q + alpha) * q + beta;
                        if (p2r[index] > eps) {
                            unsigned long index2 = i * q + alpha;
                            unsigned long index3 = j * q + beta;
                            w0 = w0 + p1r[index2] * p1r[index3];
                            //w1=w1+ P2[index];
                            //M = M + (P2[index]- P1[index2]* P1[index3] /w0)*log(P2[index] / P1[index2]/P1[index3]);
                            M2 += p2r[index] * log(p2r[index] / p1r[index2] / p1r[index3]);
                        }
                    }
                //M=M+w1*log(w0);  // M is sum (fij-fi*fj/w0)*log(fij/fi/fj)+sum(fij*log(fi*fj));
                M1 = M2 + log(w0);
                miMore[r](i, j) = M1;
                if (j > i)
                    miMore[r](j, i) = M1;
                else
                    miMore[r](i, j) = M1 * 2; //verified, same with compute_di_zy n=0
                //M1=M2+log(w0);
            } //end of (i,j)
        //mi.Dlmwrite("mitest0.dat");
        //Convert P2 P1 q


        for (int i = 0; i < seqlen; i++) {
            double s1 = 0.;
            for (int alpha = 0; alpha < q; alpha++) {
                unsigned long index2 = i * q + alpha;
                if (p1r[index2] > 0)
                    s1 = s1 - p1r[index2] * log(p1r[index2]);
            }
            entropy[i] = s1; //initialize entropy
        }
        for (int i = 0; i < seqlen; i++)
            //for(int j=i+1; j<seqlen; j++) {
            for (int j = i; j < seqlen; j++){
               double maxentropy=(entropy[i] > entropy[j]) ? entropy[i] : entropy[j];
               if(maxentropy>eps)
                    normmiMore[r](i, j) = miMore[r](i, j) / maxentropy;
               else
                    normmiMore[r](i, j) =0;
               //fprintf(stderr,"%d %d %.6f\n",i,j,normmiMore[r](i,j));
            } 
    // Free 
        delete[] p2r;
        delete[] p1r;
    }

    //miMore[2].Dlmwrite("test.mimore2.csv");
}

/**
 * Compute mi's power and store the result in bioh5::mipow. 
 */
int Bioh5::compute2_moreev()  //Compute what computeMoreEv.m does
{
  miroot[0]=mi;
 // mi.Dlmwrite("mitest.dat");
  for(int i=1; i<11; i++) {
    compute_root2(miroot[i-1],0.2,1,miroot[i]);
    absm(miroot[i]);
    //miroot[i].Dlmwrite("testroot3.csv");
  }
  mipow[0]=mi*mi;
  double normfro=mi.fnorm();
  double epsl=1e-15;
  if(normfro<epsl)
      normfro=1;
  for(int i=1; i<11; i++)
    mipow[i]=mi*mipow[i-1]*(1.0/normfro);
  
  Matrix ee;
  ee.EyeMat(mi.getncol());
  mipow2[0]=ee-mi;
  normfro=mipow2[0].fnorm();
    if (normfro < epsl)
        normfro = 1;

    for (int i = 1; i < 11; i++)
        mipow2[i] = mipow2[0] * mipow2[i - 1]*(1.0 / normfro);
  
  
  for(int i=0; i<3; i++) {
    int j=10*(1+i);
    //miLocalMax[i]=
    compute_local_max(mipow[i],j,2,0.2, miLocalMax[i]);
  }
  return 0;
}

/**
 * Compute the mutual information fromthe joint probability defined by xx
 * @param xx
 * @return The mutual information
 */
double matrix_mi(const Matrix &xx,const Matrix &pi,const Matrix &pj){
    double res=0;
    double eps=1e-100;
    for(unsigned int i=0;i<xx.getnrow();i++)
        for(int j=0;j<xx.getncol();j++)
            res=res+xx[i][j]*log( (xx[i][j]+eps) / (pi[0][i]*pj[0][j]+eps) );
    return res;
}
void calculate_direct_bp_link(Matrix &xx, double * single_freq, int ii,int jj, int naa,
        const Matrix &pi,const Matrix &pj){
    double epsilon=1e-4;
    double diff =1.0;
    Matrix mu1(1,naa);mu1=1.0/naa;
    Matrix mu2(1,naa);mu2=1.0/naa;

    Matrix xxt(xx);xxt.trans();
    //int niter=0;
    while (diff > epsilon){
        //niter++;
        Matrix scra1 = mu2 * xxt;
        Matrix scra2 = mu1 * xx;
        Matrix new1 = pi; new1.DotDivide(scra1);
        new1.normalize();
        Matrix new2 = pj ; new2.DotDivide(scra2);
        new2.normalize();
        diff = 0 ; 
        Matrix diff1=new1-mu1;  absm(diff1);  diff=maxm(diff1);
        Matrix diff2=new2-mu2;  absm(diff2);  if(diff < maxm(diff2)) diff=maxm(diff2);
        mu1 = new1;
        mu2 = new2;
    }
    //cout<<"niter "<<niter<<endl;
    mu1.trans();
    xx.DotMultiple(mu1*mu2);
    xx.normalize();
}
/**
 * Compute the direct information from pair frequency matrix
 */

// Put this to Matrix library
extern "C" {
    // LU decomoposition of a general matrix
    void dgetrf_(int* M, int *N, double* A, int* lda, int* IPIV, int* INFO);
    // generate inverse of a matrix given its LU decomposition
    void dgetri_(int* N, double* A, int* lda, int* IPIV, double* WORK, int* lwork, int* INFO);
}


void matrix_inverse(double* A, int N)
{       // old, use Matrix::Lapack_inverse() in future
    int *IPIV = new int[N+1];
    int LWORK = N*N;
    double *WORK = new double[LWORK];
    int INFO;
    dgetrf_(&N,&N,A,&N,IPIV,&INFO);
    dgetri_(&N,A,&N,IPIV,WORK,&LWORK,&INFO);
    delete IPIV;
    delete WORK;
}

/*
void inverse_2(double *ptr, int n)
{
    double** a; 
    a=new double*[n];
    for(int i=0;i<n;i++)
        a[i]=ptr+i*n;
    int i, j, k;
    double q;
    double eps;
    eps = 10e-16;

    for (i = 0; i < n; i++) {
        if (fabs(a[i][i] <= eps))
            return;
        q = 1.0 / a[i][i];
        a[i][i] = 1.0;
        for (k = 0; k < n; k++)
            a[i][k] *= q;
        for (j = 0; j < n; j++)
            if (i != j) {
                q = a[j][i];
                a[j][i] = 0.0;
                for (k = 0; k < n; k++)
                    a[j][k] -= q * a[i][k];
            }
    }
    delete[] a;
    return;
}*/
void Bioh5::calculate_direct(double* pair_freq,int seqlen,int naa,double *single_freq_do_not_use, Matrix & res,bool dryrun) {
    //Matrix* res=new Matrix(seqlen,seqlen);return *res;
    res.resize(seqlen,seqlen); //return ;
    if(dryrun)return;
    // inverse the pair_freq
    //int gsl_linalg_LU_invert (const gsl_matrix * LU, const gsl_permutation * p, gsl_matrix * inverse)
    double *single_freq=new double[seqlen*naa];
    double pc_weight=0.5;
    for (int i = 0; i < seqlen; i++)
        for (int iaa = 0; iaa < naa; iaa++)
            single_freq[i*naa+iaa]=pair_freq[getPos(i, i, iaa, iaa, seqlen, naa)]*(1.0-pc_weight)+pc_weight/naa;
    int naar=naa-1;
    gsl_matrix *xx = gsl_matrix_alloc(seqlen*naar, seqlen * naar);
    gsl_permutation *ee = gsl_permutation_alloc(seqlen*naar); gsl_permutation_init(ee);
    //gsl_matrix *xxinv = gsl_matrix_alloc(seqlen*naar, seqlen * naar);
            
    for (int i = 0; i < seqlen; i++)
        for (int iaa = 0; iaa < naar; iaa++)
            for (int j = i; j < seqlen; j++)
                for (int jaa = 0; jaa < naar; jaa++) {
                    int p1 = (i * naa + iaa) * seqlen * naa + j * naa + jaa;
                    int p2 = (j * naa + jaa) * seqlen * naa + i * naa + iaa;
                    double p_ij=pair_freq[getPos(i, j, iaa, jaa, seqlen, naa)];
                    if(i==j){
                        if(iaa==jaa)
                            p_ij=p_ij*(1-pc_weight) + pc_weight/naa;
                    }
                    else
                        p_ij=p_ij*(1-pc_weight) + pc_weight/naa/naa;
                    p_ij=p_ij-single_freq[i*naa+iaa]*single_freq[j*naa+jaa];
                    gsl_matrix_set(xx, i * naar + iaa , j * naar + jaa, p_ij);
                    if(j>i)
                        gsl_matrix_set(xx, j * naar + jaa , i * naar + iaa, p_ij);
                }
    Matrix xx1(seqlen*naar,seqlen*naar);
    Matrix xxinv(seqlen*naar,seqlen*naar);
    memcpy(xx1.GetPtr(),xx->data,xxinv.getncol()*xxinv.getnrow()*sizeof(double));
    xx1.get_inversion(xxinv);
    memcpy(xx->data,xxinv.GetPtr(),xxinv.getncol()*xxinv.getnrow()*sizeof(double));
    //tosave.writeh5("test_inv.h5","/data");
    //Matrix xxinv2;
    //tosave.GetInversion(xxinv2);
    //xxinv2.writeh5("test_inv_rs.h5","/data");
    
    //gsl_linalg_LU_invert(xx, ee, xxinv);
    //gsl_linalg_cholesky_decomp(xx);
    //gsl_linalg_cholesky_invert(xx);
    
    //TODO:check lower triangel
    //matrix_inverse(xx->data,seqlen*naar);
    cout<<"Finished inverse\n";
    //tosave.SetPtr(xx->data);
    //tosave.writeh5("test_inv.h5","/data_res_4");
    // xx=exp(-xx)
    // compute mutual information, and hi,hj.
    for (int i = 0; i < seqlen; i++)
        for (int j = 0; j < seqlen; j++) {
            Matrix ww(naa, naa); // working matrix
            ww=1;
            for (int iaa = 0; iaa < naar; iaa++)
                for (int jaa = 0; jaa < naar; jaa++) {
                    //ww[iaa][jaa] = exp(-gsl_matrix_get(xxinv,  i * naa + iaa , j * naa + jaa ));
                    ww[iaa][jaa] = exp(-gsl_matrix_get(xx,  i * naar + iaa , j * naar + jaa ));
                }
            // compute hi hj
            Matrix pi(1, naa);            for (int k = 0; k < naa; k++)pi[0][k] = single_freq[i * naa + k];
            Matrix pj(1, naa);            for (int k = 0; k < naa; k++)pj[0][k] = single_freq[j * naa + k];
            calculate_direct_bp_link(ww, single_freq, i, j, naa, pi, pj);
            res[i][j] = matrix_mi(ww, pi,pj);
        }
    gsl_matrix_free(xx);
    gsl_permutation_free(ee);
    delete[] single_freq;
    //return *res;
}
inline bool myfunction (pair<double,unsigned int> i,pair<double,unsigned> j) {
        return (i.first<j.first);
}

void Bioh5::compute_local_max(const Matrix& xx, int nw,int topn,double theta, Matrix& res)
{
  res.resize(xx.getnrow(),xx.getncol());
  double dd=maxm(xx)-minm(xx);
  int nstep=1;
  for(int i=0; i<xx.getnrow()-nw+1; i=i+nstep)
    for(int j=0; j<xx.getncol()-nw+1; j=j+nstep) {
      //Take-out a submatrix,sort all the elements, and find the max one and all sub
      //compute max
      double submin,submax;

      vector<pair<double,unsigned int> > ss=submatrix_value_index(xx,i,i+nw-1,j,j+nw-1);
      sort(ss.begin(),ss.end(),myfunction);
      if(ss[ss.size()-1].first-ss[0].first>theta*dd)
        for(int k3=ss.size()-topn; k3<ss.size(); k3++)
          *(res.GetPtr()+ss[k3].second)=1;
    }
}
/**
 * Translated from computeRoot2.m %find the root of y+y^2=xx
 * @param xx, the input matrix
 * @param a
 * @param b
 * @param res
 */
void Bioh5::compute_root2(Matrix& xx,double a,double b,Matrix & res)
{

  Matrix ee;
  
  ee.EyeMat(xx.getnrow());
  res.resize(xx.getnrow(),xx.getncol());
  Matrix ee1;
  ee1=xx+ee*a;
  //ee1.Dlmwrite("testroot1.csv");
  sqrtm(ee1, res);
  //res.Dlmwrite("testroot2.csv");exit(-1);
  res=res-ee*b;
}



int Bioh5::read_pair_aa_frequency(string dsname)
{
  //read the 4D matrix of pair AA frequency values.
  //res[i][j][a][b] means the frequence of AA (a,b) at position (i,j)
  DataSet* dataset;
  try {
    dataset = new DataSet( file->openDataSet(dsname)); //dist_1 for cb distance
    hsize_t dims[4]; 	// dataset dimensions
    DataSpace filespace = dataset->getSpace(); // dataspace of data in file, also used to define submatrix to be read.
    int rank = filespace.getSimpleExtentDims( dims ); // We can read chunked stored file with using chunk paramters. Actually chunk_dims == dims. I am not sure why.
    DataSpace mspace1( rank, dims );
    pairFreq=new double[dims[0]*dims[1]*dims[2]*dims[3]];
    seqlen=dims[0];
    naatype=dims[2];
    dataset->read( pairFreq, PredType::NATIVE_DOUBLE, mspace1, filespace );
    dataset->close();
  } catch( FileIException error )  {
    error.printError();
    return -1;
  }  // catch failure caused by the DataSet operations
  catch( DataSetIException error )  {
    error.printError();
    return -1;
  }  // catch failure caused by the DataSpace operations
  catch( DataSpaceIException error )  {
    error.printError();
    return -1;
  }
  
  return 0;
}

int Bioh5::compute_singlefreq(){
    //wrong,  Do not use.
  //From pair frequence, compute single frequency values.
  //This also add a value to Pij(i,i,alpha,alpha).
  singleFreq=new double[seqlen*naatype];
  compute_singlefreq(pairFreq,seqlen,naatype,singleFreq);
for(int i=0;i<seqlen;i++){
    for(int j=0;j<naatype;j++){
      //pairFreq[((i*seqlen+i)*naatype+j)*naatype+j]=singleFreq[i*naatype+j];
    }
  }
  return 0;
}

int Bioh5::compute_singlefreq(const double* p2,int seqlen,int q,double* p1){
    // wrong, do not use.
    //A parameter version.
  //From pair frequence, compute single frequency values.
  //This also add a value to Pij(i,i,alpha,alpha).
  //singleFreq=new double[seqlen*naatype];
  for(int i=0;i<seqlen;i++){
    for(int j=0;j<q;j++){
      p1[i*q+j]=0;
      //Just find another residue j1 to compute the frequencies on residue i.
      if(i<seqlen-1)
        for(int j1=0;j1<q;j1++)
          p1[i*q+j]+=p2[((i*seqlen+(i+1))*q+j)*q+j1];
      if(i==seqlen-1)
        for(int j1=0;j1<q;j1++)
          p1[i*q+j]+=p2[(((i-1)*seqlen+i)*q+j1)*q+j];
    }
  }
  return 0;
}

int Bioh5::read_dist(string dsname)  // Move this to bioh5 some time.
{
  //check if the H5 file/data group exists
  DataSet* dataset;
  try {
    dataset = new DataSet( file->openDataSet(dsname)); //dist_1 for cb distance
    hsize_t dims[2]; 	// dataset dimensions
    DataSpace filespace = dataset->getSpace(); // dataspace of data in file, also used to define submatrix to be read.
    int rank = filespace.getSimpleExtentDims( dims ); // We can read chunked stored file with using chunk paramters. Actually chunk_dims == dims. I am not sure why.

    DataSpace mspace1( rank, dims );
    dist_1.resize(dims[0],dims[1]);
    double *x=new double[dims[0]*dims[1]];
    dataset->read(x, PredType::NATIVE_DOUBLE, mspace1, filespace );
    dist_1.SetPtr(x);
    dataset->close();
  } catch( FileIException error )  {
    error.printError();
    return -1;
  }  // catch failure caused by the DataSet operations
  catch( DataSetIException error )  {
    error.printError();
    return -1;
  }  // catch failure caused by the DataSpace operations
  catch( DataSpaceIException error )  {
    error.printError();
    return -1;
  }
  return 0;
}


int Bioh5::read_seq(string dsname)  // Move this to bioh5 some time.
{
  //check if the H5 file/data group exists
  DataSet* dataset;
  try {
    dataset = new DataSet( file->openDataSet(dsname)); //dist_1 for cb distance
    hsize_t dims[1]; 	// dataset dimensions
    DataSpace filespace = dataset->getSpace(); // dataspace of data in file, also used to define submatrix to be read.
    int rank = filespace.getSimpleExtentDims( dims ); // We can read chunked stored file with using chunk paramters. Actually chunk_dims == dims. I am not sure why.
    DataSpace mspace1( rank, dims );
    seqlen=dims[0];
    seqres_seq=new int[seqlen];
    dataset->read(seqres_seq, PredType::NATIVE_INT, mspace1, filespace );
    dataset->close();
  } catch( FileIException error )  {
    error.printError();
    return -1;
  }  // catch failure caused by the DataSet operations
  catch( DataSetIException error )  {
    error.printError();
    return -1;
  }  // catch failure caused by the DataSpace operations
  catch( DataSpaceIException error )  {
    error.printError();
    return -1;
  }
  return 0;
}



void Bioh5::fasta2hdf5(string fn1,double* aln,int seqlen)
{
  H5File *file;
  try{
    file = new H5File( fn1, H5F_ACC_EXCL );
  }catch(FileIException error ){
    file = new H5File( fn1, H5F_ACC_RDWR );
  }
  hsize_t dims[]={seqlen,seqlen,21,21};
  //    hsize_t dims[]={2,2,2,2};
  //  double aln1[seqlen][seqlen][21][21];
  //double* aln1=new double[seqlen*seqlen*21*21];
  hsize_t cdims[]={seqlen,seqlen,21,21};
  
	DataSpace dataspace(4,dims); // create new dspace
  DSetCreatPropList plist;
  plist.setChunk(4,dims);
  plist.setDeflate(6);
      try {
        Group* group = new Group(file->createGroup("/Data"));
    } catch (FileIException e) {
    }
  DataSet dataset;
  try{
    dataset =file->createDataSet("/Data/pairFrequency", PredType::NATIVE_DOUBLE,dataspace,plist);
  }catch(FileIException e){
    dataset =file->openDataSet("/Data/pairFrequency"); //The results have been manually checked  with that of compute_di.m
  }
  dataset.write(aln,PredType::NATIVE_DOUBLE,dataspace,dataspace);
  file->close();
}

void Bioh5::fasta2hdf5_add_weight(string fn1,vector<double>& sequence_weight)
{
  int nseq=sequence_weight.size();
  H5File *file;
        try {
            file = new H5::H5File(fn1, H5F_ACC_EXCL);
        } catch (H5::FileIException error) {
            file = new H5::H5File(fn1, H5F_ACC_RDWR);
        }

  hsize_t dims[]={nseq};
  hsize_t cdims[]={nseq};
	DataSpace dataspace(1,dims); // create new dspace
  DSetCreatPropList plist;
  plist.setChunk(1,dims);
  plist.setDeflate(6);
  DataSet dataset;
    try {
        Group* group = new Group(file->createGroup("/Data"));
    } catch (FileIException e) {
    }
  try
  {    
    dataset =file->createDataSet("/Data/sequence_weight_hamming", PredType::NATIVE_DOUBLE,dataspace,plist);
  } catch(FileIException e)
  {
    dataset =file->openDataSet("/Data/sequence_weight_hamming");
  }
  dataset.write(sequence_weight.data(),PredType::NATIVE_DOUBLE,dataspace,dataspace); // Be carefule, the size of dataset is unchanged.
  file->close();//H5close(file);
}


double* Bioh5::getPairFreq(vector<vector<int> > aln, int alnlen, int nseq, int& seqlen, vector<double>& seqweight) {
    //aln: msa in simple format, aln[i][j] is the amino acid of sequence i at poistion j
    //res: return res[i,1..seqlen][j,1..seqlen][1..20]:=freqeuncy
    //AAnum

    int h = 0;
    int res2alnpos[alnlen];
    for (int i = 0; i < alnlen; i++) {
        if (aln[0][i] != '-') {
            res2alnpos[h] = i;
            h++;
        }
    }
    fprintf(stderr,"seqlen %d seqlen without - %d\n",seqlen,h);
    seqlen = h;
    
    double* res = NULL;

    int reslen = getPos(seqlen - 1, seqlen - 1, 21 - 1, 21 - 1, seqlen, 21);
    if (res != NULL)
        delete[] res;
    try {
        res = new double[reslen + 1];
        //     res=new float***[seqlen];
        //     for(int i=0;i<seqlen;i++){
        //       res[i]=new float**[seqlen];
        //       for(int j=0;j<seqlen;j++){
        //         res[i][j]=new float*[21];
        //         for(int k=0;k<21;k++){
        //           res[i][j][k]=new float[21];
        //           for(int l=0;l<21;l++)        
        //           res[i][j][k][l]=0;
        //         }
        //       }
        //     }
    } catch (bad_alloc& ba) {
        cerr << "bad_alloc caught: " << ba.what() << endl;
    }
    float nseqInv = 1.0 / nseq; //no weight is considered.
    double sumweight = 0;
    for (int i = 0; i < nseq; i++)
        sumweight += seqweight[i];
    for (int n = 0; n < nseq; n++) {
        double w = seqweight[n] / sumweight;
        for (int i = 0; i < seqlen; i++) {
            //
            for (int j = i + 1; j < seqlen; j++) {
                int ii = res2alnpos[i];
                int jj = res2alnpos[j];
                int aa = aln[n][ii];
                int bb = aln[n][jj];
                int pa = AAChar2NumAln[aa];
                int pb = AAChar2NumAln[bb];
                if (pa < 0)pa = 20;
                if (pb < 0)pb = 20;
                int pos = getPos(i, j, pa, pb, seqlen, 21);
                if (pos >= 0) {
                    res[pos] += w;
                }
                //        res[i][j][AAChar2NumAln[aa]][AAChar2NumAln[bb]]=res[i][j][AAChar2NumAln[aa]][AAChar2NumAln[bb]]+nseqInv;
            }
        }
    }
    // Add single frequency to the diagnal
    //if (singleFreq != NULL)
        for (int n = 0; n < nseq; n++) {
            double w = seqweight[n] / sumweight;
            for (int i = 0; i < seqlen; i++) {
                //for (int pa= 0; pa<21 ; pa++){
                int ii = res2alnpos[i];
                int aa = aln[n][ii];
                int pa = AAChar2NumAln[aa];

                int pos = getPos(i, i, pa, pa, seqlen, 21);
                if (pos >= 0) {
                    res[pos] += w ; // singleFreq[i*seqlen + pa];
                }
                //}
            }
        }
    return res;

}

//Compute similarity between aligned sequences, by HAMMing distance and by Blosum62 scores.

double Bioh5::compute_sequence_similarity(vector<int> & seq1, vector<int> & seq2, string type) {
    if (seq1.size() != seq2.size())return -1; //same length or well aligned.
    double res;
    if (type == "hamming") {
        //compute hamming distance
        double nmatch = 0;
        for (int i = 0; i < seq1.size(); i++) {
            if (seq1[i] != seq2[i])// && seq1[i]!=AAChar2NumAln['-'] )
                nmatch++;
        }
        res = nmatch / seq1.size();
    }
    if (type == "blosum62") {
        //sum blosum(a(i),b(i)), a(i),b(i) are two amino acids from two sequences in the alignment.
    }
    return res;
}

vector<double> Bioh5::compute_sequence_weight(vector<vector<int> > aln, double theta) {
    //  W = (1./(1+sum(squareform(pdist(encoded_focus_alignment, 'hamm')<theta))));
    int nseq = aln.size();
    vector<double> seqSimi(nseq, 1);
    //seqSimi=new double[nseq*nseq];
    //for(int i=0; i<nseq*nseq; i++) seqSimi[i]=0;
    for (int i = 0; i < nseq; i++)
        for (int j = i + 1; j < nseq; j++) {
            double wij = compute_sequence_similarity(aln[i], aln[j], "hamming");
            if (wij < theta)
                wij = 1;
            else
                wij = 0;
            seqSimi[i] = seqSimi[i] + wij;
            seqSimi[j] = seqSimi[j] + wij;
        }
    for (int i = 0; i < nseq; i++)
        seqSimi[i] = 1.0 / seqSimi[i];
    return seqSimi;
}

unsigned long Bioh5::getPos(int i, int j, int aa, int bb, int seqlen, int naa) {
    //naa: number of amino acid types
    return (i * seqlen + j)*naa * naa + aa * naa + bb;
}

vector<vector<int> > Bioh5::readSimpleFasta(const string& fn) {
    //the returned alignment is represented by integer matrix.
  // The amino acid returned is coded as chars.
    std::ifstream ifs(fn.c_str());
    int nseq = 0;
    vector<vector<int> > res;
    vector<int> seq0;

    while (ifs.good()) {
        string buf;
        std::getline(ifs, buf);

        if (buf.length() > 0) {
            if (buf[0] != '>') {
                for (int j = 0; j < buf.length(); j++)
                    seq0.push_back(buf[j]);
                if (!ifs.good())res.push_back(seq0);
            } else {
                if (seq0.size() > 0)
                    res.push_back(seq0);
                seq0.clear();
                nseq++;
            }
        }else if(seq0.size()>0){
            res.push_back(seq0);
            seq0.clear();
        }
    }
    if(seq0.size()>0){
        res.push_back(seq0);
        seq0.clear();
    }
    printf("res size %d %d\n", res.size(),res[0].size());
    nseq++;
    ifs.close();
    return res;

}

/**
 * AddPairFeature will compute the feature for each pair of position, and write it into a dataset in the bioh5.
 */
// Add condition atom is not available.
void Bioh5::ReadDopeMatrix(string fn, string atom, Matrix3<double> & res)
{
  res.resize(26,26,30);
  ifstream fin(fn.c_str(), std::ifstream::in);
  while(fin.good())
  {
    string ll;
    std::getline(fin,ll) ;
    if(ll=="")continue;
    
    vector<string> onepair = matrixStringSplit(ll," ");

    int aa1,aa2;
    //    cerr<<onepair[1]<<" "<<onepair[4]<<" "<<ll <<endl;
    
    if(onepair[1]!=atom or onepair[4] != atom)
      continue;
    aa1=AA3toAAcode(onepair[0].c_str());
    aa2=AA3toAAcode(onepair[3].c_str());
    for( int i=0 ;i< 30; i++)
      res[aa1][aa2][i]=atof(onepair[i+6].c_str());
  }
  res.Dlmwrite("test-dope.txt");
  
}


void Bioh5::CalcPairPositionFeature(const vector<int> & seq, Matrix3<double> & pairAminoAcidMatrix, const string & featureName, Matrix3<double>& pairPositionFeature)
{
  // TODO: 1. find dope matrix, read it to mem. 2. read sequence, 3. how many features like this. 4. position and name in the whole feature3D.
  // Add feature len, and feature name in bioh5.
  pairPositionFeature.resize(seq.size(),seq.size(),30);
  for(int i=0;i<seq.size();i++)
  {
      for(int j=i;j<seq.size();j++)
      {
	for(int findex=0;findex<30;findex++)
	  pairPositionFeature[i][j][findex]=pairAminoAcidMatrix[seq[i]][seq[j]][findex];
      }
  }
}


// 300 reserved.
// 0-29: dope
void Bioh5::WritePairPositionFeature(int seqlen, string h5file, Matrix3<double> & feature, string dataset, unsigned int startFeatureIndex)
{
  Matrix3<double> buffer(seqlen,seqlen, 300);
  for(int i=0;i<seqlen;i++)
  {
      for(int j=i;j<seqlen;j++)
      {
	for(int findex=0;findex<feature.getd3();findex++)
	  buffer[i][j][startFeatureIndex+findex]=feature[i][j][findex];
      }
  }
  buffer.writeh5(h5file, "/Data/pairPositionFeature");
}



