/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLReconstructFragmentProcessor.h"

#include "sipBALLFragmentProcessor.h"
#include "sipBALLFragmentDB.h"
#include "sipBALLReconstructFragmentProcessor.h"
#include "sipBALLProcessor.h"
#include "sipBALLFragment.h"


sipReconstructFragmentProcessor::sipReconstructFragmentProcessor(): ReconstructFragmentProcessor(), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,2);
}

sipReconstructFragmentProcessor::sipReconstructFragmentProcessor(const FragmentDB& a0): ReconstructFragmentProcessor(a0), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,2);
}

sipReconstructFragmentProcessor::sipReconstructFragmentProcessor(const ReconstructFragmentProcessor& a0): ReconstructFragmentProcessor(a0), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,2);
}

sipReconstructFragmentProcessor::~sipReconstructFragmentProcessor()
{
    sipCommonDtor(sipPySelf);
}

bool sipReconstructFragmentProcessor::start()
{
    extern bool sipVH_BALL_4(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipNm_BALL_start);

    if (!meth)
        return ReconstructFragmentProcessor::start();

    return sipVH_BALL_4(sipGILState,meth);
}

bool sipReconstructFragmentProcessor::finish()
{
    extern bool sipVH_BALL_4(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,NULL,sipNm_BALL_finish);

    if (!meth)
        return ReconstructFragmentProcessor::finish();

    return sipVH_BALL_4(sipGILState,meth);
}


extern "C" {static PyObject *meth_ReconstructFragmentProcessor_start(PyObject *, PyObject *);}
static PyObject *meth_ReconstructFragmentProcessor_start(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        ReconstructFragmentProcessor *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_ReconstructFragmentProcessor,&sipCpp))
        {
            bool sipRes;

            try
            {
            sipRes = (sipSelfWasArg ? sipCpp->ReconstructFragmentProcessor::start() : sipCpp->start());
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_ReconstructFragmentProcessor,sipNm_BALL_start);

    return NULL;
}


extern "C" {static PyObject *meth_ReconstructFragmentProcessor_finish(PyObject *, PyObject *);}
static PyObject *meth_ReconstructFragmentProcessor_finish(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        ReconstructFragmentProcessor *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_ReconstructFragmentProcessor,&sipCpp))
        {
            bool sipRes;

            try
            {
            sipRes = (sipSelfWasArg ? sipCpp->ReconstructFragmentProcessor::finish() : sipCpp->finish());
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_ReconstructFragmentProcessor,sipNm_BALL_finish);

    return NULL;
}


extern "C" {static PyObject *meth_ReconstructFragmentProcessor_getNumberOfInsertedAtoms(PyObject *, PyObject *);}
static PyObject *meth_ReconstructFragmentProcessor_getNumberOfInsertedAtoms(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        ReconstructFragmentProcessor *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_ReconstructFragmentProcessor,&sipCpp))
        {
            int sipRes;

            try
            {
            sipRes = sipCpp->getNumberOfInsertedAtoms();
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return PyInt_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_ReconstructFragmentProcessor,sipNm_BALL_getNumberOfInsertedAtoms);

    return NULL;
}


extern "C" {static PyObject *meth_ReconstructFragmentProcessor_setFragmentDB(PyObject *, PyObject *);}
static PyObject *meth_ReconstructFragmentProcessor_setFragmentDB(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const FragmentDB * a0;
        ReconstructFragmentProcessor *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_ReconstructFragmentProcessor,&sipCpp,sipClass_FragmentDB,&a0))
        {
            try
            {
            sipCpp->setFragmentDB(*a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_ReconstructFragmentProcessor,sipNm_BALL_setFragmentDB);

    return NULL;
}


extern "C" {static PyObject *meth_ReconstructFragmentProcessor_getFragmentDB(PyObject *, PyObject *);}
static PyObject *meth_ReconstructFragmentProcessor_getFragmentDB(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        ReconstructFragmentProcessor *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_ReconstructFragmentProcessor,&sipCpp))
        {
            const FragmentDB *sipRes;

            try
            {
            sipRes = sipCpp->getFragmentDB();
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return sipConvertFromInstance(const_cast<FragmentDB *>(sipRes),sipClass_FragmentDB,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_ReconstructFragmentProcessor,sipNm_BALL_getFragmentDB);

    return NULL;
}


extern "C" {static PyObject *slot_ReconstructFragmentProcessor___call__(PyObject *sipSelf,PyObject *sipArgs);}
static PyObject *slot_ReconstructFragmentProcessor___call__(PyObject *sipSelf,PyObject *sipArgs)
{
    ReconstructFragmentProcessor *sipCpp = reinterpret_cast<ReconstructFragmentProcessor *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_ReconstructFragmentProcessor));

    if (!sipCpp)
        return 0;

    int sipArgsParsed = 0;

    {
        Fragment * a0;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"JA",sipClass_Fragment,&a0))
        {
            Processor::Result sipRes = (Processor::Result)0;

#line 24 "reconstructFragmentProcessor.sip"
  sipRes = sipCpp->operator () (*a0);
#line 258 "sipBALLReconstructFragmentProcessor.C"

            return sipConvertFromNamedEnum(sipRes,sipEnum_Processor_Result);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_ReconstructFragmentProcessor,sipNm_BALL___call__);

    return 0;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_ReconstructFragmentProcessor(void *, sipWrapperType *);}
static void *cast_ReconstructFragmentProcessor(void *ptr,sipWrapperType *targetClass)
{
    void *res;

    if (targetClass == sipClass_ReconstructFragmentProcessor)
        return ptr;

    if ((res = sipCast_FragmentProcessor((FragmentProcessor *)(ReconstructFragmentProcessor *)ptr,targetClass)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_ReconstructFragmentProcessor(void *, int);}
static void release_ReconstructFragmentProcessor(void *ptr,int state)
{
    if (state & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipReconstructFragmentProcessor *>(ptr);
    else
        delete reinterpret_cast<ReconstructFragmentProcessor *>(ptr);
}


extern "C" {static void dealloc_ReconstructFragmentProcessor(sipWrapper *);}
static void dealloc_ReconstructFragmentProcessor(sipWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipReconstructFragmentProcessor *>(sipSelf->u.cppPtr)->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_ReconstructFragmentProcessor(sipSelf->u.cppPtr,sipSelf->flags);
    }
}


extern "C" {static void *init_ReconstructFragmentProcessor(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_ReconstructFragmentProcessor(sipWrapper *sipSelf,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    sipReconstructFragmentProcessor *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            try
            {
            sipCpp = new sipReconstructFragmentProcessor();
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
        const FragmentDB * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_FragmentDB,&a0))
        {
            try
            {
            sipCpp = new sipReconstructFragmentProcessor(*a0);
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
        const ReconstructFragmentProcessor * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_ReconstructFragmentProcessor,&a0))
        {
            try
            {
            sipCpp = new sipReconstructFragmentProcessor(*a0);
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


extern "C" {static void *forceConvertTo_ReconstructFragmentProcessor(PyObject *, int *);}
static void *forceConvertTo_ReconstructFragmentProcessor(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_ReconstructFragmentProcessor))
        return sipConvertToCpp(valobj,sipClass_ReconstructFragmentProcessor,iserrp);

    sipBadClass(sipNm_BALL_ReconstructFragmentProcessor);

    *iserrp = 1;

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedClassDef supers_ReconstructFragmentProcessor[] = {{86, 255, 1}};


/* Define this type's Python slots. */
static sipPySlotDef slots_ReconstructFragmentProcessor[] = {
    {(void *)slot_ReconstructFragmentProcessor___call__, call_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_ReconstructFragmentProcessor[] = {
    {sipNm_BALL_finish, meth_ReconstructFragmentProcessor_finish, METH_VARARGS, NULL},
    {sipNm_BALL_getFragmentDB, meth_ReconstructFragmentProcessor_getFragmentDB, METH_VARARGS, NULL},
    {sipNm_BALL_getNumberOfInsertedAtoms, meth_ReconstructFragmentProcessor_getNumberOfInsertedAtoms, METH_VARARGS, NULL},
    {sipNm_BALL_setFragmentDB, meth_ReconstructFragmentProcessor_setFragmentDB, METH_VARARGS, NULL},
    {sipNm_BALL_start, meth_ReconstructFragmentProcessor_start, METH_VARARGS, NULL}
};


sipTypeDef sipType_BALL_ReconstructFragmentProcessor = {
    0,
    0,
    "BALL.ReconstructFragmentProcessor",
    0,
    {0, 0, 1},
    supers_ReconstructFragmentProcessor,
    slots_ReconstructFragmentProcessor,
    5, methods_ReconstructFragmentProcessor,
    0, 0,
    0,
    init_ReconstructFragmentProcessor,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_ReconstructFragmentProcessor,
    cast_ReconstructFragmentProcessor,
    release_ReconstructFragmentProcessor,
    forceConvertTo_ReconstructFragmentProcessor,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
