/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLAssignChargeProcessor.h"

#include "sipBALLAssignRadiusProcessor.h"
#include "sipBALLString.h"
#include "sipBALLAssignChargeProcessor.h"
#include "sipBALLProcessor.h"
#include "sipBALLAtom.h"


sipAssignChargeProcessor::sipAssignChargeProcessor(): AssignChargeProcessor(), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,2);
}

sipAssignChargeProcessor::sipAssignChargeProcessor(const String& a0): AssignChargeProcessor(a0), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,2);
}

sipAssignChargeProcessor::sipAssignChargeProcessor(const AssignChargeProcessor& a0): AssignChargeProcessor(a0), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,2);
}

sipAssignChargeProcessor::~sipAssignChargeProcessor()
{
    sipCommonDtor(sipPySelf);
}

bool sipAssignChargeProcessor::start()
{
    extern bool sipVH_BALL_4(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipNm_BALL_start);

    if (!meth)
        return AssignChargeProcessor::start();

    return sipVH_BALL_4(sipGILState,meth);
}

bool sipAssignChargeProcessor::finish()
{
    extern bool sipVH_BALL_4(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,NULL,sipNm_BALL_finish);

    if (!meth)
        return AssignRadiusProcessor::finish();

    return sipVH_BALL_4(sipGILState,meth);
}


extern "C" {static PyObject *meth_AssignChargeProcessor_start(PyObject *, PyObject *);}
static PyObject *meth_AssignChargeProcessor_start(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        AssignChargeProcessor *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_AssignChargeProcessor,&sipCpp))
        {
            bool sipRes;

            try
            {
            sipRes = (sipSelfWasArg ? sipCpp->AssignChargeProcessor::start() : sipCpp->start());
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_AssignChargeProcessor,sipNm_BALL_start);

    return NULL;
}


extern "C" {static PyObject *meth_AssignChargeProcessor_getTotalCharge(PyObject *, PyObject *);}
static PyObject *meth_AssignChargeProcessor_getTotalCharge(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        AssignChargeProcessor *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_AssignChargeProcessor,&sipCpp))
        {
            float sipRes;

            try
            {
            sipRes = sipCpp->getTotalCharge();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_AssignChargeProcessor,sipNm_BALL_getTotalCharge);

    return NULL;
}


extern "C" {static PyObject *slot_AssignChargeProcessor___call__(PyObject *sipSelf,PyObject *sipArgs);}
static PyObject *slot_AssignChargeProcessor___call__(PyObject *sipSelf,PyObject *sipArgs)
{
    AssignChargeProcessor *sipCpp = reinterpret_cast<AssignChargeProcessor *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_AssignChargeProcessor));

    if (!sipCpp)
        return 0;

    int sipArgsParsed = 0;

    {
        Atom * a0;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"JA",sipClass_Atom,&a0))
        {
            Processor::Result sipRes = (Processor::Result)0;

#line 77 "defaultProcessors.sip"
  sipRes = sipCpp->operator () (*a0);
#line 158 "sipBALLAssignChargeProcessor.C"

            return sipConvertFromNamedEnum(sipRes,sipEnum_Processor_Result);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_AssignChargeProcessor,sipNm_BALL___call__);

    return 0;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_AssignChargeProcessor(void *, sipWrapperType *);}
static void *cast_AssignChargeProcessor(void *ptr,sipWrapperType *targetClass)
{
    void *res;

    if (targetClass == sipClass_AssignChargeProcessor)
        return ptr;

    if ((res = sipCast_AssignRadiusProcessor((AssignRadiusProcessor *)(AssignChargeProcessor *)ptr,targetClass)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_AssignChargeProcessor(void *, int);}
static void release_AssignChargeProcessor(void *ptr,int state)
{
    if (state & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipAssignChargeProcessor *>(ptr);
    else
        delete reinterpret_cast<AssignChargeProcessor *>(ptr);
}


extern "C" {static void dealloc_AssignChargeProcessor(sipWrapper *);}
static void dealloc_AssignChargeProcessor(sipWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipAssignChargeProcessor *>(sipSelf->u.cppPtr)->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_AssignChargeProcessor(sipSelf->u.cppPtr,sipSelf->flags);
    }
}


extern "C" {static void *init_AssignChargeProcessor(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_AssignChargeProcessor(sipWrapper *sipSelf,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    sipAssignChargeProcessor *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            try
            {
            sipCpp = new sipAssignChargeProcessor();
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
        const String * a0;
        int a0State = 0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"J1",sipClass_String,&a0,&a0State))
        {
            try
            {
            sipCpp = new sipAssignChargeProcessor(*a0);
            }
            catch (...)
            {

            sipReleaseInstance(const_cast<String *>(a0),sipClass_String,a0State);
                sipRaiseUnknownException();
                return NULL;
            }

            sipReleaseInstance(const_cast<String *>(a0),sipClass_String,a0State);
        }
    }

    if (!sipCpp)
    {
        const AssignChargeProcessor * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_AssignChargeProcessor,&a0))
        {
            try
            {
            sipCpp = new sipAssignChargeProcessor(*a0);
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


extern "C" {static void *forceConvertTo_AssignChargeProcessor(PyObject *, int *);}
static void *forceConvertTo_AssignChargeProcessor(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_AssignChargeProcessor))
        return sipConvertToCpp(valobj,sipClass_AssignChargeProcessor,iserrp);

    sipBadClass(sipNm_BALL_AssignChargeProcessor);

    *iserrp = 1;

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedClassDef supers_AssignChargeProcessor[] = {{112, 255, 1}};


/* Define this type's Python slots. */
static sipPySlotDef slots_AssignChargeProcessor[] = {
    {(void *)slot_AssignChargeProcessor___call__, call_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_AssignChargeProcessor[] = {
    {sipNm_BALL_getTotalCharge, meth_AssignChargeProcessor_getTotalCharge, METH_VARARGS, NULL},
    {sipNm_BALL_start, meth_AssignChargeProcessor_start, METH_VARARGS, NULL}
};


sipTypeDef sipType_BALL_AssignChargeProcessor = {
    0,
    0,
    "BALL.AssignChargeProcessor",
    0,
    {0, 0, 1},
    supers_AssignChargeProcessor,
    slots_AssignChargeProcessor,
    2, methods_AssignChargeProcessor,
    0, 0,
    0,
    init_AssignChargeProcessor,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_AssignChargeProcessor,
    cast_AssignChargeProcessor,
    release_AssignChargeProcessor,
    forceConvertTo_AssignChargeProcessor,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
