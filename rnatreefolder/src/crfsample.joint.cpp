//#define _MPI 0
#include <iostream>
#include <fstream>
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
#ifdef _MPI
#include <mpi.h>
#endif
#include <sys/stat.h>
#include "ANN.h"
#include "rnageo.h"
#include "bCNF_mpi_tp.h"
#include "geometry.h"
#include "rmsdp.h"
#include "rs.h"
#include "RNAbuilder.h"
#define DEBUG 0
#define DBG 0
#define _DEBUGTIME 1
#ifdef _DEBUGTIME
int _dt_numTestClash=0;
int _dt_numEnergy=0;
int _dt_numRmsd=0;
int _dt_numRebuild=0;
double _dt_timeRebuild=0;
double _dt_timeEnergy=0;
double _dt_timeRmsd=0;
double _dt_timeTeshClash=0;
#endif
int proc_id;
int num_procs;
string confdir;

RNAstruct::RNAstruct(const RNAstruct& other) {}
RNAstruct::RNAstruct() {}
void ReadExpDist(string fileexp, vector<double> &vExpDist)
{
  ifstream ifs(fileexp.c_str());
  while(!ifs.eof()) {
    double x;
    ifs>>x;
    vExpDist.push_back(x);
  }
  ifs.close();
  if(DEBUG)cerr<<fileexp<<vExpDist.size()<<endl;
}
inline bool seq_compare_energy (SEQUENCE *i, SEQUENCE *j)
{
  return (i->e_last<j->e_last);
}
bool rnaCRFSampler::InStems(SEQUENCE* seq,int rk)
{
  return seq->vInStems[rk];
}
inline bool rnaCRFSampler::checkclash(SEQUENCE *seq)
{
  bool rst=false;
  switch(clashcase) {
  case(0):
    if(seq->nclash>0 || seq->nclashrr + seq->nclashrb>0) {
      rst=true;
    }
    break;
  case(1):
    if(seq->nclash>0 || seq->nclashrr + seq->nclashrb>10) {
      rst=true;
    }
    break;
  }
  return rst;
}
SEQUENCE::SEQUENCE(int length_seq, rnaCRFSampler * pModel)
{
  m_pModel = pModel;
  tlength=length_seq+2;
  this->length_seq = length_seq;
  //  allchi=new double[length_seq];
  forward = new ScoreMatrix(m_pModel->num_state,length_seq);
  backward = new ScoreMatrix(m_pModel->num_state,length_seq);
  //  confMatrix = new ScoreMatri(m_pModel->num_label,m_pModel->num_label);
  obs_label = new int[length_seq];
  //  clashlist = new int[tlength];
  accepted_label = new int[length_seq];
  proposed_label = new int[length_seq];
  memset(proposed_label, 0 , sizeof(int)*length_seq);
  memset(accepted_label, 0 , sizeof(int)*length_seq);
  int df = m_pModel->dim_features*length_seq;
  _features = new Score[df];
  q3=0;
  predicted_label = new int[length_seq];
  predicted_allstates = new Score[length_seq*m_pModel->num_label];
  obs_feature = new Score*[length_seq];
  for(int i=0; i<length_seq; i++) {
    obs_feature[i] = new Score[m_pModel->dim_one_pos];
    //    sampled_label[i]=-1;
  }
  outstru=new double *[length_seq*2+2];
  for(int k=0; k<length_seq*2+2; k++) { //length * 2 is due to every position has two atom, C4, P.
    outstru[k]=new double[3];
  }
  e_last=100000;
  fullrmsd=-1;
}
SEQUENCE::SEQUENCE(const SEQUENCE &other) // this construction is used to save a conformation
{
  m_pModel = other.m_pModel;
  length_seq = other.length_seq;
  tlength=length_seq+2;
  //  allchi=new double[length_seq];
  forward = new ScoreMatrix(m_pModel->num_label,length_seq);
  backward = new ScoreMatrix(m_pModel->num_label,length_seq);
  //  confMatrix = new ScoreMatri(m_pModel->num_label,m_pModel->num_label);
  obs_label = new int[length_seq];
  memcpy(obs_label,other.obs_label,sizeof(int)*length_seq);
  //  clashlist = new int[length_seq];
  accepted_label = new int[length_seq];
  proposed_label = new int[length_seq];
  memset(proposed_label, 0 , sizeof(int)*length_seq);
  int df = m_pModel->dim_features*length_seq;
  //  int df = m_pModel->dim_features*length_seq;
  _features = new Score[df];
  memcpy(_features, other._features, sizeof(Score)*df);
  q3=0;
  predicted_label = new int[length_seq];
  predicted_allstates = new Score[length_seq*m_pModel->num_label];
  //  obs_label=other.obs_label;
  obs_feature = new Score*[length_seq];// other.obs_feature;
  for(int i=0; i<length_seq; i++) {
    obs_feature[i]=new Score[m_pModel->dim_one_pos];
    //    cerr<<"Pos"<<i<<endl;
    memcpy(obs_feature[i], other.obs_feature[i],sizeof(Score)*(m_pModel->dim_one_pos));
    //    sampled_label[i]=-1;
    accepted_label[i]=other.accepted_label[i];
  }
  outstru=new double *[length_seq*2+2];
  for(int k=0; k<length_seq*2+2; k++) { //length * 2 is due to every position has two atom, C4, P.
    outstru[k]=new double[3];
  }
  native=other.native;
  e_last=other.e_last;
  //  chi=other.chi;
  //tordelta=other.tordelta;
  sspairs=other.sspairs;
  aaseq=other.aaseq;
  allnative=other.allnative;
  //alltors=other.alltors;
  //allnatbb=other.allnatbb;
  etree=other.etree;
  energy_detail=other.energy_detail;
  ComputeVi();
  sampcurr=other.sampcurr;
  sampled_chi=other.sampled_chi;//+pnormal(0,0.1);
  sampled_bondlen=other.sampled_bondlen;
  chain=other.chain;
  fullrmsd=-1;
}
SEQUENCE::~SEQUENCE()
{
  delete forward;
  //  forward=NULL;
  delete backward;
  //backward=NULL;
  delete obs_label;
  delete _features;
  for(int i=0; i<length_seq; i++)
    delete obs_feature[i];
  delete obs_feature;
}
void SEQUENCE::savestruct(const SEQUENCE &other)
{
  //  delete fullbackbone;
  fullbackbone=other.fullbackbone;
  allresstru=other.allresstru;
  etree=other.etree;
  e_last=other.e_last;
  energy_detail=other.energy_detail;
  rmsd=other.rmsd;
  fullrmsd=other.fullrmsd;
}
void SEQUENCE::showss()
{
  for(int i=0; i<length_seq; i++)
    if(DEBUG)cerr<<accepted_label[i]/10;
  if(DEBUG)cerr<<endl;
  for(int i=0; i<length_seq; i++)
    if(DEBUG)cerr<<accepted_label[i]%10;
  if(DEBUG)cerr<<endl;
}
void SEQUENCE::show_e_detail()
{
  for(int i=0; i<etree.size(); i++) {
    int ei=etree[i];
    //if(DEBUG)
    cerr<<"pair"<<ei<<":"<<sspairs[ei][0]<<" "<<sspairs[ei][1]<<" "<<aaseq[sspairs[ei][0]]<<" "<<aaseq[sspairs[ei][1]]<<" "<<energy_detail[ei]<<endl;
  }
}
int SEQUENCE::isparent(const vector<int> &a,const vector<int> &b)
{
  int r=0;
  if(a[0]<b[1] && b[1]< a[1]) {
    r=1;// a is parent of b
  }
  return r;
}
int SEQUENCE::isneighbor(const vector<int> &a,const vector<int> &b)
{
  int r;
  if(a[0]<b[0] && b[0]< a[1])
    r=1;// a is parent of b
  return r;
}
void SEQUENCE::BuildStems()
{
  vInStems.resize(tlength,0);
  map<int,int> natss;
  vector<int> sskeys;
  for(int i=0; i<sspairs.size(); i++) {
    natss[sspairs[i][0]]=sspairs[i][1];
    sskeys.push_back(sspairs[i][0]);
  }
  for(int i=0; i<sskeys.size();) {
    int len=i;
    while( len+1<sskeys.size() && (sskeys[len]==sskeys[len+1]-1) && (natss[sskeys[len]] == natss[sskeys[len+1]]+1 ) ) {
      len++;
    }
    if(len>i+2) {
      for(int j=i; j<len; j++) {
        vInStems[sskeys[j]]=1;
        vInStems[natss[sskeys[j]]]=1;
      }
    }
    i=len+1;
  }
//   test code
  cerr<<"vInstems: ";
  for(int i=0; i<tlength; i++) {
    cerr<<vInStems[i]<< " ";
  }
}
void SEQUENCE::BuildEnergyTree()
{
  vector<int> proot;
  proot.push_back(-1);
  proot.push_back(length_seq+2);
  sspairs.push_back(proot);
  sort(sspairs.begin(),sspairs.end(), mycompare1);
//make a neighbor relations
//   vector<int> paironseq(-1,length_seq);
//   for(int i=0;i<sspairs.size();i++)
//   {
//     if(sspairs[i][0]-1>=0 && sspairs[1]-1<=length_seq-1){
//       paironseq[sspairs[i][0]]=i;
//       paironseq[sspairs[i][1]]=i;
//     }
//   }
  //prepare a neighbor matrix.
  vector<vector<int> > children;//we should use a pseudo pair (-1, length)as root
  for(int i=0; i<sspairs.size(); i++) {
    vector<int> x;
    for(int j=0; j<sspairs.size(); j++) {
      if(i==j)continue;
      //if j is child of i and not child of child of i, then
      //sort first to make sure child is taken in before grand children.
      if(isparent(sspairs[i],sspairs[j])) {
        bool notgrandchild=true;
        for(int k=0; k<x.size(); k++) {
          if(isparent(sspairs[x[k]],sspairs[j]))
            notgrandchild=false;
        }
        if(notgrandchild)
          x.push_back(j);
      }
    }
    //clean grandchild
    for(int k1=0; k1<x.size(); k1++)
      for(int k2=k1+1; k2<x.size(); k2++) {
        if(x[k1]==-1 ||x[k2]==-1)continue;
        if(isparent(sspairs[x[k1]],sspairs[x[k2]]))
          x[k2]=-1;
        if(isparent(sspairs[x[k2]],sspairs[x[k1]]))
          x[k1]=-1;
      }
    vector<int> y;
    for(int k1=0; k1<x.size(); k1++)
      if(x[k1]!=-1)
        y.push_back(x[k1]);
    children.push_back(y);
    if(DEBUG)cerr<<sspairs[i][0]<<" "<<sspairs[i][1]<<": ";
    for(int k=0; k<y.size(); k++)
      if(DEBUG)cerr<<sspairs[y[k]][0]<<" "<<sspairs[y[k]][1]<<", ";
    if(DEBUG)cerr<<endl;
  }
  //do a deep first search and produce back-order tour of the tree.
  int head=0,end=0;
  vector<int> s;
  vector<int> rst;
  //  s.push_back(children[head].begin(),children[head].end());
  s.push_back(0);
  while(s.size()>0) {
    //expend a node at position head.
    int last=*(s.end()-1);
    if(children[last].size()>0) {
      s.push_back(*(children[last].end()-1));
      children[last].pop_back();
    } else {
      rst.push_back(last);
      s.pop_back();
    }
  }
  rst.pop_back();//pop up pseudo root.
  sspairs.erase(sspairs.begin());
  for(int i=0; i<rst.size(); i++) {
    rst[i]--;
    if(DEBUG)cerr<<sspairs[rst[i]][0]<<" "<<sspairs[rst[i]][1]<<" ";//
    if(DEBUG)cerr<<aaseq[sspairs[rst[i]][0]]<<" "<<aaseq[sspairs[rst[i]][1]] <<endl;
  }
  etree=rst;
}
void SEQUENCE::showdiffonangle()
{
  double diff=0;
}
void SEQUENCE::showtruess()
{
  for(int i=0; i<length_seq; i++) {
    if(proposed_label[i]!=obs_label[i])
      if(DEBUG)cerr<<(obs_label[i]+1)/10;
      else if(DEBUG)cerr<<" ";
  }
  if(DEBUG)cerr<<endl;
  for(int i=0; i<length_seq; i++) {
    if(proposed_label[i]!=obs_label[i])
      if(DEBUG)cerr<<(obs_label[i]+1)%10;
      else if(DEBUG)cerr<<" ";
  }
  if(DEBUG)cerr<<endl;
}
void SEQUENCE::showclash()
{
  vector<int> clash(tlength,0);
  for(int i=0; i<clashlist.size(); i++)
    if(clashlist[i])
      clash[clashlist[i]]=1;
  for(int i=0; i<length_seq; i++)
    if(DEBUG)cerr<<clash[i];
  if(DEBUG)cerr<<endl;
}
//void Rebuild(vector<int> predicted_label, double **outstru, vector<vector<double> > torbin, vector<double> nattors, int n)
double SEQUENCE::energy(int level)
{
  return energy(level, sspairs.size());
}
double SEQUENCE::energy(int level, int npairs)
{
  //level describe how coarse energy should be
  //This energy is based on 4 term,
  //1. Diameter,(weight0) 2. Distance of two paired nt(weight1) , 3. Planar angle of backbones segment of two paired nt(weight2), 4. Sterioc clash (Weight Max_double)
  int n=length_seq*2-3;
  energy_detail.clear();
  for(int i=0; i<etree.size(); i++)
    energy_detail.push_back(-1.0);
  double rst=0;
  /* Radius term
  double diameter=0;
  for(int i=0;i<n;i++)
    for(int j=0;j<n;j++)
    {
      double d=dist(outstru[i],outstru[j]);
      if(d>diameter)diameter=d;
    }
  rst=diameter;
  //*/
  //compute square difference between average distance of secondary structure pair in predicted structure and that of native structure. notice that we only consider distances between c4 atoms, which is really rough.
  double dss0=18 ;//atof(m_pModel->params["EDSS0"].c_str());//average distance between C4 atoms in a SS interaction pair.
  double dss1=atof(m_pModel->params["EDSS1"].c_str());
  double weight1=atof(m_pModel->params["EWEI1"].c_str());
  double weight2=atof(m_pModel->params["EWEI2"].c_str());
  double weight0=atof(m_pModel->params["EWEI0"].c_str());
  //  double angle0=atof()2.2;
  //double angle1=1.0;
  double angle0=2.16;//atof(m_pModel->params["EANG0"].c_str());
  double angle0a=1.15;
  double angle0b=1.51;
  double angle1=atof(m_pModel->params["EANG1"].c_str());
  double scale=atof(m_pModel->params["ESCALE"].c_str());
  if(abs(scale)<0.000001)scale=weight0+weight1+weight2;
  int shape0=0;
  int shape1=0;
  /* clash  term
  double term3=0; //clash term
  double dist3=7;//9.30;
  double dist4=9;//11.26;
  double dist5=12;//14.56;
  double dist6=14;//16.15;
  for(int i=0;i<length_seq*2+2;i++)//-1 since last 3 atoms make no-sense.
  {
    for(int j=i+3;j<length_seq*2+2;j++)
      //    if(sspairs[i][0]>length_seq+1 || sspairs[i][1]>length_seq+1 )continue;
    {  double d;
      d=dist(outstru[i], outstru[j] );
      bool b0=(j-i>=3 && d < 5);
      bool b1=(j-i==3 && d <dist3);
      bool b2=(j-i==4 && d <dist4);
      bool b3=(j-i==5 && d <dist5);
      bool b4=(j-i>=6 && d <dist6);
      //
  if(b0){
  term3+=pow(d-5,2);
  //	return 1e100;
      }
      if(b1)
  term3+=pow(d-dist3,2);
      if(b2)
  term3+=pow(d-dist4,2);
      if(b3)
  term3+=pow(d-dist5,2);
      if(b4)
      term3+=pow(d-dist6,2);
    }
  }
  */
  double term1=0; //ss energy
  for(int i=0; i<0; i++) { //-1 since last 3 atoms make no-sense.
    //    if(sspairs[i][0]<1 || sspairs[i][1]>length_seq+1 )continue;
    int ei=etree[i];
    if(sspairs[ei][1]>=length_seq+1 && sspairs[ei][0]==0)continue;
    double d;
    if(sspairs[i][1]-  sspairs[i][0]<3)continue;
    if(sspairs[i][1]>=length_seq+1 || sspairs[i][0]>0 )
      d=dist(outstru[2*sspairs[i][0]-1], outstru[2*sspairs[i][1]-1] );
    else
      d=dist(outstru[2*sspairs[i][0]], outstru[2*sspairs[i][1]] );
    //if(dss0<d && d<dss1)continue;
    double sse0;
    if(shape0==0) // parabola centered at dss0
      sse0=(d-dss0)*(d-dss0);
    //double sse1=(d-dss1)*(d-dss1);
    term1 += sse0;
  }
  if(level==0)
    return term1;
  //    sse += sse0>sse1?sse1:sse0;
  //continue;
  /* backbone angle energy
  double term2=0;
  for(int i=0;i<sspairs.size();i++)//-1 since last 3 atoms make no-sense.
  {
    double dr1[3];
    double dr2[3];
    if(sspairs[i][1]>=length_seq+1 )continue;
    int x0=2*sspairs[i][0];
    int x1=2*sspairs[i][0]+2;
    int y0=2*sspairs[i][1]-2;
    int y1=2*sspairs[i][1];
    vecminus(outstru[x1],outstru[x0], dr1);
    vecminus(outstru[y1],outstru[y0], dr2);
    double backangle=vecangle(dr1,dr2);
    if(shape1==0)
      term2 += (backangle-angle0)*(backangle-angle0);
  }
  double term2a=0;
  for(int i=0;i<sspairs.size();i++)//-1 since last 3 atoms make no-sense.
  {
    if(sspairs[i][1]>=length_seq+1 )continue;
    double dr1[3];
    double dr2[3];
    int x0=2*sspairs[i][0];
    int x1=2*sspairs[i][0]+2;
    int y0=2*sspairs[i][1]-2;
    int y1=2*sspairs[i][1];
    vecminus(outstru[x1],outstru[x0], dr1);
    vecminus(outstru[y0],outstru[x0], dr2);
    double bbangle=vecangle(dr1,dr2);
    if(shape1==0)
      term2a += (bbangle-angle0a)*(bbangle-angle0a);
  }
  double term2b=0;
  for(int i=0;i<sspairs.size();i++)//-1 since last 3 atoms make no-sense.
  {
    if(sspairs[i][1]>=length_seq+1 )continue;
    double dr1[3];
    double dr2[3];
    int x0=2*sspairs[i][0];
    int x1=2*sspairs[i][0]+2;
    int y0=2*sspairs[i][1]-2;
    int y1=2*sspairs[i][1];
    vecminus(outstru[y1],outstru[y0], dr1);
    vecminus(outstru[x0],outstru[y0], dr2);
    double bbangle=vecangle(dr1,dr2);
    if(shape1==0)
      term2b += (bbangle-angle0b)*(bbangle-angle0b);
  }
  //  rst=(sqrt(term1)*weight1+sqrt(term2+term2a+term2b)*weight2)/scale;
  //*/
  //Precise hydrogen bond, compute distance between donator and receptor
  const double hbond=2.9;
  int nhbond=0;
  rst=0;
  if(npairs>sspairs.size())
    npairs=sspairs.size();
  for(int i=0; i<npairs; i++) {
    int ei=etree[i];
    double rst0=0;
    if(sspairs[ei][1] > tlength-1)continue;
    if(sspairs[ei][0] <0 )continue;
    int p1=aaseq[sspairs[ei][0]]; //sspair using same index as aaseq.
    int p2=aaseq[sspairs[ei][1]];
    //In the computation of energy function, we first build full structure other than structure of label/features.
    //Thus, the NT number is consistent with those in natss files.
    if( p1== 0 || p2== 0) {
      vector<double> a,u;
      if(p1 == 0 && p2 == 3) { // A-U
        a=allresstru[ sspairs[ei][0] ];//vector a contains C1'. So do all others below.
        u=allresstru[ sspairs[ei][1] ];
      } else if(p2 == 0 && p1 == 3) { // U-A
        a=allresstru[ sspairs[etree[i]][1] ];
        u=allresstru[ sspairs[etree[i]][0] ];
      } else
        continue;
      //      if(DEBUG)cerr<<"energy a-u";
      //a-n1,--, u-n3
      vector<double> an1,un3;
      an1.push_back(a[3*3]);
      an1.push_back(a[3*3+1]);
      an1.push_back(a[3*3+2]);
      un3.push_back(u[4*3]);
      un3.push_back(u[4*3+1]);
      un3.push_back(u[4*3+2]);
      double d1=vecdist(an1,un3);
      rst0+=(d1-2.96)*(d1-2.96);
      //a-n6,,,u-o4
      vector<double> an6,uo4;
      an6.push_back(a[9*3]);
      an6.push_back(a[9*3+1]);
      an6.push_back(a[9*3+2]);
      uo4.push_back(u[6*3]);
      uo4.push_back(u[6*3+1]);
      uo4.push_back(u[6*3+2]);
      d1=vecdist(an6,uo4);
      rst0+=(d1-3.02)*(d1-3.02);
      nhbond=nhbond+2;
    }
    if((p1 == 1 || p2 == 1) && (p1+p2==3)) { //G-C or C-G
      vector<double> g,c;
      if(p1 == 1 && p2 == 2) { // G-C
        g=allresstru[ sspairs[etree[i]][0] ];
        c=allresstru[ sspairs[etree[i]][1] ];
      } else if(p1 == 2 && p2 == 1) { // C-G
        g=allresstru[ sspairs[etree[i]][1] ];
        c=allresstru[ sspairs[etree[i]][0] ];
      }
      //      if(DEBUG)cerr<<"energy c-g";
      vector<double> x,y;
      //c-o2, g-n2
      x.push_back(c[8*3]);
      x.push_back(c[8*3+1]);
      x.push_back(c[8*3+2]);
      y.push_back(g[11*3]);
      y.push_back(g[11*3+1]);
      y.push_back(g[11*3+2]);
      rst0+=pow(vecdist(x,y)-2.80,2);
      //c-n3, g-n1
      x.clear();
      y.clear();
      x.push_back(c[4*3]);
      x.push_back(c[4*3+1]);
      x.push_back(c[4*3+2]);
      y.push_back(g[3*3]);
      y.push_back(g[3*3+1]);
      y.push_back(g[3*3+2]);
      rst0+=pow(vecdist(x,y)-2.94,2);
      //c-n4, g-o6
      x.clear();
      y.clear();
      x.push_back(c[6*3]);
      x.push_back(c[6*3+1]);
      x.push_back(c[6*3+2]);
      y.push_back(g[9*3]);
      y.push_back(g[9*3+1]);
      y.push_back(g[9*3+2]);
      rst0+=pow(vecdist(x,y)-2.98,2);
      nhbond=nhbond+3;
    }
    if((p1 == 1 || p2 == 1) && (p1+p2==4)) { //G-U or U-G
      vector<double> g,c;
      if(p1 == 1 && p2 == 3) { // G-U
        g=allresstru[ sspairs[etree[i]][0] ];
        c=allresstru[ sspairs[etree[i]][1] ];
      } else if(p1 == 3 && p2 == 1) { // U-G
        g=allresstru[ sspairs[etree[i]][1] ];
        c=allresstru[ sspairs[etree[i]][0] ];
      }
      //      if(DEBUG)cerr<<"energy c-g";
      vector<double> x,y;
      //U-o4, g-n1
      x.clear();
      y.clear();
      x.push_back(c[6*3]);
      x.push_back(c[6*3+1]);
      x.push_back(c[6*3+2]);
      y.push_back(g[3*3]);
      y.push_back(g[3*3+1]);
      y.push_back(g[3*3+2]);
      rst0+=pow(vecdist(x,y)-5,2);
      //u-n3, g-o6
      x.clear();
      y.clear();
      x.push_back(c[4*3]);
      x.push_back(c[4*3+1]);
      x.push_back(c[4*3+2]);
      y.push_back(g[9*3]);
      y.push_back(g[9*3+1]);
      y.push_back(g[9*3+2]);
      rst0+=pow(vecdist(x,y)-3,2);
      nhbond=nhbond+2;
    }
    energy_detail[etree[i]]=rst0;
    rst+=rst0;
  }
  if(level==1)
    return sqrt(rst/nhbond);
}
int SEQUENCE::getseq(int pos)
{
  return aaseq[pos];
}
void SEQUENCE::Rebuild()
{
  vector<vector<double> > &torbin=sampcurr;
  int n=sampcurr.size();
  nclash=0;
  //  if(DEBUG)cerr<<torbin.size()<<" "<<nattors.size()<<endl;
  int ti=0;
//   double angel_p_c4_p=3.1415-1.301;
//   double angel_c4_p_c4=3.1415-1.369;
//   const double bondlen_p_c4p=3.84;
//   const double bondlen_c4p_p=3.84;
  double clashdist=3;
  int length_seq=torbin.size();
  vector<vector<double> > pc4backbone;
  double tor;
  //  pc4backbone;//c4 p c4...
  //the backbone: O5' C5' C4' C3' O3' P
  vector<vector<double> > backbone;
  //the full backbone: O5' C5' C4' O4' C3' O3' C2' C1' P OP1 OP2
  //  vector<vector<double> > fullbackbone;
  vector<vector<double> > fulltertiary;
  vector<double> last0(3,0);
  vector<double> last1(3,0);
  //  for(int t=1;t<length_seq;t++)
  //  for(int t=-1;t<=n-1;t++) {
  for(int t=-1; t<=n-1; t++) {
    double angel_p_c4_p=0,angel_c4_p_c4=0;
    double bondlen_p_c4p=m_pModel->ExpDistBondpc[int(drand48() * (m_pModel->ExpDistBondpc.size()-1))];
    double bondlen_c4p_p=m_pModel->ExpDistBondcp[int(drand48() * (m_pModel->ExpDistBondcp.size()-1))];
    double bondlen_c4c4 = sqrt(bondlen_p_c4p*bondlen_p_c4p+ bondlen_c4p_p*bondlen_c4p_p - 2*bondlen_c4p_p * bondlen_p_c4p * cos(angel_c4_p_c4));
    double bondlen_pp = sqrt(bondlen_p_c4p*bondlen_p_c4p+ bondlen_c4p_p*bondlen_c4p_p - 2*bondlen_c4p_p * bondlen_p_c4p * cos(angel_p_c4_p) );
    double chi;
    //compute p-c4-p-c4 backbone 's location
    //this atom =lastvector
    //-------1st, Compute atom C4'
    //    pc4backbone.push_back(last1
    if(t==-1) {
      angel_p_c4_p=PI-m_pModel->ExpDistAnglepcp[int(drand48() * (m_pModel->ExpDistAnglepcp.size()-1))];
      angel_c4_p_c4=PI-m_pModel->ExpDistAnglecpc[int(drand48() * (m_pModel->ExpDistAnglecpc.size()-1))];
      angel_p_c4_p=3.1415-1.301;
      angel_c4_p_c4=3.1415-1.369;
      //initialize
      //C4' is decided.
      vector<double> c(3,0);
      pc4backbone.push_back(c);// first P 0 0 0
      c[0]=bondlen_p_c4p;
      pc4backbone.push_back(c);//first C4' len 0 0
      last1=c;//ready to do seconde nt, initial last1
      last0[0]= bondlen_c4p_p*cos(angel_c4_p_c4);//ready to do seconde nt, initial last0
      last0[1]= bondlen_c4p_p*sin(angel_c4_p_c4);
      //last0 is nearer to current than last1
      c=vecplus(pc4backbone[pc4backbone.size()-1],last0);
      pc4backbone.push_back(c); //second P
      continue;//go into t=0;
    } else {
      angel_p_c4_p=torbin[t][3];
      angel_c4_p_c4=torbin[t][2];
      //--------------compute C4'
      //tor = nattors[ti];ti++;//torbin[predicted_label[t]][0]+(rand() % 100)/100*3.14/10 ;;
      tor = torbin[t][0];//+(rand() % 100)/100*3.14/10 ;;
      //  tor=nattors[ti];ti++;
      double bonds3 = pow(bondlen_c4p_p*sin(angel_c4_p_c4),2 ) + pow(bondlen_c4p_p*sin(angel_p_c4_p),2) - 2*cos(tor )*bondlen_c4p_p*sin(angel_c4_p_c4) * bondlen_c4p_p*sin(angel_p_c4_p)  + pow(bondlen_p_c4p- bondlen_c4p_p*cos(PI-angel_p_c4_p)- bondlen_c4p_p*cos(PI-angel_c4_p_c4), 2);
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
      double an1=angel_c4_p_c4;//a changed planar angle
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
      for(int ni=0; ni<pc4backbone.size()-2; ni++) {
        double d=vecdist(pc4backbone[ni],pc4backbone[pc4backbone.size()-1]);
        if(d<clashdist) {
          nclash++;
          //	return;
        }
      }
      last1=last0;
      last0=vecc4;//minus(pc4backbone[pc4backbone.size()-1],pc4backbone[pc4backbone.size()-2]);
    }
    //-------2nd, Compute atom P
    //tor=nattors[ti];ti++;//torbin[predicted_label[t]][1] + (rand() % 100)/100*3.14/10 ;
    tor=torbin[t][1]; //+ (rand() % 100)/100*3.14/10 ;
    //tor=nattors[ti];ti++;
    double bonds3 = pow(bondlen_p_c4p*sin(angel_c4_p_c4), 2) + pow(bondlen_p_c4p*sin(angel_p_c4_p), 2) - 2*cos(tor)*bondlen_p_c4p*sin(angel_p_c4_p) * bondlen_p_c4p*sin(angel_c4_p_c4)  + pow(bondlen_c4p_p-bondlen_p_c4p*cos(PI-angel_c4_p_c4)-bondlen_p_c4p*cos(PI-angel_p_c4_p), 2);
    bonds3 = sqrt(bonds3);
    double r= bondlen_c4p_p;
    //    double a= angel_p_c4_p;// the planor angel
    double a0= angel_c4_p_c4;
    //establish local coordinate system
    vector<double> ex=last0;
    vecnormalize(&ex);
    double last1ex=innerprod(last1,ex);
    vector<double> ey=vecminus(last1,vecscale(ex,last1ex));
    vecnormalize(&ey);
    vector<double> ez=outprod(ex,ey);
    double an1=angel_p_c4_p;//a changed planar angle
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
    //*
    for(int ni=0; ni<pc4backbone.size()-2; ni++) {
      double d=vecdist(pc4backbone[ni],pc4backbone[pc4backbone.size()-1]);
      if(d<clashdist) {
        nclash++;
        //	return;
      }
    }
    //*/
    last1=last0;
    last0=vecc4;
    /*
      vector<double> v21= vecscale(last1,r*cos(a)/norm(last1));
      Vector<Double> V0x= Vecscale(last1,norm(last0)*cos(a0)/norm(last1));
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
  for(int i=1; i<pc4backbone.size(); i++) { // i starts from 1 means we drop first P.
    for(int j=0; j<pc4backbone[i].size(); j++) {
      outstru[i-1][j]=pc4backbone[i][j];//    fout<<pc4backbone[i][j]<<" ";
      //if(i>=length_seq*2-1)outstru[i-1][j]=1000000000;//we drop last C4'
    }
  }
  //  if(DEBUG)cerr<<"Rebuild: "<<pc4backbone.size()-1<<endl;
  return;
}
void SEQUENCE::Rebuild2()
{
  //Build P-C4' backbone atoms only without the first and the last atoms.
  vector<vector<double> > torbin;
  torbin.insert(torbin.end(),sampcurr.begin()+1,sampcurr.end());
  int n=torbin.size();
  nclash=0;
  //  if(DEBUG)cerr<<torbin.size()<<" "<<nattors.size()<<endl;
  int ti=0;
  double clashdist=3;
  int length_seq=torbin.size();
  pc4backbone.clear();
  double tor;
  //  pc4backbone;//c4 p c4...
  //the backbone: O5' C5' C4' C3' O3' P
  vector<vector<double> > backbone;
  //the full backbone: O5' C5' C4' O4' C3' O3' C2' C1' P OP1 OP2
  //  vector<vector<double> > fullbackbone;
  vector<vector<double> > fulltertiary;
  vector<double> last0(3,0);
  vector<double> last1(3,0);
  //  for(int t=1;t<length_seq;t++)
  //  for(int t=-1;t<=n-1;t++) {
  for(int t=-1; t<=n-1; t++) {
    double angel_p_c4_p=0,angel_c4_p_c4=0;
    double bondlen_p_c4p=sampled_bondlen[(t+1)*2];//3.84;//m_pModel->ExpDistBondpc[int(drand48() * (m_pModel->ExpDistBondpc.size()-1))];
    double bondlen_c4p_p=sampled_bondlen[(t+1)*2+1];//3.84;//m_pModel->ExpDistBondcp[int(drand48() * (m_pModel->ExpDistBondcp.size()-1))];
    bondlen_p_c4p=3.84;
    bondlen_c4p_p=3.84;
    double bondlen_c4c4 = sqrt(bondlen_p_c4p*bondlen_p_c4p+ bondlen_c4p_p*bondlen_c4p_p - 2*bondlen_c4p_p * bondlen_p_c4p * cos(angel_c4_p_c4));
    double bondlen_pp = sqrt(bondlen_p_c4p*bondlen_p_c4p+ bondlen_c4p_p*bondlen_c4p_p - 2*bondlen_c4p_p * bondlen_p_c4p * cos(angel_p_c4_p) );
    double chi;
    //compute p-c4-p-c4 backbone 's location
    //this atom =lastvector
    //-------1st, Compute atom C4'
    //    pc4backbone.push_back(last1
    if(t==-1) {
      angel_p_c4_p=PI-1.301;//m_pModel->ExpDistAnglepcp[int(drand48() * (m_pModel->ExpDistAnglepcp.size()-1))];
      angel_c4_p_c4=PI-1.369;//m_pModel->ExpDistAnglecpc[int(drand48() * (m_pModel->ExpDistAnglecpc.size()-1))];
      angel_p_c4_p=3.1415-1.301;
      angel_c4_p_c4=3.1415-1.369;
      //initialize
      //C4' is decided.
      vector<double> c(3,0);
      pc4backbone.push_back(c);// first P 0 0 0
      c[0]=bondlen_p_c4p;
      pc4backbone.push_back(c);//first C4' len 0 0
      last1=c;//ready to do seconde nt, initial last1
      last0[0]= bondlen_c4p_p*cos(angel_c4_p_c4);//ready to do seconde nt, initial last0
      last0[1]= bondlen_c4p_p*sin(angel_c4_p_c4);
      //last0 is nearer to current than last1
      c=vecplus(pc4backbone[pc4backbone.size()-1],last0);
      pc4backbone.push_back(c); //second P
      continue;//go into t=0;
    } else {
      angel_p_c4_p=torbin[t][3];
      angel_c4_p_c4=torbin[t][2];
      //--------------compute C4'
      //tor = nattors[ti];ti++;//torbin[predicted_label[t]][0]+(rand() % 100)/100*3.14/10 ;;
      tor = torbin[t][0];//+(rand() % 100)/100*3.14/10 ;;
      //  tor=nattors[ti];ti++;
      double bonds3 = pow(bondlen_c4p_p*sin(angel_c4_p_c4),2 ) + pow(bondlen_c4p_p*sin(angel_p_c4_p),2) - 2*cos(tor )*bondlen_c4p_p*sin(angel_c4_p_c4) * bondlen_c4p_p*sin(angel_p_c4_p)  + pow(bondlen_p_c4p- bondlen_c4p_p*cos(PI-angel_p_c4_p)- bondlen_c4p_p*cos(PI-angel_c4_p_c4), 2);
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
      double an1=angel_c4_p_c4;//a changed planar angle
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
      vector<double> c=vecplus(pc4backbone[pc4backbone.size()-1],vecc4);
      pc4backbone.push_back(c);
      for(int ni=0; ni<pc4backbone.size()-2; ni++) {
        double d=vecdist(pc4backbone[ni],pc4backbone[pc4backbone.size()-1]);
        if(d<clashdist) {
          nclash++;
        }
      }
      last1=last0;
      last0=vecc4;
    }
    //-------2nd, Compute atom P
    tor=torbin[t][1];
    double bonds3 = pow(bondlen_p_c4p*sin(angel_c4_p_c4), 2) + pow(bondlen_p_c4p*sin(angel_p_c4_p), 2) - 2*cos(tor)*bondlen_p_c4p*sin(angel_p_c4_p) * bondlen_p_c4p*sin(angel_c4_p_c4)  + pow(bondlen_c4p_p-bondlen_p_c4p*cos(PI-angel_c4_p_c4)-bondlen_p_c4p*cos(PI-angel_p_c4_p), 2);
    bonds3 = sqrt(bonds3);
    double r= bondlen_c4p_p;
    double a0= angel_c4_p_c4;
    //establish local coordinate system
    vector<double> ex=last0;
    vecnormalize(&ex);
    double last1ex=innerprod(last1,ex);
    vector<double> ey=vecminus(last1,vecscale(ex,last1ex));
    vecnormalize(&ey);
    vector<double> ez=outprod(ex,ey);
    double an1=angel_p_c4_p;//a changed planar angle
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
    for(int ni=0; ni<pc4backbone.size()-2; ni++) {
      double d=vecdist(pc4backbone[ni],pc4backbone[pc4backbone.size()-1]);
      if(d<clashdist) {
        nclash++;
        //	if(DEBUG)cerr<<ni<<" "<<pc4backbone.size()-1<<" clash\n";
        //	return;
      }
    }
    last1=last0;
    last0=vecc4;
  }
}
double SEQUENCE::idxtor(int i,int ord)
{
  //current torsion on P-C4'
  if(i<0)return -1;
  double tr;
  double xyz4[12];
  if(ord==0) {
    if(i>length_seq-1)return -1;
    for(int j=0; j<3; j++)
      xyz4[j]=outstru[2*i][j];
    for(int j=0; j<3; j++)
      xyz4[j+3]=outstru[2*i+1][j];
    for(int j=0; j<3; j++)
      xyz4[j+6]=outstru[2*i+2][j];
    for(int j=0; j<3; j++)
      xyz4[j+9]=outstru[2*i+3][j];
    tr=torsion(xyz4);
    //    if(DEBUG)cout<<tr<<" ";
  } else {
    if(i>length_seq-2)return -1;
    //torsion on C4'-right P
    for(int j=0; j<3; j++)
      xyz4[j]=outstru[2*i+1][j];
    for(int j=0; j<3; j++)
      xyz4[j+3]=outstru[2*i+2][j];
    for(int j=0; j<3; j++)
      xyz4[j+6]=outstru[2*i+3][j];
    for(int j=0; j<3; j++)
      xyz4[j+9]=outstru[2*i+4][j];
    tr=torsion(xyz4);
    //      if(DEBUG)cout<<tr<<" ";
  }
  return tr;
}
double SEQUENCE::idxtor2(int i,int ord)
{
  //current torsion on P-C4'
  if(i<0)return -1;
  double tr;
  double xyz4[12];
  if(ord==0) {
    if(i>tlength-1)return -1;
    if(i==0)i=1;
    for(int j=0; j<3; j++)
      xyz4[j]=pc4backbone[2*i-1][j];
    for(int j=0; j<3; j++)
      xyz4[j+3]=pc4backbone[2*i][j];
    for(int j=0; j<3; j++)
      xyz4[j+6]=pc4backbone[2*i+1][j];
    for(int j=0; j<3; j++)
      xyz4[j+9]=pc4backbone[2*i+2][j];
    tr=torsion(xyz4);
    //    if(DEBUG)cout<<tr<<" ";
  } else {
    if(i>tlength-2)i=tlength-2;
    //torsion on C4'-right P
    for(int j=0; j<3; j++)
      xyz4[j]=pc4backbone[2*i][j];
    for(int j=0; j<3; j++)
      xyz4[j+3]=pc4backbone[2*i+1][j];
    for(int j=0; j<3; j++)
      xyz4[j+6]=pc4backbone[2*i+2][j];
    for(int j=0; j<3; j++)
      xyz4[j+9]=pc4backbone[2*i+3][j];
    tr=torsion(xyz4);
    //      if(DEBUG)cout<<tr<<" ";
  }
  return tr;
}
void SEQUENCE::RebuildMore(int beg, int end)
{
//   for(int i=0;i<fullbackbone.size();i++)
//   {
//     delete fullbackbone[i];
//   }
//   for(int i=0;i<allresstru.size();i++)
//   {
//     delete allresstru[i];
//   }
//  fullbackbone.clear();
//  allresstru.clear();
//  if(DEBUG)cerr<<"RebuildMore: "<<end-beg+1<<endl;
  clock_t ts=clock(),te;
  if(fullbackbone.size()==0) {
    for(int i=0; i<length_seq; i++) {
      vector<double> x;
      fullbackbone.push_back(x);
      allresstru.push_back(x);
      alltt.push_back(x);
    }
  }
  double angel_p_c4_p=0;//PI-m_pModel->ExpDistAnglepcp[int(drand48() * (m_pModel->ExpDistAnglepcp.size()-1))];
  double angel_c4_p_c4=0;//PI-m_pModel->ExpDistAnglecpc[int(drand48() * (m_pModel->ExpDistAnglecpc.size()-1))];
  double bondlen_p_c4p=m_pModel->ExpDistBondpc[int(drand48() * (m_pModel->ExpDistBondpc.size()-1))];
  double bondlen_c4p_p=m_pModel->ExpDistBondcp[int(drand48() * (m_pModel->ExpDistBondcp.size()-1))];
  const double clashdist=1.8;
  vector<vector<double> > &torbin=sampcurr;
  clashlist.clear();
  nclashbb=0;
  nclashrb=0;
  nclashrr=0;
  //  nclash=0;
  int reflag=0;
  if(beg>0||end<length_seq-1) {
    //    if(DEBUG)cerr<<"rebuild more parts\n";
    reflag=1;
  }
  for(int i=beg; i<=end; i++) {
    double angel_p_c4_p=torbin[i][3] ;//PI-m_pModel->ExpDistAnglepcp[int(drand48() * (m_pModel->ExpDistAnglepcp.size()-1))];
    double angel_c4_p_c4=torbin[i][2];//PI-m_pModel->ExpDistAnglecpc[int(drand48() * (m_pModel->ExpDistAnglecpc.size()-1))];
    double bondlen_p_c4p=m_pModel->ExpDistBondpc[int(drand48() * (m_pModel->ExpDistBondpc.size()-1))];
    double bondlen_c4p_p=m_pModel->ExpDistBondcp[int(drand48() * (m_pModel->ExpDistBondcp.size()-1))];
    //stick other backbone atoms to p-c4 backbone from
    //    double tor=torbin[i][1];
    //    bondlen_c4c4 = sqrt(bondlen_p_c4p*bondlen_p_c4p+ bondlen_c4p_p*bondlen_c4p_p - 2*bondlen_c4p_p * bondlen_p_c4p * cos(angel_c4_p_c4));
    //bondlen_pp = sqrt(bondlen_p_c4p*bondlen_p_c4p+ bondlen_c4p_p*bondlen_c4p_p - 2*bondlen_c4p_p * bondlen_p_c4p * cos(angel_p_c4_p) );
    //    double bondlen_c4p = pow( bondlen_c4p_p*sin(angel_c4_p_c4),2 ) + pow(bondlen_c4p_p*sin(angel_p_c4_p), 2) - 2*cos(tor)*bondlen_c4p_p*sin(angel_c4_p_c4) * bondlen_c4p_p*sin(angel_p_c4_p)  + pow(bondlen_p_c4p-bondlen_c4p_p*cos(angel_p_c4_p)-bondlen_c4p_p*cos(angel_c4_p_c4),2);
    //bondlen_c4p = sqrt(bondlen_c4p);
    //FOR TEST REBUILDMORE, we compute bondlen_c4p from native structure
    //    double bondlen_c4p=dist(native[i*2],native[(i+1)*2+1]);
    vector<double> one_tt;//index at position i
    for(int k=i-1; k<=i+1; k++) {
      one_tt.push_back(idxtor(k,0));
      one_tt.push_back(idxtor(k,1));
    }
//     double x[9];
//     for(int xi=0;xi<3;xi++)
//       x[xi]=native[i*2+1][xi];
//     for(int xi=0;xi<3;xi++)
//       x[xi+3]=native[i*2+2][xi];
//     for(int xi=0;xi<3;xi++)
//       x[xi+6]=native[i*2+3][xi];
    //use torsion centers , do not forget to change the dimension of centers.
    one_tt.push_back(torbin[i][2]);
    one_tt.push_back(torbin[i][3]);
    one_tt.push_back(torbin[i][4]);
    //    one_tt.
    alltt[i]=one_tt;
  }
  //stick residue substructure by searching  resfraglib
  double  tsum1=0,tsum2=0,tsum3=0;
  for(int i=beg; i<=end; i++) {
    //find fitting backbone fragment
    vector<double> ntstru;
    //ntstru is in a local frame, include other atoms on backbone
    //recover the local frame system.
    vector<vector<double> > localvecs;
    int pos0=i*2;
    if(!reflag) {
      for(int j=0; j<3; j++) {
        //      localvecs.push_back(pc4backbone[pos0+j]);//leftC4' , P, C4'
        vector<double> x;
        x.push_back(outstru[pos0+j][0]);
        x.push_back(outstru[pos0+j][1]);
        x.push_back(outstru[pos0+j][2]);
        localvecs.push_back(x);
      }
      vector<double> nextp;
      if(pos0+3<length_seq*2+2)
        for(int j=0; j<3; j++) {
          nextp.push_back(outstru[pos0+3][0]);
          nextp.push_back(outstru[pos0+3][1]);
          nextp.push_back(outstru[pos0+3][2]);
        }
      ts=clock();
      ntstru=m_pModel->getbackbone(alltt[i],aaseq[i+1],localvecs, nextp);
      te=clock();
      tsum1+=(te-ts-0.0)/CLOCKS_PER_SEC;
      m_pModel->retransformation(localvecs,ntstru);
      fullbackbone[i]=ntstru;
    }
    long int nrnd=drand48() * (m_pModel->ExpDistChi.size()-1);
    double onechi=m_pModel->ExpDistChi[nrnd];//chi[i+1]
    vector<double> resstru=m_pModel->getresstru(getseq(i+1));
    //compute C1' N9/6 C8/6 from bond lengths and torsion chi
    ts=te;
    localvecs=m_pModel->getC1NC(fullbackbone[i],onechi,getseq(i+1));
    m_pModel->retransformation(localvecs,resstru);
    allresstru[i]=resstru;
  }
  //  if(DEBUG)cerr<<"time in kdtree "<<tsum1<<endl;
  //check clash on backbone
  /*temprarily close backbone clashcheck, we believe the check in rebuild()
  for(int i=0;i<length_seq;i++)
  {
    vector<double> ntstru=fullbackbone[i];
    for(int ni=1;ni<6;ni++)//check 6 atoms from O5' to right P
    {
      vector<double> x;
      x.insert(x.end(),ntstru.begin()+(ni+3)*3,ntstru.begin()+(ni+3)*3+3);
      for(int nf=0;nf<i-1;nf++)//i should be treated separately
  for(int ng=0;ng<fullbackbone[nf].size()/3;ng++)
  {
    vector<double> y;
    y.insert(y.end(),fullbackbone[nf].begin()+ng*3, fullbackbone[nf].begin()+ng*3+3);
    if(vecdist(x,y)<clashdist){
        nclash++;
        //if(nclash>10)return;
        //	   if(DEBUG)cerr<<"clash "<<i<<" "<<ni<<" "<<nf<<" "<<ng<<" "<<vecdist(x,y)<<endl;
        //	   if(DEBUG)cerr<<x[0]<<" "<<x[1]<<" "<<x[2]<<endl;
    }
  }
    }
  }
  */
  te=clock();
  //  cerr << "time used in rebuildmore: rebuildmore first, " << (te-ts-0.0)/CLOCKS_PER_SEC << " seconds." << endl;
  ts=te;
  //check clash on residue
  for(int i=0; i<length_seq; i++) {
    int clashflag=0;
    vector<double> resstru=allresstru[i];
    vector<double> center1;// c1' of this ribonucl.
    center1.insert(center1.end(),resstru.begin(),resstru.begin()+3);
    for(int ni=1; ni<resstru.size()/3; ni++) { //check residue atoms, skip first atom, which is C1' on ribose.
      //only check partial atoms on base
      //      if(ni % 2)continue;
      vector<double> x;
      x.insert(x.end(),resstru.begin()+ni*3,resstru.begin()+ni*3+3);
      int nf0;
//       if(i>=end)
// 	nf0=beg;
//       else
// 	nf0=0;
      for(int nf=i+1; nf<length_seq; nf++) { //i should be treated separately
        //if(nf==i)continue;
        //clash between residue and backbone.
        //first check distance, if distance > 12 (max diameter of ribonucleotide) , then skip
        vector<double> center2;// c1' of this ribonucl.
        center2.insert(center2.end(),allresstru[nf].begin(),allresstru[nf].begin()+3);
        if(vecdist(center1,center2)>12)continue;
        for(int ng=0; ng<fullbackbone[nf].size()/3; ng++) {
          vector<double> y;
          y.insert(y.end(),fullbackbone[nf].begin()+ng*3, fullbackbone[nf].begin()+ng*3+3);
          double d=vecdist(x,y);
          if(d<clashdist) {
            nclashrb++;
            //	    if(nclash+nclashrb>10)return;
            //	    if(nf==i-1)
            clashflag=1;
          } else
            ng=ng+(int)(d-clashdist)/1.7;
          //	  if(DEBUG)cerr<<"skip "<<(d-clashdist)/1.7<<endl;
        }
        //clash between residue and residue
        for(int ng=0; ng<allresstru[nf].size()/3; ng++) {
          vector<double> y;
          y.insert(y.end(),allresstru[nf].begin()+ng*3, allresstru[nf].begin()+ng*3+3);
          double d=vecdist(x,y);
          //	  if(abs(x[0]-y[0])>clashdist)continue;
          if(d<clashdist) {
            nclashrr++;
            //	    if(nclash+nclashrb+nclashrr>10)	    return;
            //	   if(allresstru[nf].size()/3-ng<m_pModel->atomnames[aaseq[i+1-1]].size())//neighbor residue clash
            //if(nf==i-1)
            clashflag=1;
          } else
            ng=ng+(int)(d-clashdist)/1.7;
          //	  if(DEBUG)cerr<<"skip "<<(d-clashdist)/1.7<<endl;
        }
      }
    }
    time_t t2;
    time(&t2);//time of stick resfrag
    //  printf("rebuildmore %.16f %.16f\n",difftime(t2,t1),difftime(t1,t0));
    // if(DEBUG)
    //for(int ik=0;ik<resstru.size();ik++)
    //  if(DEBUG)cerr<<resstru[ik]<<" ";
    if(DEBUG)    if(DEBUG)cerr<<endl;
    if(clashflag) {
      //      clashlist.push_back(i-1);
      clashlist.push_back(i);//only consider residue neighbor clash.
    }
  }
  te=clock();
//  cerr << "time used in rebuild: check clash" << (te-ts-0.0)/CLOCKS_PER_SEC << " seconds." << endl;
}
void SEQUENCE::RebuildFull() //with first and last atom
{
  //Buildfull atoms model with the first and the last atom.
  if(DEBUG)cerr<<"debug: fullbackbonesize "<<fullbackbone.size()<<endl;
  if(DEBUG)cerr<<"debug: sumpcurr "<<sampcurr.size()<<endl;
  if(fullbackbone.size()==0) {
    for(int i=0; i<tlength; i++) {
      vector<double> x;
      fullbackbone.push_back(x);
      allresstru.push_back(x);
      alltt.push_back(x);
    }
  }
  if(alltt.size()==0)
    alltt.resize(tlength, vector<double>(1,0));
  double angel_p_c4_p=0;//PI-m_pModel->ExpDistAnglepcp[int(drand48() * (m_pModel->ExpDistAnglepcp.size()-1))];
  double angel_c4_p_c4=0;//PI-m_pModel->ExpDistAnglecpc[int(drand48() * (m_pModel->ExpDistAnglecpc.size()-1))];
  double bondlen_p_c4p;//=m_pModel->ExpDistBondpc[int(drand48() * (m_pModel->ExpDistBondpc.size()-1))];
  double bondlen_c4p_p;//=m_pModel->ExpDistBondcp[int(drand48() * (m_pModel->ExpDistBondcp.size()-1))];
  //  bondlen_p_c4p=bondlen_c4p_p=3.84;
  vector<vector<double> > torbin;
  torbin.insert(torbin.begin(),sampcurr.begin(),sampcurr.end());
  clashlist.clear();
  nclashbb=0;
  nclashrb=0;
  nclashrr=0;
  //  nclash=0;
  int reflag=0;
  for(int i=0; i<tlength; i++) {
    double angel_p_c4_p,angel_c4_p_c4;
    if(i>=1 && i < tlength-1) {
      angel_p_c4_p=torbin[i-1][3] ;//PI-m_pModel->ExpDistAnglepcp[int(drand48() * (m_pModel->ExpDistAnglepcp.size()-1))];
      angel_c4_p_c4=torbin[i-1][2];//PI-m_pModel->ExpDistAnglecpc[int(drand48() * (m_pModel->ExpDistAnglecpc.size()-1))];
    }
//     double bondlen_p_c4p=m_pModel->ExpDistBondpc[int(drand48() * (m_pModel->ExpDistBondpc.size()-1))];
//     double bondlen_c4p_p=m_pModel->ExpDistBondcp[int(drand48() * (m_pModel->ExpDistBondcp.size()-1))];
    vector<double> one_tt;//index at position i, keep it as in bbfraglib
    //select some of them in getbackbone
    for(int k=i-1; k<=i+1; k++) {
      one_tt.push_back(idxtor2(k,0));
      one_tt.push_back(idxtor2(k,1));
    }
    //use torsion centers , do not forget to change the dimension of centers.
    one_tt.push_back(torbin[i][2]);
    one_tt.push_back(torbin[i][3]);
    one_tt.push_back(torbin[i][4]);
    alltt[i]=one_tt;
  }
  //stick residue substructure by searching  resfraglib
  for(int i=0; i<tlength; i++) {
    //find fitting backbone fragment
    vector<double> ntstru;
    //ntstru is in a local frame, include other atoms on backbone
    //recover the local frame system.
    vector<vector<double> > localvecs;
    vector<double> nextp;
    if(i==0) {
      //leftC4' , P
      vector<double> x(3,0);
      x[1]=-1;
      localvecs.push_back(x);
      localvecs.push_back(pc4backbone[0]);
      localvecs.push_back(pc4backbone[1]);
      nextp=pc4backbone[2];
    } else if(i<tlength-1) {
      int pos0=i*2;
      localvecs.push_back(pc4backbone[pos0-1]);
      localvecs.push_back(pc4backbone[pos0]);
      localvecs.push_back(pc4backbone[pos0+1]);
      nextp=pc4backbone[pos0+2];
    } else { //no nextP and we do not use this to choose a backbone fragment.
      int pos0=i*2;
      localvecs.push_back(pc4backbone[pos0-1]);
      localvecs.push_back(pc4backbone[pos0]);
      localvecs.push_back(pc4backbone[pos0+1]);
    }
    ntstru=m_pModel->getbackbone(alltt[i],aaseq[i],localvecs, nextp);//find from ANN library.
    m_pModel->retransformation(localvecs,ntstru);
    fullbackbone[i]=ntstru;
    long int nrnd=drand48() * (m_pModel->ExpDistChi.size()-1);
    double onechi;
    switch(atoi(m_pModel->params["CHI_DIST"].c_str())) {
    case 0:
      onechi=0;
      break;
    case 1://normal distribution
      onechi=pnormal(0.4,0.5);
      break;
    case 2://log-normal distribution
      onechi=plognormal(-0.8786, 0.9442);
      break;
    case 3://Expirical distribution
      onechi=m_pModel->ExpDistChi[nrnd];
    }
    //    onechi=0;
    //m_pModel->ExpDistChi[nrnd]+pnormal(0,0.1);//chi[i+1]
    vector<double> resstru=m_pModel->getresstru(getseq(i));
    //compute C1' N9/6 C8/6 from bond lengths and torsion chi
    localvecs=m_pModel->getC1NC(fullbackbone[i],onechi,getseq(i));
    m_pModel->retransformation(localvecs,resstru);
    allresstru[i]=resstru;
  }
  ComputeClash();
}
void SEQUENCE::ComputeClash()
{
  //check clash on residue
  const double clashdist=1.8;
  clashlist.clear();
  nclash=0;
  nclashrb=0;
  nclashrr=0;
  for(int i=0; i<tlength; i++) {
    int clashflag=0;
    vector<double> resstru=allresstru[i];
    vector<double> center1;// c1' of this ribonucl.
    center1.insert(center1.end(),resstru.begin(),resstru.begin()+3);
    for(int ni=1; ni<resstru.size()/3; ni++) { //check residue atoms, skip first atom, which is C1' on ribose.
      //only check partial atoms on base
      //      if(ni % 2)continue;
      vector<double> x;
      x.insert(x.end(),resstru.begin()+ni*3,resstru.begin()+ni*3+3);
      int nf0;
//       if(i>=end)
// 	nf0=beg;
//       else
// 	nf0=0;
      for(int nf=i+1; nf<length_seq; nf++) { //i should be treated separately
        //if(nf==i)continue;
        //clash between residue and backbone.
        //first check distance, if distance > 12 (max diameter of ribonucleotide) , then skip
        vector<double> center2;// c1' of this ribonucl.
        center2.insert(center2.end(),allresstru[nf].begin(),allresstru[nf].begin()+3);
        if(vecdist(center1,center2)>12)continue;
        for(int ng=0; ng<fullbackbone[nf].size()/3; ng++) {
          vector<double> y;
          y.insert(y.end(),fullbackbone[nf].begin()+ng*3, fullbackbone[nf].begin()+ng*3+3);
          double d=vecdist(x,y);
          if(d<clashdist) {
            nclashrb++;
            //	    if(nclash+nclashrb>10)return;
            //	    if(nf==i-1)
            clashflag=1;
          } else
            ng=ng+(int)(d-clashdist)/1.7;
          //	  if(DEBUG)cerr<<"skip "<<(d-clashdist)/1.7<<endl;
        }
        //clash between residue and residue
        for(int ng=0; ng<allresstru[nf].size()/3; ng++) {
          vector<double> y;
          y.insert(y.end(),allresstru[nf].begin()+ng*3, allresstru[nf].begin()+ng*3+3);
          double d=vecdist(x,y);
          //	  if(abs(x[0]-y[0])>clashdist)continue;
          if(d<clashdist) {
            nclashrr++;
            //	    if(nclash+nclashrb+nclashrr>10)	    return;
            //	   if(allresstru[nf].size()/3-ng<m_pModel->atomnames[aaseq[i+1-1]].size())//neighbor residue clash
            //if(nf==i-1)
            clashflag=1;
          } else
            ng=ng+(int)(d-clashdist)/1.7;
          //	  if(DEBUG)cerr<<"skip "<<(d-clashdist)/1.7<<endl;
        }
      }
      if(clashflag)
        clashlist.push_back(i);
    }
  }
}
Score SEQUENCE::Obj()  // observed label : log-likelihood`
{
  ComputeVi();
  ComputeForward();
  //ComputeBackward();
  CalcPartition();
  Score obj = -Partition;
  for(int t=0; t<length_seq; t++) {
    int leftState = GetObsState(t-1);
    //int currState = GetObsState(t);
    int currState = GetObsState(t);
    Score temp=ComputeScore(leftState,currState,t);
    obj+=temp;
  }
  return obj;
}
void SEQUENCE::accept_label()
{
  for(int i=0; i<length_seq; i++) {
    accepted_label[i]=proposed_label[i];
  }
}
void SEQUENCE::accept_tors()
{
  acptcurr.clear();
  for(int i=0; i<tlength; i++) {
    acptcurr.push_back(sampcurr[i]);
  }
  accept_chi=sampled_chi;
}
void SEQUENCE::ComputeObsProb()
{
  Score rst=ComputeScore(DUMMY,proposed_label[0],0);
  for(int t=1; t<length_seq; t++) {
    rst+=ComputeScore(proposed_label[t-1],proposed_label[t],t);
  }
  viterobsprob=-(rst-Partition)/length_seq;
  mapobsprob=0;
  for(int t=0; t<length_seq; t++) {
    mapobsprob+=predicted_allstates[t*m_pModel->num_label+proposed_label[t]];
  }
  mapobsprob=-mapobsprob/length_seq;
}
void SEQUENCE::ComputeViterbi()
{
  // Viterbi Matrix
  ScoreMatrix best(m_pModel->num_label,length_seq);
  best.Fill((Score)LogScore_ZERO);
  // TraceBack Matrix
  ScoreMatrix traceback(m_pModel->num_label,length_seq);
  traceback.Fill(DUMMY);
  // compute the scores for the first position
  for(int i=0; i<m_pModel->num_label; i++) {
    best(i,0)=ComputeScore(DUMMY,i,0);
  }
  // Compute the Viterbi Matrix
  for(int t=1; t<length_seq; t++) {
    for(int currState=0; currState<m_pModel->num_label; currState++) {
      for(int leftState=0; leftState<m_pModel->num_label; leftState++) {
        Score new_score;
        new_score = ComputeScore(leftState,currState,t) + best(leftState,t-1);
        if(new_score > best(currState,t)) {
          best(currState,t) = new_score;
          traceback(currState,t) = leftState;
        }
      }
    }
  }
  Score max_s = LogScore_ZERO;
  int last_state = 0;
  //Find the best last state.
  for(int i=0; i<m_pModel->num_label; i++)
    if(best(i,length_seq-1)>max_s)
      max_s = best(i,length_seq-1), last_state = i;
  //TraceBack
  for(int t=length_seq-1; t>=0; t--) {
    predicted_label[t]=last_state;
    int leftState=(int)traceback(last_state,t);
    last_state=leftState; // % m_pModel->num_label;
  }
}
void SEQUENCE::MAP1()  // Posterior Decoding (Marginal Probability Decoder)
{
  ComputeForward();
  ComputeBackward();
  CalcPartition();
  for(int t=0; t<length_seq; t++) {
    int idx = 0;
    Score maxS = LogScore_ZERO;
    for(int i=0; i<m_pModel->num_label; i++)
      predicted_allstates[t*m_pModel->num_label+i]=LogScore_ZERO;
    int pos = t*m_pModel->num_label;
    //        predicted_allstates[pos] -= Partition;//Store per AA probability
    for(int i=0; i<m_pModel->num_label; i++) {
      //          int label=num_label % m_pModel->num_label;
      Score s = (*backward)(i,t) + (*forward)(i,t) - Partition;
      int pos = t*m_pModel->num_label+ i ;
      LogScore_PLUS_EQUALS(predicted_allstates[pos], s);
      if(predicted_allstates[pos] > maxS) {
        maxS = predicted_allstates[pos];
        idx = i;
      }
    }
    predicted_label[t]=idx;
  }
}
void SEQUENCE::ComputeForward()
{
  forward->Fill(LogScore_ZERO);
  for(int i=0; i<m_pModel->num_label; i++) {
    (*forward)(i,0)=ComputeScore(DUMMY,i,0);
  }
  for(int t=1; t<length_seq; t++) {
    //from t=1,leftstate cannot be DUMMY,DUMMY
    for(int ts=m_pModel->num_label; ts<m_pModel->nTrans; ts++) {
      int leftState=m_pModel->getleftstate(ts);
      int currState=m_pModel->getrightstate(ts);
      if( (t==1 && leftState >= m_pModel->num_label) || (t>1 && leftState < m_pModel->num_label)) continue;
      if( currState< m_pModel->num_label) {
        if(DEBUG)cerr<<"err";
        getchar();
      }
      Score new_score = ComputeScore(leftState,currState,t) + (*forward)(leftState,t-1) ;
      LogScore_PLUS_EQUALS((*forward)(currState,t),new_score);
    }
  }
}
void SEQUENCE::ComputeBackward()
{
  //Compute p(Xn+1,..XN|Zn )
  backward->Fill(LogScore_ZERO);
  for(int i=0; i<m_pModel->num_state; i++) {
    (*backward)(i,length_seq-1)=0;
  }
  for(int t=length_seq-2; t>=0; t--) {
    for(int ts=0; ts<m_pModel->nTrans; ts++) {
      int currState=m_pModel->getleftstate(ts);
      int rightState=m_pModel->getrightstate(ts);
      //Sum of combination prob from different left state(2-label) to currlabel.
      if(rightState<20)continue;
      if((t==0 && currState >=m_pModel->num_label )||(t>0 && currState < m_pModel->num_label ) ) continue;
      Score new_score = ComputeScore(currState,rightState,t+1)+ (*backward)(rightState,t+1);
      LogScore_PLUS_EQUALS((*backward)(currState,t),new_score );
    }
  }
}
void SEQUENCE::ComputeVi()
{
  //CRF done
  arrVi.resize(m_pModel->num_state, length_seq);
  m_pModel->memory.resize(length_seq,m_pModel->num_state);
  int num_label = m_pModel->num_label;
  for (int pos=0; pos<length_seq; pos++)
    for (int currState=0; currState<m_pModel->num_state; currState++) {
      if((pos==0 && currState>=m_pModel->num_label) || (pos>0 && currState<m_pModel->num_label))continue;
      int weightLStart = m_pModel->LocalWeights0 + currState * m_pModel->dim_features;
      Score score = 0;
      //Mutiply neurons output and weights
      for(int k=0; k<m_pModel->dim_features; k++) {
        Score *f=getFeatures(pos);
        score += m_pModel->weights[weightLStart++]* (*(f+k));
      }
      arrVi(currState, pos) = score;
    }
}
Score SEQUENCE::ComputeScore(int leftState, int currState, int pos) //@@@
{
  //CRF done.
  int postrans= m_pModel->gettransidx(leftState,currState);
  //  Score score = m_pModel->weights[(1 + leftState)*m_pModel->num_label + currState]+arrVi(currState, pos);
  /*
  if((pos==0 && currState>=m_pModel->num_label) ||
     (pos>0 && currState<m_pModel->num_label)||
     (pos==0 && leftState!=-1) ||
     (pos==1 && leftState>=m_pModel->num_label) ||
     (pos==1 && leftState==-1) ||
     (pos>1 && leftState<m_pModel->num_label)||
     (leftState!=-1 && leftState % m_pModel->num_label!=currState/m_pModel->num_label -1 ) )
  {
    if(DEBUG)cerr<<"ComputeScore err";
    getchar();
    }*/
  Score score;
  if((leftState!=DUMMY) && ((leftState %  m_pModel->num_label) != (currState /m_pModel->num_label -1))) {
    if(DEBUG)cerr<<"Check computescore error:"<<leftState %  m_pModel->num_label<<","<<currState /m_pModel->num_label -1<<"\n";
    getchar();
  }
  if(postrans!=-1)
    score = m_pModel->weights[postrans]+arrVi(currState, pos);
  else {
    score = arrVi(currState, pos);
    //    if(DEBUG)cerr<<"-1";
    //getchar();
  }
  //exit(0);
  return score;
}
double SEQUENCE::ntsim(int i,int j)
{
  //in fact, we want to compute how much two nucleode can interact with each other
  //simple way is return 2 if au or cg, 1 of gu other 0
  double rst=0;
  if(obs_feature[i][0]==1 &&  obs_feature[j][3]==1) { //a-u
    rst=2;
  }
  if(obs_feature[j][0]==1 &&  obs_feature[i][3]==1) { //u-a
    rst=2;
  }
  if(obs_feature[i][1]==1 &&  obs_feature[j][2]==1) { //c-g
    rst=2;
  }
  if(obs_feature[j][2]==1 &&  obs_feature[i][1]==1) { //g-c
    rst=2;
  }
  if(obs_feature[i][1]==1 &&  obs_feature[j][3]==1) { //u-g
    rst=1;
  }
  if(obs_feature[j][3]==1 &&  obs_feature[i][1]==1) { //g-u
    rst=1;
  }
  return rst;
}
void  SEQUENCE::AddExtraFeature()
{
  int dim_conv=m_pModel->dim_conv;
  for(int t=0; t<length_seq; t++)
    for(int of=0; of<dim_conv; of++) {
      double feat=0;
      for(int j=t-(of+2)/2; j<t-(of+2)/2+(of+1); j++) {
        if(j<0 || j>=length_seq) continue;
        for(int k=0; k<8; k++) {
          if(obs_feature[j][k]==1 && k %2)feat++;
        }
      }
      obs_feature[t][m_pModel->dim_one_pos-dim_conv+of]=feat;
    }
}
void  SEQUENCE::AddConvFeature()
{
  AddExtraFeature();
  return;
  int lw=m_pModel->conv_len;
  int dim_conv=m_pModel->dim_conv;
  int conv_of=m_pModel->conv_of;
  int flag=m_pModel->conv_cis;
  double **new_obsfeat;
  new_obsfeat=new double*[length_seq];
  for(int k=0; k<length_seq; k++) {
    new_obsfeat[k]=new double[m_pModel->dim_one_pos];
  }
  for(int t=0; t<length_seq; t++)
    for(int of=1+conv_of; of<=dim_conv+conv_of; of++) {
      //compute mean
      /*
      double mean1=0;
      int featno=22;
      for(int j=0;j<lw;j++)
      {
      if(t-lw/2+j>=0 && t-lw/2+j <length_seq)
      mean1+=obs_feature[t-lw/2+j][featno];
      }
      double mean2=0;
      for(int j=0+of;j<lw+of;j++)
      {
      if(t-lw/2+j>=0 && t-lw/2+j <length_seq)
      mean2+=obs_feature[t-lw/2+j][featno];
      }
      */
      double convt=0;
      for(int j=0; j<lw; j++) {
        if(flag==0 && t-lw/2+j>=0 && t-lw/2+j<length_seq && t+of+lw-lw/2+lw-1-j>=0 && t+of+lw-lw/2+lw-1-j<length_seq ) {
          convt += ntsim(t-lw/2+j, t+of+lw-lw/2+lw-1-j);
        }
        if(flag!=0 && t-lw/2+j>=0 && t-lw/2+j<length_seq && t+of+lw-lw/2+j>=0 && t+of+lw-lw/2+j<length_seq ) {
          convt += ntsim(t-lw/2+j, t+of+lw-lw/2+j);
        }
        //[a bug of lw conv_of conv_len corrected]
      }
      convt=convt/lw;
      //      convt=0;
      obs_feature[t][m_pModel->dim_one_pos-dim_conv+of-conv_of-1]=convt;
    }
  /*
    for(int t=0;t<length_seq;t++)
    {
    for(int of=0;of<m_pModel->dim_one_pos+1;of++)
    {
    obs_feat[t][of]=obs_feature[t][of];
    }
    }
    obs_feature=new_obsfeat;*/
}
void SEQUENCE::maskfeature(int x)
{
  switch(x) {
  case 0: {
    break;
  }//all features}
  case 1: {
    //only sequence feature
    for(int t=0; t<length_seq; t++)
      for(int k=20; k<m_pModel->dim_one_pos; k++)
        obs_feature[t][k]=0;
    break;
  }
  case 2: {
    //sequence and convolution feature
    for(int t=0; t<length_seq; t++)
      for(int k=20; k<m_pModel->dim_one_pos-m_pModel->dim_conv; k++)
        obs_feature[t][k]=0;
    break;
  }
  case 3: {
    //sequence and secondary structure feature
    for(int t=0; t<length_seq; t++)
      for(int k=m_pModel->dim_one_pos-m_pModel->dim_conv; k<m_pModel->dim_one_pos; k++)
        obs_feature[t][k]=0;
    break;
  }
  }
}
void SEQUENCE::makeFeatures()
{
  //build features for local windows
  //deal with dense features and sparse features separately, said zy.
  for(int t=0; t<length_seq; t++) {
    int pivot = t*m_pModel->dim_features;
    for(int i=0; i<m_pModel->window_size; i++) {
      int offset = t+i-m_pModel->window_size/2;
      if(offset <0 || offset >=length_seq) {
        for(int j=0; j< m_pModel->dim_dense; j++)
          _features[pivot] = 0, pivot++;
        //          for(int j=dim_dense;j<dim_one_pos;j++)
        // _features[pivot]=0,pivot++;
      } else {
        for(int j=0; j<m_pModel->dim_dense; j++) {
          _features[pivot] = obs_feature[offset][j], pivot++;
        }
      }
    }
    //This is for sparse features, no need to consider it if not applied.
    for(int j= m_pModel->dim_dense; j< m_pModel->dim_one_pos-m_pModel->dim_conv; j++) {
      int offset = t;
      if(offset >=0 && offset <length_seq)
        _features[pivot]+=obs_feature[offset][j];
      pivot++;
    }
    //    _features[pivot] = 1;
  }
}
void SEQUENCE::CalcPartition()
{
  Partition = (Score)LogScore_ZERO;
  Score FP = (Score)LogScore_ZERO;
  for(int k=0; k<m_pModel->num_state; k++)
    LogScore_PLUS_EQUALS(Partition, (*forward)(k,length_seq-1));
}
Score* SEQUENCE::getFeatures(int pos)
{
  int offset;
  offset = pos* (m_pModel->dim_features);  //[TP]
  return _features+offset;
}
int SEQUENCE::GetObsLabel(int pos)
{
  if(pos<0 || pos>=length_seq) return DUMMY;
  return obs_label[pos];
}
int SEQUENCE::GetObsState(int pos)
{
  int ret;
  if(pos<0 || pos>=length_seq) ret=DUMMY;
  //return a second order state
  else if(pos>0)
    ret=(obs_label[pos-1]+1)*m_pModel->num_label + obs_label[pos];
  else
    ret=obs_label[pos];
  return ret;
}
void SEQUENCE::ComputeTestAccuracy()
{
  m_pModel->totalPos += length_seq;
  // comparison
  q3=0;
  for(int t=0; t<length_seq; t++) {
    if(obs_label[t]==proposed_label[t]) {
      q3++;
      m_pModel->totalCorrect++, m_pModel->apw+=1.0/length_seq;
      //      m_pModel->corrs[predicted_label[t]]++;
    }
    //    (*m_pModel->confMatrix)(obs_label[t],predicted_label[t])++;
  }
  /*
    for(int t=0; t<length_seq;t++)
    {
    vector<double> avators(m_pModel->torbin[0].size()-1,0);
    for(int i=0;i<m_pModel->torbin.size();i++)
    {
    for(int j=0;j<m_pModel->torbin[i].size()-1;j++)
    {
    avators[j]+=m_pModel->torbin[i][j]*exp(predicted_allstates[t*m_pModel->num_label+i]);
    }
    }
    for(int j=0;j<m_pModel->torbin[0].size()-1;j++)
    {
    //      m_pModel->avgdtor+=abs([predicted_label[t]][j]-m_pModel->torbin[obs_label[t]][j]);
    if(abs(avators[j]-m_pModel->torbin[obs_label[t]][j])<2*3.1415926-abs(avators[j]-m_pModel->torbin[obs_label[t]][j]))
    m_pModel->avgdtor+=abs(avators[j]-m_pModel->torbin[obs_label[t]][j]);
    else
    m_pModel->avgdtor+=2*3.1415926-abs(avators[j]-m_pModel->torbin[obs_label[t]][j]);
    }
    //    int j=m_pModel->torbin[0].size()-1;
    //m_pModel->avgdtor+=abs(m_pModel->torbin[predicted_label[t]][j]-m_pModel->torbin[obs_label[t]][j]);
    }
  */
  double diffsum=0;
  for(int t=0; t<length_seq; t++) {
    for(int k=0; k<4; k++) {
      double diff=abs(m_pModel->torbin[proposed_label[t]][k]-m_pModel->torbin[obs_label[t]][k]);
      if(diff>2*PI-diff)
        diffsum+=2*PI-diff;
      else
        diffsum+=diff;
    }
  }
  if(DEBUG)cerr<<"total diff "<<diffsum/length_seq<<endl;
}
void rnaCRFSampler::saysth0(int i, SEQUENCE* seq)
{
  vector<int> x;
  saysth(i,x,seq);
}
void rnaCRFSampler::saysth(int i,vector<int> sampleparts, SEQUENCE* seq)
{
  if(DEBUG)cerr<<"Iter.\t"<<proc_id<<"."<<i<<" ";
  if(DEBUG)cerr<<"nseg ";
  for(int nseg=0; nseg<sampleparts.size(); nseg++)
    if(DEBUG)cerr<<sampleparts[nseg]<<" ";
  //	  if(DEBUG)cerr<<" refuse "<<p<<" "<< seq->e_last-e_curr<<"\n";
  if(DEBUG)cerr<<" noclashrate "<< noclashdecoys*1.0/alldecoys;
  if(DEBUG)cerr<<" b "<<seq->nclash<<" rr "<<seq->nclashrr<<" rb "<<seq->nclashrb;
  if(DEBUG)cerr<<" nsampcurr "<<seq->sampcurr.size()<<endl;
  //  seq->showss();
  //seq->showclash();
  //
}
void rnaCRFSampler::reportaccept(int nfirst,SEQUENCE* seq, double e_curr, int i, double rslt, double e_less)
{
  if(nfirst==seq->etree.size()-1) {
    if(i>=90000) {
      char fname[100];
      //      sprintf(fname,"%s/decoy.proc%d.%d.%d.pdb",workdir.c_str(),proc_id ,nfirst,i);
      sprintf(fname,"%s/%s.decoy.pdb",workdir.c_str(),params["CHAINPRE"].c_str());
      switch(atoi(params["BUILDMETHOD"].c_str())) {
      case(0):
        savepdb2(seq,fname);
        break;
      case(1):
        savepdb3(seq,fname);
        break;
      case(2):
        savepdb3(seq,fname);
        break;
      }
      SEQUENCE *seq1=new SEQUENCE(*seq);
      es_rst.push_back(seq1);
    }
    if(DEBUG)cout<<"Proc "<<proc_id<<" Iter "<<nfirst<<"."<<i<<" rmsd "<<rslt<< " wholeEn "<<e_curr<<" e_less "<<e_less<<endl;
  } else {
    if(DEBUG)cout<<"Proc "<<proc_id<<" Iter "<<nfirst<<"."<<i<<" rmsd "<<rslt<< " Energy "<<e_curr<<" e_less "<<e_less <<endl;
    if(rslt<4||seq->e_last<2) {
      //char fname[100];
      //sprintf(fname,"%s/decoy.%d.%d.pdb",workdir.c_str(),nfirst,i);
      //      savepdb(seq,fname);
    }
  }
}
void rnaCRFSampler::ComputeSampleParts(SEQUENCE *seq, vector<int> &samplepos, vector<int> &sampleparts, int nfirst)
{
  int a,b;
  a=seq->sspairs[seq->etree[nfirst]][0];
  b=seq->sspairs[seq->etree[nfirst]][1];
  //a=0;
  //b=seq->length_seq-1;
  //    if(a<0 || b> seq->tlength_seq-1)return;
  if(samplepos[a]==1)
    sampleparts.push_back(a);
  for(int si=a; si<b; si++) {
    if(samplepos[si]==1 && samplepos[si+1]==0) {
      sampleparts.push_back(si);
    }
    if(samplepos[si]==0 && samplepos[si+1]==1)
      sampleparts.push_back(si+1);
  }
  if(samplepos[b]==1)
    sampleparts.push_back(b);
  for(int si= seq->sspairs[seq->etree[nfirst]][0]+1 ; si<=seq->sspairs[seq->etree[nfirst]][1]-1; si++) {
    //if(DEBUG)cerr<<si;
    if(si >= 0 && si < seq->tlength)
      samplepos[si]=0;
  }
  //output the positions with samplepos[0..tlength-1]==1 is to be sampled.
}
void rnaCRFSampler::SetSeed()
{
  unsigned int randomSeed=0;
  ifstream in("/dev/urandom",ios::in);
  in.read((char*)&randomSeed, sizeof(unsigned)/sizeof(char));
  in.close();
  unsigned id=getpid();
  randomSeed=randomSeed*randomSeed+id*id;
  //we can set the random seed at only the main function
  srand48(randomSeed);
  srand(randomSeed);
}
void rnaCRFSampler::SetParameters(int argc,char **argv)
{
  max_segment=7;
  phase=0;
  jobid = new char[1000];
  if(proc_id==0) {
    char* s=getenv("JOB_ID");
    //    if(DEBUG)cerr<<s<<endl;
    if(s!=NULL) {
      sprintf(jobid,"%s",s);
      //      pid_t pid = getpid();
      //sprintf(jobid,"%s%d",jobid,pid);
    } else {
      pid_t pid = getpid();
      sprintf(jobid,"%d",pid);
    }
  }
  if(DEBUG)cerr<<sizeof(jobid)<<"bcast ";
#ifdef _MPI
  MPI_Barrier(MPI_COMM_WORLD);
  MPI_Bcast(jobid,sizeof(jobid), MPI_CHAR, 0, MPI_COMM_WORLD);
  MPI_Barrier(MPI_COMM_WORLD);
#endif
  //nt type mapping A 0  G 1 C 2 U 3;
  nttypemap["A"]=0;
  nttypemap["G"]=1;
  nttypemap["C"]=2;
  nttypemap["U"]=3;
  nttypemap["T"]=3;
  resnames.push_back("A");
  resnames.push_back("G");
  resnames.push_back("C");
  resnames.push_back("U");
  params["CONF"]="rnaCRF.conf";
  string parakey,paraval;
  for(int i=0; i<floor((argc-1)/2.0); i++) {
    parakey.assign(argv[i*2+1]);
    paraval.assign(argv[i*2+2]);
    params[parakey]=paraval;
  }
  if(params["CONFDIR"]!=""){
    
    confdir=params["CONFDIR"];
    params["CONF"]=confdir+"/"+ params["CONF"];
    
  }
  
  
  ifstream param_in(params["CONF"].c_str());
  if(DEBUG)cerr<<"JOB_ID\t"<<jobid<<"\t";
  while(!param_in.eof()) {
    param_in>>parakey;
    param_in>>paraval;
    if(params[parakey].length()==0)	params[parakey]=paraval;
    if(paraval.length()>3 && paraval.substr(paraval.length()-4,4)==".lib"){
      
      params[parakey]=confdir+"/"+paraval;
      cerr<<parakey<<" "<<params[parakey]<<endl;
      
    }
    
  }
  
  map<string,string>::iterator it;
  for(it=params.begin(); it!=params.end(); it++)
    if(DEBUG)cerr<<(*it).first<<"\t"<<(*it).second <<"\t";
  if(DEBUG)cerr<<endl;
  //set learning rate, regularizaton lamda_v and lamda_w
  SetSeed();
  //learning_rate = 1;
  string modellist;
  modellist=params["MODELLIST"];
  nModel=second_order;
  /*
  if(modellist!="")
  {
    ifstream ifmodellist(modellist.c_str());
    while(!ifmodellist.eof())
    {
      string modelfile;
      string testfile;
      string trainfile;
      ifmodellist>>modelfile;
      if(!ifmodellist.eof()) ifmodellist>>trainfile;
      if(!ifmodellist.eof()) ifmodellist>>testfile;
      models.push_back(modelfile);
      testfiles.push_back(testfile);
      trainfiles.push_back(trainfile);
    }
    models.pop_back();
    if(DEBUG)cerr<<models.size()<<" models in total.\n";
  }
  */
  window_size = atoi(params["WINDOW_LEN"].c_str()); //best 13
  tstdata=params["TEST"];//.assign(argv[2]);
  binfile=params["TORSION"];
  labeltrans=params["TRANS"];
  chainpre=params["CHAINPRE"];
  workdir=workdir+"."+chainpre+"."+jobid;
  if(params["OUTDIR"]!="")
    workdir=params["OUTDIR"];//.assign(argv[3]);
  
  mkdir(workdir.c_str(), S_IRWXU | S_IRWXG);
  num_label=atoi(params["NUM_LABEL"].c_str());
  ReadTransition();
  model_file=workdir;
  if(DEBUG)cerr<<"param: "<<tstdata<<" "<<workdir<<"\n";
  dim_one_pos=atoi(params["FEAT_DIM"].c_str());
  featmask = atoi(params["FEATMASK"].c_str());//
  dim_conv = atoi(params["DIM_CONV"].c_str());//dimension of convolution feature
  dim_one_pos+=dim_conv;//add convolution feature in program
  dim_ps = atoi(params["DIM_PS"].c_str());//dimension of position specific feature
  dim_ps=dim_one_pos;
  dim_dense=dim_ps;
  dim_features = window_size*dim_ps;//To avoid increase the dimension much, we record the sparse part of the features.
  LocalWeights0 = nTrans;
  PsInterWeights0 = dim_features;
  num_state=(1+num_label)*num_label;
  num_params = LocalWeights0 + dim_features * num_state ;
  //  num_params += 1;//Add a null gate to present the offset.
  s_table=chainpre+"sam_table";
  multinumlabel=new int[nTrans];
  for(int ni=0; ni<nTrans; ni++) {
    multinumlabel[ni]=ni*num_label;
  }
  for(map<string,string>::iterator it=params.begin() ; it != params.end(); it++ )
    cerr << (*it).first << " => " << (*it).second << endl;
  conv_len = atoi(params["CONV_LEN"].c_str());//dimension of convolution feature
  conv_of = atoi(params["CONV_OF"].c_str());//dimension of convolution feature
  conv_cis = atoi(params["CONV_CIS"].c_str());
  lasso= atoi(params["LASSO"].c_str());
  clashcase = atoi(params["CLASHCASE"].c_str());
  scale=atof(params["ESCALE"].c_str());
  if(scale==0)scale=1;
  weights = new double[num_params];
  grad = new double[num_params];
  grad_sum = new double[num_params];
  corrs = new int[num_label];
  confMatrix = new ScoreMatrix(num_label,num_label);
  if(!proc_id) {
    cerr <<"num_params = " << num_params << endl;
    if(params["SMODEL"]!="") {
      ifstream fin(params["SMODEL"].c_str());
      if (fin.fail()) {
        exit(1);
      } else {
        cerr <<"open model success\n";
      }
      cerr << "Loading weights from " <<params["SMODEL"] << endl;
      string s="";
      while(s!="weights:") {
        fin>>s;
      }
      for(int i=0; i<num_params; i++) {
        if(fin.eof() && i<num_params-2) {
          if(DEBUG)cerr<<"SMODEL has less term\n";
        }
        fin >> weights[i];
      }
      fin.close();
    }
  }
  //read torsion centers of labels
  ifstream fin(binfile.c_str());
  while(!fin.eof()) {
    vector<double> tors;
    int dim_perlabel=5;
    for(int i=0; i<dim_perlabel; i++) {
      double x;
      fin>>x;
      tors.push_back(x);
    }
    torbin.push_back(tors);
  }
  fin.close();
  cerr<<"Torsion vector centers "<<torbin.size()<<" loaded\n";
  //standrad deviation of label clusters, normal distribution assumed
  ifstream finstd(params["stdlib"].c_str());
  while(!finstd.eof()) {
    vector<double> stds;
    int dim_perlabel=5;
    double null;
    finstd>>null;
    for(int i=0; i<dim_perlabel; i++) {
      double x;
      finstd>>x;
      stds.push_back(x);
    }
    //    stds.push_back(0.1);
    allstd.push_back(stds);
  }
  finstd.close();
  cerr<<"STD parameters "<<allstd.size()<<" loaded\n";
  finstd.open(params["stemdistr"].c_str());
  stemstors.resize(5,0);
  stemsstds.resize(5,0);
  if(finstd.good())cerr<<"open stemdistr OK.\n";
  for(int i=0; i<5; i++) {
    finstd>>stemstors[i];
    cerr<<stemstors[i]<<" ";
  }
  cerr<<endl;
  for(int i=0; i<5; i++)
    finstd>>stemsstds[i];
  finstd.close();
  cerr<<"stems distribution "<<stemstors.size()<<" loaded\n";
  //read atoms names for A G C U
  ifstream finatom(params["ATOMNAMES"].c_str());
  for(int ii=0; ii<2; ii++) {
    vector<string> onent;
    for(int i=0; i<22+ii; i++) { //A has 22 atoms, C has 23 atoms.
      string s;
      finatom>>s;
      onent.push_back(s);
      if(DEBUG)cerr<<" "<<s;
    }
    atomnames.push_back(onent);
    if(DEBUG)cerr<<endl;
  }
  for(int ii=0; ii<2; ii++) {
    vector<string> onent;
    for(int i=0; i<20; i++) {
      string s;
      finatom>>s;
      onent.push_back(s);
      if(DEBUG)cerr<<" "<<s;
    }
    atomnames.push_back(onent);
    if(DEBUG)cerr<<endl;
  }
  finatom.close();
  cerr<<"atomnames  read\n";

  ifstream finribose(params["ribose"].c_str());
  cerr<<"read ribose atoms\n";
  if(!finribose.good()) {
    cerr<<"read err\n";
  }
  for(int i=0; i<5; i++) {
    vector<double> xx(3);
    finribose>>xx[0];
    finribose>>xx[1];
    finribose>>xx[2];
    cerr<<xx[0]<<" "<<xx[1]<<" "<<xx[2]<<endl;
    puckerAtom.push_back(xx);
  }
  finribose.close();
  //read torsion chis into ExpDistChi as an experience distribution
  ReadExpDist(params["CHI_STAT"], ExpDistChi);
  ReadExpDist(params["bondpc"], ExpDistBondpc);
  ReadExpDist(params["bondcp"], ExpDistBondcp);
  ReadExpDist(params["anglepcp"], ExpDistAnglepcp);
  ReadExpDist(params["anglecpc"], ExpDistAnglecpc);
  cerr<<"Data loaded\n";
  /*
  vector<vector<int> > trans;
  fin.open(labeltrans.c_str());
  for(int i=0;i<num_label;i++)
  {
    vector<int> a(num_label,0);
    trans.push_back(a);
    for(int j=0;j<num_label;j++)
    {
      trans[i][j]++;
    }
  }
  while(!fin.eof())
  {
    int la,lb;
    fin>>la;
    fin>>lb;
    trans[la][lb]+=1000;
  }
  */
  /*
    for(int i=num_label;i<num_label*(num_label+1);i++)
    {
    reg[i] *= 1000.01/trans[i/num_label-1][i%num_label];
    if(DEBUG)cout<<reg[i]<<"  ";
    }
  */
  /*
    for(int i=0;i<num_label;i++)
    {
    for(int j=0;j<num_label;j++)
    {
    reg[i*(num_label+1)+j]*=vecdist(torbin[i],torbin[j])/(6.28);
    }
    }
  */
#ifdef _MPI
  MPI_Barrier(MPI_COMM_WORLD);
  MPI_Bcast(weights, num_params, MPI_DOUBLE, 0, MPI_COMM_WORLD);
  MPI_Barrier(MPI_COMM_WORLD);
#endif
}
void rnaCRFSampler::ReadTransition()
{
  //Reading possible transition between states.
  ifstream fintrans(params["known_transition"].c_str());
  fintrans>>nTrans;
  nTrans+=(num_label+1)*num_label;
  trans2idx=new int**[num_label+1];
  for(int j=0; j<num_label+1; j++) {
    trans2idx[j]=new int*[num_label+1];
    for(int k=0; k<num_label+1; k++) {
      trans2idx[j][k]=new int[num_label];
      for(int h=0; h<num_label; h++)
        trans2idx[j][k][h]=-1;
    }
  }
  idx2trans1=new int[nTrans];
  idx2trans2=new int[nTrans];
  idx2trans3=new int[nTrans];
  for(int x=0; x<num_label+1; x++)
    for(int y=0; y<num_label; y++) {
      int i=x*num_label+y;
      trans2idx[0][x][y]=i;
      idx2trans1[i]=-1;
      idx2trans2[i]=x-1;
      idx2trans3[i]=y;
    }
  for(int i=(num_label+1)*num_label; i<nTrans; i++) {
    int x,y,z;
    fintrans>>x;
    fintrans>>y;
    fintrans>>z;
    trans2idx[x+1][y+1][z]=i;
    idx2trans1[i]=x;
    idx2trans2[i]=y;
    idx2trans3[i]=z;
  }
  fintrans.close();
  if(DEBUG)cerr<<"nTrans "<<nTrans<<endl;
}
int rnaCRFSampler::getleftstate(int ts)
{
  return multinumlabel[idx2trans1[ts]+1]+idx2trans2[ts];
}
int rnaCRFSampler::getrightstate(int ts)
{
  return multinumlabel[idx2trans2[ts]+1]+idx2trans3[ts];
}
int  rnaCRFSampler::gettransidx(int lstate,int rstate)
{
  int rst=-1;
  int x=lstate / num_label - 1;
  int y=lstate % num_label;
  if(lstate==-1) {
    y=-1;
  }
  int z=rstate % num_label;
  rst = trans2idx[x+1][y+1][z];
  //  if((lstate!=-1 && y!=rstate/num_label-1)||(lstate==-1 && rstate>num_label)){
  //   rst=-1;if(DEBUG)cerr<<"error in transidx";
  //  getchar();
  // }
  //if(getleftstate(rst)!=lstate || getrightstate(rst)!=rstate||rst==-1)
  //{
  // if(DEBUG)cerr<<"gettransidx\n";
  // getchar();
  //}
  return rst;
}
void rnaCRFSampler::Initialize(int argc,char** argv)
{
  SetParameters(argc,argv);
  testData.clear();
  LoadData();
  if(DEBUG)cerr<<"make feature of tests\n";
  for(int i=0; i<num_tst; i++) {
    testData[i]->makeFeatures();
    testData[i]->ComputeVi();
  }
  cerr<<"Building Frag library";
  BuildLibFrag();
  if(params["BUILD"].length()>0) {
    clock_t ts=clock(),te;
    ComputeSampleTable();
    te=clock();
    if(DEBUG)cerr<<"computing sample table "<<(te-ts-0.0)/CLOCKS_PER_SEC<<endl;
    exit(0);
  }
  //  else
  if(params["USETABLE"].length()>0) {
    LoadSampleTable();
  }
  cerr<<"Building Frag library";
}
void rnaCRFSampler::BuildLibFrag()
{
  //put indices of bbfrag library in to kdtree keeping their order
  int dim=4;
  blf_dataPts = annAllocPts(bbfraglib.size(), dim);
  for (int i = 0; i < bbfraglib.size(); i++) {
    ANNpoint &p=blf_dataPts[i];
    for(int j=0; j<2; j++)
      p[j]=bbfraglib[i][j+2];
    for(int j=0; j<2; j++)
      p[j+2]=bbfraglib[i][j+6]*2;
    //    for(int j=0;j<3; j++)
    // p[j+5]=bbfraglib[i][j+9+3*9];
  }
  blf_kdTree = new ANNkd_tree(blf_dataPts,bbfraglib.size(),dim);
}
//int bypass;
void rnaCRFSampler::LoadData()
{
  vector<SEQUENCE*> tstDATA;
  int length_seq;
  double tmp;
  vector<string> nativestrulist;
  ifstream tst_in(tstdata.c_str());
  tst_in >> num_tst;
  for(int i=0; i<num_tst; i++) {
    if(num_tst!=1) {
      length_seq=num_tst;
    } else {
      tst_in >> length_seq;
    }
    if(DEBUG)cerr<<length_seq<<" ";
    SEQUENCE *seq = new SEQUENCE(length_seq, this);
    //read strufile name
    seq->length_seq=length_seq;
    seq->strufile = chainpre+".nat";
    seq->ssfile = chainpre+".natss";// using native ss.
    seq->torsfile= chainpre+".3tor";
    seq->chifile= chainpre+".chi";
    seq->seqfile= chainpre+".seq";
    if(params["SEQFILE"]!="")
      seq->seqfile=params["SEQFILE"];
    if(params["SSFILE"]!="")
      seq->ssfile=params["SSFILE"];
      
    string pdfile=chainpre;
    seq->chi.resize(seq->tlength,0);
    readpdb(seq,chainpre.c_str());
    string deltafile=chainpre+".delta";
    if(DEBUG)cerr<<" " <<seq->strufile<<" " <<seq->ssfile;
    for(int j=0; j<length_seq; j++) {
      int k;
      for(k=0; k<dim_one_pos-dim_conv; k++) {
        tst_in >> seq->obs_feature[j][k];
        //	if(k>=20)seq->obs_feature[j][k]=0;
      }
      //      seq->obs_feature[j][dim_one_pos] = 1;
    }
    seq->AddConvFeature();
    seq->maskfeature(featmask);
    for(int j=0; j<length_seq; j++) {
      tst_in >> seq->obs_label[j];
    }
    /*/read native structures
    //    double** native;
    ifstream fin(seq->strufile.c_str());
    int n;
    fin>>n;
    //  n=n-2;
    n=(n-1)*2;//length_seq*2+2
    seq->native=new double *[n];
    for(int k=0;k<n;k++)
    {
      seq->native[k]=new double[3];
      for(int j=0;j<3;j++)
      {
        fin>>seq->native[k][j];
      }
    }
    fin.close();
    if(DEBUG)cerr<<"native stru read\n";*/
    //read 3tor file
    /*
    ifstream fintors(seq->torsfile.c_str());
    for(int j=0;j<length_seq;j++)
    {
      vector<double> p;
      for(int ki=0;ki<5;ki++){
    double x;
    fintors>>x;
    p.push_back(x); // rnaview output ss pair  with atom order beginning from 1
      }
      seq->alltors.push_back(p);
    }
    fintors.close();
    if(DEBUG)cerr<<"tors file "<<seq->alltors.size()<<" read\n";*/
    //read fasta sequence
    ifstream finseq(seq->seqfile.c_str());
    if(!finseq.good())cerr<<"open seq file error\n";
    string fullseq;
    finseq>> fullseq;
    seq->aaseq=new int[fullseq.length()];
    if(DEBUG)cerr<<"\n"<<fullseq.length()<<" ";
    for(int j=0; j<fullseq.length(); j++) {
      string s="";
      s=s+fullseq[j];
      seq->aaseq[j]=nttypemap[s];
      if(DEBUG)cerr<<seq->aaseq[j];
    }
    if(DEBUG)cerr<<endl;
    finseq.close();
    //read ss pairs
    ifstream finss(seq->ssfile.c_str());
    int npairs;
    finss>>npairs;
    for(int j=0; j<npairs; j++) {
      vector<int> p;
      int x;
      finss>>x;
      p.push_back(x); // rnaview output ss pair  with residue number beginning from 1, it is real index, other than residue number in pdb
      finss>>x;
      p.push_back(x);
      seq->sspairs.push_back(p);
    }
    seq->BuildEnergyTree();
    seq->BuildStems();
    finss.close();
    if(DEBUG)cerr<<"ss pairs"<<seq->sspairs.size()<<" read\n";
    /*/read chi torsion file
    ifstream finchi(seq->chifile.c_str());
    for(int j=0;j<fullseq.length();j++)
    {
      double c;
      finchi>>c;
      seq->chi.push_back(c);
    }
    finchi.close();
    if(DEBUG)cerr<<"seq 0 chis "<<seq->chi.size()<<" read\n";*/
    /*/    ifstream findelta(deltafile.c_str());
    for(int j=0;j<length_seq;j++)
    {
      double c=0;
      //  findelta>>c;
      seq->tordelta.push_back(c);
    }
    //findelta.close();
    //read native full structure
    string finnatall;
    finnatall=chainpre+".bbfrag";
    string finresall=chainpre+".resfrag";
    double** allnatbb;
    int n_allnatbb=(seq->length_seq)*17;
    allnatbb=new double*[n_allnatbb]; //17 atoms include first N on residue.
    vector<vector<double *> >vallnative;
    ifstream finnat(finnatall.c_str());
    int num=0;
    for(int k=0;k<(seq->length_seq);k++)
    {
      vector<double *> tmp;
      string s;
      finnat>>s;
      for(int k1=0;k1<17;k1++)
      {
    double* x=new double[3];
    for(int j=0;j<3;j++)
    {
    finnat>>x[j];
    }
    if(k1 >=3 && k1 <=8 )
    tmp.push_back(x);
    if(k1 >=10 && k1 <=15)
    tmp.push_back(x);
      }
      vallnative.push_back(tmp);
      num+=tmp.size();
    }
    finnat.close();
    seq->allnatbb=new double*[num];//all atoms on native  backbone
    int k1=0;
    for(int k0=0;k0<vallnative.size();k0++)
    {
      for(int k=0;k<vallnative[k0].size();k++)
      {
    seq->allnatbb[k1]=new double[3];
    seq->allnatbb[k1][0]=vallnative[k0][k][0];
    seq->allnatbb[k1][1]=vallnative[k0][k][1];
    seq->allnatbb[k1][2]=vallnative[k0][k][2];
    k1++;
      }
    }
    if(DEBUG)cerr<<"native backbone loaded\n";
    //add atoms on native side chains.
    ifstream finres(finresall.c_str());
    int k0=0;
    for(int j=0;j<length_seq;j++)
    {
      string s;
      finres>>s;
      for(int k=0;k<atomnames[seq->aaseq[j+1]].size()-11;k++) //backbone has 12 atoms
      {
    double *x=new double[3];
    for(int ja=0;ja<3;ja++)
    {
    finres>>x[ja];
    }
    if(k>=1)
    {
    vallnative[j].push_back(x);
    num++;
    }
      }
    }
    finres.close();
    if(DEBUG)cerr<<"native side chain loaded\n";
    double** allnative;
    allnative=new double*[num];
    if(DEBUG)cerr<<"allnative\n";
    k1=0;
    for(int k0=0;k0<vallnative.size();k0++)
    {
      for(int k=0;k<vallnative[k0].size();k++)
      {
    allnative[k1]=new double[3];
    allnative[k1][0]=vallnative[k0][k][0];
    allnative[k1][1]=vallnative[k0][k][1];
    allnative[k1][2]=vallnative[k0][k][2];
    k1++;
      }
    }
    seq->allnative=allnative;
    */
    tstDATA.push_back(seq);
    tst_in.close();
    num_tst = tstDATA.size();
    cerr <<"\n procid "<< proc_id << " numtest " << num_tst << endl;
    for(int i=0; i<num_tst; i++) {
      testData.push_back(tstDATA[i]);
    }
  }
  //Read backbone fragment library
  //  string s="bbfraglib.50jc";
  string s=params["bbfraglib"];
  ifstream finbb(s.c_str());
  if(DEBUG)cerr<<"read bbfraglib";
  int line=0;
  while(!finbb.eof()) {
    vector<double> onefrag;
    string nttype;
    line++;
    //    if(line % 10==0)if(DEBUG)cerr<<line<<" ";
    finbb>>nttype;
    if(!finbb.good())break;
    bbfragtype.push_back(nttypemap[nttype]);
    double tr;
    for(int i=0; i<51+9; i++) { // 17 atoms on backbones
      //    if(DEBUG)cerr<<i<<" ";
      double x;
      finbb>>x;
      onefrag.push_back(x);
    }
    bbfraglib.push_back(onefrag);
  }
  if(DEBUG)cerr<<" "<<line<<"read ";
  //  makebbfraglib();
  finbb.close();
  //Read residue fragment library
  s=params["resfraglib"];
  ifstream finreslib(s.c_str());
  for(int k=0; k<4; k++) {
    int n;
    if(k<1)
      n=11;
    else if(k==1)
      n=12;
    else
      n=9;
    vector<double> onefrag;
    string null;
    finreslib>>null;//skip first lett
    for(int i=0; i<n*3; i++) { // 15 atoms on backbones
      double x;
      finreslib>>x;
      onefrag.push_back(x);
    }
    resfraglib.push_back(onefrag);
  }
  finreslib.close();
  if(DEBUG)cerr<<s<<" "<<resfraglib.size()<<" read\n";
  //  makebbfraglib();
  //set up transition mark matrix
}
void  rnaCRFSampler::makebbfraglib()
{
  for(int i=0; i<bbfraglib.size(); i++) {
//     vector<double> x;
//     x.push_back(bbfraglib[i][0]);
//     x.push_back(bbfraglib[i][1]);
//     x.push_back(bbfraglib[i][2]);
//     vector<double> y;
//     y.push_back(bbfraglib[i][27+0]);
//     y.push_back(bbfraglib[i][27+1]);
//     y.push_back(bbfraglib[i][27+2]);
    //    double bondlenc4p=vecdist(x,y);
    //bbfraglib[i].insert(bbfraglib[i].begin(), bondlenc4p);
    double t;
    double xyz4[12];
    for(int j=0; j<3; j++)
      xyz4[j]=bbfraglib[i][j+1];
    for(int j=0; j<3; j++)
      xyz4[j+3]=bbfraglib[i][j+9+1];
    for(int j=0; j<3; j++)
      xyz4[j+6]=bbfraglib[i][j+18+1];
    for(int j=0; j<3; j++)
      xyz4[j+9]=bbfraglib[i][j+27+1];
    //    t=torsion(xyz4);
    //int k=bbfraglib.size()-1-i;
    //if(k>0 && k < bbfraglib.size()-1)
    //   bbfraglib[k][0]=bbfraglib[k-1][0]+bbfraglib[k][0]*PI*2;
//     else
//       bbfraglib[k][0]=2.98+bbfraglib[k][0]*PI*2;//2.98 is average value.
  }
  //sort bbfraglib
  //  sort(bbfraglib.begin(),bbfraglib.end(), myfunction);
  ofstream fout("bbfrag.lib.sort");
  for(int i=0; i<bbfraglib.size(); i++) {
    for(int j=0; j<bbfraglib[i].size(); j++) {
      fout<<bbfraglib[i][j]<<" ";
    }
    fout<<endl;
  }
  fout.close();
}
vector<double>   rnaCRFSampler::getbackbone(vector<double> lens, int nttype, vector<vector<double> >localvecs, vector<double> np)
{
  time_t t1,t2,t3;
  time(&t1);
  int nrst=0;
  //*
  ANNpoint queryPt;
  ANNidxArray nnIdx; // near neighbor indices
  ANNdistArray dists; // near neighbor distances
  int k=34;
  double eps=0.00001;
  nnIdx = new ANNidx[k];// allocate near neigh indices
  dists = new ANNdist[k];
  //transform next np
  //if(DEBUG)cerr<<"np before " <<np[0]<<"  "<<np[1]<<"  "<<np[2]<<"  ";
  transformation(localvecs, np);
  //if(DEBUG)cerr<<"np inter " <<np[0]<<"  "<<np[1]<<"  "<<np[2]<<"  ";
  //  retransformation(localvecs, np);
  //  if(DEBUG)cerr<<"np after " <<np[0]<<"  "<<np[1]<<"  "<<np[2]<<" \n";
  int dim=4;
  queryPt = annAllocPt(dim);
  for(int i=0; i<2; i++)
    queryPt[i]=lens[i+2];
  for(int i=0; i<2; i++)
    queryPt[i+2]=lens[i+6]*2;
  //  for(int i=0;i<3;i++)
  //  queryPt[i+5]=np[i];
  blf_kdTree->annkSearch(queryPt,k,nnIdx,dists,eps);
  //*/
  double minnp=10000;
  int minrst=0;
  if(np.size()==0) {
    vector<double> rst(bbfraglib[minrst].begin()+lens.size(),bbfraglib[minrst].end());
    return rst;
  } else  for(int i=0; i<k; i++) {
      if(dists[i]>5)continue;
      //if(DEBUG)cerr<<" "<<dists[i];
      nrst= nnIdx[i];
      vector<double> ntstru(bbfraglib[nrst].begin()+lens.size(),bbfraglib[nrst].end());
      //retransformation(localvecs,ntstru);
      //comput dist between O3' and next P
      vector<double> curro3(ntstru.begin()+3*9,ntstru.begin()+3+3*9);
      double distnp=dist(np, curro3);
      if(minnp>distnp) {
        minnp=distnp;
        minrst=i;
        //      if(distnp<0.01)break;
      }
    }
  // if(DEBUG)cerr<<" \t---"<<dists[minrst]<<endl;
  //if(DEBUG)cerr<<minnp<<endl;
  nrst=nnIdx[minrst];
  vector<double> rst(bbfraglib[nrst].begin()+lens.size(),bbfraglib[nrst].end());
  //free memory
  delete nnIdx;
  delete dists;
  return rst;
  time(&t2);
  //compare one-by-one
  double near=100000;
  double near0=0.000001;
  int nrsv=1;
  for(int i=0; i<bbfraglib.size(); i++) {
    double ncurr=0;
    //    if(nttype!=bbfragtype[i])continue;
    for(int j=0; j<lens.size(); j++) {
      if(lens[j]<0)continue;
      double d1;
      d1=abs(lens[j]-bbfraglib[i][j]);
      if(d1>PI*2-d1)d1=PI*2-d1;
      ncurr+=d1;
      //      if(j==lens.size()-1)ncurr+=d1*50;
    }
    //    double t2;//planar angle P-C4'-rightP
    //testData[0]->allnear.push_back
    //    ncurr=ncurr;
    //
    if(ncurr<near) {
      //for prob. 1/nrsv keep current, and 1-1/nrsv keep prev.
      //      if(drand48()<=1.0/nrsv)
      //	nrst=i;
      //      nrsv++;
      near=ncurr;
      nrst=i;
    }
  }
  testData[0]->allnear.push_back(near);
  //  if(DEBUG)cerr<<near<<"\t "<<lens[0]<<" "<<lens[1]<<"-->"<<bbfraglib[nrst][0]<<" "<<bbfraglib[nrst][1]<<endl;
  //  if(DEBUG)cerr<<*(bbfraglib[nrst].begin()+6)<<" ";
  //   vector<double> rst(bbfraglib[nrst].begin()+lens.size(),bbfraglib[nrst].end());
  time(&t3);
  double dif = difftime (t2,t1);
  double dif1 = difftime (t3,t2);
  //  cerr << "getbbfrag " << dif <<" " <<dif1 << endl;
  //vector<double> rst(bbfraglib[nrst].begin()+lens.size(),bbfraglib[nrst].end());
  return rst;
  double len;
  //find nearest backbone structure by bondlength as indices.
  int b=0;
  int e=bbfraglib.size()-1;
  while(e>b+1) {
    if(bbfraglib[(b+e)/2][0]> len) {
      e=(b+e)/2;
    } else {
      b=(b+e)/2;
    }
  }
  if(len-bbfraglib[b][0] > bbfraglib[e][0]-len) b=e;
  if(DEBUG)cerr<<len<<"-->"<<bbfraglib[b][0]<<"\t";
  //   vector<double> rst(bbfraglib[b].begin()+1,bbfraglib[b].end());
  return rst;
}
vector<double>  rnaCRFSampler::getresstru(int nttype)
{
  return resfraglib[nttype];
}
vector<vector<double> >  rnaCRFSampler::getC1NC(vector<double>  &n, double chi, int aatype)
{
  double bondc1n;
  double bondnc86;
  double alpha;
  switch(aatype) {
  case(0):// A
    alpha=0.9067638;
    bondc1n=1.4637084;
    bondnc86=1.3741707;
    break;
  case(1):// G
    alpha=0.9182551;
    bondc1n=1.4608161;
    bondnc86=1.3751456;
    break;
  case(2):// C
    alpha=1.026392;
    bondc1n=1.476520;
    bondnc86=1.368732;
    break;
  case(3):// U
    alpha=1.017726;
    bondc1n=1.472282;
    bondnc86=1.378937;
    break;
  }
  vector<vector<double> > rst;
  vector<double> o4(3,0),c1(3,0),n96(3,0);
  for(int i=0; i<3; i++) o4[i]=n[12*3+i]; //O4'
  for(int i=0; i<3; i++) c1[i]=n[13*3+i]; //C1'
  for(int i=0; i<3; i++) n96[i]=n[16*3+i]; //N9/N6 depends on nt type,
  vector<double> ex=vecminus(n96,c1);
  normlize(ex);
  vector<double> ey=vecminus(o4,c1); //!!!check whether it is consistent with computation of chi
  ey=vercompo(ex,ey);
  normlize(ey);
  vector<double> ez=outprod(ex,ey);
  vector<double> c86(3,0);
  c86[0]=bondc1n+bondnc86*cos(alpha);
  c86[1]=bondnc86*sin(alpha)*cos(chi);
  c86[2]=bondnc86*sin(alpha)*sin(chi);
  vector<double>  c86s=vecscale(ex,c86[0]);
  c86s=vecplus(c86s, vecscale(ey,c86[1]));
  c86s=vecplus(c86s, vecscale(ez,c86[2]));
  c86s=vecplus(c86s, c1);
  rst.push_back(c1);
  rst.push_back(n96);
  rst.push_back(c86s);
  return rst;
}
void  rnaCRFSampler::transformation(vector<vector<double> > &lvecs, vector<double> &ntstru)
{
  vector<double> ex,ey,ez;
  ex=vecminus(lvecs[2],lvecs[1]);
  normlize(ex);
  ey=vecminus(lvecs[0],lvecs[1]);
  ey=vercompo(ex,ey);
  normlize(ey);
  ez=outprod(ex,ey);
  for(int i=0; i<ntstru.size()/3; i++) {
    vector<double> x(3,0);
    x[0]=ntstru[i*3];
    x[1]=ntstru[i*3+1];
    x[2]=ntstru[i*3+2];
    x=vecminus(x,lvecs[1]);
    vector<double> y(3,0);
    y[0]=innerprod(x,ex);
    y[1]=innerprod(x,ey);
    y[2]=innerprod(x,ez);
    ntstru[i*3] =y[0];
    ntstru[i*3+1]=y[1];
    ntstru[i*3+2]=y[2];
  }
}
void  rnaCRFSampler::retransformation(vector<vector<double> > &lvecs, vector<double> &ntstru)
{
  vector<double> ex,ey,ez;
  ex=vecminus(lvecs[2],lvecs[1]);
  normlize(ex);
  ey=vecminus(lvecs[0],lvecs[1]);
  ey=vercompo(ex,ey);
  normlize(ey);
  ez=outprod(ex,ey);
  for(int i=0; i<ntstru.size()/3; i++) {
    vector<double> x(3,0);
    x[0]=ntstru[i*3];
    x[1]=ntstru[i*3+1];
    x[2]=ntstru[i*3+2];
    vector<double> y(3,0);
    y=vecplus(y,vecscale(ex,x[0]));
    y=vecplus(y,vecscale(ey,x[1]));
    y=vecplus(y,vecscale(ez,x[2]));
    y=vecplus(y,lvecs[1]);
    ntstru[i*3] =y[0];
    ntstru[i*3+1]=y[1];
    ntstru[i*3+2]=y[2];
  }
}
void  rnaCRFSampler::sampletorsion(SEQUENCE* seq, int start, int end)
{
  //special handling stems
  double diff=0;
  for(int rk=start; rk<=end; rk++) { //rand() % ntrlb;
    vector<double> currtors;
    if(rk>0 && rk < seq->tlength-1) {
      if(InStems(seq,rk)) {
        currtors=stemstors;
        // 	for(int j=0;j<currtors.size();j++){
        //	  cerr<<currtors[j]<<" ";
        //re-select a torsion
// 	  currtors[j]=currtors[j]+pnormal(0,stemsstds[j]);
        //	diff+=abs(currtors[j]-seq->alltors[rk-1][j]);
        //}
        //cerr<<endl;
      } else {
        currtors=torbin[seq->proposed_label[rk-1]];
        for(int j=0; j<currtors.size(); j++) {
          //re-select a torsion
          currtors[j]=currtors[j]+pnormal(0,1.3*allstd[seq->proposed_label[rk-1]][j]);
          //	diff+=abs(currtors[j]-seq->alltors[rk-1][j]);
        }
      }
    } else { //sample head and tail residues.
      currtors=seq->sampcurr[int(drand48()*(seq->sampcurr.size()-1))];
      for(int j=0; j<currtors.size(); j++) {
        //re-select a torsion
        currtors[j]=currtors[j]+pnormal(0,0.3);
      }
    }
    seq->sampcurr[rk]=currtors;
  }
  //  vector<double> w(seq->tlength, ExpDistChi[22]);
  //vector<double> w1(2*seq->tlength,3.84);
  if(seq->accept_chi.size()==seq->sampled_chi.size())
    seq->sampled_chi=seq->accept_chi;
  switch(atoi(params["EXPDIST"].c_str())) {
  case(0)://using fix experience distribution
    //    seq->sampled_chi=w ;//+pnormal(0,0.1);
    //seq->sampled_bondlen=w1;
    break;
  case(1)://using median and an estimated std.
    //    seq->sampled_chi=w;//+pnormal(0,0.1);
    //seq->sampled_bondlen=w1;
    for(int i=start; i<=end; i++)
      seq->sampled_chi[i]=ExpDistChi[22]+pnormal(0,0.3);
    //for(int i=start*2;i<=end*2-1;i++)
    //  seq->sampled_bondlen[i]=3.84+pnormal(0,0.1);
    break;
    //  case(2)://using experience distribution
  }
  //  seq->sampcurr[0]=seq->sampcurr[int(drand48()*(seq->sampcurr.size()-1))]+pnormal(0,1);
  //seq->sampcurr[seq->sampcurr.size()-1]=seq->sampcurr[int(drand48()*(seq->sampcurr.size()-1))]+pnormal(0,1);
  //  if(DEBUG)cerr<< " torsion diff "<<diff/(end-start+1)<<endl;
}
void rnaCRFSampler::LoadSampleTable()
{
  clock_t ts=clock(),te;
  SEQUENCE* seq=testData[0];
  int len=seq->length_seq;
  int length_seq=seq->length_seq;
  int ntotal=len*max_segment*max_segment*(num_label+1)*(num_label+1)*(num_label+1);
  //  back_trace_dist.insert(back_trace_dist.begin(),ntotal,NULL);
  ifstream fin(s_table.c_str());
  while(!fin.eof())
    //  for(int i=0;i<back_trace_dist.size();i++)
  {
    double *p=new double[num_label];
    char *s=new char[num_label];
    memset(s,0,sizeof(char)*num_label);
    fin.read(s, sizeof(char)*num_label);
    double sum=0;
    for(int k=0; k<num_label; k++) {
      p[k]=(unsigned char)(s[k])*1.0/255;
      sum+=p[k];
    }
    for(int k=0; k<num_label; k++) {
      p[k]=p[k]/sum;
    }
    //       fin>>p[k];
    back_trace_dist.push_back(p);
    delete s;
    if(back_trace_dist.size()> ntotal)break;
  }
  te=clock();
  if(DEBUG)cerr<<"sampletable loaded in "<<(te-ts-0.0)/CLOCKS_PER_SEC<<endl;
  fin.close();
}
long inline rnaCRFSampler::getsampleidx(int start,int end, int i, int s1, int s2, int rlabel)
{
  int idx0=(start * max_segment + end-start) * max_segment + i-start;
  int idx1=((s1+1) * (num_label+1) + s2+1 )*(num_label+1) + rlabel+1;
  long idx2=idx0 * (num_label+1)*(num_label+1)*(num_label+1) + idx1;
  return idx2;
}
void rnaCRFSampler::ComputeSampleTable()
{
  SEQUENCE* seq=testData[0];
  int len=seq->length_seq;
  int length_seq=seq->length_seq;
  int ntotal=len*max_segment*max_segment*(num_label+1)*(num_label+1)*(num_label+1);
  Score *nullscore=NULL;
  back_trace_dist.insert(back_trace_dist.begin(),ntotal,nullscore);
  ScoreMatrix memory;
  int s1;//state at start-1
  for(int s1=-1; s1<num_label; s1++)
    for(int s2=-1; s2<num_label; s2++)
      for(int start=0; start<len; start++)
        for(int end=start; end<start+max_segment; end++) {
          if(end>len-1)continue;
          memory.resize(length_seq,num_state);
          for (int i =start; i <= end; i++) {
            for (int j = 0; j < num_state; j++) {
              double transition = 0.0;
              memory.set(i,j, 0.0);
              if((i==0 && j>=num_label) || (i>0 && j<num_label) )continue;
              if (i==0) {
                transition = 1;
              } else if (i==start) {
                int pos0;
                pos0=gettransidx(s1 ,j);
                if(pos0>=0)
                  transition =exp(weights[pos0]);
                else
                  transition =0;
              } else {
                for (int kl = -1; kl < num_label; kl++) {
                  int k=(kl+1)*num_label+ (j/num_label-1);
                  if((i-1==0 && k>=num_label) || (i-1>0 && k<num_label) )continue;
                  int pos0=gettransidx(k,j);
                  if(pos0>=0)
                    transition += memory(i-1, k) * exp(weights[pos0]);
                }
              }
              memory.set(i,j, transition * exp(seq->arrVi(j,i)) );
            }
            double rn = memory.row_normalize(i);
          }
          int h=-1; // h is the state at position i+1.
          for (int i = end; i >= start; i--) {
            for(int rlabel=0; rlabel<num_label; rlabel++) {
              if(i==end)
                h=s2;
              else
                h=rlabel;
              double* p=new double[num_state];
              memset(p, 0, sizeof(double)*num_state);
              double*  pl=new double[num_label];
              memset(pl,0,num_label*sizeof(double));
              double scale=0.0;
              for (int j = 0; j < num_state; j++) {
                if((i==0 && j>=num_label) || (i>0 && j<num_label) )continue;
                if (i==len-1) {
                  p[j] = memory(i,j);
                } else {
                  int pos0=gettransidx(j,(j % num_label+1)*num_label+h);
                  if(pos0>=0)
                    p[j] = memory(i,j) * exp(weights[pos0]); //Mi(j,h);
                }
                pl[j % num_label]+=p[j];
                scale+=p[j];
              }
              //normalize
              for(int k=0; k<num_label; k++)
                pl[k]=pl[k]/scale;
              //put pl[num_label] to tables;
              back_trace_dist[getsampleidx(start,end,i,s1,s2,h)]=pl;
              delete p;
            }
          }
        }
  //save them to disk
  ofstream fout(s_table.c_str(),ofstream::binary);
  double* nulldouble=new double[num_label];
  for(int i=0; i<num_label; i++)
    nulldouble[i]=-1;
  for(int i=0; i<back_trace_dist.size(); i++) {
    unsigned char *s=new unsigned char[num_label];
    double *p=back_trace_dist[i];
    if(p!=NULL)
      for(int j=0; j<num_label; j++)
        s[j]=(unsigned int)(p[j]*255);
    fout.write((char *)s, sizeof(char)*num_label);
//     for(int k=0;k<num_label;k++)
//       if(p!=NULL)
// 	sprintf(s,"%s %3f",s,p[k]);
//       else
// 	sprintf(s,"%s -1",s);
//     fout<<s;
//     fout<<endl;
  }
}
double*	rnaCRFSampler::getdist(int start,int end,int s1,int s2,int i,int rlabel)
{
  //i>start, i<end,start<end-7
  double* sampletable=back_trace_dist[getsampleidx(start,end,i,s1,s2,rlabel)];
  return sampletable;
}
void rnaCRFSampler::sample2order1(SEQUENCE* seq, int start, int end)
{
  //using a pre-computed table to sample
  clock_t ts=clock(),te;
  int seq_len=seq->length_seq;
  int i,j, k, num_labels = num_label;
  int* labels=new int[seq_len];
  if(end-start < seq->length_seq-1)
    for (i=0; i<seq_len; i++)
      labels[i]=seq->accepted_label[i];
  int useMAP=0;
  //resampling using backtracking method.  Note: Mi is not symmetric
  int h=-1; // h is the state at position i+1.
  if (end<seq_len-1)
    h = labels[end]*num_labels+labels[end+1]; //if end<seq_len-1, the state for positon end+1 is from the input sequence
  double* pl;
  for (i = end; i >= start; i--) {
    int s1,s2,rlabel;
    if(start==0)
      s1=-1;
    else
      s1=labels[start-1];
    if(end==seq_len-1)
      s2=-1;
    else
      s2=labels[end+1];
    if(i==end)
      rlabel=s2;
    else
      rlabel=labels[i+1];
    pl=getdist(start,end,s1,s2,i,rlabel);
    //loop through all the possible states for position i;
    int new_state=-1; // the newly sampled state for position i
    double rand_p=drand48();
    double sum_p=0.0 ;
    //    rand_p *= scale;
    for (j = 0; j < num_labels; j++) {
      if (rand_p>=sum_p && rand_p<sum_p + pl[j]) {
        new_state=j; //the state at position i is j
      }
      sum_p+=pl[j];
    }
    if (new_state == -1) {
      if(DEBUG)cerr<<"WARNING: sample2order(seq, start, end), no new state resampled for position " << i <<endl;
      if(DEBUG)cerr<<getsampleidx(start,end,i,s1,s2,rlabel)<<endl;
      for(int di=0; di<num_labels; di++)
        if(DEBUG)cerr<<pl[j]<<" ";
      if(DEBUG)cerr<<endl;
    }
    h= new_state;
    labels[i] = new_state;
  }
  for (i=0; i<seq_len; i++) {
    seq->proposed_label[i] = labels[i];
  }
  delete labels;
}
void  rnaCRFSampler::sample2order(SEQUENCE* seq, int start, int end)
{
  if(params["USETABLE"].length()>0) {
    sample2order1(seq,start,end);
    return;
  }
  clock_t ts=clock(),te;
  int seq_len=seq->length_seq;
  int i,j, k, num_labels = num_label;
  int* labels=new int[seq_len];
  if(end-start < seq->length_seq-1)
    for (i=0; i<seq_len; i++)
      labels[i]=seq->accepted_label[i];
  int useMAP=0;
  //calculate the sampling possibilities at every postition for each label, and store in memory(i, j)
  for (i =start; i <= end; i++) {
    // for all the possible labels at the position "i"
    for (j = 0; j < num_state; j++) {
      double transition = 0.0;
      memory.set(i,j, 0.0);
      if((i==0 && j>=num_labels) || (i>0 && j<num_labels) )continue;
      //      if (m_bUseAllowSet && mtrxAllow[i][j]==0) continue;
      //loop through all the possible labels at position i-1
      if (i==0) {
        transition = 1;
      } else if (i==start) {
        //if (i==1 || mtrMi[(labels[i-2]*num_labels+labels[i-1])*num_labels+j]==1)
        int pos0;
        pos0=gettransidx(labels[i-1] ,j);
        if(pos0>=0)
          transition =exp(weights[pos0]);
        else
          transition =0;
      } else {
        for (int kl = -1; kl < num_label; kl++) {
          int k=(kl+1)*num_label+ (j/num_label-1);
          if((i-1==0 && k>=num_labels) || (i-1>0 && k<num_labels) )continue;
          int pos0=gettransidx(k,j);
          if(pos0>=0)
            transition += memory(i-1, k) * exp(weights[pos0]);
        }
      }
      //if(i<10)if(DEBUG)cerr<<i<<"transition "<<transition<<endl;
      memory.set(i,j, transition * exp(seq->arrVi(j,i)) );
    }
    //cerr << endl;
    double rn = memory.row_normalize(i);
    //    if(i==20)    cerr << "scaling scale[" << i << "]=" << rn <<endl;
  }
  te=clock();
  //  if(DEBUG)cerr<<" "<<(te-ts)*1.0/CLOCKS_PER_SEC<<"in seconds\n";
  ts=te;
  //resampling using backtracking method.  Note: Mi is not symmetric
  //cerr << "resampling using backtracking method..."<<endl;
  int h=-1; // h is the state at position i+1.
  if (end<seq_len-1)
    h = labels[end+1]; //if end<seq_len-1, the state for positon end+1 is from the input sequence
  double* p=new double[num_state];
  memset(p, 0, sizeof(double)*num_state);
  //  if(DEBUG)cerr<<" h "<<h;
  //if(DEBUG)cerr<<"useMAP"<<useMAP<<endl;
  double  pl[num_labels];
  for (i = end; i >= start; i--) {
    memset(p, 0, sizeof(double)*num_state);
    memset(pl,0,num_labels*sizeof(double));
    //loop through all the possible states for position i;
    //if(i>end-10)    if(DEBUG)cerr<<"pos "<<i<<" : ";
    double scale=0.0;
    for (j = 0; j < num_state; j++) {
      if((i==0 && j>=num_labels) || (i>0 && j<num_labels) )continue;
      if (i==seq_len-1 || useMAP) {
        p[j] = memory(i,j);
      } else { //if (i>=seq_len-2 || h==-1)// || mtrMi[(j*num_labels+h)*num_labels+labels[i+2]]==1)
        int pos0=gettransidx(j,(j % num_labels+1)*num_labels+h);
        if(pos0>=0)
          p[j] = memory(i,j) * exp(weights[pos0]); //Mi(j,h);
      }
//       else      {
//         p[j] = memory(i,j) * exp(weights[ (j+1)*num_label+h ]);
//       }
      //      if(i>end-10)if(DEBUG)cerr<<p[j]<<", ";
      pl[j % num_labels]+=p[j];
      scale+=p[j];
    }
    //[debug]
    if(DEBUG) {
      int s1,s2,rlabel;
      if(start==0)
        s1=-1;
      else
        s1=labels[start-1];
      if(end==seq_len-1)
        s2=-1;
      else
        s2=labels[end+1];
      if(i==end)
        rlabel=s2;
      else
        rlabel=labels[i+1];
      //int idx=getsampleidx(start,end,i,s1,s2,rlabel);
      //      double *ptest=getdist(start,end,s1,s2,i,rlabel);
      //      double diff=0;
      //      for(int k=0;k<num_label;k++)
      //     	diff+=(ptest[k]-pl[k]/scale)*(ptest[k]-pl[k]/scale);
      //      if(ptest[0]<-0.5)diff=-1;
      //if(DEBUG)cerr<<"sampletable "<<idx<<" diff "<<diff<<endl;
      /*
      if(diff>0.1)
      {
      for(int di=0;di<num_labels;di++)
      if(DEBUG)cerr<<ptest[di]<<" ";
      if(DEBUG)cerr<<endl;
      for(int di=0;di<num_labels;di++)
      if(DEBUG)cerr<<pl[di]<<" ";
      if(DEBUG)cerr<<endl;
      }
      */
    }
    int new_state=-1; // the newly sampled state for position i
    double rand_p=drand48(), sum_p=0.0 ;
    rand_p *= scale; //cerr << "scale=" << scale<<"; rand_p="<<rand_p<<endl;
    //if(DEBUG)cerr<<rand_p<<" "<<scale<<": ";
    for (j = 0; j < num_labels; j++) {
      //      if(DEBUG)cerr<<pl[j]<<" ";
      //      if((i==0 && j>=num_labels) || (i>0 && j<num_labels) ){
      //  continue;
      //}
      //if (m_bUseAllowSet && mtrxAllow[i][j]==0) continue;
      if (rand_p>=sum_p && rand_p<sum_p + pl[j]) {
        new_state=j; //the state at position i is j
        //        break;
      }
      sum_p+=pl[j];
    }
    //if(DEBUG)cerr<<endl;
    if (new_state == -1) {
      if(DEBUG)cerr<<"WARNING: sample2order(seq, start, end), no new state resampled for position " << i <<endl;
    }
    h= new_state;
    labels[i] = new_state;
  }
  te=clock();
  //  if(DEBUG)cerr<<(te-ts)/CLOCKS_PER_SEC<<"in sampling label\n";
  //updata sampled result
  for (i=0; i<seq_len; i++) {
    seq->proposed_label[i] = labels[i];
    //if(DEBUG)cerr<<labels[i]<<" ";
  }
  //  seq->ComputeObsProb();
  //  if(DEBUG)cerr<<"prob. "<<seq->viterobsprob<<"\n";
  delete p;
}
void rnaCRFSampler::testRebuildMore()
{
  //read native C4', P coordinates, chi torsions.
  SEQUENCE* seq=testData[0];
  //  seq->outstru=seq->native;
  //  seq->sampcurr=seq->nattors;
  for(int j=0; j<seq->length_seq; j++) {
    seq->sampcurr.push_back(torbin[0]);
  }
  int nClashRepeat=0;
  sample2order(seq,0,seq->length_seq-1);
  seq->accept_label();
  for(int rk=0; rk<=seq->length_seq-1; rk++) { //rand() % ntrlb;
    vector<double> currtors=torbin[seq->proposed_label[rk]];
    for(int j=0; j<currtors.size(); j++) {
      currtors[j]=currtors[j]+pnormal(0,0.1);
    }
    seq->sampcurr[rk]=currtors;
  }
  seq->Rebuild();
  seq->RebuildMore(0,seq->length_seq-1);
  if(DEBUG)cerr<<RMSDmore(seq, 1);
  //  if(DEBUG)cerr<<endl;
  while(seq->clashlist.size()>0 && nClashRepeat<100) {
    if(DEBUG)cerr<<nClashRepeat;
    for(int si=0; si<seq->clashlist.size(); si++) {
      int ssi=seq->clashlist[si];
      //      if(DEBUG)cerr<<" "<<ssi<<" ";
      seq->sampcurr[seq->clashlist[si]][2]=ExpDistChi[int(drand48() * (ExpDistChi.size()-1))];
      //if(DEBUG)cerr<<seq->sampcurr[ssi][2]<<" ";
    }
    nClashRepeat++;
    if(DEBUG)cerr<<".";
    seq->RebuildMore(seq->clashlist[0],*(seq->clashlist.end()-1));
    if(DEBUG)cerr<<"b "<<seq->nclash<<" rr "<<seq->nclashrr<<" rb "<<seq->nclashrb<<endl;
    string s="testrebuild.pdb";
    savepdb(seq,s.c_str());
    //  getchar();
    if(DEBUG)cerr<<endl;
  }
  //if(DEBUG)cerr<<
  //  seq->RebuildMore();
  if(DEBUG)cerr<<"Rebuilding finished\n";
  if(DEBUG)cerr<<RMSDmore(seq, 1);
  string s="testrebuild.pdb";
  savepdb(seq,s.c_str());
  //  return;
  //read native cordinates of all atoms
  string finnatall;
  finnatall=chainpre+".bbfrag";
  string finresall=chainpre+".resfrag";
  double** allnatbb;
  int n_allnatbb=(seq->length_seq)*17;
  allnatbb=new double*[n_allnatbb]; //17 atoms include first N on residue.
  vector<vector<double *> >vallnative;
  ifstream fin(finnatall.c_str());
  int num=0;
  for(int k=0; k<(seq->length_seq); k++) {
    vector<double *> tmp;
    string s;
    fin>>s;
    for(int k1=0; k1<17; k1++) {
      double* x=new double[3];
      for(int j=0; j<3; j++) {
        fin>>x[j];
      }
      if(k1 >=3 && k1 <=8 )
        tmp.push_back(x);
      if(k1 >=10 && k1 <=15)
        tmp.push_back(x);
    }
    vallnative.push_back(tmp);
    num+=tmp.size();
  }
  fin.close();
  if(DEBUG)cerr<<num;
  if(DEBUG)cerr<<"Native backbone part 1 loaded\n";
  double** allnative;
  double** allrebuilt;
  double** allnatres;
  fin.open(finresall.c_str());
  int k0=0;
  for(int j=0; j<seq->length_seq; j++) {
    if(DEBUG)cerr<<atomnames[seq->aaseq[j+1]].size()-11<<":";
    string s;
    fin>>s;
    for(int k=0; k<atomnames[seq->aaseq[j+1]].size()-11; k++) { //backbone has 12 atoms
      double *x=new double[3];
      for(int ja=0; ja<3; ja++) {
        fin>>x[ja];
      }
      if(k>=1) {
        vallnative[j].push_back(x);
        //	if(DEBUG)cerr<<x[0]<<" ";
        //if(DEBUG)cerr<<x[1]<<" ";
        //if(DEBUG)cerr<<x[2]<<" ";
        num++;
      }
    }
  }
  fin.close();
  if(DEBUG)cerr<< num;
  if(DEBUG)cerr<<"Native backbone part 2 loaded\n";
  allnative=new double*[num];
  if(DEBUG)cerr<<"allnative\n";
  int k1=0;
  for(int k0=0; k0<vallnative.size(); k0++) {
    for(int k=0; k<vallnative[k0].size(); k++) {
      //      allnative[k]=
      //vallnative[k0][k];
      allnative[k1]=new double[3];
      allnative[k1][0]=vallnative[k0][k][0];
      allnative[k1][1]=vallnative[k0][k][1];
      allnative[k1][2]=vallnative[k0][k][2];
      k1++;
      //      if(DEBUG)cerr<<allnative[k1][0]
    }
    //    if(DEBUG)cerr<<endl;
  }
  //write rebuildmore structure to file, including allresstru and fullbackbone
  allrebuilt=new double*[k1];
  if(DEBUG)cerr<<k1<<endl;
  char fname[100];
  sprintf(fname,"%s/testrebuildmore.pdb",workdir.c_str());
  if(DEBUG)cerr<<fname<<endl;
  ofstream fout(fname);
  if(DEBUG)cerr<<endl;
  //compute rmsd
  //  if(DEBUG)cerr<<"num: "<<k1<<" "<<num<<" "<<atomnum<<" "<<vallnative.size()<<endl;
  double r;
  RMSD(allnative, allrebuilt, num, &r);
  if(DEBUG)cerr<<"Test rebuildmore rmsd "<<r<<endl;
  return;
  int nbefore=0;
  for(int i=0; i<seq->length_seq-1; i++) {
    //    RMSD(allnative+nbefore, allrebuilt+nbefore,atomnames[seq->aaseq[i+1]].size() , &r);
    RMSD(allnative+nbefore, allrebuilt+nbefore, 11 , &r);
    double t1[12];
    for(int k1=0; k1<4; k1++)
      for(int k2=0; k2<3; k2++)
        t1[k1*3+k2]=*(allnative+nbefore+1+k1)[k2];
    double tdelta=torsion(t1);
    for(int k1=0; k1<4; k1++)
      for(int k2=0; k2<3; k2++)
        t1[k1*3+k2]=*(allrebuilt+nbefore+1+k1)[k2];
    double tdelta2=torsion(t1);
    if(DEBUG)cerr<<seq->allnear[i]<<" ";
    if(DEBUG)cerr<<nbefore<<" "<<r<<"    \t"<<tdelta<<"    \t"<<tdelta2<<"\t"<<seq->aaseq[i+1] <<endl;
    nbefore+=atomnames[seq->aaseq[i+1]].size();
  }
}
double rnaCRFSampler::RMSDmore(SEQUENCE * seq, int onlybb)
{
  //write rebuildmore structure to file, including allresstru and fullbackbone
  int totalatom=0;
  for(int j=0; j<seq->length_seq; j++) {
    totalatom+=atomnames[seq->aaseq[j+1]].size();
  }
  double** allrebuilt=new double*[totalatom];
  for(int j=0; j<totalatom; j++) {
    allrebuilt[j]=new double[3];
  }
  int atomnum=0;
  for(int j=0; j<seq->length_seq; j++) {
    char s[100];
    int resnum=j+1;
    int nttypecurr=seq->aaseq[j+1];
    for(int k=0; k<atomnames[seq->aaseq[j+1]].size(); k++) {
      if(k<6) { //on backbone
        int pos0=3*3;//skip left C4' C3' O3'
        double x=seq->fullbackbone[j][pos0+k*3];
        double y=seq->fullbackbone[j][pos0+k*3+1];
        double z=seq->fullbackbone[j][pos0+k*3+2];
        allrebuilt[atomnum][0]=x;
        allrebuilt[atomnum][1]=y;
        allrebuilt[atomnum][2]=z;
        atomnum++;
      } else if(6<=k && k<12) { //on backbone
        int pos0=10*3;//skip all before right P'
        double x=seq->fullbackbone[j][pos0+(k-6)*3];
        double y=seq->fullbackbone[j][pos0+(k-6)*3+1];
        double z=seq->fullbackbone[j][pos0+(k-6)*3+2];
        allrebuilt[atomnum][0]=x;
        allrebuilt[atomnum][1]=y;
        allrebuilt[atomnum][2]=z;
        atomnum++;
      } else if(onlybb==0) { //on residue
        int pos0=1*3;//skip C1'
        double x=seq->allresstru[j][pos0+(k-12)*3];
        double y=seq->allresstru[j][pos0+(k-12)*3+1];
        double z=seq->allresstru[j][pos0+(k-12)*3+2];
        //allrebuilt is used to compute rmsd, which is double**
        allrebuilt[atomnum][0]=x;
        allrebuilt[atomnum][1]=y;
        allrebuilt[atomnum][2]=z;
        atomnum++;
      }
    }
  }
  //compute rmsd
  //  if(DEBUG)cerr<<"num: "<<k1<<" "<<num<<" "<<atomnum<<" "<<vallnative.size()<<endl;
  double r;
  if(onlybb==0)
    RMSD(seq->allnative, allrebuilt, atomnum, &r);
  else
    RMSD(seq->allnatbb, allrebuilt, atomnum, &r);
  //  if(DEBUG)cerr<<"Test rebuildmore rmsd "<<r<<endl;
  return r;
}
double rnaCRFSampler::RMSDFull(SEQUENCE * seq, int onlybb)
{
  //write rebuildmore structure to file, including allresstru and fullbackbone
  int totalatom=0;
  double rst;
  double** s1;
  double** s2;
  s1=new double*[seq->chain.chain.size()];
  s2=new double*[seq->chain.chain.size()];
  if(onlybb==0) {
    //compute C4' backbone RMSD
    for(int i=0; i<seq->chain.chain.size(); i++) {
      if(i>=seq->fullbackbone.size())continue;
      if(seq->chain.chain[i].atoms.find("C4'")!=seq->chain.chain[i].atoms.end()) {
        totalatom++;
        s1[i]=new double[3];
        for(int j=0; j<3; j++) {
          s1[i][j]=seq->chain.chain[i].atoms["C4'"].cords[j];
          //xif(DEBUG)cerr<<s1[i][j]<<" ";
        }
        s2[i]=new double[3];
        for(int j=0; j<3; j++) {
          s2[i][j]=seq->fullbackbone[i][3*3+j];//use c4 atoms only
          //if(DEBUG)cerr<<s2[i][j]<<" ";
        }
        //if(DEBUG)cerr<<endl;
      }
    }
  }
  //  if(DEBUG)cerr<<totalatom<<"atoms \n";
  RMSD(s1, s2, totalatom, &rst);
  return rst;
  for(int j=0; j<seq->length_seq+2; j++) {
    totalatom+=atomnames[seq->aaseq[j]].size();
  }
  totalatom-=3;
  double** allrebuilt=new double*[totalatom];
  for(int j=0; j<totalatom; j++) {
    allrebuilt[j]=new double[3];
  }
  int atomnum=0;
  for(int j=0; j<seq->length_seq+2; j++) {
    char s[100];
    int resnum=j+1;
    int nttypecurr=seq->aaseq[j];
    for(int k=0; k<atomnames[seq->aaseq[j]].size(); k++) {
      if(k<6) { //on backbone
        int pos0=3*3;//skip left C4' C3' O3'
        double x=seq->fullbackbone[j][pos0+k*3];
        double y=seq->fullbackbone[j][pos0+k*3+1];
        double z=seq->fullbackbone[j][pos0+k*3+2];
        allrebuilt[atomnum][0]=x;
        allrebuilt[atomnum][1]=y;
        allrebuilt[atomnum][2]=z;
        atomnum++;
      } else if(6<=k && k<12) { //on backbone
        int pos0=10*3;//skip all before right P'
        double x=seq->fullbackbone[j][pos0+(k-6)*3];
        double y=seq->fullbackbone[j][pos0+(k-6)*3+1];
        double z=seq->fullbackbone[j][pos0+(k-6)*3+2];
        allrebuilt[atomnum][0]=x;
        allrebuilt[atomnum][1]=y;
        allrebuilt[atomnum][2]=z;
        atomnum++;
      } else if(onlybb==0) { //on residue
        int pos0=1*3;//skip C1'
        double x=seq->allresstru[j][pos0+(k-12)*3];
        double y=seq->allresstru[j][pos0+(k-12)*3+1];
        double z=seq->allresstru[j][pos0+(k-12)*3+2];
        //allrebuilt is used to compute rmsd, which is double**
        allrebuilt[atomnum][0]=x;
        allrebuilt[atomnum][1]=y;
        allrebuilt[atomnum][2]=z;
        atomnum++;
      }
    }
  }
  //compute rmsd
  //  if(DEBUG)cerr<<"num: "<<k1<<" "<<num<<" "<<atomnum<<" "<<vallnative.size()<<endl;
  double r;
  if(onlybb==0)
    RMSD(seq->allnative, allrebuilt, atomnum, &r);
  else
    RMSD(seq->allnatbb, allrebuilt, atomnum, &r);
  //  if(DEBUG)cerr<<"Test rebuildmore rmsd "<<r<<endl;
  return r;
}
void rnaCRFSampler::savebackbone(SEQUENCE * seq, const char* fname)
{
  ofstream fout(fname);
  for(int j=0; j<seq->length_seq*2+2; j++) {
    char s[90];
    int atomnum=j;
    int resnum=atomnum/2;
    char* atomname;
    if(atomnum %2) {
      atomname="P";
    } else {
      atomname="C4'";
    }
    char* chain="A";
    char* resname="A";
    sprintf(s,"ATOM  %5d %4s %3s %1s%4d    %8.3f%8.3f%8.3f%6.2f%6.2f      A1   N \n",atomnum,atomname,resname,chain,resnum,seq->outstru[j][0],seq->outstru[j][1],seq->outstru[j][2],0.0,0.0);
    fout<<s;
  }
  fout.close();
  /*
  sprintf(fname,"%s/tors.%d",workdir.c_str(),i);
  fout.open(fname);
  for(int j=0;j<seq->length_seq;j++)
  {
    fout<<seq->accepted_label[j]<<" "<<seq->sampcurr[j][0]<<" "<<seq->sampcurr[j][1]<<endl;
  }
  fout.close();
  */
}
void rnaCRFSampler::savepdb(SEQUENCE* seq, const char* fname)
{
  ofstream fout(fname);
  char comment[1000];
  sprintf(comment,"#%s, energy %.4f , rmsd %.4f, fullrmsd %.4f\n",chainpre.c_str(), seq->e_last, seq->rmsd, seq->fullrmsd);
  fout<<comment;
  for(int i=0; i<seq->etree.size(); i++) {
    int ei=seq->etree[i];
    fout<<"#pair "<<ei<<":"<<seq->sspairs[ei][0]<<" "<<seq->sspairs[ei][1]<<" "<<seq->aaseq[seq->sspairs[ei][0]]<<" "<<seq->aaseq[seq->sspairs[ei][1]]<<" "<<seq->energy_detail[ei]<<endl;
  }
  int atomnum=0;
  string chain="A";
  //how many nucleotides rebuilt, and how many native be read from bbfrag and resfragfile? 1,.., length_seq-2;
  for(int j=0; j<seq->length_seq; j++) {
    char s[100];
    int resnum=j+1;
    int nttypecurr=seq->aaseq[j+1];
    for(int k=0; k<atomnames[seq->aaseq[j+1]].size(); k++) {
      string atomname=atomnames[nttypecurr][k];
      string resname=resnames[nttypecurr];
      //      allrebuilt[atomnum]=new double[3];
      if(k<6) { //on backbone
        int pos0=3*3;//skip left C4' C3' O3'
        //	if(DEBUG)cerr<<pos0+k*3<<" ";
        double x=seq->fullbackbone[j][pos0+k*3];
        double y=seq->fullbackbone[j][pos0+k*3+1];
        double z=seq->fullbackbone[j][pos0+k*3+2];
// 	allrebuilt[atomnum][0]=x;
// 	allrebuilt[atomnum][1]=y;
// 	allrebuilt[atomnum][2]=z;
        sprintf(s,"ATOM  %5d %4s %3s %1s%4d    %8.3f%8.3f%8.3f%6.2f%6.2f      A1   N \n",atomnum, atomname.c_str(), resname.c_str(), chain.c_str(), resnum, x, y, z,0.0,0.0);
        atomnum++;
      } else if(6<=k && k<12) { //on backbone
        int pos0=10*3;//skip all before right P'
        double x=seq->fullbackbone[j][pos0+(k-6)*3];
        double y=seq->fullbackbone[j][pos0+(k-6)*3+1];
        double z=seq->fullbackbone[j][pos0+(k-6)*3+2];
        //	allrebuilt[atomnum][0]=x;allrebuilt[atomnum][1]=y;allrebuilt[atomnum][2]=z;
        sprintf(s,"ATOM  %5d %4s %3s %1s%4d    %8.3f%8.3f%8.3f%6.2f%6.2f      A1   N \n",atomnum, atomname.c_str(), resname.c_str(), chain.c_str(), resnum, x, y, z,0.0,0.0);
        atomnum++;
      } else { //if(0) //on residue
        int pos0=1*3;//skip C1'
        double x=seq->allresstru[j][pos0+(k-12)*3];
        double y=seq->allresstru[j][pos0+(k-12)*3+1];
        double z=seq->allresstru[j][pos0+(k-12)*3+2];
        //allrebuilt is used to compute rmsd, which is double**
// 	allrebuilt[atomnum][0]=x;
// 	allrebuilt[atomnum][1]=y;
// 	allrebuilt[atomnum][2]=z;
        sprintf(s,"ATOM  %5d %4s %3s %1s%4d    %8.3f%8.3f%8.3f%6.2f%6.2f      A1   N \n",atomnum, atomname.c_str(), resname.c_str(), chain.c_str(), resnum, x, y, z,0.0,0.0);
        atomnum++;
      }
      fout<<s;
    }
  }
  fout.close();
}
void rnaCRFSampler::savevector(vector<vector<double> > bb, char* fname,char chain, vector<string> atoms)
{
  ofstream fout(fname);
  for(int i=0; i<bb.size(); i++) {
    char s[1000];
    vector<double> aa=bb[i];
    string atom="P";
    string res="U";
    sprintf(s,"ATOM  %5d %4s %3s %1c%4d    %8.3f%8.3f%8.3f%6.2f%6.2f      A1   N \n",i, atoms[i % atoms.size()].c_str(), res.c_str(), chain, int(i/atoms.size()), aa[0], aa[1], aa[2],0.0,0.0);
    fout<<s;
  }
  fout.close();
}
void rnaCRFSampler::savepdb2(SEQUENCE* seq, const char* fname)
{
  ofstream fout(fname);
  char comment[1000];
  sprintf(comment,"#%s, energy %.4f , rmsd %.4f, fullrmsd %.4f\n",chainpre.c_str(), seq->e_last, seq->rmsd, seq->fullrmsd);
  fout<<comment;
  for(int i=0; i<seq->etree.size(); i++) {
    int ei=seq->etree[i];
    fout<<"#pair "<<ei<<":"<<seq->sspairs[ei][0]<<" "<<seq->sspairs[ei][1]<<" "<<seq->aaseq[seq->sspairs[ei][0]]<<" "<<seq->aaseq[seq->sspairs[ei][1]]<<" "<<seq->energy_detail[ei]<<endl;
  }
  int atomnum=0;
  string chain="A";
  //how many nucleotides rebuilt, and how many native be read from bbfrag and resfragfile? 1,.., length_seq-2;
  for(int j=0; j<seq->tlength; j++) {
    char s[100];
    int resnum=j+1;
    int nttypecurr=seq->aaseq[j];
    for(int k=0; k<atomnames[seq->aaseq[j]].size(); k++) {
      string atomname=atomnames[nttypecurr][k];
      string resname=resnames[nttypecurr];
      //      allrebuilt[atomnum]=new double[3];
      if(k<6) { //on backbone
        int pos0=3*3;//skip left C4' C3' O3'
        //	if(DEBUG)cerr<<pos0+k*3<<" ";
        double x=seq->fullbackbone[j][pos0+k*3];
        double y=seq->fullbackbone[j][pos0+k*3+1];
        double z=seq->fullbackbone[j][pos0+k*3+2];
// 	allrebuilt[atomnum][0]=x;
// 	allrebuilt[atomnum][1]=y;
// 	allrebuilt[atomnum][2]=z;
        sprintf(s,"ATOM  %5d %4s %3s %1s%4d    %8.3f%8.3f%8.3f%6.2f%6.2f      A1   N \n",atomnum, atomname.c_str(), resname.c_str(), chain.c_str(), resnum, x, y, z,0.0,0.0);
        atomnum++;
      } else if(6<=k && k<12) { //on backbone
        int pos0=10*3;//skip all before right P'
        double x=seq->fullbackbone[j][pos0+(k-6)*3];
        double y=seq->fullbackbone[j][pos0+(k-6)*3+1];
        double z=seq->fullbackbone[j][pos0+(k-6)*3+2];
        //	allrebuilt[atomnum][0]=x;allrebuilt[atomnum][1]=y;allrebuilt[atomnum][2]=z;
        sprintf(s,"ATOM  %5d %4s %3s %1s%4d    %8.3f%8.3f%8.3f%6.2f%6.2f      A1   N \n",atomnum, atomname.c_str(), resname.c_str(), chain.c_str(), resnum, x, y, z,0.0,0.0);
        atomnum++;
      } else { //if(0) //on residue
        int pos0=1*3;//skip C1'
        double x=seq->allresstru[j][pos0+(k-12)*3];
        double y=seq->allresstru[j][pos0+(k-12)*3+1];
        double z=seq->allresstru[j][pos0+(k-12)*3+2];
        //allrebuilt is used to compute rmsd, which is double**
// 	allrebuilt[atomnum][0]=x;
// 	allrebuilt[atomnum][1]=y;
// 	allrebuilt[atomnum][2]=z;
        sprintf(s,"ATOM  %5d %4s %3s %1s%4d    %8.3f%8.3f%8.3f%6.2f%6.2f      A1   N \n",atomnum, atomname.c_str(), resname.c_str(), chain.c_str(), resnum, x, y, z,0.0,0.0);
        atomnum++;
      }
      fout<<s;
    }
  }
  fout.close();
}
void rnaCRFSampler::savepdb3(SEQUENCE* seq, const char* fname)
{
  ofstream fout(fname);
  char comment[1000];
  sprintf(comment,"#%s, energy %.4f , rmsd %.4f, fullrmsd %.4f\n",chainpre.c_str(), seq->e_last, seq->rmsd, seq->fullrmsd);
  fout<<comment;
  for(int i=0; i<seq->etree.size(); i++) {
    int ei=seq->etree[i];
    fout<<"#pair "<<ei<<":"<<seq->sspairs[ei][0]<<" "<<seq->sspairs[ei][1]<<" "<<seq->aaseq[seq->sspairs[ei][0]]<<" "<<seq->aaseq[seq->sspairs[ei][1]]<<" "<<seq->energy_detail[ei]<<endl;
  }
  int atomnum=0;
  string chain="A";
  //how many nucleotides rebuilt, and how many native be read from bbfrag and resfragfile? 1,.., length_seq-2;
  for(int j=0; j<seq->tlength; j++) {
    char s[100];
    int resnum=j+1;
    int nttypecurr=seq->aaseq[j];
    for(int k=0; k<atomnames[seq->aaseq[j]].size(); k++) {
      string atomname=atomnames[nttypecurr][k];
      string resname=resnames[nttypecurr];
      //      allrebuilt[atomnum]=new double[3];
      if(k<6) { //on backbone
        int pos0=0;//skip left C4' C3' O3'
        //	if(DEBUG)cerr<<pos0+k*3<<" ";
        double x=seq->fullbackbone[j][pos0+k*3];
        double y=seq->fullbackbone[j][pos0+k*3+1];
        double z=seq->fullbackbone[j][pos0+k*3+2];
// 	allrebuilt[atomnum][0]=x;
// 	allrebuilt[atomnum][1]=y;
// 	allrebuilt[atomnum][2]=z;
        sprintf(s,"ATOM  %5d %4s %3s %1s%4d    %8.3f%8.3f%8.3f%6.2f%6.2f      A1   N \n",atomnum, atomname.c_str(), resname.c_str(), chain.c_str(), resnum, x, y, z,0.0,0.0);
        atomnum++;
      } else if(6<=k && k<12) { //on backbone, skip 6,7 OP1,OP2
        if(k<8)continue;
        int pos0=6*3;//skip all before right P'
        double x=seq->fullbackbone[j][pos0+(k-8)*3];
        double y=seq->fullbackbone[j][pos0+(k-8)*3+1];
        double z=seq->fullbackbone[j][pos0+(k-8)*3+2];
        //	allrebuilt[atomnum][0]=x;allrebuilt[atomnum][1]=y;allrebuilt[atomnum][2]=z;
        sprintf(s,"ATOM  %5d %4s %3s %1s%4d    %8.3f%8.3f%8.3f%6.2f%6.2f      A1   N \n",atomnum, atomname.c_str(), resname.c_str(), chain.c_str(), resnum, x, y, z,0.0,0.0);
        atomnum++;
      } else { //if(0) //on residue
        int pos0=1*3;//skip C1'
        double x=seq->allresstru[j][pos0+(k-12)*3];
        double y=seq->allresstru[j][pos0+(k-12)*3+1];
        double z=seq->allresstru[j][pos0+(k-12)*3+2];
        //allrebuilt is used to compute rmsd, which is double**
// 	allrebuilt[atomnum][0]=x;
// 	allrebuilt[atomnum][1]=y;
// 	allrebuilt[atomnum][2]=z;
        sprintf(s,"ATOM  %5d %4s %3s %1s%4d    %8.3f%8.3f%8.3f%6.2f%6.2f      A1   N \n",atomnum, atomname.c_str(), resname.c_str(), chain.c_str(), resnum, x, y, z,0.0,0.0);
        atomnum++;
      }
      fout<<s;
    }
  }
  fout.close();
}
void rnaCRFSampler::readpdb(SEQUENCE* seq, const char* fname)
{
  ifstream fin(fname);
  char comment[1000];
//  sprintf(comment,"#%s, energy %.4f , rmsd %.4f, fullrmsd %.4f\n",chainpre.c_str(), seq->e_last, seq->rmsd, seq->fullrmsd);
//   fout<<comment;
  int lastres=-1;
  vector<_atom> vatom;
  if(!fin) {
    seq->haspdb=false;
    return;
  } else {
    seq->haspdb=true;
  }
  while(!fin.eof()) {
    char s[500];
    fin.getline(s,500);
    string head;
    head.assign(s,500);
    if(head.substr(0,4) != "ATOM")continue;
    _atom a;
    string atom,res,chain;
    double x,y,z;
    int resnum;
    atom=head.substr(12,4);
    trimstr(atom);
    res=head.substr(17,3);
    trimstr(res);
    chain=head.substr(21,1);
    x=atof(head.substr(30,38-31+1).c_str());
    y=atof(head.substr(38,38-31+1).c_str());
    z=atof(head.substr(46,38-31+1).c_str());
    a.name=atom;
    a.resname=res;
    a.cords.push_back(x);
    a.cords.push_back(y);
    a.cords.push_back(z);
    //end of parse a line
    a.resnum=atoi(head.substr(22,26-23+1).c_str());
    vatom.push_back(a);
  }
  _res* pres;
  for(int i=0; i<vatom.size(); i++) {
    if(i==0 || vatom[i].resnum!=vatom[i-1].resnum) {
      if(i!=0) {
        seq->chain.chain.push_back(*pres);
      }
      pres=new _res;
      pres->resname=vatom[i].resname;
      pres->resnum=vatom[i].resnum;
      if(DEBUG)cerr<<pres->resnum<<"res \n";
    }
    pres->atoms[vatom[i].name]=vatom[i];
  }
  seq->chain.chain.push_back(*pres);
}
void rnaCRFSampler::testRebuild()
{
  SEQUENCE * seq=testData[0];
  seq->sampcurr.clear();
  //initial
  for(int j=0; j<seq->length_seq; j++) {
    seq->sampcurr.push_back(seq->alltors[j]);
    seq->accepted_label[j]=seq->obs_label[j];
  }
  seq->sampcurr.insert(seq->sampcurr.begin(),  seq->sampcurr[int(drand48()*(seq->sampcurr.size()-1))]);
  seq->sampcurr.push_back(seq->sampcurr[int(drand48()*(seq->sampcurr.size()-1))]);
  //end of initial
  seq->Rebuild2();
  seq->RebuildFull();
  for(int i=0; i<seq->pc4backbone.size(); i++) {
    for(int j=0; j<seq->pc4backbone[i].size(); j++) {
      if(DEBUG)cerr<<seq->pc4backbone[i][j]<<" ";
    }
    if(DEBUG)cerr<<endl;
  }
  char fname[100];
  sprintf(fname,"testdecoy.pdb");
  savepdb2(seq,fname);
  readpdb(seq,fname);
  double e_curr=seq->energy(1);
  if(DEBUG)cerr<<e_curr<<endl;
  seq->show_e_detail();
  if(DEBUG)cerr<<RMSDFull(seq,0)<<endl;
  return;//------------------
  double rslt=0;
  RMSD(seq->outstru,seq->native,seq->length_seq*2+2,&rslt);
  if(DEBUG)cerr<<"rmsd "<<rslt<< " energy "<<seq->energy(1)<<endl;
  //    char fname[100];
  sprintf(fname,"%s/testrebuild.pdb",workdir.c_str());
  ofstream fout(fname);
  for(int j=0; j<seq->length_seq*2+2; j++) {
    char s[90];
    int atomnum=j;
    int resnum=atomnum/2;
    char* atomname;
    if(atomnum %2) {
      atomname="P";
    } else {
      atomname="C4'";
    }
    char* chain="A";
    char* resname="A";
    sprintf(s,"ATOM  %5d %4s %3s %1s%4d    %8.3f%8.3f%8.3f%6.2f%6.2f      A1   N \n",atomnum,atomname,resname,chain,resnum,seq->outstru[j][0],seq->outstru[j][1],seq->outstru[j][2],0.0,0.0);
    fout<<s;
  }
  fout.close();
}
void rnaCRFSampler::TuneChi(SEQUENCE *seq)
{
  //  return;
  if(seq->chi.size()<seq->tlength)
    seq->chi.resize(seq->tlength,0);
  int nClashRepeat=0;
  while(seq->nclash==0 && seq->clashlist.size()>0 && nClashRepeat<5) {
    for(int si=0; si<seq->clashlist.size(); si++) {
      int ssi=seq->clashlist[si];
      int nrnd=int(drand48() * (ExpDistChi.size()-1));
      //	seq->chi[seq->clashlist[si]+1]=ExpDistChi[nrnd];
      seq->chi[seq->clashlist[si]+1]+=drand48()*6.28;
      //	seq->chi[seq->clashlist[si]+1]=seq->chi[seq->clashlist[si]];
      //;
      //	seq->sampcurr[seq->clashlist[si]+1][2]=ExpDistChi[nrnd];
    }
    nClashRepeat++;
    //      seq->RebuildMore(seq->clashlist[0],*(seq->clashlist.end()-1));
    RNAbuilder myrna;
    myrna.ReBuildRes(seq,this);
    //      seq->RebuildFull();
  }
}
void rnaCRFSampler::verifynative()
{
#ifdef _RELEASE
  return;
#endif
  SEQUENCE * seq=testData[0];
  vector<double> dumb(0,5);
  for(int j=0; j<seq->length_seq; j++) {
    //        seq->sampcurr.push_back(seq->alltors[j]);
    seq->sampcurr.push_back(torbin[seq->obs_label[j]]);
    //     seq->sampcurr.push_back(torbin[10]);
    seq->accepted_label[j]=seq->obs_label[j];
    //       seq->sampcurr.push_back(torbin[10]);
  }
  //add head and tail
  seq->sampcurr.insert(seq->sampcurr.begin(),  seq->sampcurr[0]);
  seq->sampcurr.push_back(seq->sampcurr[seq->sampcurr.size()-1]);
  //  vector<double> w(seq->tlength, ExpDistChi[22]);
  vector<double> w(seq->tlength, 0);
  vector<double> w1(2*seq->tlength,3.84);
  switch(atoi(params["EXPDIST"].c_str())) {
  case(0)://using fix experience distribution
    seq->sampled_chi=w ;//+pnormal(0,0.1);
    seq->sampled_bondlen=w1;
    break;
  case(1)://using median and an estimated std.
    seq->sampled_chi=w;//+pnormal(0,0.1);
    seq->sampled_bondlen=w1;
    for(int i=0; i<seq->sampled_chi.size(); i++)
      seq->sampled_chi[i]+=pnormal(0,0.3);
    for(int i=0; i<seq->sampled_bondlen.size(); i++)
      seq->sampled_bondlen[i]+=pnormal(0,0.1);
    break;
    //  case(2)://using experience distribution
  }
  clock_t tReb0=clock();
  seq->Rebuild2();
  RNAbuilder myrna;
//   switch(atoi(params["BUILDMETHOD"].c_str())){
//   case(0):
  seq->RebuildFull();
  // break;
//   case(1):
//     myrna.BuildFullFast(seq,this);break;
//   case(2):
//     myrna.GreeyBuild(seq,this);
//   }
  clock_t tReb=clock();
  cerr<<"verify native rebuild time: "<<(tReb-tReb0+0.0)/CLOCKS_PER_SEC<<endl;
  double nategr=seq->energy(1);
  double natrslt=0;
  //    seq->e_last=nategr;
  if(DEBUG)cerr<<"Iter.\t Native rmsd "<<natrslt<< " Energy "<<nategr;
  if(DEBUG)cerr<<" b "<<seq->nclash<<" rr "<<seq->nclashrr<<" rb "<<seq->nclashrb<<" ";
  if(DEBUG)cerr<<RMSDFull(seq,0)<<endl;
  TuneChi(seq);
  if(1||DEBUG)cerr<<"TUNED:\t energy "<<seq->energy(1)<<" b "<<seq->nclash<<" rr "<<seq->nclashrr<<" rb "<<seq->nclashrb<<" "<<RMSDFull(seq,0)<<endl;
  if(DEBUG)cerr<<"True SS\n";
  seq->rmsd=RMSDFull(seq,0);
  seq->showtruess();
  if(DEBUG)cerr<<"energy detail:\n";
  seq->show_e_detail();
  string testfilename="testnative.pdb";
  savepdb2(seq,testfilename.c_str());
  //    exit(1);
}
void rnaCRFSampler::heatingup()
{
  for(int datai=0; datai<testData.size(); datai++) {
    if(DEBUG)cerr<<"heating"<<datai<<endl;
    SEQUENCE * seq=testData[datai];
    if(DEBUG)cerr<<seq->sampcurr.size()<<" "<<seq->tlength-1<<endl;
    for(int iheat=0; iheat<400; iheat++) {
      if(DEBUG)cerr<<".";
      int begin=rand() % seq->length_seq;
      int seglen=max_segment;
      int end = begin+seglen-1;
      if(end >= seq->length_seq)
        end = seq->length_seq - 1;
      if(begin-1>=0 && end-1 <=seq->length_seq-1)
        sample2order(seq,begin,end);
      //      sample2order(seq,0,seq->length_seq-1);
      sampletorsion(seq,0,seq->tlength-1);
      if(iheat<100) {
        //try all torsion is 0
        // for(int rk=0;rk<=seq->tlength-1;rk++)//rand() % ntrlb;
// 	{
// 	  vector<double> currtors;
// 	  for(int j=0;j<currtors.size();j++){
// 	    //re-select a torsion
// 	    //3.1416 3.2768 3.0641 1.2389 5.0147
// 	    //1.4555 1.4427 2.3687
// 	    currtors[0]=3.1416;//+pnormal(0,0.3);
// 	    currtors[1]=3.1416;//+pnormal(0,0.3);
// 	    currtors[2]=1.57;//+pnormal(0,0.3);
// 	    currtors[3]=1.57;//+pnormal(0,0.3);
// 	    currtors[4]=1.96;//+pnormal(0,0.3);
// 	    //	    currtors[j]=0;//currtors[j]+pnormal(0,0.3);
// 	  }
// 	  seq->sampcurr[rk]=currtors;
// 	}
        for(int ti=0; ti<seq->sampcurr.size(); ti++) {
          seq->sampcurr[ti][0]=-2.63;//+pnormal(0,0.1);
          seq->sampcurr[ti][1]=2.89;//+pnormal(0,0.1);
          seq->sampcurr[ti][2]=1.4;
          seq->sampcurr[ti][3]=1.4;
        }
      }
      seq->Rebuild2();
      RNAbuilder myrna;
//       switch(atoi(params["BUILDMETHOD"].c_str())){
//       case(0):
      seq->RebuildFull();
      //break;
//       case(1):
// 	myrna.BuildFullFast(seq,this);break;
//       case(2):
// 	myrna.GreeyBuild(seq,this);
//       }
      if(1||iheat==0) {
        char fname[100];
        sprintf(fname,"initial-%d.pdb",1+iheat);
#ifndef _RELEASE
        savepdb2(seq,fname);
#endif
      }
      vector<int> temp;
      //      TuneChi(seq);
      if(checkclash(seq)) {
        continue;
      } else {
        char fname[100];
        sprintf(fname,"initial.pdb");
#ifndef _RELEASE
        savepdb2(seq,fname);
#endif
//       switch(atoi(params["BUILDMETHOD"].c_str())){
//       case(0):
// 	savepdb2(seq,fname);break;
//       case(1):
// 	savepdb3(seq,fname);break;
//       case(2):
// 	savepdb3(seq,fname);break;
//       }
        cerr<<"Found a noclash initial "<<iheat<<"\n";
        return;
        break;
      }
    }
    if(DEBUG)cerr<<endl;
  }
  cerr<<"no clashfree found, exit.\n";
  exit(0);
}
//----------------start parallel temper---------------------
void  rnaCRFSampler::start_parallel_temper()//normal replica exchange
{
  //prepare parallel tempering by
  int nTemper=20;
  SEQUENCE * seq=testData[0];
  vector<SEQUENCE> finalseqs;//save structures.
  //initial
  verifynative();
  heatingup();
  seq->accept_label();
  seq->accept_tors();
  //copy seq
  for(int i=1; i<nTemper; i++) {
    SEQUENCE *seq1=new SEQUENCE(*seq);
    testData.push_back(seq1);
    finalseqs.push_back(*seq1);
  }
  finalseqs.push_back(*seq);
  //  heatingup();
  int sampleiter=4000;
  if(params["MAX_ITER"].length()>0)
    sampleiter=atoi(params["MAX_ITER"].c_str());
  int lastup=0;
  int clashstep=0;
  int nrefuse=0;
  //-------------sampling begins
  alldecoys=0;
  noclashdecoys=0;
  //compute temp
  double temp[testData.size()];
  for(int datai=0; datai<testData.size()/3; datai++) {
    //    temp[datai] = pow(2.0, (int)(testData.size()-datai-4));//let min temp=1/8
    //    temp[datai]= 1.0/(datai/testData.size()*7+0.1)
    temp[datai]=10-datai*1.0/testData.size()*10;
    temp[datai]=    temp[datai];
  }
  for(int datai=testData.size()/3; datai<testData.size(); datai++) {
    temp[datai]=0.6*pow(0.8,(datai-testData.size()/3+0.0)/testData.size()*10);
    temp[datai]=    temp[datai];
  }
  //By far, temp varies from 100 90 80 66 33 16 8 4 2 1 0.5 .....
  for(int i=0; i<sampleiter; i++) {
    for(int datai=0; datai<testData.size(); datai++) {
      //choose begin, end , sample a segment from begin to end.
      seq=testData[datai];
      double e_curr;
      int begin=rand() % seq->tlength;
      int seglen=3;
      int end = begin+seglen;
      if(end >= seq->length_seq)
        end = seq->length_seq-1;
      if(begin-1>=0 && end-1 <=seq->length_seq-1)
        sample2order(seq,begin-1,end-1);
      sampletorsion(seq,begin,end);
      seq->Rebuild2();
      seq->RebuildFull();
      alldecoys++;
      if(checkclash(seq)) {
        continue;
      }
      noclashdecoys++;
      //compute energy
      saysth0(i,seq);
      e_curr=seq->energy(1);
      double p = exp((seq->e_last-e_curr)/scale/temp[datai]);
      if(drand48() > p) { //refuse
        nrefuse++;
      } else {
        //accept
        nrefuse=0;
        lastup=i;
        seq->accept_label();
        seq->accept_tors();
        seq->e_last=e_curr;
        //compute rmsd
        double rslt=-1;
        rslt=RMSDFull(seq,0);
        seq->rmsd=rslt;
        finalseqs[datai].savestruct(*seq);
        //save pdb if whoel energy less then 4 and save them to m_pModel->rslt for further parallel tempering.
        reportaccept(seq->etree.size()-1, seq, e_curr, i, rslt, -1);
      }
    }
    //replica exchange
    if(i %29==0) {
      if(DEBUG)cerr<<"exchange: ";
      for(int di= i % 2; di+1<testData.size(); di+=2) {
        //exchange neighbor
        if(DEBUG)cerr<<testData[di]->e_last<<" ";
        if(DEBUG)cerr<<testData[di+1]->e_last<<" ";
        double delta=(testData[di+1]->e_last - testData[di]->e_last)*(1.0/temp[di]-1.0/temp[di+1]);
        if(DEBUG)cerr<<"delta "<<delta;
        if(drand48() < exp(-delta) ) {
          if(DEBUG)cerr<<" swap "<<di<<" "<<di+1<<endl;
          SEQUENCE *seqswap;
          seqswap=testData[di];
          testData[di]=testData[di+1];
          testData[di+1]=seqswap;
        }
      }
      if(DEBUG)cerr<<endl;
    }
    if(i==sampleiter-1) {
      for(int datai=0; datai<finalseqs.size(); datai++) {
        char fname[100];
        sprintf(fname,"%s/decoy.last.%d-%d.pdb",workdir.c_str(),proc_id,datai);
        savepdb2(&finalseqs[datai],fname);
      }
    }
  }
}
//----------------start energy sample in parallel tempering ---------------------
void  rnaCRFSampler::start_espt()
{
  //prepare parallel tempering by
  int nTemper=20;
  SEQUENCE * seq=testData[0];
  vector<SEQUENCE*> testDatafinal;
  verifynative();
  heatingup();
  seq->accept_label();
  seq->accept_tors();
  //copy seq, prepare nTemper parallel track.
  for(int i=1; i<nTemper; i++) {
    SEQUENCE *seq1=new SEQUENCE(*seq);
    testData.push_back(seq1);
  }
  for(int i=0; i<nTemper; i++) {
    SEQUENCE *seq1=new SEQUENCE(*seq);
    testDatafinal.push_back(seq1);
  }
  int sampleiter=4000;
  if(params["MAX_ITER"].length()>0)
    sampleiter=atoi(params["MAX_ITER"].c_str());
  //Define temperatures for each replica track.
  double temp[]= {1024,512,256,128,64,32,16,8,4,2,1,0.9,0.8,0.7,0.6,0.5,0.4,0.3,0.2,0.1}; //Make sure its has nTemp members
  for(int datai=0; datai<testData.size(); datai++)
    temp[datai]=    temp[datai]/1000000;
  /*
  for(int datai=0;datai<testData.size()/3;datai++){
    //    temp[datai] = pow(2.0, (int)(testData.size()-datai-4));//let min temp=1/8
    //    temp[datai]= 1.0/(datai/testData.size()*7+0.1)
    temp[datai]=10-datai*1.0/testData.size()*10;
  }
  for(int datai=testData.size()/3;datai<testData.size();datai++){
    temp[datai]=0.6*pow(0.8,(datai-testData.size()/3+0.0)/testData.size()*10);
  }
  */
  if(DEBUG)cerr<<"total replica "<<testData.size()<<endl;
  int lastup=0;
  int clashstep=0;
  int nrefuse=0;
  //-----compute sample parts for each energy increament.
  int nfirst=0;
  //-------------sampling begins
  vector<int> samplepos(seq->tlength,1);
  vector<int> sampleparts;
  alldecoys=0;
  noclashdecoys=0;
  for(int i=0; i<sampleiter*(3+seq->etree.size()); i++) {
    //calculate sampleparts, and update mask of samplepos.
    if((i==0) || (i % sampleiter==0 && nfirst>0) || (nfirst==0 && i==sampleiter*4))
      //      if((nfirst==0 && i>=sampleiter*4) ||)
    {
      SEQUENCE * seq=testData[0];
      sampleparts.clear();
      ComputeSampleParts(seq, samplepos, sampleparts,nfirst);
      if(i==0)
        nfirst=0;
      else  if(nfirst<seq->etree.size()-1) {
        if(DEBUG)cout<<"end of nfirst "<<nfirst<<"-----------------------\n";
        nfirst++;
      }
      if(i!=0) {
        for(int datai=0; datai<testData.size(); datai++) {
          SEQUENCE * seq=testData[datai];
          //some work to enter next energy
          seq->e_last=1000;
          seq->sampcurr.clear();
          for(int j=0; j<seq->tlength; j++) {
            vector<double> x(0,2);
            if(seq->acptcurr.size()==0)
              seq->sampcurr.push_back(x);
            else
              seq->sampcurr.push_back(seq->acptcurr[j]);
          }
        }
      }
      continue;
    }
    for(int datai=0; datai<testData.size(); datai++) {
      SEQUENCE * seq=testData[datai];
      if(DEBUG)cerr<<"debug:: "<<datai<<" "<<seq->sampcurr.size()<<endl;
      //some work to enter next energy
      //get a node on a tree, find base pair of that node, decide begin, end,
      //we should search out the tree from leaf to root.
      //pseudoknot will affect , not not let it infeasible.
      //compute temperature;
      double e_curr;
      int begin,end;
      for(int nseg=0; nseg<sampleparts.size(); nseg+=2) {
        begin=sampleparts[nseg];
        end=sampleparts[nseg+1];
        int l=end-begin+1;
        if(l>40) {
          begin=begin+rand() % l;
          end=begin + rand() % max_segment;
          if(end>sampleparts[nseg+1])
            end=sampleparts[nseg+1];
        }
        if(begin-1>=0 && end-1 <=seq->length_seq-1) {
          sample2order(seq,begin-1,end-1);
        }
        //	sample2order(seq,begin,end);
        sampletorsion(seq,begin,end);
      }
      //      seq->showss();
      seq->Rebuild2();
      seq->RebuildFull();
      if(DEBUG)cerr<<"after reubildfull"<<seq->sampcurr.size()<<" "<<seq->fullbackbone.size()<<"\n";
//       for(int ibb=0;ibb<seq->fullbackbone.size();ibb++)
//       {
// 	if(DEBUG)cerr<<seq->sampcurr[ibb][0]<<" ";
// 	if(DEBUG)cerr<<seq->sampcurr[ibb][1]<<" ";
// 	if(DEBUG)cerr<<seq->sampcurr[ibb][2]<<" ";
// 	if(DEBUG)cerr<<seq->sampcurr[ibb][3]<<" ";
// 	if(DEBUG)cerr<<seq->sampcurr[ibb][5]<<" ";
// 	if(DEBUG)cerr<<seq->fullbackbone[ibb][18+0]<<" ";
// 	if(DEBUG)cerr<<seq->fullbackbone[ibb][18+1]<<" ";
// 	if(DEBUG)cerr<<seq->fullbackbone[ibb][18+2]<<endl;
//       }
      //      TuneChi(seq);
      //seq->showclash();
      alldecoys++;
      if(checkclash(seq)) {
        if(DEBUG)cerr<<"clash "<<nfirst<<" "<<i<<endl;
        continue;
      }
      noclashdecoys++;
      //compute energy
      e_curr=seq->energy(1,nfirst+1);
      double e_less=-1;
      if(nfirst>0)
        e_less=seq->energy(1,nfirst);
      saysth(i, sampleparts, seq);
      double temp_ce=temp[datai];
      double p = exp((seq->e_last-e_curr)/temp_ce);
      if(drand48() > p) { //refuse
        nrefuse++;
      } else {
        //accept
        nrefuse=0;
        lastup=i;
        seq->accept_label();
        seq->accept_tors();
        seq->e_last=e_curr;
        //compute rmsd
        double rslt=-1;
        //output only when whole energy is less than a threshold
        rslt=RMSDFull(seq,0);
        seq->rmsd=rslt;
        testDatafinal[datai]->savestruct(*seq);
        //save pdb if whoel energy less then 4 and save them to m_pModel->rslt for further parallel tempering.
        reportaccept(nfirst, seq, e_curr, i, rslt, e_less);
      }
    }
    //replica exchange
    if(DEBUG)cerr<<"exchange: ";
    if(i %30==0)
      for(int di= i % 2; di+1<testData.size(); di+=2) {
        //exchange neighbor
        if(DEBUG)cerr<<testData[di]->e_last<<" ";
        if(DEBUG)cerr<<testData[di+1]->e_last<<" ";
        double delta=(testData[di+1]->e_last - testData[di]->e_last)*(1.0/temp[di]-1.0/temp[di+1]);
        //	if(DEBUG)cerr<<"delta "<<delta;
        if(drand48() < exp(-delta) ) {
          //	  if(DEBUG)cerr<<" swap "<<di<<" "<<di+1<<endl;
          SEQUENCE *seqswap;
          seqswap=testData[di];
          testData[di]=testData[di+1];
          testData[di+1]=seqswap;
          seqswap=testDatafinal[di];
          testDatafinal[di]=testDatafinal[di+1];
          testDatafinal[di+1]=seqswap;
        }
      }
    if(DEBUG)cerr<<endl;
    if(i==sampleiter-1) {
      for(int datai=0; datai<testData.size(); datai++) {
        SEQUENCE * seq=testData[datai];
        char fname[100];
        sprintf(fname,"%s/decoy.%d-%d.pdb",workdir.c_str(),proc_id,datai);//keep last 10 decoys.
        //	savepdb(seq,fname);
      }
    }
  }
  //at last output all final struct
  for(int datai=0; datai<testData.size(); datai++) {
    SEQUENCE* finalseq=testDatafinal[datai];
    reportaccept(finalseq->etree.size()-1, finalseq, finalseq->e_last, 90000+datai, finalseq->rmsd, -1);
  }
}
//----------------start energy sample ---------------------
void  rnaCRFSampler::start_energy_sample()
{
  int sampleiter=4000;
  if(params["MAX_ITER"].length()>0)
    sampleiter=atoi(params["MAX_ITER"].c_str());
  if(DEBUG)cerr<<"total seqs "<<testData.size()<<endl;
  for(int datai=0; datai<testData.size(); datai++) {
    SEQUENCE * seq=testData[datai];
    //initial
    for(int j=0; j<seq->length_seq; j++) {
      seq->sampcurr.push_back(seq->alltors[j]);
      seq->accepted_label[j]=seq->obs_label[j];
    }
    //end of initial
    seq->Rebuild();
    seq->RebuildMore(0,seq->length_seq-1);
    double nategr=seq->energy(1);
    double natrslt=0;
    //    seq->e_last=nategr;
    if(DEBUG)cerr<<"Iter.\t Native rmsd "<<natrslt<< " Energy "<<nategr;
    if(DEBUG)cerr<<" b "<<seq->nclash<<" rr "<<seq->nclashrr<<" rb "<<seq->nclashrb<<" ";
    if(DEBUG)cerr<<RMSDmore(seq,1)<<endl;
    TuneChi(seq);
    if(DEBUG)cerr<<"TUNED:\t energy "<<seq->energy(1)<<" b "<<seq->nclash<<" rr "<<seq->nclashrr<<" rb "<<seq->nclashrb<<" "<<RMSDmore(seq,0)<<endl;
    if(DEBUG)cerr<<"True SS\n";
    seq->showtruess();
    string testfilename="testnative.pdb";
    savepdb(seq,testfilename.c_str());
    double minenergy=100000;
  }
  int lastup=0;
  int clashstep=0;
  int nrefuse=0;
  //-------------sampling begins
  SEQUENCE * seq=testData[0];
  vector<int> samplepos(seq->length_seq,1);
  for(int nfirst=0; nfirst<seq->etree.size(); nfirst++) {
    vector<int> sampleparts;
    //calculate sampleparts, and update mask of samplepos.
    if(samplepos[0]==1)
      sampleparts.push_back(0);
    for(int si=0; si<seq->length_seq-1; si++) {
      if(samplepos[si]==1 && samplepos[si+1]==0)
        sampleparts.push_back(si);
      if(samplepos[si]==0 && samplepos[si+1]==1)
        sampleparts.push_back(si+1);
    }
    if(samplepos[seq->length_seq-1]==1)
      sampleparts.push_back(seq->length_seq-1);
    for(int si= seq->sspairs[seq->etree[nfirst]][0]-1+1 ; si<seq->sspairs[seq->etree[nfirst]][1]-1-1; si++) {
      //if(DEBUG)cerr<<si;
      if(si >= 0 && si < seq->length_seq)
        samplepos[si]=0;
    }
    /*
    if(nfirst==0){
       sampleparts.push_back(0);
       sampleparts.push_back(seq->length_seq-1);
    }
    if(nfirst>=1 && nfirst <=3){
      sampleparts.push_back(0);
      sampleparts.push_back(seq->sspairs[nfirst][0]-1);
      sampleparts.push_back(seq->sspairs[nfirst][1]-1);
      sampleparts.push_back(seq->length_seq-1);
    }
    if(nfirst>=4)
    {
       sampleparts.push_back(seq->sspairs[nfirst-1][1]-1+1);
       sampleparts.push_back(seq->length_seq-1);
    }
    */
    // if(nfirst==0)
    //     {
    //       sampleparts.push_back(0);
    //       sampleparts.push_back(length_seq-1);
    //     }
    //     else
    //     {
    //       if(sspairs[nfirst][0] < sspairs[nfirst-1][0] && sspairs[nfirst-1][1] < sspairs[nfirst][1]  )
    //       {
    // 	sampleparts.push_back(0);
    // 	sampleparts.push_back(sspairs[nfirst-1][0]);
    // 	sampleparts.push_back(sspairs[nfirst-1][1]);
    // 	sampleparts.push_back(length_seq-1);
    //       }
    //       else if(sspairs[nfirst][1] < sspairs[nfirst-1][0] || sspairs[nfirst-1][1] < sspairs[nfirst][0]  )
    //  x     {
    // 	sampleparts.push_back(sspairs[nfirst-1][0]);
    // 	sampleparts.push_back(sspairs[nfirst-1][1]);
    //       }
    //     }
    if(DEBUG)cerr<<"nseg ";
    for(int nseg=0; nseg<sampleparts.size(); nseg++)
      if(DEBUG)cerr<<sampleparts[nseg]<<" ";
    if(DEBUG)cerr<<endl;
    for(int i=0; i<sampleiter; i++) {
      if(i==0)
        seq->e_last=1000;
      if(i==sampleiter-1) {
        seq->sampcurr.clear();
        for(int j=0; j<seq->length_seq; j++) {
          seq->sampcurr.push_back(seq->acptcurr[j]);
        }
        continue;
      }
      //get a node on a tree, find base pair of that node, decide begin, end,
      //we should search out the tree from leaf to root.
      //pseudoknot will affect , not not let it infeasible.
      //compute temperature;
      double temp_ce;// single temperature
      temp_ce=1.0/4.0/(i*1.0/sampleiter+0.001);
      //      temp_ce=0.001;
      double e_curr;
      int begin,end;
      for(int nseg=0; nseg<sampleparts.size(); nseg+=2) {
        begin=sampleparts[nseg];
        end=sampleparts[nseg+1];
        sample2order(seq,begin,end);
        sampletorsion(seq,begin,end);
      }
      if(DEBUG)cerr<<"Iter.\t"<<proc_id<<"."<<i<<"\n";
      seq->showss();
      seq->Rebuild();
      seq->RebuildMore(0,seq->length_seq-1);
      //      TuneChi(seq);
      //seq->showclash();
      if(DEBUG)cerr<<" b "<<seq->nclash<<" rr "<<seq->nclashrr<<" rb "<<seq->nclashrb;
      if(seq->nclash>0 || seq->nclashrr + seq->nclashrb>0) {
        if(DEBUG)cerr<<endl;
        continue;
      }
      //compute energy
      if(nfirst>0)
        e_curr=seq->energy(1,nfirst+1);
      else
        e_curr=seq->energy(1,nfirst+2);
      double e_less;
      if(nfirst>0)
        e_less=seq->energy(1,nfirst);
      else
        e_less=seq->energy(0,1);
      double scale=atof(params["ESCALE"].c_str());
      if(e_curr>seq->e_last) {
        double p = exp((seq->e_last-e_curr)/temp_ce)*0.7;
        if(drand48() > p) { //refuse
          if(DEBUG)cerr<<" refuse "<<p<<" "<< seq->e_last-e_curr<<"\n";
          nrefuse++;
          continue;
        } else {
          if(DEBUG)cerr<<" accept "<<p<<" "<< seq->e_last-e_curr<<"\n";
        }
      } else {
        if(DEBUG)cerr<<" accept 1\n";
        //accept
        nrefuse=0;
        lastup=i;
        seq->accept_label();
        seq->accept_tors();
        seq->e_last=e_curr;
        //compute rmsd
        double rslt=-1;
        //output only when whole energy is less than a threshold
        RMSD(seq->outstru,seq->native,seq->length_seq*2+2,&rslt);
        if(nfirst==seq->etree.size()-1) {
          if(DEBUG)cout<<"Iter. "<<nfirst<<"."<<i<<" rmsd "<<rslt<< " wholeEn "<<e_curr<<" e_less "<<e_less;
        } else {
          if(DEBUG)cout<<"Iter. "<<nfirst<<"."<<i<<" rmsd "<<rslt<< " Energy "<<e_curr<<" e_less "<<e_less;
        }
        clashstep=0;
        char fname[100];
        sprintf(fname,"%s/decoy.%d.%d.pdb",workdir.c_str(),nfirst,i);//keep last 10 decoys.
        if(rslt<5)
          if(DEBUG)cout<<" rmsdfull "<<RMSDmore(seq, 0);
          else if(DEBUG)cout<<" rmsdfull -1";
        if(DEBUG)cout<<endl;
        savepdb(seq,fname);
        if(e_curr<1)break;
      }
    }
  }
}
//----------------start energy sample, then parallel tempering if energy not small enough ---------------------
void  rnaCRFSampler::start_energy_sample_thenpt()
{
  int lastup=0;
  int clashstep=0;
  int nrefuse=0;
  SEQUENCE * seq=testData[0];
  SEQUENCE * finalseq=new SEQUENCE(*seq);
  int sampleiter=4000;
  if(params["MAX_ITER"].length()>0)
    sampleiter=atoi(params["MAX_ITER"].c_str());
  //  if(DEBUG)cerr<<"total seqs "<<testData.size()<<endl;
  //initial
  verifynative();
  //-------------heating up
  heatingup();
  seq->accept_label();
  seq->accept_tors();
  //-------------sampling begins
  alldecoys=0;
  noclashdecoys=0;
  vector<int> samplepos(seq->tlength,1);
  for(int nfirst=0; nfirst<seq->etree.size(); nfirst++) {
    vector<int> sampleparts;
    //calculate sampleparts, and update mask of samplepos. 1 is position to be sampled
    ComputeSampleParts(seq, samplepos, sampleparts,nfirst);
    if(sampleparts.size()==0)continue;
    int nsample=sampleiter;
    if(nfirst==0)nsample=sampleiter*4;
    seq->e_last=1000;
    if(DEBUG)cerr<<"nfirst changed "<<nfirst<<endl;
    for(int i=0; i<nsample; i++) {
      //get a node on a tree, find base pair of that node, decide begin, end,
      //we should search out the tree from leaf to root.
      //pseudoknot will affect , not not let it infeasible.
      //compute temperature;
      double temp_ce;// single temperature
      //      temp_ce=1.0/4.0/(i*1.0/nsample+0.001);
      //      temp_ce=0.001;
      double e_curr;
      int begin,end;
      for(int nseg=0; nseg<sampleparts.size(); nseg+=2) {
        begin=sampleparts[nseg];
        end=sampleparts[nseg+1];
        int l=end-begin+1;
        if(l>4) {
          begin=begin+rand() % l;
          end=begin + rand() % max_segment;
          if(end>sampleparts[nseg+1])
            end=sampleparts[nseg+1];
        }
        if(begin-1>=0 && end-1 <=seq->length_seq-1) {
          sample2order(seq,begin-1,end-1);
        }
        sampletorsion(seq,begin,end);
      }
      seq->Rebuild2();
      seq->RebuildFull();
      //      TuneChi(seq);
      //seq->showclash();
      alldecoys++;
      if(checkclash(seq)) {
        if(DEBUG)cerr<<"clash "<<nfirst<<" "<<i<<endl;
        continue;
      }
      noclashdecoys++;
      e_curr=seq->energy(1,nfirst+1);
      double e_less=-1;
      //      if(nfirst>0)
      //	e_less=seq->energy(1,nfirst);
      //check energy
      //      if(e_curr>seq->e_last){
      saysth(i, sampleparts, seq);
      temp_ce=0.00001;
      double p = exp((seq->e_last-e_curr)/temp_ce)*0.7;
      if(drand48() > p) { //refuse
        nrefuse++;
      } else {
        //accept
        nrefuse=0;
        lastup=i;
        seq->accept_label();
        seq->accept_tors();
        seq->e_last=e_curr;
        //compute rmsd
        double rslt=-1;
        //output only when whole energy is less than a threshold
        rslt=RMSDFull(seq,0);
        seq->rmsd=rslt;
        finalseq->savestruct(*seq);
        //save pdb if whoel energy less then 4 and save them to m_pModel->rslt for further parallel tempering.
        reportaccept(nfirst, seq, e_curr, i, rslt, e_less);
      }
    }
    //clear sampcurr
    seq->sampcurr.clear();
    for(int j=0; j<seq->tlength; j++) {
      vector<double> x(0,2);
      if(seq->acptcurr.size()==0)
        seq->sampcurr.push_back(x);
      else
        seq->sampcurr.push_back(seq->acptcurr[j]);
    }
  }
  reportaccept(finalseq->etree.size()-1, finalseq, finalseq->e_last, 99999, finalseq->rmsd, -1);
}
//----------------start energy piecewise sample with simulated annealing ---------------------
void  rnaCRFSampler::start_epsa()
{
  cerr<<"Sampling started.\n";
  int lastup=0;
  int clashstep=0;
  int nrefuse=0;
  SEQUENCE * seq=testData[0];
  SEQUENCE * finalseq=new SEQUENCE(*seq);
  int sampleiter=4000;
  if(params["MAX_ITER"].length()>0)
    sampleiter=atoi(params["MAX_ITER"].c_str());
  //  if(DEBUG)cerr<<"total seqs "<<testData.size()<<endl;
  //initial
  verifynative();
  //-------------heating up
  heatingup();
  seq->accept_label();
  seq->accept_tors();
  //-------------sampling begins
  alldecoys=0;
  noclashdecoys=0;
  int nTorsionSample=atoi(params["SAMP_ITER"].c_str()); // ?
  vector<int> samplepos(seq->tlength,1);
  for(int nfirst=0; nfirst<seq->etree.size();) {
    vector<int> sampleparts;
    //calculate sampleparts, and update mask of samplepos. 1 is position to be sampled
    ComputeSampleParts(seq, samplepos, sampleparts,nfirst);
    if(sampleparts.size()==0)continue;
    int nsample=sampleiter;
    if(nfirst==0)nsample=sampleiter*4;
    seq->e_last=1000;
    if(DEBUG)cerr<<"nfirst changed "<<nfirst<<endl;
    for(int i=0; i<nsample; i++) {
      //get a node on a tree, find base pair of that node, decide begin, end,
      //we should search out the tree from leaf to root.
      //pseudoknot will affect , not not let it infeasible.
      //compute temperature;
      double temp_ce;// single temperature
      //      temp_ce=0.001;
      double e_curr;
      int begin,end;
      for(int nseg=0; nseg<sampleparts.size(); nseg+=2) {
        clock_t tsam0=clock();
        begin=sampleparts[nseg];
        end=sampleparts[nseg+1];
        if( nsample % nTorsionSample==0) {
          int l=end-begin+1;
          if(l>4) {
            begin=begin+rand() % l;
            end=begin + rand() % max_segment;
            if(end>sampleparts[nseg+1])
              end=sampleparts[nseg+1];
          }
          if(begin-1>=0 && end-1 <=seq->length_seq-1) {
            sample2order(seq,begin-1,end-1);
          }
        }
        sampletorsion(seq,begin,end);
        clock_t tsam=clock();
        ///  cerr<<"sample time: "<<(tsam-tsam0+0.0)/CLOCKS_PER_SEC<<endl;
      }
      //clock_t tReb0=clock();
      seq->Rebuild2();
      RNAbuilder myrna;
      //myrna.GreeyBuild(seq,this);
      //	myrna.BuildFullFast(seq,this);
      switch(atoi(params["BUILDMETHOD"].c_str())) {
      case(0):
        seq->RebuildFull();
        break;
      case(1):
        myrna.BuildFullFast(seq,this);
        break;
      case(2):
        myrna.PartBuild(seq,this,samplepos);
        //	myrna.GreeyBuild(seq,this);
      }
      // clock_t tReb1=clock();
      //cerr<<"rebuild time: "<<(tReb1-tReb0+0.0)/CLOCKS_PER_SEC<<endl;
      //		exit(0);
      //TuneChi(seq);
      //clock_t tReb=clock();
      //seq->showclash();
      alldecoys++;
      if(checkclash(seq)) {
        if(DEBUG)cerr<<"clash "<<nfirst<<" "<<i<<endl;
        //	  seq->showclash();
        if(DEBUG) {
          seq->showclash();
          char fn[100];
          sprintf(fn,"clash-%d.pdb",i);
          savepdb3(seq,fn);
        }
        continue;
      }
      noclashdecoys++;
      e_curr=seq->energy(1,nfirst+1);
      if(isnan(e_curr))
        e_curr=1e20;
      double e_less=-1;
      //      if(nfirst>0)
      //	e_less=seq->energy(1,nfirst);
      //check energy
      //      if(e_curr>seq->e_last){
      saysth(i, sampleparts, seq);
      //      temp_ce=0.00001;
      //[log,donot remove,temp.test.2]
      temp_ce=1.0/(i+0.001);
      //    temp_ce=2.0/(i+0.001); //NEVER REMOVE
      double p = exp((seq->e_last-e_curr)/temp_ce);
      if(drand48() > p) { //refuse
        nrefuse++;
      } else {
        //accept
        //cerr<<"rebuild time: "<<(tReb1-tReb0+0.0)/CLOCKS_PER_SEC<<endl;
        nrefuse=0;
        lastup=i;
        seq->accept_label();
        seq->accept_tors();
        seq->e_last=e_curr;
        //compute rmsd
        double rslt=-1;
        //output only when whole energy is less than a threshold
        if(seq->haspdb) {
          rslt=RMSDFull(seq,0);
          seq->rmsd=rslt;
        } else {
          rslt=0;
          seq->rmsd=0;
        }
        finalseq->savestruct(*seq);
        //save pdb if whoel energy less then 4 and save them to m_pModel->rslt for further parallel tempering.
        reportaccept(nfirst, seq, e_curr, i, rslt, e_less);
        cerr<<"nfirst "<<nfirst << " Alldecoys "<<alldecoys<<" nclashdecoys "<<noclashdecoys<<" nrefuse "<<nrefuse<<" energy "<<seq->e_last<<endl;
        //An early stop strategy.--IMPORTANT--
        if(seq->e_last<0.5)break;
        //min(Median-2, Median/2);
      }
    }
    //clear sampcurr
    seq->sampcurr.clear();
    for(int j=0; j<seq->tlength; j++) {
      vector<double> x(0,2);
      if(seq->acptcurr.size()==0)
        seq->sampcurr.push_back(x);
      else
        seq->sampcurr.push_back(seq->acptcurr[j]);
    }
    //Jump at most 4 pairs inside a stem or take the end of stem for next sampling.
    int njump=1;
    int a,b,c,d;
    while(njump<3 && nfirst+njump< seq->etree.size()) {
      a=seq->sspairs[seq->etree[nfirst+njump-1]][0];
      b=seq->sspairs[seq->etree[nfirst+njump-1]][1];
      c=seq->sspairs[seq->etree[nfirst+njump]][0];
      d=seq->sspairs[seq->etree[nfirst+njump]][1];
      if(! (c+1==a && b+1==d ) )
        break;
      else
        njump++;
    }
    cout<<"\n"<<a<<" "<<b<<" "<<c<<" "<<d<<"\n";
    nfirst+=njump;
    /*
     if(ceil(seq->etree.size()/5.0)>=1)
       nfirst=nfirst+ceil(seq->etree.size()/5.0);
     else
       nfirst++;
    */
    if(nfirst> seq->etree.size()+1)nfirst=seq->etree.size()-1;
  }
  reportaccept(finalseq->etree.size()-1, finalseq, finalseq->e_last, 99999, finalseq->rmsd, -1);
  cerr<< "Alldecoys "<<alldecoys<<" nclashdecoys "<<noclashdecoys<<" nrefuse "<<nrefuse<<endl;
}
void  rnaCRFSampler::start_only_parallel_temper()
{
  //used only with es_thenpt
  //prepare parallel tempering by
  if(DEBUG)cerr<<"start_only_parallel_temper\n";
  if(DEBUG)cerr<<es_rst.size()<<" structures are available\n";
  int nTemper=20;
  SEQUENCE * seq;
  //copy seq
  testData.clear();
  for(int i=0; i<nTemper; i++) {
    int j=i;
    if(i>es_rst.size()-1)
      j=es_rst.size()-1;
    SEQUENCE *seq1=es_rst[j];
    testData.push_back(es_rst[j]);
    seq1->ComputeVi();
    vector<double> x;
    seq1->sampcurr.clear();
    for(int k=0; k<seq1->length_seq; k++)
      seq1->sampcurr.push_back(x);
  }
  int sampleiter=4000;
  if(params["MAX_ITER"].length()>0)
    sampleiter=atoi(params["MAX_ITER"].c_str());
  int lastup=0;
  int clashstep=0;
  int nrefuse=0;
  //-------------sampling begins
  //compute temp
  double temp[testData.size()];
  for(int datai=0; datai<testData.size()/3; datai++) {
    //    temp[datai] = pow(2.0, (int)(testData.size()-datai-4));//let min temp=1/8
    //    temp[datai]= 1.0/(datai/testData.size()*7+0.1)
    temp[datai]=10-datai*1.0/testData.size()*10;
  }
  for(int datai=testData.size()/3; datai<testData.size(); datai++) {
    temp[datai]=0.6*pow(0.8,(datai-testData.size()/3+0.0)/testData.size()*10);
  }
  //By far, temp varies from 100 90 80 66 33 16 8 4 2 1 0.5 .....
  for(int i=0; i<sampleiter; i++) {
    int level=1;
//     if(i<300)
//       level=0;
//     else
//       level=1;
    for(int datai=0; datai<testData.size(); datai++) {
      //choose begin, end , sample a segment from begin to end.
      seq=testData[datai];
      double e_curr;
      int begin=rand() % seq->length_seq;
      int seglen=7;
      //      int end=rand() % seq->length_seq;//+rand() %3;// (seq->length_seq/5);
      int end = begin+seglen;
      if(end >= seq->length_seq)
        end = seq->length_seq-1;
      if(begin>end) {
        int be=end;
        end=begin;
        begin=be;
      }
      if(i==0) {
        begin=0;
        end=seq->length_seq-1;
      }
      sample2order(seq,begin,end);
      if(DEBUG)cerr<<"Iter.\t"<<proc_id<<"."<<i<<"-"<< datai<<" ";
      //      seq->showss();
      //seq->showtruess();
      sampletorsion(seq,begin,end);
      seq->Rebuild();
      seq->RebuildMore(0,seq->length_seq-1);
      //      TuneChi(seq);
      //seq->showclash();
      if(DEBUG)cerr<<" b "<<seq->nclash<<" rr "<<seq->nclashrr<<" rb "<<seq->nclashrb;
      if(seq->nclash>0||  seq->nclashrr + seq->nclashrb>10) {
        if(DEBUG)cerr<<endl;
        continue;
      } else if(DEBUG)cerr<<endl;
      //compute energy
      e_curr=seq->energy(level);
      double scale=atof(params["ESCALE"].c_str());
      if(e_curr>seq->e_last) {
        double p = exp((seq->e_last-e_curr)/scale/temp[datai]);
        if(drand48() > p) { //refuse
          if(DEBUG)cerr<<" refuse "<<p<<" "<< seq->e_last-e_curr<<"\n";
          nrefuse++;
          continue;
        } else {
          if(DEBUG)cerr<<" accept "<<p<<" "<< seq->e_last-e_curr<<"\n";
        }
      } else {
        if(DEBUG)cerr<<" accept 1\n";
      }
      //accept
      nrefuse=0;
      lastup=i;
      seq->accept_label();
      seq->accept_tors();
      seq->e_last=e_curr;
      //compute rmsd
      double rslt=888;
      if(e_curr<6)
        RMSD(seq->outstru,seq->native,seq->length_seq*2+2,&rslt);
      seq->rmsd=rslt;
      seq->fullrmsd=-1;
      if(DEBUG)cout<<"Iter. "<<proc_id<<"."<<i<<" rmsd "<<rslt<< " Energy "<<e_curr<<" vitprob "<<seq->viterobsprob<< " mapprob "<<seq->mapobsprob<<" q3 "<< seq->q3;
      clashstep=0;
      if(rslt < 4) {
        seq->fullrmsd=RMSDmore(seq, 0);
        if(DEBUG)cout<<" rmsdfull "<< seq->fullrmsd;
      }
      if(DEBUG)cout<<endl;
      if(e_curr<4) {
        char fname[100];
        sprintf(fname,"%s/decoy.pt.%d.pdb",workdir.c_str(),i);//keep last 10 decoys.
        savepdb(seq,fname);
      }
    }
    //replica exchange
    if(DEBUG)cerr<<"exchange: ";
    if(i %29==0)
      for(int di= i % 2; di+1<testData.size(); di+=2) {
        //exchange neighbor
        if(DEBUG)cerr<<testData[di]->e_last<<" ";
        if(DEBUG)cerr<<testData[di+1]->e_last<<" ";
        double delta=(testData[di+1]->e_last - testData[di]->e_last)*(1.0/temp[di]-1.0/temp[di+1]);
        if(DEBUG)cerr<<"delta "<<delta;
        if(drand48() < exp(-delta) ) {
          if(DEBUG)cerr<<" swap "<<di<<" "<<di+1<<endl;
          SEQUENCE *seqswap;
          seqswap=testData[di];
          testData[di]=testData[di+1];
          testData[di+1]=seqswap;
        }
      }
    if(DEBUG)cerr<<endl;
    if(i==sampleiter-1) {
      for(int datai=0; datai<testData.size(); datai++) {
        SEQUENCE * seq=testData[datai];
        char fname[100];
        sprintf(fname,"%s/decoy.%d-%d.pdb",workdir.c_str(),proc_id,datai);//xkeep last 10 decoys.
        savepdb(seq,fname);
      }
    }
  }
}
//----------------start canonical ensemble ---------------------
void  rnaCRFSampler::start_ce()//normal annealing
{
  //prepare parallel tempering by
  SEQUENCE * seq=testData[0];
  int sampleiter=10000;
  verifynative();
  heatingup();
  seq->accept_label();
  seq->accept_tors();
  int lastup=0;
  int clashstep=0;
  int nrefuse=0;
  //-------------sampling begin
  alldecoys=0;
  noclashdecoys=0;
  //  double temp[testData.size()];
  //for(int datai=0;datai<testData.size();datai++){
  //  temp[datai] = pow(2.0, (int)(testData.size()-datai-4));//let min temp=1/8
  //}
  for(int i=0; i<sampleiter; i++) {
    //compute temperature;
    double temp_ce;// single temperature
    if(i % 10==0)
      temp_ce=5/(i/100.01+1.0);
    double e_curr;
    int begin=rand() % seq->length_seq;
    int end=rand() % 7 + begin;//+rand() %3;// (seq->length_seq/5);
    if(end > seq->length_seq-1) {
      end = seq->length_seq-1;
    }
    sample2order(seq,begin,end);
    sampletorsion(seq,begin,end);
    //    seq->showss();
    seq->Rebuild2();
    seq->RebuildFull();
    alldecoys++;
    if(checkclash(seq)) {
      continue;
    }
    noclashdecoys++;
    saysth0(i, seq);
    //compute energy
    e_curr=seq->energy(1);
    double p = exp((seq->e_last-e_curr)/temp_ce)*0.7;
    if(drand48() > p) { //refuse
      nrefuse++;
    } else {
      //accept
      nrefuse=0;
      lastup=i;
      seq->accept_label();
      seq->accept_tors();
      seq->e_last=e_curr;
      //compute rmsd
      double rslt=-1;
      //output only when whole energy is less than a threshold
      rslt=RMSDFull(seq,0);
      seq->rmsd=rslt;
      //save pdb if whoel energy less then 4 and save them to m_pModel->rslt for further parallel tempering.
      reportaccept(-1, seq, e_curr, i, rslt, -1);
    }
  }
}
void  rnaCRFSampler::start_fixlabel()//no initial
{
  //prepare parallel tempering by
  SEQUENCE * seq=testData[0];
  int lastup=0;
  int clashstep=0;
  int nrefuse=0;
  //-------------sampling begins
  //  double temp[testData.size()];
  //for(int datai=0;datai<testData.size();datai++){
  //  temp[datai] = pow(2.0, (int)(testData.size()-datai-4));//let min temp=1/8
  //}
  for(int i=0; i<10000; i++) {
    //compute temperature;
    double temp_ce;// single temperature
    if(i % 10==0)
      temp_ce=0.01;
    for(int datai=0; datai<testData.size(); datai++) {
      //choose begin, end , sample a segment from begin to end.
      seq=testData[datai];
      double e_curr;
      int begin=rand() % seq->length_seq;
      int end=rand() % 7 + begin;//+rand() %3;// (seq->length_seq/5);
      //            int end=begin;
      if(end > seq->length_seq-1) {
        end = seq->length_seq-1;
      }
      for(int nk=0; nk<seq->length_seq; nk++) {
        seq->proposed_label[nk]=seq->accepted_label[nk];
        vector<double> currtors=torbin[seq->proposed_label[nk]];
        seq->sampcurr[nk]=currtors;
      }
      sampletorsion(seq,begin,end);
      if(DEBUG)cerr<<"Iter.\t"<<proc_id<<"."<<i<<"-"<< datai<<"\n";
      seq->Rebuild();
      seq->RebuildMore(0,seq->length_seq-1);
      if(DEBUG)cerr<<" b "<<seq->nclash<<" rr "<<seq->nclashrr<<" rb "<<seq->nclashrb;
      if(seq->nclash>0 || seq->nclashrr + seq->nclashrb>10) {
        if(DEBUG)cerr<<endl;
        continue;
      }
      //compute energy
      e_curr=seq->energy(1);
      double scale=atof(params["ESCALE"].c_str());
      if(e_curr>seq->e_last) {
        double p = exp((seq->e_last-e_curr)/scale/temp_ce);
        if(drand48() > p) { //refuse
          if(DEBUG)cerr<<" refuse "<<p<<" "<< seq->e_last-e_curr<<"\n";
          nrefuse++;
          continue;
        } else {
          if(DEBUG)cerr<<" accept "<<p<<" "<< seq->e_last-e_curr<<"\n";
        }
      } else {
        if(DEBUG)cerr<<" accept 1\n";
      }
      //accept
      nrefuse=0;
      lastup=i;
      seq->accept_label();
      seq->accept_tors();
      seq->e_last=e_curr;
      //compute rmsd
      double rslt=-1;
      RMSD(seq->outstru,seq->native,seq->length_seq*2+2,&rslt);
      if(DEBUG)cout<<"Iter. "<<proc_id<<"."<<i<<" rmsd "<<rslt<< " Energy "<<e_curr<<" vitprob "<<seq->viterobsprob<< " mapprob "<<seq->mapobsprob<<" q3 "<< seq->q3<<endl;
      clashstep=0;
      //char fname[100];
      //sprintf(fname,"%s/decoy.%d.%d.pdb",workdir.c_str(),proc_id,i % 10);//keep last 10 decoys.
      //      if(DEBUG)cout<<" rmsdfull "<<RMSDmore(seq, 0)<<endl;
      //      savepdb(seq,fname);
    }
  }
}
void  rnaCRFSampler::start_kEns()
{
  //prepare parallel tempering by
  vector<int> energyhist(1000,0); //from 0.0 -99.9 step=0.1
  SEQUENCE * seq=testData[0];
  int sampleiter=5000;
  for(int datai=0; datai<testData.size(); datai++) {
    SEQUENCE * seq=testData[datai];
    //initial
    for(int j=0; j<seq->length_seq; j++) {
      seq->sampcurr.push_back(torbin[0]);
    }
    for(int j=0; j<seq->length_seq; j++) {
      long int nrnd=drand48() * (ExpDistChi.size()-1);
      seq->sampcurr[j][2]=ExpDistChi[nrnd];
    }
    for(int i=0; i<seq->length_seq*2+2; i++) {
      for(int j=0; j<3; j++)
        seq->outstru[i][j]=seq->native[i][j];
    }
    //end of initial
    seq->RebuildMore(0,seq->length_seq-1);
    double nategr=seq->energy(1);
    double natrslt=0;
    if(DEBUG)cerr<<"Iter.\t Native rmsd "<<natrslt<< " Energy "<<nategr;
    if(DEBUG)cerr<<" b "<<seq->nclash<<" rr "<<seq->nclashrr<<" rb "<<seq->nclashrb<<" ";
    if(DEBUG)cerr<<RMSDmore(seq,0)<<endl;
    //    TuneChi(seq);
    if(DEBUG)cerr<<"TUNED:\t energy "<<seq->energy(1)<<" b "<<seq->nclash<<" rr "<<seq->nclashrr<<" rb "<<seq->nclashrb<<" "<<RMSDmore(seq,0)<<endl;
    string testfilename="testnative.pdb";
    savepdb(seq,testfilename.c_str());
    //-----------end of test native
    //Initial: sample the whole sequence.
    sample2order(seq,0,seq->length_seq-1);
    //find a min in the first 10000 decoy,
    double minenergy=1000000;
    //heating up------------------------
    if(DEBUG)cerr<<"Heating up\n";
    time_t t1;
    time(&t1);
    for(int i=0; i<10; i++) {
      sample2order(seq,0,seq->length_seq-1);
      seq->accept_label();
      sampletorsion(seq,0,seq->length_seq-1);
      seq->Rebuild();
      seq->RebuildMore(0,seq->length_seq-1);
      //      TuneChi(seq);
      if(DEBUG)cerr<<" b "<<seq->nclash<<" rr "<<seq->nclashrr<<" rb "<<seq->nclashrb<<endl;
      //      if(seq->nclashrb+seq->nclashrr+seq->nclash>0){
      //	continue;
      //}
      double egr=seq->energy(1);
      double rslt=0;
      RMSD(seq->outstru,seq->native,seq->length_seq*2+2,&rslt);
      if(DEBUG)cerr<<"Iter. "<<-1<<" rmsd "<<rslt<< " Energy "<<egr<<endl;
      if(egr<seq->e_last) {
        seq->e_last=egr;
        seq->accept_label();
      }
      if(DEBUG)cerr<<datai<<"initial energy "<<seq->e_last<<endl<<endl;
    }
  }
  //  return;
  //-------------end of heating up
  int lastup=0;
  int clashstep=0;
  int nrefuse=0;
  //-------------sampling begins
  //  double temp[testData.size()];
  //for(int datai=0;datai<testData.size();datai++){
  //  temp[datai] = pow(2.0, (int)(testData.size()-datai-4));//let min temp=1/8
  //}
  for(int i=0; i<sampleiter; i++) {
    //compute temperature;
    double temp_ce;// single temperature
    if(i % 10==0)
      temp_ce=10/(i/100.01+1.0);
    for(int datai=0; datai<testData.size(); datai++) {
      //choose begin, end , sample a segment from begin to end.
      seq=testData[datai];
      double e_curr;
      int begin=rand() % seq->length_seq;
      int end=rand() % 7 +begin;//+rand() %3;// (seq->length_seq/5);
      if(end>seq->length_seq-1)
        end=seq->length_seq-1;
      sample2order(seq,begin,end);
      if(DEBUG)cerr<<"Iter.\t"<<proc_id<<"."<<i<<"-"<< datai<<"\n";
      sampletorsion(seq,begin,end);
      seq->Rebuild();
      seq->RebuildMore(0,seq->length_seq-1);
      TuneChi(seq);
      //seq->showclash();
      if(DEBUG)cerr<<" b "<<seq->nclash<<" rr "<<seq->nclashrr<<" rb "<<seq->nclashrb;
      if(seq->nclash + seq->nclashrr + seq->nclashrb>50) {
        continue;
      }
      //compute energy
      e_curr=seq->energy(1);
      if(e_curr>99.8) e_curr=99.8;
      //update histgram
      energyhist[int(e_curr*10)]++;
      double scale=atof(params["ESCALE"].c_str());
      double p;// = exp((seq->e_last-e_curr)/scale/temp_ce);
      double ki=0,kj=0;
      for(int si=0; si<int(seq->e_last*10); si++)
        ki++;
      for(int si=0; si<int(e_curr*10); si++)
        kj++;
      p=ki/kj;
      if(drand48() > p) { //refuse
        if(DEBUG)cerr<<" refuse "<<p<<" "<< seq->e_last-e_curr<<"\n";
        nrefuse++;
        continue;
      } else {
        if(DEBUG)cerr<<" accept "<<p<<" "<< seq->e_last-e_curr<<"\n";
      }
      //accept
      nrefuse=0;
      lastup=i;
      seq->accept_label();
      seq->accept_tors();
      seq->e_last=e_curr;
      //compute rmsd
      double rslt=0;
      RMSD(seq->outstru,seq->native,seq->length_seq*2+2,&rslt);
      if(DEBUG)cout<<"Iter. "<<proc_id<<"."<<i<<" rmsd "<<rslt<< " Energy "<<e_curr<<" vitprob "<<seq->viterobsprob<< " mapprob "<<seq->mapobsprob<<" q3 "<< seq->q3<< endl;
      clashstep=0;
      if(i>1000) {
        char fname[100];
        sprintf(fname,"%s/decoy.%d.%d.pdb",workdir.c_str(),proc_id,i % 10);//keep last 10 decoys.
        //if(DEBUG)cout<<" rmsdfull "<<RMSDmore(seq, 0)<<endl;
        savepdb(seq,fname);
      }
    }
  }
}

int main(int argc, char **argv)
{
  if(DBG)cerr<<"====warning : debug version=====\n";
  unsigned int randomSeed=0;
  clock_t ts,te;
  time_t tts,tte;
  ifstream in("/dev/urandom",ios::in);
  in.read((char*)&randomSeed, sizeof(unsigned)/sizeof(char));
  in.close();
  unsigned id=getpid();
  randomSeed=randomSeed*randomSeed+id*id;
  //we can set the random seed at only the main function
  srand48(randomSeed);
  srand(randomSeed);
#ifdef _MPI
  MPI_Init(&argc, &argv);
#endif
  rnaCRFSampler rnaModel;
  proc_id=0;
#ifdef _MPI
  MPI_Comm_rank(MPI_COMM_WORLD, &proc_id);
  MPI_Comm_size(MPI_COMM_WORLD, &num_procs);
#endif
  rnaModel.Initialize(argc, argv);
  if(!proc_id) {
    cerr << "Initialization Finished!" << endl;
  }
#ifdef _MPI
  MPI_Barrier(MPI_COMM_WORLD);
#endif
  //begin sampling
  //  rnaModel.sample2order(rnaModel.testData[0],0,rnaModel.testData[0]->length_seq-1);
  //  rnaModel.sample2order(rnaModel.testData[0],10,20);
  tts=time(NULL);
  if(rnaModel.params["DDD"].length()>0) {
    //    SEQUENCE x(1,&rnaModel);
    //rnaModel.readpdb(&x, "../pdb/2a43.pdb1");
    if(DEBUG)cerr<<"\n\n\ntestrebuild\n";
    rnaModel.testRebuild();
  } else if(rnaModel.params["PT"].length()==0) {
    if(DEBUG)cerr<<"start energy sample\n";
    rnaModel.start_energy_sample();
    rnaModel.start_fixlabel();
    //
  } else if(rnaModel.params["PT"]=="ce") {
    if(DEBUG)cerr<<"start ce\n";//simulated annealing
    rnaModel.start_ce();
  } else {
    switch(atoi(rnaModel.params["PT"].c_str())) {
    case(1):
      if(DEBUG)cerr<<"start parallel\n";
      rnaModel.start_parallel_temper();
      break;
    case(2):
      if(DEBUG)cerr<<"start 1/k ensemble";
      rnaModel.start_kEns();
      break;
    case(3):
      if(DEBUG)cerr<<"start es pt ";
      rnaModel.start_espt();
      break;
    case(4):
      if(DEBUG)cerr<<"start es then pt ";
      rnaModel.start_energy_sample_thenpt();
      sort(rnaModel.es_rst.begin(),rnaModel.es_rst.end(), seq_compare_energy);
      //      rnaModel.start_only_parallel_temper();
      break;
    case(5):
      if(DEBUG)cerr<<"start energy piecewise annealing ";
      rnaModel.start_epsa();
      //      sort(rnaModel.es_rst.begin(),rnaModel.es_rst.end(), seq_compare_energy);
      //      rnaModel.start_only_parallel_temper();
      break;
    }
  }
  //  rnaModel.testRebuildMore();
#ifdef _MPI
  MPI_Barrier(MPI_COMM_WORLD);
#endif
  tte=time(NULL);
  if(!proc_id)
    cerr<<"================ All done in "<< difftime(tte,tts) <<" seconds ==============\n";
  //  for(int i=0;i<rnaModel.testData.size();i++)
  //  delete rnaModel.testData[i];
#ifdef _MPI
  MPI_Finalize();
#endif
  return 0;
}
