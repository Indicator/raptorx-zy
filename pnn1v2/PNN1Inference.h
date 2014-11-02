#include "ScoreMatrix.h"
#include "Score.h"
#include "bioh5.h"
using namespace std;

#define DUMMY -1
#define ATOM_TYPE_CA 0
#define ATOM_TYPE_CB 1

#define MAX_COL 500
#define _MAX_PAIRWISE 10

#define _MAX_CONTACT 10

class PNN1Inference;

class SEQUENCE
{
public:
  SEQUENCE(int len, PNN1Inference* pModel, string name);
  virtual ~SEQUENCE()=0;

  PNN1Inference* m_pModel;
Bioh5* datah5;      
  static Score Gate(Score sum){ return (Score)1.0/(1.0+exp(-(double)sum)); }

  string p_name;
  int length_seq;
  int nDataPoints;
  int** index_t;
  double Rg;
  int length_contact;

  bool obs_exist_flag;
  int* obs_label;
  Score **obs_feature;
  ScoreMatrix* distances;
  vector<int> gaps;
  ScoreMatrix* arrVi;
  Array3D<double> *obs_pairwise_features;
  int confusion[40][40];
  double confusionEnergy[40][40];
  int pred[40]; 
  vector<vector<double> >  pred_label_score;
  double m_sumx, m_sumx2, m_sumy, m_sumxy, m_sumy2, m_sumR;
  int m_len;
  Score* Partition;
public:
  void ComputeVi();
  void CalcPartition();
  void Pnnloadmi(string , string h5fn="");
  virtual Score MAP();
  virtual void Predict();

  virtual int makeFeatures(){return 0;};
  virtual void ComputeGates(){};
  virtual void ComputeTestAccuracy(){};

protected:
  int currFeatureIdx;

  int dim_features, window_size, dim_one_pos, num_states, num_gates, 
      dim_pairwise_features, num_labels;
  Score* pFeatures;

  ScoreMatrix *output_center;
  ScoreMatrix* gates;

  int s_start, s_end;
  int *predicted_label;
  
};  


class PairwiseSequence: public SEQUENCE
{
public:
  PairwiseSequence(int len, PNN1Inference* pModel, string name);
  virtual ~PairwiseSequence();

  virtual int makeFeatures();
  virtual Score getFeatures(int pos, int i);
  //virtual Score MAP(){};
  virtual void Predict();

  virtual void ComputeGates();
  void ComputeTestAccuracy();
  inline int get_contact_1(int awi,int b){
      if(awi>=0 && awi<length_seq && b>=0 && b<length_seq)
        return index_t[awi][b];
      else
          return -1;
  }
protected:
  ScoreMatrix* dist_pred;
  int *IdxMap, *rIdxMap, *centerMap, *IdxMapCofactor, *IdxMapCenter;
  ScoreMatrix *output_cofactor;
  ScoreMatrix *pairwise_features;
  int contact_DIST;

  int *_features;
};



class PNN1Inference
{
public:
  PNN1Inference();
  ~PNN1Inference();
  
  int num_labels;
  int num_states;
  int num_gates;
  int dim_one_pos;
  int dim_pairwise_features;
  int dim_features;
  int window_size;
  int pair_window_size;
  int num_params;

  int totalPos, totalCorrect;
  int startRes, endRes;
  enum MODEL {singleton=0, pairwise=1, DistancePotential=2, contact_number=3} model;
  string model_file;
  string h5dir;
  
  vector<SEQUENCE*> testData;
  
  int nnz_param;

  int iGateStart, iFeatureStart;
  double* weights;

  void Predict(string input, int Format);

  // get the transition prob, num_states( for DUMMY ) + num_states*num_states
  inline Score GetWeightT(int leftState, int currLabel)
  { return weights[num_labels * (leftState +1)+ currLabel]; }

  // get the label-based weight, num_states*num_gates
  inline Score* GetWeightLAddr(int currState, int gate)
  { return &weights[iGateStart+ currState*num_gates + gate];}

  // get the Gate weight
  inline Score* GetWeightGAddr(int gate, int dim)
  { return &weights[iFeatureStart+gate*dim_features + dim];}

  int Initialize( int model, string model_dir, string columns, 
                  string pairwise_columns, string init_file);
  int LoadData(string input);
  void LoadDataSVMFormat(string input);

private:
  void SetParameters(int model, int n_local, int n_pairwise);

  int column_flags[MAX_COL];
  int pairwise_column_flags[MAX_COL];
  static int getColumns(string columns, int* column_flags);
  int num_data;
};
