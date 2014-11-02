#--------------------------------------------------------------
# Bioh5
# 
#--------------------------------------------------------------
cmake_minimum_required(VERSION 2.6)
set(CMAKE_MODULE_PATH ${CMAKE_CURRENT_SOURCE_DIR}/cmake/)
project(Bioh5)
set (Bioh5_VERSION_MAJOR 0)
set (Bioh5_VERSION_MINOR 1)
set (Bioh5_VERSION_PATCH 0)

set(CMAKE_PREFIX_PATH /opt/cray/hdf5/1.8.11/GNU/47 
		      /home/zywang/work/MatrixLib 
		      /home/zywang/work//BALL-1.2/
		      /opt/cray/mpt/6.0.2/gni/mpich2-gnu/48
		      /home/zywang/work/allbio/contrib/hdf5
		      /home/zywang/work/allbio/contrib/BALL
		      /home/zywang/work/dpln/src/bioh5/br.allin1/
		      	)
#--------------------------------------------------------------
# global headers
#--------------------------------------------------------------
#set(CMAKE_CXX_COMPILER /share/apps/gcc/4.7.3/bin/g++)
# Bioh5 cannot compiled with c++4.7 with std=c++11, since a error in BALL.h
file(GLOB_RECURSE headers include/*.hxx)
include_directories(include)
set(Gsl_INCLUDE_DIRS $ENV{GSL_DIR}/include)
set(Gsl_LIBRARY_DIRS $ENV{GSL_DIR}/lib)
FIND_PACKAGE(GSL REQUIRED)

include_directories(${GSL_INCLUDE_DIRS} ${GSLCBLAS_INCLUDE_DIRS} $ENV{GSL_DIR}/include /home/zywang/work/pdbtools/)

set(LIBS ${LIBS} $ENV{GSL_DIR}/lib /home/zywang/work/lapack-3.5.0/build/lib)
link_directories(${LIBS})

FIND_PACKAGE(MatrixLight REQUIRED)
include_directories(${MatrixLight_INCLUDE_DIR})
#link_directories(${MatrixLight_LIBRARY})

FIND_PACKAGE(BALL REQUIRED)
include_directories(${BALL_INCLUDE_DIR})
#link_directories(${BALL_LIBRARY})



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
set(LIBS ${LIBS} ${HDF5_LIBRARY_DIRS} ${BALL_LIBRARY_DIRS})

#add_definitions(" -static -std=c++11 -DCLS=64 -D_MPI")
add_definitions(" -O3 ")
message(STATUS ${LIBS})
link_directories(${LIBS})



#--------------------------------------------------------------
# Target
#--------------------------------------------------------------

#add_subdirectory(src)
#add_library (Bioh5 bioh5.cpp compute_mi_moreev.cpp fasta2hdf5.cpp pdb2h5.cpp) 
add_library (Bioh5 bioh5.cpp compute_mi_moreev.cpp  pdb2h5.cpp) 

#add_executable (fasta2hdf5 fasta2hdf5.cpp protein.cpp bioh5.cpp compute_mi_moreev.cpp  pdb2h5.cpp)
#target_link_libraries (fasta2hdf5 Bioh5 gsl gslcblas ${MatrixLight_LIBRARY} ${HDF5_LIBS} BALL lapack blas gfortran) 
# For test and example getProteinFeature.cpp
#add_executable (getProteinFeature getProteinFeature.cpp) 
#target_link_libraries (getProteinFeature Bioh5 gsl gslcblas ${MatrixLight_LIBRARY} ${HDF5_LIBS} ${BALL_LIBRARY}) 


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

install(TARGETS Bioh5 DESTINATION ${CMAKE_CURRENT_SOURCE_DIR} )
#install(TARGETS getProteinFeature DESTINATION ${CMAKE_CURRENT_SOURCE_DIR} )
#install(TARGETS fasta2hdf5 DESTINATION ${CMAKE_CURRENT_SOURCE_DIR} )
