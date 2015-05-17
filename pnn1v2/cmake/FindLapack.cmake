# Generated by CMake 2.6-patch 4

IF("${CMAKE_MAJOR_VERSION}.${CMAKE_MINOR_VERSION}" LESS 2.5)
   MESSAGE(FATAL_ERROR "CMake >= 2.6.0 required")
ENDIF("${CMAKE_MAJOR_VERSION}.${CMAKE_MINOR_VERSION}" LESS 2.5)
CMAKE_POLICY(PUSH)
CMAKE_POLICY(VERSION 2.6)
FIND_PATH(LAPACK_LIBRARY liblapack.a  ${CMAKE_PREFIX_PATH} )
FIND_PATH(BLAS_LIBRARY libblas.a  ${CMAKE_PREFIX_PATH} )
FIND_PATH(TMG_LIBRARY libtmglib.a  ${CMAKE_PREFIX_PATH} )

#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
SET(CMAKE_IMPORT_FILE_VERSION 1)

# Create imported target blas
ADD_LIBRARY(blas STATIC IMPORTED)

# Create imported target lapack
ADD_LIBRARY(lapack STATIC IMPORTED)

# Create imported target tmglib
ADD_LIBRARY(tmglib STATIC IMPORTED)

# Import target "blas" for configuration ""
SET_PROPERTY(TARGET blas APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
SET_TARGET_PROPERTIES(blas PROPERTIES
  IMPORTED_LINK_INTERFACE_LIBRARIES_NOCONFIG "m"
  IMPORTED_LOCATION_NOCONFIG ${BLAS_LIBRARY}/libblas.a
  )

# Import target "lapack" for configuration ""
SET_PROPERTY(TARGET lapack APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
SET_TARGET_PROPERTIES(lapack PROPERTIES
  IMPORTED_LINK_INTERFACE_LIBRARIES_NOCONFIG "blas"
  IMPORTED_LOCATION_NOCONFIG ${LAPACK_LIBRARY}/liblapack.a
)
# Import target "tmglib" for configuration ""
SET_PROPERTY(TARGET tmglib APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
SET_TARGET_PROPERTIES(tmglib PROPERTIES
  IMPORTED_LINK_INTERFACE_LIBRARIES_NOCONFIG "lapack"
  IMPORTED_LOCATION_NOCONFIG ${TMG_LIBRARY}/libtmglib.a
  )

# Commands beyond this point should not need to know the version.
SET(CMAKE_IMPORT_FILE_VERSION)
CMAKE_POLICY(POP)
