/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLDCDFile.h"

#include "sipBALLTrajectoryFile.h"
#include "sipBALLFileNotFound.h"
#include "sipBALLString.h"
#include "sipBALLOpenMode.h"
#include "sipBALLDCDFile.h"
#include "sipBALLSnapShot.h"
#include "sipBALLFile.h"


sipDCDFile::sipDCDFile() throw(): DCDFile(), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,5);
}

sipDCDFile::sipDCDFile(const DCDFile& a0) throw(FileNotFound): DCDFile(a0), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,5);
}

sipDCDFile::sipDCDFile(const String& a0,OpenMode a1) throw(FileNotFound): DCDFile(a0,a1), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,5);
}

sipDCDFile::~sipDCDFile() throw()
{
    sipCommonDtor(sipPySelf);
}

void sipDCDFile::clear() throw()
{
    extern void sipVH_BALL_0(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipNm_BALL_clear);

    if (!meth)
    {
        DCDFile::clear();
        return;
    }

    sipVH_BALL_0(sipGILState,meth);
}

bool sipDCDFile::readHeader() throw()
{
    extern bool sipVH_BALL_4(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,NULL,sipNm_BALL_readHeader);

    if (!meth)
        return DCDFile::readHeader();

    return sipVH_BALL_4(sipGILState,meth);
}

bool sipDCDFile::writeHeader() throw()
{
    extern bool sipVH_BALL_4(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[2],sipPySelf,NULL,sipNm_BALL_writeHeader);

    if (!meth)
        return DCDFile::writeHeader();

    return sipVH_BALL_4(sipGILState,meth);
}

bool sipDCDFile::append(const SnapShot& a0) throw()
{
    extern bool sipVH_BALL_41(sip_gilstate_t,PyObject *,const SnapShot&);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[3],sipPySelf,NULL,sipNm_BALL_append);

    if (!meth)
        return DCDFile::append(a0);

    return sipVH_BALL_41(sipGILState,meth,a0);
}

bool sipDCDFile::read(SnapShot& a0) throw()
{
    extern bool sipVH_BALL_40(sip_gilstate_t,PyObject *,SnapShot&);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[4],sipPySelf,NULL,sipNm_BALL_read);

    if (!meth)
        return DCDFile::read(a0);

    return sipVH_BALL_40(sipGILState,meth,a0);
}


extern "C" {static PyObject *meth_DCDFile_clear(PyObject *, PyObject *);}
static PyObject *meth_DCDFile_clear(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        DCDFile *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_DCDFile,&sipCpp))
        {
            (sipSelfWasArg ? sipCpp->DCDFile::clear() : sipCpp->clear());

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_DCDFile,sipNm_BALL_clear);

    return NULL;
}


extern "C" {static PyObject *meth_DCDFile_isSwappingBytes(PyObject *, PyObject *);}
static PyObject *meth_DCDFile_isSwappingBytes(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        DCDFile *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_DCDFile,&sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isSwappingBytes();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_DCDFile,sipNm_BALL_isSwappingBytes);

    return NULL;
}


extern "C" {static PyObject *meth_DCDFile_hasVelocities(PyObject *, PyObject *);}
static PyObject *meth_DCDFile_hasVelocities(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        DCDFile *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_DCDFile,&sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->hasVelocities();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_DCDFile,sipNm_BALL_hasVelocities);

    return NULL;
}


extern "C" {static PyObject *meth_DCDFile_init(PyObject *, PyObject *);}
static PyObject *meth_DCDFile_init(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        DCDFile *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_DCDFile,&sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->init();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_DCDFile,sipNm_BALL_init);

    return NULL;
}


extern "C" {static PyObject *meth_DCDFile_readHeader(PyObject *, PyObject *);}
static PyObject *meth_DCDFile_readHeader(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        DCDFile *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_DCDFile,&sipCpp))
        {
            bool sipRes;

            sipRes = (sipSelfWasArg ? sipCpp->DCDFile::readHeader() : sipCpp->readHeader());

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_DCDFile,sipNm_BALL_readHeader);

    return NULL;
}


extern "C" {static PyObject *meth_DCDFile_writeHeader(PyObject *, PyObject *);}
static PyObject *meth_DCDFile_writeHeader(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        DCDFile *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_DCDFile,&sipCpp))
        {
            bool sipRes;

            sipRes = (sipSelfWasArg ? sipCpp->DCDFile::writeHeader() : sipCpp->writeHeader());

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_DCDFile,sipNm_BALL_writeHeader);

    return NULL;
}


extern "C" {static PyObject *meth_DCDFile_append(PyObject *, PyObject *);}
static PyObject *meth_DCDFile_append(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        const SnapShot * a0;
        DCDFile *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_DCDFile,&sipCpp,sipClass_SnapShot,&a0))
        {
            bool sipRes;

            sipRes = (sipSelfWasArg ? sipCpp->DCDFile::append(*a0) : sipCpp->append(*a0));

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_DCDFile,sipNm_BALL_append);

    return NULL;
}


extern "C" {static PyObject *meth_DCDFile_read(PyObject *, PyObject *);}
static PyObject *meth_DCDFile_read(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        SnapShot * a0;
        DCDFile *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_DCDFile,&sipCpp,sipClass_SnapShot,&a0))
        {
            bool sipRes;

            sipRes = (sipSelfWasArg ? sipCpp->DCDFile::read(*a0) : sipCpp->read(*a0));

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_DCDFile,sipNm_BALL_read);

    return NULL;
}


extern "C" {static PyObject *meth_DCDFile_enableVelocityStorage(PyObject *, PyObject *);}
static PyObject *meth_DCDFile_enableVelocityStorage(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        DCDFile *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_DCDFile,&sipCpp))
        {
            sipCpp->enableVelocityStorage();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_DCDFile,sipNm_BALL_enableVelocityStorage);

    return NULL;
}


extern "C" {static PyObject *meth_DCDFile_disableVelocityStorage(PyObject *, PyObject *);}
static PyObject *meth_DCDFile_disableVelocityStorage(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        DCDFile *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_DCDFile,&sipCpp))
        {
            sipCpp->disableVelocityStorage();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_DCDFile,sipNm_BALL_disableVelocityStorage);

    return NULL;
}


extern "C" {static PyObject *meth_DCDFile_close(PyObject *, PyObject *);}
static PyObject *meth_DCDFile_close(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        DCDFile *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_DCDFile,&sipCpp))
        {
            try
            {
            sipCpp->close();
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_DCDFile,sipNm_BALL_close);

    return NULL;
}


extern "C" {static PyObject *slot_DCDFile___eq__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_DCDFile___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    DCDFile *sipCpp = reinterpret_cast<DCDFile *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_DCDFile));

    if (!sipCpp)
        return 0;

    int sipArgsParsed = 0;

    {
        const DCDFile * a0;

        if (sipParseArgs(&sipArgsParsed,sipArg,"JA",sipClass_DCDFile,&a0))
        {
            bool sipRes;

            sipRes = ((*sipCpp) == *a0);

            return PyBool_FromLong(sipRes);
        }
    }

    return sipPySlotExtend(&sipModuleAPI_BALL,eq_slot,sipClass_DCDFile,sipSelf,sipArg);
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_DCDFile(void *, sipWrapperType *);}
static void *cast_DCDFile(void *ptr,sipWrapperType *targetClass)
{
    void *res;

    if (targetClass == sipClass_DCDFile)
        return ptr;

    if ((res = sipCast_TrajectoryFile((TrajectoryFile *)(DCDFile *)ptr,targetClass)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_DCDFile(void *, int);}
static void release_DCDFile(void *ptr,int state)
{
    if (state & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipDCDFile *>(ptr);
    else
        delete reinterpret_cast<DCDFile *>(ptr);
}


extern "C" {static void dealloc_DCDFile(sipWrapper *);}
static void dealloc_DCDFile(sipWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipDCDFile *>(sipSelf->u.cppPtr)->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_DCDFile(sipSelf->u.cppPtr,sipSelf->flags);
    }
}


extern "C" {static void *init_DCDFile(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_DCDFile(sipWrapper *sipSelf,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    sipDCDFile *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            sipCpp = new sipDCDFile();
        }
    }

    if (!sipCpp)
    {
        const DCDFile * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_DCDFile,&a0))
        {
            try
            {
            sipCpp = new sipDCDFile(*a0);
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

    if (!sipCpp)
    {
        const String * a0;
        int a0State = 0;
        OpenMode a1def = std::ios::in;
        OpenMode * a1 = &a1def;
        int a1State = 0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"J1|J1",sipClass_String,&a0,&a0State,sipClass_OpenMode,&a1,&a1State))
        {
            try
            {
            sipCpp = new sipDCDFile(*a0,*a1);
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

    if (sipCpp)
        sipCpp->sipPySelf = sipSelf;

    return sipCpp;
}


extern "C" {static void *forceConvertTo_DCDFile(PyObject *, int *);}
static void *forceConvertTo_DCDFile(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_DCDFile))
        return sipConvertToCpp(valobj,sipClass_DCDFile,iserrp);

    sipBadClass(sipNm_BALL_DCDFile);

    *iserrp = 1;

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedClassDef supers_DCDFile[] = {{174, 255, 1}};


/* Define this type's Python slots. */
static sipPySlotDef slots_DCDFile[] = {
    {(void *)slot_DCDFile___eq__, eq_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_DCDFile[] = {
    {sipNm_BALL_append, meth_DCDFile_append, METH_VARARGS, NULL},
    {sipNm_BALL_clear, meth_DCDFile_clear, METH_VARARGS, NULL},
    {sipNm_BALL_close, meth_DCDFile_close, METH_VARARGS, NULL},
    {sipNm_BALL_disableVelocityStorage, meth_DCDFile_disableVelocityStorage, METH_VARARGS, NULL},
    {sipNm_BALL_enableVelocityStorage, meth_DCDFile_enableVelocityStorage, METH_VARARGS, NULL},
    {sipNm_BALL_hasVelocities, meth_DCDFile_hasVelocities, METH_VARARGS, NULL},
    {sipNm_BALL_init, meth_DCDFile_init, METH_VARARGS, NULL},
    {sipNm_BALL_isSwappingBytes, meth_DCDFile_isSwappingBytes, METH_VARARGS, NULL},
    {sipNm_BALL_read, meth_DCDFile_read, METH_VARARGS, NULL},
    {sipNm_BALL_readHeader, meth_DCDFile_readHeader, METH_VARARGS, NULL},
    {sipNm_BALL_writeHeader, meth_DCDFile_writeHeader, METH_VARARGS, NULL}
};


sipTypeDef sipType_BALL_DCDFile = {
    0,
    0,
    "BALL.DCDFile",
    0,
    {0, 0, 1},
    supers_DCDFile,
    slots_DCDFile,
    11, methods_DCDFile,
    0, 0,
    0,
    init_DCDFile,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_DCDFile,
    cast_DCDFile,
    release_DCDFile,
    forceConvertTo_DCDFile,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
