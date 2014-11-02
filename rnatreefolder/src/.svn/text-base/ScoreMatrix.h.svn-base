#ifndef SCOREMATRIX_H
#define SCOREMATRIX_H

#include <cstdio>
#include <cstring>
#include <iomanip>
#include <iostream>
#include <fstream>
#include "Score.h"
using namespace std;

class ScoreMatrix {

  int layers;
  int rows;
  int cols;
  Score *data;  

public:
  ScoreMatrix (){data=0; rows=cols=0;};
  ScoreMatrix (int rows, int cols){
  data=0;
  resize(rows, cols);
};
  ScoreMatrix (const ScoreMatrix &m):rows(m.rows), cols(m.cols), data(m.data){};
  ~ScoreMatrix(){delete data;}

  inline void resize(int rows, int cols){
    if (0==rows || 0==cols)
    {
      cerr << " ERROR: " << rows << " rows; " << cols << " cols." << endl;
      getchar();
      exit(0);
    }
		
    this->rows = rows; this->cols=cols;
    if (data) delete data;
    data = new Score[rows*cols];
  }

  void Fill (const Score &value){
  for (int i = 0; i < rows * cols; i++)
    data[i] = value;
};

  inline Score &operator() (int row, int col){
    if (row>=rows || col>=cols)
    {
      cerr << "ERROR: ScoreMatrix " << row << " vs. " << rows << "; " << col << " vs. " << cols<< endl;
      getchar();
      exit(0);
    }
    return data[(row * cols + col)];
  }

  inline  Score operator() (int row, int col) const {
    if (row>=rows || col>=cols)
    {
      cerr << "ERROR: ScoreMatrix" << row << " vs. " << rows << "; " << col << " vs. " << cols<< endl;
      getchar();
      exit(0);
    }
    return data[(row * cols + col)];
  }

  inline void set(int row, int col, Score score){
    if (row>=rows || col>=cols) {
      cerr << "ERROR: ScoreMatrix " << row << " vs. " << rows << "; " << col << " vs. " << cols<< endl;
      getchar();
      exit(0);
    }
    data[(row * cols + col)] = score;
  }

  inline Score add(int row, int col, Score score){
    if (row>=rows || col>=cols) {
      cerr << "ERROR: ScoreMatrix " << row << " vs. " << rows << "; " << col << " vs. " << cols<< endl;
      getchar();exit(0);
    }
    data[(row * cols + col)] += score;
    return data[(row * cols + col)];
  }

  inline void divide(int row, int col, Score score){
    if (row>=rows || col>=cols) {
      cerr << "ERROR: ScoreMatrix " << row << " vs. " << rows << "; " << col << " vs. " << cols<< endl;
      getchar();exit(0);
    }
    data[(row * cols + col)] /= score;
  }

  inline void clearRow(int row){ memset(data+row*cols, 0, sizeof(Score)*cols); }
  inline Score* operator[] (int row){ return &data[row*cols]; }

  inline void row_divide(int row, Score scale){
    for (int i=row*cols, j=0; j<cols; i++, j++)
      data[i]/=scale;
  }

  inline Score row_normalize(int row){
    Score scale=0;
    for (int i=row*cols, j=0; j<cols; i++, j++)
      scale+=data[i];
    for (int i=row*cols, j=0; j<cols; i++, j++){
      if (data[i]==0) continue;
      data[i]/=scale;
    }
    return scale;
  }

};

/* Constructor */
//ScoreMatrix::ScoreMatrix (int rows, int cols)

/* Copy constructor */
//ScoreMatrix::ScoreMatrix (const ScoreMatrix &m) : rows(m.rows), cols(m.cols), data(m.data){}

/* Fill all matrix values */
//void ScoreMatrix::Fill (const Score &value)

#endif
