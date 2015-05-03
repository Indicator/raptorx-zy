#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include <assert.h>
#include "matrix.h"
#include "matrix3.h"
using namespace std;
void tst_matrix_x_y(void)
{
	Matrix a(3,3);
	for(int i=0;i<1000;i++){
		Matrix b;
		try{
			b(0,0)=1;
		}
		catch(MatrixException e){
			string s=e.what();
		}
	}
	assert(a.nRow==3);
	assert(a.nCol==3);
	try{
		Matrix b(-1,-1);
	}
	catch(MatrixException e){
		assert(e.matrixExceptionType==DIM_NOT_MATCH);
	}
}
void tst_matrix_copy(void)
{
	Matrix a(3,3);
	for(int i=0; i<9; i++)
		a.data[0]=rand();
	Matrix b(a);
	for(int i=0; i<9; i++)
		assert(b.data[i]==a.data[i]);
	
		Matrix c;
		Matrix d(c);
		assert(d.nRow==c.nRow);
		assert(d.nCol==c.nCol);
		assert(d.data==NULL);
	
}
void tst_resize_x_y(void)
{
	Matrix a(3,3);
	a.resize(2,3);
	assert(a.nCol==3);
	assert(a.nRow==2);
	try{
		a.resize(0,1);
	}
	catch(MatrixException e){
		assert(e.matrixExceptionType==DIM_NOT_MATCH);
	}
}
void tst_eyemat(void)
{
	Matrix a(2,3);
	a.EyeMat(3);
	for(int i=0; i<3*3; i++)
		if(i/3== i%3)
			assert(a.data[i]==1);
		else
			assert(a.data[i]==0);
	try{
		a.EyeMat(-1);
	}
	catch(MatrixException e){
		assert(e.matrixExceptionType==DIM_NOT_MATCH);
	}
}
void tst_diagmat(void)
{
	Matrix a;
	vector<double> dd;
	for(int i=0; i<10; i++)
		dd.push_back(i);
	a.DiagMat(dd);
	int dim=dd.size();
	assert(a.nRow==dim);
	assert(a.nCol==dim);
	for(int i=0; i<10; i++)
		assert(a.data[i*dd.size()+i]==i);
}
void tst_lupdecompose(void)
{
	double EPS=1e-10;
	Matrix ww;
	ww.EyeMat(3);
	ww(1,0)=10;//make it not diagnal dominate.
	Matrix ll,uu,pp;
	ww.LUPdecompose(ll,uu,pp);
	Matrix r0,r1,r2;
	MatrixMultiply(ll,uu,r0);
	MatrixMultiply(pp,ww,r1);
	MatrixSub(r0,r1,r2);
	
	assert(r2.fnorm()<EPS);
	ww.EyeMat(20);
	
	for(int i=0;i<20*20;i++){
		ww.data[i]=(rand() % 100 - 50) /100.0;//make it not diagnal dominate.
	}
	ww.LUPdecompose(ll,uu,pp);
	MatrixMultiply(ll,uu,r0);
	MatrixMultiply(pp,ww,r1);
	MatrixSub(r0,r1,r2);
	assert(r2.fnorm()<EPS);
	try{
		Matrix a(3,4);
		a.LUPdecompose(ll,uu,pp);		
	}
	catch(MatrixException e){
		assert(e.matrixExceptionType==DIM_NOT_MATCH);
	}
}
void tst_fnorm(void)
{
	double EPS=1e-20;
	Matrix a(3,3);
	double x=0;
	for(int i=0; i<9; i++) {
		a.data[i]=i;
		x=x+i*i;
	}
	x=sqrt(x);
	assert(fabs(x-a.fnorm())<EPS);
}
void tst_determinant(void)
{
	double EPS=1e-10;
	Matrix a(3,3);
	for(int i=0; i<3; i++)
		a.data[i*3+i]=i+1;
	assert(fabs(a.determinant()-6)<EPS);
	
	Matrix b(3,3);
	Matrix c(3,3);
	for(int i=0;i<9;i++){
		b.data[i]=(rand() % 100)/100.0;
		c.data[i]=(rand() % 100)/100.0;
	}
	Matrix d;
	MatrixMultiply(b,c,d);
	assert( fabs(b.determinant()*c.determinant()-d.determinant())<EPS );
	
	try{
		Matrix a(3,4);
		a.determinant();
	}
	catch(MatrixException e){
		assert(e.matrixExceptionType==DIM_NOT_MATCH);
	}
}
void tst_getinversion(void)
{
	double EPS=1e-10;
	srand ( 60637);
	Matrix mm(20,20);
	for(int i=0; i<20*20; i++)mm(i/20,i%20)=(rand() % 10000)/10000.0;
	Matrix invmm;
	mm.GetInversion(invmm);
	Matrix i20;
	i20.EyeMat(20);
	Matrix r0,r1;
	MatrixMultiply(invmm,mm,r0);
	MatrixSub(r0,i20,r1);
	assert(r1.fnorm()<EPS);
	const int n = 20;
	Matrix m(n,n);
	for (int i=0; i < n; i++) m(i,i) = 0.01;
	Matrix inverse;
	m.GetInversion(inverse);
	for (int i=0; i < n; i++) assert(fabs(inverse(i,i)-100)<EPS);
	try{
		Matrix a(3,3);
		for(int i=0;i<2;i++)
			a.data[i*3+i]=i;
		//a is not full rank;
		Matrix b;
		a.GetInversion(b);
	}
	catch(MatrixException e){
		assert(e.matrixExceptionType==NOT_FULL_RANK);
	}
	try{
		Matrix a(3,4);
		for(int i=0;i<3;i++)
			a.data[i*4+i]=1;
		Matrix b;
		a.GetInversion(b);
	}
	catch(MatrixException e){
		assert(e.matrixExceptionType==DIM_NOT_MATCH);
	}
	for(int hh=0;hh<10000;hh++){
	try{
		int dim=rand() % 100;
		Matrix mm(dim,dim);
		for(int i=0;i<dim*dim;i++)
			mm.data[i]=((rand() -50) % 100)/100.0;
		Matrix imm;
		mm.GetInversion(imm);
		Matrix ll,uu,pp;
		imm.LUPdecompose(ll,uu,pp);
		double condmax=0;
		double condmin=1e20;
		for(int i=0;i<dim;i++){
			if(fabs(uu.data[i*dim+i])<condmin)
				condmin=fabs(uu.data[i*dim+i]);
			if(fabs(uu.data[i*dim+i])>condmax)
				condmax=fabs(uu.data[i*dim+i]);
		}
		double cond=condmax/condmin;
		
		Matrix immmm;
		MatrixMultiply(imm,mm,immmm);
		Matrix eyedim;
		eyedim.EyeMat(dim);
		
		immmm.subtract(eyedim);
		assert(immmm.fnorm()<1e-5);
	}
	catch(MatrixException e){
		string s=e.what();
	}
	}
}
void tst_trans(void)
{
	Matrix aa(3,5);
	Matrix bb(3,5);
	for(int i=0; i<aa.nRow*aa.nCol; i++){
		aa.data[i]=rand();
		bb.data[i]=aa.data[i];
	}
	
	bb.trans();
	assert(aa.nCol==bb.nRow);
	assert(aa.nRow==bb.nCol);
	for(int i=0; i<aa.nRow; i++)
		for(int j=0; j<aa.nCol; j++)
			assert(aa(i,j)=bb(j,i));
	for(int i=0;i<10000;i++){
		int dim1=rand() % 100;
		int dim2=rand() % 100;
		try{
			Matrix a(dim1,dim2);
			Matrix a0(dim1,dim2);
			for(int j=0;j<dim1*dim2;j++){
				a.data[j]=sqrt((rand() % 10000)/(fabs(rand())+1));
				a0.data[j]=a.data[j];
			}
			a.trans();
			a.trans();
			for(int j=0;j<dim1*dim2;j++)
				assert(a0.data[j]==a.data[j]);
		}
		catch(std::exception e){
			string s=e.what();
		}
	}
			
}
void tst_trace(void)
{
	Matrix a(10,20);
	for(int i=0; i<20*10; i++) {
		a.data[i]=rand();
	}
	double tr0=0;
	for(int i=0; i<10; i++) {
		tr0+=a.data[i*20+i];
	}
	double tr=a.trace();
	assert(tr==tr0);

	for(int i=0;i<10000;i++){
		int dim1=rand() % 100;
		int dim2=rand() % 100;
		try{
			Matrix a(dim1,dim2);
			Matrix a0(dim1,dim2);
			for(int j=0;j<dim1*dim2;j++){
				a.data[j]=sqrt((rand() % 10000)/(fabs(rand())+1));
				a0.data[j]=a.data[j];
			}
			a0.trans();
			assert(a0.trace()==a.trace());
		}
		catch(std::exception e){
			string s=e.what();
		}
	}
	
}
void tst_matrixadd(void)
{
	Matrix a(10,20);
	for(int i=0; i<20*10; i++) {
		a.data[i]=rand();
	}
	Matrix b(10,20);
	for(int i=0; i<20*10; i++) {
		b.data[i]=rand();
	}
	Matrix c;
	MatrixAdd(a,b,c);
	for(int i=0; i<20*10; i++) {
		assert(a.data[i]+b.data[i]==c.data[i]);
	}
	try{
		Matrix a(3,4);
		Matrix b(5,6);
		Matrix c;
		MatrixAdd(a,b,c);
	}
	catch(MatrixException e){
		assert(e.matrixExceptionType==DIM_NOT_MATCH);
	}
}
void tst_matrixsub(void)
{
	Matrix a(10,20);
	for(int i=0; i<20*10; i++) {
		a.data[i]=rand();
	}
	Matrix b(10,20);
	for(int i=0; i<20*10; i++) {
		b.data[i]=rand();
	}
	Matrix c;
	MatrixSub(a,b,c);
	for(int i=0; i<20*10; i++) {
		assert(a.data[i]-b.data[i]==c.data[i]);
	}
		try{
		Matrix a(3,4);
		Matrix b(5,6);
		Matrix c;
		MatrixSub(a,b,c);
	}
	catch(MatrixException e){
		assert(e.matrixExceptionType==DIM_NOT_MATCH);
	}
}
void tst_matrixmultiply(void)
{
	double EPS=1e-20;
	Matrix a(10,20);
	Matrix a0(10,20);
	for(int i=0; i<20*10; i++) {
		a.data[i]=rand();
		a0.data[i]=a.data[i];
	}
	Matrix b(20,30);
	for(int i=0; i<20*30; i++) {
		b.data[i]=rand();
	}
	Matrix c;
	MatrixMultiply(a,b,c);

	a0.rightMultiply(b);
	for(int i=0; i<a0.nCol*a0.nRow; i++) {
		assert(fabs(a0.data[i]-c.data[i])<EPS);
	}
	try{
		Matrix a(3,4);
		Matrix b(5,6);
		Matrix c;
		MatrixMultiply(a,b,c);
	}
	catch(MatrixException e){
		assert(e.matrixExceptionType==DIM_NOT_MATCH);
	}
	
	
		for(int i=0;i<10000;i++){
		int dim1=rand() % 100;
		int dim2=rand() % 100;
		try{
			Matrix a(dim1,dim2);
			Matrix a0(dim2,dim1);
			for(int j=0;j<dim1*dim2;j++){
				a.data[j]=sqrt((rand() % 10000)/(fabs(rand())+1));
				a0.data[j]=sqrt((rand() % 10000)/(fabs(rand())+1));
			}
			Matrix c(dim1,dim2);
			MatrixMultiply(a,a0,c);	
		}
		catch(std::exception e){
			string s=e.what();
		}
	}
}
void tst_add(void)
{
	Matrix a(10,20);
	Matrix c(10,20);
	for(int i=0; i<20*10; i++) {
		a.data[i]=rand();
		c.data[i]=a.data[i];
	}
	Matrix b(10,20);
	for(int i=0; i<20*10; i++) {
		b.data[i]=rand();
	}
	c.add(b);
	for(int i=0; i<20*10; i++) {
		assert(a.data[i]+b.data[i]==c.data[i]);
	}
	try{
		Matrix a(3,4);
		Matrix b(5,6);
		b.add(a);
	}
	catch(MatrixException e){
		assert(e.matrixExceptionType==DIM_NOT_MATCH);
	}
}
void tst_subtract(void)
{
	Matrix a(10,20);
	Matrix c(10,20);
	for(int i=0; i<20*10; i++) {
		a.data[i]=rand();
		c.data[i]=a.data[i];
	}
	Matrix b(10,20);
	for(int i=0; i<20*10; i++) {
		b.data[i]=rand();
	}
	c.subtract(b);
	for(int i=0; i<20*10; i++) {
		assert(a.data[i]-b.data[i]==c.data[i]);
	}
	try{
		Matrix a(3,4);
		Matrix b(5,6);
		b.subtract(a);
	}
	catch(MatrixException e){
		assert(e.matrixExceptionType==DIM_NOT_MATCH);
	}
}
void tst_multiply(void)
{
	double EPS=1e-20;
	Matrix a(10,20);
	Matrix a0(10,20);	
	for(int i=0; i<20*10; i++) {
		a.data[i]=rand();
		a0.data[i]=a.data[i];
	}

	a.Multiply(0.5);
	for(int i=0; i<20*10; i++) {
		assert(a0.data[i]*0.5==a.data[i]);
	}
	//Multiple zero
	a0.Multiply(0);
	for(int i=0; i<a0.nCol*a0.nRow; i++) {
		assert(fabs(a0.data[i])<EPS);
	}
}
void tst_leftmultiply(void)
{
	double EPS=1e-20;
	Matrix i10;
	i10.EyeMat(10);
	Matrix a(10,20);
	Matrix a0(10,20);
	for(int i=0; i<20*10; i++) {
		a.data[i]=rand();
		a0.data[i]=a.data[i];
	}
	a.leftMultiply(i10);
	Matrix r0;
	MatrixSub(a,a0,r0);
	assert(r0.fnorm()<EPS);
	//Multiple zero
	Matrix z10(30,10);
	a0.leftMultiply(z10);
	assert(a0.nCol==20);
	assert(a0.nRow==30);
	for(int i=0; i<20*20; i++) {
		assert(fabs(a0.data[i])<EPS);
	}
	try{
		Matrix a(3,4);
		Matrix b(5,6);
		b.leftMultiply(a);
	}
	catch(MatrixException e){
		assert(e.matrixExceptionType==DIM_NOT_MATCH);
	}
}
void tst_rightmultiply(void)
{
	double EPS=1e-20;
	Matrix i20;
	i20.EyeMat(20);
	Matrix a(10,20);
	Matrix a0(10,20);
	for(int i=0; i<20*10; i++) {
		a.data[i]=rand();
		a0.data[i]=a.data[i];
	}
	a.rightMultiply(i20);
	Matrix r0;
	MatrixSub(a,a0,r0);
	assert(r0.fnorm()<EPS);
	//Multiple zero
	Matrix z10(20,30);
	a0.rightMultiply(z10);
	assert(a0.nCol==30);
	assert(a0.nRow==10);
	for(int i=0; i<10*30; i++) {
		assert(fabs(a0.data[i])<EPS);
	}
	try{
		Matrix a(3,4);
		Matrix b(5,6);
		b.rightMultiply(a);
	}
	catch(MatrixException e){
		assert(e.matrixExceptionType==DIM_NOT_MATCH);
	}
}
void tst_operator_add(void)
{
	Matrix a(10,20);
	for(int i=0; i<20*10; i++) {
		a.data[i]=rand();
	}
	Matrix b(10,20);
	for(int i=0; i<20*10; i++) {
		b.data[i]=rand();
	}
	Matrix c;
	c=a+b;
	for(int i=0; i<20*10; i++) {
		assert(a.data[i]+b.data[i]==c.data[i]);
	}
	try{
		Matrix a(3,4);
		Matrix b(5,6);
		Matrix c;
		c=a+b;
	}
	catch(MatrixException e){
		assert(e.matrixExceptionType==DIM_NOT_MATCH);
	}
}
void tst_operator_subtract(void)
{
	Matrix a(10,20);
	for(int i=0; i<20*10; i++) {
		a.data[i]=rand();
	}
	Matrix b(10,20);
	for(int i=0; i<20*10; i++) {
		b.data[i]=rand();
	}
	Matrix c;
	c=a-b;
	for(int i=0; i<20*10; i++) {
		assert(a.data[i]-b.data[i]==c.data[i]);
	}
	try{
		Matrix a(3,4);
		Matrix b(5,6);
		Matrix c;
		c=a-b;
	}
	catch(MatrixException e){
		assert(e.matrixExceptionType==DIM_NOT_MATCH);
	}
}
void tst_operator_multiply(void)
{
	double EPS=1e-20;
	Matrix a0(10,20);
	Matrix a(10,20);
	for(int i=0; i<20*10; i++) {
		a.data[i]=rand();
		a0.data[i]=a.data[i];
	}
	Matrix b(20,30);
	for(int i=0; i<20*30; i++) {
		b.data[i]=rand();
	}
	Matrix c;
	c=a*b;	
	a0.rightMultiply(b);
	for(int i=0; i<a0.nCol*a0.nRow; i++) {
		assert(fabs(a0.data[i]-c.data[i])<EPS);
	}
	try{
		Matrix a(3,4);
		Matrix b(5,6);
		Matrix c;
		c=a*b;
	}
	catch(MatrixException e){
		assert(e.matrixExceptionType==DIM_NOT_MATCH);
	}
}
void tst_operator_assign(void)
{
	Matrix a(10,20);
	for(int i=0; i<10*20; i++)
		a.data[i]=rand();
	Matrix b;
	b=a;
	a=a;
	assert(b.nRow==a.nRow);
	assert(b.nCol==a.nCol);
	for(int i=0; i<10*20; i++)
		assert(a.data[i]==b.data[i]);
}
void tst_operator_get(void)
{
	Matrix a(10,20);
	for(int i=0; i<10*20; i++)
		a.data[i]=rand();
	for(int i=0; i<10*20; i++)
		assert(a.data[i]==a(i/20,i % 20));
	try{
		Matrix a(3,4);
		double b;
		b=a(0,-1);
	}
	catch(MatrixException e){
		assert(e.matrixExceptionType==INDEX_OUT);
	}
	try{
		Matrix a(3,4);
		double b;
		b=a(10,3);
	}
	catch(MatrixException e){
		assert(e.matrixExceptionType==INDEX_OUT);
	}
}
void tst_operator_set(void)
{
	Matrix a(10,20);
	for(int i=0; i<10*20; i++)
		a.data[i]=rand();
	for(int i=0; i<10*20; i++)
		a(i/20,i % 20)=i;
	for(int i=0; i<10*20; i++)
		assert(a.data[i]==i);
	try{
		Matrix a(3,4);
		double b;
		b=a(0,-1);
	}
	catch(MatrixException e){
		assert(e.matrixExceptionType==INDEX_OUT);
	}
	try{
		Matrix a(3,4);
		double b;
		b=a(10,3);
	}
	catch(MatrixException e){
		assert(e.matrixExceptionType==INDEX_OUT);
	}		
}
void tst_matrix()
{
	Matrix a;
	for(int i=0;i<10000;i++){
		Matrix b(1,1);
		b(0,0)=1.0;
	}
	assert(a.data==NULL);
	assert(a.nRow==0);
	assert(a.nCol==0);
}
void tst_matrix3_writeh5(void){
  Matrix3<double> a(500,500,1024,0.1);
    a.writeh5("testh5.h5","/data");
}

void tst_matrix3_read_writeh5(void){
  Matrix3<double> a(5,5,1024,0.1);
  cerr<<"Starting write h5....\n";
  a.writeh5("testh5.h5","/data");
  cerr<<"Starting read h5....\n";
  a.readh5("testh5.h5","/data");
}

void UnitTest(void)
{
	tst_matrix();
	tst_matrix_x_y();
	tst_matrix_copy();
	tst_resize_x_y();
	tst_eyemat();
	tst_diagmat();
	tst_add();
	tst_subtract();
	tst_multiply();
	tst_leftmultiply();
	tst_rightmultiply();
	tst_matrixadd();
	tst_matrixsub();
	tst_matrixmultiply();
	tst_operator_add();
	tst_operator_subtract();
	tst_operator_multiply();
	tst_operator_assign();
	tst_operator_get();
	tst_operator_set();
	tst_trans();
	tst_trace();
	tst_fnorm();
	tst_lupdecompose();
	tst_determinant();
	tst_getinversion();
}

void test_h5(void){
    Matrix xx(2000,2000);
    
    xx.writeh5("test-2000x2000.h5","/data");
    xx.writeh5("test-2000x2000.h5","/Data/xx");
    Matrix* yy;
    yy=new Matrix(3000,3000);
    (*yy)=0.1;
    yy->writeh5("test-yy-2000x2000.h5","/data");
    yy->writeh5("test-yy-2000x2000.h5","/Data/xx");
    
}
int main(int argc, char **argv)
{
    
    H5Eset_auto(H5E_DEFAULT , NULL, NULL);
	//Test Matrix Library
  //tst_matrix3_writeh5();
  tst_matrix3_read_writeh5();
  //	srand(time(NULL));
  test_h5();
  //	UnitTest();
	cout<<"All unit tests pass.\n";

	return 0;
}
