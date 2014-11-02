#ifndef BCNF_MPI_TP_H
#define BCNF_MPI_TP_H

#include "ScoreMatrix.h"
#include "Score.h"
#include "bCNF.h"

using namespace std;

#define DUMMY -1

class rnaCRFSampler;

class SEQUENCE
{
public:
  SEQUENCE(int len, rnaCRFSampler* pModel);
  SEQUENCE(const SEQUENCE &);
  ~SEQUENCE();
  rnaCRFSampler* m_pModel;
  int length_seq;//the length in feature file
  int tlength;
  int *aaseq;
  bool haspdb;
  vector<vector<double> > alltt;
  vector<double> allnear;
  vector<vector<double> > alltors;
  vector<int> vInStems;
  int q3;
  int nclash;
  int nclashbb;
  int nclashrb;
  int nclashrr;
  double mapobsprob;
  double viterobsprob;
  double e_last;
  double rmsd, fullrmsd;
  int* obs_label;
  int* proposed_label;
  int* accepted_label;
  Score *_features;
  Score **obs_feature;
  Score Partition;
  int *predicted_label;
  ScoreMatrix *forward;
  ScoreMatrix *backward;
  //    int *predicted_label;
  vector<Score*> allresults;
  vector<vector<double> > pc4backbone;
  vector<vector<double> > fullbackbone;
  vector<vector<double> > allresstru;

  vector<vector<double> > nattors; //native structure torsion
  vector<vector<double> > sampcurr;//proposed torsions
  vector<vector<double> > acptcurr;//accepted torsions
  vector<vector<int> > sspairs;
  vector<double> chi;
  vector<double> tordelta;

  vector<int> clashlist;
  double** native;
  double** outstru;//tertiary structure of C4' atoms
  double** allnative;
  double** allnatbb;
  //every element of the vector allresults stores the classification result of one model.
  Score* predicted_allstates;
  string strufile;
  string torsfile;
  string seqfile;
  string chifile;
  string ssfile;//secondary structure file
  ScoreMatrix arrVi;
  void BuildStems();
  void  AddConvFeature();
  void  AddExtraFeature();
  double ntsim(int ,int );
  void ComputeVi();
  void ComputeViterbi();
  void ComputeForward();
  void ComputeBackward();
  void CalcPartition();
  void ComputePartition();
  void BuildEnergyTree();
  Score ComputeScore(int leftState, int currState, int pos);
  void makeFeatures();
  Score* getFeatures(int pos);
  int GetObsState(int pos);
  int GetObsLabel(int pos);
  void MAP();	
  void MAP1();	
  void MAP2();	
  void onebest();
  void ComputeTestAccuracy();
  Score Obj();
  void Voting();
  void Rebuild(string s );
  void maskfeature(int);
    
  void ComputeConfusionMatrix();
  void accept_label();
  void accept_tors();//vector<vector<double> >);
  double energy(int,int);
  double energy(int);
  void Rebuild();
  void Rebuild2();

  void RebuildMore(int,int);
  void RebuildFull();
  void ComputeClash();
  void ComputeObsProb();
  double idxtor(int,int);
  double idxtor2(int,int);

  int getseq(int pos);
  void showss();
  void showdiffonangle();
  void showtruess();
  void showclash();
  void show_e_detail();
  int isparent(const vector<int> &a,const vector<int> &b);
  int isneighbor(const vector<int> &a,const vector<int> &b);
  vector<int> etree;//store back-order tour of energy tree
  vector<double> energy_detail;

  RNAstruct chain;
  vector<double> sampled_chi,accept_chi;
  //  vector<double> sampled_pangle;
  vector<double> sampled_bondlen;
  void savestruct(const SEQUENCE &other);
};	

class rnaCRFSampler
{
public:
  //  int num_states;
  int num_label;
  int num_data;
  int num_tst;
  int dim_ps;
  int dim_conv;//the # of convolution features
  int conv_of;// how far from current position, conv feature begin with.
  int conv_len;//range of convolution , lw in addconvfeature
  int dim_pi;
  int phase;
  int conv_cis;
  int lasso;
  int dim_one_pos;
  int dim_features;
  int window_size;
  int num_params;
  int totalPos;
  int LocalWeights0;
  int PsInterWeights0;
  int nModel; // 1st_order or 2nd_order
  int featmask;
  enum{first_order=1, second_order=2};
  char * jobid;


  map<string, string> params;
  map<string, int> nttypemap;
  map<int,string> nttype1;
  map<int, int> ResAtomNum;
  
  int totalCorrect;
  int dim_one_pos_sparse;
  int dim_dense;
  string model_file;
  string tstdata,workdir;
  string natlist;
  string binfile;
  string labeltrans;
  string sslist;
  string chainpre;
  double apw;
  double dtor;
  double dchi;
  double avgdtor;
  
  int ct;
  int model_num;
  vector<string> models;
  vector<string> testfiles;
  vector<double> ExpDistChi;
  vector<double> ExpDistBondpc;
  vector<double> ExpDistBondcp;
  vector<double> ExpDistAnglepcp;
  vector<double> ExpDistAnglecpc;
  vector<double> stemstors;
  vector<double> stemsstds;

  vector<SEQUENCE*> testData;
  vector<vector<double> > torbin;
  vector<vector<double> > allstd;
  double* grad;
  double* weights;
  double* grad_sum;
  double* reg;
  int *corrs;
  ScoreMatrix *confMatrix; //confusion matrix
  ScoreMatrix memory;  
  vector<vector<double> > bbfraglib;
  vector<int> bbfragtype;//same length with bbfraglib
  vector<vector<double> > resfraglib;
  vector<double>  bbfraglibidx;
  vector<vector<double> > puckerAtom;
  ANNpointArray  blf_dataPts;        // data points
  ANNkd_tree*  blf_kdTree;                 // search structure

  // get the transition prob, num_states( for DUMMY ) + num_states*num_states
  //	inline Score GetWeightT(int leftState, int currState){return weights[(1 + eftState)*num_states + currState];}

  // get the label-based weight, num_states*num_gates
  //inline Score GetWeightL(int currState, int gate){ return weights[num_states + num_states*num_states + currState*num_gates + gate];}

  // get the Gate weight, num_gates*dim_features
  //inline Score GetWeightG(int gate, int dim){ return weights[num_states*(num_states+num_gates + 1) + dim_features*gate + dim];}
  bool InStems(SEQUENCE*, int);
  void SetSeed();
  void sample2order(SEQUENCE* , int , int );
  void sampletorsion(SEQUENCE* , int , int );
  void SetParameters(int, char**);
  void Initialize(int, char**);
  void LoadData();
  void start_parallel_temper();
  void start_ce();
  void start_energy_sample();
  void start_kEns();
  void testRebuild();
  void testRebuildMore();
  void BuildLibFrag();
  vector<double> getbackbone(vector<double> len, int, vector<vector<double> >, vector<double>);
  void makebbfraglib();
  vector<double>  getresstru(int aatype);
  vector<vector<string> > atomnames;
  vector<string>  resnames;

  vector<vector<double> > getC1NC(vector<double> &n, double chi,int nttype);
  void retransformation(vector<vector<double> > &l, vector<double> &res);
  void transformation(vector<vector<double> > &l, vector<double> &res);
  void savebackbone(SEQUENCE*, const char*);
  void savepdb(SEQUENCE*, const char*);
  void savepdb2(SEQUENCE*, const char*);
  void savepdb3(SEQUENCE* seq, const char* fname);

  static void savevector(vector<vector<double> > bb, char* fname,char chain,vector<string> s);
  double RMSDmore(SEQUENCE*, int);
  double RMSDFull(SEQUENCE*, int);

  void TuneChi(SEQUENCE *seq);
  void start_espt();
  void start_fixlabel();
  map<vector<int>, int > known_transition;

  //These are used for sparse storing of 2 order transitions.
  int*** trans2idx;
  int* idx2trans1;
  int* idx2trans2;
  int* idx2trans3;
  int* multinumlabel;
  int nTrans;
  int num_state;
  int getleftstate(int);
  int getrightstate(int);
  int gettransidx(int,int);
  void ReadTransition();
  void readpdb(SEQUENCE* seq, const char* fname);
  vector<SEQUENCE*> es_rst;
  void start_energy_sample_thenpt();
  void start_only_parallel_temper();
  bool inline checkclash(SEQUENCE *);
  int clashcase;
  void ComputeSampleParts(SEQUENCE *seq, vector<int> &samplepos, vector<int> &sampleparts, int );
  //  void saysth();
  int alldecoys,noclashdecoys;
  double scale;
  bool checkenergy(SEQUENCE *seq, double);
  void saysth(int i,vector<int> sampleparts, SEQUENCE*);
  void saysth0(int i, SEQUENCE*);
  void reportaccept(int, SEQUENCE*, double,int i, double rslt, double e_less);
  void heatingup();
  void verifynative();
  vector<double*> back_trace_dist;
  int max_segment;
  void sample2order1(SEQUENCE* seq, int start, int end);
  double* getdist(int start,int end,int s1,int s2,int i,int rlabel);
  void ComputeSampleTable();
  void LoadSampleTable();
  long inline getsampleidx(int start,int end, int i, int s1, int s2, int rlabel);
  string s_table;
  void start_epsa();
};

#endif
