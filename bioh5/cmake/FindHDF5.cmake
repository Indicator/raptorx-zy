#
# this module look for HDF5 support
# it will define the following values
#
# HDF5_INCLUDE_DIR = where matrix3.h can be found
# HDF5_LIBRARY     = the library to link against libHDF5.a
# FOUND_HDF5       = set to 1 if HDF5 is found
#

FIND_PATH(HDF5_LIBRARY lib/libhdf5.a  ${CMAKE_PREFIX_PATH} )
FIND_PATH(HDF5_INCLUDE include/hdf5.h ${CMAKE_PREFIX_PATH} )

IF(HDF5_INCLUDE AND HDF5_LIBRARY)
  SET(HDF5_FOUND 1 CACHE BOOL "Found HDF5 library")
  SET(HDF5_INCLUDE_DIR ${HDF5_LIBRARY}/include)
  SET(HDF5_LIBRARY_DIRS ${HDF5_LIBRARY}/lib)
ELSE(HDF5_INCLUDE AND HDF5_LIBRARY)
  SET(HDF5_FOUND 0 CACHE BOOL "Not found HDF5 library")
ENDIF(HDF5_INCLUDE AND HDF5_LIBRARY)

MARK_AS_ADVANCED(
  HDF5_INCLUDE_DIR 
  HDF5_LIBRARY 
  HDF5_LIBRARY_DIRS 
  HDF5_FOUND
)
