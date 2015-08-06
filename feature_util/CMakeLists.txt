#--------------------------------------------------------------
# Nnpf
#--------------------------------------------------------------
cmake_minimum_required(VERSION 2.4)
set(CMAKE_MODULE_PATH ${CMAKE_CURRENT_SOURCE_DIR}/cmake/)
project(featureUtil)
set (Nnpf_VERSION_MAJOR 2)
set (Nnpf_VERSION_MINOR 0)
set (Nnpf_VERSION_PATCH 2)


#set(CMAKE_PREFIX_PATH /home/wzy/program/hdf5-1.8.10-linux-x86_64-static/)
set(CMAKE_PREFIX_PATH /opt/cray/hdf5/1.8.11/GNU/47 
		      /home/zywang/work/allbio.re1/contrib/hdf5
		      /home/zywang/work/allbio.re1/contrib/BALL
		      /home/zywang/work/allbio.re1/contrib/Lapack
		      /home/zywang/work/allbio.re1/bioh5
		      /home/zywang/work/allbio.re1/MatrixLib
		      	)
#--------------------------------------------------------------
# global headers
#--------------------------------------------------------------
set(CMAKE_CXX_COMPILER /share/apps/gcc/4.7.3/bin/g++)
set (CMAKE_CXX_FLAGS "-static-libstdc++ -g")
file(GLOB_RECURSE headers include/*.hxx)
include_directories(include)

set(Gsl_INCLUDE_DIRS $ENV{GSL_DIR}/include)
set(Gsl_LIBRARY_DIRS $ENV{GSL_DIR}/lib)
FIND_PACKAGE(GSL REQUIRED)
#FIND_PACKAGE(MPI REQUIRED)
FIND_PACKAGE(MatrixLight REQUIRED)
FIND_PACKAGE(BALL REQUIRED)
FIND_PACKAGE(Bioh5 REQUIRED)
#FIND_PACKAGE(MPI REQUIRED)
FIND_PACKAGE(Lapack REQUIRED)
#message(STATUS ${MPI_INCLUDE_PATH})
include_directories(${GSL_INCLUDE_DIRS} ${GSLCBLAS_INCLUDE_DIRS} $ENV{GSL_DIR}/include 
					 ${MatrixLight_INCLUDE_DIR} ${BALL_INCLUDE_DIR} ${BIOH5_INCLUDE_DIR})
set(LIBS ${LIBS} ${GSL_LIBRARIES} ${GSLCBLAS_LIBRARIES} $ENV{GSL_DIR}/lib ${MatrixLight_LIBRARY_DIR} ${BALL_LIBRARY_DIRS} ${BIOH5_LIBRARY} )

#OPTION(WITH_HDF5 "Include HDF5" ON)
#--------------------------------------------------------------
# HDF5
#--------------------------------------------------------------
find_package(HDF5)
if(HDF5_FOUND)
   message(STATUS "HDF5 Found")
   # manually set hdf dirs if needed.
   # set(HDF5_LIBRARY_DIRS "/opt/cray/hdf5/1.8.11/GNU/47/lib")
   #   set(HDF5_LIBS hdf5 hdf5_hl hdf5_cpp hdf5_hl_cpp)
   set(HDF5_LIBS libhdf5_hl_cpp.a libhdf5_cpp.a libhdf5_hl.a libhdf5.a z sz)
   #libhdf5_hl_cpp.a libhdf5_cpp.a libhdf5_hl.a libhdf5.a
   include_directories(${HDF5_INCLUDE_DIR})
   add_definitions(${HDF5_CPPFLAGS})
   add_definitions(-DH5_SUPPORT)
else()
   message(STATUS "build without HDF5")
endif()
set(LIBS ${LIBS} ${HDF5_LIBRARY_DIRS})

#add_definitions(" -static -std=c++11 -DCLS=64 -D_MPI")
#add_definitions(" -std=c++11 -O3")

message(STATUS ${LIBS})
link_directories(${LIBS} )

#--------------------------------------------------------------
# testing with CTest
#--------------------------------------------------------------


add_executable (fasta2hdf5 fasta2hdf5.cpp protein.cpp)
target_link_libraries (fasta2hdf5 MatrixLight gsl gslcblas ${HDF5_LIBS} libBioh5.a BALL lapack blas gfortran) 

add_executable (add_pair_feature_to_bioh5 add_pair_feature_to_bioh5.cpp)
target_link_libraries (add_pair_feature_to_bioh5 MatrixLight gsl gslcblas ${HDF5_LIBS} libBioh5.a BALL lapack blas gfortran) 


#--------------------------------------------------------------
# doxygen documentation
#--------------------------------------------------------------
find_package(Doxygen)
if(DOXYGEN_FOUND)
   configure_file(${CMAKE_CURRENT_SOURCE_DIR}/Doxyfile.in ${CMAKE_CURRENT_BINARY_DIR}/Doxyfile @ONLY)
   add_custom_target(doc ${DOXYGEN_EXECUTABLE} ${CMAKE_CURRENT_BINARY_DIR}/Doxyfile
      WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
      COMMENT "Generating API documentation with Doxygen" VERBATIM)
endif()


#--------------------------------------------------------------
# install
#--------------------------------------------------------------



