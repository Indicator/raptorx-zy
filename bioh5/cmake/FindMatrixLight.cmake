#
# this module look for MatrixLight support
# it will define the following values
#
# MatrixLight_INCLUDE_DIR = where matrix3.h can be found
# MatrixLight_LIBRARY     = the library to link against libMatrixLight.a
# FOUND_MatrixLight       = set to 1 if MatrixLight is found
#

FIND_LIBRARY(MatrixLight_LIBRARY MatrixLight ${QMC_LIBRARY_PATHS} ${CMAKE_PREFIX_PATH} )
FIND_PATH(MatrixLight_LIBRARY_DIR libMatrixLight.a ${QMC_INCLUDE_PATHS} ${CMAKE_PREFIX_PATH} )
FIND_PATH(MatrixLight_INCLUDE_DIR matrix3.h ${QMC_INCLUDE_PATHS} ${CMAKE_PREFIX_PATH} )

IF(MatrixLight_INCLUDE_DIR AND MatrixLight_LIBRARY)
  SET(MatrixLight_FOUND 1 CACHE BOOL "Found MatrixLight library")
ELSE(MatrixLight_INCLUDE_DIR AND MatrixLight_LIBRARY)
  SET(MatrixLight_FOUND 0 CACHE BOOL "Not fount MatrixLight library")
ENDIF(MatrixLight_INCLUDE_DIR AND MatrixLight_LIBRARY)

MARK_AS_ADVANCED(
  MatrixLight_INCLUDE_DIR 
  MatrixLight_LIBRARY 
  MatrixLight_LIBRARY_DIR 
  MatrixLight_FOUND
)
