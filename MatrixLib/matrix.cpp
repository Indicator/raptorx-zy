#include "matrix.h"
  
using namespace std;

Matrix::Matrix(const Matrix &x)
{
	if(x.nRow<=0 ||x.nCol<=0 ||x.data==NULL){
		data=NULL;
		nRow=0;
		nCol=0;
		return;
	}		
        no_delete_flag=x.no_delete_flag;
	nRow=x.nRow;
	nCol=x.nCol;
	data=new double[nRow*nCol];
	for(int i=0; i<nRow*nCol; i++)data[i]=x.data[i];
        dataptr=new double*[nRow];
        for(int i=0;i<nRow;i++)dataptr[i]=data+i*nCol;
}
Matrix::Matrix()
{
	data=NULL;
        dataptr=NULL;
	nRow=0;
	nCol=0;
        no_delete_flag=false;
}
Matrix::Matrix(int x,int y)
{
	if(x<=0 || y<=0){
		throw MatrixException(DIM_NOT_MATCH);
	} 
	else{
		nRow=x;
		nCol=y;
		data=new double[x*y];
                no_delete_flag=false;
		for(int i=0; i<x*y; i++)data[i]=0;
                dataptr=new double*[nRow];
                for(int i=0;i<nRow;i++)dataptr[i]=data+i*nCol;

	}
}
Matrix::~Matrix()
{
    if(no_delete_flag){
        
    }else{
        if(data!=NULL){
		delete[] data;
                delete[] dataptr;
                data=NULL;
                dataptr=NULL;
        }
    }
	
}
int Matrix::getnrow(void) const{
	return nRow;
}
int Matrix::getncol(void) const{
	return nCol;
}
void Matrix::resize(int x,int y)
{
	if(x<=0 || y<=0){
		throw MatrixException(DIM_NOT_MATCH);
	} 
	else{
	nRow=x;
	nCol=y;
	if(data!=NULL){delete[] data;delete[] dataptr;}
	data=new double[x*y];
	for(int i=0; i<x*y; i++)data[i]=0;
        dataptr=new double*[nRow];
        for(int i=0;i<nRow;i++)dataptr[i]=data+i*nCol;

	}
}
Matrix& Matrix::operator=(const Matrix &a)
{
	if (this== &a)   // check self assignment
		return *this;
	if(a.data!=NULL){
		if(data!=NULL) {
			delete[] data;delete[] dataptr;
		}	
		nRow=a.nRow;
		nCol=a.nCol;
		data=new double[nRow*nCol];
		for(int i=0; i<nRow*nCol; i++)data[i]=a.data[i];
                dataptr=new double*[nRow];
                for(int i=0;i<nRow;i++)dataptr[i]=data+i*nCol;
                no_delete_flag=a.no_delete_flag;
	}
	else{
		nRow=a.nRow;
		nCol=a.nCol;
		data=NULL;
	}

	return *this;
}

Matrix& Matrix::operator=(const double &a)
{
        for(int i=0; i<nRow*nCol; i++)data[i]=a;
	return *this;
}

const Matrix Matrix::operator+(const Matrix &a) const
{
	if(a.nRow==nRow && a.nCol==nCol && nCol>0 && nRow>0) {
		Matrix c(nCol,nRow);
		for(int k=0; k<nRow*nCol; k++) {
			c.data[k]=data[k]+a.data[k];
		}
		return c;
	} else {
		throw MatrixException(DIM_NOT_MATCH);
	}
}

void Matrix::add(const Matrix &a) 
{
	if(a.nRow==nRow && a.nCol==nCol && nCol>0 && nRow>0) {
		for(int k=0; k<nRow*nCol; k++) {
			data[k]+=a.data[k];
		}
	} else {
		throw MatrixException(DIM_NOT_MATCH);
	}
}
void Matrix::AddScalar(const double &a) 
{
	if(nCol>0 && nRow>0) {
		for(int k=0; k<nRow*nCol; k++) {
			data[k]+=a;
		}
	} else {
		throw MatrixException(DIM_NOT_MATCH);
	}
}


Matrix Matrix::operator-(const Matrix &a) const
{
	if(a.nRow==nRow && a.nCol==nCol && nCol>0 && nRow>0) {
		Matrix c(nRow,nCol);
		for(int k=0; k<nRow*nCol; k++) {
			c.data[k]=data[k]-a.data[k];
		}
		return c;
	} else {
		throw MatrixException(DIM_NOT_MATCH);
	}
}

void Matrix::subtract(const Matrix &a) 
{
	if(a.nRow==nRow && a.nCol==nCol && nCol>0 && nRow>0) {
		for(int k=0; k<nRow*nCol; k++) {
			data[k]-=a.data[k];
		}
	} else {
		throw MatrixException(DIM_NOT_MATCH);
	}
}


Matrix Matrix::operator*(const Matrix &a) const {

    if (a.nRow == nCol && nCol > 0 && nRow > 0 && a.nCol > 0) {
        Matrix c(nRow, a.nCol);

        gsl_matrix_view A = gsl_matrix_view_array(data, nRow, nCol);
        gsl_matrix_view B = gsl_matrix_view_array(a.data, a.nRow, a.nCol);
        gsl_matrix_view C = gsl_matrix_view_array(c.data, c.nRow, c.nCol);
        gsl_blas_dgemm(CblasNoTrans, CblasNoTrans,
                1.0, &A.matrix, &B.matrix,
                0.0, &C.matrix);
        /*
        for (int i = 0; i < nRow; i++)
            for (int j = 0; j < a.nCol; j++) {
                for (int k = 0; k < nCol; k++)
                    c.data[i * a.nCol + j] += a.data[k * a.nCol + j] * data[i * nCol + k];
            }*/
        return c;
    } else {
        throw MatrixException(DIM_NOT_MATCH);
    }
}
Matrix Matrix::operator*(const double &a) const
{
	
	if( nCol>0 && nRow>0 ) {
		Matrix c(nRow,nCol);
		for(int i=0; i<nRow*nCol; i++){
				c.data[i]=data[i]*a;
			}
		return c;
	} else {
		throw MatrixException(DIM_NOT_MATCH);
	}
}
void Matrix::Multiply(const double &a) 
{
	for(int k=0; k<nRow*nCol; k++) {
			data[k]*=a;
	}
}

void Matrix::rightMultiply(const Matrix &b) 
{

	if(b.nRow==nCol && nRow>0 && nCol>0 && b.nCol>0) {
		double *newdata;
		newdata=new double[nRow*b.nCol];
		for(int i=0;i<nRow*b.nCol;i++)
			newdata[i]=0;
		for(int i=0; i<nRow; i++)
			for(int j=0; j<b.nCol; j++) {
				for(int k=0; k<nCol; k++)
					newdata[i*b.nCol+j]+=b.data[k*b.nCol+j]*data[i*nCol+k];
			}
		if(data!=NULL){
			delete[] data;
                        }
                       
		data=newdata;
		nCol=b.nCol;	
	} else {
		throw MatrixException(DIM_NOT_MATCH);
	}
}

void Matrix::leftMultiply(const Matrix &a) 
{

	if(nRow==a.nCol && nRow>0 && nCol>0 && a.nRow>0) {		
		double *newdata;
		newdata=new double[a.nRow*nCol];
		for(int i=0;i<a.nRow*nCol;i++)
			newdata[i]=0;
		for(int i=0; i<a.nRow; i++)
			for(int j=0; j<nCol; j++) {
				for(int k=0; k<a.nCol; k++)
					newdata[i*nCol+j]+=data[k*nCol+j]*a.data[i*a.nCol+k];
			}
		if(data!=NULL)delete[] data;
		data=newdata;
		nRow=a.nRow;	
	} else {
		throw MatrixException(DIM_NOT_MATCH);
	}
}

void MatrixAdd(const Matrix &a,const Matrix &b, Matrix &c) 
{
	if(a.nRow==b.nRow && a.nCol==b.nCol && a.nRow>0 && a.nCol>0) {
		c.resize(a.nRow,a.nCol);
		for(int k=0; k<a.nRow*a.nCol; k++) {
			c.data[k]=a.data[k]+b.data[k];
		}
	} else {			
		throw MatrixException(DIM_NOT_MATCH);
	}
}



void MatrixSub(const Matrix &a,const Matrix &b, Matrix &c) 
{
	if(a.nRow==b.nRow && a.nCol==b.nCol && a.nRow>0 && a.nCol>0) {
		c.resize(a.nRow,a.nCol);
		for(int k=0; k<a.nRow*a.nCol; k++) {
			c.data[k]=a.data[k]-b.data[k];
		}
	} else {
		throw MatrixException(DIM_NOT_MATCH);
	}
}

void MatrixMultiply(const Matrix &a,const Matrix &b, Matrix &c) 
{
	if(b.nRow==a.nCol && b.nRow>0 && a.nRow>0 && b.nCol>0) {
		c.resize(a.nRow,b.nCol);
		for(int i=0; i<a.nRow; i++)
			for(int j=0; j<b.nCol; j++) {
				for(int k=0; k<a.nCol; k++)
					c.data[i*c.nCol+j]+=b.data[k*b.nCol+j]*a.data[i*a.nCol+k];
			}
	} else {
		throw MatrixException(DIM_NOT_MATCH);
	}
}

double MatrixDotProduct(const Matrix &a,const Matrix &b) 
{
	if(a.nRow==b.nRow && b.nCol==a.nCol && a.nRow>0 && a.nCol>0) {
		double r=0;
		for(int i=0; i<a.nRow*a.nCol; i++)
			r+=a.data[i]*b.data[i];
		return r;
	} else {
		throw MatrixException(DIM_NOT_MATCH);
	}
}

//IO function

int Dlmread(Matrix &a, string fn){
	int nread=0;
	//sep=" " by default
	ifstream ifPair(fn.c_str()); 
	if(!ifPair.good())
		cerr<<"open matrix file error "<<fn<<endl;
	string str ;
	vector<vector<double> > vmat;
	unsigned int maxNcol=0;
	while(getline(ifPair,str)){ 
		if(str==""||(!ifPair.good()))break;
		vector<string> vstr=matrixStringSplit(str," ");
		if(vstr.size()>maxNcol)
			maxNcol=vstr.size();
		vector<double> x;
		for(unsigned int i=0;i<vstr.size();i++)
			x.push_back(atof(vstr[i].c_str()));
		vmat.push_back(x);
	}
	a.resize(vmat.size(),maxNcol);
	double* p=a.GetPtr();
	for(unsigned int i=0;i<vmat.size();i++)
		for(unsigned int j=0;j<vmat[i].size();j++)
			*(p+i*maxNcol+j)=vmat[i][j];
	ifPair.close();
	nread=maxNcol*vmat.size();
	return nread;
}

double maxm(const Matrix &a){
  double res;
  if(a.nCol>0 && a.nRow>0){
    res=a.data[0];
    for(int i=0;i<a.nCol*a.nRow;i++)
      if(res<a.data[i])
        res=a.data[i];
  }else{
    throw MatrixException(INDEX_OUT);
  }
  return res;
}

double minm(const Matrix &a){
  double res;
  if(a.nCol>0 && a.nRow>0){
    res=a.data[0];
    for(int i=0;i<a.nCol*a.nRow;i++)
      if(res>a.data[i])
        res=a.data[i];
  }else{
    throw MatrixException(INDEX_OUT);
  }
  return res;
}

vector<double> submatrix(const Matrix&a, int i,int endi,int j,int endj){
  vector<double> res;
  if(a.nCol>0 && a.nRow>0){
    for(int k1=i;k1<=endi;k1++)
      for(int k2=j;k2<=endj;k2++)
        res.push_back(a.data[k1*a.nCol+k2]);
    
  }else{
    throw MatrixException(INDEX_OUT);
  }
  return res;
}

vector<pair<double,unsigned int> > submatrix_value_index(const Matrix&a, int i,int endi,int j,int endj){
  vector<pair<double, unsigned int> > res;
  if(a.nCol>0 && a.nRow>0){
    for(int k1=i;k1<=endi;k1++)
      for(int k2=j;k2<=endj;k2++)
        res.push_back(pair<double,unsigned int>(a.data[k1*a.nCol+k2],k1*a.nCol+k2));
  }else{
    throw MatrixException(INDEX_OUT);
  }
  return res;
}


void sqrtm(const Matrix &a, Matrix&b){
  //Compute the square root of a positive semi-definite matrix
  //call gsl to do eigenvector decomposition
  //Negative eigen values are replaced by 0.
  Matrix a1=a; // a1 will be destroyed
  //Matrix matview(a.getncol(),a.getnrow());
  gsl_matrix_view m = gsl_matrix_view_array (a1.GetPtr(), a1.getncol(), a.getnrow());
  gsl_vector *eval = gsl_vector_alloc (a.getncol());
  gsl_matrix *evec = gsl_matrix_alloc (a.getncol(), a.getnrow());
  b.resize(a.getnrow(),a.getncol());
  gsl_matrix_view res= gsl_matrix_view_array (b.GetPtr(),a.getncol(), a.getnrow());
  gsl_matrix *diag = gsl_matrix_alloc (a.getncol(), a.getnrow());
  memset(diag->data,0,sizeof(double)*a.getncol()*a.getnrow());
  gsl_matrix *res1= gsl_matrix_alloc (a.getncol(), a.getnrow());
  
  gsl_eigen_symmv_workspace * w = gsl_eigen_symmv_alloc (a.getncol());
  gsl_eigen_symmv (&m.matrix, eval, evec, w);
  for(unsigned int i=0;i<(*eval).size;i++)
    if((*eval).data[i]>=0)
      //(*eval).data[i]=sqrt((*eval).data[i]);
      gsl_matrix_set(diag,i,i,sqrt((*eval).data[i]));// make a diagnal matrix
    else
      gsl_matrix_set(diag,i,i,0);// make a diagnal matrix
      //throw MatrixException(NOT_SEMI_POSITIVE);
  //matview.SetPtr(diag->data);
  //matview.Dlmwrite("testroot4.csv");
  
      //comopute evec^T * diag(eval) * evec
  gsl_blas_dgemm (CblasTrans, CblasNoTrans,
                       1.0, evec, diag,
                       0.0, res1);
  //matview.SetPtr(res1->data);
  //matview.Dlmwrite("testroot5.csv");
  gsl_blas_dgemm (CblasNoTrans, CblasNoTrans,1.0, res1, evec,0.0, &res.matrix);
  //b.Dlmwrite("testroot6.csv");
  gsl_eigen_symmv_free (w);
  gsl_vector_free (eval);
  gsl_matrix_free (evec);
  gsl_matrix_free (diag);
  gsl_matrix_free (res1);
}

void absm(Matrix &a){
  for(int i=0;i<a.nRow*a.nCol;i++)
    a.data[i]=fabs(a.data[i]);
}

void Matrix::DotDivide(const Matrix &a) 
{
	if(a.nRow==nRow && a.nCol==nCol && nRow>0 && nCol>0) {
		for(int i=0; i<a.nRow*a.nCol; i++)
			data[i]/=a.data[i];			
	} else {
		throw MatrixException(DIM_NOT_MATCH);
	}
}

void Matrix::DotMultiple(const Matrix &a) 
{
	if(a.nRow==nRow && a.nCol==nCol && nRow>0 && nCol>0) {
		for(int i=0; i<a.nRow*a.nCol; i++)
			data[i]*=a.data[i];			
	} else {
		throw MatrixException(DIM_NOT_MATCH);
	}
}

void Matrix::trans()    
{
	if(data==NULL || nRow<=0 || nCol <=0) return;//Transpose an empty matrix means do nothing.
	double* newdata=new double[nRow*nCol];
	int	nColNew=nRow;
	for(int i=0; i<nRow; i++)
		for(int j=0; j<nCol; j++)
			newdata[j*nColNew+i]=data[i*nCol+j];
	delete[] data;
	data=newdata;
	nRow=nCol;
	nCol=nColNew;
}

double Matrix::trace()
{
	double tr=0;
	for(int i=0; i<nRow && i<nCol; i++)
		tr=tr+data[i*nCol+i];
	return tr;
}
double Matrix::determinant()
{
	if(nRow!=nCol || nRow<=0 ) throw MatrixException(DIM_NOT_MATCH);
	double det=1;
	Matrix ll;
	Matrix uu;
	Matrix pp;
	int nFlip=LUPdecompose(ll,uu,pp);
	for(int i=0; i<nRow; i++)
		det=det*ll.data[i*nCol+i]*uu.data[i*nCol+i];
	if( (nFlip % 2) ==1) det=-det;
	return det;
}

double Matrix::fnorm()
{
	if(nCol<=0 || nRow<=0 ) throw MatrixException(DIM_NOT_MATCH);
	double rst=0;
	for(int i=0; i<nRow*nCol; i++)
		rst+=data[i]*data[i];
	return sqrt(rst);
}

void Matrix::get_inversion(Matrix &xx){
#ifdef MATLAB_ENGINE
    Engine *ep;
    mxArray *T = NULL, *result=NULL;
    try{
    if (!(ep = engOpen(""))) {
        throw "Can't start MATLAB engine";
    }else{
      fprintf(stderr,"matlab engine started\n")  ;
    }
    }catch(char const* str){
        fprintf(stderr,"Catched error: %s\n",str);
    }
        
    T = mxCreateDoubleMatrix(xx.getncol(), xx.getnrow(), mxREAL);
    memcpy((void *) mxGetPr(T), (void *) xx.GetPtr(), sizeof (double)*xx.getncol() * xx.getnrow());
    engPutVariable(ep, "T", T);
    engEvalString(ep, "xxinv = inv(T);");
    result = engGetVariable(ep, "xxinv");
    memcpy((void *) xx.GetPtr(), (void *) mxGetPr(result), sizeof (double)*xx.getncol() * xx.getnrow());
    mxDestroyArray(T);
    mxDestroyArray(result);
    engEvalString(ep, "close;");
#else
    GetInversion(xx);
#endif
}

void Matrix::GetInversion(Matrix &rst)
{
	Matrix ll;
	Matrix uu;
	Matrix pp;
	int dim;
	if(nRow!=nCol || nRow<=0)throw MatrixException(DIM_NOT_MATCH);
	dim=nRow;
	double EPS=1e-20; // any value with absolute value less then EPS will be considered as 0.
	int nFlip=LUPdecompose(ll,uu,pp);
	
	Matrix invLL(dim,dim);//copy constructor avoided
	Matrix invUU(dim,dim);
	//check rank
	for(int i=0;i<dim;i++){
		if(fabs(uu.data[i*dim+i])<EPS)throw MatrixException(NOT_FULL_RANK);
	}	
	//Inverse uppper triangular matrix: uu
	for(int i=0;i<dim;i++){
		invUU.data[i*dim+i]=1/uu.data[i*dim+i];
		for(int j=i+1;j<dim;j++){
			double sum=0;
			for(int k=i;k<=j-1;k++)	
				sum=sum+invUU.data[i*dim+k]*uu.data[k*dim+j];
			invUU.data[i*dim+j]=-sum/uu.data[j*dim+j];
		}
	}	
	
	//Inverse low triangular matrix: ll
	for(int i=0;i<dim;i++){
		invLL.data[i*dim+i]=1/ll.data[i*dim+i];
		for(int j=i-1;j>=0;j--){
			double sum=0;
			for(int k=j+1;k<=i;k++)	
				sum=sum+invLL.data[i*dim+k]*ll.data[k*dim+j];
			invLL.data[i*dim+j]=-sum/ll.data[j*dim+j];
		}
	}	
	MatrixMultiply(invUU,invLL,rst);
	rst.rightMultiply(pp);
}
int Matrix::LUPdecompose(Matrix &ll, Matrix &uu, Matrix &pp)
{
	int nFlip=0;
	int* order;
	double EPS=1e-20; // any value with absolute value less then EPS will be considered as 0.
	if(nRow!=nCol || nCol<=0 )throw  MatrixException(DIM_NOT_MATCH);
	int dim=nRow;
	ll.resize(dim,dim);//copy avoided
	uu.resize(dim,dim);
	pp.resize(dim,dim);
	order=new int[dim];
	for(int i=0;i<dim;i++)order[i]=i;
	for(int j=0; j<dim; j++) {
		//Find a pivot
		int pivot=j;
		for(int p=j+1;p<dim;p++){
			if(fabs(data[order[pivot]*dim+j]) < fabs(data[order[p]*dim+j]))
				pivot=p;
		}
		if(j!=pivot) nFlip++;
		//Record the permutation
		int tmp;
		tmp=order[j];
		order[j]=order[pivot];
		order[pivot]=tmp;
		//Update uu(i,j)
		for(int i=0; i<=j; i++) {
			double sum=0;
			for(int k=0; k<i; k++)
				sum+=ll.data[order[i]*dim+k]*uu.data[order[k]*dim+j];//change
			uu.data[order[i]*dim+j]=data[order[i]*dim+j]-sum;
		}
		//Update ll(i,j)
		if(j<dim-1)
			for(int i=j+1; i<dim; i++) {
				double sum=0;
				for(int k=0; k<j; k++)
					sum+=ll.data[order[i]*dim+k]*uu.data[order[k]*dim+j];
				if(fabs(uu.data[order[j]*dim+j])>EPS)
					ll.data[order[i]*dim+j]=(data[order[i]*dim+j]-sum)/uu.data[order[j]*dim+j];
			}
	}
	for(int i=0; i<dim; i++)
			ll.data[order[i]*dim+i]=1;
	for(int h=0;h<dim;h++)
		pp.data[h*dim+order[h]]=1;		
	//Change order of uu and ll
	ll.leftMultiply(pp);
	uu.leftMultiply(pp);
	delete[] order;
	return nFlip;
}
void Matrix::EyeMat(int dim)
{
	resize(dim,dim);
	for(int i=0; i<dim; i++)data[i*dim+i]=1;
}
void Matrix::ZeroMat(int x,int y)
{
	resize(x,y);
}
void Matrix::DiagMat(vector<double> x)
{
	resize(x.size(),x.size());
	for(int i=0; i<nRow; i++)data[i*nCol+i]=x[i];
}
double * Matrix::GetPtr(void){
	return data;
}
void Matrix::SetPtr(double* x){
    if(no_delete_flag==false){
        if(data!=NULL)
                delete data;
    }
    data=x;
    no_delete_flag=true;
}
const double * Matrix::GetPtr(void) const{
	return data;
}
void Matrix::normalize(void){
    double sum=0;
    for(int i=0;i<nCol*nRow ;i++)
        sum+=data[i];
    if(fabs(sum)> 1e-10)
        for(int i=0;i<nCol*nRow ;i++)
            data[i]=data[i]/sum;
    
}
int Matrix::size(void){
	return nRow*nCol;
}
double Matrix::operator() (int row, int col) const
{
	if (row>=nRow || col>=nCol || row<0 || col< 0) {
		throw  MatrixException(INDEX_OUT);
	}
	return data[row * nCol + col];
}
double & Matrix::operator() (int row, int col)
{
	if (row>=nRow || col>=nCol || row<0 || col< 0) {
		throw  MatrixException(INDEX_OUT);
	}
	return data[row * nCol + col];
}

void Matrix::Print(void)
{
	//cout<<setprecision(6);
	for(int i=0; i<nRow; i++) {
		for(int j=0; j<nCol; j++)
			cout<<data[i*nCol+j]<<" ";
		cout<<endl;
	}
}

void Matrix::Dlmwrite(std::string fn)
{
	//cout<<setprecision(6);
  FILE *fp=fopen(fn.c_str(),"w");
	for(int i=0; i<nRow; i++) {
		for(int j=0; j<nCol; j++)
			fprintf(fp,"%f ",data[i*nCol+j]);
		fprintf(fp,"\n");
	}
  fclose(fp);
}



//#ifdef H5_SUPPORT
    // only for double types
    //Todo: read and write with attribute.
    //StrType str_type(0, H5T_VARIABLE);
//DataSpace att_space(H5S_SCALAR);
//Attribute att = ds.createAttribute( "myAttribute", str_type, att_space );
//att.write( str_type, "myString" );
// Solve the problem of error output. Make sure a valid read does not output exception.
    int Matrix::readh5(std::string fn1, std::string dsname) {
        H5::H5File* file;
        try {
            file = new H5::H5File(fn1, H5F_ACC_RDONLY);
        } catch (H5::FileIException error) {
            error.printError();
        }
        H5::DataSet* dataset;
        try {
            dataset = new H5::DataSet(file->openDataSet(dsname)); //dist_1 for cb distance
            hsize_t dims[2]; // dataset dimensions
            H5::DataSpace filespace = dataset->getSpace(); // dataspace of data in file, also used to define submatrix to be read.
            int rank = filespace.getSimpleExtentDims(dims); // We can read chunked stored file with using chunk paramters. Actually chunk_dims == dims. I am not sure why.
            H5::DataSpace mspace1(rank, dims);
            resize(dims[0], dims[1]); // !!! check 
            dataset->read(data, H5::PredType::NATIVE_DOUBLE, mspace1, filespace);
            dataset->close();
        } catch (H5::FileIException error) {
            error.printError();
            return -1;
        } // catch failure caused by the DataSet operations
        catch (H5::DataSetIException error) {
            error.printError();
            return -1;
        }// catch failure caused by the DataSpace operations
        catch (H5::DataSpaceIException error) {
            error.printError();
            return -1;
        }
        file->close();
        return 0;
    }
    void Matrix::writeh5(std::string fn1, std::string datasetname) {
        //return ; // DO not use by far.
        H5::H5File *file;
        try {
            file = new H5::H5File(fn1, H5F_ACC_EXCL);
        } catch (H5::FileIException error) {
            file = new H5::H5File(fn1, H5F_ACC_RDWR);
        }
        hsize_t dims[] = {nRow, nCol};
        H5::DataSpace dataspace(2, dims); // create new dspace
        H5::DSetCreatPropList plist;
        plist.setChunk(2, dims);
        plist.setDeflate(6);
        // Missing group create recursively, never store hierarchical data in hdf5, use NOsql db.
        // Only group /Data is supported for compatible with old codes.
        try {
            H5::Group* group = new H5::Group(file->createGroup("/Data"));
        } catch (...) {
        }

        H5::DataSet dataset;
        try {
            dataset = file->createDataSet(datasetname, H5::PredType::NATIVE_DOUBLE, dataspace, plist);
        } catch (H5::FileIException e) {
            dataset = file->openDataSet(datasetname); //The results have been manually checked  with that of compute_di.m
        }
        dataset.write(data, H5::PredType::NATIVE_DOUBLE, dataspace, dataspace);
        dataset.flush(H5F_SCOPE_LOCAL);
        dataset.close();
	file->close();
        
    }

//#endif