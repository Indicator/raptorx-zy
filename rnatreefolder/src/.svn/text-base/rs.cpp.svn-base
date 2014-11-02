//Sample torsons and rebuild a backbone and compute the rmsd with a given structure.
//Also do sampling with energy
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <ctime>
#include <cstdlib>
#include <cstdio>
#include <cmath>
//#include <mpi.h>
//#include "bCNF_mpi_tp.h"
#include "geometry.h"
//#include "rmsdp.h"

double angel_p_c4_p=1.6581;
double angel_c4_p_c4=1.8326;

//void Rebuild(vector<int> predicted_label, double **outstru, vector<vector<double> > torbin, vector<double> nattors, int n)
double energy(double **outstru,int n)
{
  double rst=0;
  for(int i=0;i<n;i++)
    for(int j=0;j<n;j++)
    {
      double d=dist(outstru[i],outstru[j]);
      if(d>rst)rst=d;
    }
  return rst;
}


void Rebuild(double **outstru, vector<vector<double> > torbin,  int n)
{
  //  cerr<<torbin.size()<<" "<<nattors.size()<<endl;
  
  int ti=0;
  const double bondlen_p_c4p=3.9;
  const double bondlen_c4p_p=3.9;
  int length_seq=torbin.size();
  vector<vector<double> > pc4backbone;
  
  double bondlen_c4c4 = sqrt(bondlen_p_c4p*bondlen_p_c4p+ bondlen_c4p_p*bondlen_c4p_p - 2*bondlen_c4p_p * bondlen_p_c4p * cos(angel_c4_p_c4));
  double bondlen_pp = sqrt(bondlen_p_c4p*bondlen_p_c4p+ bondlen_c4p_p*bondlen_c4p_p - 2*bondlen_c4p_p * bondlen_p_c4p * cos(angel_p_c4_p) );
  double tor;
  //  pc4backbone;//c4 p c4...
  //the backbone: O5' C5' C4' C3' O3' P
  vector<vector<double> > backbone;
  //the full backbone: O5' C5' C4' O4' C3' O3' C2' C1' P OP1 OP2
  vector<vector<double> > fullbackbone;
  vector<vector<double> > fulltertiary;
  vector<double> last0(3,0);
  vector<double> last1(3,0);
  //  for(int t=1;t<length_seq;t++)
  for(int t=1;t<=n-1;t++)
  {
    double chi;
    //compute p-c4-p-c4 backbone 's location
    //this atom =lastvector
    //-------1st, Compute atom C4'
    //    pc4backbone.push_back(last1
    if(t==1)
    {
      //initialize 
      //C4' is decided.
      vector<double> c(3,0);
      pc4backbone.push_back(c);
      c[0]=bondlen_p_c4p;
      pc4backbone.push_back(c);
      //update last0 and last1
      //last1= pc4backbone[t-1] -> t
      //last0= pc4backbone[t-2] -> t-1
      last1=c;
      last0[0]= bondlen_c4p_p*cos(angel_c4_p_c4);
      last0[1]= bondlen_c4p_p*sin(angel_c4_p_c4);
      //last0 is nearer to current than last1
      c=vecplus(pc4backbone[pc4backbone.size()-1],last0);
      pc4backbone.push_back(c);

    }
    else
    {
      //tor = nattors[ti];ti++;//torbin[predicted_label[t]][0]+(rand() % 100)/100*3.14/10 ;;

      tor = torbin[t][0];//+(rand() % 100)/100*3.14/10 ;;
      //  tor=nattors[ti];ti++;
      
      
      double bonds3 = pow(bondlen_c4p_p*sin(angel_c4_p_c4),2 ) + pow(bondlen_c4p_p*sin(angel_p_c4_p),2) - 2*cos(tor )*bondlen_c4p_p*sin(angel_c4_p_c4) * bondlen_c4p_p*sin(angel_p_c4_p)  + pow(bondlen_p_c4p- bondlen_c4p_p*cos(angel_p_c4_p)- bondlen_c4p_p*cos(angel_c4_p_c4), 2);
      bonds3 = sqrt(bonds3);
      double r = bondlen_p_c4p;
      double a= angel_c4_p_c4;
      double a0= angel_p_c4_p ;// the planor angel

      //establish local coordinate system
      vector<double> ex=last0;
      vecnormalize(&ex);

      double last1ex=innerprod(last1,ex);
      vector<double> ey=vecminus(last1,vecscale(ex,last1ex));
      vecnormalize(&ey);

      vector<double> ez=outprod(ex,ey);

      double an1=3.1415926-angel_c4_p_c4;//a changed planar angle
      double ant=tor-3.1415926;//a changed torsion
      vector<double> vecc4x(3,0);
      vector<double> vecc4y(3,0);
      vector<double> vecc4z(3,0);

      double l=bondlen_p_c4p;
      vecc4x=vecscale(ex, l*cos(an1));
      vecc4y=vecscale(ey, l*sin(an1)*cos(ant));
      vecc4z=vecscale(ez, l*sin(an1)*sin(ant));
      vector<double> vecc4(3,0);
      vecc4=vecplus(vecc4x,vecc4y);
      vecc4=vecplus(vecc4 ,vecc4z);

      /*
	vector<double> v21= vecscale(last1,r*cos(a)/norm(last1));
	vector<double> v0x= vecscale(last1,norm(last0)*cos(a0)/norm(last1));
	vector<double> v0y= vecminus(last0,v0x);
	vecnormalize(&v0y);
	vector<double> v22(3,0);
	v22[0] = v0y[0]*cos(tor) - v0y[2]*sin(tor);
	v22[1] = v0y[1];
	v22[2] = v0y[0]*sin(tor) + v0y[2]*cos(tor);
	v22= vecscale(v22, r*sin(a));
	vector<double> v2=vecplus(v21,v22);
	vector<double> c(3,0);
      //*/

      vector<double> c=vecplus(pc4backbone[pc4backbone.size()-1],vecc4);
      pc4backbone.push_back(c);
      last1=last0;
      last0=vecc4;//minus(pc4backbone[pc4backbone.size()-1],pc4backbone[pc4backbone.size()-2]);
    }
    //-------2nd, Compute atom P
    //tor=nattors[ti];ti++;//torbin[predicted_label[t]][1] + (rand() % 100)/100*3.14/10 ;
    tor=torbin[t][1]; //+ (rand() % 100)/100*3.14/10 ;
    //tor=nattors[ti];ti++;

    double bonds3 = pow(bondlen_p_c4p*sin(angel_c4_p_c4), 2) + pow(bondlen_p_c4p*sin(angel_p_c4_p), 2) - 2*cos(tor)*bondlen_p_c4p*sin(angel_p_c4_p) * bondlen_p_c4p*sin(angel_c4_p_c4)  + pow(bondlen_c4p_p-bondlen_p_c4p*cos(angel_c4_p_c4)-bondlen_p_c4p*cos(angel_p_c4_p), 2);
    bonds3 = sqrt(bonds3);
    double r= bondlen_c4p_p;
    double a= angel_p_c4_p;// the planor angel
    double a0= angel_c4_p_c4;


    //establish local coordinate system
    vector<double> ex=last0;
    vecnormalize(&ex);

    double last1ex=innerprod(last1,ex);
    vector<double> ey=vecminus(last1,vecscale(ex,last1ex));
    vecnormalize(&ey);

    vector<double> ez=outprod(ex,ey);

    double an1=3.1415926-angel_p_c4_p;//a changed planar angle
    double ant=tor-3.1415926;//a changed torsion
    vector<double> vecc4x(3,0);
    vector<double> vecc4y(3,0);
    vector<double> vecc4z(3,0);

    double l=bondlen_c4p_p;
    vecc4x=vecscale(ex, l*cos(an1));
    vecc4y=vecscale(ey, l*sin(an1)*cos(ant));
    vecc4z=vecscale(ez, l*sin(an1)*sin(ant));
    vector<double> vecc4(3,0);
    vecc4=vecplus(vecc4x,vecc4y);
    vecc4=vecplus(vecc4 ,vecc4z);

    vector<double> c=vecplus(pc4backbone[pc4backbone.size()-1],vecc4);
    pc4backbone.push_back(c);
    last1=last0;
    last0=vecc4;

    /*
      vector<double> v21= vecscale(last1,r*cos(a)/norm(last1));
      vector<double> v0x= vecscale(last1,norm(last0)*cos(a0)/norm(last1));
      vector<double> v0y= vecminus(last0,v0x);
      vecnormalize(&v0y);
      vector<double> v22(3,0);
      v22[0] = v0y[0]*cos(tor) - v0y[2]*sin(tor);
      v22[1] = v0y[1];
      v22[2] = v0y[0]*sin(tor) + v0y[2]*cos(tor);
      v22 = vecscale(v22, r*sin(a));
      vector<double> v2=vecplus(v21,v22);
      vector<double> c(3,0);
    
      c=vecplus(pc4backbone[pc4backbone.size()-1],v2);//added to previous vector
      pc4backbone.push_back(c);
      last0=last1;
      last1=vecminus(pc4backbone[pc4backbone.size()-1],pc4backbone[pc4backbone.size()-2]);
    //*/

  }
  //output the structure
  //  ofstream fout(outfile.c_str());
  //  cout<<pc4backbone.size()<<endl;
  //cout<<n*2<<endl;
  
  for(int i=0;i<pc4backbone.size();i++)
  {
    //    fout<<"ATOM ";
    for(int j=0;j<pc4backbone[i].size();j++)
    {
      outstru[i][j]=pc4backbone[i][j];//    fout<<pc4backbone[i][j]<<" ";
    }
    //    fout<<endl;
  }
  //  fout.close();
  return;
  /*=================================STOP HERE==================

  for(int i=1;i<length_seq-1;i++)
  {
  //stick O5 C5
  double tor=alltors[predicted_allstates[t]][0];
  bondlen_c4c4 = sqrt(bondlen_p_c4p*bondlen_p_c4p+ bondlen_c4p_p*bondlen_c4p_p - 2*bondlen_c4p_p * bondlen_p_c4p * cos(angel_c4_p_c4));
  bondlen_pp = sqrt(bondlen_p_c4p*bondlen_p_c4p+ bondlen_c4p_p*bondlen_c4p_p - 2*bondlen_c4p_p * bondlen_p_c4p * cos(angel_p_c4_p) );
  bondlen_c4p = sqr(bondlen_c4p_p*sin(angel_c4_p_c4)) + sqr(bondlen_c4p_p*sin(angel_p_c4_p)) - 2*cos(torsion )*bondlen_c4p_p*sin(angel_c4_p_c4) * bondlen_c4p_p*sin(angel_p_c4_p)  + sqr(bondlen_p_c4p-bondlen_c4p_p*cos(angel_p_c4_p)-bondlen_c4p_p*cos(angel_c4_p_c4));
  bondlen_c4p = sqrt(bondlen_c4p);

  vector<double> bondlens(3,0);
  bondlens.push_back(bondlen_c4c4);
  bondlens.push_back(bondlen_pp);
  bondlens.push_back(bondlen_c4c4);
  vector<vector<double> > ntstru=getbackbone(bondlens);
  //ntstru is in a local frame
  //recover the local frame system.
  for(int n=0;n<ntstru.size();n++)
  {
  vector<vector<double> > localvecs;
  for(int i=0;i<3;i++)
  {
  localvecs.push_back(pc4backbones[i*2-1]);
  localvecs.push_back(pc4backbones[i*2]);
  localvecs.push_back(pc4backbones[i*2+1]);
  }
  retransformation(localvecs,ntstru[n]);
  fullbackbones.push_back(ntstru[n]);
  }
      
  fullbackbones.push_back(pc4backbones[i*2+1]); //C4'
  //stick C3 O3 by searching another fraglib
  double tor=alltors[predicted_allstates[t]][1];
  bondlen_c4c4 = sqrt(bondlen_p_c4p*bondlen_p_c4p+ bondlen_c4p_p*bondlen_c4p_p - 2*bondlen_c4p_p * bondlen_p_c4p * cos(angel_c4_p_c4));
  bondlen_pp = sqrt(bondlen_p_c4p*bondlen_p_c4p+ bondlen_c4p_p*bondlen_c4p_p - 2*bondlen_c4p_p * bondlen_p_c4p * cos(angel_p_c4_p) );
  bondlen_pc4 = sqr(bondlen_p_c4p*sin(angel_c4_p_c4)) + sqr(bondlen_p_c4p*sin(angel_p_c4_p)) - 2*cos(torsion )*bondlen_p_c4p*sin(angel_p_c4_p) * bondlen_p_c4p*sin(angel_c4_p_c4)  + sqr(bondlen_c4p_p-bondlen_p_c4p*cos(angel_c4_p_c4p)-bondlen_p_c4p*cos(angel_p_c4_p));
  bondlen_pc4 = sqrt(bondlen_pc4);

  vector<double> bondlens(3,0);
  bondlens.push_back(bondlen_c4c4);
  bondlens.push_back(bondlen_pp);
  bondlens.push_back(bondlen_c4c4);
  vector<vector<double> > ntstru=getbackbone(bondlens);
  for(int n=0;n<ntstru.size();n++)
  {
  vector<vector<double> > localvecs;
  for(int i=0;i<3;i++)
  {
  localvecs.push_back(pc4backbones[i*2-1]);
  localvecs.push_back(pc4backbones[i*2]);
  localvecs.push_back(pc4backbones[i*2+1]);
  }
  retransformation(localvecs,ntstru[n]);
  fullbackbones.push_back(ntstru[n]);
  }
  fullbackbones.push_back(pc4backbones[i*2+2]);//P;
  }
  //stick other backbone atoms to p-c4 backbone from 
  //stick purine , pyridine and sugar ring on C2 using torsion chi
  //*/ 
}

int initialize(int argc, char ** argv)
{
  //read structure
}
/*
int main(int argc, char ** argv)
{
  if(argc==1)
  {
    cout<<"rs -maxlb [viterbi result] -map [map result file] -nlb [num of label] -cts [centers] -stru [native structure] -nator [native torsions]";
    return 0;
  }
  //Every running samples one structure.

  //deal with params
  map<string, string> params;
  string parakey,paraval;
  for(int i=0;i<floor((argc-1)/2);i++)
  {
    parakey.assign(argv[i*2+1]);
    paraval.assign(argv[i*2+2]);
    params[parakey]=paraval;
  }

  ifstream fin;

  
  //read native torsions
  vector<double> nattors;
  cerr<<"read -nator "<<params["-nator"]<<endl;

  fin.open(params["-nator"].c_str());
  int m;
  fin>>m;
  for(int i=0;i<m;i++)
  {
    double x;
    fin>>x;
    nattors.push_back(x);
  }
  fin.close();

  
  //read model,including probability of  labels(MAP result) , and maximal label sequence(Viterbi result)
  cerr<<"read -maxlb "<<params["-maxlb"]<<endl;
  
  vector<int> labels;
  fin.open(params["-maxlb"].c_str());

  for(int i=0;i<m;i++)
  {
    int lb;
    fin>>lb;
    labels.push_back(lb);
  }
  fin.close();

  //read model, MAP result.
  cerr<<"read -map "<<params["-map"]<<endl;
  int num_lb=atoi(params["-nlb"].c_str());
  vector<vector<double> > mapprob;
  fin.open(params["-map"].c_str());
  while(!fin.eof())
  {
    vector<double> tors;
    for(int i=0;i<num_lb;i++)
    {
      double x;
      fin>>x;
      tors.push_back(x);
    }
    mapprob.push_back(tors);
  }
  fin.close();

  //read true label,if applicable.
  cerr<<"read -trlb "<<params["-trlb"]<<endl;
  int ntrlb;
  vector<int> trulabel;
  fin.open(params["-trlb"].c_str());
  fin>>ntrlb;
  for(int i=0;i<ntrlb;i++)
  {
    int x;
    fin>>x;
    trulabel.push_back(x);
  }
  fin.close();

  //read torson bin, i.e. those centers of distribution
  cerr<<"read -cts "<<params["-cts"]<<endl;

  vector<vector<double> > torbin;
  fin.open(params["-cts"].c_str());
  while(!fin.eof())
  {
    vector<double> tors;
    for(int i=0;i<3;i++)
    {
      double x;
      fin>>x;
      tors.push_back(x);
    }
    torbin.push_back(tors);
  }
  fin.close();
  cerr<<"torbin has "<<torbin.size()<<endl;
  
  //read structure
  double** native;
  double** outstru;
  cerr<<"read -stru "<<params["-stru"]<<endl;
  fin.open(params["-stru"].c_str());
  int n;
  
  fin>>n;
  //  n=n-2;
  //  n=n;
  native=new double *[n];
  outstru=new double *[n];
  for(int i=0;i<n;i++)
  {
    native[i]=new double[3];
    outstru[i]=new double[3];
    for(int j=0;j<3;j++)
    {
      fin>>native[i][j];
    }
  }
  fin.close();

  cerr<<"Finish reading"<<endl;

  
  //main loop
  unsigned int randomSeed=0;
  ifstream in("/dev/urandom",ios::in);
  in.read((char*)&randomSeed, sizeof(unsigned)/sizeof(char));
  srand(randomSeed);

  //initialize
  vector<vector<double> > samp_last;
  vector<vector<double> > samp_curr;
  double eg_curr,eg_last;
  eg_curr=0;
  eg_last=100000;
  
  for(int i=0;i<ntrlb;i++)
  {
    samp_last.push_back(torbin[trulabel[i]]);
    samp_curr.push_back(torbin[trulabel[i]]);
  }
  cerr<<"label size "<<labels.size()<<endl;
  
  //init end-----
  int sampleiter=atoi(params["-iter"].c_str());
  
  for(int i=0;i<sampleiter;i++)
  {
    for(int k=0;k<n;k++)
    {
      for(int j=0;j<3;j++)
      {
        outstru[k][j]=0;
      }
    }

    //make a random change to the structure
    //    for(int i=0;i<labels.size();i++)
    int rk=rand() % ntrlb;
    {
      vector<double> currtors=samp_last[rk];
      for(int j=0;j<currtors.size();j++)
      {
        //re-select a label
        double ns=0;
        ns=(rand() % 10000);
        ns=ns/10000;
        double tt=0;
        for(int l=0;l<num_lb;l++)
        {
          tt=tt+mapprob[j][l];
          if(tt>ns)
          {
            currtors=torbin[l];
          }
               //generate normal distribution
        ns=0;
        for(int k=0;k<100;k++)
        {
          ns+=(rand() % 100);
        }
        ns=ns/10000-0.5;
        //re-select a torsion
        currtors[j]=currtors[j]+ns;
      }
      samp_curr[rk]=currtors;
    }

    //rebuild
    //    Rebuild(outstru,samp_curr,nattors, nattors.size()/2);
    Rebuild(outstru,samp_curr,nattors, nattors.size()/2);
    //compute energy
    eg_curr=energy(outstru,samp_curr.size());
    //    cerr<<"curr eng "<<eg_curr<<" last "<<eg_last<<endl;
    
    //decide to accept or not
    if(eg_curr<eg_last)
    {
    }
    else
    {
      continue;
      
      double p=exp(eg_last-eg_curr);
      if(rand() % 100 > p * 100)
      {//refuse
        continue;
      }
    }
    
    //compute rmsd
    double rslt=0;
    RMSD(outstru,native,n-3,&rslt);
    cout<<"Iter."<<i<<" rmsd "<<rslt<<endl;

    //output the structure kept.
    char fname[100];
    sprintf(fname,"tmp_stru_%d",i);
    ofstream fout(fname);
    for(int i=0;i<n;i++)
    {
      for(int j=0;j<3;j++)
      {
        fout<<outstru[i][j]<<" ";
      }
      fout<<endl;
    }
    fout.close();

    //update 
    eg_last=eg_curr;
    for(int ki=0;ki<ntrlb;ki++)
    {
      for(int kj=0;kj<samp_last[ki].size();kj++)
	samp_last[ki][kj]=samp_curr[ki][kj];
    }


  }
}
*/
