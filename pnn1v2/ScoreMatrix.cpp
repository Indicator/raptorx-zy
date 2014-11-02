#include "ScoreMatrix.h"



//template Array3D<int> tempobj1();
void _temp_function(){

    //Array3D<double>* tempobj=new Array3D<double>(0,0,0);
    //tempobj->resize(0,0,0);
    //delete tempobj;
}
ScoreMatrix::ScoreMatrix() {
    rowptr = 0;
    rows = cols = 0;
    default_value = 0;
    name = "";
};



ScoreMatrix::ScoreMatrix(int rows, int cols, string n) {
    rowptr = 0;
    default_value = 0;
    name = n;
    resize(rows, cols);
    layers = 0;
    id = 0;
    helper = 0;
}

/* Copy constructor */
ScoreMatrix::ScoreMatrix(const ScoreMatrix &m) : rows(m.rows), cols(m.cols), default_value(m.default_value) {
    rowptr = 0;
    resize(rows, cols);
    for (int i = 0; i < rows * cols; i++) ((Score**) rowptr)[0][i] = ((Score**) m.rowptr)[0][i];
}

ScoreMatrix::~ScoreMatrix() {
    free(rowptr);
}

void ScoreMatrix::resize(int rows, int cols) {
    if (0 == rows || 0 == cols) {
        cerr << " ERROR: ScoreMatrix(" << name << ")-resize()" << rows << " rows; " << cols << " cols." << endl;
        throw; // assert (0);
        //exit(0);
    }
    this->rows = rows;
    this->cols = cols;
    if (rowptr) free(rowptr);
    int header = rows * sizeof (Score*);
    int data = rows * cols * sizeof (Score); //size needed
    rowptr = (void**) malloc(header + data); // return a void* , converted into void**
    memset(rowptr, 0, header + data);
    Score* buf = (Score*) (rowptr + rows);
    for (int k = 0; k < rows; k++) {
        rowptr[k] = buf + k*cols; //left:header, right data
    }
}
 
	void ScoreMatrix::Fill(const Score &value){ 
		default_value=value; 
		Score* buf=(Score*)(rowptr+rows);
		for (int i = 0; i < rows * cols; i++) 
			buf[i] = value;
	}
	Score* & ScoreMatrix::operator() (int row){
		if (row>=rows || row<0) {
			cerr << "ERROR: ScoreMatrix("<<name<<")-* &op() " << row << " vs. " << rows << endl;
  			throw; // assert (0);
			//exit(0);
		}
		return ((Score**)rowptr)[row];
	}
	Score* ScoreMatrix::operator() (int row) const {
		if (row>=rows || row<0) {
			cerr << "ERROR: ScoreMatrix("<<name<<")-* op()" << row << " vs. " << rows << endl;
  			throw; // assert (0);
			//exit(0);
		}
		return ((Score**)rowptr)[row];
	}
	Score & ScoreMatrix::operator() (int row, int col) throw (int,bad_exception) {
		if (row>=rows || col>=cols || row<0 || col<0) {
			cerr << layers <<" " << id << " " << helper << "ERROR: ScoreMatrix("<<name<<")-&op() " << row << " vs. " << rows << "; " << col << " vs. " << cols<< endl;
  			throw 'x'; // assert (0);
			//exit(0);
		}
		return ((Score**)rowptr)[row][col];
	}
	Score ScoreMatrix::operator() (int row, int col) const {
		if (row>=rows || col>=cols || row<0 || col<0) {
			cerr << "ERROR: ScoreMatrix("<<name<<")-op()" << row << " vs. " << rows << "; " << col << " vs. " << cols<< endl;
  			throw; // assert (0);
			//exit(0);
		}
		return ((Score**)rowptr)[row][col];
	}

	void ScoreMatrix::set(int row, int col, Score score){
		if (row>=rows || col>=cols || row<0 || col<0) {
			cerr << "ERROR: ScoreMatrix("<<name<<")-set " << row << " vs. " << rows << "; " << col << " vs. " << cols<< endl;
  			assert (0);
			//exit(0);
		}
		((Score**)rowptr)[row][col] = score;
	}

	Score ScoreMatrix::add(int row, int col, Score score){
		if (row>=rows || col>=cols || row<0 || col<0) {
			cerr << "ERROR: ScoreMatrix("<<name<<")-add " << row << " vs. " << rows << "; " << col << " vs. " << cols<< endl;
  			assert (0);
			//exit(0);
		}
		Score* pRow=((Score**)rowptr)[row];
		pRow[col] += score;
		return pRow[col];
	}

	void ScoreMatrix::divide(int row, int col, Score score){
		if (row>=rows || col>=cols || row<0 || col<0) {
			cerr << "ERROR: ScoreMatrix("<<name<<")-divide " << row << " vs. " << rows << "; " << col << " vs. " << cols<< endl;
  			assert (0);
			//exit(0);
		}
		((Score**)rowptr)[row][col] /= score;
	}

	void ScoreMatrix::clearRow(int row){ memset(((Score**)rowptr)[row], 0, sizeof(Score)*cols); }

	void ScoreMatrix::row_copy(int row, Score* dt){
		memcpy(((Score**)rowptr)[row], dt, sizeof(Score)*cols);
	}

	void ScoreMatrix::row_divide(int row, Score scale){
		Score* pRow=((Score**)rowptr)[row];
		for (int j=0; j<cols; j++)
			pRow[j]/=scale;
	}

	Score ScoreMatrix::row_normalize(int row){
		Score scale=0;
		Score* pRow=((Score**)rowptr)[row];
		for (int j=0; j<cols; j++)
			scale+=pRow[j];
		for (int j=0; j<cols; j++){
			if (pRow[j]==0) continue;
			pRow[j]/=scale;
		}
		return scale;
	}
        void ScoreMatrix::writetmp(string fn){
            ofstream ofs(fn.c_str(),ofstream::out);
            ofs<<setprecision(5);
            for(int i=0;i<rows;i++){
                for(int j=0;j<cols;j++){
                    ofs<<((Score**)rowptr)[i][j]<<" ";
                }
                ofs<<endl;
            }
            ofs.close();
                
        }
