#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>
#include <ctime>
#include <cstdlib>
#include <cstdio>
#include <cstring>
#include <cmath>
//#include <mpi.h>
#include <unistd.h>
#include <math.h>
#include <exception>
#include <stdexcept>
#include <fenv.h>
#include "matrix3.h"
#include "pnn1.h"




Sequence::Sequence(Nnpf* pModel) {
    mp = pModel;
}
Sequence::Sequence(int length_seq, Nnpf* pModel, string name) {
    mp = pModel;
    pdbid = name;
    this->length_seq = length_seq;
    if (test_mode == 0)
        length_contact = length_seq * length_seq / 1;
    else
        length_contact = length_seq*length_seq;
    dim_features = mp->dim_features;
    window_size = mp->window_size;
    dim_one_pos = mp->dim_one_pos;
    num_gates = mp->num_gates;
    num_states = mp->num_states;
    num_labels = mp->num_labels;
    dim_pairwise_features = mp->dim_pairwise_features;
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
    obj_weights = NULL;
    Rg = 2.2 * pow(length_seq + 0.0, 0.38);
    pFeatures = new Score[dim_features];
}

Sequence::~Sequence() {
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
    delete obj_weights;
}
Score Sequence::Predict(_run_mode run_mode){return 0;}
int Sequence::makeFeatures(){return 0;}
void Sequence::ComputeGates(){}
Score Sequence::ComputeGradient(bool bCalculateGate){return 0;}
void Sequence::ComputeTestAccuracy(){}
Score Sequence::Obj() { // observed label : log-likelihood
    ComputeGates();
    ComputeVi();
    CalcPartition();

    Score obj = 0;
    for (int t = 0; t < nDataPoints; t++) {
        if (batchindex[subsampling_mode][t] == 0)continue;
        obj += obj_weights[t] * ((*arrVi)(t, obs_label[t]) - Partition[t]);
    }
    delete arrVi;
    arrVi = NULL;
    //if (proc_id==0) cerr << "obj=" << obj << "; Partition=" << Partition << endl;
    return obj;
}

unsigned int Sequence::getlabel_contact(const double & dist,vector<double> bin) {
    //0,6,8,12
    unsigned int max_label = mp->num_labels;
    if(mp->num_labels!=bin.size() || bin.size()==0) throw "binning error";
    unsigned int label;
    if(dist<=3)return max_label-1;
    for(int i=1;i<bin.size();i++)
        if(dist>= bin[i-1] && dist <bin[i]) {
            label=i-1;
            break;
        }
    if(label==-1)label=max_label-1;
    return label;
}


unsigned int Sequence::getlabel(const double & dist) {
    unsigned int max_label = mp->num_labels;
    if (dist > 3 && dist < 4.5) return 0;
    //if(dist<=3)return -1;
    if (dist <= 3) {
        //printf("dist<3: %d,%.5f\n",proc_id,dist);
        return max_label - 1;
    }

    unsigned int label;
    label = int(dist - 3);
    if (label >= max_label)
        label = max_label - 1;
    return label;
}

Score Sequence::MAP() { // Posterior Decoding (Marginal Probability Decoder)
    //memset(pred, 0, sizeof(int)*20);
    Score bestScore, obj = 0;
    Score *vi2;
    int i, t, bestState = 0;

    CalcPartition();
    for (t = nDataPoints - 1; t >= 0; t--)
        obj += obj_weights[t] * ((*arrVi)(t, obs_label[t]) - Partition[t]);
    pred_score.resize(nDataPoints);
    pred_label_score.resize(nDataPoints);
    for (t = nDataPoints - 1, vi2 = &((*arrVi)(t, 0)); t >= 0; t--, vi2 -= arrVi->cols) {
        bestState = 0;
        bestScore = vi2[0];
        pred_label_score[t].resize(num_states);
        pred_label_score[t][0]=exp(vi2[0] - Partition[t]);
        pred_score[t] = 0;
        for (int ll = 0; ll <= 5; ll++) // contact score
            pred_score[t] += exp(vi2[ll] - Partition[t]);
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

void Sequence::CalcPartition() {
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
                    t2 < (t < lastt ? SM : nDataPoints % SM); t2++, vi2 += arrVi->cols) {

                for (i2 = 0; i2 < (i < lasti ? SM : num_states % SM); i2++) {
                    if (batchindex[subsampling_mode][t + t2] == 0)continue;
                    score = vi2[i2];
                    LogScore_PLUS_EQUALS(P2[t2], score);
                    //if (proc_id==0) cerr << "  Partition(" << t << "," << state << ")=" << score << " : " << Partition[t] << endl;
                }
            }
    //cerr << endl;
}

// Calculate phi_\theta(x_i, y)

void Sequence::ComputeVi() {
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
                    for (l2 = 0, pW2 = mp->GetWeightLAddr(l, g);
                            l2 < (l < lastl ? SM : num_states % SM);
                            l2++, pW2 += num_gates) {
                        for (g2 = 0; g2 < (g < lastg ? SM : num_gates % SM); g2++) {
                            if (batchindex[subsampling_mode][pos + pos2] == 0)continue;

                            vi2[l2] += pW2[g2] * gates2[g2];
                            // if (vi2[l2]>10000)cerr<<" ComputeVi: Vi("<<pos+pos2<<", "<<l+l2<<")= W("<<l+l2<<","<<g+g2<<") * gates("<<pos+pos2<<","<<g+g2<<"):: "<<vi2[l2]<<" += "<<pW2[g2]<<" * "<<gates2[g2]<<endl; 
                        } // exit(0);
                    }
            }

    //for (pos=0; pos<length_contact; pos++)
    //  for (l=0; l<num_states; l++)
    //    cerr << "  ComputeVi(" << pos << ", " << l << ")=" << (*arrVi)( pos, l) << endl;
}



PairwiseSequence::PairwiseSequence(Nnpf* mp) : Sequence(mp) {
    this->mp=mp;
}

PairwiseSequence::PairwiseSequence(int len, Nnpf* pModel, string name)
: Sequence(len, pModel, name) {
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
}

int PairwiseSequence::makeFeatures() {
    //TODO separate the feature part to convert h5
    if (obs_label == NULL)
        obs_label = new int[length_contact];
    int df = length_contact * 2;
    //cerr << proc_id << "@ df=" << df << ", len_contact=" << length_contact << ", gaps_size=" << gaps.size();
    _features = new int[df];

    int totalContact = 0;
    int negativeLabel = 0;
    //cerr << " window_size=" << window_size << ", len_seq=" << length_seq << endl;
    //build features for local windows  
    for (int t = 0; t < length_seq - contact_DIST; t++) {
        bool bGap = false;
        for (int g = 0; g < (int) gaps.size(); g++) {
            if (abs(gaps[g] - t) <= window_size / 2) {
                bGap = true; //zy, t has a gap in its window range
                break;
            }
        }
        if (bGap)
            continue;
        //for(int u=t+7;u<length_seq-window_size/2;u++){
        for (int u = t + contact_DIST; u < length_seq; u++) {
            if (totalContact >= length_contact - 1)
                break;
            bGap = false;
            for (int g = 0; g < (int) gaps.size(); g++) {
                if (abs(gaps[g] - u) <= window_size / 2) {
                    bGap = true; //zy, u has a gap
                    break;
                }
            }
            if (bGap)
                continue;

            obs_label[totalContact] = getlabel((*distances)(t, u));
            //zy, todo, maybe -1.
            //obs_label[totalContact] = label;
            //if (!proc_id)
            //  cerr << "    Adding contact " << totalContact << ":" << p_name 
            //       << " (" << t << ", " << u << ") with dist=" << (*distances)(t,u)
            //       << " labeled " << obs_label[totalContact] << endl;
            centerMap[totalContact] = t; // indexa1
            IdxMapCenter[t] = totalContact; // index_t[] from a sequence position to the last contact position
            rIdxMap[totalContact] = u; //index a2
            IdxMapCofactor[u] = totalContact;
            index_t[t][u] = totalContact;
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
        (*pairwise_features)(0, t) = getseqdist(offset2 - offset1, length_seq);
        for (int d = 1; d <= dim_pairwise_features; d++) // the dim_pair_feature is including seq_dist.
            (*pairwise_features)(d, t) = (*obs_pairwise_features)(offset1, offset2, d - 1);
        //set dpf to 0, to drop pair feat.
    }
    delete obs_pairwise_features;
    obs_pairwise_features = NULL;
    obj_weights = new double[nDataPoints];
    for (int t = 0; t < nDataPoints; t++)
        obj_weights[t] = 1.0;
    subsampling_mode = DEFAULT_INDEXMODE;
    buildbatch(0.5);
#ifdef _check_grad
    buildbatch(1);
#endif    

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
                if (batchindex[subsampling_mode][t + t2] == 0)continue;
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
                    const int& pair_window_size=mp->pair_window_size;
                    
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
#ifdef _check_grad_1
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
#ifdef _check_grad_1
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
#ifdef _check_grad_1
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
#ifdef _check_grad_1
                                mp->checktimes(check, weight_index, length_contact);
#endif
                            }
                    }

                    gates2[g2] = Gate(output);
                    //if (pos=30) cerr << "   gate("<< gate <<"," << pos <<")= " << gates2[g2] << " " << output << endl;
                }
            }
#ifdef _check_grad_1
    cerr << "check grad ";
    for (int i = mp->iFeatureStart + window_size / 2 * 2
            + (2 * window_size * dim_one_pos); i < mp->num_params; i++)
        cerr << check[i] << ",";
    cerr << endl;
#endif
    if (proc_id == 0) {
        gettimeofday(&te, 0);
        double dif = difftime(te.tv_sec, ts.tv_sec);
        //cerr << "Gates: " << dif*1000+te.tv_usec/1000-ts.tv_usec/1000 << " miliseconds." << endl;
    } //exit(0);
    delete feature_buffer;
    delete feature_buffer_cofactor;
}

Score PairwiseSequence::Predict(_run_mode run_mode) {
    subsampling_mode = 1;
    ComputeGates();
    ComputeVi();
    Score obj = MAP();
    if (run_mode == _run_mode::training) {  
        ComputeTestAccuracy();
        subsampling_mode = DEFAULT_INDEXMODE;
    } else {
        string fn = pdbid.substr(0, pdbid.length() - 1) + ".epad.prob";
        ofstream of(fn.c_str(), ofstream::out);
        of << setprecision(5);
        for (int i = 0; i < length_contact; i++) {
            int a1, a2;
            a1 = centerMap[i];
            a2 = rIdxMap[i];
            of << a1 << " " << a2;
            of << " " << (pred_label_score[i][0] + pred_label_score[i][1])*100;
            for (int j = 2; j < mp->num_labels; j++)
                of << " " << pred_label_score[i][j]*100 << " ";
            of << endl;
        }
    }
    return obj;
}

Score PairwiseSequence::ComputeGradient(bool bCalculateGate) {
    return calc_grad(mp->grad);
}

Score PairwiseSequence::Obj(){
    return calc_deep();
}
bool PairwiseSequence::sortcmp(int i, int j) {
    return pred_score[i] > pred_score[j];
}

struct myclass {
    vector<double> xx;

    bool operator() (int i, int j) {
        return (xx[i] > xx[j]);
    }
};

void PairwiseSequence::ComputeTestAccuracy() {
    mp->totalPos += length_contact;
    // comparison
    //ScoreMatrix dist_pred(length_seq, length_seq,"dist_pred");
    //dist_pred.Fill(0);
    for (int t = 0; t < length_contact; t++) {
        if (obs_label[t] == predicted_label[t])
            mp->totalCorrect++;
        confusion[predicted_label[t]][obs_label[t]]++;
        /*
            int x=centerMap[t], y=rIdxMap[t];
            int label=predicted_label[t];
            if (label==0)
              dist_pred(x,y)=3.5;
            else if (label<m_pModel->num_labels-1)
              dist_pred(x,y)=label+3.5;
         */
    }
    //compute contact accuracy, top L/2
    //vector<double> conprob(length_contact,0);
    contact_acc = 0;
    vector<int> conindex(length_contact, 0);
    for (int t = 0; t < length_contact; t++) {
        conindex[t] = t;
    }
    myclass sortcmp;

    sortcmp.xx = pred_score;
    if (length_contact != nDataPoints)cerr << "length_contact is not nDatapoints\n";
    std::sort(conindex.begin(), conindex.end(), sortcmp);
    for (int t = 0; t < length_seq / 2 && t < length_contact; t++) {
        if (obs_label[conindex[t]] <= 3) {
            contact_acc = contact_acc + 1;
        }
    }
    contact_acc = contact_acc / (length_seq / 2);

    /*
      for (int x=m_pModel->window_size/2; x<length_seq-m_pModel->window_size/2; x++){
        for (int y=x+7; y<length_seq-m_pModel->window_size/2; y++){
          if (dist_pred(x,y)>0 && dist_pred(x,y+1)>0){
            m_pModel->totalTriangle++;
            Score diff = abs(dist_pred(x,y)-dist_pred(x,y+1));
            if (diff<4)
              m_pModel->legalTriangle++;
          }
        }
      }
     */
    //for(int t=0; t<length_contact;t++) cerr << predicted_label[t] << ":" << obs_label[t] << " "; 
    //cerr << "=="<<m_pModel->totalCorrect << endl;
}

/////////////////////  implementation of the class ContactNumberSequence ///////////////////////////////////////

/////////////////////  implementation of the class ContactNumberSequence ///////////////////////////////////////

void mpi_sum_bcast_double(const double *src, double* dest){
    // Chang this for no_mpi
#ifdef _no_mpi 
    *dest=*src;
#else
    if(dest!=src){
//        MPI_Reduce(src,dest, 1, MPI_DOUBLE, MPI_SUM, 0, MPI_COMM_WORLD);
    }else{
        double tmp;
//        MPI_Reduce(src,&tmp, 1, MPI_DOUBLE, MPI_SUM, 0, MPI_COMM_WORLD);
        *dest=tmp;
    }
//    MPI_Bcast(dest, 1, MPI_DOUBLE, 0, MPI_COMM_WORLD);
#endif


}

void Lbfgs::Report(const vector<double> &theta, int iteration,
        double objective, double step_length) {
    time_t start, end;
    int num_labels = mp->num_labels;
    mp->CopyWeightsIn(theta);
    //m_pModel->showweights();
    int tc_sum = 0, tp_sum = 0, ttT_sum = 0, tlT_sum = 0;
//    MPI_Barrier(MPI_COMM_WORLD);
//    MPI_Bcast(mp->weights, mp->num_params, MPI_DOUBLE, 0, MPI_COMM_WORLD);
    if (iteration < 10 || (iteration % 30 == 0)) {
        double test_ll;
        test_ll = mp->get_test_loglikelihood(mp->testData);
        mpi_sum_bcast_double(&test_ll, &test_ll);
        if (proc_id == 0) {
            stringstream ss;
            ss << mp->save_model_file;
            ss << "-" << iteration;
            mp->dlmwrite(ss.str());
            mp->trace(iteration);
            cerr << "test_ll " << test_ll << endl;
        }
    }

    if (iteration >= 10 && (iteration % 25 == 0)) {
        time(&start);
        //for (int i = 0; i < mp->trainData.size(); i++) { // compute on training data
        //    mp->trainData[i]->buildbatch(iteration * 1.0 / 500);
        //}
        time(&end);
    }
    return;

    //Save gradient
#ifdef _check_grad    
    if (proc_id == 0) {
        char buf[100];
        sprintf(buf, "grad-%d", iteration);
        ofstream fgout(buf, ofstream::out);
        fgout << setprecision(5);
        for (int i = 0; i < mp->num_params; i++)
            fgout << mp->weightdesc[i] << " " << mp->grad_sum[i] << endl;
        fgout.close();
    }
#endif
    if (iteration > 10 && (iteration % 50 != 0))return;
    if (!proc_id) cerr << "******* iteration=" << iteration << endl;

    mp->totalPos = mp->totalCorrect = mp->totalTriangle
            = mp->legalTriangle = 0;
    for (int i = 0; i < num_labels; i++)
        for (int j = 0; j < num_labels; j++) {
            confusion[i][j] = 0;
            confusion_sum[i][j] = 0;
        }
    double test_obj = 0, test_obj_sum = 0;
    double all_contact_accu = 0;
    double allproc_contact_accu = 0;
    unsigned int total_tstseq = 0;

    for (int i = 0; i < mp->num_tst; i++) {
        //cerr << "Test("<< i <<")" << endl;
        test_obj += mp->testData[i]->Predict();
        delete mp->testData[i]->arrVi;
        mp->testData[i]->arrVi = NULL;
        all_contact_accu = all_contact_accu + mp->testData[i]->contact_acc;
    }
    //*
    test_obj = -test_obj + mp->RegularizeWeights();
//    MPI_Reduce(&test_obj, &test_obj_sum, 1, MPI_DOUBLE, MPI_SUM, 0, MPI_COMM_WORLD);
//    MPI_Bcast(&test_obj_sum, 1, MPI_DOUBLE, 0, MPI_COMM_WORLD);
    // */
    double norm_w = 0;
    for (int i = 0; i < theta.size(); i++)
        norm_w += theta[i] * theta[i];

    tp_sum = mp->totalPos;
    tc_sum = mp->totalCorrect;
    ttT_sum = mp->totalTriangle;
    tlT_sum = mp->legalTriangle;
    allproc_contact_accu=all_contact_accu;
    total_tstseq=mp->num_tst;
//    MPI_Reduce(&mp->totalPos, &tp_sum, 1, MPI_INT, MPI_SUM, 0, MPI_COMM_WORLD);
//    MPI_Reduce(&mp->totalCorrect, &tc_sum, 1, MPI_INT, MPI_SUM, 0, MPI_COMM_WORLD);
//    MPI_Reduce(&mp->totalTriangle, &ttT_sum, 1, MPI_INT, MPI_SUM, 0, MPI_COMM_WORLD);
//    MPI_Reduce(&mp->legalTriangle, &tlT_sum, 1, MPI_INT, MPI_SUM, 0, MPI_COMM_WORLD);
//    MPI_Reduce(confusion, confusion_sum, 30 * 30, MPI_INT, MPI_SUM, 0, MPI_COMM_WORLD);
//    MPI_Reduce(&all_contact_accu, & allproc_contact_accu, 1, MPI_DOUBLE, MPI_SUM, 0, MPI_COMM_WORLD);
//    MPI_Reduce(&mp->num_tst, &total_tstseq, 1, MPI_INT, MPI_SUM, 0, MPI_COMM_WORLD);
    
    if (proc_id == 0) { //compute confusion_matrix, write model

        cout << endl << "Iteration:  " << iteration << endl;
        cout << " Weight Norm: " << sqrt(norm_w) << endl;
        cout << " Objective: " << objective << " \t test obj: \t\t" << test_obj_sum << endl;
        try {
            cout << " test ACC(MAP): " << (double) tc_sum / tp_sum << "   " << tc_sum << "/" << tp_sum << endl;
        } catch (exception e) {
            cerr << "tp_sum ";
            cerr << e.what() << endl;
        }
        cout << "Contact accuracy(test) " << allproc_contact_accu / total_tstseq << endl;
        //cout << " test triangle: " << (double) tlT_sum/ttT_sum <<"   " << tlT_sum << "/" << ttT_sum << endl;
        //*
        cout << endl << "Confusion Matrix: " << endl;
        memset(sum, 0, sizeof (int)*30);
        for (int i = 0; i < num_labels; i++) {
            double tot = 0;
            for (int j = 0; j < num_labels; j++) {
                //In prediction confusion[predicted_label[t]][obs_label[t]]++;
                //ith row contains number of data in every true label predicted as ith label.
                printf("%7d ", confusion_sum[i][j]);
                tot += confusion_sum[i][j];
                sum[j] += confusion_sum[i][j];
            }
            //printf("%7.2f\n", 100.0*confusion_sum[i][i]/tot);
            printf("%7.2f\n", 100.0 * confusion_sum[i][i]);
        }
        for (int i = 0; i < num_labels; i++)
            printf("%7.2f ", 100.0 * confusion_sum[i][i]);
        //printf("%7.2f ", 100.0*confusion_sum[i][i]/(0.0001+sum[i]));
        cout << endl;
        //*/
        if (test_mode == 1)
            return;

        string m_file = mp->save_model_file; // model file path
        char buf[100];

        time(&end);

    }

    for (int i = 0; i < num_labels; i++)
        for (int j = 0; j < num_labels; j++) {
            confusion[i][j] = 0;
            confusion_sum[i][j] = 0;
        }

    mp->totalPos = mp->totalCorrect
            = mp->totalTriangle = mp->legalTriangle = 0;
    ttT_sum = mp->totalTriangle;
    tlT_sum = mp->legalTriangle;
    all_contact_accu=0;
    for (int i = 0; i < mp->num_data; i++) { // compute on training data
        //cerr << proc_id << ": training data " << i << endl;

        mp->trainData[i]->Predict();
        all_contact_accu = all_contact_accu + mp->trainData[i]->contact_acc;
    
        if (proc_id == 0 && i == 0 && 0) {
            Sequence* seq = mp->trainData[i];
            char buf[1000];
            sprintf(buf, "%s.epad", seq->pdbid.substr(0, 5).c_str());
            ofstream fout(buf, ofstream::out);
            for (int t = 0; t < seq->nDataPoints; t++) {
                //fout << predicted_label[t] << " " ;
                //fout << indexa1[t] << " " << indexa2[t] << " ";
                for (int l = 0; l < num_labels; l++)
                    fout << exp((*seq->arrVi)(t, l) - seq->Partition[t]) << " ";
                fout << endl;
            }
            fout.close();
        }
    }

    
//    //MPI_Barrier(MPI_COMM_WORLD);
    int total_trainseq=mp->num_data;
//    MPI_Reduce(&mp->totalPos, &tp_sum, 1, MPI_INT, MPI_SUM, 0, MPI_COMM_WORLD);
//    MPI_Reduce(&mp->totalCorrect, &tc_sum, 1, MPI_INT, MPI_SUM, 0, MPI_COMM_WORLD);
//    MPI_Reduce(&mp->totalTriangle, &ttT_sum, 1, MPI_INT, MPI_SUM, 0, MPI_COMM_WORLD);
//    MPI_Reduce(&mp->legalTriangle, &tlT_sum, 1, MPI_INT, MPI_SUM, 0, MPI_COMM_WORLD);
//    MPI_Reduce(confusion, confusion_sum, 30 * 30, MPI_INT, MPI_SUM, 0, MPI_COMM_WORLD);
//    MPI_Reduce(&all_contact_accu, & allproc_contact_accu, 1, MPI_DOUBLE, MPI_SUM, 0, MPI_COMM_WORLD);
//    MPI_Reduce(&mp->num_data, &total_trainseq, 1, MPI_INT, MPI_SUM, 0, MPI_COMM_WORLD);
#ifdef _no_mpi
    tp_sum = mp->totalPos;
    tc_sum = mp->totalCorrect;
    ttT_sum = mp->totalTriangle;
    tlT_sum = mp->legalTriangle;
    //confusion_sum = confusion;
#endif
    if (proc_id == 0) {
        try {

            cout << " train ACC: " << (double) tc_sum / tp_sum << "   " << tc_sum << "/" << tp_sum << endl;
        } catch (exception e) {
            cerr << "train acc tc_sum/tp_sum " << e.what() << endl;
        }
        cout << "Contact accuracy(train) " << allproc_contact_accu / total_trainseq << endl;
        //cout <<" train triangle: " << (double) tlT_sum/ttT_sum <<"   " << tlT_sum << "/" << ttT_sum << endl;
        cout << endl << "Confusion Matrix: " << endl;
        memset(sum, 0, sizeof (int)*30);
        /*
        for(int i=0;i<num_labels;i++){
          double tot=0;
          for(int j=0;j<num_labels;j++){
            printf("%7d ",confusion_sum[i][j]);
            tot+=confusion_sum[i][j];
            sum[j]+=confusion_sum[i][j];
          }
          printf("%7.2f\n", 100.0*confusion_sum[i][i]/tot);
        }
        for (int i=0; i<num_labels; i++)
          printf("%7.2f ", 100.0*confusion_sum[i][i]/(0.0001+sum[i]));
        cout << endl;
         */
    }
}

double Lbfgs::ComputeGradient(int iteration, vector<double>&g,
        const vector<double> &x, bool bCalculateGate,
        int num_consec_small_steps) {
    //if (test_mode==1) return;
    time_t start, end;
    double dif;
    if (proc_id == 0)time(&end);
    mp->CopyWeightsIn(x);
    if (proc_id == 0) {
        start = end;
        time(&end);
        dif = difftime(end, start);
        cerr << "[D0] grad-copy" << dif << endl;
    }
    //cerr<<"proc "<<proc_id<<" ready\n";
//    MPI_Barrier(MPI_COMM_WORLD);
//    MPI_Bcast(mp->weights, mp->num_params, MPI_DOUBLE, 0, MPI_COMM_WORLD);
    if (proc_id == 0) {
        start = end;
        time(&end);
        dif = difftime(end, start);
        cerr << "[D0] grad-mpibcast" << dif << endl;
    }
    memset(mp->grad, 0, sizeof (double)*mp->num_params);
    Score obj = 0;
    try {
        for (unsigned int i = 0; i < mp->trainData.size(); i++) {
            obj += mp->trainData[i]->ComputeGradient(bCalculateGate);
        }
        obj = -obj + mp->RegularizeWeights();
    } catch (exception e) {
        cerr << "ComputGrad exception" << e.what() << endl;
    }
    //if (proc_id==0) cerr << "Gradient_Obj=" << obj << endl;
    if (proc_id == 0) {
        start = end;
        time(&end);
        dif = difftime(end, start);
        cerr << "[D0] grad-loop" << dif << endl;
    }
    mp->RegularizeGrads();

    double obj_sum = 0;
//    //MPI_Barrier(MPI_COMM_WORLD);
//    MPI_Reduce(mp->grad, mp->grad_sum, mp->num_params, MPI_DOUBLE, MPI_SUM, 0, MPI_COMM_WORLD);
//    MPI_Bcast(mp->grad_sum, mp->num_params, MPI_DOUBLE, 0, MPI_COMM_WORLD);
    if (proc_id == 0) {
        start = end;
        time(&end);
        dif = difftime(end, start);
        cerr << "[D0] grad-reduce-bcast" << dif << endl;
    }
//    MPI_Reduce(&obj, &obj_sum, 1, MPI_DOUBLE, MPI_SUM, 0, MPI_COMM_WORLD);
//    MPI_Bcast(&obj_sum, 1, MPI_DOUBLE, 0, MPI_COMM_WORLD);
#ifdef _no_mpi
    memcpy(mp->grad_sum, mp->grad, sizeof (double)*mp->num_params);
    obj_sum = obj;

#endif

    int nonzeroDirection = 0;
    double _norm = mp->CopyGradsOut(g, nonzeroDirection, num_consec_small_steps);
    if (proc_id == 0) {
        start = end;
        time(&end);
        dif = difftime(end, start);
        cerr << "grad-copyout" << dif << endl;
    }
    if (!proc_id)
        cerr << "[D0] Norm of Gradient: " << sqrt(_norm) << "; number of steep directions: " << nonzeroDirection << endl;
    return obj_sum;
}

double Lbfgs::ComputeFunction(int iteration, const vector<double> &x, int linesearch) {
    //if (test_mode==1) return 0;
    linesearch=0; //always sync
    mp->CopyWeightsIn(x);
    if (linesearch == 0) { // by default
//        MPI_Barrier(MPI_COMM_WORLD);
//        MPI_Bcast(mp->weights, mp->num_params, MPI_DOUBLE, 0, MPI_COMM_WORLD);
    }
//    //MPI_Barrier(MPI_COMM_WORLD);

    double obj = 0, obj_sum = 0;
    for (unsigned int i = 0; i < mp->trainData.size(); i++) {
        //if (proc_id==0) cerr << "Obj("<< i <<"):";
        obj += mp->trainData[i]->Obj();
    }
    //cerr << "Now need to RegularizeWeights" << endl;
    obj = -obj + mp->RegularizeWeights();
    if(iteration==iter_start)
        for(int i=0;i<num_procs;i++){
            if(i==proc_id)
                cerr<<"proc "<<proc_id<<" obj "<<obj<<"; ";
//            MPI_Barrier(MPI_COMM_WORLD);
        }
    //
    if (linesearch == 0) {
//        MPI_Reduce(&obj, &obj_sum, 1, MPI_DOUBLE, MPI_SUM, 0, MPI_COMM_WORLD);
//        MPI_Bcast(&obj_sum, 1, MPI_DOUBLE, 0, MPI_COMM_WORLD);
    } else {
        obj_sum = obj;
    }
    if(iteration==iter_start && proc_id==0){
        cerr<<"obj sum "<<obj_sum<<endl; 
    }
#ifdef _no_mpi
    obj_sum = obj;
#endif
    return obj_sum;
}

void Lbfgs::Report(const string &s) {
    if (!proc_id) cerr << s << endl;
}

void Nnpf::SetSeed() {
    unsigned int randomSeed = 0;
    ifstream in("/dev/urandom", ios::in);
    in.read((char*) &randomSeed, sizeof (unsigned) / sizeof (char));
    in.close();

    unsigned id = getpid();
    randomSeed = randomSeed * randomSeed + id*id;

    //we can set the random seed at only the main function
    srand48(randomSeed);
    srand(randomSeed);
}



void Nnpf::explainWeight(int i, string & s) {
    int dim_features = window_size / 2 * 2
            + (2 * window_size * dim_one_pos)
            + dim_pairwise_features * (window_size * 2 - 1) + (window_size * 2 - 1)
            + 1;
    int iFeatureStart = iGateStart + num_states*num_gates;
    int num_params = iFeatureStart + dim_features*num_gates;
    // istate igate i-single-window-status i-single-window i-single-window-feature
    // i-pair-window, i-pair-window-feature i-pair-window-status
    int is = -1, ig = -1, isws = -1, isw = -1, iswf = -1, ipw = -1, ipwf = -1, ipws = -1;
    if (i < iFeatureStart) {
        //currState * num_gates + gate;
        //[state1: gate1,..][state2: ...]
        is = i / num_gates;
        ig = i % num_gates;
    } else {
        //suppose the arrangement is [gate1, feat1,...featn] [gat2:....]
        ig = (i - iFeatureStart) / dim_features;
        int ifeat = (i - iFeatureStart) % dim_features;
        //window or window indicator
        if (ifeat < window_size / 2 * 2) {
            isws = ifeat;
        } else if (ifeat < window_size / 2 * 2
                + (2 * window_size * dim_one_pos)) {
            isw = (ifeat - window_size / 2 * 2) / dim_one_pos;
            iswf = (ifeat - window_size / 2 * 2) % dim_one_pos;
        } else if (ifeat < window_size / 2 * 2
                + (2 * window_size * dim_one_pos)
                + dim_pairwise_features * (window_size * 2 - 1)) {
            ipwf = (ifeat - (window_size / 2 * 2 + (2 * window_size * dim_one_pos)))
                    % dim_pairwise_features;
            ipw = (ifeat - (window_size / 2 * 2 + (2 * window_size * dim_one_pos)))
                    / dim_pairwise_features;
        } else if (ifeat < window_size / 2 * 2
                + (2 * window_size * dim_one_pos)
                + dim_pairwise_features * (window_size * 2 - 1)
                + 2 * window_size - 1
                ) {
            ipws = ifeat - (window_size / 2 * 2
                    + (2 * window_size * dim_one_pos)
                    + dim_pairwise_features * (window_size * 2 - 1));
        }
        //if(ifeat >=window_size / 2 * 2 
        //    + (2 * window_size * dim_one_pos) 
        //    + dim_pairwise_features *( window_size*2 -1)  )
        //    ipairwstatus = ifeat - window_size / 2 * 2 
        //    + (2 * window_size * dim_one_pos) 
        //    + dim_pairwise_features *( window_size*2 -1)  ;
        //single features

    }

    char buf[1000];
    sprintf(buf, "%d %d   %d %d %d   %d %d %d",
            is, ig, isws, isw, iswf, ipw, ipwf, ipws);
    s = buf;
}


void Nnpf::convertModel(string oldModel, string newModel) {
    ifstream fin(oldModel.c_str()); // no file header
    char buf[10240];
    string tmp;
    int data;
    for (int i = 0; i < 8; i++) {
        if (!fin.getline(buf, 10240))
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
            cerr << tmp << "::::" << data << endl;
        }
    }
    weights = new double[num_params];
    for (int i = 0; i < num_params; i++)
        fin >> weights[i];
    fin.close();

    int dfeatures = window_size / 2 * 2 + (2 * window_size * dim_one_pos) + 2 + 1;
    iFeatureStart = num_labels*num_gates;
    int nparams = iFeatureStart + dfeatures*num_gates;

    ofstream fout(newModel.c_str());
    fout << "num_params: " << nparams << endl;
    fout << "num_gates: " << num_gates << endl;
    fout << "num_labels: " << num_labels << endl;
    fout << "dim_one_pos: " << dim_one_pos << endl;
    fout << "window_size: " << window_size << endl;
    fout << "dim_features: " << dfeatures << endl;
    fout << " weights: " << endl;

    for (int i = 0; i < iFeatureStart; i++)
        fout << weights[i] << " ";
    for (int i = 0; i < num_gates; i++) {
        for (int j = 0; j < window_size / 2 * 2; j++)
            fout << 0.0 << " ";
        int ifs = iFeatureStart + i*dim_features;
        for (int j = 0; j < dim_features; j++) {
            int idx = ifs + j;
            fout << weights[idx] << " ";
        }
        fout << 0.0 << " ";
    }
    fout << endl;

    fout.close();
}

// return the total number of valid columns

int Nnpf::getColumns(string columns, int* column_flags) {
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
                if (col1 >= 0 && col1 < MAX_COL) column_flags[col1] = 1;
            } else if (c == '-') {
                si >> col2 >> c;
                if (col1 >= 0 && col1 < MAX_COL) {
                    for (int i = col1; i <= min(MAX_COL - 1, col2); i++)
                        column_flags[i] = 1;
                }
            } else {
                if (col1 >= 0 && col1 < MAX_COL) column_flags[col1] = 1;
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


vector<pair<int,int> >  Sequence::find_feature_window(int aa,int bb,int ws,int seqlen) {
    //padding with -1,-1 if i,j not available.
    vector<pair<int, int> > res;
    for (int wi = 0; wi < ws; wi++) {
        //for(int i=0;i<seqlen;i++){
        pair<int, int> xx(-1, - 1);
        if (aa + wi - ws / 2 < 0 || aa + wi - ws / 2 >= seqlen || (bb + wi - ws / 2 < 0 || bb + wi - ws / 2 >= seqlen)) {
            if(!(aa + wi - ws / 2 < 0 || aa + wi - ws / 2 >= seqlen)) xx.first=aa+wi-ws/2;
            if(!( bb + wi - ws / 2 < 0 || bb + wi - ws / 2 >= seqlen)) xx.second=bb+wi-ws/2;
        } else {
            xx.first=aa+wi-ws/2;
           xx.second=bb+wi-ws/2; 
        }
        res.push_back(xx);
    }
    return res;
}

vector<pair<int,int> > Sequence::find_feature_window_pair(int aa,int bb,int ws,int seqlen) {
    //padding with -1,-1 if i,j not available.
    vector<pair<int, int> > res;
    for (int wi = 0; wi < ws; wi++) {
        pair<int, int> xx(-1, - 1);
        if (aa + wi - ws / 2 < 0 || aa + wi - ws / 2 >= seqlen || bb + wi - ws / 2 < 0 || bb + wi - ws / 2 >= seqlen) {
            //if(!(aa + wi - ws / 2 < 0 || aa + wi - ws / 2 >= seqlen)) xx.first=aa+wi-ws/2;
            //if(!( bb + wi - ws / 2 < 0 || bb + wi - ws / 2 >= seqlen)) xx.second=bb;
        } else {
            xx.first=aa+wi-ws/2;
           xx.second=bb; 
        }
        res.push_back(xx);
    }
    for (int wi = 0; wi < ws; wi++) {
        if(wi-ws/2==0)continue;
        pair<int, int> xx(-1, - 1);
        if (aa + wi - ws / 2 < 0 || aa + wi - ws / 2 >= seqlen || (bb + wi - ws / 2 < 0 || bb + wi - ws / 2 >= seqlen)) {
            //if(!(aa + wi - ws / 2 < 0 || aa + wi - ws / 2 >= seqlen)) xx.first=aa;
            //if(!( bb + wi - ws / 2 < 0 || bb + wi - ws / 2 >= seqlen)) xx.second=bb+wi-ws/2;
        } else {
            xx.first=aa;
           xx.second=bb+wi-ws/2; 
        }
        res.push_back(xx);
    }
    return res;
}

void Nnpf::LoadData(string input, string split_file, _run_mode run_mode ) {
    /*Sample of training 
     * 5247
     330 8446 12asA# Length (Number of pairs)
     * 0.999 0.001 0.000 : Seqres Position 1
     * 1.373000 neff
     * 0.072195 0.008125 0.040410 0.046853 0.012807 hmm profile 1-5
     * 0.045876 0.025137 0.024394 0.045628 0.051737 
     * 0.011111 0.028665 0.349984 0.027412 0.036662 
     * 0.044944 0.063928 0.042202 0.003468 0.016975 hmm prof -20
     *  -0.250 -0.375 -0.500 -0.625 -0.375  Divide tpl psiblast score matrix (1-20 column ) by 8
     *  -0.250 -0.375 -0.500 -0.375 0.000
     *  0.125 -0.375 1.125 -0.125 -0.500 
     * -0.375 -0.250 -0.375 -0.250 -0.125 psiblast 1- 20
seqres Pos 2: 0.779 0.151 0.040 1.546000 0.074755 0.016477 0.040097 0.038870 0.035632 0.092380 0.024817 0.060815 0.039424 0.122892 0.111783 0.026608 0.025922 0.023287 0.032737 0.040304 0.055713 0.090614 0.032172 0.031438 
     *  -0.250 0.250 -0.250 -0.125 -0.500 0.250 0.125 -0.375 -0.250 -0.500 -0.500 0.750 -0.375 -0.500 -0.375 0.000 -0.125 0.250 -0.375 -0.500
     *#seqLen=330 
     * #Gap:0
     * #Gap:1
     * #Gap:2 Saying 0-2 are missing AA.
     * 9.893938 3 9 : ca distance
10.412012 3 10
12.205327 3 11
14.317472 3 12
15.546704 3 13
     */
    //Matrix3 savefeature
    vector<int> myseq_train, myseq_test;
    if (split_file.length()) {
        ifstream sf;
        string line;
        sf.open(split_file.c_str(), ifstream::in);
        for (int i = 0; i <= proc_id; i++)
            getline(sf, line);
        int lastspace = 0, i = 0, bTest = false;
        //if (proc_id==0) cerr << "=" << line << endl;
        for (; i < line.size(); i++) {
            if (line[i] == ';') {
                bTest = true;
                lastspace = i + 1;
                continue;
            }
            if (line[i] == ' ') {
                string token = line.substr(lastspace, i - lastspace);
                //cerr << "token=" << token << endl;
                if (bTest)
                    myseq_test.push_back(atoi(token.c_str()));
                else
                    myseq_train.push_back(atoi(token.c_str()));
                lastspace = i + 1;
            }
        }
        string token = line.substr(lastspace, i - lastspace);
        //if (proc_id==1) 
        //cerr << "token=" << token << endl;
        if (token.size())
            myseq_test.push_back(atoi(token.c_str()));
    }

    // Read the training data
    ifstream trn_in(input.c_str());
    trn_in >> num_data;
    if (!proc_id) {
        cerr << input << ": gateStart=" << iGateStart << "; ifs=" << iFeatureStart
                << " - Load Data: " << dim_one_pos << ";" << num_data
                << "; model=" << model << "; pairwise=" << dim_pairwise_features << endl;
    }
    //num_data = 200;
    int total_data = num_data;
    vector<Sequence*> DATA;

    bool title_line_read = false;
    double dist, tmp;
    int a1, a2, length_s, length_contact, real_dim_one_pos, gap;
    string stmp, sline;
    Sequence *seq;
    getline(trn_in, sline);
    for (int i = 0; i < min(16000, num_data); i++) {
        bool exist_train = false, exist_test = false;
        seq = NULL;
        if (split_file.length()) {
            for (int k = 0; k < myseq_train.size(); k++) {
                if (i == myseq_train[k]) {
                    exist_train = true;
                    break;
                }
            }
            for (int k = 0; k < myseq_test.size(); k++) {
                if (i == myseq_test[k]) {
                    exist_test = true;
                    break;
                }
            }
        } else if (i % num_procs == proc_id || test_mode == 1)
            exist_train = true;

        if (!title_line_read)
            getline(trn_in, sline);
        else
            title_line_read = false;
        // construct a new sequence
        //if(!proc_id) cerr << "sequence title: " << sline << endl;
        switch (model) {
            case pairwise:
            {
                istringstream iss(sline);
                iss >> length_s >> length_contact >> stmp;
                //getline(trn_in, stmp);
                if (exist_train || exist_test)
                    seq = new PairwiseSequence(length_s, this, stmp);
                break;
            }
        }
        vector<int> indexa1(length_contact, -1);
        vector<int> indexa2(length_contact, -1);
        for (int j = 0; j < length_s; j++) {
            getline(trn_in, sline); //cerr << "Contact " << j << ":";
            if (!exist_train && !exist_test)
                continue;
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

        getline(trn_in, stmp);

        for (int j = 0; j < length_contact; j++) { //zy, not the final contact index
            getline(trn_in, stmp); //cerr << "Contact " << j << ":";
            //cerr<<proc_id<< " "<<j<<" "<<"load 1464\n";
            if (*(stmp.end() - 1) == '#') {
                sline = stmp;
                title_line_read = true;
                break;
            }
            if (!exist_train && !exist_test)
                continue;
            if (stmp[0] == '#') {
                gap = atoi(stmp.substr(5).c_str());
                seq->gaps.push_back(gap);
            } else if (stmp.size() > 0) {
                istringstream iss(stmp);
                iss >> dist >> a1 >> a2;
                indexa1[j] = a1;
                indexa2[j] = a2;
                //only listed distance is loaded.
                try {
                    seq->distances->layers = proc_id;
                    seq->distances->id = i;
                    seq->distances->helper = dist;
                    if (a1 < length_s && a2 < length_s) {
                        (*seq->distances)(a1, a2) = dist;
                        (*seq->distances)(a2, a1) = dist;
                    } else
                        cerr << proc_id << " ::" << stmp << ":: " << seq->pdbid
                            << " dist" << "(" << a1 << "," << a2 << ")=" << dist << endl;
                    //if (!proc_id && exist_test)
                    //  cerr << (*seq->distances)(a1,a2) << "(" << a1 << "," << a2 << ") " << seq->p_name << endl;
                    int d = 0;
                    for (int k = 0; !iss.eof(); k++) {
                        iss >> tmp;
                        if (pairwise_column_flags[k] == 1) {
                            (*seq->obs_pairwise_features)(a1, a2, d++) = tmp; //cerr << tmp <<" ";
                        }
                    } //cerr << endl;
                } catch (bad_exception e) {
                    cerr << proc_id << " " << seq->pdbid << " dist" << "(" << a1 << "," << a2 << ")=" << dist << endl;
                    exit(0);
                }

            }
        }
        bool seq_used = false;
        if (split_file.length() && run_mode==_run_mode::training) {
            if (exist_train && length_s >= 40 && length_s <= 650) {
                trainData.push_back(seq);
                seq_used = true;
                if (proc_id == 1) cerr << " Inserting training " << i << " length=" << seq->length_contact << endl;
            } else if (exist_test && length_s >= 40 && length_s <= 650) {
                if (proc_id == 1) cerr << " Inserting testing " << i << " length=" << seq->length_contact << endl;
                testData.push_back(seq);
                seq_used = true;
            } else {
                delete seq;
                continue;
            }
        } else {
            if (i % num_procs != proc_id && test_mode == 0) {
                delete seq;
                continue;
            } else if (length_s >= 40 && length_s <= 650) {
#ifdef _TESTLOAD
                delete seq;
                continue;
#else            
                DATA.push_back(seq);
                seq_used = true;
#endif

            }
        }
        if (seq_used)
            try {
                seq->datah5 = new Bioh5;
                if(run_mode==_run_mode::training)
                        seq->Pnnloadmi(seq->pdbid);
                else{
                    string pdbid=seq->pdbid.substr(0,seq->pdbid.length()-1);
                    
                    seq->Pnnloadmi(seq->pdbid,pdbid+".h5");
                }
                /*
                for (int j = 0; j < length_contact; j++) {
                    a1 = indexa1[j];
                    a2 = indexa2[j];
                    if (a1 >= 0 && a2 >= 0)
                        for (int di = 0; di < dim_pairwise_features; di++)
                            (*seq->obs_pairwise_features)(a1, a2, di) = seq->datah5->mipow[di](a1, a2);
                }*/
                for (int a1 = 0; a1 < seq->length_seq; a1++)
                    for (int a2 = a1 + 6; a2 < seq->length_seq; a2++)
                        for (int di = 0; di < dim_pairwise_features; di++)
                            (*seq->obs_pairwise_features)(a1, a2, di) = seq->datah5->mipow[di](a1, a2);
                string pdbid = seq->pdbid.substr(0, seq->pdbid.length() - 1);
                Matrix3<double> savelabel(seq->length_seq, seq->length_seq, 16, 0); //(*distances)(t, u)
                for (int i = 0; i < seq->length_seq; i++)
                    for (int j = i + 1; j < seq->length_seq; j++) {
                        savelabel[i][j][0] = (*seq->distances)(i, j);
                    }
                if(run_mode==_run_mode::training)
                        savelabel.writeh5(pdbid + ".h5", "/distance");
                //savelabel.~Matrix3();
                Matrix3<double> savefeature(seq->length_seq, seq->length_seq, 2048, 0);
                
                //*
                for (int i = 0; i < seq->length_seq; i++) {
                    for (int j = i + 1; j < seq->length_seq; j++) {
                        vector<pair<int, int> > wi1 = seq->find_feature_window(i, j, window_size, seq->length_seq);
                        int offset = 0;
                        int fp = 0;
                        int dim_per_win = dim_one_pos;
                        for (unsigned int k = 0; k < wi1.size(); k++) {
                            if (wi1[k].first < 0) { //padding at 
                                for (int di = 0; di < dim_one_pos; di++) {
                                    savefeature[i][j][fp++] = -1;
                                    savefeature[i][j][fp++] = -1;
                                }
                            } else {
                                for (int di = 0; di < dim_one_pos; di++) {
                                    savefeature[i][j][fp++] = seq->obs_feature[wi1[k].first][di];
                                    savefeature[i][j][fp++] = seq->obs_feature[wi1[k].second][di];
                                }
                            }
                        }
                        offset = fp;
                        dim_per_win = dim_pairwise_features;
                        wi1 = seq->find_feature_window_pair(i, j, pair_window_size, seq->length_seq);
                        int dim_allpair = 11 + 10 + 3;
                        for (unsigned k = 0; k < wi1.size(); k++) {
                            if (wi1[k].first < 0) { //padding at 
                                for (int di = 0; di < dim_allpair; di++) { //miroot[k](i, j);0-10, mipow[k](i, j);0-9,miLocalMax[k](i, j);0-2
                                    savefeature[i][j][fp++] = -1;
                                }
                            } else {
                                for (int di = 0; di < 11; di++) {
                                    int a1 = wi1[k].first;
                                    int a2 = wi1[k].second;
                                    savefeature[i][j][fp++] = seq->datah5->mipow[di](a1, a2);
                                }
                                for (int di = 0; di < 10; di++) {
                                    int a1 = wi1[k].first;
                                    int a2 = wi1[k].second;
                                    savefeature[i][j][fp++] = seq->datah5->miroot[di](a1, a2);
                                }
                                for (int di = 0; di < 3; di++) {
                                    int a1 = wi1[k].first;
                                    int a2 = wi1[k].second;
                                    savefeature[i][j][fp++] = seq->datah5->miLocalMax[di](a1, a2);
                                }
                            }
                        }
                    }
                }
                if(run_mode==_run_mode::training)
                        savefeature.writeh5(pdbid + ".h5", "/pair_window_feature");
                delete seq->datah5;
            } catch (int e) {
                fprintf(stderr, "reading h5 error\n");
            } catch (exception e) {
                fprintf(stderr, "Exception %s %s\n", seq->pdbid.c_str(), e.what());
            }
    }
    //fprintf(stderr,"Finished reading\n");
    dim_one_pos = real_dim_one_pos;
    trn_in.close();
    nnz_param = num_states * num_gates + dim_features*num_gates;
    if (!proc_id) {
        cerr << "num_gates=" << num_gates << endl;
        cerr << "num_params=" << num_params << "; nnz_param=" << nnz_param
                << "; num_states=" << num_states << "; dim_features=" << dim_features << endl;
    }
    num_data = DATA.size();
    if (!proc_id) {
        cerr << "total_data=" << total_data << endl;
    }
    int ltest = 0, ltrain = 0;
    if (split_file.length() && run_mode==_run_mode::training ) {
        for (int i = 0; i < trainData.size(); i++)
            ltrain += trainData[i]->length_contact;
        for (int i = 0; i < testData.size(); i++)
            ltest += testData[i]->length_contact;
    } else if(run_mode==_run_mode::training) {
        for (int i = 0, idx = 0; i < num_data; i += 1, idx++) {
            if (test_mode == 1)
                testData.push_back(DATA[i]);
            else if (num_test_set > 0) {
                if (i >= (total_data - num_test_set) / num_procs) {
                    testData.push_back(DATA[i]);
                    ltest += testData[testData.size() - 1]->length_contact;
                } else {
                    trainData.push_back(DATA[i]);
                    ltrain += trainData[trainData.size() - 1]->length_contact;
                }
            } else if (idx % cvalid_total == cvalid_n) {
                testData.push_back(DATA[i]);
                ltest += testData[testData.size() - 1]->length_contact;
            } else {
                trainData.push_back(DATA[i]);
                ltrain += trainData[trainData.size() - 1]->length_contact;
            }
            //cerr << i << " " << DATA[i]->length_seq << endl;
        }
    } else if(run_mode==_run_mode::predict){
        for (int i = 0, idx = 0; i < num_data; i++) {
            seq=DATA[i];
            if (seq->makeFeatures() != -1) {
                seq->Predict(_run_mode::predict);
            }
        }
    }
    num_tst = testData.size();
    num_data = trainData.size();
    if (proc_id == 206) {
        cerr << "DataForProc " << proc_id << ": #data=" << num_data
                << "(" << ltrain << "); #tst=" << num_tst << "(" << ltest << ")" << endl;
    }
//    MPI_Barrier(MPI_COMM_WORLD);
}

void Nnpf::showweights(void) {
    ofstream of("weights.log",ofstream::out);
    of<<setprecision(5);
    for(int i=0;i<num_states;i++){
        of<<"state "<<i<<" gate-weights ";
        for(int j=0;j<num_gates;j++){
            of<<weights[i*num_gates+j]<<" ";
        }
        of<<endl;//eatureStart = iGateStart + num_states*num_gates;
        
    }
    of<<endl;
    for(int j=0;j<num_gates;j++){
       of<<"gates "<<"j\n";
       for(int h=0;h<dim_features;h++){
           of<<weights[iFeatureStart+j*dim_features+h]<<" ";
       }
       of<<endl;
    }
    of<<endl;//eatureStart = iGateStart + num_states*num_gates;
    //num_params = iFeatureStart + dim_features*num_gates;
    of.close();
}

void Nnpf::LoadDataSVMFormat(string input) {
}

void Nnpf::CopyWeightsOut(vector<double>& w) {
    for (int l = 0; l < num_params; l++)
        w[l] = weights[l];
}

void Nnpf::CopyWeightsIn(const vector<double>& w) {
    for (int l = 0; l < num_params; l++)
        weights[l] = w[l]; //from somewher to model
}

double Nnpf::CopyGradsOut(vector<double>& g, int& nonzeroDirection, int num_consec_small_steps) {
    nonzeroDirection = 0;
    double _norm = 0;
    for (int l = 0; l < num_params; l++) {
        g[l] = grad_sum[l];
        //if (g[l]!=0)
        if (abs(g[l]) > 100) {
            if (num_consec_small_steps > 0) {
                g[l] = 0;
            }
            // if (proc_id==0 && l>30000 && l<100000) cerr << "Grad: " << g[l] << " " << l << endl;
            string s;
            //explainWeight(l,s);
            // if(proc_id==0)cerr<<"Weight "<<l<<" "<<s<<endl;
            nonzeroDirection++;
        }
        _norm += g[l] * g[l];
    }

    return _norm;
}

double Nnpf::RegularizeWeights() {
    double r = 0;
    for (int l = 0; l < num_params; l++)
        r += weights[l] * weights[l] * reg[l];
    return r;
}

void Nnpf::RegularizeGrads() {
    for (int l = 0; l < num_params; l++)
        grad[l] = -grad[l] + weights[l] * reg[l]*2;
}
