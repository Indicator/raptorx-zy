/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLBuildBondsProcessor.h"

#include "sipBALLFragmentProcessor.h"
#include "sipBALLFragmentDB.h"
#include "sipBALLBuildBondsProcessor.h"
#include "sipBALLFragment.h"
#include "sipBALLProcessor.h"


sipBuildBondsProcessor::sipBuildBondsProcessor(): BuildBondsProcessor(), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,2);
}

sipBuildBondsProcessor::sipBuildBondsProcessor(const FragmentDB& a0): BuildBondsProcessor(a0), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,2);
}

sipBuildBondsProcessor::sipBuildBondsProcessor(const BuildBondsProcessor& a0): BuildBondsProcessor(a0), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,2);
}

sipBuildBondsProcessor::~sipBuildBondsProcessor()
{
    sipCommonDtor(sipPySelf);
}

bool sipBuildBondsProcessor::finish()
{
    extern bool sipVH_BALL_4(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipNm_BALL_finish);

    if (!meth)
        return BuildBondsProcessor::finish();

    return sipVH_BALL_4(sipGILState,meth);
}

bool sipBuildBondsProcessor::start()
{
    extern bool sipVH_BALL_4(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,NULL,sipNm_BALL_start);

    if (!meth)
        return BuildBondsProcessor::start();

    return sipVH_BALL_4(sipGILState,meth);
}


extern "C" {static PyObject *meth_BuildBondsProcessor_finish(PyObject *, PyObject *);}
static PyObject *meth_BuildBondsProcessor_finish(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        BuildBondsProcessor *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_BuildBondsProcessor,&sipCpp))
        {
            bool sipRes;

            try
            {
            sipRes = (sipSelfWasArg ? sipCpp->BuildBondsProcessor::finish() : sipCpp->finish());
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_BuildBondsProcessor,sipNm_BALL_finish);

    return NULL;
}


extern "C" {static PyObject *meth_BuildBondsProcessor_start(PyObject *, PyObject *);}
static PyObject *meth_BuildBondsProcessor_start(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        BuildBondsProcessor *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_BuildBondsProcessor,&sipCpp))
        {
            bool sipRes;

            try
            {
            sipRes = (sipSelfWasArg ? sipCpp->BuildBondsProcessor::start() : sipCpp->start());
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_BuildBondsProcessor,sipNm_BALL_start);

    return NULL;
}


extern "C" {static PyObject *meth_BuildBondsProcessor_getNumberOfBondsBuilt(PyObject *, PyObject *);}
static PyObject *meth_BuildBondsProcessor_getNumberOfBondsBuilt(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        BuildBondsProcessor *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_BuildBondsProcessor,&sipCpp))
        {
            int sipRes;

            try
            {
            sipRes = sipCpp->getNumberOfBondsBuilt();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_BuildBondsProcessor,sipNm_BALL_getNumberOfBondsBuilt);

    return NULL;
}


extern "C" {static PyObject *meth_BuildBondsProcessor_setFragmentDB(PyObject *, PyObject *);}
static PyObject *meth_BuildBondsProcessor_setFragmentDB(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const FragmentDB * a0;
        BuildBondsProcessor *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_BuildBondsProcessor,&sipCpp,sipClass_FragmentDB,&a0))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_BuildBondsProcessor,sipNm_BALL_setFragmentDB);

    return NULL;
}


extern "C" {static PyObject *meth_BuildBondsProcessor_buildFragmentBonds(PyObject *, PyObject *);}
static PyObject *meth_BuildBondsProcessor_buildFragmentBonds(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Fragment * a0;
        BuildBondsProcessor *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_BuildBondsProcessor,&sipCpp,sipClass_Fragment,&a0))
        {
            int sipRes;

            try
            {
            sipRes = sipCpp->buildFragmentBonds(*a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_BuildBondsProcessor,sipNm_BALL_buildFragmentBonds);

    return NULL;
}


extern "C" {static PyObject *meth_BuildBondsProcessor_buildInterFragmentBonds(PyObject *, PyObject *);}
static PyObject *meth_BuildBondsProcessor_buildInterFragmentBonds(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Fragment * a0;
        Fragment * a1;
        BuildBondsProcessor *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJAJA",&sipSelf,sipClass_BuildBondsProcessor,&sipCpp,sipClass_Fragment,&a0,sipClass_Fragment,&a1))
        {
            int sipRes;

            try
            {
            sipRes = sipCpp->buildInterFragmentBonds(*a0,*a1);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_BuildBondsProcessor,sipNm_BALL_buildInterFragmentBonds);

    return NULL;
}


extern "C" {static PyObject *slot_BuildBondsProcessor___call__(PyObject *sipSelf,PyObject *sipArgs);}
static PyObject *slot_BuildBondsProcessor___call__(PyObject *sipSelf,PyObject *sipArgs)
{
    BuildBondsProcessor *sipCpp = reinterpret_cast<BuildBondsProcessor *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_BuildBondsProcessor));

    if (!sipCpp)
        return 0;

    int sipArgsParsed = 0;

    {
        Fragment * a0;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"JA",sipClass_Fragment,&a0))
        {
            Processor::Result sipRes = (Processor::Result)0;

#line 112 "fragmentDB.sip"
  sipRes = sipCpp->operator () (*a0);
#line 294 "sipBALLBuildBondsProcessor.C"

            return sipConvertFromNamedEnum(sipRes,sipEnum_Processor_Result);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_BuildBondsProcessor,sipNm_BALL___call__);

    return 0;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_BuildBondsProcessor(void *, sipWrapperType *);}
static void *cast_BuildBondsProcessor(void *ptr,sipWrapperType *targetClass)
{
    void *res;

    if (targetClass == sipClass_BuildBondsProcessor)
        return ptr;

    if ((res = sipCast_FragmentProcessor((FragmentProcessor *)(BuildBondsProcessor *)ptr,targetClass)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_BuildBondsProcessor(void *, int);}
static void release_BuildBondsProcessor(void *ptr,int state)
{
    if (state & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipBuildBondsProcessor *>(ptr);
    else
        delete reinterpret_cast<BuildBondsProcessor *>(ptr);
}


extern "C" {static void dealloc_BuildBondsProcessor(sipWrapper *);}
static void dealloc_BuildBondsProcessor(sipWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipBuildBondsProcessor *>(sipSelf->u.cppPtr)->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_BuildBondsProcessor(sipSelf->u.cppPtr,sipSelf->flags);
    }
}


extern "C" {static void *init_BuildBondsProcessor(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_BuildBondsProcessor(sipWrapper *sipSelf,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    sipBuildBondsProcessor *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            try
            {
            sipCpp = new sipBuildBondsProcessor();
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
            sipCpp = new sipBuildBondsProcessor(*a0);
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
        const BuildBondsProcessor * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_BuildBondsProcessor,&a0))
        {
            try
            {
            sipCpp = new sipBuildBondsProcessor(*a0);
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


extern "C" {static void *forceConvertTo_BuildBondsProcessor(PyObject *, int *);}
static void *forceConvertTo_BuildBondsProcessor(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_BuildBondsProcessor))
        return sipConvertToCpp(valobj,sipClass_BuildBondsProcessor,iserrp);

    sipBadClass(sipNm_BALL_BuildBondsProcessor);

    *iserrp = 1;

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedClassDef supers_BuildBondsProcessor[] = {{86, 255, 1}};


/* Define this type's Python slots. */
static sipPySlotDef slots_BuildBondsProcessor[] = {
    {(void *)slot_BuildBondsProcessor___call__, call_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_BuildBondsProcessor[] = {
    {sipNm_BALL_buildFragmentBonds, meth_BuildBondsProcessor_buildFragmentBonds, METH_VARARGS, NULL},
    {sipNm_BALL_buildInterFragmentBonds, meth_BuildBondsProcessor_buildInterFragmentBonds, METH_VARARGS, NULL},
    {sipNm_BALL_finish, meth_BuildBondsProcessor_finish, METH_VARARGS, NULL},
    {sipNm_BALL_getNumberOfBondsBuilt, meth_BuildBondsProcessor_getNumberOfBondsBuilt, METH_VARARGS, NULL},
    {sipNm_BALL_setFragmentDB, meth_BuildBondsProcessor_setFragmentDB, METH_VARARGS, NULL},
    {sipNm_BALL_start, meth_BuildBondsProcessor_start, METH_VARARGS, NULL}
};


sipTypeDef sipType_BALL_BuildBondsProcessor = {
    0,
    0,
    "BALL.BuildBondsProcessor",
    0,
    {0, 0, 1},
    supers_BuildBondsProcessor,
    slots_BuildBondsProcessor,
    6, methods_BuildBondsProcessor,
    0, 0,
    0,
    init_BuildBondsProcessor,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_BuildBondsProcessor,
    cast_BuildBondsProcessor,
    release_BuildBondsProcessor,
    forceConvertTo_BuildBondsProcessor,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
