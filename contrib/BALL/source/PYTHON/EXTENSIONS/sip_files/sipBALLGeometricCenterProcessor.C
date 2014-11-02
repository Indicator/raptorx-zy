/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLGeometricCenterProcessor.h"

#include "sipBALLAtomProcessor.h"
#include "sipBALLGeometricCenterProcessor.h"
#include "sipBALLVector3.h"
#include "sipBALLProcessor.h"
#include "sipBALLAtom.h"


sipGeometricCenterProcessor::sipGeometricCenterProcessor(): GeometricCenterProcessor(), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,2);
}

sipGeometricCenterProcessor::sipGeometricCenterProcessor(const GeometricCenterProcessor& a0): GeometricCenterProcessor(a0), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,2);
}

sipGeometricCenterProcessor::~sipGeometricCenterProcessor()
{
    sipCommonDtor(sipPySelf);
}

bool sipGeometricCenterProcessor::start() throw()
{
    extern bool sipVH_BALL_4(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipNm_BALL_start);

    if (!meth)
        return GeometricCenterProcessor::start();

    return sipVH_BALL_4(sipGILState,meth);
}

bool sipGeometricCenterProcessor::finish() throw()
{
    extern bool sipVH_BALL_4(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,NULL,sipNm_BALL_finish);

    if (!meth)
        return GeometricCenterProcessor::finish();

    return sipVH_BALL_4(sipGILState,meth);
}


extern "C" {static PyObject *meth_GeometricCenterProcessor_start(PyObject *, PyObject *);}
static PyObject *meth_GeometricCenterProcessor_start(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        GeometricCenterProcessor *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_GeometricCenterProcessor,&sipCpp))
        {
            bool sipRes;

            sipRes = (sipSelfWasArg ? sipCpp->GeometricCenterProcessor::start() : sipCpp->start());

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_GeometricCenterProcessor,sipNm_BALL_start);

    return NULL;
}


extern "C" {static PyObject *meth_GeometricCenterProcessor_finish(PyObject *, PyObject *);}
static PyObject *meth_GeometricCenterProcessor_finish(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        GeometricCenterProcessor *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_GeometricCenterProcessor,&sipCpp))
        {
            bool sipRes;

            sipRes = (sipSelfWasArg ? sipCpp->GeometricCenterProcessor::finish() : sipCpp->finish());

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_GeometricCenterProcessor,sipNm_BALL_finish);

    return NULL;
}


extern "C" {static PyObject *meth_GeometricCenterProcessor_getCenter(PyObject *, PyObject *);}
static PyObject *meth_GeometricCenterProcessor_getCenter(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        GeometricCenterProcessor *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_GeometricCenterProcessor,&sipCpp))
        {
            Vector3 *sipRes;

            try
            {
            sipRes = &sipCpp->getCenter();
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return sipConvertFromInstance(sipRes,sipClass_Vector3,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_GeometricCenterProcessor,sipNm_BALL_getCenter);

    return NULL;
}


extern "C" {static PyObject *slot_GeometricCenterProcessor___call__(PyObject *sipSelf,PyObject *sipArgs);}
static PyObject *slot_GeometricCenterProcessor___call__(PyObject *sipSelf,PyObject *sipArgs)
{
    GeometricCenterProcessor *sipCpp = reinterpret_cast<GeometricCenterProcessor *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_GeometricCenterProcessor));

    if (!sipCpp)
        return 0;

    int sipArgsParsed = 0;

    {
        Atom * a0;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"JA",sipClass_Atom,&a0))
        {
            Processor::Result sipRes = (Processor::Result)0;

#line 44 "geometricProperties.sip"
  sipRes = sipCpp->operator () (*a0);
#line 171 "sipBALLGeometricCenterProcessor.C"

            return sipConvertFromNamedEnum(sipRes,sipEnum_Processor_Result);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_GeometricCenterProcessor,sipNm_BALL___call__);

    return 0;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_GeometricCenterProcessor(void *, sipWrapperType *);}
static void *cast_GeometricCenterProcessor(void *ptr,sipWrapperType *targetClass)
{
    void *res;

    if (targetClass == sipClass_GeometricCenterProcessor)
        return ptr;

    if ((res = sipCast_AtomProcessor((AtomProcessor *)(GeometricCenterProcessor *)ptr,targetClass)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_GeometricCenterProcessor(void *, int);}
static void release_GeometricCenterProcessor(void *ptr,int state)
{
    if (state & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipGeometricCenterProcessor *>(ptr);
    else
        delete reinterpret_cast<GeometricCenterProcessor *>(ptr);
}


extern "C" {static void dealloc_GeometricCenterProcessor(sipWrapper *);}
static void dealloc_GeometricCenterProcessor(sipWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipGeometricCenterProcessor *>(sipSelf->u.cppPtr)->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_GeometricCenterProcessor(sipSelf->u.cppPtr,sipSelf->flags);
    }
}


extern "C" {static void *init_GeometricCenterProcessor(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_GeometricCenterProcessor(sipWrapper *sipSelf,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    sipGeometricCenterProcessor *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            try
            {
            sipCpp = new sipGeometricCenterProcessor();
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
        const GeometricCenterProcessor * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_GeometricCenterProcessor,&a0))
        {
            try
            {
            sipCpp = new sipGeometricCenterProcessor(*a0);
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


extern "C" {static void *forceConvertTo_GeometricCenterProcessor(PyObject *, int *);}
static void *forceConvertTo_GeometricCenterProcessor(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_GeometricCenterProcessor))
        return sipConvertToCpp(valobj,sipClass_GeometricCenterProcessor,iserrp);

    sipBadClass(sipNm_BALL_GeometricCenterProcessor);

    *iserrp = 1;

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedClassDef supers_GeometricCenterProcessor[] = {{107, 255, 1}};


/* Define this type's Python slots. */
static sipPySlotDef slots_GeometricCenterProcessor[] = {
    {(void *)slot_GeometricCenterProcessor___call__, call_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_GeometricCenterProcessor[] = {
    {sipNm_BALL_finish, meth_GeometricCenterProcessor_finish, METH_VARARGS, NULL},
    {sipNm_BALL_getCenter, meth_GeometricCenterProcessor_getCenter, METH_VARARGS, NULL},
    {sipNm_BALL_start, meth_GeometricCenterProcessor_start, METH_VARARGS, NULL}
};


sipTypeDef sipType_BALL_GeometricCenterProcessor = {
    0,
    0,
    "BALL.GeometricCenterProcessor",
    0,
    {0, 0, 1},
    supers_GeometricCenterProcessor,
    slots_GeometricCenterProcessor,
    3, methods_GeometricCenterProcessor,
    0, 0,
    0,
    init_GeometricCenterProcessor,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_GeometricCenterProcessor,
    cast_GeometricCenterProcessor,
    release_GeometricCenterProcessor,
    forceConvertTo_GeometricCenterProcessor,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
