#include "pnn1.h"
/**
 * Read pairwise frequence and compute mi and di from the pair-wise frequence
 * @param ss
 * @param h5filename, the h5 file has dataset named. /Data/pairFrequency, it can be produced by fasta2hdf5.
 * 
 */
void Sequence::Pnnloadmi(string ss, string h5filename) {
    try {
        //string pdbid=ss.substr(0,ss.length());
        char h5file[1024];
        sprintf(h5file, "%s", h5filename.c_str());

        //fprintf(stderr,"proc %d reading %s\n",proc_id,h5file);

        datah5->open_h5file_readonly(h5file);
        //fprintf(stderr,"1-reading %s\n",h5file);
        datah5->read_pair_aa_frequency(); // These two step allocate mem for pair and single frequency
        //fprintf(stderr,"2-reading %s\n",h5file);
        datah5->compute_singlefreq();
        //datah5->direct_information=datah5->calculate_direct();
        eprint(0,"calculate_direct");
        datah5->calculate_direct(datah5->pairFreq,length_seq,datah5->naatype,datah5->singleFreq,datah5->direct_information);
        if(mp->par["-save_di"]!="")
            datah5->direct_information.writeh5(mp->par["-save_di"],"/directinfomation");
        eprint(0,"compute2_mi");
        datah5->compute2_mi(); //
        eprint(0,"compute2_moreev");
        datah5->compute2_moreev();

        //Find the hdf5 or a3m file
        //Load from hdf5, compute_moreev
        //fprintf(stderr,"Done reading %s\n",h5file);err
        if(proc_id==0)cerr<<"Done Pnnloadmi read h5"+string(h5file)<<endl;
        datah5->file->close();
              
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

/**
 * Internally function used by LoadData only
 */
inline string get_single_feature_name(int k,string s,int di){
    stringstream res;
    res<<"single/"<<k<<"/"<<s<<"/"<<di;
    return res.str();
}
inline string get_pair_feature_name(int k,int first,int second,string s,int di){
    stringstream res;
    res<<"pair/"<<k<<"/"<<first<<"/"<<second<<"/"<<s<<"/"<<di;
    return res.str();
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
    // obs_pairwise_features are from .pnn1 file.
    Matrix3<double> obs_pairwise_features(length_s, length_s, 512);
    
    Matrix3<double> savelabel(seq->length_seq, seq->length_seq, 16, 0); //(*distances)(t, u)
    // From pnn1 file, we read features for each postion, and distance labels.
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
            // Get the extra pair wise feature in pnn1 file, but we did not use that.
            // Actually there is no extra pair wise feature in pnn1 file.
            for (int k = 0; !iss.eof(); k++) {
                double tmp;
                iss >> tmp;
                
                obs_pairwise_features[a1][a2][d++] = tmp; //cerr << tmp <<" ";
            } //cerr << endl;
        }
    }
    
    int padd = 0;
    //save to features to .h5 
    string saveh5filename; // Used when regenerating, the pair_window_feature will be stored to this file.
    
    if (mp->h5dir != "") {
        saveh5filename=mp->h5dir + "/" + pdbid + ".h5";
    } else {
        saveh5filename=pdbid + ".h5";
    }

    seq->h5file = saveh5filename ;
    // Read pair_position_feature from bioh5 file.
    Matrix3<double> pair_position_feature;
    pair_position_feature.readh5(seq->h5file,"/Data/pairPositionFeature");
    int pair_position_feature_dimension=30; // Change this if more pair position features added.
    
    
    bool feature_name_done=mp->feature_name_done;
    // Prepare the feature3D
    try {
      //seq is this
        seq->datah5 = new Bioh5;
        datah5->total_pair_window_feature=0;
        seq->Pnnloadmi(seq->pdbid, seq->h5file); // read from current dir.
        for (int i = 0; i < seq->length_seq; i++) {
            for (int j = i + 1; j < seq->length_seq; j++) {
                vector<string> feature_name;
                bool feature_has_padd=false;
                vector<pair<int, int> > wi1 = find_feature_window(i, j, mp->window_size, seq->length_seq);
                int offset = 0;
                int fp = 0;
		//-----
		// Start for position i and j
		//-----

		// Feature for position i and j independently
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
                        if(!feature_name_done)feature_name.push_back(get_single_feature_name(k,"first",di));
                        if (wi1[k].second >= 0)
                            savefeature[i][j][fp++] = obs_feature[wi1[k].second][di];
                        else
                            savefeature[i][j][fp++] = padd;
                        if(!feature_name_done)feature_name.push_back(get_single_feature_name(k,"second",di));
                    }
                    //}
                }

		// Feature for pair (i,j)
                offset = fp;
                wi1 = find_feature_window_pair(i, j, mp->pair_window_size, seq->length_seq);
                int dim_allpair = 11 + 10 + 3 +1 + pair_position_feature_dimension; // Add more pair feature here.
                for (unsigned k = 0; k < wi1.size(); k++) {
                    if (wi1[k].first < 0) { //padding at 
                        for (int di = 0; di < dim_allpair; di++) { //miroot[k](i, j);0-10, mipow[k](i, j);0-9,miLocalMax[k](i, j);0-2
                            savefeature[i][j][fp++] = padd;
                        }
                        feature_has_padd=true;
                    } else {
                        for (int di = 0; di < 11; di++) {
                            int a1 = wi1[k].first;
                            int a2 = wi1[k].second;
                            savefeature[i][j][fp++] = seq->datah5->mipow[di](a1, a2);
                            if(!feature_name_done)feature_name.push_back(get_pair_feature_name(k,wi1[k].first,wi1[k].second,"mipow",di));
                        }
                        for (int di = 0; di < 10; di++) {
                            int a1 = wi1[k].first;
                            int a2 = wi1[k].second;
                            savefeature[i][j][fp++] = seq->datah5->miroot[di](a1, a2);
                            if(!feature_name_done)feature_name.push_back(get_pair_feature_name(k,wi1[k].first,wi1[k].second,"miroot",di));
                        }
                        for (int di = 0; di < 3; di++) {
                            int a1 = wi1[k].first;
                            int a2 = wi1[k].second;
                            savefeature[i][j][fp++] = seq->datah5->miLocalMax[di](a1, a2);
                            if(!feature_name_done)feature_name.push_back(get_pair_feature_name(k,wi1[k].first,wi1[k].second,"milocalmax",di));
                        }

			{
			  int a1 = wi1[k].first;
			  int a2 = wi1[k].second;
			  savefeature[i][j][fp++] = seq->datah5->direct_information(a1, a2);
			  if(!feature_name_done)feature_name.push_back(get_pair_feature_name(k,wi1[k].first,wi1[k].second,"di",0));
			}

                        for (int di = 0; di < pair_position_feature_dimension; di++) {
			  int a1 = wi1[k].first;
			  int a2 = wi1[k].second;
			  savefeature[i][j][fp++] = pair_position_feature[a1][a2][di];
			  if(!feature_name_done)feature_name.push_back(get_pair_feature_name(k,wi1[k].first,wi1[k].second,"dope",di));
			}
			
                        // Add more pair feature here.
                    }
                }
                // output total feature number
                 if(!feature_name_done && !feature_has_padd){
                    for(int i=0;i<feature_name.size();i++){
                        mp->feature_name_string=mp->feature_name_string+(i>0?",":"")+feature_name[i];
                    }
                    mp->feature_name=feature_name;
                    mp->feature_name_done=true;
                    feature_name_done=true;
                }
                if( datah5->total_pair_window_feature==0)datah5->total_pair_window_feature=fp;
            }
        }
        //if (run_mode == _run_mode::training)
        //seq->datah5->file->close();
        //delete seq->datah5->file;
        //seq->datah5->file->close();
        //delete seq->datah5;
    } catch (int e) {
        fprintf(stderr, "reading h5 error\n");
    } catch (exception e) {
        fprintf(stderr, "Exception %s %s\n", seq->pdbid.c_str(), e.what());
    }
    
    if (bSavelabel) {
        cerr<<"[D0]Save feature\n";
        savelabel.writeh5(saveh5filename, "/distance");
        map<string,string> attribute;
        attribute["feature_name"]=mp->feature_name_string;
        savefeature.writeh5(saveh5filename, "/pair_window_feature",attribute);
    }

}
