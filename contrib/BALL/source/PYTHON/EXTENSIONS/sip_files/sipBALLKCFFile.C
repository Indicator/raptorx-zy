/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLKCFFile.h"

#include "sipBALLGenericMolFile.h"
#include "sipBALLFileNotFound.h"
#include "sipBALLFileCannotWrite.h"
#include "sipBALLParseError.h"
#include "sipBALLString.h"
#include "sipBALLOpenMode.h"
#include "sipBALLKCFFile.h"
#include "sipBALLSystem.h"
#include "sipBALLMolecule.h"
#include "sipBALLLineBasedFile.h"
#include "sipBALLPosition.h"
#include "sipBALLFile.h"


sipKCFFile::sipKCFFile() throw(): KCFFile(), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,8);
}

sipKCFFile::sipKCFFile(const String& a0,OpenMode a1) throw(FileNotFound): KCFFile(a0,a1), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,8);
}

sipKCFFile::sipKCFFile(const KCFFile& a0) throw(FileNotFound): KCFFile(a0), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,8);
}

sipKCFFile::~sipKCFFile() throw()
{
    sipCommonDtor(sipPySelf);
}

bool sipKCFFile::write(const Molecule& a0) throw(File::CannotWrite)
{
    extern bool sipVH_BALL_48(sip_gilstate_t,PyObject *,const Molecule&);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipNm_BALL_write);

    if (!meth)
        return KCFFile::write(a0);

    return sipVH_BALL_48(sipGILState,meth,a0);
}

bool sipKCFFile::write(const System& a0) throw(File::CannotWrite)
{
    extern bool sipVH_BALL_49(sip_gilstate_t,PyObject *,const System&);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,NULL,sipNm_BALL_write);

    if (!meth)
        return KCFFile::write(a0);

    return sipVH_BALL_49(sipGILState,meth,a0);
}

bool sipKCFFile::read(System& a0) throw(ParseError)
{
    extern bool sipVH_BALL_47(sip_gilstate_t,PyObject *,System&);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[2],sipPySelf,NULL,sipNm_BALL_read);

    if (!meth)
        return KCFFile::read(a0);

    return sipVH_BALL_47(sipGILState,meth,a0);
}

Molecule * sipKCFFile::read() throw(ParseError)
{
    extern Molecule * sipVH_BALL_46(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[3],sipPySelf,NULL,sipNm_BALL_read);

    if (!meth)
        return KCFFile::read();

    return sipVH_BALL_46(sipGILState,meth);
}

GenericMolFile& sipKCFFile::operator>>(System& a0) throw(ParseError)
{
    extern GenericMolFile& sipVH_BALL_45(sip_gilstate_t,PyObject *,System&);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[4],sipPySelf,NULL,sipNm_BALL___rshift__);

    if (!meth)
        return GenericMolFile::operator>>(a0);

    return sipVH_BALL_45(sipGILState,meth,a0);
}

GenericMolFile& sipKCFFile::operator<<(const System& a0) throw(File::CannotWrite)
{
    extern GenericMolFile& sipVH_BALL_44(sip_gilstate_t,PyObject *,const System&);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[5],sipPySelf,NULL,sipNm_BALL___lshift__);

    if (!meth)
        return GenericMolFile::operator<<(a0);

    return sipVH_BALL_44(sipGILState,meth,a0);
}

GenericMolFile& sipKCFFile::operator>>(Molecule& a0) throw(ParseError)
{
    extern GenericMolFile& sipVH_BALL_43(sip_gilstate_t,PyObject *,Molecule&);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[6],sipPySelf,NULL,sipNm_BALL___rshift__);

    if (!meth)
        return GenericMolFile::operator>>(a0);

    return sipVH_BALL_43(sipGILState,meth,a0);
}

GenericMolFile& sipKCFFile::operator<<(const Molecule& a0) throw(File::CannotWrite)
{
    extern GenericMolFile& sipVH_BALL_42(sip_gilstate_t,PyObject *,const Molecule&);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[7],sipPySelf,NULL,sipNm_BALL___lshift__);

    if (!meth)
        return GenericMolFile::operator<<(a0);

    return sipVH_BALL_42(sipGILState,meth,a0);
}


extern "C" {static PyObject *meth_KCFFile_write(PyObject *, PyObject *);}
static PyObject *meth_KCFFile_write(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        const Molecule * a0;
        KCFFile *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_KCFFile,&sipCpp,sipClass_Molecule,&a0))
        {
            bool sipRes;

            try
            {
            sipRes = (sipSelfWasArg ? sipCpp->KCFFile::write(*a0) : sipCpp->write(*a0));
            }
            catch (File::CannotWrite &sipExceptionRef)
            {
                /* Hope that there is a valid copy ctor. */
                File::CannotWrite *sipExceptionCopy = new File::CannotWrite(sipExceptionRef);

                sipRaiseClassException(sipClass_File_CannotWrite,sipExceptionCopy);

                return NULL;
            }

            return PyBool_FromLong(sipRes);
        }
    }

    {
        const System * a0;
        KCFFile *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_KCFFile,&sipCpp,sipClass_System,&a0))
        {
            bool sipRes;

            try
            {
            sipRes = (sipSelfWasArg ? sipCpp->KCFFile::write(*a0) : sipCpp->write(*a0));
            }
            catch (File::CannotWrite &sipExceptionRef)
            {
                /* Hope that there is a valid copy ctor. */
                File::CannotWrite *sipExceptionCopy = new File::CannotWrite(sipExceptionRef);

                sipRaiseClassException(sipClass_File_CannotWrite,sipExceptionCopy);

                return NULL;
            }

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_KCFFile,sipNm_BALL_write);

    return NULL;
}


extern "C" {static PyObject *meth_KCFFile_read(PyObject *, PyObject *);}
static PyObject *meth_KCFFile_read(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        System * a0;
        KCFFile *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_KCFFile,&sipCpp,sipClass_System,&a0))
        {
            bool sipRes;

            try
            {
            sipRes = (sipSelfWasArg ? sipCpp->KCFFile::read(*a0) : sipCpp->read(*a0));
            }
            catch (ParseError &sipExceptionRef)
            {
                /* Hope that there is a valid copy ctor. */
                ParseError *sipExceptionCopy = new ParseError(sipExceptionRef);

                sipRaiseClassException(sipClass_ParseError,sipExceptionCopy);

                return NULL;
            }

            return PyBool_FromLong(sipRes);
        }
    }

    {
        KCFFile *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_KCFFile,&sipCpp))
        {
            Molecule *sipRes;

            try
            {
            sipRes = (sipSelfWasArg ? sipCpp->KCFFile::read() : sipCpp->read());
            }
            catch (ParseError &sipExceptionRef)
            {
                /* Hope that there is a valid copy ctor. */
                ParseError *sipExceptionCopy = new ParseError(sipExceptionRef);

                sipRaiseClassException(sipClass_ParseError,sipExceptionCopy);

                return NULL;
            }

            return sipConvertFromInstance(sipRes,sipClass_Molecule,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_KCFFile,sipNm_BALL_read);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_KCFFile(void *, sipWrapperType *);}
static void *cast_KCFFile(void *ptr,sipWrapperType *targetClass)
{
    void *res;

    if (targetClass == sipClass_KCFFile)
        return ptr;

    if ((res = sipCast_GenericMolFile((GenericMolFile *)(KCFFile *)ptr,targetClass)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_KCFFile(void *, int);}
static void release_KCFFile(void *ptr,int state)
{
    if (state & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipKCFFile *>(ptr);
    else
        delete reinterpret_cast<KCFFile *>(ptr);
}


extern "C" {static void dealloc_KCFFile(sipWrapper *);}
static void dealloc_KCFFile(sipWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipKCFFile *>(sipSelf->u.cppPtr)->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_KCFFile(sipSelf->u.cppPtr,sipSelf->flags);
    }
}


extern "C" {static void *init_KCFFile(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_KCFFile(sipWrapper *sipSelf,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    sipKCFFile *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            sipCpp = new sipKCFFile();
        }
    }

    if (!sipCpp)
    {
        const String * a0;
        int a0State = 0;
        OpenMode a1def = File::MODE_IN;
        OpenMode * a1 = &a1def;
        int a1State = 0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"J1|J1",sipClass_String,&a0,&a0State,sipClass_OpenMode,&a1,&a1State))
        {
            try
            {
            sipCpp = new sipKCFFile(*a0,*a1);
            }
            catch (FileNotFound &sipExceptionRef)
            {

            sipReleaseInstance(const_cast<String *>(a0),sipClass_String,a0State);
            sipReleaseInstance(a1,sipClass_OpenMode,a1State);
                /* Hope that there is a valid copy ctor. */
                FileNotFound *sipExceptionCopy = new FileNotFound(sipExceptionRef);

                sipRaiseClassException(sipClass_FileNotFound,sipExceptionCopy);

                return NULL;
            }

            sipReleaseInstance(const_cast<String *>(a0),sipClass_String,a0State);
            sipReleaseInstance(a1,sipClass_OpenMode,a1State);
        }
    }

    if (!sipCpp)
    {
        const KCFFile * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_KCFFile,&a0))
        {
            try
            {
            sipCpp = new sipKCFFile(*a0);
            }
            catch (FileNotFound &sipExceptionRef)
            {
                /* Hope that there is a valid copy ctor. */
                FileNotFound *sipExceptionCopy = new FileNotFound(sipExceptionRef);

                sipRaiseClassException(sipClass_FileNotFound,sipExceptionCopy);

                return NULL;
            }
        }
    }

    if (sipCpp)
        sipCpp->sipPySelf = sipSelf;

    return sipCpp;
}


extern "C" {static PyObject *var_KCFFile_CONTINUED_LINE(PyObject *, PyObject *);}
static PyObject *var_KCFFile_CONTINUED_LINE(PyObject *,PyObject *sipPy)
{
   const char *sipVal;

    if (sipPy == NULL)
    {
        sipVal = KCFFile::CONTINUED_LINE;

        sipPy = PyString_FromString(sipVal);

        return sipPy;
    }

	sipVal = PyString_AsString(sipPy);

    if (sipVal == NULL)
    {
        sipBadSetType(sipNm_BALL_KCFFile,sipNm_BALL_CONTINUED_LINE);
        return NULL;
    }

    KCFFile::CONTINUED_LINE = sipVal;

    Py_INCREF(Py_None);
    return Py_None;
}


extern "C" {static PyObject *var_KCFFile_DELIMITER_TAG(PyObject *, PyObject *);}
static PyObject *var_KCFFile_DELIMITER_TAG(PyObject *,PyObject *sipPy)
{
   const char *sipVal;

    if (sipPy == NULL)
    {
        sipVal = KCFFile::DELIMITER_TAG;

        sipPy = PyString_FromString(sipVal);

        return sipPy;
    }

	sipVal = PyString_AsString(sipPy);

    if (sipVal == NULL)
    {
        sipBadSetType(sipNm_BALL_KCFFile,sipNm_BALL_DELIMITER_TAG);
        return NULL;
    }

    KCFFile::DELIMITER_TAG = sipVal;

    Py_INCREF(Py_None);
    return Py_None;
}


extern "C" {static PyObject *var_KCFFile_EDGE_TAG(PyObject *, PyObject *);}
static PyObject *var_KCFFile_EDGE_TAG(PyObject *,PyObject *sipPy)
{
   const char *sipVal;

    if (sipPy == NULL)
    {
        sipVal = KCFFile::EDGE_TAG;

        sipPy = PyString_FromString(sipVal);

        return sipPy;
    }

	sipVal = PyString_AsString(sipPy);

    if (sipVal == NULL)
    {
        sipBadSetType(sipNm_BALL_KCFFile,sipNm_BALL_EDGE_TAG);
        return NULL;
    }

    KCFFile::EDGE_TAG = sipVal;

    Py_INCREF(Py_None);
    return Py_None;
}


extern "C" {static PyObject *var_KCFFile_NODE_TAG(PyObject *, PyObject *);}
static PyObject *var_KCFFile_NODE_TAG(PyObject *,PyObject *sipPy)
{
   const char *sipVal;

    if (sipPy == NULL)
    {
        sipVal = KCFFile::NODE_TAG;

        sipPy = PyString_FromString(sipVal);

        return sipPy;
    }

	sipVal = PyString_AsString(sipPy);

    if (sipVal == NULL)
    {
        sipBadSetType(sipNm_BALL_KCFFile,sipNm_BALL_NODE_TAG);
        return NULL;
    }

    KCFFile::NODE_TAG = sipVal;

    Py_INCREF(Py_None);
    return Py_None;
}


extern "C" {static PyObject *var_KCFFile_ENTRY_TAG(PyObject *, PyObject *);}
static PyObject *var_KCFFile_ENTRY_TAG(PyObject *,PyObject *sipPy)
{
   const char *sipVal;

    if (sipPy == NULL)
    {
        sipVal = KCFFile::ENTRY_TAG;

        sipPy = PyString_FromString(sipVal);

        return sipPy;
    }

	sipVal = PyString_AsString(sipPy);

    if (sipVal == NULL)
    {
        sipBadSetType(sipNm_BALL_KCFFile,sipNm_BALL_ENTRY_TAG);
        return NULL;
    }

    KCFFile::ENTRY_TAG = sipVal;

    Py_INCREF(Py_None);
    return Py_None;
}

PyMethodDef variables_KCFFile[] = {
    {sipNm_BALL_CONTINUED_LINE, var_KCFFile_CONTINUED_LINE, METH_STATIC, NULL},
    {sipNm_BALL_DELIMITER_TAG, var_KCFFile_DELIMITER_TAG, METH_STATIC, NULL},
    {sipNm_BALL_EDGE_TAG, var_KCFFile_EDGE_TAG, METH_STATIC, NULL},
    {sipNm_BALL_NODE_TAG, var_KCFFile_NODE_TAG, METH_STATIC, NULL},
    {sipNm_BALL_ENTRY_TAG, var_KCFFile_ENTRY_TAG, METH_STATIC, NULL},
    {0, 0, 0, 0}
};


extern "C" {static void *forceConvertTo_KCFFile(PyObject *, int *);}
static void *forceConvertTo_KCFFile(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_KCFFile))
        return sipConvertToCpp(valobj,sipClass_KCFFile,iserrp);

    sipBadClass(sipNm_BALL_KCFFile);

    *iserrp = 1;

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedClassDef supers_KCFFile[] = {{169, 255, 1}};


static PyMethodDef methods_KCFFile[] = {
    {sipNm_BALL_read, meth_KCFFile_read, METH_VARARGS, NULL},
    {sipNm_BALL_write, meth_KCFFile_write, METH_VARARGS, NULL}
};


sipTypeDef sipType_BALL_KCFFile = {
    0,
    0,
    "BALL.KCFFile",
    0,
    {0, 0, 1},
    supers_KCFFile,
    0,
    2, methods_KCFFile,
    0, 0,
    variables_KCFFile,
    init_KCFFile,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_KCFFile,
    cast_KCFFile,
    release_KCFFile,
    forceConvertTo_KCFFile,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
