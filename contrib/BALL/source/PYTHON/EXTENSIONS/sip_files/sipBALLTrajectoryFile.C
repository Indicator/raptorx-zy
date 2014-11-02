/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLTrajectoryFile.h"

#include "sipBALLFile.h"
#include "sipBALLFileNotFound.h"
#include "sipBALLString.h"
#include "sipBALLOpenMode.h"
#include "sipBALLTrajectoryFile.h"
#include "sipBALLSnapShot.h"


sipTrajectoryFile::sipTrajectoryFile() throw(): TrajectoryFile(), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,5);
}

sipTrajectoryFile::sipTrajectoryFile(const TrajectoryFile& a0) throw(): TrajectoryFile(a0), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,5);
}

sipTrajectoryFile::sipTrajectoryFile(const String& a0,OpenMode a1) throw(FileNotFound): TrajectoryFile(a0,a1), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,5);
}

sipTrajectoryFile::~sipTrajectoryFile() throw()
{
    sipCommonDtor(sipPySelf);
}

void sipTrajectoryFile::clear() throw()
{
    extern void sipVH_BALL_0(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipNm_BALL_clear);

    if (!meth)
    {
        TrajectoryFile::clear();
        return;
    }

    sipVH_BALL_0(sipGILState,meth);
}

bool sipTrajectoryFile::readHeader() throw()
{
    extern bool sipVH_BALL_4(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,NULL,sipNm_BALL_readHeader);

    if (!meth)
        return TrajectoryFile::readHeader();

    return sipVH_BALL_4(sipGILState,meth);
}

bool sipTrajectoryFile::writeHeader() throw()
{
    extern bool sipVH_BALL_4(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[2],sipPySelf,NULL,sipNm_BALL_writeHeader);

    if (!meth)
        return TrajectoryFile::writeHeader();

    return sipVH_BALL_4(sipGILState,meth);
}

bool sipTrajectoryFile::append(const SnapShot& a0) throw()
{
    extern bool sipVH_BALL_41(sip_gilstate_t,PyObject *,const SnapShot&);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[3],sipPySelf,NULL,sipNm_BALL_append);

    if (!meth)
        return TrajectoryFile::append(a0);

    return sipVH_BALL_41(sipGILState,meth,a0);
}

bool sipTrajectoryFile::read(SnapShot& a0) throw()
{
    extern bool sipVH_BALL_40(sip_gilstate_t,PyObject *,SnapShot&);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[4],sipPySelf,NULL,sipNm_BALL_read);

    if (!meth)
        return TrajectoryFile::read(a0);

    return sipVH_BALL_40(sipGILState,meth,a0);
}


extern "C" {static PyObject *meth_TrajectoryFile_clear(PyObject *, PyObject *);}
static PyObject *meth_TrajectoryFile_clear(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        TrajectoryFile *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_TrajectoryFile,&sipCpp))
        {
            (sipSelfWasArg ? sipCpp->TrajectoryFile::clear() : sipCpp->clear());

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_TrajectoryFile,sipNm_BALL_clear);

    return NULL;
}


extern "C" {static PyObject *meth_TrajectoryFile_getNumberOfSnapShots(PyObject *, PyObject *);}
static PyObject *meth_TrajectoryFile_getNumberOfSnapShots(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        TrajectoryFile *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_TrajectoryFile,&sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->getNumberOfSnapShots();

            return PyInt_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_TrajectoryFile,sipNm_BALL_getNumberOfSnapShots);

    return NULL;
}


extern "C" {static PyObject *meth_TrajectoryFile_getNumberOfAtoms(PyObject *, PyObject *);}
static PyObject *meth_TrajectoryFile_getNumberOfAtoms(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        TrajectoryFile *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_TrajectoryFile,&sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->getNumberOfAtoms();

            return PyInt_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_TrajectoryFile,sipNm_BALL_getNumberOfAtoms);

    return NULL;
}


extern "C" {static PyObject *meth_TrajectoryFile_readHeader(PyObject *, PyObject *);}
static PyObject *meth_TrajectoryFile_readHeader(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        TrajectoryFile *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_TrajectoryFile,&sipCpp))
        {
            bool sipRes;

            sipRes = (sipSelfWasArg ? sipCpp->TrajectoryFile::readHeader() : sipCpp->readHeader());

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_TrajectoryFile,sipNm_BALL_readHeader);

    return NULL;
}


extern "C" {static PyObject *meth_TrajectoryFile_writeHeader(PyObject *, PyObject *);}
static PyObject *meth_TrajectoryFile_writeHeader(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        TrajectoryFile *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_TrajectoryFile,&sipCpp))
        {
            bool sipRes;

            sipRes = (sipSelfWasArg ? sipCpp->TrajectoryFile::writeHeader() : sipCpp->writeHeader());

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_TrajectoryFile,sipNm_BALL_writeHeader);

    return NULL;
}


extern "C" {static PyObject *meth_TrajectoryFile_append(PyObject *, PyObject *);}
static PyObject *meth_TrajectoryFile_append(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        const SnapShot * a0;
        TrajectoryFile *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_TrajectoryFile,&sipCpp,sipClass_SnapShot,&a0))
        {
            bool sipRes;

            sipRes = (sipSelfWasArg ? sipCpp->TrajectoryFile::append(*a0) : sipCpp->append(*a0));

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_TrajectoryFile,sipNm_BALL_append);

    return NULL;
}


extern "C" {static PyObject *meth_TrajectoryFile_read(PyObject *, PyObject *);}
static PyObject *meth_TrajectoryFile_read(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        SnapShot * a0;
        TrajectoryFile *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_TrajectoryFile,&sipCpp,sipClass_SnapShot,&a0))
        {
            bool sipRes;

            sipRes = (sipSelfWasArg ? sipCpp->TrajectoryFile::read(*a0) : sipCpp->read(*a0));

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_TrajectoryFile,sipNm_BALL_read);

    return NULL;
}


extern "C" {static PyObject *slot_TrajectoryFile___eq__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_TrajectoryFile___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    TrajectoryFile *sipCpp = reinterpret_cast<TrajectoryFile *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_TrajectoryFile));

    if (!sipCpp)
        return 0;

    int sipArgsParsed = 0;

    {
        const TrajectoryFile * a0;

        if (sipParseArgs(&sipArgsParsed,sipArg,"JA",sipClass_TrajectoryFile,&a0))
        {
            bool sipRes;

            sipRes = ((*sipCpp) == *a0);

            return PyBool_FromLong(sipRes);
        }
    }

    return sipPySlotExtend(&sipModuleAPI_BALL,eq_slot,sipClass_TrajectoryFile,sipSelf,sipArg);
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_TrajectoryFile(void *, sipWrapperType *);}
static void *cast_TrajectoryFile(void *ptr,sipWrapperType *targetClass)
{
    void *res;

    if (targetClass == sipClass_TrajectoryFile)
        return ptr;

    if ((res = sipCast_File((File *)(TrajectoryFile *)ptr,targetClass)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_TrajectoryFile(void *, int);}
static void release_TrajectoryFile(void *ptr,int state)
{
    if (state & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipTrajectoryFile *>(ptr);
    else
        delete reinterpret_cast<TrajectoryFile *>(ptr);
}


extern "C" {static void dealloc_TrajectoryFile(sipWrapper *);}
static void dealloc_TrajectoryFile(sipWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipTrajectoryFile *>(sipSelf->u.cppPtr)->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_TrajectoryFile(sipSelf->u.cppPtr,sipSelf->flags);
    }
}


extern "C" {static void *init_TrajectoryFile(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_TrajectoryFile(sipWrapper *sipSelf,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    sipTrajectoryFile *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            sipCpp = new sipTrajectoryFile();
        }
    }

    if (!sipCpp)
    {
        const TrajectoryFile * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_TrajectoryFile,&a0))
        {
            sipCpp = new sipTrajectoryFile(*a0);
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
            sipCpp = new sipTrajectoryFile(*a0,*a1);
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


extern "C" {static void *forceConvertTo_TrajectoryFile(PyObject *, int *);}
static void *forceConvertTo_TrajectoryFile(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_TrajectoryFile))
        return sipConvertToCpp(valobj,sipClass_TrajectoryFile,iserrp);

    sipBadClass(sipNm_BALL_TrajectoryFile);

    *iserrp = 1;

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedClassDef supers_TrajectoryFile[] = {{163, 255, 1}};


/* Define this type's Python slots. */
static sipPySlotDef slots_TrajectoryFile[] = {
    {(void *)slot_TrajectoryFile___eq__, eq_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_TrajectoryFile[] = {
    {sipNm_BALL_append, meth_TrajectoryFile_append, METH_VARARGS, NULL},
    {sipNm_BALL_clear, meth_TrajectoryFile_clear, METH_VARARGS, NULL},
    {sipNm_BALL_getNumberOfAtoms, meth_TrajectoryFile_getNumberOfAtoms, METH_VARARGS, NULL},
    {sipNm_BALL_getNumberOfSnapShots, meth_TrajectoryFile_getNumberOfSnapShots, METH_VARARGS, NULL},
    {sipNm_BALL_read, meth_TrajectoryFile_read, METH_VARARGS, NULL},
    {sipNm_BALL_readHeader, meth_TrajectoryFile_readHeader, METH_VARARGS, NULL},
    {sipNm_BALL_writeHeader, meth_TrajectoryFile_writeHeader, METH_VARARGS, NULL}
};


sipTypeDef sipType_BALL_TrajectoryFile = {
    0,
    0,
    "BALL.TrajectoryFile",
    0,
    {0, 0, 1},
    supers_TrajectoryFile,
    slots_TrajectoryFile,
    7, methods_TrajectoryFile,
    0, 0,
    0,
    init_TrajectoryFile,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_TrajectoryFile,
    cast_TrajectoryFile,
    release_TrajectoryFile,
    forceConvertTo_TrajectoryFile,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
