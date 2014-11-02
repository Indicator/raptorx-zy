/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLRuleProcessor.h"

#include "sipBALLAtomProcessor.h"
#include "sipBALLINIFile.h"
#include "sipBALLString.h"
#include "sipBALLRuleProcessor.h"
#include "sipBALLAtom.h"
#include "sipBALLProcessor.h"


sipRuleProcessor::sipRuleProcessor(): RuleProcessor(), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,2);
}

sipRuleProcessor::sipRuleProcessor(INIFile& a0,const String& a1): RuleProcessor(a0,a1), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,2);
}

sipRuleProcessor::sipRuleProcessor(const RuleProcessor& a0): RuleProcessor(a0), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,2);
}

sipRuleProcessor::~sipRuleProcessor()
{
    sipCommonDtor(sipPySelf);
}

bool sipRuleProcessor::start()
{
    extern bool sipVH_BALL_4(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipNm_BALL_start);

    if (!meth)
        return RuleProcessor::start();

    return sipVH_BALL_4(sipGILState,meth);
}

bool sipRuleProcessor::finish()
{
    extern bool sipVH_BALL_4(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,NULL,sipNm_BALL_finish);

    if (!meth)
        return RuleProcessor::finish();

    return sipVH_BALL_4(sipGILState,meth);
}


extern "C" {static PyObject *meth_RuleProcessor_clear(PyObject *, PyObject *);}
static PyObject *meth_RuleProcessor_clear(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        RuleProcessor *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_RuleProcessor,&sipCpp))
        {
            try
            {
            sipCpp->clear();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_RuleProcessor,sipNm_BALL_clear);

    return NULL;
}


extern "C" {static PyObject *meth_RuleProcessor_destroy(PyObject *, PyObject *);}
static PyObject *meth_RuleProcessor_destroy(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        RuleProcessor *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_RuleProcessor,&sipCpp))
        {
            try
            {
            sipCpp->destroy();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_RuleProcessor,sipNm_BALL_destroy);

    return NULL;
}


extern "C" {static PyObject *meth_RuleProcessor_initialize(PyObject *, PyObject *);}
static PyObject *meth_RuleProcessor_initialize(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        INIFile * a0;
        const String * a1;
        int a1State = 0;
        RuleProcessor *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJAJ1",&sipSelf,sipClass_RuleProcessor,&sipCpp,sipClass_INIFile,&a0,sipClass_String,&a1,&a1State))
        {
            bool sipRes;

            try
            {
            sipRes = sipCpp->initialize(*a0,*a1);
            }
            catch (...)
            {

            sipReleaseInstance(const_cast<String *>(a1),sipClass_String,a1State);
                sipRaiseUnknownException();
                return NULL;
            }

            sipReleaseInstance(const_cast<String *>(a1),sipClass_String,a1State);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_RuleProcessor,sipNm_BALL_initialize);

    return NULL;
}


extern "C" {static PyObject *meth_RuleProcessor_set(PyObject *, PyObject *);}
static PyObject *meth_RuleProcessor_set(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const RuleProcessor * a0;
        RuleProcessor *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_RuleProcessor,&sipCpp,sipClass_RuleProcessor,&a0))
        {
            try
            {
            sipCpp->set(*a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_RuleProcessor,sipNm_BALL_set);

    return NULL;
}


extern "C" {static PyObject *meth_RuleProcessor_start(PyObject *, PyObject *);}
static PyObject *meth_RuleProcessor_start(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        RuleProcessor *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_RuleProcessor,&sipCpp))
        {
            bool sipRes;

            try
            {
            sipRes = (sipSelfWasArg ? sipCpp->RuleProcessor::start() : sipCpp->start());
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_RuleProcessor,sipNm_BALL_start);

    return NULL;
}


extern "C" {static PyObject *meth_RuleProcessor_finish(PyObject *, PyObject *);}
static PyObject *meth_RuleProcessor_finish(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        RuleProcessor *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_RuleProcessor,&sipCpp))
        {
            bool sipRes;

            try
            {
            sipRes = (sipSelfWasArg ? sipCpp->RuleProcessor::finish() : sipCpp->finish());
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_RuleProcessor,sipNm_BALL_finish);

    return NULL;
}


extern "C" {static PyObject *meth_RuleProcessor_evaluate(PyObject *, PyObject *);}
static PyObject *meth_RuleProcessor_evaluate(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const Atom * a0;
        RuleProcessor *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_RuleProcessor,&sipCpp,sipClass_Atom,&a0))
        {
            String *sipRes;

            try
            {
            sipRes = new String(sipCpp->evaluate(*a0));
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return sipConvertFromNewInstance(sipRes,sipClass_String,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_RuleProcessor,sipNm_BALL_evaluate);

    return NULL;
}


extern "C" {static PyObject *meth_RuleProcessor_isValid(PyObject *, PyObject *);}
static PyObject *meth_RuleProcessor_isValid(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        RuleProcessor *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_RuleProcessor,&sipCpp))
        {
            bool sipRes;

            try
            {
            sipRes = sipCpp->isValid();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_RuleProcessor,sipNm_BALL_isValid);

    return NULL;
}


extern "C" {static PyObject *slot_RuleProcessor___call__(PyObject *sipSelf,PyObject *sipArgs);}
static PyObject *slot_RuleProcessor___call__(PyObject *sipSelf,PyObject *sipArgs)
{
    RuleProcessor *sipCpp = reinterpret_cast<RuleProcessor *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_RuleProcessor));

    if (!sipCpp)
        return 0;

    int sipArgsParsed = 0;

    {
        Atom * a0;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"JA",sipClass_Atom,&a0))
        {
            Processor::Result sipRes = (Processor::Result)0;

#line 28 "ruleProcessor.sip"
  sipRes = sipCpp->operator () (*a0);
#line 364 "sipBALLRuleProcessor.C"

            return sipConvertFromNamedEnum(sipRes,sipEnum_Processor_Result);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_RuleProcessor,sipNm_BALL___call__);

    return 0;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_RuleProcessor(void *, sipWrapperType *);}
static void *cast_RuleProcessor(void *ptr,sipWrapperType *targetClass)
{
    void *res;

    if (targetClass == sipClass_RuleProcessor)
        return ptr;

    if ((res = sipCast_AtomProcessor((AtomProcessor *)(RuleProcessor *)ptr,targetClass)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_RuleProcessor(void *, int);}
static void release_RuleProcessor(void *ptr,int state)
{
    if (state & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipRuleProcessor *>(ptr);
    else
        delete reinterpret_cast<RuleProcessor *>(ptr);
}


extern "C" {static void dealloc_RuleProcessor(sipWrapper *);}
static void dealloc_RuleProcessor(sipWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipRuleProcessor *>(sipSelf->u.cppPtr)->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_RuleProcessor(sipSelf->u.cppPtr,sipSelf->flags);
    }
}


extern "C" {static void *init_RuleProcessor(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_RuleProcessor(sipWrapper *sipSelf,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    sipRuleProcessor *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            try
            {
            sipCpp = new sipRuleProcessor();
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
        INIFile * a0;
        const String * a1;
        int a1State = 0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JAJ1",sipClass_INIFile,&a0,sipClass_String,&a1,&a1State))
        {
            try
            {
            sipCpp = new sipRuleProcessor(*a0,*a1);
            }
            catch (...)
            {

            sipReleaseInstance(const_cast<String *>(a1),sipClass_String,a1State);
                sipRaiseUnknownException();
                return NULL;
            }

            sipReleaseInstance(const_cast<String *>(a1),sipClass_String,a1State);
        }
    }

    if (!sipCpp)
    {
        const RuleProcessor * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_RuleProcessor,&a0))
        {
            try
            {
            sipCpp = new sipRuleProcessor(*a0);
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


extern "C" {static void *forceConvertTo_RuleProcessor(PyObject *, int *);}
static void *forceConvertTo_RuleProcessor(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_RuleProcessor))
        return sipConvertToCpp(valobj,sipClass_RuleProcessor,iserrp);

    sipBadClass(sipNm_BALL_RuleProcessor);

    *iserrp = 1;

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedClassDef supers_RuleProcessor[] = {{107, 255, 1}};


/* Define this type's Python slots. */
static sipPySlotDef slots_RuleProcessor[] = {
    {(void *)slot_RuleProcessor___call__, call_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_RuleProcessor[] = {
    {sipNm_BALL_clear, meth_RuleProcessor_clear, METH_VARARGS, NULL},
    {sipNm_BALL_destroy, meth_RuleProcessor_destroy, METH_VARARGS, NULL},
    {sipNm_BALL_evaluate, meth_RuleProcessor_evaluate, METH_VARARGS, NULL},
    {sipNm_BALL_finish, meth_RuleProcessor_finish, METH_VARARGS, NULL},
    {sipNm_BALL_initialize, meth_RuleProcessor_initialize, METH_VARARGS, NULL},
    {sipNm_BALL_isValid, meth_RuleProcessor_isValid, METH_VARARGS, NULL},
    {sipNm_BALL_set, meth_RuleProcessor_set, METH_VARARGS, NULL},
    {sipNm_BALL_start, meth_RuleProcessor_start, METH_VARARGS, NULL}
};


sipTypeDef sipType_BALL_RuleProcessor = {
    0,
    0,
    "BALL.RuleProcessor",
    0,
    {0, 0, 1},
    supers_RuleProcessor,
    slots_RuleProcessor,
    8, methods_RuleProcessor,
    0, 0,
    0,
    init_RuleProcessor,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_RuleProcessor,
    cast_RuleProcessor,
    release_RuleProcessor,
    forceConvertTo_RuleProcessor,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
