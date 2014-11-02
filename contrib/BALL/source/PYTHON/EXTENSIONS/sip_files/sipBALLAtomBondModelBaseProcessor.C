/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLAtomBondModelBaseProcessor.h"

#include "sipBALLModelProcessor.h"
#include "sipBALLAtomBondModelBaseProcessor.h"
#include "sipBALLProcessor.h"
#include "sipBALLComposite.h"
#include "sipBALLIndex.h"
#include "sipBALLGeometricObjectList.h"


sipAtomBondModelBaseProcessor::sipAtomBondModelBaseProcessor() throw(): AtomBondModelBaseProcessor(), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,4);
}

sipAtomBondModelBaseProcessor::sipAtomBondModelBaseProcessor(const AtomBondModelBaseProcessor& a0) throw(): AtomBondModelBaseProcessor(a0), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,4);
}

sipAtomBondModelBaseProcessor::~sipAtomBondModelBaseProcessor() throw()
{
    sipCommonDtor(sipPySelf);
}

void sipAtomBondModelBaseProcessor::clear() throw()
{
    extern void sipVH_BALL_0(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipNm_BALL_clear);

    if (!meth)
    {
        AtomBondModelBaseProcessor::clear();
        return;
    }

    sipVH_BALL_0(sipGILState,meth);
}

void sipAtomBondModelBaseProcessor::clearComposites() throw()
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

bool sipAtomBondModelBaseProcessor::createGeometricObjects() throw()
{
    extern bool sipVH_BALL_4(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[2],sipPySelf,NULL,sipNm_BALL_createGeometricObjects);

    if (!meth)
        return AtomBondModelBaseProcessor::createGeometricObjects();

    return sipVH_BALL_4(sipGILState,meth);
}

bool sipAtomBondModelBaseProcessor::isValid() const throw()
{
    extern bool sipVH_BALL_4(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<sipMethodCache *>(&sipPyMethods[3]),sipPySelf,NULL,sipNm_BALL_isValid);

    if (!meth)
        return ModelProcessor::isValid();

    return sipVH_BALL_4(sipGILState,meth);
}


extern "C" {static PyObject *meth_AtomBondModelBaseProcessor_clear(PyObject *, PyObject *);}
static PyObject *meth_AtomBondModelBaseProcessor_clear(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        AtomBondModelBaseProcessor *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_AtomBondModelBaseProcessor,&sipCpp))
        {
            (sipSelfWasArg ? sipCpp->AtomBondModelBaseProcessor::clear() : sipCpp->clear());

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_AtomBondModelBaseProcessor,sipNm_BALL_clear);

    return NULL;
}


extern "C" {static PyObject *meth_AtomBondModelBaseProcessor_set(PyObject *, PyObject *);}
static PyObject *meth_AtomBondModelBaseProcessor_set(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const AtomBondModelBaseProcessor * a0;
        AtomBondModelBaseProcessor *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_AtomBondModelBaseProcessor,&sipCpp,sipClass_AtomBondModelBaseProcessor,&a0))
        {
            sipCpp->set(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_AtomBondModelBaseProcessor,sipNm_BALL_set);

    return NULL;
}


extern "C" {static PyObject *meth_AtomBondModelBaseProcessor_clearComposites(PyObject *, PyObject *);}
static PyObject *meth_AtomBondModelBaseProcessor_clearComposites(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        AtomBondModelBaseProcessor *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_AtomBondModelBaseProcessor,&sipCpp))
        {
            (sipSelfWasArg ? sipCpp->AtomBondModelBaseProcessor::clearComposites() : sipCpp->clearComposites());

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_AtomBondModelBaseProcessor,sipNm_BALL_clearComposites);

    return NULL;
}


extern "C" {static PyObject *meth_AtomBondModelBaseProcessor_createGeometricObjects(PyObject *, PyObject *);}
static PyObject *meth_AtomBondModelBaseProcessor_createGeometricObjects(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        AtomBondModelBaseProcessor *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_AtomBondModelBaseProcessor,&sipCpp))
        {
            bool sipRes;

            sipRes = (sipSelfWasArg ? sipCpp->AtomBondModelBaseProcessor::createGeometricObjects() : sipCpp->createGeometricObjects());

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_AtomBondModelBaseProcessor,sipNm_BALL_createGeometricObjects);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_AtomBondModelBaseProcessor(void *, sipWrapperType *);}
static void *cast_AtomBondModelBaseProcessor(void *ptr,sipWrapperType *targetClass)
{
    void *res;

    if (targetClass == sipClass_AtomBondModelBaseProcessor)
        return ptr;

    if ((res = sipCast_ModelProcessor((ModelProcessor *)(AtomBondModelBaseProcessor *)ptr,targetClass)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_AtomBondModelBaseProcessor(void *, int);}
static void release_AtomBondModelBaseProcessor(void *ptr,int state)
{
    if (state & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipAtomBondModelBaseProcessor *>(ptr);
    else
        delete reinterpret_cast<AtomBondModelBaseProcessor *>(ptr);
}


extern "C" {static void dealloc_AtomBondModelBaseProcessor(sipWrapper *);}
static void dealloc_AtomBondModelBaseProcessor(sipWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipAtomBondModelBaseProcessor *>(sipSelf->u.cppPtr)->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_AtomBondModelBaseProcessor(sipSelf->u.cppPtr,sipSelf->flags);
    }
}


extern "C" {static void *init_AtomBondModelBaseProcessor(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_AtomBondModelBaseProcessor(sipWrapper *sipSelf,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    sipAtomBondModelBaseProcessor *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            sipCpp = new sipAtomBondModelBaseProcessor();
        }
    }

    if (!sipCpp)
    {
        const AtomBondModelBaseProcessor * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_AtomBondModelBaseProcessor,&a0))
        {
            sipCpp = new sipAtomBondModelBaseProcessor(*a0);
        }
    }

    if (sipCpp)
        sipCpp->sipPySelf = sipSelf;

    return sipCpp;
}


extern "C" {static void *forceConvertTo_AtomBondModelBaseProcessor(PyObject *, int *);}
static void *forceConvertTo_AtomBondModelBaseProcessor(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_AtomBondModelBaseProcessor))
        return sipConvertToCpp(valobj,sipClass_AtomBondModelBaseProcessor,iserrp);

    sipBadClass(sipNm_BALL_AtomBondModelBaseProcessor);

    *iserrp = 1;

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedClassDef supers_AtomBondModelBaseProcessor[] = {{4, 255, 1}};


static PyMethodDef methods_AtomBondModelBaseProcessor[] = {
    {sipNm_BALL_clear, meth_AtomBondModelBaseProcessor_clear, METH_VARARGS, NULL},
    {sipNm_BALL_clearComposites, meth_AtomBondModelBaseProcessor_clearComposites, METH_VARARGS, NULL},
    {sipNm_BALL_createGeometricObjects, meth_AtomBondModelBaseProcessor_createGeometricObjects, METH_VARARGS, NULL},
    {sipNm_BALL_set, meth_AtomBondModelBaseProcessor_set, METH_VARARGS, NULL}
};


sipTypeDef sipType_BALL_AtomBondModelBaseProcessor = {
    0,
    0,
    "BALL.AtomBondModelBaseProcessor",
    0,
    {0, 0, 1},
    supers_AtomBondModelBaseProcessor,
    0,
    4, methods_AtomBondModelBaseProcessor,
    0, 0,
    0,
    init_AtomBondModelBaseProcessor,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_AtomBondModelBaseProcessor,
    cast_AtomBondModelBaseProcessor,
    release_AtomBondModelBaseProcessor,
    forceConvertTo_AtomBondModelBaseProcessor,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
