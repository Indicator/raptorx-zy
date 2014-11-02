/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLBoundingBoxProcessor.h"

#include "sipBALLAtomProcessor.h"
#include "sipBALLBoundingBoxProcessor.h"
#include "sipBALLVector3.h"
#include "sipBALLSimpleBox3.h"
#include "sipBALLProcessor.h"
#include "sipBALLAtom.h"


sipBoundingBoxProcessor::sipBoundingBoxProcessor(): BoundingBoxProcessor(), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,2);
}

sipBoundingBoxProcessor::sipBoundingBoxProcessor(const BoundingBoxProcessor& a0): BoundingBoxProcessor(a0), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,2);
}

sipBoundingBoxProcessor::~sipBoundingBoxProcessor()
{
    sipCommonDtor(sipPySelf);
}

bool sipBoundingBoxProcessor::start() throw()
{
    extern bool sipVH_BALL_4(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipNm_BALL_start);

    if (!meth)
        return BoundingBoxProcessor::start();

    return sipVH_BALL_4(sipGILState,meth);
}

bool sipBoundingBoxProcessor::finish() throw()
{
    extern bool sipVH_BALL_4(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,NULL,sipNm_BALL_finish);

    if (!meth)
        return BoundingBoxProcessor::finish();

    return sipVH_BALL_4(sipGILState,meth);
}


extern "C" {static PyObject *meth_BoundingBoxProcessor_start(PyObject *, PyObject *);}
static PyObject *meth_BoundingBoxProcessor_start(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        BoundingBoxProcessor *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_BoundingBoxProcessor,&sipCpp))
        {
            bool sipRes;

            sipRes = (sipSelfWasArg ? sipCpp->BoundingBoxProcessor::start() : sipCpp->start());

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_BoundingBoxProcessor,sipNm_BALL_start);

    return NULL;
}


extern "C" {static PyObject *meth_BoundingBoxProcessor_finish(PyObject *, PyObject *);}
static PyObject *meth_BoundingBoxProcessor_finish(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        BoundingBoxProcessor *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_BoundingBoxProcessor,&sipCpp))
        {
            bool sipRes;

            sipRes = (sipSelfWasArg ? sipCpp->BoundingBoxProcessor::finish() : sipCpp->finish());

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_BoundingBoxProcessor,sipNm_BALL_finish);

    return NULL;
}


extern "C" {static PyObject *meth_BoundingBoxProcessor_getBox(PyObject *, PyObject *);}
static PyObject *meth_BoundingBoxProcessor_getBox(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        BoundingBoxProcessor *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_BoundingBoxProcessor,&sipCpp))
        {
            SimpleBox3 *sipRes;

            try
            {
            sipRes = new SimpleBox3(sipCpp->getBox());
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_BoundingBoxProcessor,sipNm_BALL_getBox);

    return NULL;
}


extern "C" {static PyObject *meth_BoundingBoxProcessor_getLower(PyObject *, PyObject *);}
static PyObject *meth_BoundingBoxProcessor_getLower(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        BoundingBoxProcessor *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_BoundingBoxProcessor,&sipCpp))
        {
            const Vector3 *sipRes;

            try
            {
            sipRes = &sipCpp->getLower();
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return sipConvertFromInstance(const_cast<Vector3 *>(sipRes),sipClass_Vector3,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_BoundingBoxProcessor,sipNm_BALL_getLower);

    return NULL;
}


extern "C" {static PyObject *meth_BoundingBoxProcessor_getUpper(PyObject *, PyObject *);}
static PyObject *meth_BoundingBoxProcessor_getUpper(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        BoundingBoxProcessor *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_BoundingBoxProcessor,&sipCpp))
        {
            const Vector3 *sipRes;

            try
            {
            sipRes = &sipCpp->getUpper();
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return sipConvertFromInstance(const_cast<Vector3 *>(sipRes),sipClass_Vector3,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_BoundingBoxProcessor,sipNm_BALL_getUpper);

    return NULL;
}


extern "C" {static PyObject *slot_BoundingBoxProcessor___call__(PyObject *sipSelf,PyObject *sipArgs);}
static PyObject *slot_BoundingBoxProcessor___call__(PyObject *sipSelf,PyObject *sipArgs)
{
    BoundingBoxProcessor *sipCpp = reinterpret_cast<BoundingBoxProcessor *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_BoundingBoxProcessor));

    if (!sipCpp)
        return 0;

    int sipArgsParsed = 0;

    {
        Atom * a0;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"JA",sipClass_Atom,&a0))
        {
            Processor::Result sipRes = (Processor::Result)0;

#line 22 "geometricProperties.sip"
  sipRes = sipCpp->operator () (*a0);
#line 238 "sipBALLBoundingBoxProcessor.C"

            return sipConvertFromNamedEnum(sipRes,sipEnum_Processor_Result);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_BoundingBoxProcessor,sipNm_BALL___call__);

    return 0;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_BoundingBoxProcessor(void *, sipWrapperType *);}
static void *cast_BoundingBoxProcessor(void *ptr,sipWrapperType *targetClass)
{
    void *res;

    if (targetClass == sipClass_BoundingBoxProcessor)
        return ptr;

    if ((res = sipCast_AtomProcessor((AtomProcessor *)(BoundingBoxProcessor *)ptr,targetClass)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_BoundingBoxProcessor(void *, int);}
static void release_BoundingBoxProcessor(void *ptr,int state)
{
    if (state & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipBoundingBoxProcessor *>(ptr);
    else
        delete reinterpret_cast<BoundingBoxProcessor *>(ptr);
}


extern "C" {static void dealloc_BoundingBoxProcessor(sipWrapper *);}
static void dealloc_BoundingBoxProcessor(sipWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipBoundingBoxProcessor *>(sipSelf->u.cppPtr)->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_BoundingBoxProcessor(sipSelf->u.cppPtr,sipSelf->flags);
    }
}


extern "C" {static void *init_BoundingBoxProcessor(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_BoundingBoxProcessor(sipWrapper *sipSelf,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    sipBoundingBoxProcessor *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            try
            {
            sipCpp = new sipBoundingBoxProcessor();
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
        const BoundingBoxProcessor * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_BoundingBoxProcessor,&a0))
        {
            try
            {
            sipCpp = new sipBoundingBoxProcessor(*a0);
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


extern "C" {static void *forceConvertTo_BoundingBoxProcessor(PyObject *, int *);}
static void *forceConvertTo_BoundingBoxProcessor(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_BoundingBoxProcessor))
        return sipConvertToCpp(valobj,sipClass_BoundingBoxProcessor,iserrp);

    sipBadClass(sipNm_BALL_BoundingBoxProcessor);

    *iserrp = 1;

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedClassDef supers_BoundingBoxProcessor[] = {{107, 255, 1}};


/* Define this type's Python slots. */
static sipPySlotDef slots_BoundingBoxProcessor[] = {
    {(void *)slot_BoundingBoxProcessor___call__, call_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_BoundingBoxProcessor[] = {
    {sipNm_BALL_finish, meth_BoundingBoxProcessor_finish, METH_VARARGS, NULL},
    {sipNm_BALL_getBox, meth_BoundingBoxProcessor_getBox, METH_VARARGS, NULL},
    {sipNm_BALL_getLower, meth_BoundingBoxProcessor_getLower, METH_VARARGS, NULL},
    {sipNm_BALL_getUpper, meth_BoundingBoxProcessor_getUpper, METH_VARARGS, NULL},
    {sipNm_BALL_start, meth_BoundingBoxProcessor_start, METH_VARARGS, NULL}
};


sipTypeDef sipType_BALL_BoundingBoxProcessor = {
    0,
    0,
    "BALL.BoundingBoxProcessor",
    0,
    {0, 0, 1},
    supers_BoundingBoxProcessor,
    slots_BoundingBoxProcessor,
    5, methods_BoundingBoxProcessor,
    0, 0,
    0,
    init_BoundingBoxProcessor,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_BoundingBoxProcessor,
    cast_BoundingBoxProcessor,
    release_BoundingBoxProcessor,
    forceConvertTo_BoundingBoxProcessor,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
