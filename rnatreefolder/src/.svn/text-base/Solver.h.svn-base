#ifndef SOLVER_H
#define SOLVER_H

#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <ctime>
#include <time.h>

#include <cstdlib>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <sys/stat.h>
//#include "../../geo/rnageo.h"
//#include "../../geo/geometry.h"
//#include "rmsdp.h"
//#include "rs.h"
using namespace std;
template <class D> class linMatrix;
class FuncWrapper;
class linVector {


public:
  linVector(){this->p=NULL;}
  ~linVector(){if(p!=NULL)delete[] p;}
  linVector(int d){
    dim=d;
    p=new double[dim];
    memset(p,0,sizeof(double)*dim);
  }
  linVector(const linVector &a){
    dim=a.dim;
    p=new double[dim];
    memcpy(p,a.p,sizeof(double)*dim);
  }

  double norm()
  {
    double rr=0;
    for(int i=0;i<dim;i++)
      rr=rr+p[i]*p[i];
    return sqrt(rr);
  }
  void print(){
    for(int i=0;i<dim;i++)
      cerr<<p[i]<<" ";
    cerr<<endl;
  }

  int dim;
  double *p;

  linVector & operator=(const linVector &other){
    if(p!=NULL)  delete[] p;
    p=new double[other.dim];
    dim=other.dim;
    memcpy(p, other.p, dim*sizeof(double));
  }
  
  linVector & operator=(const vector<double> &other){
    if(p!=NULL)  delete[] p;
    p=new double[other.size()];
    dim=other.size();
    for(int i=0;i<dim;i++)
    {
      p[i]=other[i];
    }
  }
  
  double &operator[](const int i){
    if(i>=0 && i<dim && p!=NULL)
      return p[i];
    else
      cerr<<"Out of range\n";
  }
  
friend linVector operator-(const linVector& a,const linVector& b){
  if(a.dim==b.dim && a.p!=NULL && b.p!=NULL)
  {
    linVector rr(a.dim);
    for(int i=0;i<a.dim;i++)
      rr.p[i]=a.p[i]-b.p[i];
    return rr;
  }
  else
    cerr<<"Minus error\n";
}

friend double operator*(const linVector& a,const linVector& b){
  double r=0;
  if(a.dim==b.dim && a.p!=NULL && b.p!=NULL)
  {

    for(int i=0;i<a.dim;i++)
      r+=a.p[i]*b.p[i];
    return r;
  }
  else
    cerr<<"Inner product error\n";
}
  
friend linVector operator-(const linVector b){
  if( b.p!=NULL)
  {
    linVector rr(b.dim);
    for(int i=0;i<b.dim;i++)
      rr.p[i]=-b.p[i];
    return rr;
  }
  else
    cerr<<"Minus error\n";
}

friend linVector operator+(const linVector& a,const linVector b){
  if(a.dim==b.dim && a.p!=NULL && b.p!=NULL)
  {
    linVector rr(a.dim);
    for(int i=0;i<a.dim;i++)
      rr.p[i]=a.p[i]+b.p[i];
    return rr;
  }
  else
    cerr<<"vector plus vector error\n";
}
  
friend linVector operator*(const linVector& a, const double b){
  linVector rr(a.dim);
  for(int i=0;i<rr.dim;i++)
    rr[i]=a.p[i]*b;
  return rr;
}
  
friend linVector operator*( const double b,const linVector& a){
  linVector rr(a.dim);
  for(int i=0;i<rr.dim;i++)
    rr[i]=a.p[i]*b;
  return rr;
}
friend linVector operator/(const linVector& a, const double b){
  linVector rr(a.dim);
  for(int i=0;i<rr.dim;i++)
    rr[i]=a.p[i]/b;
  return rr;
}


  static double norm(linVector *a,linVector *b){
    double rr=0;
    if(a->dim !=b->dim)
    {
      cerr<<"Not same length\n";
    }
    else{
      for(int i=0;i<a->dim;i++)
	rr+=(a->p[i] - b->p[i])*(a->p[i] - b->p[i]);
    }
    return sqrt(rr);
  }

  vector<double> getvector()
  {
    vector<double> res(dim);
    for(int i=0;i<dim;i++)
      res[i]=p[i];
    return res;
  }

  static linVector Cross(const linVector& a,const linVector& b){
    if(a.dim == 3 && b.dim ==3)
    {
      linVector rr(a.dim);
      rr[0]=a.p[1]*b.p[2]-a.p[2]*b.p[1];
      rr[1]=a.p[2]*b.p[0]-a.p[0]*b.p[2];
      rr[2]=a.p[0]*b.p[1]-a.p[1]*b.p[0];
      return rr;
    }
    else{cerr<<"cross product error\n";}
  }
};

class CordSys
{
public:
  linVector p[3];
  linVector center;
  CordSys(){//p=NULL;
};
  CordSys(const CordSys & other)
  {
    if(p!=NULL)
      delete[] p;
    center=other.center;
    //    p=new linVector[3];
    p[0]=other.p[0];
    p[1]=other.p[1];
    p[2]=other.p[2];
  }
  CordSys(const linVector&a,const linVector&b,const linVector&c)
  {
    center=b;
    //    p=new linVector[3];
    for(int i=0;i<3;i++)
      p[i]=linVector(3);
    p[0]=(b-a);
    p[0]=p[0]/p[0].norm();
    p[1]=(c-b)-((c-b)*(b-a))*(b-a);
    p[1]=p[1]/p[1].norm();
    p[2]=linVector::Cross(p[0],p[1]);
  };
  ~CordSys(){
//     if(p!=NULL)
//       delete[] p;
  };

  linVector GetCoef(const linVector &a)
  {
    linVector res(3);
    linVector ashift=a-center;
    for(int i=0;i<3;i++)
      res[i]=ashift*p[i];
    return res;
  }

  linVector GetRealVector(const linVector &a)
  {
    linVector res(3);
    res=center;
    for(int i=0;i<3;i++)
       res=res+a.p[i]*p[i];

    return res;
  }

};


class Solver
{
 public:
  Solver(){
    vector<double> posinf(3,1e20);
    vector<double> neginf(3,-1e20);
    this->lowBound=neginf;
    this->upBound=posinf;
  };
  ~Solver(){};
  //  void SecantSolve(linVector (*FuncWrapper::f)(linVector),linMatrix <double> (*df)(linVector),linVector x0,linVector &ans, double tol,int maxIter);
  linVector lowBound;
  linVector upBound;

  
  void SecantSolve(FuncWrapper& fw,linVector& x0,linVector &ans, double tol,int maxIter);

};
//#ifndef __mjdmatrix_h
//#define __mjdmatrix_h

// generic object (class) definition of matrix:
template <class D> class linMatrix{
  // NOTE: maxsize determines available memory storage, but
  // actualsize determines the actual size of the stored matrix in use
  // at a particular time.
  int maxsize;  // max number of rows (same as max number of columns)
  int actualsize;  // actual size (rows, or columns) of the stored matrix
  D* data;      // where the data contents of the matrix are stored
  void allocate()   {
    delete[] data;
    data = new D [maxsize*maxsize];
    };
  linMatrix() {};                  // private ctor's
  linMatrix(int newmaxsize) {linMatrix(newmaxsize,newmaxsize);};
public:
  linMatrix(int newmaxsize, int newactualsize)  { // the only public ctor
    if (newmaxsize <= 0) newmaxsize = 5;
    maxsize = newmaxsize; 
    if ((newactualsize <= newmaxsize)&&(newactualsize>0))
      actualsize = newactualsize;
    else 
      actualsize = newmaxsize;
    // since allocate() will first call delete[] on data:
    data = 0;
    allocate();
    };
  linMatrix(const linMatrix &a)
  {
    maxsize=a.maxsize;  // max number of rows (same as max number of columns)
    actualsize=a.actualsize;  // actual size (rows, or columns) of the stored matrix
    data=0;
    allocate();
    for(int i=0;i<maxsize*maxsize;i++)
      data[i]=a.data[i];      // where the data contents of the matrix are stored
  }
  linMatrix(const linVector& col1, const linVector& col2,const linVector& col3)
  {
    maxsize=3;
    actualsize=3;
    data=NULL;
    allocate();

      item(0,0)=col1.p[0];
      item(0,1)=col2.p[0];
  item(0,2)=col3.p[0];
  item(1,0)=col1.p[1];
  item(1,1)=col2.p[1];
  item(1,2)=col3.p[1];
  item(2,0)=col1.p[2];
  item(2,1)=col2.p[2];
  item(2,2)=col3.p[2];

  }
  ~linMatrix() {
    if(data!=NULL)
      delete[] data; 
  };

  void print(){
    for(int i=0;i<actualsize;i++){
    for(int j=0;j<actualsize;j++)
      cerr<<item(i,j)<<" ";
    cerr<<endl;
    };
  }


  friend linVector operator*( linMatrix  mm, const linVector vv){
    linVector rr(vv.dim);
    for(int i=0;i<vv.dim;i++)
    {
      for(int j=0;j<vv.dim;j++)
      {
	rr[i]+=mm.getitem(i,j)*vv.p[j];
      }
    }
    return rr;
  }

  D &item(int i,int j)
  {
    if(0<=i && i<actualsize && j>=0 && j< actualsize)
    {
      return data[i*actualsize+j];
    }
    else {
      cerr<<"matrix out of range\n";
      getchar();
    }
  }

  D getitem(int i,int j)
  {
    if(0<=i && i<actualsize && j>=0 && j< actualsize)
    {
      return *(data+i*actualsize+j);
    }
    else {
      cerr<<"matrix out of range\n";
      getchar();
    }
  }


  void comparetoidentity()  {
    int worstdiagonal = 0;
    D maxunitydeviation = 0.0;
    D currentunitydeviation;
    for ( int i = 0; i < actualsize; i++ )  {
      currentunitydeviation = data[i*maxsize+i] - 1.;
      if ( currentunitydeviation < 0.0) currentunitydeviation *= -1.;
      if ( currentunitydeviation > maxunitydeviation )  {
           maxunitydeviation = currentunitydeviation;
           worstdiagonal = i;
           }
      }
    int worstoffdiagonalrow = 0;
    int worstoffdiagonalcolumn = 0;
    D maxzerodeviation = 0.0;
    D currentzerodeviation ;
    for ( int i = 0; i < actualsize; i++ )  {
      for ( int j = 0; j < actualsize; j++ )  {
        if ( i == j ) continue;  // we look only at non-diagonal terms
        currentzerodeviation = data[i*maxsize+j];
        if ( currentzerodeviation < 0.0) currentzerodeviation *= -1.0;
        if ( currentzerodeviation > maxzerodeviation )  {
          maxzerodeviation = currentzerodeviation;
          worstoffdiagonalrow = i;
          worstoffdiagonalcolumn = j;
          }

        }
      }
    cout << "Worst diagonal value deviation from unity: " 
       << maxunitydeviation << " at row/column " << worstdiagonal << endl;
    cout << "Worst off-diagonal value deviation from zero: " 
       << maxzerodeviation << " at row = " << worstoffdiagonalrow 
       << ", column = " << worstoffdiagonalcolumn << endl;
  }
  void settoproduct(linMatrix& left, linMatrix& right)  {
    actualsize = left.getactualsize();
    if ( maxsize < left.getactualsize() )   {
      maxsize = left.getactualsize();
      allocate();
      }
    for ( int i = 0; i < actualsize; i++ )
      for ( int j = 0; j < actualsize; j++ )  {
        D sum = 0.0;
        D leftvalue, rightvalue;
        bool success;
        for (int c = 0; c < actualsize; c++)  {
            left.getvalue(i,c,leftvalue,success);
            right.getvalue(c,j,rightvalue,success);
            sum += leftvalue * rightvalue;
            }
        setvalue(i,j,sum);
        }
    }
  void copymatrix(linMatrix&  source)  {
    actualsize = source.getactualsize();
    if ( maxsize < source.getactualsize() )  {
      maxsize = source.getactualsize();
      allocate();
      }
    for ( int i = 0; i < actualsize; i++ )
      for ( int j = 0; j < actualsize; j++ )  {
        D value;
        bool success;
        source.getvalue(i,j,value,success);
        data[i*maxsize+j] = value;
        }
    };
  void setactualsize(int newactualsize) {
    if ( newactualsize > maxsize )
      {
        maxsize = newactualsize ; // * 2;  // wastes memory but saves
                                      // time otherwise required for
                                      // operation new[]
        allocate();
      }
    if (newactualsize >= 0) actualsize = newactualsize;
    };
  int getactualsize() { return actualsize; };
  void getvalue(int row, int column, D& returnvalue, bool& success)   {
    if ( (row>=maxsize) || (column>=maxsize) 
      || (row<0) || (column<0) )
      {  success = false;
         return;    }
    returnvalue = data[ row * maxsize + column ];
    success = true;
    };
  bool setvalue(int row, int column, D newvalue)  {
    if ( (row >= maxsize) || (column >= maxsize) 
        || (row<0) || (column<0) ) return false;
    data[ row * maxsize + column ] = newvalue;
    return true;
    };
  void invert()  {
    if (actualsize <= 0) return;  // sanity check
    if (actualsize == 1) return;  // must be of dimension >= 2
    for (int i=1; i < actualsize; i++) data[i] /= data[0]; // normalize row 0
    for (int i=1; i < actualsize; i++)  { 
      for (int j=i; j < actualsize; j++)  { // do a column of L
        D sum = 0.0;
        for (int k = 0; k < i; k++)  
            sum += data[j*maxsize+k] * data[k*maxsize+i];
        data[j*maxsize+i] -= sum;
        }
      if (i == actualsize-1) continue;
      for (int j=i+1; j < actualsize; j++)  {  // do a row of U
        D sum = 0.0;
        for (int k = 0; k < i; k++)
            sum += data[i*maxsize+k]*data[k*maxsize+j];
        data[i*maxsize+j] = 
           (data[i*maxsize+j]-sum) / data[i*maxsize+i];
        }
      }
    for ( int i = 0; i < actualsize; i++ )  // invert L
      for ( int j = i; j < actualsize; j++ )  {
        D x = 1.0;
        if ( i != j ) {
          x = 0.0;
          for ( int k = i; k < j; k++ ) 
              x -= data[j*maxsize+k]*data[k*maxsize+i];
          }
        data[j*maxsize+i] = x / data[j*maxsize+j];
        }
    for ( int i = 0; i < actualsize; i++ )   // invert U
      for ( int j = i; j < actualsize; j++ )  {
        if ( i == j ) continue;
        D sum = 0.0;
        for ( int k = i; k < j; k++ )
            sum += data[k*maxsize+j]*( (i==k) ? 1.0 : data[i*maxsize+k] );
        data[i*maxsize+j] = -sum;
        }
    for ( int i = 0; i < actualsize; i++ )   // final inversion
      for ( int j = 0; j < actualsize; j++ )  {
        D sum = 0.0;
        for ( int k = ((i>j)?i:j); k < actualsize; k++ )  
            sum += ((j==k)?1.0:data[j*maxsize+k])*data[k*maxsize+i];
        data[j*maxsize+i] = sum;
        }
    };

};




class FuncWrapper{
public:
  FuncWrapper(linVector& p_v0, linVector& p_Nn1, linVector& p_va,double p_a0,double p_a1,double p_a2,double p_l1,double p_l2,double p_l3){
    a0=p_a0;
    a1=p_a1;
    a2=p_a2;
    l1=p_l1;
    l2=p_l2;
    l3=p_l3;
    v0=p_v0;
    va=p_va;
    Nn1=p_Nn1;
    nNn1=p_Nn1/Nn1.norm();
    nV0=p_v0/v0.norm();
    nV0Nn1=linVector::Cross(nV0,nNn1);
    v1=v0;
    v2=v0;
    v3=v0;
};
  ~FuncWrapper(){
    //    delete v1;//,v2,v3,v0,Nn1,nNn1,nV0,nV0Nn1,va;
};
  linVector f(linVector& xx);

  linMatrix<double> df(linVector& xx);
  void print(){
    v0.print();
    Nn1.print();
    cerr<<Nn1.dim<<endl;
    cerr<<v0.norm();
    nNn1.print();
    nV0.print();
    nV0Nn1.print();
    va.print();
    printf("%f,%f,%f,%f,%f,%f\n", a0,a1,a2,l1,l2,l3);
  }
  linVector v1,v2,v3;
  //private:
  linVector v0,Nn1,nNn1,nV0,nV0Nn1,va;
  double a0,a1,a2,l1,l2,l3;
};

#endif
