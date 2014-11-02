/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLHBondModelProcessor.h"

#include "sipBALLAtomBondModelBaseProcessor.h"
#include "sipBALLHBondModelProcessor.h"
#include "sipBALLModelProcessor.h"
#include "sipBALLProcessor.h"
#include "sipBALLComposite.h"
#include "sipBALLIndex.h"
#include "sipBALLGeometricObjectList.h"


sipHBondModelProcessor::sipHBondModelProcessor() throw(): HBondModelProcessor(), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,4);
}

sipHBondModelProcessor::sipHBondModelProcessor(const HBondModelProcessor& a0) throw(): HBondModelProcessor(a0), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,4);
}

sipHBondModelProcessor::~sipHBondModelProcessor() throw()
{
    sipCommonDtor(sipPySelf);
}

void sipHBondModelProcessor::clear() throw()
{
    extern void sipVH_BALL_0(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipNm_BALL_clear);

    if (!meth)
    {
        HBondModelProcessor::clear();
        return;
    }

    sipVH_BALL_0(sipGILState,meth);
}

void sipHBondModelProcessor::clearComposites() throw()
{
    extern void sipVH_BALL_0(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,NULL,sipNm_BALL_clearComposites);

    if (!meth)
    {
        AtomBondModelBaseProcessor::clearComposites();
        return;
    }

    sipVH_BALL_0(sipGILState,meth);
}

bool sipHBondModelProcessor::createGeometricObjects() throw()
{
    extern bool sipVH_BALL_4(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[2],sipPySelf,NULL,sipNm_BALL_createGeometricObjects);

    if (!meth)
        return AtomBondModelBaseProcessor::createGeometricObjects();

    return sipVH_BALL_4(sipGILState,meth);
}

bool sipHBondModelProcessor::isValid() const throw()
{
    extern bool sipVH_BALL_4(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<sipMethodCache *>(&sipPyMethods[3]),sipPySelf,NULL,sipNm_BALL_isValid);

    if (!meth)
        return ModelProcessor::isValid();

    return sipVH_BALL_4(sipGILState,meth);
}


extern "C" {static PyObject *meth_HBondModelProcessor_clear(PyObject *, PyObject *);}
static PyObject *meth_HBondModelProcessor_clear(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        HBondModelProcessor *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_HBondModelProcessor,&sipCpp))
        {
            (sipSelfWasArg ? sipCpp->HBondModelProcessor::clear() : sipCpp->clear());

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_HBondModelProcessor,sipNm_BALL_clear);

    return NULL;
}


extern "C" {static PyObject *meth_HBondModelProcessor_set(PyObject *, PyObject *);}
static PyObject *meth_HBondModelProcessor_set(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const HBondModelProcessor * a0;
        HBondModelProcessor *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_HBondModelProcessor,&sipCpp,sipClass_HBondModelProcessor,&a0))
        {
            sipCpp->set(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_HBondModelProcessor,sipNm_BALL_set);

    return NULL;
}


extern "C" {static PyObject *meth_HBondModelProcessor_setRadius(PyObject *, PyObject *);}
static PyObject *meth_HBondModelProcessor_setRadius(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        float a0;
        HBondModelProcessor *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bf",&sipSelf,sipClass_HBondModelProcessor,&sipCpp,&a0))
        {
            sipCpp->setRadius(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_HBondModelProcessor,sipNm_BALL_setRadius);

    return NULL;
}


extern "C" {static PyObject *meth_HBondModelProcessor_getRadius(PyObject *, PyObject *);}
static PyObject *meth_HBondModelProcessor_getRadius(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        HBondModelProcessor *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_HBondModelProcessor,&sipCpp))
        {
            float sipRes;

            sipRes = sipCpp->getRadius();

            return PyFloat_FromDouble((double)sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_HBondModelProcessor,sipNm_BALL_getRadius);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_HBondModelProcessor(void *, sipWrapperType *);}
static void *cast_HBondModelProcessor(void *ptr,sipWrapperType *targetClass)
{
    void *res;

    if (targetClass == sipClass_HBondModelProcessor)
        return ptr;

    if ((res = sipCast_AtomBondModelBaseProcessor((AtomBondModelBaseProcessor *)(HBondModelProcessor *)ptr,targetClass)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_HBondModelProcessor(void *, int);}
static void release_HBondModelProcessor(void *ptr,int state)
{
    if (state & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipHBondModelProcessor *>(ptr);
    else
        delete reinterpret_cast<HBondModelProcessor *>(ptr);
}


extern "C" {static void dealloc_HBondModelProcessor(sipWrapper *);}
static void dealloc_HBondModelProcessor(sipWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipHBondModelProcessor *>(sipSelf->u.cppPtr)->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_HBondModelProcessor(sipSelf->u.cppPtr,sipSelf->flags);
    }
}


extern "C" {static void *init_HBondModelProcessor(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_HBondModelProcessor(sipWrapper *sipSelf,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    sipHBondModelProcessor *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            sipCpp = new sipHBondModelProcessor();
        }
    }

    if (!sipCpp)
    {
        const HBondModelProcessor * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_HBondModelProcessor,&a0))
        {
            sipCpp = new sipHBondModelProcessor(*a0);
        }
    }

    if (sipCpp)
        sipCpp->sipPySelf = sipSelf;

    return sipCpp;
}


extern "C" {static void *forceConvertTo_HBondModelProcessor(PyObject *, int *);}
static void *forceConvertTo_HBondModelProcessor(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_HBondModelProcessor))
        return sipConvertToCpp(valobj,sipClass_HBondModelProcessor,iserrp);

    sipBadClass(sipNm_BALL_HBondModelProcessor);

    *iserrp = 1;

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedClassDef supers_HBondModelProcessor[] = {{10, 255, 1}};


static PyMethodDef methods_HBondModelProcessor[] = {
    {sipNm_BALL_clear, meth_HBondModelProcessor_clear, METH_VARARGS, NULL},
    {sipNm_BALL_getRadius, meth_HBondModelProcessor_getRadius, METH_VARARGS, NULL},
    {sipNm_BALL_set, meth_HBondModelProcessor_set, METH_VARARGS, NULL},
    {sipNm_BALL_setRadius, meth_HBondModelProcessor_setRadius, METH_VARARGS, NULL}
};


sipTypeDef sipType_BALL_HBondModelProcessor = {
    0,
    0,
    "BALL.HBondModelProcessor",
    0,
    {0, 0, 1},
    supers_HBondModelProcessor,
    0,
    4, methods_HBondModelProcessor,
    0, 0,
    0,
    init_HBondModelProcessor,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_HBondModelProcessor,
    cast_HBondModelProcessor,
    release_HBondModelProcessor,
    forceConvertTo_HBondModelProcessor,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
