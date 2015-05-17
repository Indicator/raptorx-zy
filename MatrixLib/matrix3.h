#ifndef MATRIX3_H
#define MATRIX3_H
#include <iostream>
#include <fstream>
#include <iomanip>
#include <map>
//#define H5_SUPPORT

#ifdef H5_SUPPORT
#include "H5Cpp.h"
#endif


#include "matrix.h"

template <class Type>
class Matrix3 {
public:

  Matrix3():d1(0),d2(0),d3(0),data(NULL) {
    }

    Matrix3(const int & newd1, const int & newd2, const int & newd3) : d1(newd1), d2(newd2), d3(newd3) {
        alloc_data(d1, d2, d3);
    };

    Matrix3(const int & newd1, const int & newd2, const int & newd3, Type val) : d1(newd1), d2(newd2), d3(newd3) {
        alloc_data(d1, d2, d3);
        for (int i = 0; i < d1 * d2 * d3; i++)
            data[0][0][i] = val;
    };

    ~Matrix3() {
        if (data != NULL)
            free_data();
    }


    /* Set all elements zero without changing the dimension.
     */
    void clear(void){
            for (unsigned int i = 0; i < d1 * d2 * d3; i++)
            data[0][0][i] = 0;
    }
    Type* GetPtr(void) {
        return data[0][0];
    }

    inline void resize(const unsigned int& newd1, const unsigned int& newd2, const unsigned int & newd3) {
        if (data != NULL)
            free_data();
        if(newd1>0 && newd2 >0 && newd3>0)
            alloc_data(newd1, newd2, newd3);       
    }



    void testMatrix3(void) {
        resize(2, 3, 4);
        for (int i = 0; i < d1; i++)
            for (int j = 0; j < d2; j++)
                for (int k = 0; k < d3; k++) {
                    data[i][j][k] = (i * d2 + j) * d3 + k;
                    printf("%d %d %d %d\n", i, j, k, (i * d2 + j) * d3 + k);
                }
        Dlmwrite("testmatrix3");

    }

    inline Type** operator [] (const unsigned int& i) {
        return (data[i]);
    }

    /*
    inline const Type** operator [] (const unsigned int& i) const
    {
       return(data[i]);
    }*/

    void Dlmread(std::string fn, int start0=0) {
        //Read from txt files with the format of 
        //i j data[i][j][0] .. data[i][j][n]
        //start=0, the indices start from 0; start=1 if all indices start from 1.
        std::ifstream ifPair(fn.c_str());
        if (!ifPair.good())
            std::cerr << "open matrix file error " << fn << std::endl;
        std::string str;

        int maxNcol = 0;
        while (getline(ifPair, str)) {
            if (str == "" || (!ifPair.good()))break;
            std::vector<std::string> vstr = matrixStringSplit(str, " ");
            int a;
            int b;
            a = atoi(vstr[0].c_str()) - start0;
            b = atoi(vstr[1].c_str()) - start0;
            if (a >= d1 || b >= d2)
                throw MatrixException(INDEX_OUT);
            for (int i = 2; i < vstr.size(); i++) {
                if (i - 2 < d3)
                    //throw MatrixException(INDEX_OUT);
                    data[a][b][i - 2] = atof(vstr[i].c_str());
            }
        }
    }

    void Dlmwrite(std::string fn) {
        FILE* fp = fopen(fn.c_str(), "w");
        for (unsigned int i = 0; i < d1; i++)
            for (unsigned int j = 0; j < d2; j++) {
                fprintf(fp, "%d %d ", i, j);
                for (unsigned int b = 0; b < d3; b++)
                    fprintf(fp, "%.4f ", data[i][j][b]);
                fprintf(fp, "\n");
            }
        fclose(fp);
    }

#ifdef H5_SUPPORT
    // only for double types
    //Todo: read and write with attribute.
    //StrType str_type(0, H5T_VARIABLE);
//DataSpace att_space(H5S_SCALAR);
//Attribute att = ds.createAttribute( "myAttribute", str_type, att_space );
//att.write( str_type, "myString" );

    int readh5(std::string fn1, std::string dsname) {
        H5::H5File* file;
        try {
            file = new H5::H5File(fn1, H5F_ACC_RDONLY);
        } catch (H5::FileIException error) {
            error.printError();
        }
        H5::DataSet* dataset;
        try {
            dataset = new H5::DataSet(file->openDataSet(dsname)); //dist_1 for cb distance
            hsize_t dims[3]; // dataset dimensions
            H5::DataSpace filespace = dataset->getSpace(); // dataspace of data in file, also used to define submatrix to be read.
            int rank = filespace.getSimpleExtentDims(dims); // We can read chunked stored file with using chunk paramters. Actually chunk_dims == dims. I am not sure why.

            H5::DataSpace mspace1(rank, dims);
            resize(dims[0], dims[1],dims[2]);
            dataset->read(data[0][0], H5::PredType::NATIVE_DOUBLE, mspace1, filespace);
            dataset->close();
        } catch (H5::FileIException error) {
            error.printError();
            return -1;
        }// catch failure caused by the DataSet operations
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

    typedef std::map<std::string,std::string> _string_map ;
    void writeh5(std::string fn1, std::string datasetname){
      _string_map  attribute = _string_map() ;
      writeh5(fn1,datasetname, attribute);
    }
    
    void writeh5(std::string fn1, std::string datasetname, 
		 std::map<std::string,std::string> attribute ) {
        H5::H5File *file;
        try {
            file = new H5::H5File(fn1, H5F_ACC_EXCL);
        } catch (H5::FileIException error) {
            file = new H5::H5File(fn1, H5F_ACC_RDWR);
        }
        hsize_t dims[] = {d1, d2, d3};
        //hsize_t cdims[] = {d1, d2, d3};

        H5::DataSpace dataspace(3, dims); // create new dspace
        H5::DSetCreatPropList plist;
        plist.setChunk(3, dims);
        plist.setDeflate(6);
        
        try {
            H5::Group* group = new H5::Group(file->createGroup("/Data"));
        } catch (H5::FileIException e) {
        }

        H5::DataSet dataset;
        try {
            dataset = file->createDataSet(datasetname, H5::PredType::NATIVE_DOUBLE, dataspace, plist);
        } catch (H5::FileIException e) {
            dataset = file->openDataSet(datasetname); //The results have been manually checked  with that of compute_di.m
        }
        dataset.write(data[0][0], H5::PredType::NATIVE_DOUBLE, dataspace, dataspace);
        dataset.flush(H5F_SCOPE_LOCAL);
        
        if(attribute.size()>0){
            H5::StrType str_type(0, H5T_VARIABLE);
            H5::DataSpace att_space(H5S_SCALAR);
            for(std::map<std::string,std::string>::iterator i=attribute.begin();i!=attribute.end();i++){
                H5::Attribute att;
                try{
                     att = dataset.createAttribute( i->first, str_type, att_space );
                }catch(H5::AttributeIException e){
                    att = dataset.openAttribute( i->first);
                }
                att.write( str_type, i->second );
            }
        }
        
        dataset.close();
        
	file->close();
    }

#endif
    
    int getd1(void){
        return d1;
    }

    int getd2(void){
        return d2;
    }
    
    int getd3(void){
        return d3;
    }
private:
    unsigned int d1, d2, d3;
    Type*** data;
    void free_data(void) {
        delete[] data[0][0];
        delete[] data[0];
        delete[] data;
    }
    inline void alloc_data(const unsigned int& newd1, const unsigned int& newd2, const unsigned int & newd3) {

        d1 = newd1;
        d2 = newd2;
        d3 = newd3;
        data = new Type**[d1];
        data[0] = new Type*[d1 * d2];
        data[0][0] = new Type[d1 * d2 * d3];
        for (unsigned int j = 1; j < d2; j++) {
            data[0][j] = data[0][j - 1] + d3;
        }
        for (unsigned int i = 1; i < d1; i++) {
            data[i] = data[i - 1] + d2;
            data[i][0] = data[i - 1][0] + d2*d3;
            for (unsigned int j = 1; j < d2; j++) {
                data[i][j] = data[i][j - 1] + d3;
            }
        }
    }

};


#endif // MATRIX3_H
