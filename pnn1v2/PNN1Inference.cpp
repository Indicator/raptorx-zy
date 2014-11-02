//refactor: share same functions with pnn1train.
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

//#include "PNN1Inference.h"
//#include "PnnLoad.cpp"
#include "pnn1.h"
using namespace std;

#define SM (CLS / sizeof (double))
//#define SM 1 
//(CLS / sizeof (double))
#define MHXXWS 11
int confusion[30][30];
int confusion_sum[30][30];
int contactStat[30];
int contactStat_sum[30];
int sum[30];

SEQUENCE::SEQUENCE(int length_seq, PNN1Inference* pModel, string name) {
    m_pModel = pModel;
    p_name = name;
    this->length_seq = length_seq;
    length_contact = length_seq*length_seq;
    dim_features = m_pModel->dim_features;
    window_size = m_pModel->window_size;
    dim_one_pos = m_pModel->dim_one_pos;
    num_gates = m_pModel->num_gates;
    num_states = m_pModel->num_states;
    num_labels = m_pModel->num_labels;
    dim_pairwise_features = m_pModel->dim_pairwise_features;
    
    gates = NULL;
    arrVi = NULL;
    Partition = NULL;
    obs_feature = new Score*[length_seq];
    for (int i = 0; i < length_seq; i++)
        obs_feature[i] = new Score[dim_one_pos];
    s_start = 0;
    s_end = length_seq - 1;
    output_center = NULL;
    predicted_label = NULL;
    Rg = 2.2 * pow(length_seq, 0.38);
    pFeatures = new Score[dim_features];
    obs_exist_flag = true;
    m_sumx = 0, m_sumx2 = 0, m_sumy = 0, m_sumxy = 0, m_sumy2 = 0, m_sumR = 0, m_len = 0;
}

SEQUENCE::~SEQUENCE() {
    delete arrVi;
    delete gates;
    delete Partition;
    delete obs_label;

    for (int i = 0; i < length_seq; i++)
        delete obs_feature[i];
    delete obs_feature;
    delete output_center;
    delete predicted_label;
    delete pFeatures;
}

Score SEQUENCE::MAP() { // Posterior Decoding (Marginal Probability Decoder)
    //memset(pred, 0, sizeof(int)*20);
    Score bestScore, obj = 0;
    Score *vi2;
    int i, t, bestState = 0;

    CalcPartition();
    for (t = nDataPoints - 1; t >= 0; t--)
        obj += (*arrVi)(t, obs_label[t]) - Partition[t];
    pred_label_score.resize(nDataPoints);
    for (t = nDataPoints - 1, vi2 = &((*arrVi)(t, 0)); t >= 0; t--, vi2 -= arrVi->cols) {
        bestState = 0;
        bestScore = vi2[0];
        pred_label_score[t].resize(num_states);
        pred_label_score[t][0]=exp(vi2[0] - Partition[t]);
        for (i = 1; i < num_states; i++) {
            pred_label_score[t][i]=exp(vi2[i] - Partition[t]);
            if (vi2[i] > bestScore) {
                bestScore = vi2[i];
                bestState = i;
            }
        }
        predicted_label[t] = bestState;
        //pred[predicted_label[t]]++;
    }
    return obj;
}

void SEQUENCE::CalcPartition() {
    int t, i, t2, i2, lastt = nDataPoints / SM*SM, lasti = num_states / SM*SM;
    Score score, *vi2, *P2;

    if (Partition == NULL)
        Partition = new Score[nDataPoints];
    for (t = 0; t < nDataPoints; t++)
        Partition[t] = (Score) LogScore_ZERO;
    // LogScore_PLUS_EQUALS(Partition[t], (*arrVi)(t, state));
    for (t = 0; t < nDataPoints; t += SM)
        for (i = 0; i < num_states; i += SM)
            for (t2 = 0, vi2 = &((*arrVi)(t, i)), P2 = &Partition[t];
                    t2 < (t < lastt ? SM : nDataPoints % SM);
                    t2++, vi2 += arrVi->cols)
                for (i2 = 0; i2 < (i < lasti ? SM : num_states % SM); i2++) {
                    score = vi2[i2];
                    LogScore_PLUS_EQUALS(P2[t2], score);
                    //cerr << "  Partition(" << t << "," << state << ")=" << score << " : " << Partition[t] << endl;
                }
    //cerr << endl;
}

void SEQUENCE::ComputeVi() {
    int pos, pos2, l, l2, g, g2,
            lastpos = nDataPoints / SM*SM, lastl = num_states / SM*SM, lastg = num_gates / SM*SM;
    Score *gates2, *vi2, *pW2;

    if (arrVi == NULL)
        arrVi = new ScoreMatrix(nDataPoints, num_states, "arrVi");
    arrVi->resize(nDataPoints, num_states); //arrVi->Fill(LogScore_ZERO);

    // (*arrVi)(pos,l) += m_pModel->weights[GetWeightLAddr(l, g)]*(*gates)(pos,g);

    for (pos = 0; pos < nDataPoints; pos += SM)
        for (l = 0; l < num_states; l += SM)
            for (g = 0; g < num_gates; g += SM) {
                for (pos2 = 0, gates2 = &((*gates)(pos, g)), vi2 = &((*arrVi)(pos, l));
                        pos2 < (pos < lastpos ? SM : nDataPoints % SM);
                        pos2++, vi2 += arrVi->cols, gates2 += gates->cols)
                    for (l2 = 0, pW2 = m_pModel->GetWeightLAddr(l, g);
                            l2 < (l < lastl ? SM : num_states % SM);
                            l2++, pW2 += num_gates) {
                        for (g2 = 0; g2 < (g < lastg ? SM : num_gates % SM); g2++) {
                            vi2[l2] += pW2[g2] * gates2[g2];
                            // if (vi2[l2]>10000)
                            //   cerr << " ComputeVi: Vi("<<pos+pos2<<", "<<l+l2<<")= W("<<l+l2<<","
                            //        << g+g2 << ") * gates("<<pos+pos2<<","<<g+g2<<"):: "<<vi2[l2]
                            //        << " += " << pW2[g2] << " * "<<gates2[g2]<<endl; 
                        } // exit(0);
                    }
            }

    //for (pos=0; pos<length_contact; pos++)
    //  for (l=0; l<num_states; l++)
    //    cerr << "  ComputeVi(" << pos << ", " << l << ")=" << (*arrVi)( pos, l) << endl;
}

void SEQUENCE::Predict() {
    ComputeGates();
    ComputeVi();
    //partition is computed in MAP
    //cerr << "  Predictions " << nDataPoints << endl;
    MAP();
    return;
    for (int t = 0; t < nDataPoints; t++) {
        cout << predicted_label[t] << " ";
        //cout << exp((*arrVi)(0//, l) - Partition[0])+ exp((*arrVi)(1, l) - Partition[1]);
        for (int l = 2; l < num_labels; l++)
            cout << exp((*arrVi)(t, l) - Partition[t]) << " ";
        cout << endl;
    }
}

PairwiseSequence::PairwiseSequence(int len, PNN1Inference* pModel, string name)
: SEQUENCE(len, pModel, name) {
    contact_DIST = 7;
    IdxMap = new int[length_seq * length_seq];
    memset(IdxMap, -1, sizeof (int)*length_seq * length_seq);
    rIdxMap = new int[length_seq * length_seq];
    centerMap = new int[length_seq * length_seq];
    IdxMapCenter = new int[length_seq];
    IdxMapCofactor = new int[length_seq];
    for (int i = 0; i < length_seq; i++)
        IdxMapCofactor[i] = IdxMapCenter[i] = -1;
    output_cofactor = NULL;
    distances = new ScoreMatrix(length_seq, length_seq, "distances");
    distances->Fill(-1);
    dist_pred = new ScoreMatrix(length_seq, length_seq, "dist_pred");
    obs_label = NULL;
    pairwise_features = NULL;
    obs_pairwise_features = NULL;
    if (dim_pairwise_features)
        obs_pairwise_features = new Array3D<double>(length_seq, length_seq, dim_pairwise_features);
}

PairwiseSequence::~PairwiseSequence() {
    delete output_cofactor;

    delete IdxMap;
    delete rIdxMap;
    delete centerMap;
    delete IdxMapCenter;
    delete IdxMapCofactor;
    delete distances;
    delete obs_pairwise_features;
    delete pairwise_features;
    delete dist_pred;
}

void PairwiseSequence::Predict() {
    ComputeGates();
    ComputeVi();
    //cerr << "  Predictions " << nDataPoints << endl;
    MAP();
    //OUtput to a file
    string fn = pdbid.substr(0,pdbid.length()-1) + ".epad.prob";
    ofstream of(fn.c_str(), ofstream::out);
    of<<setprecision(5);
    for(int i=0;i<length_contact;i++){
        int a1,a2;
        a1=centerMap[i];
        a2=rIdxMap[i];
        of<<a1<<" "<<a2;
        of<<" "<<(pred_label_score[i][0]+pred_label_score[i][1])*100;
        for(int j=2;j<mp->num_labels;j++)
            of<<" "<<pred_label_score[i][j]*100<<" ";
        of<<endl;
    }
}

int PairwiseSequence::makeFeatures() {
    length_contact=length_seq*length_seq;
    if (obs_label == NULL)
        obs_label = new int[length_contact];
    int df = length_contact * 2;
    //cerr << proc_id << "@ df=" << df << ", len_contact=" << length_contact << ", gaps_size=" << gaps.size();
    _features = new int[df];

    int totalContact = 0;
    index_t=new int*[length_seq];
    index_t[0]=new int[length_seq*length_seq];
    memset(index_t[0],0,length_seq*length_seq*sizeof(int));
    for(int ii=1;ii<length_seq;ii++) 
        index_t[ii] = index_t[ii-1]+length_seq;

    //cerr << " window_size=" << window_size << ", len_seq=" << length_seq << endl;
    //build features for local windows  
    for (int t = 0; t < length_seq - contact_DIST; t++) {
        bool bGap = false;
        for (int g = 0; g < (int) gaps.size(); g++) {
            if (abs(gaps[g] - t) <= window_size / 2) {
                bGap = true;
                break;
            }
        }
        //if (bGap) continue;
        //for(int u=t+7;u<length_seq-window_size/2;u++){
        for (int u = t + contact_DIST; u < length_seq; u++) {
            if (totalContact >= length_contact - 1)
                break;
            bGap = false;
            for (int g = 0; g < (int) gaps.size(); g++) {
                if (abs(gaps[g] - u) <= window_size / 2) {
                    bGap = true;
                    break;
                }
            }
            //no skip at gaps.
            //if (bGap)  continue;
            /*
                int label = (int) (*distances)(t, u);
                if (label < 0)
                        continue;
                obs_label[totalContact] = label;
            */
            int max_label=13;
            
            int label = (int) (((*distances)(t, u) - 3)*1); //zy: copy from makeFeature of DistancePotential
            //if(label<0) continue;
            if(label<0) label=max_label-1;
            if(label>=max_label)
                label=max_label-1;
            obs_label[totalContact]=label;
            // if (!proc_id)
            //   cerr << "    Adding contact " << totalContact << ":" << p_name << " (" << t << ", " << u 
            //        << ") with dist=" << (*distances)(t,u)<< " labeled " << obs_label[totalContact] << endl;
            IdxMap[u * length_seq + t] = IdxMap[t * length_seq + u] = totalContact;
            centerMap[totalContact] = t;
            IdxMapCenter[t] = totalContact;
            rIdxMap[totalContact] = u;
            IdxMapCofactor[u] = totalContact;
            int pivot = totalContact * 2;
            totalContact++;
            int offset1 = t - window_size / 2;
            int offset2 = u - window_size / 2;
            _features[pivot++] = offset1;
            _features[pivot++] = offset2;
        }
    }
    delete distances;
    distances = NULL;
    nDataPoints = length_contact = totalContact;
    if (length_contact == 0)
        return -1; //cerr << proc_id << " Making features..." << p_name<< endl;
    predicted_label = new int[nDataPoints];
    pairwise_features = new ScoreMatrix(dim_pairwise_features + 1, nDataPoints, "pairwise_features");
    for (int t = 0; t < length_contact; t++) {
        int offset1 = centerMap[t], offset2 = rIdxMap[t];
        (*pairwise_features)(0, t) = (offset2 - offset1 + 0.000001) / length_seq;
        for (int d = 1; d <= dim_pairwise_features; d++)
            (*pairwise_features)(d, t) = (*obs_pairwise_features)(offset1, offset2, d - 1);
    }
    //pairwise_features->writetmp(p_name.substr(0,5)+".tmp");
    delete obs_pairwise_features;
    obs_pairwise_features = NULL;
    return 0;
}

// Features: ends vector(2*[window_size/2]), features read from input 
// file (dim_one_pos*window_size), sequence distance; sequence distance/length_seq.

Score PairwiseSequence::getFeatures(int pos, int i) {
    int pivot = pos * 2; // a contact pair index   
    int offset1 = _features[pivot]; // the first point of window of pos
    int offset2 = _features[pivot + 1];
    int iif = i - window_size / 2 * 2; // i=0..dimfeature-2,iif=0 is the first of feature group 1 with window
    int idx = iif / mp->dim_one_pos; //idx >0 is window index
    Score ret = 1; // when i==dim_features-3-dim_pairwise_features
    if (i < window_size / 2 * 2) { //window status
        offset1 += window_size / 2;
        offset2 += window_size / 2;
        //if (proc_id==0) cerr << "offset1="<<offset1<<", offset2="<<offset2<<endl;
        if (offset1 < window_size / 2 && i == offset1)
            return 1;
        else if (length_seq - offset2 == window_size / 2 * 2 - i && offset2 >= length_seq - window_size / 2) {
            //if (proc_id==0) cerr << length_seq << "-" << offset2 << "="<<window_size/2*2<<"-" <<i << endl; 
            return 1;
        } else
            return 0;
    } else if (idx < window_size) { // now idx>=0, 
        if (offset1 + idx < 0 || offset1 + idx >= length_seq) return 0; // training Secondary Structure: allow termial residues
        ret = obs_feature[offset1 + idx][iif % mp->dim_one_pos]; // idx = feasible position, return the feature of that position
    } else if (i < window_size / 2 * 2 + (2 * window_size * dim_one_pos) ){
            //dim_features - 1 - dim_pairwise_features) { // right position window
        idx -= mp->window_size;
        // cerr << idx << " - " << i << "*"<<dim_features <<" : " 
        //      << i%m_pModel->dim_one_pos<<" : " << length_seq 
        //      << " : " << offset1 << "  : " << offset2;
        if (offset2 + idx < 0 || offset2 + idx >= length_seq) return 0; // training Secondary Structure: allow termial residues
        ret = obs_feature[offset2 + idx][iif % mp->dim_one_pos]; // feature of
        //cerr << " : " << ret << endl;
    } 
    
    /*
    else if (i == dim_features - 2 - dim_pairwise_features)
        ret = Rg / 10; //Rg = 2.2 * pow(length_seq + 0.0, 0.38); Feng's code, a global feature
    else if (i == dim_features - 1 - dim_pairwise_features) {
        ret = getseqdist(offset2 - offset1, length_seq); //zy,todo,sync with inference.
    }*/
    return ret;
}

void PairwiseSequence::ComputeGates() {
    ScoreMatrix* feature_buffer = new ScoreMatrix(dim_features, length_seq, "feature_buffer");
    ScoreMatrix* feature_buffer_cofactor = new ScoreMatrix(dim_features, length_seq, "feature_buffer_cofactor");
    Score *pfb2, *pfbc2, *ocenter, *ocofactor;
    //int pos;
    const int& pair_window_size=mp->pair_window_size;
    int gate, p, t, t2, g, g2, k, k2, kk,
            lastt = length_contact / SM*SM, lasttseq = length_seq / SM*SM,
            lastg = num_gates / SM*SM, lastk = (dim_features - 1 - dim_pairwise_features) / SM*SM;
    Score* gates2, *pW2, output;

    struct timeval ts, te;
    gettimeofday(&ts, 0);
    vector<int> check(mp->num_params, 0);
    if (gates == NULL) {
        gates = new ScoreMatrix(length_contact, num_gates, "gates");
        output_center = new ScoreMatrix(num_gates, length_seq, "output_center");
        output_cofactor = new ScoreMatrix(num_gates, length_seq, "output_cofactor");
    } else {
        // gates->resize(length_contact, num_gates); //gates->Fill(LogScore_ZERO);
        output_center->resize(num_gates, length_seq); //output_center->Fill(0);
        output_cofactor->resize(num_gates, length_seq); // output_cofactor->Fill(0);
    }
    for (t = 0; t < length_seq; t++) {
        int idx = IdxMapCenter[t]; //idx,0..length_contact, the last contact pair with has left = t.
        int coidx = IdxMapCofactor[t];
        //for (k = 0; k < dim_features - 1; k++) {
      for (k = 0; k < window_size / 2 * 2 + (2 * window_size * dim_one_pos); k++) {
            //if (k < window_size / 2 || (k >= window_size / 2 * 2 && k < dim_features / 2 + window_size / 2 - 2)) {
            if (k < window_size / 2 || (k >= window_size / 2 * 2 && (k - window_size / 2 * 2) < window_size * dim_one_pos)) {
                if (idx < 0) { continue;}
                (*feature_buffer)(k, t) = getFeatures(idx, k);
            } else {
                if (coidx < 0) continue;
                (*feature_buffer_cofactor)(k, t) = getFeatures(coidx, k);
            }
        }
    }
    for (t = 0; t < length_seq; t += SM)
        for (g = 0; g < num_gates; g += SM)
            //for (k = 0; k < dim_features - dim_pairwise_features - 1; k += SM)
            for (k = 0; k < window_size / 2 * 2 + (2 * window_size * dim_one_pos); k += SM)
                for (g2 = 0, pW2 = mp->GetWeightGAddr(g, k),
                        ocenter = &((*output_center)(g, t)),
                        ocofactor = &((*output_cofactor)(g, t));
                        g2 < (g < lastg ? SM : num_gates % SM);
                        g2++) {
                    for (k2 = 0, pfb2 = &((*feature_buffer)(k, t)),
                            pfbc2 = &((*feature_buffer_cofactor)(k, t));
                            k2 < (k < lastk ? SM : (dim_features - 1 - dim_pairwise_features) % SM);
                            k2++) {
                        kk = k + k2;
                        //if (kk < window_size / 2 || (kk >= window_size / 2 * 2 && kk < dim_features / 2 + window_size / 2 - 2)) {
                        if (kk < window_size / 2 || (kk >= window_size / 2 * 2 && (kk - window_size / 2 * 2) < window_size * dim_one_pos)) {
                            for (t2 = 0; t2 < (t < lasttseq ? SM : length_seq % SM); t2++)
                                ocenter[t2] += pW2[k2] * pfb2[t2];
                        } else {
                            for (t2 = 0; t2 < (t < lasttseq ? SM : length_seq % SM); t2++)
                                ocofactor[t2] += pW2[k2] * pfbc2[t2];
                        }
                        pfb2 += feature_buffer->cols;
                        pfbc2 += feature_buffer_cofactor->cols;
                    } //cerr << "  GetGate(" << gate << ", " << pos << ")=" << output << endl; //exit(0);
                    pW2 += dim_features;
                    ocenter += output_center->cols;
                    ocofactor += output_cofactor->cols;
                }
    for (t = 0; t < length_contact; t += SM)
        for (g = 0; g < num_gates; g += SM)
            for (t2 = 0, gates2 = &((*gates)(t, g));
                    t2 < (t < lastt ? SM : length_contact % SM);
                    t2++, gates2 += gates->cols) {
               // if (batchindex[indexmode][t + t2] == 0)continue;
                int center = centerMap[t + t2];
                int cofactor = rIdxMap[t + t2];
                for (g2 = 0; g2 < (g < lastg ? SM : num_gates % SM); g2++) {
                    gate = g + g2; //pos=t+t2;
                    //pW2 = m_pModel->GetWeightGAddr(gate, 0);
                    pW2 = mp->weights;
                    output = (*output_center)(gate, center) + (*output_cofactor)(gate, cofactor);
                    //windowed pairfeature
                    int a = center;
                    int b = cofactor;
                    for (int wi = -pair_window_size / 2; wi <= pair_window_size / 2; wi++) {
                        int fwi = wi + pair_window_size / 2; //0..window_size
                        int awi = a + wi;
                        int bwi = b + wi;
                        int tawi = get_contact_1(awi, b); //-1 if out of range, 0..n
                        int tbwi = get_contact_1(a, bwi); //-1 if out of range
                        // no awi=0

                        int wi_lin_a = fwi; 
                        int wi_lin_b = pair_window_size + (wi < 0 ? fwi : fwi - 1);
                        //wi_lin_a: 0..wsize, wi_lin_b,wsize..2*wsize-1, 
                        int window_status_index = mp->iFeatureStart + gate * dim_features + window_size / 2 * 2
                                + (2 * window_size * dim_one_pos)
                                + (pair_window_size * 2 - 1) * dim_pairwise_features;
                        int tawi_fi = window_status_index + wi_lin_a;
                        int tbwi_fi = window_status_index + wi_lin_b; //window status
#ifdef _check_grad
                        if (wi_lin_b >= 2 * window_size - 1) throw -1;
                        mp->checktimes(check, tawi_fi, length_contact);
#endif
                        if (tawi < 0) {
                            output += pW2[tawi_fi] * (-1); //window status
                        } else
                            output += pW2[tawi_fi] * 1;
                        if (wi != 0) {
                            if (tbwi < 0) {
                                output += pW2[tbwi_fi] * (-1);
                            } else
                                output += pW2[tbwi_fi] * 1;
#ifdef _check_grad
                            mp->checktimes(check, tbwi_fi, length_contact);
#endif

                        }
                        if (tawi >= 0)
                            for (int p = 0; p < dim_pairwise_features; p++) {
                                int weight_index = mp->iFeatureStart + gate * dim_features + window_size / 2 * 2
                                        + (2 * window_size * dim_one_pos)
                                        + wi_lin_a * dim_pairwise_features + p;
                                output += pW2[weight_index] * (*pairwise_features)(p, tawi);
                                //left window 
#ifdef _check_grad
                                mp->checktimes(check, weight_index, length_contact);
#endif
                            }
                        if (wi == 0)continue; // (0,0) should be counted only once.
                        if (tbwi >= 0)
                            for (int p = 0; p < dim_pairwise_features; p++) {
                                int weight_index = mp->iFeatureStart + gate * dim_features + window_size / 2 * 2
                                        + (2 * window_size * dim_one_pos)
                                        + wi_lin_b * dim_pairwise_features + p;
                                output += pW2[weight_index] * (*pairwise_features)(p, tbwi);
#ifdef _check_grad
                                mp->checktimes(check, weight_index, length_contact);
#endif
                            }
                    }

                    gates2[g2] = Gate(output);
                    //if (pos=30) cerr << "   gate("<< gate <<"," << pos <<")= " << gates2[g2] << " " << output << endl;
                }
            }
#ifdef _check_grad
    cerr << "check grad ";
    for (int i = mp->iFeatureStart + window_size / 2 * 2
            + (2 * window_size * dim_one_pos); i < mp->num_params; i++)
        cerr << check[i] << ",";
    cerr << endl;
#endif

    delete feature_buffer;
    delete feature_buffer_cofactor;
}

void PairwiseSequence::ComputeTestAccuracy() {
    mp->totalPos += length_contact;
    for (int t = 0; t < length_contact; t++) {
        if (obs_label[t] == predicted_label[t])
            mp->totalCorrect++;
        confusion[predicted_label[t]][obs_label[t]]++;
    }
}

/////////////////////  implementation of the class ContactNumberSequence ///////////////////////////////////////

/////////////////////  implementation of the class ContactNumberSequence ///////////////////////////////////////

PNN1Inference::PNN1Inference() {
}

PNN1Inference::~PNN1Inference() {
    for (vector<SEQUENCE*>::iterator it = testData.begin(); it < testData.end(); it++)
        delete *it;
}

void PNN1Inference::Predict(string input, int Format) {
    if (Format == 0)
        LoadData(input);
    else
        LoadDataSVMFormat(input);

    totalPos = totalCorrect = 0;
    for (int i = 0; i < num_labels; i++)
        for (int j = 0; j < num_labels; j++)
            confusion[i][j] = confusion_sum[i][j] = 0;

    for (vector<SEQUENCE*>::iterator it = testData.begin(); it < testData.end(); it++) {
        (*it)->Predict();
    }

    //testData->ComputeTestAccuracy();

    cout << " test ACC(MAP): " << (double) totalCorrect / totalPos
            << "   " << totalCorrect << "/" << totalPos << endl;

    cout << endl << "Confusion Matrix: " << endl;
    memset(sum, 0, sizeof (int)*30);
    for (int i = 0; i < num_labels; i++) {
        double tot = 0;
        for (int j = 0; j < num_labels; j++) {
            printf("%7d ", confusion_sum[i][j]);
            tot += confusion_sum[i][j];
            sum[j] += confusion_sum[i][j];
        }
        printf("%7.2f\n", 100.0 * confusion_sum[i][i] / tot);
    }
    for (int i = 0; i < num_labels; i++)
        printf("%7.2f ", 100.0 * confusion_sum[i][i] / (0.0001 + sum[i]));
    cout << endl;
}

void PNN1Inference::SetParameters(int model, int n_local, int n_pairwise) {
    this->model = (MODEL) model;
    int dim_features_check;
    dim_features_check = window_size / 2 * 2 
            + (2 * window_size * dim_one_pos) 
            + n_pairwise *( pair_window_size*2 -1) + (pair_window_size*2 -1)
            + 1;
    if(dim_features_check!=dim_features)
        cerr<<"dim_features inconsistent!!! "<<dim_features<<" "<<
                dim_features_check <<"\n\n";
    dim_features=dim_features_check;
    num_states = num_labels;
    iGateStart = 0;
    iFeatureStart = iGateStart + num_states*num_gates;
}

// return the total number of valid columns

int PNN1Inference::getColumns(string columns, int* column_flags) {
    memset(column_flags, 0, sizeof (int)*MAX_COL);
    if (columns.length() > 0) {
        //cerr << "|" << columns << "|" << endl;
        istringstream si(columns);
        char c = ' ';
        int col1, col2;
        while (!si.eof()) {
            si >> col1 >> c;
            //cerr << "**" << col1 << ":" << c << endl;
            if (c == ',') {
                if (col1 >= 0 and col1 < MAX_COL) column_flags[col1] = 1;
            } else if (c == '-') {
                si >> col2 >> c;
                if (col1 >= 0 and col1 < MAX_COL) {
                    for (int i = col1; i <= min(MAX_COL - 1, col2); i++)
                        column_flags[i] = 1;
                }
            } else {
                if (col1 >= 0 and col1 < MAX_COL) column_flags[col1] = 1;
                break;
            }
        }
        //cerr << "selected columns: ";
        //for (int i=0; i<MAX_COL; i++)
        //  if (column_flag[i]==1) cerr << i << ",";
        //cerr << endl;
    }
    int total_col = 0;
    for (int i = 0; i < MAX_COL; i++)
        total_col += column_flags[i];
    return total_col;
}

int PNN1Inference::Initialize(int model, string model_dir, string columns,
        string pairwise_columns, string init_file) {
    model_file = model_dir + init_file;

    cerr << "num_params = " << num_params << endl;
    cerr << "  init_file: " << init_file << endl;
    ifstream fin(init_file.c_str()); // no file header
    char buf[10240];
    string tmp;
    int data;
    for (int i = 0; i < 8; i++) {
        fin.getline(buf, 10240);
        if (fin.gcount() == 0)
            break;
        else {
            istringstream si(buf);
            si >> tmp >> data;
            if (tmp == "num_params:")
                num_params = data;
            else if (tmp == "num_gates:")
                num_gates = data;
            else if (tmp == "window_size:")
                window_size = data;
            else if (tmp == "dim_features:")
                dim_features = data;
            else if (tmp == "num_labels:")
                num_labels = data;
            else if (tmp == "dim_one_pos:")
                dim_one_pos = data;
            else if (tmp == "pair_window_size:")
                pair_window_size = data;
            else if (tmp == "dim_features:")
                dim_features = data;
            //fout << "dim_features: " << m_pModel->dim_features << endl;
            cerr << tmp << "::::" << data << endl;
        }
    }
    weights = new double[num_params];
    cerr << strlen(buf) << "  Last 10 weights are : " << endl << "    ";
    for (int i = 0; i < num_params; i++) {
        fin >> weights[i];
        if (i > num_params - 10) cerr << weights[i] << ", ";
    }
    fin.close();
    cerr << endl;

    int n_local = 1 + getColumns(columns, column_flags);
    int n_pairwise = getColumns(pairwise_columns, pairwise_column_flags) + MHXXWS;
    dim_pairwise_features = n_pairwise;
    SetParameters(model, n_local, n_pairwise);

    return 0;
}

int PNN1Inference::LoadData(string input) {
    totalPos = totalCorrect = 0;
    for (int i = 0; i < num_labels; i++)
        for (int j = 0; j < num_labels; j++)
            confusion[i][j] = confusion_sum[i][j] = 0;

    map<string, int> pmap; // list of proteins that we need to calculate
    char buf[101];
    /*
    ifstream listf("../Data/contactNumberCompare.lst");
    while (!listf.eof()){
      listf.getline(buf, 100);
      string pname = buf;
      pmap[pname.substr(0,4)]=1;
      //cerr << pname << ":" << pmap.find(pname)->second << endl;
    }
     */

    vector<int> myseq_test;

    // Read the training data
    ifstream trn_in(input.c_str());
    trn_in >> num_data;
    cerr << input << ": gateStart=" << iGateStart << "; ifs=" << iFeatureStart
            << " - Load Data: " << dim_one_pos << ";" << num_data << "; model=" << model
            << "; pairwise=" << dim_pairwise_features << endl;

    double sumx = 0, sumx2 = 0, sumy = 0, sumxy = 0, sumy2 = 0, sumR = 0;
    int len = 0;

    bool title_line_read = false;
    double dist, tmp;
    int a1, a2, length_s, length_labels, real_dim_one_pos, gap, length_contact;
    string stmp, sline;
    SEQUENCE *seq = NULL;
    getline(trn_in, sline);
    for (int i = 0; i < num_data; i++) {
        if (!title_line_read)
            getline(trn_in, sline);
        else
            title_line_read = false;
        istringstream iss(sline);
        iss >> length_s >> length_labels >> stmp;
        length_contact = length_labels;
        vector<int> indexa1(length_contact, -1);
        vector<int> indexa2(length_contact, -1);
        // construct a new sequence
        switch (model) {
            case pairwise:
                seq = new PairwiseSequence(length_s, this, stmp);
                break;
        }
        // cerr << i<<":"<<length_s<<" " << stmp <<endl;

        for (int j = 0; j < length_s; j++) {
            getline(trn_in, sline); //cerr << "Contact " << j << ":";
            istringstream iss(sline);
            int d = 0;
            for (int k = 0; !iss.eof(); k++) {
                iss >> tmp;
                if (column_flags[k] == 1) {
                    seq->obs_feature[j][d++] = tmp; //cerr << tmp <<" ";
                }
            } //cerr << endl;
            real_dim_one_pos = d + 1;
            seq->obs_feature[j][d] = 1;
        }
        cerr << " Data of residue " << i << endl;

        if (length_labels <= 0)
            seq->obs_exist_flag = false;

        if (model == singleton) {
            for (int j = 0; j < length_labels; j++) {
                getline(trn_in, stmp); //cerr << "Contact " << j << ":";
                if (stmp[0] == '#') {
                    gap = atoi(stmp.substr(5).c_str());
                    seq->gaps.push_back(gap);
                } else {
                    istringstream iss(stmp);
                    iss >> a1; // if (!proc_id) cerr << a1 << "(" << j << ")" << endl;
                    seq->obs_label[j] = a1;
                }
            } //exit(0);
        } else { // pairwise
            getline(trn_in, stmp);
            for (int j = 0; j < length_labels; j++) {
                getline(trn_in, stmp); //cerr << "Contact " << j << ":";
                if (*(stmp.end() - 1) == '#') {
                    sline = stmp;
                    title_line_read = true;
                    break;
                }
                if (stmp[0] == '#') {
                    gap = atoi(stmp.substr(5).c_str());
                    seq->gaps.push_back(gap);
                    j--;
                } else if (stmp.size() > 0) {
                    istringstream iss(stmp);
                    iss >> dist >> a1 >> a2;
                    indexa1[j] = a1;
                    indexa2[j] = a2;
                    try {
                        seq->distances->helper = dist;
                        if (a1 < length_s and a2 < length_s) {
                            (*seq->distances)(a1, a2) = dist;
                            (*seq->distances)(a2, a1) = dist;
                        } else
                            cerr << stmp << ":: " << seq->p_name << " dist"
                                << "(" << a1 << "," << a2 << ")=" << dist << endl;
                        //cerr << (*seq->distances)(a1,a2) << "(" << a1 << "," << a2 << ") " << seq->p_name << endl;
                        for (int k = 0, d = 0; !iss.eof(); k++) {
                            iss >> tmp;
                            if (pairwise_column_flags[k] == 1) {
                                (*seq->obs_pairwise_features)(a1, a2, d++) = tmp; //cerr << tmp <<" ";
                            }
                        } //cerr << endl;
                    } catch (bad_exception e) {
                        cerr << seq->p_name << " dist" << "(" << a1 << "," << a2 << ")=" << dist << endl;
                        exit(0);
                    }
                }
            }
            try {

                seq->datah5 = new Bioh5;
                seq->Pnnloadmi(seq->p_name);
                 for(int a1=0;a1<seq->length_seq;a1++)
                        for(int a2=a1+6;a2<seq->length_seq;a2++)
                            for (int di = 0; di < dim_pairwise_features; di++)
                            (*seq->obs_pairwise_features)(a1, a2, di) = seq->datah5->mipow[di](a1, a2);

                delete seq->datah5;
            } catch (int e) {
                fprintf(stderr, "reading h5 error\n");
            } catch (exception e) {
                fprintf(stderr, "Exception %s %s\n", seq->p_name.c_str(), e.what());

            }
        }
        //string p_name = seq->p_name.substr(0, 4);
        //p_name[p_name.size()-1]=tolower(p_name[p_name.size()-1]);
        //if (pmap.count(p_name)==0) {
        //  cerr << " Ignore " << p_name << " " << i << "; length=" << seq->length_seq << endl;
        //  delete seq; 
        //  continue;
        //}
        cerr << " Insert " << i << "; length=" << seq->length_seq << endl;
        //testData.push_back(seq);
        if (seq->makeFeatures() != -1) {
            seq->Predict();
    
            sumx += seq->m_sumx, sumx2 += seq->m_sumx2, sumy += seq->m_sumy,
                    sumxy += seq->m_sumxy, sumy2 += seq->m_sumy2,
                    sumR += seq->m_sumR, len += seq->m_len;
        }
        delete seq;
    }
    trn_in.close();

    double DevR = sumR / len;
    int l = len;
    double corr = (l * sumxy - sumx * sumy)
            / sqrt((l * sumx2 - sumx * sumx) * (l * sumy2 - sumy * sumy));
    double DevA = sqrt((sumy2 - 2 * sumxy + sumx2) / (sumy2 - sumy * sumy / l));
    cout << " Total Corr/devA/DevR..(" << len << ") ; corr= " << corr
            << "; DevA= " << DevA << "; DevR= " << DevR << endl;

    /*
      if (model==contact_number){
        cerr << "\ttest Data" << endl;
        for (int i=0; i<num_labels; i++)
          cerr << i << ": " << contactStat_sum[i] << endl;
        //exit(0);
      }
     */
}

void PNN1Inference::LoadDataSVMFormat(string input) {}

void Usage() {
    cerr << "PNN1Inference [-i input_file] [-d model_dir] [-m model] "
            << "[-l columncs] [-p pairwise_features] [-f model_file] [-F format]\n";
    cerr << "\t-m model: singleton, pairwise, DistancePotential or contact_number" << endl;
    cerr << "\t-l columns: select those columns to calculate in the singleton "
            << "features section. Note: the columns start from 0. For example, "
            << "-l0,3-6 means columns 0, 3, 4, 5 and 6." << endl;
    cerr << "\t-p pairwise_feaures : select those columns to calculate in the "
            << "pairwise feature section. Similar to -l option. Default value "
            << "is -1, meaning no feature." << endl;
    cerr << "\t-F format: 0 denotes sequence format; 1 denotes svm format. Default is 0." << endl;
    cerr << "  Example: " << endl;
    cerr << "     ./PNN1Inference -i ss70 -d . -l 0-39 -m singleton -f model100" << endl;
    cerr << "  This command runs a 3 state secondary structure classfier. " << endl;
    cerr << "  As shown in model100 file, the window size is set to be 5, "
            << "using 20 gates, 40 features for each residue, i.e. column 0 to 39." << endl;
    cerr << "  ss70 file has 513 proteins sequences. We use it as the test set." << endl;
}

int main(int argc, char **argv) {

    // the command line must be:
    if (argc < 3) {
        Usage();
        return 0;
    }

    extern char* optarg;
    char c = 0;
    int model = 1, Format = 0;
    string model_dir = "./", input_f = "ss70", columns = "", pairwise_columns = "";
    string init_file = "";
    string h5dir;
    while ((c = getopt(argc, argv, ":d:i:l:p:f:m:F:D:")) != EOF) {
        switch (c) {
            case 'i':
                input_f = optarg;
                break;
            case 'l':
                columns = optarg;
                break;
            case 'p':
                pairwise_columns = optarg;
                break;
            case 'd':
                model_dir = optarg;
                if (model_dir[model_dir.size() - 1] != '/')
                    model_dir += "/";
                //cerr << "model_dir=" << model_dir << endl;
                break;
            case 'f':
                init_file = optarg;
                break;
            case 'm':
                if (strcasecmp(optarg, "singleton") == 0)
                    model = 0;
                else if (strcasecmp(optarg, "pairwise") == 0)
                    model = 1;
                else if (strcasecmp(optarg, "DistancePotential") == 0)
                    model = 2;
                else if (strcasecmp(optarg, "contact_number") == 0)
                    model = 3;
                break;
            case 'F':
                Format = atoi(optarg);
                //cerr << " Format=" << Format << "=" << optarg << endl;
                break;
            case 'D':
                h5dir=optarg;
                break;
            default:
                Usage();
                exit(-1);
        }
    }

    PNN1Inference cnfModel;
    cnfModel.h5dir=h5dir;
    cnfModel.Initialize(model, model_dir, columns, pairwise_columns, init_file);
    //cerr << "Initialization Finished! " << endl;
    //cerr << "Format is " << Format << endl;
    //cnfModel.Predict(input_f, Format);
    if (Format == 0)
        cnfModel.LoadData(input_f);
    else
        cnfModel.LoadDataSVMFormat(input_f);
    return 0;
}
