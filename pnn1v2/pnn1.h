#ifndef _nnpf_h
#define _nnpf_h
#include <unordered_map>
#include "ScoreMatrix.h"
#include "Score.h"
#include "optimizer.h"
#include "matrix3.h"
#include "bioh5.h"
#include "time.h"

#define SM (CLS / sizeof (double))
#define MHXXWS 11
#define DEFAULT_INDEXMODE 0


extern int confusion[30][30];
extern int confusion_sum[30][30];
extern int contactStat[30];
extern int contactStat_sum[30];
extern int sum[30];
extern int test_mode;

extern int num_procs;
extern int proc_id;
extern bool toggle_error ;
extern double rt ;

extern int Format;  
extern double regularizer;
extern int init_from_file;
extern string init_file;
extern int num_test_set;
extern string prefix_model_file;
extern string model_path;
extern ofstream cerrstr;
using namespace std;

#define DUMMY -1
#define ATOM_TYPE_CA 0
#define ATOM_TYPE_CB 1

#define MAX_COL 500
#define _MAX_PAIRWISE 10

class Nnpf;
enum class _run_mode {
    training, predict,
} ;
inline void eprint(int level,string ss){
    if(proc_id==0){
        time_t rawtime;
        struct tm * timeinfo;
        time(&rawtime);
        timeinfo = localtime(&rawtime);
        cerr << "D" << level << " " << asctime(timeinfo) << " " << ss << endl;
    }
}
class Sequence {
public:
    Sequence(int len, Nnpf* pModel, string name);
    Sequence( Nnpf* pModel);
    virtual ~Sequence();
    Bioh5* datah5;
    Nnpf* mp;
    Score* Partition;

    inline Score Gate(Score sum) {
        return (Score) 1.0 / (1.0 + exp(-(double) sum));
    }
    string pdbid;
    int length_seq;
    int nDataPoints;
    double Rg;
    int length_contact;
    int* obs_label;
    Score **obs_feature;
    int* indexa1;
    int* indexa2;
    vector<vector<int> > index_t;
    int* index_t_data;

    ScoreMatrix* distances;

    vector<int> gaps;

    ScoreMatrix* arrVi;

    Array3D<double> *obs_pairwise_features;
    vector<double> pred_score;
    double contact_acc;
    void LoadData(string fn, bool savelabel);
    vector<pair<int,int> >  find_feature_window(int aa,int bb,int ws,int seqlen);
    vector<pair<int,int> >  find_feature_window_pair(int aa,int bb,int ws,int seqlen);

public:
    void ComputeVi();
    void CalcPartition();
    double getseqdist(int seqdist, int seqlen);
    virtual Score Predict(_run_mode run_mode = _run_mode::training);
    Score MAP();
    virtual Score Obj();
    void Pnnloadmi(string, string s = "");
    unsigned int getlabel(const double & dist);
    unsigned int getlabel_contact(const double & dist,vector<double> bin=vector<double>(0));
    virtual int makeFeatures();

    virtual void ComputeGates();

    virtual Score ComputeGradient(bool bCalculateGate);

    virtual void ComputeTestAccuracy();
    int subsampling_mode;
    vector<vector<int> > batchindex;
    vector<int> nlabel;
    virtual void buildbatch(double p);
    vector<vector<double> > pred_label_score;
protected:
    int currFeatureIdx;

    int dim_features, window_size, dim_one_pos, num_states, num_gates,
    dim_pairwise_features, num_labels;
    Score* pFeatures;

    ScoreMatrix *output_center;

    ScoreMatrix* gates;

    int s_start, s_end;

    int *predicted_label;


    double* obj_weights;
};

class PairwiseSequence : public Sequence {
public:
    PairwiseSequence(int len, Nnpf* pModel, string name);
    PairwiseSequence(Nnpf* mp);
    ~PairwiseSequence();
    void buildbatch(double p);
    virtual int makeFeatures();
    virtual Score getFeatures(int pos, int i);
    virtual Score Predict(_run_mode run_mode = _run_mode::training);
    void savepredict(void);
    Score Obj();
        void LoadH5(string fn,string pdbid);
        void compact_memory(int);
    virtual void ComputeGates();
    Score ComputeGradient(bool bCalculateGate);

    double calc_deep();
    double calc_deep_compact();
    double calc_grad(double *grad);
    double calc_grad_compact(double *grad);
        void ft1(void);
    
    Matrix3<double> dist;
    int d1,d2; // shape of dist and dist cb
    Matrix3<double> feature3D;
    Matrix3<double> predict3D;
    Matrix3<int> label3D;
    Matrix feature_compact;
    Matrix predict_compact;
    Matrix label_compact;

    //unordered_map<int,pair<int,int> > pairmap;
    vector<pair<int,int> > pairmap;
    

    void ComputeTestAccuracy();

    inline void get_contact_index(int t, int& a, int& b) {
        a = centerMap[t];
        b = rIdxMap[t];
    }

    inline int get_contact_1(int awi, int b) {
        if (awi >= 0 && awi < length_seq && b >= 0 && b < length_seq)
            return index_t[awi][b];
        else
            return -1;
    }
    bool sortcmp(int i, int j);
protected:
    int *IdxMap, *rIdxMap, *centerMap, *IdxMapCofactor, *IdxMapCenter;
    ScoreMatrix *output_cofactor;
    ScoreMatrix *pairwise_features;
    int contact_DIST;

    int *_features;
};

class NNlight{
public:
    //mp->ds
    vector<int> nNeuron; // number of neuron nodes for each layer.
    double* weights;
    double* grad;
    int nLayer; // number of layer
    int maxNeuron; // maximal number of neuron in all layers.
    vector<int> offset_input_layer;
    vector<vector<int> > offset_layer;
    vector<double> initweight; // Only for some optimizer.
    int dim_features;
    int num_params;
    //Methods:
    virtual double calc_neuron(const double x);
    void saveh5(const string& s);
    void loadh5(const string& s);
    //void init(const vector<int> & _nNeuron);
    void nninit(const vector<int> & _nNeuron, const int dim_features);
    void trace(int iter);
    
    //show();delete a node, increase a layer, (need remap); 
        //Neuroal network [ add node, remove node:remap the weights, add edge, remove edge [no need to remap, but mark the topology] ]

};

class Nnpf : public NNlight {
public:
    int num_labels;
    int num_states; //old
    int num_data; //old
    int num_tst; //old
    int num_gates; //old
    int dim_one_pos; //old
    int dim_pairwise_features; //old
    int dim_features;
    int window_size; //old
    int pair_window_size; //old
    //int num_params;
    int totalPos, totalCorrect, totalTriangle, legalTriangle; //old
    int cvalid_total;
    int cvalid_n;
    int ds;
    vector<string> weightdesc;
    unordered_map<string,string> par;
    streambuf *psbuf, *backup;
    Matrix norm_par;
    
    void dlmwrite(const string& fn);
    void dlmread(const string& fn);
    void moremodel(const string& fn);
    void predict(void);
    string h5data_list_file;
    enum MODEL {
        singleton = 0, pairwise = 1, DistancePotential = 2, contact_number = 3
    } model;

    _run_mode run_mode;
    string save_model_file;
    string data_list_file;
    string load_model_file;
    string h5dir;
    bool feature_name_done;
    string feature_name_string;
    vector<string> feature_name;
    double lambda; // regularization factors.
    //void LoadDataListH5(string h5data_list_file);
    void LoadDataListH5(string h5data_list_file,vector<Sequence*> & dest, bool has_test_list=false,int subsampling_mode=0);
    double get_test_loglikelihood(const vector<Sequence*>& data_list);
    //int ct;

    vector<Sequence*> trainData, testData;
    vector<double> bin;     
    int nnz_param;
    double sr;
    double plainsr;
    int iGateStart, iFeatureStart;

    
    double* grad_sum;
    double* reg;


    inline void checktimes(vector<int> &check, int i, int np) {
        if (check[i] < num_gates * np)check[i]++;
        else throw -1;

    }

    // get the transition prob, num_states( for DUMMY ) + num_states*num_states

    inline Score GetWeightT(int leftState, int currLabel) {
        currWeightTidx = num_labels * (leftState + 1) + currLabel;
        return weights[currWeightTidx];
    }

    inline Score GetWeightTNextLabel() {
        currWeightTidx++;
        return weights[currWeightTidx];
    }

    inline int get_feature_offset(int gate_index, int window_index, int feature_index) {
        return iFeatureStart + dim_features * gate_index + dim_pairwise_features*window_index;

    }

    // get the label-based weight, num_states*num_gates

    inline Score* GetWeightLAddr(int currState, int gate) {
        currWeightLidx = iGateStart + currState * num_gates + gate;
        return &weights[currWeightLidx];
    }

    inline Score GetWeightL(int currState, int gate) {
        currWeightLidx = iGateStart + currState * num_gates + gate;
        return weights[currWeightLidx];
    }

    inline Score GetWeightLNextGate() {
        currWeightLidx++;
        return weights[currWeightLidx];
    }

    // get the Gate weight

    inline Score* GetWeightGAddr(int gate, int dim) {
        currWeightGidx = iFeatureStart + gate * dim_features + dim;
        return &weights[currWeightGidx];
    }

    inline Score GetWeightG(int gate, int dim) {
        currWeightGidx = iFeatureStart + gate * dim_features + dim;
        return weights[currWeightGidx];
    }

    inline Score GetWeightGNextDim() {
        currWeightGidx++;
        return weights[currWeightGidx];
    }

    void SetSeed();
    void SetParameters(int model, int w_size, int n_labels, int n_gates,
            int n_local, int n_pairwise, int pair_windowsize, bool init_from_file);
    void Initialize(int model, string model_dir, int w_size, int n_labels,
            int n_gates, string columns, string pairwise_columns,
            string input_f, string split_file, int, string init_file="");
    void Init(int,char**);
    void LoadData(string input, string split_file, _run_mode run_mode = _run_mode::training);
    void LoadDataSVMFormat(string input);
    void CopyWeightsOut(vector<double>& w);
    void CopyWeightsIn(const vector<double>& w);
    double CopyGradsOut(vector<double>& g, int& nonzeroDirection,
            int num_consec_small_steps);
    double RegularizeWeights();
    void RegularizeGrads();
    void showweights(void);
    void convertModel(string oldModel, string newModel);
    void explainWeight(int i, string & s);
    int column_flags[MAX_COL];
    int pairwise_column_flags[MAX_COL];
    static int getColumns(string columns, int* column_flags);

private:
    int currWeightGidx, currWeightTidx, currWeightLidx;
};



#endif 