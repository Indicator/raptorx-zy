// -*- Mode: C++; tab-width: 2; -*-
// vi: set ts=2:
//
/* config.h.  Generated by configure.  */
// $Id: config.h,v 1.12.16.1 2007-03-25 22:03:12 oliver Exp $

#ifndef BALL_CONFIG_CONFIG_H
#define BALL_CONFIG_CONFIG_H

// here are some global configuration flags for BALL

// the path to the directory where BALL is installed
#define BALL_PATH "C:\\BALL\\"

// this flag is used by GenericPDBFile
// if it is not set, the length of each line has
// to be meet the PDB spcifications exactly.
// As virtually no existing PDB file fulfills
// this requirement, we disencourage its usage.
// Nevertheless, it can be quite useful for debugging.
/* #undef BALL_STRICT_PDB_LINE_IMPORT */

// BALL_DEBUG enables some debugging methods
// change the DEBUG entry in configure to define this flag.
// If in debug mode, inline functions won't be compiled
// as inline by defining BALL_NO_INLINE_FUNCTIONS
// This facilitates debugging, as the debugger can always
// find the corresponding source code line.
// See also COMMON/debug.h for these symbols.
// #define BALL_DEBUG
// #define BALL_NO_INLINE_FUNCTIONS

// this define is used to determine
// wheter BALL shall try to close a socket conection
// via shutdown or close
// (see socket.C)
#define BALL_USE_SOCKET_SHUTDOWN

// this idefine is used in string.C and enables a workaround
// on on of these ppor systems that do not define vsnprintf
/* #undef BALL_HAVE_VSNPRINTF */

// these two flags are set by configure according to
// the OS and compiler found. HAS_BOOL_TYPE and
// _CC_BOOL_DEF_ are required for compatibility
// reasons with QT.


// the string describing the binary format
#define BALL_BINFMT "Windows-i386-VC++_7"

// used in COMMON/namespace.h to cause the inclusion of COMMON/memory.h
/* #undef BALL_LOG_MEMORY */
#define BALL_LOG_MEMORY_FILE "memory.log"

// define architecture
/* #undef BALL_ARCH_SPARC */
/* #undef BALL_ARCH_MIPS */
#define BALL_ARCH_I386 I386
/* #undef BALL_ARCH_ALPHA */

//define OS
/* #undef BALL_OS_LINUX */
/* #undef BALL_OS_SOLARIS */
/* #undef BALL_OS_SUNOS */
/* #undef BALL_OS_IRIX */
/* #undef BALL_OS_IRIX32 */
/* #undef BALL_OS_IRIX64 */
/* #undef BALL_OS_FREEBSD */
#define BALL_OS_WINDOWS

// define if gethostname is supported
#define BALL_HAVE_GETHOSTNAME 1

// define if sysinfo(SI_HOSTNAME,) has to be used instead of
// gethostname (older Solaris variants)
/* #undef BALL_HAVE_SYSINFO */

// define if gethostname is not in the unistd.h header
/* #undef BALL_DEFINE_GETHOSTNAME */

// Define if you have the inet_aton function.
// Note: inet_aton is a marginally improved version of inet_addr
// If configure finds inet_aton, HAVE_INET_ATON is set and used
// in SYSTEM/socket.C.
#define HAVE_INET_ATON 

// Define the type needed for getsockname, getpeername, and accept
// This type is probably one of socklen_t, size_t, or int
// Refer to /usr/include/sys/socket.h in case of doubt
#define BALL_SOCKLEN_TYPE int

// define some symbols for the (bit)size of some builtin types
#define BALL_INT_SIZE 4
#define BALL_CHAR_SIZE 1
#define BALL_LONG_SIZE 4
#define BALL_SIZE_T_SIZE 4
#define BALL_POINTER_SIZE 8

// define symbols for the endianness of the system
#define BALL_LITTLE_ENDIAN true
/* #undef BALL_BIG_ENDIAN */

// on some systems (e.g. Solaris) we need to include /usr/include/ieeefp.h
// for some floating point functions
/* #undef BALL_HAS_IEEEFP_H */

// on some systems (e.g. Solaris) we need to include /usr/include/values.h
// for some floating point functions
// #undef BALL_HAS_VALUES_H

// the signature of the function arguments used in xdrrec_create differs
// from platform to platform, so we define some symbols describing the
// correct arguments: (void*, char*, int), (char*, char*, int), or (void)
// take arguments of type (void*, char*, int)
/* #undef BALL_XDRREC_CREATE_VOID_CHAR_INT */
#define BALL_XDRREC_CREATE_CHAR_CHAR_INT 1
/* #undef BALL_XDRREC_CREATE_VOID */

// some platforms (e.g. Debian 2.1) do not provide xdr_u_hyper, so we
// need a workaround for this
// #undef BALL_HAS_XDR_U_HYPER 1

// on some systems, we do not have regex.h, so we have to use regexp.h
/* #undef BALL_HAS_REGEXP_H */
#define BALL_HAS_REGEX_H

// Define to `int' if <sys/types.h> doesn't define.
/* #undef pid_t */

// Define to `unsigned' if <sys/types.h> doesn't define.
/* #undef size_t */

// Define if you have the ANSI C header files.
#define STDC_HEADERS 1

// Define if numeric_limits is defined in <limits>
#define BALL_HAS_NUMERIC_LIMITS 1

// Define whether float.h has to be included along with limits.h
/* #undef BALL_HAS_FLOAT_H */

// Define the argument type for xdr_u_hyper (64 bit)
#define BALL_XDR_UINT64_TYPE unsigned __int64

// Define on 64 bit architectures to avoid the use of long long
// which is required on 32 bit machines for comatibility
/* #undef BALL_64BIT_ARCHITECTURE */

// Define an unsigned numeric type of 64 bit length (used for
// platform independent persistence: stores pointers)
// this usually defaults to unsigned long on 64 bit architectures
// and unsigned long long on 32 bit machines
#define BALL_ULONG64_TYPE unsigned __int64
#define BALL_LONG64_TYPE __int64

// Defines an unsigned type that has the same length as size_t
#define BALL_SIZE_TYPE unsigned __int32

// Defines a signed type that has the same length as size_t
#define BALL_INDEX_TYPE __int32

// Defines an unsigned integer type of the same size as void*
#define BALL_POINTERSIZEINT_TYPE __int64

#define BALL_POINTERSIZEUINT_TYPE unsigned __int64

// Define the template argument for friends of template classes:
// either "" or "<>"
#define BALL_NULL_TEMPLATE_ARGS <>

// Define whether the compiler provides an ANSI-compliant implementation
// of <iostream>. This is required in COMMON/socket.h/C since we need
// the correct initialisation of the base classes. These base classes are
// either something like std::basic_ios<char> etc., or ios, istream etc.
#define BALL_HAS_ANSI_IOSTREAM 1

// Define the precision for the BALL Complex type (has to be consistent
// with the FFTW precision, if included).
#define BALL_COMPLEX_PRECISION float
#define BALL_HAS_FFTW 
#define BALL_HAS_FFTW_FLOAT
#define BALL_FFTW_DEFAULT_TRAITS FloatTraits

// Define whether to use the ARM style or ANSI style access modifications
//   ARM style:   BaseClass::foo;
//   ANSI style:  using BaseClass::foo;
#define BALL_CFG_USING_METHOD_DIRECTIVE 1

// Define for activated PYTHON support
#define BALL_PYTHON_SUPPORT

// Maximum line length for reading from files (see source/FORMAT)
#define BALL_MAX_LINE_LENGTH 65535

// #undef BALL_HAS_UNISTD_H
#define BALL_HAS_PROCESS_H
// #undef BALL_HAS_KILL
// #undef BALL_HAS_SYS_TIME_H
#define BALL_HAS_TIME_H
// #undef BALL_HAS_SYSCONF
// #undef BALL_HAS_SYS_PARAM_H
// #undef BALL_HAS_DIRENT_H
#define BALL_HAS_DIRECT_H
// #undef BALL_HAS_PWD_H
#define BALL_HAS_FLOAT_H
// #undef BALL_HAS_SYS_SOCKET_H
// #undef BALL_HAS_NETINET_IN_H
// #undef BALL_HAS_NETDB_H
// #undef BALL_HAS_ARPA_INET_H
#define BALL_HAS_SSTREAM

#define BALL_COMPILER_MSVC
#define BALL_PLATFORM_WINDOWS
#define BALL_HAS_CLOCKS_PER_SEC
#define BALL_HAS_WINDOWS_PERFORMANCE_COUNTER
#define BALL_USE_WINSOCK
#define mode_t int
#define BALL_MUST_CAST_TEMPLATE_FUNCTION_ARGS
#define NOMINMAX




// MS VC++ doesn't define all required symbols in 
// math.h if this symbol isn't defined *before* including
// math.h for the first time!
#define _USE_MATH_DEFINES 

// Keep Windows from defining min/max, ERROR,... as preprocesor symbols!
// May he how thought of defining these by default rot in hell!
#define NOMINMAX
#define NOGDI
#define NOWINRES

#define WINDOWS_LEAN_AND_MEAN
#define BALL_USE_GLEW

#endif // BALL_CONFIG_CONFIG_H
