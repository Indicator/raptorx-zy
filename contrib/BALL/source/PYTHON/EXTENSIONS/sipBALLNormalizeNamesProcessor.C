/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLNormalizeNamesProcessor.h"

#include "sipBALLFragmentProcessor.h"
#include "sipBALLFragmentDB.h"
#include "sipBALLNormalizeNamesProcessor.h"
#include "sipBALLProcessor.h"
#include "sipBALLFragment.h"
#include "sipBALLString.h"


sipNormalizeNamesProcessor::sipNormalizeNamesProcessor(): NormalizeNamesProcessor(), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,2);
}

sipNormalizeNamesProcessor::sipNormalizeNamesProcessor(FragmentDB& a0): NormalizeNamesProcessor(a0), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,2);
}

sipNormalizeNamesProcessor::sipNormalizeNamesProcessor(const NormalizeNamesProcessor& a0): NormalizeNamesProcessor(a0), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,2);
}

sipNormalizeNamesProcessor::~sipNormalizeNamesProcessor()
{
    sipCommonDtor(sipPySelf);
}

bool sipNormalizeNamesProcessor::start()
{
    extern bool sipVH_BALL_4(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipNm_BALL_start);

    if (!meth)
        return NormalizeNamesProcessor::start();

    return sipVH_BALL_4(sipGILState,meth);
}

bool sipNormalizeNamesProcessor::finish()
{
    extern bool sipVH_BALL_4(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,NULL,sipNm_BALL_finish);

    if (!meth)
        return NormalizeNamesProcessor::finish();

    return sipVH_BALL_4(sipGILState,meth);
}


extern "C" {static PyObject *meth_NormalizeNamesProcessor_setFragmentDB(PyObject *, PyObject *);}
static PyObject *meth_NormalizeNamesProcessor_setFragmentDB(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        FragmentDB * a0;
        NormalizeNamesProcessor *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_NormalizeNamesProcessor,&sipCpp,sipClass_FragmentDB,&a0))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_NormalizeNamesProcessor,sipNm_BALL_setFragmentDB);

    return NULL;
}


extern "C" {static PyObject *meth_NormalizeNamesProcessor_setNamingStandard(PyObject *, PyObject *);}
static PyObject *meth_NormalizeNamesProcessor_setNamingStandard(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const String * a0;
        int a0State = 0;
        NormalizeNamesProcessor *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ1",&sipSelf,sipClass_NormalizeNamesProcessor,&sipCpp,sipClass_String,&a0,&a0State))
        {
            try
            {
            sipCpp->setNamingStandard(*a0);
            }
            catch (...)
            {

            sipReleaseInstance(const_cast<String *>(a0),sipClass_String,a0State);
                sipRaiseUnknownException();
                return NULL;
            }

            sipReleaseInstance(const_cast<String *>(a0),sipClass_String,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_NormalizeNamesProcessor,sipNm_BALL_setNamingStandard);

    return NULL;
}


extern "C" {static PyObject *meth_NormalizeNamesProcessor_getNamingStandard(PyObject *, PyObject *);}
static PyObject *meth_NormalizeNamesProcessor_getNamingStandard(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        NormalizeNamesProcessor *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_NormalizeNamesProcessor,&sipCpp))
        {
            const String *sipRes;

            try
            {
            sipRes = &sipCpp->getNamingStandard();
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return sipConvertFromInstance(const_cast<String *>(sipRes),sipClass_String,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_NormalizeNamesProcessor,sipNm_BALL_getNamingStandard);

    return NULL;
}


extern "C" {static PyObject *meth_NormalizeNamesProcessor_start(PyObject *, PyObject *);}
static PyObject *meth_NormalizeNamesProcessor_start(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        NormalizeNamesProcessor *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_NormalizeNamesProcessor,&sipCpp))
        {
            bool sipRes;

            try
            {
            sipRes = (sipSelfWasArg ? sipCpp->NormalizeNamesProcessor::start() : sipCpp->start());
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_NormalizeNamesProcessor,sipNm_BALL_start);

    return NULL;
}


extern "C" {static PyObject *meth_NormalizeNamesProcessor_finish(PyObject *, PyObject *);}
static PyObject *meth_NormalizeNamesProcessor_finish(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        NormalizeNamesProcessor *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_NormalizeNamesProcessor,&sipCpp))
        {
            bool sipRes;

            try
            {
            sipRes = (sipSelfWasArg ? sipCpp->NormalizeNamesProcessor::finish() : sipCpp->finish());
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_NormalizeNamesProcessor,sipNm_BALL_finish);

    return NULL;
}


extern "C" {static PyObject *slot_NormalizeNamesProcessor___call__(PyObject *sipSelf,PyObject *sipArgs);}
static PyObject *slot_NormalizeNamesProcessor___call__(PyObject *sipSelf,PyObject *sipArgs)
{
    NormalizeNamesProcessor *sipCpp = reinterpret_cast<NormalizeNamesProcessor *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_NormalizeNamesProcessor));

    if (!sipCpp)
        return 0;

    int sipArgsParsed = 0;

    {
        Fragment * a0;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"JA",sipClass_Fragment,&a0))
        {
            Processor::Result sipRes = (Processor::Result)0;

#line 90 "fragmentDB.sip"
  sipRes = sipCpp->operator () (*a0);
#line 264 "sipBALLNormalizeNamesProcessor.C"

            return sipConvertFromNamedEnum(sipRes,sipEnum_Processor_Result);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_NormalizeNamesProcessor,sipNm_BALL___call__);

    return 0;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_NormalizeNamesProcessor(void *, sipWrapperType *);}
static void *cast_NormalizeNamesProcessor(void *ptr,sipWrapperType *targetClass)
{
    void *res;

    if (targetClass == sipClass_NormalizeNamesProcessor)
        return ptr;

    if ((res = sipCast_FragmentProcessor((FragmentProcessor *)(NormalizeNamesProcessor *)ptr,targetClass)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_NormalizeNamesProcessor(void *, int);}
static void release_NormalizeNamesProcessor(void *ptr,int state)
{
    if (state & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipNormalizeNamesProcessor *>(ptr);
    else
        delete reinterpret_cast<NormalizeNamesProcessor *>(ptr);
}


extern "C" {static void dealloc_NormalizeNamesProcessor(sipWrapper *);}
static void dealloc_NormalizeNamesProcessor(sipWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipNormalizeNamesProcessor *>(sipSelf->u.cppPtr)->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_NormalizeNamesProcessor(sipSelf->u.cppPtr,sipSelf->flags);
    }
}


extern "C" {static void *init_NormalizeNamesProcessor(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_NormalizeNamesProcessor(sipWrapper *sipSelf,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    sipNormalizeNamesProcessor *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            try
            {
            sipCpp = new sipNormalizeNamesProcessor();
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
        FragmentDB * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_FragmentDB,&a0))
        {
            try
            {
            sipCpp = new sipNormalizeNamesProcessor(*a0);
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
        const NormalizeNamesProcessor * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_NormalizeNamesProcessor,&a0))
        {
            try
            {
            sipCpp = new sipNormalizeNamesProcessor(*a0);
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


extern "C" {static void *forceConvertTo_NormalizeNamesProcessor(PyObject *, int *);}
static void *forceConvertTo_NormalizeNamesProcessor(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_NormalizeNamesProcessor))
        return sipConvertToCpp(valobj,sipClass_NormalizeNamesProcessor,iserrp);

    sipBadClass(sipNm_BALL_NormalizeNamesProcessor);

    *iserrp = 1;

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedClassDef supers_NormalizeNamesProcessor[] = {{86, 255, 1}};


/* Define this type's Python slots. */
static sipPySlotDef slots_NormalizeNamesProcessor[] = {
    {(void *)slot_NormalizeNamesProcessor___call__, call_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_NormalizeNamesProcessor[] = {
    {sipNm_BALL_finish, meth_NormalizeNamesProcessor_finish, METH_VARARGS, NULL},
    {sipNm_BALL_getNamingStandard, meth_NormalizeNamesProcessor_getNamingStandard, METH_VARARGS, NULL},
    {sipNm_BALL_setFragmentDB, meth_NormalizeNamesProcessor_setFragmentDB, METH_VARARGS, NULL},
    {sipNm_BALL_setNamingStandard, meth_NormalizeNamesProcessor_setNamingStandard, METH_VARARGS, NULL},
    {sipNm_BALL_start, meth_NormalizeNamesProcessor_start, METH_VARARGS, NULL}
};


sipTypeDef sipType_BALL_NormalizeNamesProcessor = {
    0,
    0,
    "BALL.NormalizeNamesProcessor",
    0,
    {0, 0, 1},
    supers_NormalizeNamesProcessor,
    slots_NormalizeNamesProcessor,
    5, methods_NormalizeNamesProcessor,
    0, 0,
    0,
    init_NormalizeNamesProcessor,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_NormalizeNamesProcessor,
    cast_NormalizeNamesProcessor,
    release_NormalizeNamesProcessor,
    forceConvertTo_NormalizeNamesProcessor,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
