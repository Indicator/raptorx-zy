#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<math.h>
#include<string.h>


using namespace std;

const double PI=3.1415926;

void outprod(const double *x,const double *y,double *result)
{
  //  result[3];
  result[0]=x[1]*y[2]-x[2]*y[1];
  result[1]=x[2]*y[0]-x[0]*y[2];
  result[2]=x[0]*y[1]-x[1]*y[0];
}

vector<double> outprod(vector<double> x,vector<double> y)
{ 
  vector<double> result(3,0);
  result[0]=x[1]*y[2]-x[2]*y[1];
  result[1]=x[2]*y[0]-x[0]*y[2];
  result[2]=x[0]*y[1]-x[1]*y[0];
  return result;
}


double innerprod(const double *x,const double *y)
{
  double res=0;
  for(int j=0;j<3;j++)
  {
    res+=x[j]*y[j];
  }
  return res;
}

double innerprod(vector<double> x,vector<double> y)
{
  double res=0;
  for(int j=0;j<3;j++)
  {
    res+=x[j]*y[j];
  }
  return res;
}

double norm(const double *x)
{
  return sqrt(innerprod(x,x));
  
}

double dist(const double *x,const double *y)
{
  return sqrt((x[0]-y[0])*(x[0]-y[0]) +
              (x[1]-y[1])*(x[1]-y[1]) +
              (x[2]-y[2])*(x[2]-y[2]));
}

double dist(vector<double> x,vector<double> y)
{
  return sqrt((x[0]-y[0])*(x[0]-y[0]) +
              (x[1]-y[1])*(x[1]-y[1]) +
              (x[2]-y[2])*(x[2]-y[2]));
}


double norm(vector<double> x)
{
  double rslt=0;
  for(int i=0;i<x.size();i++)
  {
    rslt+=x[i]*x[i];
  }
  return sqrt(rslt);
}

void vecnormalize(vector<double> *x)
{
  double n=norm(*x);
  for(int i=0;i<x->size();i++)
  {
    (*x)[i]=(*x)[i]/n;
  }
}

void normlize(vector<double> &x)
{
  double n=norm(x);
  for(int i=0;i<x.size();i++)
  {
    x[i]=x[i]/n;
  }
}


void normlize(double *x)
{
  double n=norm(x);
  for(int j=0;j<3;j++)
  {
    x[j]=x[j]/n;
  }
}

void normlize(const double *x,double *unitx)
{
  double n=norm(x);
  for(int j=0;j<3;j++)
  {
    unitx[j]=x[j]/n;
  }
}

inline void vecminus(const double *x, const double *y, double *r)
{
  //vec x- vec y
  for(int j=0;j<3;j++)
  {
    r[j]=x[j]-y[j];
  }
  
}

inline double vecangle(const double *dr1, const double *dr2)
{
  //planar angle between vec x- vec y
    double n1=norm(dr1);
    double n2=norm(dr2);
    double in=innerprod(dr1,dr2);
    double backangle=in/n1/n2;
    backangle=backangle>1?1-0.00001:backangle;
    backangle=backangle<-1?-1+0.00001:backangle;
    backangle=acos(backangle);

    return backangle;
}



void parcompo(const double *x, const double *y, double *yparcompo)
{
  double c=innerprod(x,y)/norm(x);
  for(int j=0;j<3;j++)
  {
    yparcompo[j]=c*x[j];
  }
}

void vercompo(const double *x, const double *y, double *yvercompo)
{
  double c=innerprod(x,y)/norm(x);
  for(int j=0;j<3;j++)
  {
    yvercompo[j] = y[j] - c*x[j];
  }
}
vector<double> vercompo(vector<double> x, vector<double> y)
{
  vector<double>  yvercompo(3,0);
  double c=innerprod(x,y)/norm(x);
  for(int j=0;j<3;j++)
  {
    yvercompo[j] = y[j] - c*x[j];
  }
  return yvercompo;
}




void rotate(double *a, const double *x, const double *y, const double *z)
{
  //x, y, z should be unit vectors which are perpendicular to each other.
  double x1=innerprod(a,x);
  double x2=innerprod(a,y);
  double x3=innerprod(a,z);
  a[0]=x1;
  a[1]=x2;
  a[2]=x3;
}

vector<double> vecscale(vector<double> x, double s)
{
  vector<double> rslt(x.size(),0);
  for(int i=0;i<x.size();i++)
  {
    rslt[i]=x[i]*s;
  }
  return rslt;
}

vector<double> vecplus(vector<double> x, vector<double> y)
{
  vector<double> rslt(x.size(),0);
  for(int i=0;i<x.size();i++)
  {
    rslt[i]=x[i]+y[i];
  }
  return rslt;
  
}

vector<double> vecminus(vector<double> x, vector<double> y)
{
  vector<double> rslt(x.size(),0);
  for(int i=0;i<x.size();i++)
  {
    rslt[i]=x[i]-y[i];
  }
  return rslt;
  
}

double vecdist(vector<double> x, vector<double> y)
{
  double rslt=0;
  for(int i=0;i<x.size();i++)
  {
    rslt+=(x[i]-y[i])*(x[i]-y[i]);
  }
  rslt=sqrt(rslt);
  return rslt;
}

double angle(const double *px)
{
  double o[3];
  double x[3];
  double y[3];
  for(int i=0;i<3;i++)
  {
    o[i]=px[i+3];
  }
  for(int i=0;i<3;i++)
  {
    x[i]=px[i]-o[i];
  }
  for(int i=0;i<3;i++)
  {
    y[i]=px[i+6]-o[i];
  }
  double rst=0;
  rst+=innerprod(x,y);
  rst=rst/norm(x)/norm(y);
  return acos(rst);
}

double torsion(const double *px)
{//x contains 4 consecutive atoms' cordinats
  double o[3];
  double x[3];
  double y[3];
  double z[3];
  for(int i=0;i<3;i++)
  {
    o[i]=px[i];
  }
  int argc=13;
  for(int i=0;i<3;i++)
  {
    x[i]=px[i+3]-o[i];
  }
  for(int i=0;i<3;i++)
  {
    y[i]=px[i+6]-px[i+3];
  }
  for(int i=0;i<3;i++)
  {
    z[i]=px[i+9]-px[i+6];
  }  

  double n1[3],n2[3],n3[3];
  outprod(x,y,n1);
  outprod(y,z,n2);
  outprod(n1,n2,n3);
  
  double normx=0,normy=0,inprod=0,a1=0,a2=0,a3=0;
  double flag=0;
  
  for(int i=0;i<3;i++)
  {
    a1+=x[i]*x[i];
    a2+=y[i]*y[i];
    a3+=z[i]*z[i];
    
    inprod+=n1[i]*n2[i];
    normx+=n1[i]*n1[i];
    normy+=n2[i]*n2[i];
    flag+=n3[i]*y[i];
  }
  
  double r0=inprod/sqrt(normx*normy);
  //  cout<<o[0]<<o[1]<<o[2]<<endl;
  //  cout<<n2[0]<<n2[1]<<n2[2]<<endl;
  //cout<<argc<<endl;
  
  double res=acos(r0);
  if(flag<0)
  {
    res=3.14159265*2-res;
  }
  return res;
}

double pnormal(double mean,double stdev)
{
  double ns=0;
  //generate normal distribution
  for(int k=0;k<12;k++){
    ns+=drand48();
  }
  ns=(ns-6)/2;
  ns=ns*stdev+mean;
  return ns;
}

double plognormal(double mean,double stdev)
{
  return exp(pnormal(mean,stdev));
}


inline bool myfunction (vector<double> i,vector<double> j) { return (i[0]<j[0]); }

inline bool mycompare1 (vector<int> i,vector<int> j) { return (i[0]<j[0]); }

void trimstr(string &s)
{//remove begining and end spaces from s
  int a=0,b=s.length()-1;
  while(s[a]==' ')
  {
    a++;
  }
  while(s[b]==' ')
  {
    b--;
  }
  s=s.substr(a,b-a+1);
}
