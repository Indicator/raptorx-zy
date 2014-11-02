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
#include <unistd.h>
#include <math.h>
#include <exception>
#include <stdexcept>
#include <fenv.h>

#include "PNN1.h"

#define SM (CLS / sizeof (double))
#define MHXXWS 11
#define DEFAULT_INDEXMODE 0


int confusion[30][30];
int confusion_sum[30][30];
int contactStat[30];
int contactStat_sum[30];
int sum[30];
int test_mode = 0;

#include "PnnLoad.cpp"

SEQUENCE::SEQUENCE(int length_seq, PNN1* pModel, string name) {
    m_pModel = pModel;
    p_name = name;
    this->length_seq = length_seq;
    if (test_mode == 0)
        length_contact = length_seq * length_seq / 1;
    else
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
    obj_weights = NULL;
    Rg = 2.2 * pow(length_seq + 0.0, 0.38);
    pFeatures = new Score[dim_features];
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
    delete obj_weights;
}

Score SEQUENCE::Obj() { // observed label : log-likelihood
    ComputeGates();
    ComputeVi();
    CalcPartition();

    Score obj = 0;
    for (int t = 0; t < nDataPoints; t++) {
        if (batchindex[indexmode][t] == 0)continue;
        obj += obj_weights[t] * ((*arrVi)(t, obs_label[t]) - Partition[t]);
    }
    delete arrVi;
    arrVi = NULL;
    //if (proc_id==0) cerr << "obj=" << obj << "; Partition=" << Partition << endl;
    return obj;
}

unsigned int SEQUENCE::getlabel(const double & dist) {
    unsigned int max_label = m_pModel->num_labels;
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

Score SEQUENCE::MAP() { // Posterior Decoding (Marginal Probability Decoder)
    //memset(pred, 0, sizeof(int)*20);
    Score bestScore, obj = 0;
    Score *vi2;
    int i, t, bestState = 0;

    CalcPartition();
    for (t = nDataPoints - 1; t >= 0; t--)
        obj += obj_weights[t] * ((*arrVi)(t, obs_label[t]) - Partition[t]);
    pred_score.resize(nDataPoints);
    for (t = nDataPoints - 1, vi2 = &((*arrVi)(t, 0)); t >= 0; t--, vi2 -= arrVi->cols) {
        bestState = 0;
        bestScore = vi2[0];
        pred_score[t] = 0;
        for (int ll = 0; ll <= 3; ll++)
            pred_score[t] += exp(vi2[ll] - Partition[t]);
        for (i = 1; i < num_states; i++) {
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
                    t2 < (t < lastt ? SM : nDataPoints % SM); t2++, vi2 += arrVi->cols) {

                for (i2 = 0; i2 < (i < lasti ? SM : num_states % SM); i2++) {
                    if (batchindex[indexmode][t + t2] == 0)continue;
                    score = vi2[i2];
                    LogScore_PLUS_EQUALS(P2[t2], score);
                    //if (proc_id==0) cerr << "  Partition(" << t << "," << state << ")=" << score << " : " << Partition[t] << endl;
                }
            }
    //cerr << endl;
}

// Calculate phi_\theta(x_i, y)

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
                            if (batchindex[indexmode][pos + pos2] == 0)continue;

                            vi2[l2] += pW2[g2] * gates2[g2];
                            // if (vi2[l2]>10000)cerr<<" ComputeVi: Vi("<<pos+pos2<<", "<<l+l2<<")= W("<<l+l2<<","<<g+g2<<") * gates("<<pos+pos2<<","<<g+g2<<"):: "<<vi2[l2]<<" += "<<pW2[g2]<<" * "<<gates2[g2]<<endl; 
                        } // exit(0);
                    }
            }

    //for (pos=0; pos<length_contact; pos++)
    //  for (l=0; l<num_states; l++)
    //    cerr << "  ComputeVi(" << pos << ", " << l << ")=" << (*arrVi)( pos, l) << endl;
}

void SEQUENCE::buildbatch(double p) {
    //p=0.6;
    if (batchindex.size() == 0) {
        vector<int> a(nDataPoints, 0);
        batchindex.push_back(a);
        vector<int> b(nDataPoints, 1);
        batchindex.push_back(b);
        nlabel.resize(m_pModel->num_labels);
        fill(nlabel.begin(), nlabel.end(), 0);
        for (int i = 0; i < nDataPoints; i++)
            nlabel[obs_label[i]]++;

    }
    {
        //phase 1, 
        //(nlabel/nDataPoints)^p
        fill(batchindex[0].begin(), batchindex[0].end(), 0); // clear each time.
        vector<int> ngot(m_pModel->num_labels, 0);
        vector<int> maxgot(m_pModel->num_labels, 0);
        vector<int> shff(nDataPoints); //for(int i=0;i<nDataPoints;i++)shff[i]=i;
        shff[0] = 0;
        for (int i = 1; i < nDataPoints; i++) {
            int j = round(drand48() * i);
            shff[i] = i;
            if (j != i) {
                int ss = shff[i];
                shff[i] = shff[j];
                shff[j] = ss;
            }
        }
        for (int i = 0; i < m_pModel->num_labels; i++) {
            maxgot[i] = pow(nlabel[i]*1.0, p) + 1;
            if (proc_id == 0)cerr << i << ":" << nlabel[i] << ":" << maxgot[i] << "\t";
        }
        if (proc_id == 0)cerr << "\n";
        for (int j = 0; j < nDataPoints; j++) {
            int i = shff[j];
            if (ngot[obs_label[i]] < maxgot[obs_label[i]])
                ngot[obs_label[i]]++, batchindex[0][i] = 1;
        }
    }
}

PairwiseSequence::PairwiseSequence(int len, PNN1* pModel, string name)
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
    if (obs_label == NULL)
        obs_label = new int[length_contact];
    int df = length_contact * 2;
    //cerr << proc_id << "@ df=" << df << ", len_contact=" << length_contact << ", gaps_size=" << gaps.size();
    _features = new int[df];

    int totalContact = 0;
    int negativeLabel = 0;
    index_t = new int*[length_seq];
    index_t[0] = new int[length_seq * length_seq];
    memset(index_t[0], 0, length_seq * length_seq * sizeof (int));
    for (int ii = 1; ii < length_seq; ii++)
        index_t[ii] = index_t[ii - 1] + length_seq;
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

        for (int d = 1; d <= dim_pairwise_features; d++)
            (*pairwise_features)(d, t) = (*obs_pairwise_features)(offset1, offset2, d - 1);
        //set dpf to 0, to drop pair feat.
    }
    delete obs_pairwise_features;
    obs_pairwise_features = NULL;
    obj_weights = new double[nDataPoints];
    for (int t = 0; t < nDataPoints; t++)
        obj_weights[t] = 1.0;
    indexmode = DEFAULT_INDEXMODE;
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
    int idx = iif / m_pModel->dim_one_pos; //idx >0 is window index
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
        ret = obs_feature[offset1 + idx][iif % m_pModel->dim_one_pos]; // idx = feasible position, return the feature of that position
    } else if (i < window_size / 2 * 2 + (2 * window_size * dim_one_pos) ){
            //dim_features - 1 - dim_pairwise_features) { // right position window
        idx -= m_pModel->window_size;
        // cerr << idx << " - " << i << "*"<<dim_features <<" : " 
        //      << i%m_pModel->dim_one_pos<<" : " << length_seq 
        //      << " : " << offset1 << "  : " << offset2;
        if (offset2 + idx < 0 || offset2 + idx >= length_seq) return 0; // training Secondary Structure: allow termial residues
        ret = obs_feature[offset2 + idx][iif % m_pModel->dim_one_pos]; // feature of
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
    vector<int> check(m_pModel->num_params, 0);
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
                for (g2 = 0, pW2 = m_pModel->GetWeightGAddr(g, k),
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
                if (batchindex[indexmode][t + t2] == 0)continue;
                int center = centerMap[t + t2];
                int cofactor = rIdxMap[t + t2];
                for (g2 = 0; g2 < (g < lastg ? SM : num_gates % SM); g2++) {
                    gate = g + g2; //pos=t+t2;
                    //pW2 = m_pModel->GetWeightGAddr(gate, 0);
                    pW2 = m_pModel->weights;
                    output = (*output_center)(gate, center) + (*output_cofactor)(gate, cofactor);
                    //windowed pairfeature
                    int a = center;
                    int b = cofactor;
                    const int& pair_window_size=m_pModel->pair_windowsize;
                    
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
                        int window_status_index = m_pModel->iFeatureStart + gate * dim_features + window_size / 2 * 2
                                + (2 * window_size * dim_one_pos)
                                + (pair_window_size * 2 - 1) * dim_pairwise_features;
                        int tawi_fi = window_status_index + wi_lin_a;
                        int tbwi_fi = window_status_index + wi_lin_b; //window status
#ifdef _check_grad_1
                        if (wi_lin_b >= 2 * window_size - 1) throw -1;
                        m_pModel->checktimes(check, tawi_fi, length_contact);
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
                            m_pModel->checktimes(check, tbwi_fi, length_contact);
#endif
                        }
                        if (tawi >= 0)
                            for (int p = 0; p < dim_pairwise_features; p++) {
                                int weight_index = m_pModel->iFeatureStart + gate * dim_features + window_size / 2 * 2
                                        + (2 * window_size * dim_one_pos)
                                        + wi_lin_a * dim_pairwise_features + p;
                                output += pW2[weight_index] * (*pairwise_features)(p, tawi);
                                //left window 
#ifdef _check_grad_1
                                m_pModel->checktimes(check, weight_index, length_contact);
#endif
                            }
                        if (wi == 0)continue; // (0,0) should be counted only once.
                        if (tbwi >= 0)
                            for (int p = 0; p < dim_pairwise_features; p++) {
                                int weight_index = m_pModel->iFeatureStart + gate * dim_features + window_size / 2 * 2
                                        + (2 * window_size * dim_one_pos)
                                        + wi_lin_b * dim_pairwise_features + p;
                                output += pW2[weight_index] * (*pairwise_features)(p, tbwi);
#ifdef _check_grad_1
                                m_pModel->checktimes(check, weight_index, length_contact);
#endif
                            }
                    }

                    gates2[g2] = Gate(output);
                    //if (pos=30) cerr << "   gate("<< gate <<"," << pos <<")= " << gates2[g2] << " " << output << endl;
                }
            }
#ifdef _check_grad_1
    cerr << "check grad ";
    for (int i = m_pModel->iFeatureStart + window_size / 2 * 2
            + (2 * window_size * dim_one_pos); i < m_pModel->num_params; i++)
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

Score PairwiseSequence::Predict() {
    indexmode = 1;
    ComputeGates();
    ComputeVi();
    Score obj = MAP();
    ComputeTestAccuracy();
    indexmode = DEFAULT_INDEXMODE;
    return obj;
}

Score PairwiseSequence::ComputeGradient(bool bCalculateGate) {
    const int& gstart = m_pModel->iGateStart;
    const int& window_size = m_pModel->window_size;
    const int& pair_window_size=m_pModel->pair_windowsize;
    ScoreMatrix* prob_weight_sum = new ScoreMatrix(length_contact,
            num_gates, "prob_weight_sum");
    // ScoreMatrix* prob_weight_sum_emp = new ScoreMatrix(length_contact,
    //            num_gates, "prob_weight_sum_emp");
    ScoreMatrix* probs = new ScoreMatrix(length_contact, num_states, "probs");
    double *pGrad2, *pGate2, *pW2, *probs2;
    Score *pPWS2, out, prob_out;
    int weightIdx, p, t, t2, g, g2, l, l2, k, k2, kk,
            lasttseq = length_seq / SM*SM, lastt = length_contact / SM * SM,
            lastg = num_gates / SM*SM, lastl = num_states / SM * SM,
            lastk = (dim_features - 1 - dim_pairwise_features) / SM * SM;

    ScoreMatrix* delta_buffer = new ScoreMatrix(num_gates,
            length_seq, "delta_buffer");
    ScoreMatrix* delta_buffer_cofactor = new ScoreMatrix(num_gates,
            length_seq, "delta_buffer_cofactor");
    ScoreMatrix* feature_buffer = new ScoreMatrix(dim_features,
            length_seq, "feature_buffer");
    ScoreMatrix* feature_buffer_cofactor = new ScoreMatrix(dim_features,
            length_seq, "feature_buffer_cofactor");
    Score *pdb2, *pdbc2, *pfb2, *pfbc2;

    // Compute Gate, Vi and partition function;
    struct timeval ts, te;
    gettimeofday(&ts, 0);
    //if (bCalculateGate) {
    //cerr << " grad--Gates" << endl;
    ComputeGates();
    ComputeVi();
    //}

    CalcPartition();
    /////////////////////////////////Test for Online Learning /////////////////
    Score s, obj = 0;
    for (t = 0; t < length_contact; t++) {
        if (obs_label[t] < 0)continue;
        s = (*arrVi)(t, obs_label[t]);
        obj += s - Partition[t];
    }
    ////////////////////////////////////////////////////////////////////////////

    if (proc_id == 0) {
        gettimeofday(&te, 0);
        double dif = difftime(te.tv_sec, ts.tv_sec);
        //cerr << "ComputeGateViPartition: " << dif*1000+te.tv_usec/1000-ts.tv_usec/1000 << " miliseconds." << endl;
        gettimeofday(&ts, 0);
    }
    // compute the empirical values
    prob_weight_sum->Fill(0);
    for (t = 0; t < length_contact; t++) {
        if (obs_label[t] < 0)continue;
        if (batchindex[indexmode][t] == 0)continue;
        weightIdx = gstart + obs_label[t] * num_gates;
        for (g = 0, pW2 = &m_pModel->weights[weightIdx], pGrad2 = &m_pModel->grad[weightIdx];
                g < num_gates; g++) {
            out = (*gates)(t, g);
            pGrad2[g] += obj_weights[t] * out; // label-based gates weights
            (*prob_weight_sum)(t, g) += obj_weights[t] * pW2[g]*(1.0 - out) * out; // Gate weights; h'(x)=[1-h(x)]*h(x)=(1.0-out)*out
        }
    }
    for (g = 0; g < num_gates; g++) {
        for (t = 0; t < length_contact; t++) {
            if (batchindex[indexmode][t] == 0)continue;
            int center = centerMap[t], cofactor = rIdxMap[t];
            (*delta_buffer)(g, center) += (*prob_weight_sum)(t, g);
            (*delta_buffer_cofactor)(g, cofactor) += (*prob_weight_sum)(t, g);
        }
    }
    //for (k = 0; k < dim_features - 1; k++) {
    for (k = 0; k < window_size / 2 * 2 + (2 * window_size * dim_one_pos) ; k++) {
        for (t = 0; t < length_seq; t++) {
            //if (k < window_size / 2 || (k >= window_size / 2 * 2 && k < dim_features / 2 + window_size / 2 - 2)) {
            //if (k < window_size / 2 || (k >= window_size / 2 * 2 && k < dim_features / 2 + window_size / 2 - 2)) {
            if (k < window_size / 2 || (k >= window_size / 2 * 2 && (k - window_size / 2 * 2) < window_size * dim_one_pos)) {
                int idx = IdxMapCenter[t];
                if (idx < 0) {
                    continue;
                }
                (*feature_buffer)(k, t) = getFeatures(idx, k);
            } else {
                int idx = IdxMapCofactor[t];
                if (idx < 0) continue;
                (*feature_buffer_cofactor)(k, t) = getFeatures(idx, k);
            }
        }
    }
    for (g = 0; g < num_gates; g += SM)
        //for (k = 0; k < dim_features - dim_pairwise_features - 1; k += SM)
        for (k = 0; k < window_size / 2 * 2 + (2 * window_size * dim_one_pos) ; k += SM)
        
            for (t = 0; t < length_seq; t += SM)
                for (g2 = 0, pdb2 = &((*delta_buffer)(g, t)),
                        pdbc2 = &((*delta_buffer_cofactor)(g, t)),
                        pGrad2 = &m_pModel->grad[m_pModel->iFeatureStart + g * dim_features];
                        g2 < (g < lastg ? SM : num_gates % SM); // Terminiting condition
                        g2++, pdb2 += delta_buffer->cols,
                        pdbc2 += delta_buffer_cofactor->cols,
                        pGrad2 += dim_features) // Loop increamental
                    for (k2 = 0, pfb2 = &((*feature_buffer)(k, t)),
                            pfbc2 = &((*feature_buffer_cofactor)(k, t));
                            k2 < (k < lastk ? SM : (dim_features - 1 - dim_pairwise_features) % SM);
                            k2++, pfb2 += feature_buffer->cols,
                            pfbc2 += feature_buffer_cofactor->cols) { // 3 for loops together 
                        kk = k + k2;
                        for (t2 = 0; t2 < (t < lasttseq ? SM : length_seq % SM); t2++) {
                            //if (kk < window_size / 2 || (kk >= window_size / 2 * 2 && kk < dim_features / 2 + window_size / 2 - 2))
                            if (kk < window_size / 2 || (kk >= window_size / 2 * 2 && (kk - window_size / 2 * 2) < window_size * dim_one_pos))
                                //dim_features = window_size / 2 * 2 //+ (2 * window_size * dim_one_pos) //+  (window_size*2 -1) + n_pairwise *( window_size*2 -1) 
                                //+ 1;
                                pGrad2[kk] += pdb2[t2] * pfb2[t2];
                            else
                                pGrad2[kk] += pdbc2[t2] * pfbc2[t2];
                        }
                    }
    for (g = 0; g < num_gates; g++)
        for (t = 0, pGrad2 = &m_pModel->grad[m_pModel->iFeatureStart + g * dim_features];
                t < length_contact; t++) {
            if (batchindex[indexmode][t] == 0)continue;
            //  for (p = 0; p < dim_pairwise_features + 1; p++)
            //pGrad2[dim_features - dim_pairwise_features - 1 + p] +=
            //    (*prob_weight_sum)(t, g) * (*pairwise_features)(p, t);
        }
    if (proc_id == 0) {
        gettimeofday(&te, 0);
        double dif = difftime(te.tv_sec, ts.tv_sec);
        //cerr << "Gradient Empirical: " << dif*1000+te.tv_usec/1000-ts.tv_usec/1000 << " miliseconds." << endl;
        gettimeofday(&ts, 0);
    }

    ScoreMatrix prob_weight_sum_1 = *prob_weight_sum;
    ScoreMatrix* prob_weight_sum_emp = &prob_weight_sum_1;
    /*
      for (g = 0; g < num_gates; g++)
       // for (t = 0, pGrad2 = &m_pModel->grad[m_pModel->iFeatureStart + g * dim_features];
         for (t = 0, pGrad2 = &m_pModel->grad[0];
                t < length_contact; t++) {
            //for (p = 0; p < dim_pairwise_features + 1; p++) { //zy, update for windowed-pair-feature
            //    pGrad2[dim_features - dim_pairwise_features - 1 + p] -=
            //            (*prob_weight_sum)(t, g) * (*pairwise_features)(p, t);
            //}
            if(batchindex[indexmode][t]==0)continue;
            //int a, b;
            //get_contact_index(t, a, b);
               int a = centerMap[t];
                int b = rIdxMap[t ];
            for (int wi = -window_size / 2; wi <= window_size / 2; wi++) {
                int fwi = wi + window_size / 2; //0..window_size-1
                int awi = a + wi;
                int bwi = b + wi;
                int tawi = get_contact_1(awi, b); //-1 if out of range
                int tbwi = get_contact_1(a, bwi); //-1 if out of range
                if(wi==0 && (tawi!=t || tbwi!=t))throw -1;
                // no awi=0

                int wi_lin_a = fwi;
                int wi_lin_b = window_size + (wi < 0 ? fwi : fwi - 1);
                int window_status_index = m_pModel->iFeatureStart + g * dim_features +window_size / 2 * 2
                        + (2 * window_size * dim_one_pos)
                        + (window_size * 2 - 1) * dim_pairwise_features;
                int tawi_fi = window_status_index + wi_lin_a;
                int tbwi_fi = window_status_index + wi_lin_b;

                if (tawi < 0) {
                    pGrad2[tawi_fi] += (*prob_weight_sum)(t, g) * (-1);
                } else
                    pGrad2[tawi_fi] += (*prob_weight_sum)(t, g) * 1;

                if (wi != 0) {
                    if (tbwi < 0) {
                        pGrad2[tbwi_fi] += (*prob_weight_sum)(t, g) * (-1);
                    } else
                        pGrad2[tbwi_fi] += (*prob_weight_sum)(t, g) * 1;

                }
                if (tawi >= 0)
                    for (int p = 0; p < dim_pairwise_features; p++) {
                        int weight_index = m_pModel->iFeatureStart +g * dim_features + window_size / 2 * 2
                                + (2 * window_size * dim_one_pos)
                                + wi_lin_a * dim_pairwise_features + p;
                        pGrad2[weight_index] += (*prob_weight_sum)(t, g) * (*pairwise_features)(p, tawi);

                    }
                if (wi == 0)continue; // (0,0) should be counted only once.
                if (tbwi >= 0)
                    for (int p = 0; p < dim_pairwise_features; p++) {
                        int weight_index = m_pModel->iFeatureStart +g * dim_features + window_size / 2 * 2
                                + (2 * window_size * dim_one_pos)
                                + wi_lin_b * dim_pairwise_features + p;
                        pGrad2[weight_index] += (*prob_weight_sum)(t, g) * (*pairwise_features)(p, tbwi);

                    }
            }
            
        }
 
     */

    // compute the expected values
    prob_weight_sum->Fill(0);
    for (t = 0; t < length_contact; t++)
        for (l = 0; l < num_states; l++) {
#ifdef _WARN            
            if ((*arrVi)(t, l) - Partition[t] > 500)
                printf("exp overflow at pnn1.cpp:821\n");
#endif                      
            if (batchindex[indexmode][t] == 0)continue;
            (*probs)(t, l) = obj_weights[t] * exp((*arrVi)(t, l) - Partition[t]);
        }
    // out=(*gates)(t, g); prob_out = prob(t, l)*out; m_pModel->grad[l, g] -= prob_out; (*prob_weight_sum)(t,g) += prob_out*weightsL(l, g)*(1.0-out);

    for (t = 0; t < length_contact; t += SM)
        for (l = 0; l < num_states; l += SM)
            for (g = 0; g < num_gates; g += SM)
                for (t2 = 0, probs2 = &((*probs)(t, l)),
                        pPWS2 = &((*prob_weight_sum)(t, g)),
                        pGate2 = &((*gates)(t, g));
                        t2 < (t < lastt ? SM : length_contact % SM);
                        t2++, probs2 += probs->cols,
                        pPWS2 += prob_weight_sum->cols,
                        pGate2 += gates->cols) {

                    for (l2 = 0, pW2 = m_pModel->GetWeightLAddr(l, g),
                            pGrad2 = &m_pModel->grad[gstart + l * num_gates + g];
                            l2 < (l < lastl ? SM : num_states % SM);
                            l2++, pW2 += num_gates, pGrad2 += num_gates) {
                        for (g2 = 0; g2 < (g < lastg ? SM : num_gates % SM); g2++) {
                            if (batchindex[indexmode][t + t2] == 0)continue;
                            prob_out = probs2[l2] * pGate2[g2];
                            pGrad2[g2] -= prob_out;
                            pPWS2[g2] += prob_out * pW2[g2] * (1.0 - pGate2[g2]);
                        }
                    }
                }
    delta_buffer->Fill(0);
    delta_buffer_cofactor->Fill(0);
    for (g = 0; g < num_gates; g++) {
        for (t = 0; t < length_contact; t++) {
            if (batchindex[indexmode][t] == 0)continue;
            int center = centerMap[t], cofactor = rIdxMap[t];
            (*delta_buffer)(g, center) += (*prob_weight_sum)(t, g);
            (*delta_buffer_cofactor)(g, cofactor) += (*prob_weight_sum)(t, g);
        }
    }
    for (g = 0; g < num_gates; g += SM)
        //for (k = 0; k < dim_features - dim_pairwise_features - 1; k += SM)
        for (k = 0; k < window_size / 2 * 2 + (2 * window_size * dim_one_pos) ; k += SM)
            for (t = 0; t < length_seq; t += SM) {
                for (g2 = 0, pdb2 = &((*delta_buffer)(g, t)),
                        pdbc2 = &((*delta_buffer_cofactor)(g, t)),
                        pGrad2 = &m_pModel->grad[m_pModel->iFeatureStart + g * dim_features];
                        g2 < (g < lastg ? SM : num_gates % SM);
                        g2++, pdb2 += delta_buffer->cols,
                        pdbc2 += delta_buffer_cofactor->cols,
                        pGrad2 += dim_features)
                    for (k2 = 0, pfb2 = &((*feature_buffer)(k, t)),
                            pfbc2 = &((*feature_buffer_cofactor)(k, t));
                            k2 < (k < lastk ? SM : (dim_features - 1 - dim_pairwise_features) % SM);
                            k2++, pfb2 += feature_buffer->cols,
                            pfbc2 += feature_buffer_cofactor->cols) {
                        kk = k + k2;
                        for (t2 = 0; t2 < (t < lasttseq ? SM : length_seq % SM); t2++) {
                            if (batchindex[indexmode][t + t2] == 0)continue;
                            //if (kk < window_size / 2 || (kk >= window_size / 2 * 2 && kk < dim_features / 2 + window_size / 2 - 2))
                            if (kk < window_size / 2 || (kk >= window_size / 2 * 2 && (kk-window_size/2*2) < window_size*dim_one_pos   ))                                
                                // left of pair feature, 1. window status, 2. features, window_size/2*2 ..
                                pGrad2[kk] -= pdb2[t2] * pfb2[t2];
                            else
                                pGrad2[kk] -= pdbc2[t2] * pfbc2[t2];
                        }
                    }
            }
#ifdef _check_grad 
    vector<int> check(m_pModel->num_params, 0);
#endif
    for (g = 0; g < num_gates; g++)
        // for (t = 0, pGrad2 = &m_pModel->grad[m_pModel->iFeatureStart + g * dim_features];
        for (t = 0, pGrad2 = &m_pModel->grad[0];
                t < length_contact; t++) {
            //for (p = 0; p < dim_pairwise_features + 1; p++) { //zy, update for windowed-pair-feature
            //    pGrad2[dim_features - dim_pairwise_features - 1 + p] -=
            //            (*prob_weight_sum)(t, g) * (*pairwise_features)(p, t);
            //}
            if (batchindex[indexmode][t] == 0)continue;
            //int a, b;
            //get_contact_index(t, a, b);
            int a = centerMap[t];
            int b = rIdxMap[t ];
            
            for (int wi = -pair_window_size / 2; wi <= pair_window_size / 2; wi++) {
                int fwi = wi + pair_window_size / 2; //0..window_size-1
                int awi = a + wi;
                int bwi = b + wi;
                int tawi = get_contact_1(awi, b); //-1 if out of range
                int tbwi = get_contact_1(a, bwi); //-1 if out of range
                if (wi == 0 && (tawi != t || tbwi != t))throw -1;
                // no awi=0

                int wi_lin_a = fwi;
                int wi_lin_b = pair_window_size + (wi < 0 ? fwi : fwi - 1);
                int window_status_index = m_pModel->iFeatureStart + g * dim_features + window_size / 2 * 2
                        + (2 * window_size * dim_one_pos)
                        + (pair_window_size * 2 - 1) * dim_pairwise_features;
                int tawi_fi = window_status_index + wi_lin_a;
                int tbwi_fi = window_status_index + wi_lin_b;

                if (tawi < 0) {
                    pGrad2[tawi_fi] -= ((*prob_weight_sum)(t, g) - prob_weight_sum_1(t, g)) * (-1);
                } else
                    pGrad2[tawi_fi] -= ((*prob_weight_sum)(t, g) - prob_weight_sum_1(t, g)) * 1;
#ifdef _check_grad_1
                m_pModel->checktimes(check, tawi_fi, length_contact);
#endif
                if (wi != 0) {
                    if (tbwi < 0) {
                        pGrad2[tbwi_fi] -= ((*prob_weight_sum)(t, g) - prob_weight_sum_1(t, g))* (-1);
                    } else
                        pGrad2[tbwi_fi] -= ((*prob_weight_sum)(t, g) - prob_weight_sum_1(t, g)) * 1;
#ifdef _check_grad_1
                    m_pModel->checktimes(check, tbwi_fi, length_contact);
#endif
                }
                if (tawi >= 0)
                    for (int p = 0; p < dim_pairwise_features; p++) {
                        int weight_index = m_pModel->iFeatureStart + g * dim_features + window_size / 2 * 2
                                + (2 * window_size * dim_one_pos)
                                + wi_lin_a * dim_pairwise_features + p;
                        pGrad2[weight_index] -= ((*prob_weight_sum)(t, g) - prob_weight_sum_1(t, g)) * (*pairwise_features)(p, tawi);
#ifdef _check_grad_1
                        m_pModel->checktimes(check, weight_index, length_contact);
#endif
                    }
                if (wi == 0)continue; // (0,0) should be counted only once.
                if (tbwi >= 0)
                    for (int p = 0; p < dim_pairwise_features; p++) {
                        int weight_index = m_pModel->iFeatureStart + g * dim_features + window_size / 2 * 2
                                + (2 * window_size * dim_one_pos)
                                + wi_lin_b * dim_pairwise_features + p;
                        pGrad2[weight_index] -= ((*prob_weight_sum)(t, g) - prob_weight_sum_1(t, g)) * (*pairwise_features)(p, tbwi);
#ifdef _check_grad_1
                        m_pModel->checktimes(check, weight_index, length_contact);
#endif
                    }
            }

        }

    if (proc_id == 0) {
        gettimeofday(&te, 0);
        double dif = difftime(te.tv_sec, ts.tv_sec);
        //cerr << "Gradient Expected: " << dif*1000+te.tv_usec/1000-ts.tv_usec/1000 << " miliseconds." << endl;
    }
#ifdef _check_grad_1
    cerr << "check grad ";
    for (int i = m_pModel->iFeatureStart + window_size / 2 * 2
            + (2 * window_size * dim_one_pos); i < m_pModel->num_params; i++)
        cerr << check[i] << ",";
    cerr << endl;
#endif
    delete delta_buffer;
    delete delta_buffer_cofactor;
    delete probs,
            delete feature_buffer;
    delete feature_buffer_cofactor;
    delete prob_weight_sum;
    delete arrVi;
    arrVi = NULL;

    return obj;
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
    m_pModel->totalPos += length_contact;
    // comparison
    //ScoreMatrix dist_pred(length_seq, length_seq,"dist_pred");
    //dist_pred.Fill(0);
    for (int t = 0; t < length_contact; t++) {
        if (obs_label[t] == predicted_label[t])
            m_pModel->totalCorrect++;
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

void _LBFGS::Report(const vector<double> &theta, int iteration,
        double objective, double step_length) {
    time_t start, end;
    int num_labels = m_pModel->num_labels;
    m_pModel->CopyWeightsIn(theta);
    int tc_sum = 0, tp_sum = 0, ttT_sum = 0, tlT_sum = 0;
    
    if (iteration >= 10 && (iteration % 25 == 0)) {
        time(&start);
        for (int i = 0; i < m_pModel->num_data; i++) { // compute on training data
            m_pModel->trainData[i]->buildbatch(iteration * 1.0 / 500);
        }
        time(&end);
        if(proc_id==0){
        double dif = difftime(end, start);
        cerr << "buildbatch " << dif << " seconds. " << endl;
        }
    }
    //Save gradient
#ifdef _check_grad    
    if (proc_id == 0) {
        char buf[100];
        sprintf(buf, "grad-%d", iteration);
        ofstream fgout(buf, ofstream::out);
        fgout << setprecision(5);
        for (int i = 0; i < m_pModel->num_params; i++)
            fgout << m_pModel->weightdesc[i] << " " << m_pModel->grad_sum[i] << endl;
        fgout.close();
    }
#endif
    if (iteration > 10 && (iteration % 100 != 0))return;
    if (!proc_id) cerr << "******* iteration=" << iteration << endl;

    m_pModel->totalPos = m_pModel->totalCorrect = m_pModel->totalTriangle
            = m_pModel->legalTriangle = 0;
    for (int i = 0; i < num_labels; i++)
        for (int j = 0; j < num_labels; j++) {
            confusion[i][j] = 0;
            confusion_sum[i][j] = 0;
        }
    double test_obj = 0, test_obj_sum = 0;
    double all_contact_accu = 0;
    double allproc_contact_accu = 0;
    unsigned int total_tstseq = 0;

    for (int i = 0; i < m_pModel->num_tst; i++) {
        //cerr << "Test("<< i <<")" << endl;
        test_obj += m_pModel->testData[i]->Predict();
        delete m_pModel->testData[i]->arrVi;
        m_pModel->testData[i]->arrVi = NULL;
        all_contact_accu = all_contact_accu + m_pModel->testData[i]->contact_acc;
    }
    //*
    test_obj = -test_obj + m_pModel->RegularizeWeights();
    // */
    double norm_w = 0;
    for (int i = 0; i < theta.size(); i++)
        norm_w += theta[i] * theta[i];

    tp_sum = m_pModel->totalPos;
    tc_sum = m_pModel->totalCorrect;
    ttT_sum = m_pModel->totalTriangle;
    tlT_sum = m_pModel->legalTriangle;
    allproc_contact_accu=all_contact_accu;
    total_tstseq=m_pModel->num_tst;

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

        string m_file = m_pModel->model_file; // model file path
        char buf[100];

        time(&end);

        sprintf(buf, "%d", iteration);
        m_file += buf;
        cout << m_file << endl;
        ofstream fout(m_file.c_str());
        fout << "num_params: " << m_pModel->num_params << endl;
        fout << "num_gates: " << m_pModel->num_gates << endl;
        fout << "num_labels: " << m_pModel->num_labels << endl;
        fout << "dim_one_pos: " << m_pModel->dim_one_pos << endl;
        fout << "window_size: " << m_pModel->window_size << endl;
        fout << "dim_features: " << m_pModel->dim_features << endl;
        fout << "pair_window_size: " << m_pModel->pair_windowsize << endl;
        fout << " weights: " << endl;
        for (int i = 0; i < m_pModel->num_params; i++)
            fout << m_pModel->weights[i] << " ";
        fout << endl;
        fout.close();
        time(&start);
        double dif = difftime(end, start);
        cerr << "save model " << dif << " seconds. " << endl;
    }

    for (int i = 0; i < num_labels; i++)
        for (int j = 0; j < num_labels; j++) {
            confusion[i][j] = 0;
            confusion_sum[i][j] = 0;
        }

    m_pModel->totalPos = m_pModel->totalCorrect
            = m_pModel->totalTriangle = m_pModel->legalTriangle = 0;
    ttT_sum = m_pModel->totalTriangle;
    tlT_sum = m_pModel->legalTriangle;
    all_contact_accu=0;
    for (int i = 0; i < m_pModel->num_data; i++) { // compute on training data
        //cerr << proc_id << ": training data " << i << endl;

        m_pModel->trainData[i]->Predict();
        all_contact_accu = all_contact_accu + m_pModel->trainData[i]->contact_acc;
    
        if (proc_id == 0 && i == 0 && 0) {
            SEQUENCE* seq = m_pModel->trainData[i];
            char buf[1000];
            sprintf(buf, "%s.epad", seq->p_name.substr(0, 5).c_str());
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

    
#ifdef _no_mpi
    tp_sum = m_pModel->totalPos;
    tc_sum = m_pModel->totalCorrect;
    ttT_sum = m_pModel->totalTriangle;
    tlT_sum = m_pModel->legalTriangle;
    //confusion_sum = confusion;
#endif
    if (proc_id == 0) {
        try {

            cout << " train ACC: " << (double) tc_sum / tp_sum << "   " << tc_sum << "/" << tp_sum << endl;
        } catch (exception e) {
            cerr << "train acc tc_sum/tp_sum " << e.what() << endl;
        }
        cout << "Contact accuracy(train) " << allproc_contact_accu / total_tstseq << endl;
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

double _LBFGS::ComputeGradient(int iteration, vector<double>&g,
        const vector<double> &x, bool bCalculateGate,
        int num_consec_small_steps) {
    //if (test_mode==1) return;
    time_t start, end;double dif;
    if(proc_id==0)time(&end);
    m_pModel->CopyWeightsIn(x);
    if(proc_id==0){start=end;time(&end);dif=difftime(end,start);cerr<<"grad-copy"<<dif<<endl;}
    //cerr<<"proc "<<proc_id<<" ready\n";
if(proc_id==0){start=end;time(&end);dif=difftime(end,start);cerr<<"grad-mpibcast"<<dif<<endl;}
    memset(m_pModel->grad, 0, sizeof (double)*m_pModel->num_params);
    Score obj = 0;
    try {
        for (int i = 0; i < m_pModel->num_data; i++) {
            obj += m_pModel->trainData[i]->ComputeGradient(bCalculateGate);
        }
        obj = -obj + m_pModel->RegularizeWeights();
    } catch (exception e) {
        cerr << "ComputGrad exception" << e.what() << endl;
    }
    //if (proc_id==0) cerr << "Gradient_Obj=" << obj << endl;
if(proc_id==0){start=end;time(&end);dif=difftime(end,start);cerr<<"grad-loop"<<dif<<endl;}
    m_pModel->RegularizeGrads();

    double obj_sum = 0;
if(proc_id==0){start=end;time(&end);dif=difftime(end,start);cerr<<"grad-reduce-bcast"<<dif<<endl;}
#ifdef _no_mpi
    memcpy(m_pModel->grad_sum, m_pModel->grad, sizeof (double)*m_pModel->num_params);
    obj_sum = obj;

#endif

    int nonzeroDirection = 0;
    double _norm = m_pModel->CopyGradsOut(g, nonzeroDirection, num_consec_small_steps);
if(proc_id==0){start=end;time(&end);dif=difftime(end,start);cerr<<"grad-copyout"<<dif<<endl;}
    if (!proc_id)
        cerr << "Norm of Gradient: " << sqrt(_norm) << "; number of steep directions: " << nonzeroDirection << endl;
    return obj_sum;
}

double _LBFGS::ComputeFunction(int iteration, const vector<double> &x, int linesearch) {
    //if (test_mode==1) return 0;
    linesearch=0; //always sync
    m_pModel->CopyWeightsIn(x);
    if(linesearch==0){
    }

    double obj = 0, obj_sum = 0;
    for (int i = 0; i < m_pModel->num_data; i++) {
        //if (proc_id==0) cerr << "Obj("<< i <<"):";
        obj += m_pModel->trainData[i]->Obj();
    }
    //cerr << "Now need to RegularizeWeights" << endl;
    obj = -obj + m_pModel->RegularizeWeights();

    if(linesearch==0){
    }else{
        obj_sum=obj;
    }
#ifdef _no_mpi
    obj_sum = obj;
#endif
    return obj_sum;
}

void _LBFGS::Report(const string &s) {
    if (!proc_id) cerr << s << endl;
}

void PNN1::SetSeed() {
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

int Format;  
double regularizer;
int init_from_file;
string init_file;
int num_test_set;
string prefix_model_file;
string model_path;

void PNN1::explainWeight(int i, string & s) {
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

void PNN1::SetParameters(int model, int w_size, int n_labels, int n_gates,
        int n_local, int n_pairwise,int pair_window) {
    this->model = (MODEL) model;
    SetSeed();
    window_size = w_size; //best 13
    pair_windowsize=pair_window;
    num_labels = n_labels;
    num_states = num_labels; // S1,...,Sk
    num_gates = n_gates; //best 20
    dim_one_pos = n_local; // dim of local feature + 1 (for bias)
    dim_pairwise_features = n_pairwise;
    //zy add dimension of power of mutual informatino = 11.
    //dim_pairwise_features+=11;

    dim_features = window_size / 2 * 2
            + (2 * window_size * dim_one_pos)
            + (pair_windowsize * 2 - 1) + n_pairwise * (pair_windowsize * 2 - 1)
            + 1;

    if (proc_id == 0)
        cerr << " dim_features =" << dim_features << "=" << window_size / 2 << "*" << 2
            << "+" << window_size << "*" << dim_one_pos << "+" << 1 << endl;
    iGateStart = 0;
    iFeatureStart = iGateStart + num_states*num_gates;
    num_params = iFeatureStart + dim_features*num_gates;

    weights = new double[num_params];
    weightdesc.resize(num_params);
    for (int i = 0; i < num_params; i++) {
        string s;
        explainWeight(i, s);
        weightdesc[i] = s;
    }
    memset(weights, 0, sizeof (double)*num_params);
    for (int i = 0; i < num_params; i++)
        weights[i] = drand48();
    grad = new double[num_params];
    memset(grad, 0, sizeof (double)*num_params);
    grad_sum = new double[num_params];
    reg = new double[num_params];
    memset(reg, 0, sizeof (double)*num_params);
    double r = regularizer / num_procs; // regularization coefficients
    int i;
    for (i = 0; i < iGateStart; i++)
        reg[i] = r * 1;
    for (; i < iFeatureStart; i++)
        reg[i] = r * 1;
    for (; i < num_params; i++)
        reg[i] = r;
}

void PNN1::convertModel(string oldModel, string newModel) {
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

int PNN1::getColumns(string columns, int* column_flags) {
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

void PNN1::Initialize(int model, string model_dir, int w_size, int n_labels, 
        int n_gates, string columns, string pairwise_columns, string input_f, 
        string split_file, int pair_windowsize) {
    pair_windowsize=w_size;
    char fname[100];
    h5dir = "";
    if (init_from_file)
        sprintf(fname, "%s/%s_model.r%f_g%i_w%i_f_", model_path.c_str(), prefix_model_file.c_str(), regularizer, n_gates, w_size);
    else
        sprintf(fname, "%s/%s_model.r%f_g%i_w%i_", model_path.c_str(), prefix_model_file.c_str(), regularizer, n_gates, w_size);
    model_file = model_dir + fname;
    int n_local = 1 + getColumns(columns, column_flags);
    int n_pairwise = getColumns(pairwise_columns, pairwise_column_flags) + MHXXWS;

    SetParameters(model, w_size, n_labels, n_gates, n_local, n_pairwise, pair_windowsize);
    trainData.clear();
    testData.clear();
    //cerr << "Format is " << Format << endl;
    try {
        if (Format == 0)
            LoadData(input_f, split_file);
        else
            LoadDataSVMFormat(input_f);
    } catch (exception e) {
        cerr << "Load data exception" << e.what() << endl;
    }

    if (!proc_id) {
        cerr << "num_params = " << num_params << endl;
        if (init_from_file) {
            cerr << "  init_file: " << init_file << endl;
            ifstream fin(init_file.c_str()); // no file header
            char buf[10240];
            string tmp;
            int data;
            for (int i = 0; i < 7; i++) {
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
                    cerr << tmp << "::::" << data << endl;
                }
            }
            cerr << strlen(buf) << "  Last 10 weights are : " << endl << "    ";
            for (int i = 0; i < num_params; i++) {
                fin >> weights[i];
                if (i > num_params - 10) cerr << weights[i] << ", ";
            }
            fin.close();
            cerr << endl;
            /*
                cerr << "###&&&&*** Weights for features start at #" << iFeatureStart << endl;
                for (int g=0; g<num_gates; g+=5){
                  for (int i=0; i<window_size+3; i++)
                    cerr << GetWeightG(g,i) << ", ";
                  cerr << " .... " << GetWeightG(g,dim_features-3) << ", " 
                       << GetWeightG(g,dim_features-1) << ", " << GetWeightG(g,dim_features-1) << endl;
                }
                exit(0);
            // */
        } else {
            cerr << "nnz_param = " << nnz_param << endl;
            vector<double> w(nnz_param, 0);
            for (int i = 0; i < nnz_param; i++) {
                w[i] = (drand48() - drand48())*0.1;
                //cerr << i << ": " << w[i] << endl;
            }
            CopyWeightsIn(w);
        }
    }

    if (!proc_id) cerr << "Making features..." << endl;
    memset(contactStat, 0, sizeof (int)*30);
    memset(contactStat_sum, 0, sizeof (int)*30);
    for (int i = 0; i < num_data; i++) {
        if (!proc_id) cerr << "Making training features..." << i << trainData[i]->p_name << endl;
        try {
            if (trainData[i]->makeFeatures() == -1) {
                trainData.erase(trainData.begin() + i);
                i--, num_data--;
            }
        } catch (exception e) {
            cerr << "Makefeature training data exception" << i << " " << e.what() << endl;
        }
    }
    if (proc_id == 0 && model == contact_number) {
        //for (int i=0; i<num_labels; i++)
        //  cerr << i << ": " << contactStat_sum[i] << endl;
    }
    memset(contactStat, 0, sizeof (int)*30);
    memset(contactStat_sum, 0, sizeof (int)*30);
    for (int i = 0; i < num_tst; i++) {
        //if (!proc_id) cerr << "Making test features..." << i << testData[i]->p_name<< endl;
        if (testData[i]->makeFeatures() == -1) {
            testData.erase(testData.begin() + i);
            i--, num_tst--;
        }
    }
    /*
      if (proc_id==0 && model==contact_number){
        cerr << "\ttest Data" << endl;
        for (int i=0; i<num_labels; i++)
          cerr << i << ": " << contactStat_sum[i] << endl;
        //exit(0);
      }
      if (proc_id==1){
        cerr << "  First 10 weights are : " << endl << "    ";
        for (int i=0; i<10; i++)
          cerr << weights[i] << ", ";
        cerr << endl;
        cerr << "  Last 10 weights are : " << endl << "    ";
        for (int i=num_params-11; i<num_params; i++)
          cerr << weights[i] << ", ";
        cerr << endl;
      }
     */
}

void myunexpected() {
    cerr << "unexpected handler called " << proc_id << endl;
    throw;
}

void PNN1::LoadData(string input, string split_file) {
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
    vector<SEQUENCE*> DATA;

    bool title_line_read = false;
    double dist, tmp;
    int a1, a2, length_s, length_contact, real_dim_one_pos, gap;
    string stmp, sline;
    SEQUENCE *seq;
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
        // if(!proc_id) cerr << proc_id << " *** " << i<<":"<<length_s << ", Contact:" << length_contact << " " << stmp <<endl;
        //cerr << "begin Contact " << ":" <<length_contact<<" "<<length_s<<endl;
        //seq->indexa1=new int[length_contact];for(int ii=0;ii<length_contact;ii++)seq->indexa1[ii]=-1;
        //seq->indexa2=new int[length_contact];for(int ii=0;ii<length_contact;ii++)seq->indexa2[ii]=-1;
        vector<int> indexa1(length_contact, -1);
        vector<int> indexa2(length_contact, -1);
        //
        //cerr << "done Contact " << ":";
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
        //if(!proc_id) cerr << proc_id << ": Data of residue " << i <<endl;

        if (model == singleton) {
            for (int j = 0; j < length_s; j++) {
                getline(trn_in, stmp); //cerr << "Contact " << j << ":";
                if (!exist_train && !exist_test)
                    continue;
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
                            cerr << proc_id << " ::" << stmp << ":: " << seq->p_name
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

                        //zy Load power of mi to obs_pairwise_features and revise its length.


                        //Then fix the total length of features.

                    } catch (bad_exception e) {
                        cerr << proc_id << " " << seq->p_name << " dist" << "(" << a1 << "," << a2 << ")=" << dist << endl;
                        exit(0);
                    }

                }
            }
        }
        //cerr<<"load 1514\n";
        bool seq_used = false;
        if (split_file.length()) {
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
            //if(!proc_id) 
            // cerr << proc_id << " Inserting sequence... " << i <<endl;
            //
            if (i % num_procs != proc_id && test_mode == 0) {
                //cerr << proc_id << "deleting..." << seq << ". ";
                delete seq;
                continue;
            } else if (length_s >= 40 && length_s <= 650) {
                //if (proc_id == 6) cerr << " Inserting " << i << " length=" << seq->length_seq << endl;

                //catch (float_exception e){
                //    cerr << e.what() << " -> ";
                //}
#ifdef _TESTLOAD
                delete seq;
                continue;
#else            
                DATA.push_back(seq);
                seq_used = true;
#endif

            }
            if (seq_used)
                try {
                    seq->datah5 = new Bioh5;
                    seq->Pnnloadmi(seq->p_name);
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
                    delete seq->datah5;
                } catch (int e) {
                    fprintf(stderr, "reading h5 error\n");
                } catch (exception e) {
                    fprintf(stderr, "Exception %s %s\n", seq->p_name.c_str(), e.what());

                }
        }
        //cerr << proc_id << " done with " << i << endl;
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
    if (split_file.length()) {
        for (int i = 0; i < trainData.size(); i++)
            ltrain += trainData[i]->length_contact;
        for (int i = 0; i < testData.size(); i++)
            ltest += testData[i]->length_contact;
    } else {
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
    }
    num_tst = testData.size();
    num_data = trainData.size();
    if (proc_id == 206) {
        cerr << "DataForProc " << proc_id << ": #data=" << num_data
                << "(" << ltrain << "); #tst=" << num_tst << "(" << ltest << ")" << endl;
    }
}

void PNN1::LoadDataSVMFormat(string input) {
}

void PNN1::CopyWeightsOut(vector<double>& w) {
    for (int l = 0; l < nnz_param; l++)
        w[l] = weights[l];
}

void PNN1::CopyWeightsIn(const vector<double>& w) {
    for (int l = 0; l < nnz_param; l++)
        weights[l] = w[l]; //from somewher to model
}

double PNN1::CopyGradsOut(vector<double>& g, int& nonzeroDirection, int num_consec_small_steps) {
    nonzeroDirection = 0;
    double _norm = 0;
    for (int l = 0; l < nnz_param; l++) {
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

double PNN1::RegularizeWeights() {
    double r = 0;
    for (int l = 0; l < nnz_param; l++)
        r += weights[l] * weights[l] * reg[l];
    return r;
}

void PNN1::RegularizeGrads() {
    for (int l = 0; l < nnz_param; l++)
        grad[l] = -grad[l] + weights[l] * reg[l]*2;
}

void Usage() {
    cerr << "PNN1 [-i input_file] [-d data_dir] [-w windowSize] [-s num_labels] "
            << "[-g gates] [-m model] [-l columncs] [-p pairwise_features] "
            << "[-r regularizer] [-F format] [-f init_model_file] [-t num_test] "
            << "[-S split_file] [-M model_path] [-R newModelFile] [-P model_file_prefix]\n";
    cerr << "\t-m model: singleton, pairwise, DistancePotential or contact_number"
            << endl;
    cerr << "\t-l columns: select those columns to calculate in the singleton "
            << "features section. Note: the columns start from 0. For example, "
            << "-l0,3-6 means columns 0, 3, 4, 5 and 6." << endl;
    cerr << "\t-p pairwise_feaures : select those columns to calculate in the "
            << "pairwise feature section. Similar to -l option. Default value is -1, meaning no feature." << endl;
    cerr << "\t-F format: 0 denotes sequence format; 1 denotes svm format. Default is 0." << endl;
    cerr << "\t-t num_test: number of sequences used as test set. It's counted "
            << "from the end of the input file. If -t option is not used, the 3rd "
            << "of every 4 sequences is included in the test set by default." << endl;
    cerr << "  Example: " << endl;
    cerr << "     mpirun -np 4 ./PNN1 -i ss70 -d . -w 5 -s 3 -g 20 -l 0-39 "
            << "-r 0.001 -m singleton -t 100" << endl;
    cerr << "  This command uses 4 cores to run a 3 state secondary structure "
            << "classfier. " << endl;
    cerr << "  The window size is set to be 5, using 20 gates, 40 features for "
            << "each residue, i.e. column 0 to 39. The regularizer is set to be 0.001." << endl;
    cerr << "  ss70 file has 513 proteins sequences. We use 100 of them from the "
            << "end as the test set." << endl;
}

int main(int argc, char **argv) {
    proc_id = 0;
    num_procs = 1;
    //feenableexcept(FE_DIVBYZERO|FE_OVERFLOW);  
    //feenableexcept(FE_OVERFLOW);  
    // the command line must be:
    if (argc < 3) {
        Usage();
        return 0;
    }

    Format = 0;
    num_test_set = 0;
    regularizer = 0.5;
    init_from_file = 0;
    prefix_model_file = "";
    model_path = "model";
    extern char* optarg;
    char c = 0;
    int w_size = 9; //best 13
    int n_labels = 101, n_gates = 20; //best 20
    int model = 1;
    string model_dir = "./", split_file = "", input_f = "ss70", newModelFile = "",
            columns = "", pairwise_columns = "";
    int cvalid_total = 5;
    int cvalid_n = 0;
    int iter_start = 0;
    int pair_windowsize=3;
    while ((c = getopt(argc, argv, ":w:s:g:d:i:l:p:r:F:f:t:m:M:S:P:T:R:C:a:b:")) != EOF) {
        switch (c) {
            case 'i':
                input_f = optarg;
                break;
            case 'w':
                w_size = atoi(optarg);
                break;
            case 's':
                n_labels = atoi(optarg);
                break;
            case 'g':
                n_gates = atoi(optarg);
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
            case 'F':
                Format = atoi(optarg);
                //cerr << " Format=" << Format << "=" << optarg << endl;
                break;
            case 'r':
                regularizer = atof(optarg);
                break;
            case 'f':
                init_from_file = 1;
                init_file = optarg;
                break;
            case 't':
                num_test_set = atoi(optarg);
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
            case 'M':
                model_path = optarg;
                break;
            case 'S':
                split_file = optarg;
                break;
            case 'P':
                prefix_model_file = optarg;
                break;
            case 'T':
                test_mode = atoi(optarg);
                break;
            case 'R':
                newModelFile = optarg;
                break;
            case 'C': // crossvalidation 0-4
                cvalid_n = atoi(optarg);
                break;
            case 'a':
                iter_start = atoi(optarg);
                break;
            case 'b':
                pair_windowsize = atoi(optarg);
                break;
            default:
                Usage();
                exit(-1);
        }
    }

    //init_from_file=1;
    //init_file = "modelRg3w15";
    //init_from_file=0;
    //init_file = "";
    //input_f="trainDistance5247HMM"; // special case for pseudoIsing/PIcnRg1_w15.pbs
    //input_f="trainDistance5247CIMH"; // special case for pseudoIsing/PIcnRg1_w15.pbs
    //n_labels=12; // special case for pseudoIsing/PIcnRg1_w15.pbs
    //n_labels=17; // special case for pseudoIsing/PIcnRg1_w15.pbs

    PNN1 cnfModel;
    if (newModelFile != "") {
        cnfModel.convertModel(init_file, newModelFile);
        exit(0);
    }

    if (proc_id == 0)printf("SM %d\n", SM);
    for(int i=0;i<num_procs;i++){
        if(proc_id==i)fprintf(stderr,"proc-id %d sys-pid %d\n",proc_id,getpid());
    }
    set_unexpected(myunexpected);
    cnfModel.cvalid_n = cvalid_n;
    cnfModel.cvalid_total = cvalid_total;
    cnfModel.Initialize(model, model_dir, w_size, n_labels, n_gates, columns,
            pairwise_columns, input_f, split_file,pair_windowsize);
    if (!proc_id) {
        cerr << "Initialization Finished!" << endl;
        cerr << "num_data = " << cnfModel.num_data * num_procs << endl;
        cerr << "num_tst = " << cnfModel.num_tst * num_procs << endl;
    }

    _LBFGS* lbfgs = new _LBFGS(&cnfModel);
    vector<double> w_init(cnfModel.nnz_param, 0);
    cnfModel.CopyWeightsOut(w_init);
    //for (int i=0; i<20; i++) cerr << w_init[i]<<","; cerr << endl;//exit(0);
    int max_iter = 8000;
    //if(proc_id==0)
    if (test_mode == 1) {
        lbfgs->Report(w_init, 0, 0, 0);
    } else {
        lbfgs->LBFGS(w_init, max_iter, iter_start);
        //lbfgs->TrainOnline(w_init, max_iter);
    }
    for (int i = 0; i < cnfModel.num_data; i++)
        delete cnfModel.trainData[i];
    for (int i = 0; i < cnfModel.num_tst; i++)
        delete cnfModel.testData[i];
    return 0;
}
