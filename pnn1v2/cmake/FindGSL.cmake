#
# this module look for gsl (http://www.gnu.org/software/gsl) support
# it will define the following values
#
# GSL_INCLUDE_DIR = where gsl/gsl_version.h can be found
# GSL_LIBRARY     = the library to link against libgsl
# FOUND_GSL       = set to 1 if gsl is found
#


IF(EXISTS ${PROJECT_CMAKE}/GslConfig.cmake)
  INCLUDE(${PROJECT_CMAKE}/GslConfig.cmake)
ENDIF(EXISTS ${PROJECT_CMAKE}/GslConfig.cmake)

IF(Gsl_INCLUDE_DIRS)

  FIND_PATH(GSL_INCLUDE_DIR gsl/gsl_version.h ${Gsl_INCLUDE_DIRS})
  FIND_LIBRARY(GSL_LIBRARY gsl ${Gsl_LIBRARY_DIRS})

ELSE(Gsl_INCLUDE_DIRS)

  FIND_LIBRARY(GSL_LIBRARY gsl $ENV{GSL_HOME}/lib ${QMC_LIBRARY_PATHS})
  FIND_LIBRARY(GSLCBLAS_LIBRARY gslcblas  $ENV{GSL_HOME}/lib ${QMC_LIBRARY_PATHS})
  FIND_PATH(GSL_INCLUDE_DIR gsl/gsl_version.h $ENV{GSL_DIR}/include $ENV{GSL_HOME}/include ${QMC_INCLUDE_PATHS} )

ENDIF(Gsl_INCLUDE_DIRS)

IF(GSL_INCLUDE_DIR AND GSL_LIBRARY)
  SET(GSL_FOUND 1 CACHE BOOL "Found gsl library")
  SET(GSL_LIBRARY ${GSL_LIBRARY} ${GSLCBLAS_LIBRARY})
ELSE(GSL_INCLUDE_DIR AND GSL_LIBRARY)
  SET(GSL_FOUND 0 CACHE BOOL "Not fount gsl library")
ENDIF(GSL_INCLUDE_DIR AND GSL_LIBRARY)

MARK_AS_ADVANCED(
  GSL_INCLUDE_DIR 
  GSL_LIBRARY 
  GSL_FOUND
 )