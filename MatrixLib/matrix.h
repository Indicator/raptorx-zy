#ifndef MATRIX_H
#define MATRIX_H

#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include <cstring>
#include <stdlib.h>
#include <gsl/gsl_math.h>
#include <gsl/gsl_eigen.h>
#include <gsl/gsl_blas.h>

#include<stdio.h>
#include<vector>
#include<math.h>

#include<exception>

#ifdef H5_SUPPORT
#include "H5Cpp.h"
#include <H5DataSet.h>

#endif
#ifdef MATLAB_ENGINE
#include "engine.h"
#endif



enum MatrixExceptionCode{	// The error codes for MatrixException.
		DIM_NOT_MATCH=1,    // Dimension not match happens in these cases: 1)try to add or subtract one matrix from another matrix with different number of rows or columns; 2) try to compute A*B, when A has a different number of columns from the number of rows of B; 3) try to compute determinant, LU decompose or inverse a non-square matrix.
		INDEX_OUT=2,        // Index out of range happens when try to access a member outside the matrix
		NOT_FULL_RANK=3,		// Not full rank exception is thrown when trying to inverse a matrix with determinant = zero.
    NOT_SEMI_POSITIVE=4
    
	};

static const char* const errorMsg[] = {
	"Matrix exception 0 Unknown\n",
	"Matrix exception 1 Dimension not match\n",
	"Matrix exception 2 Index out of range\n", 
	"Matrix exception 3 Not full rank\n",
  "Matrix exception 4 Not positive semidefinite\n"
	};

class MatrixException : public std::exception { 
	public:
	unsigned int matrixExceptionType;
	MatrixException(){	
		matrixExceptionType=0;
	}
	MatrixException(int type){
		matrixExceptionType=type;		
	}
	virtual const char* what() const throw() {
		if(matrixExceptionType<=3)
			return errorMsg[matrixExceptionType];
		else
			return errorMsg[0];
	}
};

inline std::vector<std::string> matrixStringSplit(std::string s,std::string token)
{
	//input s, and seperator string token
	//continous tokens will not appear in final vector of string.
	std::vector<std::string> rst;
	int h=0;
	int p1;
	p1=s.find(token,h);
	while(std::string::npos!=p1) {
		//if(h!=0)
		if(p1-h>0)
			rst.push_back(s.substr(h,p1-h));
		//else
			//rst.push_back(s.substr(h,p1-h+1));
		h=p1+1;
		p1=s.find(token,h);
	}
	//if(h==0)rst.push_back(s);
	//else
		rst.push_back(s.substr(h));
	return rst;
}


class Matrix
{
private:
        bool no_delete_flag;
	double* data;//Point of the data
        double** dataptr;
	int nRow;//The total number of rows in this matrix;
	int nCol;//The total number of columns in this matrix;
public:
	/**
	* @brief Constructor.
	* @return An empty matrix.
	*/
	Matrix();
	/**
	* @brief Constructor.
	* @param x,y are the dimension of the matrix to be created.
	* @return A zero matrix with dimension x*y.
	*/
	Matrix(int x,int y);
	/**
	* @brief Copy constructor.
	* @param Another matrix, x, to be copied.
	* @return The copy of x.
	*/
	Matrix(const Matrix &x);
	~Matrix();
	/**
	* @brief 
	* @param 
	* @return 
	*/

        inline double* operator [] (const unsigned int& i) {
                return (dataptr[i]);
        }
        inline double* operator [] (const unsigned int& i) const {
                return (dataptr[i]);
        }

	/**
	* @brief Resize a matrix and set all items to zeros.
	* @param The target dimensions to be resized to.
	* @return None.
	*/
	int getnrow(void) const;
	int getncol(void) const;
	
	void resize(int x,int y);	
	//get and set an item in matrix
	/**
	* @brief Access and set an item in this matrix.
	* @param The coordinates of the element in this matrix.
	* @return The value or the reference of the element.
	* @throw A INDEX_OUT MatrixException when the given index is less than 0 or larger than the dimension.
	*/
	double operator() (int row, int col) const ;	
	/**
	* @brief Access and set an item in this matrix.
	* @param The coordinates of the element in this matrix.
	* @return The value or the reference of the element.
	* @throw A INDEX_OUT MatrixException when the given index is less than 0 or larger than the dimension.
	*/
	double &operator() (int row, int col);
	/**
	* @brief Compute the multiplication of two matrices.
	* @param the coordinates of the element in this matrix.
	* @return The value or the reference of the element.
	* @throw It will throw a "Dimension not match" MatrixException, if the number of columns in the first matrix is not equal to the number of rows in the second matrix.
	*/
	Matrix operator*(const Matrix &a) const;	
	Matrix operator*(const double &a) const;	
	/**
	* @brief Matrix assign.
	* @param One matrix.
	* @return Return the copy of the given matrix;
	*/
	Matrix& operator=(const Matrix &a) ;	
        
        
        /**
	* @brief Assign a scalar to every element in this matrix.
	* @param One matrix.
	* @return Return the copy of the given matrix;
	*/
	Matrix& operator=(const double &a) ;	
	
	/**
	* @brief Matrix addition.
	* @param One matrix.
	* @return  Return the addition result matrix;
	* @throw It will throw a "Dimension not match" MatrixException, if two matices have different dimensions..
	*/
	const Matrix operator+(const Matrix &a) const;	
	/**
	* @brief Matrix subtraction.
	* @param One matrix.
	* @return  Return the substraction result of this matrix minus the given one;
	* @throw It will throw a "Dimension not match" MatrixException, if two matices have different dimensions.
	*/
	Matrix operator-(const Matrix &a) const;	
	/**
	* @brief Matrix addition, the result will replace the current matrix.
	* @param One matrix to be added to the current matrix.
	* @return None
	* @throw It will throw a "Dimension not match" MatrixException, if two matices have different dimensions.
	*/
	void add(const Matrix &a);
	void AddScalar(const double &a);
	/**
	* @brief Matrix subtraction, the result will replace the current matrix.
	* @param One matrix to be subtracted from the current matrix.
	* @return None
	* @throw It will throw a "Dimension not match" MatrixException, if two matices have different dimensions.
	*/
	void subtract(const Matrix &a);
	/**
	* @brief Matrix multiplies with a double scalar, the result will replace the current matrix.
	* @param a scalar to be multiplied to the current matrix.
	* @return None.
	*/
	void Multiply(const double &a);
	/**
	* @brief Multiply a matrix aa from the left side of the current matrix.The result will replace the current matrix.
	* @param A matrix to be multiplied.
	* @return None.
	* @throw It will throw a "Dimension not match" MatrixException, if the number of columns in the left matrix is not equal to the number of rows in the current matrix.
	*/
	void leftMultiply(const Matrix &aa);
	/**
	* @brief Multiply a matrix aa from the right side of the current matrix.The result will replace the current matrix.
	* @param A matrix to be multiplied.
	* @return None.
	* @throw It will throw a "Dimension not match" MatrixException, if the number of columns in the current matrix is not equal to the number of rows in the right matrix.
	*/
	void rightMultiply(const Matrix &aa);	
	void DotDivide(const Matrix &a);
        void DotMultiple(const Matrix &a);
	//Matrix inversion, it throws matrix exception
	//if the matrix to be inverse is singular
	/**
	* @brief Compute the inversion of this matrix using LU decomposition.
	* @param A matrix r where the result will be stored.
	* @return None.
	* @throw It will throw a "Dimension not match" MatrixException if this matrix is not square. It will throw a "Not full rank" MatrixException if this matrix is singular.
	*/
	void GetInversion(Matrix &r);	
        /**
         * New version of GetInversion. It will call GetInversion or call matlab engine
         * if configured in compilation.
         * @param xx
         */
        void get_inversion(Matrix &xx);
	/**
	* @brief Transpose the matrix. The result will replace the current matrix.
	* @param None.
	* @return  None.
	*/
	void trans();	
	/**
	* @brief Compute the trace of the matrix.
	* @param None
	* @return  Return the trace of a square matrix, or the pseudo-trace of a non-square matrix.
	*/
	double trace();	
	/**
	* @brief Compute the determinant of this matrix using LU decomposition.
	* @param None
	* @return  Return the determinant of this matrix.
	* @throw It will throw a "Dimension not match" MatrixException if this matrix is not square.
	*/
	double determinant();
	/**
	* @brief Compute the Frobenius norm of this matrix.
	* @param None
	* @return  Return the Frobenius norm
	*/
	double fnorm();
	/**
	* @brief LU decompose a matrix with partial pivoting , store low triangular matrix in ll, upper triangular matrix in uu, the permutation matrix is stored in pp.
	* @param Matrix ll, holds the result of the lower triangular matrix; Matrix uu, holds the result of the upper triangular matrix; Matrix pp, holds the permutation matrix used in pivoting.
	* @return  Number of flips of rows in pivoting
	*/
	int LUPdecompose(Matrix &ll, Matrix &uu, Matrix &pp);
        /**
         * Normalize itself. Do nothing is sum of this matrix = 0 .
         */
        void normalize(void);
	/**
	* @brief Output all item matrix to standard output
	* @param None
	*/
	void Print(void);	
  
  /**
	* @brief Output all item matrix to a file.
	* @param None
	*/
	void Dlmwrite(std::string);	
//#ifdef H5_SUPPORT
        int readh5(std::string fn1, std::string dsname="/data");
        void writeh5(std::string fn1, std::string datasetname);
//#endif
	/**
	 * @brief Matrix addition: c = a + b
	 * @param Matrix a,b,c. c=a+b
	 * @throw It will throw a "Dimension not match" MatrixException, if two matices have different dimensions.
	 */
	friend void MatrixAdd(const Matrix & a,const Matrix & b, Matrix & c);	
	/**
	 * @brief Matrix subtraction c = a - b
	 * @param Matrix a,b,c. c=a-b
	 * @throw It will throw a "Dimension not match" MatrixException, if two matices have different dimensions.
	 */
	friend void MatrixSub(const Matrix & a,const Matrix & b, Matrix & c);	
	/**
	 * @brief Matrix mutiplication, c=a*b
	 * @param Matrix a,b,c. c=a*b
	 * @throw It will throw a "Dimension not match" MatrixException, if the number of columns in the first matrix is not equal to the number of rows in the second matrix.
	 */
	friend void MatrixMultiply(const Matrix & a,const Matrix & b, Matrix & c);	
	friend double MatrixDotProduct(const Matrix &a,const Matrix &b) ;
/**
* @brief Generate eye matrix of dim x dim.
* @param The dimension of the matrix to be constructed.
* @return None.
*/
void EyeMat(int dim);
/**
* @brief Make a diagnal matrix with diagnal values of vector x.
* @param A double vector x, which contains all the diagnal elements in the Matrix to be constructed.
* @return None.
*/
void DiagMat(std::vector<double> );
/**
* @brief Make a zero matrix with given dimensions.
* @param int x, int y are two dimensions.
* @return None.
*/
void ZeroMat(int,int);
double * GetPtr(void);
void SetPtr(double *);
const double * GetPtr(void) const;
int size(void);


/**
* @brief Test constructor.
* @param None.
* @return None.
*/
	friend void tst_matrix(void);
/**
* @brief Test constructor with dimension.
* @param None.
* @return None.
*/
	friend void tst_matrix_x_y(void);
/**
* @brief Test copy constructor.
* @param None.
* @return None.
*/
	friend void tst_matrix_copy(void);
/**
* @brief Test resize().
* @param None.
* @return None.
*/	
	friend void tst_resize_x_y(void);
/**
* @brief Test EyeMat().
* @param None.
* @return None.
*/
	friend void tst_eyemat(void);
/**
* @brief Test DiagMat().
* @param None.
* @return None.
*/
	friend void tst_diagmat(void);
/**
* @brief Test LUPdecompose().
* @param None.
* @return None.
*/
	friend void tst_lupdecompose(void);
/**
* @brief Test computing fnorm().
* @param None.
* @return None.
*/
	friend void tst_fnorm(void);
/**
* @brief Test determinant().
* @param None.
* @return None.
*/
	friend void tst_determinant(void);
/**
* @brief Test MatrixAdd().
* @param None.
* @return None.
*/
	friend void tst_matrixadd(void);
/**
* @brief Test MatrixSub().
* @param None.
* @return None.
*/
	friend void tst_matrixsub(void);
/**
* @brief Test MatrixMultiply().
* @param None.
* @return None.
*/
	friend void tst_matrixmultiply(void);
/**
* @brief Test trans().
* @param None.
* @return None.
*/
	friend void tst_trans(void);
	/**
* @brief Test trace().
* @param None.
* @return None.
*/
	friend void tst_trace(void);
	/**
* @brief Test GetInversion().
* @param None.
* @return None.
*/
	friend void tst_getinversion(void);
	/**
* @brief Test add().
* @param None.
* @return None.
*/
	friend void tst_add(void);
	/**
* @brief Test subtract().
* @param None.
* @return None.
*/
	friend void tst_subtract(void);
	/**
* @brief Test multiply().
* @param None.
* @return None.
*/
	friend void tst_multiply(void);
	/**
* @brief Test leftMultiply().
* @param None.
* @return None.
*/
	friend void tst_leftmultiply(void);
	/**
* @brief Test rightMultiply().
* @param None.
* @return None.
*/
	friend void tst_rightmultiply(void);
	/**
* @brief Test operator+.
* @param None.
* @return None.
*/
	friend void tst_operator_add(void);
	/**
* @brief Test operator-.
* @param None.
* @return None.
*/
	friend void tst_operator_subtract(void);
	/**
* @brief Test operator*.
* @param None.
* @return None.
*/
	friend void tst_operator_multiply(void);
	/**
* @brief Test operator=.
* @param None.
* @return None.
*/
	friend void tst_operator_assign(void);
	/**
* @brief Test operator().
* @param None.
* @return None.
*/
	friend void tst_operator_get(void);
	/**
* @brief Test operator().
* @param None.
* @return None.
*/
	friend void tst_operator_set(void);
	friend int Dlmread(Matrix &a, std::string fn);
  friend void sqrtm(const Matrix &a, Matrix& b);
  friend void absm(Matrix &a);
  friend double maxm(const Matrix &a);
  friend double minm(const Matrix &a);
  friend std::vector<double> submatrix(const Matrix &a, int i,int endi,int j,int endj);
  friend std::vector<unsigned int> submatrix_index(const Matrix&a, int i,int endi,int j,int endj);
  friend std::vector<std::pair<double,unsigned int> > submatrix_value_index(const Matrix&a, int i,int endi,int j,int endj);
  
};



#endif // MATRIX_H
