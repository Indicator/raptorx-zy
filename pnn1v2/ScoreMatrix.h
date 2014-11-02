#ifndef SCOREMATRIX_H
#define SCOREMATRIX_H

#include <cstdio>
#include <cstring>
#include <iomanip>
#include <iostream>
#include <fstream>
#include <vector>
#include <map>
#include <assert.h>
#include <exception>

#include "Score.h"
using namespace std;

template < class T >
class Array3D {
public:
    void ***mat_ptr;
    int mats, rows, cols;

public:
    //Array3D(); //{mat_ptr=0; mats=rows=cols=0;};
    //Array3D(int mats, int rows, int cols); //{ mat_ptr=0; resize(mats, rows, cols); }
    //~Array3D(); // {free( mat_ptr);}
    //void resize(int mats, int rows, int cols);

    //Todo: combine this with zy's Matrix and Matrix3, to make it support hdf5, and 
    //exception throws.

    Array3D() {
        mat_ptr = 0;
        mats = rows = cols = 0;
    };

    Array3D(int mats, int rows, int cols) {
        mat_ptr = 0;
        resize(mats, rows, cols);
    };

    ~Array3D() {
        free(mat_ptr);
    };



void resize(int mats, int rows, int cols) {
    if (0 == mats || 0 == rows || 0 == cols) {
        cerr << " ERROR: Array3D-resize()" << mats << " mats; " << rows << " rows; " << cols << " cols." << endl;
        throw; // assert (0);
        //exit(0);
    }
    this->mats = mats;
    this->rows = rows;
    this->cols = cols;
    if (mat_ptr) free(mat_ptr);
    int header = mats * sizeof (T*);
    int header1 = mats * rows * sizeof (T*);
    int data = mats * rows * cols * sizeof (T);
    mat_ptr = (void***) malloc(header + header1 + data);
    memset(mat_ptr, 0, header + header1 + data);
    void** header_buf = (void**) (mat_ptr + mats); // second-level pointers
    T* buf = (T*) (header_buf + mats * rows);
    for (int k = 0; k < mats; k++) {
        mat_ptr[k] = header_buf + k*rows;
        for (int l = 0; l < rows; l++)
            mat_ptr[k][l] = buf + (k * rows + l) * cols;
    }
}
    
    T &operator() (int mat, int row, int col) throw (int, bad_exception) {
        if (mat >= mats || row >= rows || col >= cols || mats < 0 || row < 0 || col < 0) {
            cerr << "ERROR: Array3D()-&op() " << mat << " vs. " << mats << ";" << row << " vs. " << rows << "; " << col << " vs. " << cols << endl;
            throw 'x'; // assert (0);
            //exit(0);
        }
        return ((T***) mat_ptr)[mat][row][col];
    }

    T operator() (int mat, int row, int col) const {
        if (mat >= mats || row >= rows || col >= cols || mats < 0 || row < 0 || col < 0) {
            cerr << "ERROR: Array3D()-op()" << mat << " vs. " << mats << ";" << row << " vs. " << rows << "; " << col << " vs. " << cols << endl;
            throw; // assert (0);
            //exit(0);
        }
        return ((T***) mat_ptr)[mat][row][col];
    }
};

class ScoreMatrix {
public:
    int layers, id;
    double helper;
    int rows;
    int cols;
    Score default_value;
    void **rowptr;
    string name;

public:
    ScoreMatrix() ;
    ScoreMatrix(int rows, int cols, string n) ;
    /* Copy constructor */
    ScoreMatrix(const ScoreMatrix &m);// : rows(m.rows), cols(m.cols), default_value(m.default_value) ;
    ~ScoreMatrix() ;
    void resize(int rows, int cols);
    /* Fill all matrix values */
    void Fill(const Score &value);
    Score* &operator() (int row);
    Score* operator() (int row) const;
    Score &operator() (int row, int col) throw (int, bad_exception);
    Score operator() (int row, int col) const;
    void set(int row, int col, Score score);
    Score add(int row, int col, Score score);
    void divide(int row, int col, Score score);
    void clearRow(int row);
    void row_copy(int row, Score* dt);
    void row_divide(int row, Score scale);
    Score row_normalize(int row);
    void writetmp(string fn);
};

#endif
