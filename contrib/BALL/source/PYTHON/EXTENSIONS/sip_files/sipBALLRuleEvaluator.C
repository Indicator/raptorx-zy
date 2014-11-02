/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLRuleEvaluator.h"

#include "sipBALLINIFile.h"
#include "sipBALLString.h"
#include "sipBALLRuleEvaluator.h"
#include "sipBALLAtom.h"


sipRuleEvaluator::sipRuleEvaluator() throw(): RuleEvaluator(), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,1);
}

sipRuleEvaluator::sipRuleEvaluator(INIFile& a0,const String& a1) throw(): RuleEvaluator(a0,a1), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,1);
}

sipRuleEvaluator::sipRuleEvaluator(const RuleEvaluator& a0) throw(): RuleEvaluator(a0), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,1);
}

sipRuleEvaluator::~sipRuleEvaluator() throw()
{
    sipCommonDtor(sipPySelf);
}

void sipRuleEvaluator::clear() throw()
{
    extern void sipVH_BALL_0(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipNm_BALL_clear);

    if (!meth)
    {
        RuleEvaluator::clear();
        return;
    }

    sipVH_BALL_0(sipGILState,meth);
}


extern "C" {static PyObject *meth_RuleEvaluator_initialize(PyObject *, PyObject *);}
static PyObject *meth_RuleEvaluator_initialize(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        INIFile * a0;
        const String * a1;
        int a1State = 0;
        RuleEvaluator *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJAJ1",&sipSelf,sipClass_RuleEvaluator,&sipCpp,sipClass_INIFile,&a0,sipClass_String,&a1,&a1State))
        {
            bool sipRes;

            sipRes = sipCpp->initialize(*a0,*a1);

            sipReleaseInstance(const_cast<String *>(a1),sipClass_String,a1State);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_RuleEvaluator,sipNm_BALL_initialize);

    return NULL;
}


extern "C" {static PyObject *meth_RuleEvaluator_getPrefix(PyObject *, PyObject *);}
static PyObject *meth_RuleEvaluator_getPrefix(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        RuleEvaluator *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_RuleEvaluator,&sipCpp))
        {
            const String *sipRes;

            sipRes = &sipCpp->getPrefix();

            return sipConvertFromInstance(const_cast<String *>(sipRes),sipClass_String,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_RuleEvaluator,sipNm_BALL_getPrefix);

    return NULL;
}


extern "C" {static PyObject *meth_RuleEvaluator_setPrefix(PyObject *, PyObject *);}
static PyObject *meth_RuleEvaluator_setPrefix(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const String * a0;
        int a0State = 0;
        RuleEvaluator *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ1",&sipSelf,sipClass_RuleEvaluator,&sipCpp,sipClass_String,&a0,&a0State))
        {
            sipCpp->setPrefix(*a0);

            sipReleaseInstance(const_cast<String *>(a0),sipClass_String,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_RuleEvaluator,sipNm_BALL_setPrefix);

    return NULL;
}


extern "C" {static PyObject *meth_RuleEvaluator_clear(PyObject *, PyObject *);}
static PyObject *meth_RuleEvaluator_clear(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        RuleEvaluator *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_RuleEvaluator,&sipCpp))
        {
            (sipSelfWasArg ? sipCpp->RuleEvaluator::clear() : sipCpp->clear());

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_RuleEvaluator,sipNm_BALL_clear);

    return NULL;
}


extern "C" {static PyObject *meth_RuleEvaluator_isValid(PyObject *, PyObject *);}
static PyObject *meth_RuleEvaluator_isValid(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        RuleEvaluator *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_RuleEvaluator,&sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isValid();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_RuleEvaluator,sipNm_BALL_isValid);

    return NULL;
}


extern "C" {static PyObject *slot_RuleEvaluator___eq__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_RuleEvaluator___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    RuleEvaluator *sipCpp = reinterpret_cast<RuleEvaluator *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_RuleEvaluator));

    if (!sipCpp)
        return 0;

    int sipArgsParsed = 0;

    {
        const RuleEvaluator * a0;

        if (sipParseArgs(&sipArgsParsed,sipArg,"JA",sipClass_RuleEvaluator,&a0))
        {
            bool sipRes;

            try
            {
            sipRes = ((*sipCpp) == *a0);
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return PyBool_FromLong(sipRes);
        }
    }

    return sipPySlotExtend(&sipModuleAPI_BALL,eq_slot,sipClass_RuleEvaluator,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_RuleEvaluator___call__(PyObject *sipSelf,PyObject *sipArgs);}
static PyObject *slot_RuleEvaluator___call__(PyObject *sipSelf,PyObject *sipArgs)
{
    RuleEvaluator *sipCpp = reinterpret_cast<RuleEvaluator *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_RuleEvaluator));

    if (!sipCpp)
        return 0;

    int sipArgsParsed = 0;

    {
        const Atom * a0;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"JA",sipClass_Atom,&a0))
        {
            String *sipRes = 0;

#line 30 "ruleEvaluator.sip"
  sipRes = new String(sipCpp->operator () (*a0));
#line 246 "sipBALLRuleEvaluator.C"

            return sipConvertFromNewInstance(sipRes,sipClass_String,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_RuleEvaluator,sipNm_BALL___call__);

    return 0;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_RuleEvaluator(void *, sipWrapperType *);}
static void *cast_RuleEvaluator(void *ptr,sipWrapperType *targetClass)
{
    if (targetClass == sipClass_RuleEvaluator)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_RuleEvaluator(void *, int);}
static void release_RuleEvaluator(void *ptr,int state)
{
    if (state & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipRuleEvaluator *>(ptr);
    else
        delete reinterpret_cast<RuleEvaluator *>(ptr);
}


extern "C" {static void dealloc_RuleEvaluator(sipWrapper *);}
static void dealloc_RuleEvaluator(sipWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipRuleEvaluator *>(sipSelf->u.cppPtr)->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_RuleEvaluator(sipSelf->u.cppPtr,sipSelf->flags);
    }
}


extern "C" {static void *init_RuleEvaluator(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_RuleEvaluator(sipWrapper *sipSelf,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    sipRuleEvaluator *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            sipCpp = new sipRuleEvaluator();
        }
    }

    if (!sipCpp)
    {
        INIFile * a0;
        const String * a1;
        int a1State = 0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JAJ1",sipClass_INIFile,&a0,sipClass_String,&a1,&a1State))
        {
            sipCpp = new sipRuleEvaluator(*a0,*a1);

            sipReleaseInstance(const_cast<String *>(a1),sipClass_String,a1State);
        }
    }

    if (!sipCpp)
    {
        const RuleEvaluator * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_RuleEvaluator,&a0))
        {
            sipCpp = new sipRuleEvaluator(*a0);
        }
    }

    if (sipCpp)
        sipCpp->sipPySelf = sipSelf;

    return sipCpp;
}


extern "C" {static void *forceConvertTo_RuleEvaluator(PyObject *, int *);}
static void *forceConvertTo_RuleEvaluator(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_RuleEvaluator))
        return sipConvertToCpp(valobj,sipClass_RuleEvaluator,iserrp);

    sipBadClass(sipNm_BALL_RuleEvaluator);

    *iserrp = 1;

    return NULL;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_RuleEvaluator[] = {
    {(void *)slot_RuleEvaluator___eq__, eq_slot},
    {(void *)slot_RuleEvaluator___call__, call_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_RuleEvaluator[] = {
    {sipNm_BALL_clear, meth_RuleEvaluator_clear, METH_VARARGS, NULL},
    {sipNm_BALL_getPrefix, meth_RuleEvaluator_getPrefix, METH_VARARGS, NULL},
    {sipNm_BALL_initialize, meth_RuleEvaluator_initialize, METH_VARARGS, NULL},
    {sipNm_BALL_isValid, meth_RuleEvaluator_isValid, METH_VARARGS, NULL},
    {sipNm_BALL_setPrefix, meth_RuleEvaluator_setPrefix, METH_VARARGS, NULL}
};


sipTypeDef sipType_BALL_RuleEvaluator = {
    0,
    0,
    "BALL.RuleEvaluator",
    0,
    {0, 0, 1},
    0,
    slots_RuleEvaluator,
    5, methods_RuleEvaluator,
    0, 0,
    0,
    init_RuleEvaluator,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_RuleEvaluator,
    cast_RuleEvaluator,
    release_RuleEvaluator,
    forceConvertTo_RuleEvaluator,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
