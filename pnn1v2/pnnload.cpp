// DEPRECATED, DO NOT USE OR CHANGE.
#include "pnn1.h"

void Sequence::Pnnloadmi(string ss, string h5filename) {
    //get seqid

    try {
        //string pdbid=ss.substr(0,ss.length());
        char h5file[1024];
        if (h5filename != "") {
            if (mp->h5dir.size() > 0)
                sprintf(h5file, "%s/%s.h5", mp->h5dir.c_str(), pdbid.c_str());
            else
                sprintf(h5file, "%s", h5filename.c_str());
        } else
            sprintf(h5file, "/lustre/beagle/zywang/work/data/pdb25bioh5/%s.h5", pdbid.c_str());
        if (mp->par["-regen"] != "" || mp->par["-readh5file"] != "" )
            sprintf(h5file, "/lustre/beagle/zywang/work/data/pdb25bioh5/%s.h5", pdbid.c_str());
            //sprintf(h5file, "%s", mp->par["-readh5file"].c_str());
        //fprintf(stderr,"proc %d reading %s\n",proc_id,h5file);

        datah5->open_h5file_readonly(h5file);
        //fprintf(stderr,"1-reading %s\n",h5file);
        datah5->read_pair_aa_frequency();
        //fprintf(stderr,"2-reading %s\n",h5file);
        datah5->compute_singlefreq();
        datah5->compute2_mi(); //
        datah5->compute2_moreev();

        //Find the hdf5 or a3m file
        //Load from hdf5, compute_moreev
        //fprintf(stderr,"Done reading %s\n",h5file);err
        if(proc_id==0)cerr<<"Done Pnnloadmi read h5"+string(h5file)<<endl;
    } catch (exception e) {
        std::cerr << "error in " << ss << endl;
    }

}

double Sequence::getseqdist(int seqdist, int seqlen) {
    double ret = 0;
    if (seqdist < 12)ret = 1;
    else if (seqdist < 24)ret = 2;
    else ret = 3;
    return ret;
}

void Sequence::LoadData(string fn, bool bSavelabel) {
    // fn : a filename which has the single information of a sequence.
    //Use in prediction.
    Sequence* seq = this;
    int length_s;
    int length_contact;
    string stmp;
    string sline;
    ifstream trn_in(fn, ifstream::in);
    getline(trn_in, sline); // Jump the first line, which is 1 always for single sequence input.     // This refactored function is used for reading a single sequence data from     // Feng's format.
    getline(trn_in, sline);
    istringstream iss(sline);
    iss >> length_s >> length_contact >> stmp;
    length_seq = length_s;
    pdbid = stmp.substr(0, stmp.length() - 1);
    Matrix obs_feature(length_s, 128);
    Matrix3<double> savefeature(seq->length_seq, seq->length_seq, 2048, 0);
    //obs_pairwise_features = new Array3D<double>(length_seq, length_seq, dim_pairwise_features);
    Matrix3<double> obs_pairwise_features(length_s, length_s, 512);
    Matrix3<double> savelabel(seq->length_seq, seq->length_seq, 16, 0); //(*distances)(t, u)

    for (int j = 0; j < length_s; j++) {
        getline(trn_in, sline); // Read a line
        istringstream iss(sline);
        int d = 0;
        for (int k = 0; !iss.eof(); k++) {
            double tmp;
            iss >> tmp;
            obs_feature[j][d++] = tmp;
        }
        obs_feature[j][d] = 1;
    }
    for(int i=0;i<seq->length_seq;i++)
        for(int j=i+6;j<length_seq;j++)
            savelabel[i][j][0]=20;
    for (int j = 0; j < length_contact; j++) { //zy, not the final contact index
        getline(trn_in, stmp);
        if (*(stmp.end() - 1) == '#') {
            break;
        }
        if (stmp[0] == '#') {
            int gap;
            gap = atoi(stmp.substr(5).c_str());
            seq->gaps.push_back(gap);
        } else if (stmp.size() > 0) {
            istringstream iss(stmp);
            int a1, a2;
            double dist;
            iss >> dist >> a1 >> a2;
            savelabel[a1][a2][0] = dist;
            int d = 0;
            for (int k = 0; !iss.eof(); k++) {
                double tmp;
                iss >> tmp;
                obs_pairwise_features[a1][a2][d++] = tmp; //cerr << tmp <<" ";
            } //cerr << endl;
        }
    }

    int padd = 0;
    
    //save to features to .h5 
    try {
        seq->datah5 = new Bioh5;
        seq->Pnnloadmi(seq->pdbid, seq->pdbid + ".h5");
        for (int a1 = 0; a1 < seq->length_seq; a1++)
            for (int a2 = a1 + 6; a2 < seq->length_seq; a2++)
                for (int di = 0; di < dim_pairwise_features; di++)
                    obs_pairwise_features[a1][a2][di] = seq->datah5->mipow[di](a1, a2);

	// Expanding windowed feature.
        for (int i = 0; i < seq->length_seq; i++) {
            for (int j = i + 1; j < seq->length_seq; j++) {
                vector<pair<int, int> > wi1 = find_feature_window(i, j, mp->window_size, seq->length_seq);
                int offset = 0;
                int fp = 0;
                for (unsigned int k = 0; k < wi1.size(); k++) {
                    /*if (wi1[k].first < 0 || wi1[k].second<0) { //padding at 
                        for (int di = 0; di < mp->dim_one_pos; di++) {
                            savefeature[i][j][fp++] = -1;
                            savefeature[i][j][fp++] = -1;
                        }
                    } else {*/
                    for (int di = 0; di < mp->dim_one_pos; di++) {
                        if (wi1[k].first >= 0)
                            savefeature[i][j][fp++] = obs_feature[wi1[k].first][di];
                        else
                            savefeature[i][j][fp++] = padd;
                        if (wi1[k].second >= 0)
                            savefeature[i][j][fp++] = obs_feature[wi1[k].second][di];
                        else
                            savefeature[i][j][fp++] = padd;
                    }
                    //}
                }
                offset = fp;
                wi1 = find_feature_window_pair(i, j, mp->pair_window_size, seq->length_seq);
                int dim_allpair = 11 + 10 + 3;
                for (unsigned k = 0; k < wi1.size(); k++) {
                    if (wi1[k].first < 0) { //padding at 
                        for (int di = 0; di < dim_allpair; di++) { //miroot[k](i, j);0-10, mipow[k](i, j);0-9,miLocalMax[k](i, j);0-2
                            savefeature[i][j][fp++] = padd;
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
        //if (run_mode == _run_mode::training)
        //seq->datah5->file->close();
        delete seq->datah5->file;
        //seq->datah5->file->close();
        //delete seq->datah5;
    } catch (int e) {
        fprintf(stderr, "reading h5 error\n");
    } catch (exception e) {
        fprintf(stderr, "Exception %s %s\n", seq->pdbid.c_str(), e.what());
    }
    if (bSavelabel) {
        if (mp->h5dir != "") {
            savelabel.writeh5(mp->h5dir + "/" + pdbid + ".h5", "/distance");
            savefeature.writeh5(mp->h5dir + "/" + pdbid + ".h5", "/pair_window_feature");
        } else {
            savelabel.writeh5(pdbid + ".h5", "/distance");
            savefeature.writeh5(pdbid + ".h5", "/pair_window_feature");
        }
    }

}
