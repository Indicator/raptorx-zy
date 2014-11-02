/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLHINFile.h"

#include "sipBALLGenericMolFile.h"
#include "sipBALLFileNotFound.h"
#include "sipBALLFileCannotWrite.h"
#include "sipBALLParseError.h"
#include "sipBALLString.h"
#include "sipBALLOpenMode.h"
#include "sipBALLHINFile.h"
#include "sipBALLSimpleBox3.h"
#include "sipBALLSystem.h"
#include "sipBALLMolecule.h"
#include "sipBALLLineBasedFile.h"
#include "sipBALLPosition.h"
#include "sipBALLFile.h"


sipHINFile::sipHINFile(): HINFile(), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,8);
}

sipHINFile::sipHINFile(String& a0,OpenMode a1) throw(FileNotFound): HINFile(a0,a1), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,8);
}

sipHINFile::sipHINFile(const HINFile& a0): HINFile(a0), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,8);
}

sipHINFile::~sipHINFile() throw()
{
    sipCommonDtor(sipPySelf);
}

bool sipHINFile::write(const System& a0) throw(File::CannotWrite)
{
    extern bool sipVH_BALL_49(sip_gilstate_t,PyObject *,const System&);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipNm_BALL_write);

    if (!meth)
        return HINFile::write(a0);

    return sipVH_BALL_49(sipGILState,meth,a0);
}

bool sipHINFile::write(const Molecule& a0) throw(File::CannotWrite)
{
    extern bool sipVH_BALL_48(sip_gilstate_t,PyObject *,const Molecule&);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,NULL,sipNm_BALL_write);

    if (!meth)
        return HINFile::write(a0);

    return sipVH_BALL_48(sipGILState,meth,a0);
}

bool sipHINFile::read(System& a0) throw(ParseError)
{
    extern bool sipVH_BALL_47(sip_gilstate_t,PyObject *,System&);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[2],sipPySelf,NULL,sipNm_BALL_read);

    if (!meth)
        return HINFile::read(a0);

    return sipVH_BALL_47(sipGILState,meth,a0);
}

Molecule * sipHINFile::read() throw(ParseError)
{
    extern Molecule * sipVH_BALL_46(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[3],sipPySelf,NULL,sipNm_BALL_read);

    if (!meth)
        return HINFile::read();

    return sipVH_BALL_46(sipGILState,meth);
}

GenericMolFile& sipHINFile::operator>>(System& a0) throw(ParseError)
{
    extern GenericMolFile& sipVH_BALL_45(sip_gilstate_t,PyObject *,System&);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[4],sipPySelf,NULL,sipNm_BALL___rshift__);

    if (!meth)
        return GenericMolFile::operator>>(a0);

    return sipVH_BALL_45(sipGILState,meth,a0);
}

GenericMolFile& sipHINFile::operator<<(const System& a0) throw(File::CannotWrite)
{
    extern GenericMolFile& sipVH_BALL_44(sip_gilstate_t,PyObject *,const System&);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[5],sipPySelf,NULL,sipNm_BALL___lshift__);

    if (!meth)
        return GenericMolFile::operator<<(a0);

    return sipVH_BALL_44(sipGILState,meth,a0);
}

GenericMolFile& sipHINFile::operator>>(Molecule& a0) throw(ParseError)
{
    extern GenericMolFile& sipVH_BALL_43(sip_gilstate_t,PyObject *,Molecule&);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[6],sipPySelf,NULL,sipNm_BALL___rshift__);

    if (!meth)
        return GenericMolFile::operator>>(a0);

    return sipVH_BALL_43(sipGILState,meth,a0);
}

GenericMolFile& sipHINFile::operator<<(const Molecule& a0) throw(File::CannotWrite)
{
    extern GenericMolFile& sipVH_BALL_42(sip_gilstate_t,PyObject *,const Molecule&);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[7],sipPySelf,NULL,sipNm_BALL___lshift__);

    if (!meth)
        return GenericMolFile::operator<<(a0);

    return sipVH_BALL_42(sipGILState,meth,a0);
}


extern "C" {static PyObject *meth_HINFile_write(PyObject *, PyObject *);}
static PyObject *meth_HINFile_write(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        const System * a0;
        HINFile *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_HINFile,&sipCpp,sipClass_System,&a0))
        {
            bool sipRes;

            try
            {
            sipRes = (sipSelfWasArg ? sipCpp->HINFile::write(*a0) : sipCpp->write(*a0));
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
        const Molecule * a0;
        HINFile *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_HINFile,&sipCpp,sipClass_Molecule,&a0))
        {
            bool sipRes;

            try
            {
            sipRes = (sipSelfWasArg ? sipCpp->HINFile::write(*a0) : sipCpp->write(*a0));
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_HINFile,sipNm_BALL_write);

    return NULL;
}


extern "C" {static PyObject *meth_HINFile_read(PyObject *, PyObject *);}
static PyObject *meth_HINFile_read(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        System * a0;
        HINFile *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_HINFile,&sipCpp,sipClass_System,&a0))
        {
            bool sipRes;

            try
            {
            sipRes = (sipSelfWasArg ? sipCpp->HINFile::read(*a0) : sipCpp->read(*a0));
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
        HINFile *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_HINFile,&sipCpp))
        {
            Molecule *sipRes;

            try
            {
            sipRes = (sipSelfWasArg ? sipCpp->HINFile::read() : sipCpp->read());
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_HINFile,sipNm_BALL_read);

    return NULL;
}


extern "C" {static PyObject *meth_HINFile_hasPeriodicBoundary(PyObject *, PyObject *);}
static PyObject *meth_HINFile_hasPeriodicBoundary(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        HINFile *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_HINFile,&sipCpp))
        {
            bool sipRes;

            try
            {
            sipRes = sipCpp->hasPeriodicBoundary();
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_HINFile,sipNm_BALL_hasPeriodicBoundary);

    return NULL;
}


extern "C" {static PyObject *meth_HINFile_getPeriodicBoundary(PyObject *, PyObject *);}
static PyObject *meth_HINFile_getPeriodicBoundary(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        HINFile *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_HINFile,&sipCpp))
        {
            SimpleBox3 *sipRes;

            try
            {
            sipRes = new SimpleBox3(sipCpp->getPeriodicBoundary());
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return sipConvertFromNewInstance(sipRes,sipClass_SimpleBox3,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_HINFile,sipNm_BALL_getPeriodicBoundary);

    return NULL;
}


extern "C" {static PyObject *meth_HINFile_getTemperature(PyObject *, PyObject *);}
static PyObject *meth_HINFile_getTemperature(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        HINFile *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_HINFile,&sipCpp))
        {
            float sipRes;

            try
            {
            sipRes = sipCpp->getTemperature();
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return PyFloat_FromDouble((double)sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_HINFile,sipNm_BALL_getTemperature);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_HINFile(void *, sipWrapperType *);}
static void *cast_HINFile(void *ptr,sipWrapperType *targetClass)
{
    void *res;

    if (targetClass == sipClass_HINFile)
        return ptr;

    if ((res = sipCast_GenericMolFile((GenericMolFile *)(HINFile *)ptr,targetClass)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_HINFile(void *, int);}
static void release_HINFile(void *ptr,int state)
{
    if (state & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipHINFile *>(ptr);
    else
        delete reinterpret_cast<HINFile *>(ptr);
}


extern "C" {static void dealloc_HINFile(sipWrapper *);}
static void dealloc_HINFile(sipWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipHINFile *>(sipSelf->u.cppPtr)->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_HINFile(sipSelf->u.cppPtr,sipSelf->flags);
    }
}


extern "C" {static void *init_HINFile(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_HINFile(sipWrapper *sipSelf,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    sipHINFile *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            try
            {
            sipCpp = new sipHINFile();
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }
        }
    }

    if (!sipCpp)
    {
        String * a0;
        int a0State = 0;
        OpenMode a1def = std::ios::in;
        OpenMode * a1 = &a1def;
        int a1State = 0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"J1|J1",sipClass_String,&a0,&a0State,sipClass_OpenMode,&a1,&a1State))
        {
            try
            {
            sipCpp = new sipHINFile(*a0,*a1);
            }
            catch (FileNotFound &sipExceptionRef)
            {

            sipReleaseInstance(a0,sipClass_String,a0State);
            sipReleaseInstance(a1,sipClass_OpenMode,a1State);
                /* Hope that there is a valid copy ctor. */
                FileNotFound *sipExceptionCopy = new FileNotFound(sipExceptionRef);

                sipRaiseClassException(sipClass_FileNotFound,sipExceptionCopy);

                return NULL;
            }

            sipReleaseInstance(a0,sipClass_String,a0State);
            sipReleaseInstance(a1,sipClass_OpenMode,a1State);
        }
    }

    if (!sipCpp)
    {
        const HINFile * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_HINFile,&a0))
        {
            try
            {
            sipCpp = new sipHINFile(*a0);
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }
        }
    }

    if (sipCpp)
        sipCpp->sipPySelf = sipSelf;

    return sipCpp;
}


extern "C" {static void *forceConvertTo_HINFile(PyObject *, int *);}
static void *forceConvertTo_HINFile(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_HINFile))
        return sipConvertToCpp(valobj,sipClass_HINFile,iserrp);

    sipBadClass(sipNm_BALL_HINFile);

    *iserrp = 1;

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedClassDef supers_HINFile[] = {{169, 255, 1}};


static PyMethodDef methods_HINFile[] = {
    {sipNm_BALL_getPeriodicBoundary, meth_HINFile_getPeriodicBoundary, METH_VARARGS, NULL},
    {sipNm_BALL_getTemperature, meth_HINFile_getTemperature, METH_VARARGS, NULL},
    {sipNm_BALL_hasPeriodicBoundary, meth_HINFile_hasPeriodicBoundary, METH_VARARGS, NULL},
    {sipNm_BALL_read, meth_HINFile_read, METH_VARARGS, NULL},
    {sipNm_BALL_write, meth_HINFile_write, METH_VARARGS, NULL}
};


sipTypeDef sipType_BALL_HINFile = {
    0,
    0,
    "BALL.HINFile",
    0,
    {0, 0, 1},
    supers_HINFile,
    0,
    5, methods_HINFile,
    0, 0,
    0,
    init_HINFile,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_HINFile,
    cast_HINFile,
    release_HINFile,
    forceConvertTo_HINFile,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
