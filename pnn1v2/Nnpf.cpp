xo#include <sstream>
#include "matrix3.h"
#include "pnn1.h"
ofstream cerrstr;
ofstream coutstr;
void usage() {
    if (proc_id == 0) {
        cerr << "nnpf [-h h5 feature file list ] [-f init_model_file] [-m save model] "
                << "[-w windowSize] [-s num_labels] [-p dim pairwise_features] [-r regularizer]  "
                << "[-nn 30,30] \n";
        cerr << string("For example\n") +
                "nnpf -h h5list -m testmodel -s 13 -r 0.001 -n 30,30\n";

    }
    //hook calc_deep, calc_grad
}

/**
 * Function getbasename, remove prefix path and the last suffix, return remaining.
 * @param input string with path
 * @return string
 */
string getbasename(const string& fn) {
    stringstream ss(fn);
    string w;
    while (ss.good())
        std::getline(ss, w, '/');
    stringstream ss2(w);
    std::getline(ss2, w, '.');
    while (ss2.good()) {
        string w2;
        std::getline(ss2, w2, '.');
        //cout << "w2 " << w2 << endl;
        if (ss2.good())
            w = w + w2;
    }
    return w;
}
/**
 * Make a compact representation of the features and label from batch subsampling index.
 * 
 */
void PairwiseSequence::compact_memory(int subsampling_mode) {
    //Initial new matrix
    int num_pair=0;
    // Count the number of pairs in 
    for (int i = 0; i < length_seq; i++)
        for (int j = i + mp->ds; j < length_seq; j++) {
            int t = index_t[i][j];
            if (batchindex[subsampling_mode][t] == 0)continue;
            num_pair++;
        }

    feature_compact.resize(num_pair,mp->dim_features);
    label_compact.resize(num_pair,label3D.getd3());
    predict_compact.resize(num_pair,predict3D.getd3());
    stringstream str;
    str<<"length_seq "<<length_seq <<" subsampling_mode "<< subsampling_mode<< " num_pair "<<num_pair<<endl;
    eprint(0,str.str());
    //convert features and labels, 
    int compact_t=0;
    for (int i = 0; i < length_seq; i++)
        for (int j = i + mp->ds; j < length_seq; j++) {
            int t = index_t[i][j];
            if (batchindex[subsampling_mode][t] == 0)continue;
            memcpy(feature_compact[compact_t],feature3D[i][j],sizeof(double)*mp->dim_features);
            for(int k=0;k<label3D.getd3();k++)
                label_compact[compact_t][k]=label3D[i][j][k];
            compact_t++;
        }
    //Destroy original memory
    feature3D.resize(1,1,1);
    label3D.resize(1,1,1);
    predict3D.resize(1,1,1);
}

/**
 * The LoadH5 method is to load features and labels from a HDF5 (see http://www.hdfgroup.org/HDF5/) file.
 * The input feature are stored in the variable feature3D and the label are stored in label3D.
 * @param fn is the file name of the input HDF5 file
 */
void PairwiseSequence::LoadH5(string fn,string this_pdbid="") {
    char h5file[1024]; //original file of h5
    if(this_pdbid=="") 
        pdbid = getbasename(fn);
    else 
        pdbid = this_pdbid;
    eprint(0,"LoadH5 "+pdbid+"...");
    Matrix distcb;
    
    if (mp->par["-pdb25dir"]!="" || mp->par["-cb"]=="1" ){ // Non-empty "-cb" will read from work/data/pdb25bioh5, avoid it as much as possible.
        if(mp->par["-pdb25dir"]!="" )
            sprintf(h5file, "/%s/%s.h5",mp->par["-pdb25dir"].c_str(), pdbid.c_str());
        else
            sprintf(h5file, "/lustre/beagle/zywang/work/data/pdb25bioh5/%s.h5", pdbid.c_str());
        distcb.readh5(h5file,"/Data/dist_1") ; // check cb distance dataset name
        d1=distcb.getnrow();
        d2=distcb.getncol();
    }else{
        dist.readh5(fn, "/distance");
        d1=dist.getd1();
        d2=dist.getd2();
    }
    eprint(0,"Read pair_window_feature, "+fn);
    
    feature3D.readh5(fn, "/pair_window_feature");
    label3D.resize(d1,d2, 1);
    
    predict3D.resize(d1, d2, mp->num_labels);
    int h = 0;
    // Build index_t
    index_t.resize(d1, vector<int>(d2, 0));
    // Compute Label , compute the normalized features
    for (int i = 0; i < d1; i++)
        for (int j = i + mp->ds; j < d2; j++) {
            // Compute the discretized label
            if(mp->par["-predict"]=="1"){
                label3D[i][j][0] = 0;
            }else{
                double dist_ij;
                if(mp->par["-cb"]=="1"||mp->par["-pdb25dir"]!="")
                    dist_ij = distcb[i][j];
                else
                    dist_ij = dist[i][j][0];
                if(mp->par["-contact"]=="" || mp->par["-contact"]=="0")
                    label3D[i][j][0] = getlabel(dist_ij);
                else{
                    label3D[i][j][0] = getlabel_contact(dist_ij,mp->bin);
                }
            }
            // Scale the feature
            if(mp->norm_par.getnrow()>0)
                for(int k=0;k<mp->norm_par.getnrow();k++){
                    feature3D[i][j][k]=(feature3D[i][j][k]-mp->norm_par[0][k])/mp->norm_par[1][k];
                    if(feature3D[i][j][k]!=feature3D[i][j][k]){cerr<<"Feature has Nan "<<proc_id<<" "<<pdbid;}
                }
            pair<int, int> pp(i, j);
            //pairmap[pp]=h++;
            index_t[i][j] = h;
            h++;
        }
    nDataPoints = h;

    length_seq = d1;
    length_contact = d1 * d1;

    // Compute subsampling indices
    vector<int> a(nDataPoints, 0);
    batchindex.push_back(a);
    vector<int> b(nDataPoints, 1);
    batchindex.push_back(b);

    nlabel.resize(mp->num_labels);
    fill(nlabel.begin(), nlabel.end(), 0);
    //for (int i = 0; i < nDataPoints; i++)
    for (int i = 0; i < length_seq; i++)
        for (int j = i + mp->ds; j < length_seq; j++)
            nlabel[label3D[i][j][0]]++;

    subsampling_mode = 0;
    
    // ft1 add some feature the feature loaded from h5 file
    if (mp->par["-ft1"] != "")ft1();
    buildbatch(1);
}

void PairwiseSequence::ft1(void) {
    //Handle feature conversion. 1580 = 1563+14+3
    double predRg = 2.2 * pow(length_seq, 0.38);
    for (int i = 0; i < d1; i++)
        for (int j = i + mp->ds; j < d2; j++) {
            vector<pair<int, int> > wi1 = find_feature_window(i, j, mp->window_size, length_seq);
            int offset = 0;
            int fp = 0;
            vector<int> winav(14,0);
            for (unsigned int k = 0; k < wi1.size(); k++) {
                fp= k*mp->dim_one_pos*2;
                
                if (wi1[k].first < 0 && wi1[k].second<0) //padding at 
                    if(k<wi1.size()/2)winav[k]=1;
                    else if(k>wi1.size()/2)winav[k-1]=1;
                feature3D[i][j][fp+2*mp->dim_one_pos-1] = 1;
                feature3D[i][j][fp+2*mp->dim_one_pos-2] = 1;
                
                for (int di = 0; di < mp->dim_one_pos; di++) {
                    if(wi1[k].first<0)
                        feature3D[i][j][fp++] = 0;
                    else 
                        fp++;
                    if(wi1[k].second<0)
                        feature3D[i][j][fp++] = 0;
                    else
                        fp++;
                }
            }
            for (int k = 0; k < 1563; k++) {
                //if (feature3D[i][j][k] == -1)feature3D[i][j][k] = 0;
                //if (k > 45 * 30)feature3D[i][j][k] = 0;
            }

            int k = 1563;
            for (; k < 1563 + 14; k++) {
                // convert ss to unary representation
                // convert
                feature3D[i][j][k] = winav[k-1563];
            }
            feature3D[i][j][k++] = predRg / 10; //ret = predRg/10;
            feature3D[i][j][k++] = abs(i - j); // ret = abs(offset2-offset1);
            feature3D[i][j][k++] = fabs(i - j) / length_seq; //ret = abs(offset2-offset1+0.000001)/length_seq;
        }
}

/*
double NNlight::saveh5(const string& s, const string & ds){
        H5::H5File *file;
        try {
            file = new H5::H5File(fn1, H5F_ACC_EXCL);
        } catch (H5::FileIException error) {
            file = new H5::H5File(fn1, H5F_ACC_RDWR);
        }
        hsize_t dims[] = {num_params};
        //hsize_t cdims[] = {d1, d2, d3};

        H5::DataSpace dataspace(1, dims); // create new dspace
        H5::DSetCreatPropList plist;
        plist.setChunk(1, dims);
        plist.setDeflate(6);

        H5::DataSet dataset;
        try {
            dataset = file->createDataSet(ds, H5::PredType::NATIVE_DOUBLE, dataspace, plist);
        } catch (H5::FileIException e) {
            dataset = file->openDataSet(ds); //The results have been manually checked  with that of compute_di.m
        }
        dataset.write(data[0][0], H5::PredType::NATIVE_DOUBLE, dataspace, dataspace);
        file->close();
}*/
inline double NNlight::calc_neuron(const double x) {
    if (x > 20)
        return 1;
    if (x<-20)
        return 0;
    return 1.0 / (1 + exp(-x));
}

void NNlight::nninit(const vector<int> & _nNeuron, const int dim_features) {
    nNeuron = _nNeuron;
    maxNeuron = 0;
    int h = 0;
    for (int i = 0; i < _nNeuron.size(); i++) {
        ostringstream buf;
        buf << "Layer " << i << " " << _nNeuron[i];
        eprint(0, buf.str());
    }
    this->dim_features = dim_features;
    // nNeuron[end()-1] is the number of labels in multi-class output NN.
    // nNeuron[0] is the number of neurons to features, MAY not equal to the dim_features
    nLayer = (int) nNeuron.size();
    //for (unsigned int i = nLayer-1; i >=0; i--) {
    for (unsigned int i = 0; i <nLayer; i++) {
        if (maxNeuron < nNeuron[i])
            maxNeuron = nNeuron[i];
        vector<int> offset(nNeuron[i], 0);
        if (i > 0) {
            for (int k = 0; k < nNeuron[i]; k++)
                offset[k] = h + nNeuron[i - 1] * k;
            h = h + nNeuron[i - 1] * nNeuron[i];
        } else {
            for (int k = 0; k < nNeuron[i]; k++)
                offset[k] = h + dim_features * k;
            h = h + dim_features * nNeuron[i];
        }
        offset_layer.push_back(offset);
    }
    num_params = h;
    //weights=new double[num_params];
    //offset_input_layer;
    //offset_layer;

}

void NNlight::trace(int iter) {
    double* ptr = weights;
    /*if() // File exist, then save the tracing data.
    for(int i=nNeuron.size()-2;i>=0;i--){
        Matrix xx(nNeuron[i],nNeuron[i+1]);
        xx.SetPtr(ptr);
        ptr+=nNeuron[i],nNeuron[i+1];
        xx.
    }*/
}

void Sequence::buildbatch(double p) {
}

/**
 * Building the different subsampling indices for each protein in batchindex[0];
 * batchindex[1] is to use all the 
 * @param p
 */
void PairwiseSequence::buildbatch(double p) {
    //p=0.6;
    static bool done_print=false;
    if (mp->plainsr<1 && mp->plainsr>0){
        //Plain sampling, same rate for every label.
        double maxmaxlabel = mp->plainsr;
        fill(batchindex[0].begin(), batchindex[0].end(), 0); // clear each time.
        vector<int> ngot(mp->num_labels, 0);
        vector<int> maxgot(mp->num_labels, 0);
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
        for (int i = 0; i < mp->num_labels; i++) {
            maxgot[i] = nlabel[i]* maxmaxlabel;
            if(maxgot[i]<10)maxgot[i]=10;
        }
        //maxgot[mp->num_labels - 1] = nlabel[mp->num_labels - 1] * maxmaxlabel;
        //for (int j = 0; j < nDataPoints; j++) {
        for (int ii = 0; ii < length_seq; ii++)
            for (int jj = ii + mp->ds; jj < length_seq; jj++) {
                int i = shff[index_t[ii][jj]];
                int ll = label3D[ii][jj][0];
                if (ngot[ll] < maxgot[ll])
                    ngot[ll]++, batchindex[0][i] = 1;
                //if(obs_label[i]==m_pModel->num_labels-1)batchindex[0][i] = 0;
            }
    } else if (mp->sr < 1) {
        p = mp->sr;
    }else if (mp->sr > 2 && mp->sr <= 3) {
        // Plain case, sr>2 , do subsampling using (sr-2) which is [0,1) probability
        // Only control the maximal label
        double maxmaxlabel = mp->sr - 2;
        fill(batchindex[0].begin(), batchindex[0].end(), 0); // clear each time.
        vector<int> ngot(mp->num_labels, 0);
        vector<int> maxgot(mp->num_labels, 0);
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
        for (int i = 0; i < mp->num_labels; i++) {
            maxgot[i] = nlabel[i];
        }
        maxgot[mp->num_labels - 1] = nlabel[mp->num_labels - 1] * maxmaxlabel;
        //for (int j = 0; j < nDataPoints; j++) {
        for (int ii = 0; ii < length_seq; ii++)
            for (int jj = ii + mp->ds; jj < length_seq; jj++) {
                int i = shff[index_t[ii][jj]];
                int ll = label3D[ii][jj][0];
                if (ngot[ll] < maxgot[ll])
                    ngot[ll]++, batchindex[0][i] = 1;
                //if(obs_label[i]==m_pModel->num_labels-1)batchindex[0][i] = 0;
            }
        if(!done_print){
            for(int i=0;i<mp->num_labels;i++){
                cerr<<"label "<<i<<" nlabel "<< nlabel[i]<<" maxgot "<<maxgot[i]<< " ngot "<<ngot[i]<<endl;
            }
            done_print=true;
        }
    } else if (mp->sr > 3) {
        double maxmaxlabel = mp->sr - 2;
        fill(batchindex[0].begin(), batchindex[0].end(), 0); // clear each time.
        vector<int> ngot(mp->num_labels, 0);
        vector<int> maxgot(mp->num_labels, 0);
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
        for (int i = 0; i < mp->num_labels; i++) {
            maxgot[i] = (mp->sr - 3)*1000;
        }
        for (int ii = 0; ii < length_seq; ii++)
            for (int jj = ii + mp->ds; jj < length_seq; jj++) {
                int i = shff[index_t[ii][jj]];
                int ll = label3D[ii][jj][0];
                if (ngot[ll] < maxgot[ll])
                    ngot[ll]++, batchindex[0][i] = 1;
            }
    } else {
        //phase 1, 
        //(nlabel/nDataPoints)^p
        fill(batchindex[0].begin(), batchindex[0].end(), 0); // clear each time.
        vector<int> ngot(mp->num_labels, 0);
        vector<int> maxgot(mp->num_labels, 0);
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
        for (int i = 0; i < mp->num_labels; i++) {
            maxgot[i] = pow(nlabel[i]*1.0, p) + 1;
            //if (proc_id == 0)cerr << i << ":" << nlabel[i] << ":" << maxgot[i] << "\t";
        }
        maxgot[mp->num_labels - 1] = nlabel[mp->num_labels - 1]*0.1;
        //for (int j = 0; j < nDataPoints; j++) {
        for (int ii = 0; ii < length_seq; ii++)
            for (int jj = ii + mp->ds; jj < length_seq; jj++) {
                int i = shff[index_t[ii][jj]];
                int ll = label3D[ii][jj][0];
                if (ngot[ll] < maxgot[ll])
                    ngot[ll]++, batchindex[0][i] = 1;
                //if(obs_label[i]==m_pModel->num_labels-1)batchindex[0][i] = 0;
            }
    }

}
/**
 * Compute the objective function
 * @return 
 */
double PairwiseSequence::calc_deep() {
    //calculate the log likelihood of the 
    return calc_deep_compact();
    
    double logll = 0;

    for (int i = 0; i < length_seq; i++)
        for (int j = i + mp->ds; j < length_seq; j++) {
            int t = index_t[i][j];
            if (batchindex[subsampling_mode][t] == 0)continue;
            //For each layer
            Matrix layer(mp->nLayer, mp->maxNeuron);
            for (int ilay = 0; ilay < mp->nLayer; ilay++) {
                for (int k = 0; k < mp->nNeuron[ilay]; k++) { //k , ilay
                    int offset = mp->offset_layer[ilay][k];
                    for (int h = 0; h < (ilay > 0 ? mp->nNeuron[ilay - 1] : mp->dim_features); h++) // h, ilay-1
                        if (ilay != 0){
                            layer[ilay][k] += mp->weights[offset + h] * mp->calc_neuron(layer[ilay - 1][h]);
                            //if(i==0&& j==6 && proc_id==0) printf("D1%d %4d %.7f %.7f\n",ilay,h,mp->weights[offset + h] , mp->calc_neuron(layer[ilay - 1][h]));
                        }
                        else{
                            layer[0][k] += mp->weights[offset + h] * feature3D[i][j][h];
                            //if(i==0&& j==6 && proc_id==0) printf("D1 %4d %.7f %.7f\n",h,mp->weights[offset + h] , feature3D[i][j][h]);
                        }
                }
            }
            //calc rbm layer
            double probsum = 0;
            for (int k = 0; k < mp->nNeuron[mp->nLayer - 1]; k++) {
                predict3D[i][j][k] = exp(-layer[mp->nLayer - 1][k]);
                probsum += predict3D[i][j][k];
            }
            for (int k = 0; k < mp->nNeuron[mp->nLayer - 1]; k++)
                predict3D[i][j][k] /= probsum;
            // logll += log(predict3D[i][j][trulabel ])
            // = log( exp(-layer[mp->nLayer-1][k] )/probsum )
            // = 
            double logll_sample=-layer[mp->nLayer - 1][label3D[i][j][0]] - log(probsum); 
            //if(logll_sample<-1000)logll_sample=-1000; // This will make every weight to be extremely small.
            //logll += -layer[mp->nLayer - 1][label3D[i][j][0]] - log(probsum); // Log likelihood, to be minimized
            logll+= logll_sample;
        }
    return logll; // Current is log LL, will be negated at Lbfgs->computefunction, CHANGE this !
}

double PairwiseSequence::calc_deep_compact() {
    //calculate the log likelihood of the 
    double logll = 0;
    //for (int i = 0; i < length_seq; i++)
    //    for (int j = i + mp->ds; j < length_seq; j++) {
    for(int t=0;t<feature_compact.getnrow();t++){
            //int t = index_t[i][j];
            //No dynamic subsampling at this moment. if (batchindex[subsampling_mode][t] == 0)continue;
            //For each layer
            Matrix layer(mp->nLayer, mp->maxNeuron);
            for (int ilay = 0; ilay < mp->nLayer; ilay++) {
                for (int k = 0; k < mp->nNeuron[ilay]; k++) { //k , ilay
                    int offset = mp->offset_layer[ilay][k];
                    for (int h = 0; h < (ilay > 0 ? mp->nNeuron[ilay - 1] : mp->dim_features); h++) // h, ilay-1
                        if (ilay != 0){
                            layer[ilay][k] += mp->weights[offset + h] * mp->calc_neuron(layer[ilay - 1][h]);
                            //if(i==0&& j==6 && proc_id==0) printf("D1%d %4d %.7f %.7f\n",ilay,h,mp->weights[offset + h] , mp->calc_neuron(layer[ilay - 1][h]));
                        }
                        else{
                            layer[0][k] += mp->weights[offset + h] * feature_compact[t][h];
                            //if(i==0&& j==6 && proc_id==0) printf("D1 %4d %.7f %.7f\n",h,mp->weights[offset + h] , feature3D[i][j][h]);
                        }
                }
            }
            //calc rbm layer
            double probsum = 0;
            for (int k = 0; k < mp->nNeuron[mp->nLayer - 1]; k++) {
                predict_compact[t][k] = exp(-layer[mp->nLayer - 1][k]);
                probsum += predict_compact[t][k];
            }
            for (int k = 0; k < mp->nNeuron[mp->nLayer - 1]; k++)
                predict_compact[t][k] /= probsum;
            // logll += log(predict3D[i][j][trulabel ])
            // = log( exp(-layer[mp->nLayer-1][k] )/probsum )
            double logll_sample=-layer[mp->nLayer - 1][int(label_compact[t][0])] - log(probsum); 
            //if(logll_sample<-1000)logll_sample=-1000; // This will make every weight to be extremely small.
            //logll += -layer[mp->nLayer - 1][label3D[i][j][0]] - log(probsum); // Log likelihood, to be minimized
            logll+= logll_sample;
        }
    return logll; // Current is log LL, will be negated at Lbfgs->computefunction, CHANGE this !
}


double PairwiseSequence::calc_grad(double *grad) {
    return calc_grad_compact(grad);
    //First compute the firing.
    double logllsum = 0;
    for (int i = 0; i < length_seq; i++)
        for (int j = i + mp->ds; j < length_seq; j++) {
            int t = index_t[i][j];
            if (batchindex[subsampling_mode][t] == 0)continue;
            //layer[0]
            //calc input layer, x
            double logll = 0;
            //For each layer
            Matrix layer(mp->nLayer, mp->maxNeuron);
            Matrix layerFire(mp->nLayer, mp->maxNeuron);
            for (int ilay = 0; ilay < mp->nLayer; ilay++) {
                for (int k = 0; k < mp->nNeuron[ilay]; k++) {
                    int offset = mp->offset_layer[ilay][k];
                    for (int h = 0; h < (ilay > 0 ? mp->nNeuron[ilay - 1] : mp->dim_features); h++) {
                        if (ilay != 0) {
                            layerFire[ilay - 1][h] = mp->calc_neuron(layer[ilay - 1][h]);
                            layer[ilay][k] += mp->weights[offset + h] * layerFire[ilay - 1][h]; // h is in the layer < ilay
                        } else
                            layer[0][k] += mp->weights[offset + h] * feature3D[i][j][h];
                    }
                }
            }
            //calc rbm layer

            double probsum = 0;
            vector<double> prob(mp->num_labels, 0);
            for (int k = 0; k < mp->nNeuron[mp->nLayer - 1]; k++) {
                prob[k] = exp(-layer[mp->nLayer - 1][k]);
                probsum += prob[k];
            }
            for (int k = 0; k < mp->num_labels; k++) prob[k] /= probsum;
            logll += -layer[mp->nLayer - 1][label3D[i][j][0]] - log(probsum); // Log likelihood, to be minimized
            logllsum += logll;
            //calc all predict probability, which is helpful for calc_grad



            double c = (1 - exp(logll)); // coefficient of gradient

            int yy = label3D[i][j][0];
            Matrix backProb(mp->nLayer, mp->maxNeuron);
            for (int ilay = mp->nLayer - 1; ilay >= 0; ilay--) {
                for (int k = 0; k < mp->nNeuron[ilay]; k++) {
                    int offset = mp->offset_layer[ilay][k]; // 
                    for (int h = 0; h < (ilay > 0 ? mp->nNeuron[ilay - 1] : mp->dim_features); h++) { // d LL / d w(h,k)
                        //layer[ilay][k] += weights[offset + h] * calc_neuron(layer[ilay - 1][h]);
                        //at layer 0, offset+h is weight^(Nlayer-1)[h][label]
                        //at layer 1..n, offset+h is weight^(ilayer)[h][k]
                        double g = 0;
                        double nn1;
                        double nn;
                        if (ilay > 0)
                            nn1 = layerFire[ilay - 1][h]; // mp->calc_neuron(layer[ilay - 1][h]); //gradient for w(ilay)(h,k).... CAN be saved.
                        else
                            nn1 = feature3D[i][j][h];
                        if (ilay == mp->nLayer - 1) {
                            if (k == yy) {
                                g -= nn1;
                                backProb[ilay - 1][h] -= mp->weights[offset + h]; //
                            }
                            g += nn1 * prob[k];
                            backProb[ilay - 1][h] += mp->weights[offset + h] * prob[k];
                        } else {
                            nn = layerFire[ilay][k]; // mp->calc_neuron(layer[ilay][k]); //gradient for w(ilay)(h,k)....
                            g = backProb[ilay][k] * nn * (1 - nn) * nn1;
                            if (ilay > 0)
                                backProb[ilay - 1 ][h] += backProb[ilay][k] * nn * (1 - nn) * mp->weights[offset + h]; // sum over k
                        }
                        grad[offset + h] += g;
                    }

                }
            }
        }
    return logllsum;
}


double PairwiseSequence::calc_grad_compact(double *grad) {

    //First compute the firing.
    double logllsum = 0;
    //for (int i = 0; i < length_seq; i++)
    //    for (int j = i + mp->ds; j < length_seq; j++) {
    for (int t = 0;t<feature_compact.getnrow();t++) {
            //int t = index_t[i][j];
            //if (batchindex[subsampling_mode][t] == 0)continue;
            //layer[0]
            //calc input layer, x
            double logll = 0;
            //For each layer
            Matrix layer(mp->nLayer, mp->maxNeuron);
            Matrix layerFire(mp->nLayer, mp->maxNeuron);
            for (int ilay = 0; ilay < mp->nLayer; ilay++) {
                for (int k = 0; k < mp->nNeuron[ilay]; k++) {
                    int offset = mp->offset_layer[ilay][k];
                    for (int h = 0; h < (ilay > 0 ? mp->nNeuron[ilay - 1] : mp->dim_features); h++) {
                        if (ilay != 0) {
                            layerFire[ilay - 1][h] = mp->calc_neuron(layer[ilay - 1][h]);
                            layer[ilay][k] += mp->weights[offset + h] * layerFire[ilay - 1][h]; // h is in the layer < ilay
                        } else
                            layer[0][k] += mp->weights[offset + h] * feature_compact[t][h];
                    }
                }
            }
            //calc rbm layer
            double probsum = 0;
            vector<double> prob(mp->num_labels, 0);
            for (int k = 0; k < mp->nNeuron[mp->nLayer - 1]; k++) {
                prob[k] = exp(-layer[mp->nLayer - 1][k]);
                probsum += prob[k];
            }
            for (int k = 0; k < mp->num_labels; k++) prob[k] /= probsum;
            logll += -layer[mp->nLayer - 1][int(label_compact[t][0])] - log(probsum); // Log likelihood, to be minimized
            logllsum += logll;
            //calc all predict probability, which is helpful for calc_grad



            double c = (1 - exp(logll)); // coefficient of gradient

            int yy = label_compact[t][0];
            Matrix backProb(mp->nLayer, mp->maxNeuron);
            for (int ilay = mp->nLayer - 1; ilay >= 0; ilay--) {
                for (int k = 0; k < mp->nNeuron[ilay]; k++) {
                    int offset = mp->offset_layer[ilay][k]; // 
                    for (int h = 0; h < (ilay > 0 ? mp->nNeuron[ilay - 1] : mp->dim_features); h++) { // d LL / d w(h,k)
                        //layer[ilay][k] += weights[offset + h] * calc_neuron(layer[ilay - 1][h]);
                        //at layer 0, offset+h is weight^(Nlayer-1)[h][label]
                        //at layer 1..n, offset+h is weight^(ilayer)[h][k]
                        double g = 0;
                        double nn1;
                        double nn;
                        if (ilay > 0)
                            nn1 = layerFire[ilay - 1][h]; // mp->calc_neuron(layer[ilay - 1][h]); //gradient for w(ilay)(h,k).... CAN be saved.
                        else
                            nn1 = feature_compact[t][h];
                        if (ilay == mp->nLayer - 1) {
                            if (k == yy) {
                                g -= nn1;
                                backProb[ilay - 1][h] -= mp->weights[offset + h]; //
                            }
                            g += nn1 * prob[k];
                            backProb[ilay - 1][h] += mp->weights[offset + h] * prob[k];
                        } else {
                            nn = layerFire[ilay][k]; // mp->calc_neuron(layer[ilay][k]); //gradient for w(ilay)(h,k)....
                            g = backProb[ilay][k] * nn * (1 - nn) * nn1;
                            if (ilay > 0)
                                backProb[ilay - 1 ][h] += backProb[ilay][k] * nn * (1 - nn) * mp->weights[offset + h]; // sum over k
                        }
                        grad[offset + h] += g;
                    }

                }
            }
        }
    return logllsum;
}


void PairwiseSequence::savepredict(void) {
    string fn = pdbid + ".epad.prob";
    ofstream of(fn.c_str(), ofstream::out);
    of << setprecision(7);
    //        for (int i = 0; i < length_contact; i++) {
    int t=0;
    for (int i = 0; i < length_seq; i++)
        for (int j = i + mp->ds; j < length_seq; j++) {
            of << i << " " << j;
            for (int k = 0; k < mp->num_labels; k++)
                of << " " << predict_compact[t][k]*100;
            t++;
            of << endl;
        }
    if(t!=predict_compact.getnrow()){
        eprint(0,"The pair indexing is mismatch with single indexing.\n");
    }
    of.close();
}

void Nnpf::dlmread(const string& fn) {
    // Read from a model file and set all the parameters.
    //Never override the parameters from a loaded model.
    ifstream fin(fn, ifstream::in);
    string s1;
    std::getline(fin, s1);
    istringstream ss(s1.substr(1, s1.length() - 1));
    while (ss.good()) {
        string a, b;
        ss >> a;
        //if(ss.good()){
        ss >> b;
        //par[a]=b;
    }
    //Compute parameters.
    for (int i = 0; i < num_params; i++) {
        fin >> weights[i];
    }
    //TODO: save dim features in model
    fin.close();
}

template <typename T>
vector<T> strtovec(string s, char sep) {
    stringstream ss(s);
    vector<T> res;
    while (ss.good()) {
        string w;
        std::getline(ss, w, sep);
        T x;
        stringstream(w) >> x;
        res.push_back(x);
    }
    return res;
}

void Nnpf::moremodel(const string& fn) {
    // Read from a model file and set all the parameters.
    //Never override the parameters from a loaded model.
    ifstream fin(fn, ifstream::in);
    string s1;
    std::getline(fin, s1);
    //get nn definition
    unordered_map<string, string> nndef;
    istringstream ss(s1.substr(1, s1.length() - 1));
    while (ss.good()) {
        string a, b;
        ss >> a;
        if (ss.good())
            ss >> b;
        nndef[a] = b;
    }
    Nnpf other;
    other.nNeuron = strtovec<int>(nndef["-nn"], ',');
    other.num_labels = stoi(nndef["-num_labels"]);
    other.nNeuron.push_back(other.num_labels);
    other.dim_features = stoi(nndef["-dim_features"]);
    other.num_params = 0;
    if (nndef["-num_params"] != "") {
        other.num_params = stoi(nndef["-num_params"]);
    } else {
        for (int i = 0; i < other.nNeuron.size() - 1; i++)
            other.num_params += other.nNeuron[i] * other.nNeuron[i + 1];
        other.num_params += other.nNeuron.back() * other.dim_features;
    }
    //read a label mapping
    std::getline(fin, s1);
    vector<int> vv = strtovec<int>(s1.substr(1), ','); // labelmap[read model label]=this model label
    vector<int> labelmap(vv[vv.size() - 2] + 1);
    for (int i = 0; i < vv.size(); i = i + 2)labelmap[vv[i]] = vv[i + 1];
    //read a feature mapping
    std::getline(fin, s1);
    vv = strtovec<int>(s1.substr(1), ','); // feature mapping
    vector<int> ftmap(vv[vv.size() - 2] + 1);
    for (int i = 0; i < vv.size(); i = i + 2) ftmap[vv[i]] = vv[i + 1];
    //read parameters
    other.weights = new double[other.num_params];
    for (int ll = 0; ll < other.num_params; ll++) {
        fin >> other.weights[ll];
    }
    fin.close();
    stringstream sout;
    sout << "dimfeature " << other.dim_features << " num_label " << other.num_labels << " num_paras " << other.num_params << " -nn";
    for (int i = 0; i < other.nNeuron.size(); i++)
        sout << other.nNeuron[i] << " ";
    //eprint(0, "moreModel " + sout.str());sout.clear();

    //over ride current model
    //make sure the nNeuron same except label and features.
    //re calculate all parameters.
    int offset;
    //deal with label 
    int off1 = 0;
    int off2 = 0;
    int ll = other.nNeuron.size() - 1;
    sout<<endl;
    memset(weights,0,sizeof(double)*num_params);
    for (int i = 0; i < other.nNeuron[ll]; i++) {
        int otheroffset = off2 + i * other.nNeuron[ll - 1];
        //int offset = off1 + labelmap[i] * nNeuron[ll - 1];
        int offset = offset_layer[ll][labelmap[i]];
        if( i<labelmap[i]){ //i=11, 11-> 12, do 10->11
            int otheroffset = off2 + (i-1) * other.nNeuron[ll - 1];
            int offset1 = offset_layer[ll][i];
            for (int j = 0; j < other.nNeuron[ll - 1]; j++) {
                weights[offset1 + j] = other.weights[otheroffset + j] *(-1); //!!!-1
            }
             
        }
        for (int j = 0; j < other.nNeuron[ll - 1]; j++) {
            weights[offset + j] =  other.weights[otheroffset + j] *(-1);
        }
        sout<<"ll off1 off2 "<<ll<<" "<<offset<<" "<<otheroffset<<" ; ";
    }
    sout<<endl;
    off1 += nNeuron[ll] * nNeuron[ll - 1];
    off2 += other.nNeuron[ll] * other.nNeuron[ll - 1];
    //sout<<"off1 off2 "<<off1<<" "<<off2<<" ; ";
    //mid levels
    for (int ll = nNeuron.size() - 2; ll > 0; ll--) {
        for (int i = 0; i < nNeuron[ll]; i++) {
            int otheroffset = off2 + i * other.nNeuron[ll - 1];
            int offset = offset_layer[ll][i];
            for (int j = 0; j < nNeuron[ll - 1]; j++) {
                weights[offset + j] = other.weights[otheroffset + j];
            }
            sout<<"ll off1 off2 "<<ll<<" "<<offset<<" "<<otheroffset<<" ; ";
        }
        off1 += nNeuron[ll] * nNeuron[ll - 1];
        off2 += other.nNeuron[ll] * other.nNeuron[ll - 1];
        sout<<endl;
    }
    ll = 0;
    
    for (int i = 0; i < nNeuron[ll]; i++) {
        int otheroffset = off2 + i * other.dim_features;
        int offset = offset_layer[ll][i];
        sout<<"offset otheroffset "<<offset<<" "<<otheroffset<<" ; ";
        for (int j = 0; j < other.dim_features; j++) {
            weights[offset + ftmap[j]] = other.weights[otheroffset + j]; // cannot be outside the feature
            if(i==nNeuron[ll]-1)
                sout<<"ftmap[j] j "<<ftmap[j]<<" "<<j<<" ; ";
        }
    }
    //eprint(0, "moreModel " + sout.str());
    
    //add to current model
    //TODO: save dim features in model

}

void Nnpf::dlmwrite(const string& fn) {
    ofstream fout(fn, ofstream::out);
    fout << "#";
    for (auto e : par)
        if (e.second != "")
            fout << e.first << " " << e.second << " ";
    fout << "\n";
    fout << setprecision(7);
    for (int i = 0; i < num_params; i++)
        fout << weights[i] << " ";
    fout << "\n";
    fout.close();
}

void Nnpf::predict(void) {
    for ( int i = 0; i < trainData.size(); i++) {
        ((PairwiseSequence*) trainData[i])->calc_deep();
        ((PairwiseSequence*) trainData[i])->savepredict();
        exit(0);
    }
    for ( int i = 0; i < testData.size(); i++) {
        ((PairwiseSequence*) testData[i])->calc_deep();
        ((PairwiseSequence*) testData[i])->savepredict();
    }
}

double Nnpf::get_test_loglikelihood(const vector<Sequence*>& data_list){
    //compute the objective on test.
    double test_loglikelihood=0;
    for ( int i = 0; i < data_list.size(); i++) {
        test_loglikelihood-=((PairwiseSequence*) data_list[i])->calc_deep();
    }
    return test_loglikelihood;
}

/**
 * 
 * @param h5data_list_file
 * @param dest,[ =trainData ]
 * @param has_test_list,[ =false ]
 * @param subsampling_mode [=0]
 */
void Nnpf::LoadDataListH5(string h5data_list_file,vector<Sequence*> & dest, bool has_test_list,int subsampling_mode) {
    ifstream fin(h5data_list_file, ifstream::in);
    int i = 0;
    bool print_pair_window_size=false;
    if(fin.fail())cerr << "LoadDataListH5 Error: " << h5data_list_file <<" "<<strerror(errno);
    while (fin.good()) {
        string fnline;
        std::getline(fin, fnline);
        stringstream ss(fnline);
        while (ss.good()) {
            string fn;
            ss >> fn;
            if (fn == "")continue;
            if (i == proc_id) {
                PairwiseSequence* protein = new PairwiseSequence(this);
                //if a regenerating is needed
                if(par["-regen"]!=""){
                    string txtfeatfile;
                    string pdbid=getbasename(fn);
                    txtfeatfile="pnn1/"+pdbid+".pnn1";
                    protein->LoadData(txtfeatfile, par["-regen"]!=""); // contain compute_di
                    if(!print_pair_window_size){
                        cerr<<"Total_pair_window_feature "<<protein->datah5->total_pair_window_feature;
                        print_pair_window_size=true;
                    }
                }
                if(par["-regen"]=="only")exit(0); // todo change this    
                protein->LoadH5(fn); // All training data should be loaded by LoadH5
                protein->compact_memory(subsampling_mode);
                dest.push_back(protein);
            }
        }

        i++;
    }
    if(!has_test_list) // use some of train data as test
        if(dest.size()>0)
            testData.push_back(dest.back());
        else
	  throw string("Empty Training node!!\n\n");
    fin.close();
    eprint(0, "Finished Loaddatalisth5");
}

void Nnpf::Init(int argc, char** argv) {
    if (argc % 2 != 1 || argc <= 1) {
        usage();
        return;
    }
    for (int i = 1; i < argc; i = i + 2) {
        par[argv[i]] = argv[i + 1];
        if (proc_id == 0)cerr << "[D0] " << argv[i] << " " << argv[i + 1] << endl;
    }
    string strNNlayer;
    istringstream(par["-i"]) >> data_list_file;
    istringstream(par["-f"]) >> load_model_file;
    istringstream(par["-m"]) >> save_model_file;
    istringstream(par["-w"]) >> window_size;
    istringstream(par["-s"]) >> num_labels;
    istringstream(par["-r"]) >> lambda;
    istringstream(par["-h"]) >> h5data_list_file;
    istringstream(par["-h5dir"]) >> h5dir;
    istringstream(par["-nn"]) >> strNNlayer;
    if (par["-dn"] != "")
        istringstream(par["-dn"]) >> dim_features;
    else
        dim_features = 1453;
    if (par["-sr"] != "")
        istringstream(par["-sr"]) >> sr;
    else
        sr = 1;
    if (par["-plainsr"] != "")
        istringstream(par["-plainsr"]) >> plainsr;
    else
        plainsr = 0;
    
    
    //Load parameters from file
    if (par["-f"] != "") {
        //recompute num_params
    } else {
    }
    if (par["-bin"]!=""){
        cerr<<"bin ";
        vector<string> binstr=matrixStringSplit(par["-bin"],",");
        for(int i=0;i<binstr.size();i++){
            bin.push_back(atof(binstr[i].c_str()));
            cerr<<binstr[i]<<" ";
        }
        cerr<<endl;
    }
    
    if(par["-norm_par"]!=""){
        // Must be read before nninit and LoadDataListH5.
        norm_par.readh5(par["-norm_par"]);
    }
    if(par["-m"]!="") par["-m"]="std";
    
    cerrstr.open(par["-m"]+".stderr");
    coutstr.open(par["-m"]+".stdout");
    if(proc_id==0){
        cerr.rdbuf(cerrstr.rdbuf());
        cout.rdbuf(coutstr.rdbuf());
    }

    ds = 6;
    pair_window_size = 5;
    window_size = 15;
    dim_one_pos = 45;
    dim_pairwise_features = 11 + 1; // [mi pow:11] + [direct]
    feature_name_done=false;
    // If we have a h5 list
    
    
    if (par["-h"] != "") { // in a training model, -h is prior than -i which takes input one by one
        if(par["-test_list"]==""){
                LoadDataListH5(h5data_list_file,trainData,0); // may conflict with -i
        }
        else{
                LoadDataListH5(h5data_list_file,trainData,true,0); 
                LoadDataListH5(par["-test_list"],testData,true,1); 
        }
        if (proc_id == 0)cerr << "[d0] dim_feature" << dim_features << endl;
    }else {
        // Need to regenerate the training data.
        if ( par["-i"] != "") {
            PairwiseSequence *seq = new PairwiseSequence(this);
            seq->LoadData(par["-i"], 1); // compute-di
        }
    }

    vector<int> nnlayer;
    stringstream ss(strNNlayer);
    string s0;
    //cerr<<"strnn "<<strNNlayer<<endl;
    while (ss.good()) {
        getline(ss, s0, ',');
        int x;
        stringstream(s0) >> x;
	if(x <=0){ eprint(0," nnlayer <= 0");
	  exit(-1);
	}
        nnlayer.push_back(x);
    }
    nnlayer.push_back(num_labels);
    nninit(nnlayer, dim_features); // initialize weights.

    if (par["-f"] == "") { // 
        // Allocate and initialize randomly.
        weights = new double[num_params];
        eprint(0, "Allocate grad grad_sum weights");
        grad = new double[num_params];
        grad_sum = new double[num_params];
        reg = new double[num_params];
        for (int i = 0; i < num_params; i++)
            weights[i] = drand48() - drand48();
        double r = lambda / num_procs; // regularization coefficients
        for (int i = 0; i < num_params; i++)
            reg[i] = lambda;
    }
    
    if (par["-loadmodel"] != "") {
        dlmread(par["-loadmodel"]);
    }else{ // use only when we need to convert model from a different neural network
        if (par["-moremodel"] != "") {
            moremodel(par["-moremodel"]);
        }
    }
    ostringstream os;
    os << "num_params " << num_params << endl;
    for (int i = 0; i < 10 && i < num_params; i++)
        os << weights[i] << " ";
    os << "... ";
    for (int i = num_params - 10; i < num_params; i++)
        if (i >= 0) os << weights[i] << " ";
    os << endl;
    //eprint(0, os.str());
    for (int i = 0; i < num_params; i++)
        initweight[i] = weights[i];
    //LoadDataList
    //Make Feature
}
