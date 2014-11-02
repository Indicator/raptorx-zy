/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLModelProcessor.h"

#include "sipBALLModelProcessor.h"
#include "sipBALLProcessor.h"
#include "sipBALLComposite.h"
#include "sipBALLIndex.h"
#include "sipBALLGeometricObjectList.h"


sipModelProcessor::sipModelProcessor() throw(): ModelProcessor(), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,4);
}

sipModelProcessor::sipModelProcessor(const ModelProcessor& a0) throw(): ModelProcessor(a0), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,4);
}

sipModelProcessor::~sipModelProcessor() throw()
{
    sipCommonDtor(sipPySelf);
}

void sipModelProcessor::clear() throw()
{
    extern void sipVH_BALL_0(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipNm_BALL_clear);

    if (!meth)
    {
        ModelProcessor::clear();
        return;
    }

    sipVH_BALL_0(sipGILState,meth);
}

bool sipModelProcessor::isValid() const throw()
{
    extern bool sipVH_BALL_4(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<sipMethodCache *>(&sipPyMethods[1]),sipPySelf,NULL,sipNm_BALL_isValid);

    if (!meth)
        return ModelProcessor::isValid();

    return sipVH_BALL_4(sipGILState,meth);
}

void sipModelProcessor::clearComposites() throw()
{
    extern void sipVH_BALL_0(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[2],sipPySelf,NULL,sipNm_BALL_clearComposites);

    if (!meth)
    {
        ModelProcessor::clearComposites();
        return;
    }

    sipVH_BALL_0(sipGILState,meth);
}

bool sipModelProcessor::createGeometricObjects() throw()
{
    extern bool sipVH_BALL_4(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[3],sipPySelf,NULL,sipNm_BALL_createGeometricObjects);

    if (!meth)
        return ModelProcessor::createGeometricObjects();

    return sipVH_BALL_4(sipGILState,meth);
}


extern "C" {static PyObject *meth_ModelProcessor_clear(PyObject *, PyObject *);}
static PyObject *meth_ModelProcessor_clear(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        ModelProcessor *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_ModelProcessor,&sipCpp))
        {
            (sipSelfWasArg ? sipCpp->ModelProcessor::clear() : sipCpp->clear());

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_ModelProcessor,sipNm_BALL_clear);

    return NULL;
}


extern "C" {static PyObject *meth_ModelProcessor_isValid(PyObject *, PyObject *);}
static PyObject *meth_ModelProcessor_isValid(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        ModelProcessor *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_ModelProcessor,&sipCpp))
        {
            bool sipRes;

            sipRes = (sipSelfWasArg ? sipCpp->ModelProcessor::isValid() : sipCpp->isValid());

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_ModelProcessor,sipNm_BALL_isValid);

    return NULL;
}


extern "C" {static PyObject *meth_ModelProcessor_clearComposites(PyObject *, PyObject *);}
static PyObject *meth_ModelProcessor_clearComposites(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        ModelProcessor *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_ModelProcessor,&sipCpp))
        {
            (sipSelfWasArg ? sipCpp->ModelProcessor::clearComposites() : sipCpp->clearComposites());

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_ModelProcessor,sipNm_BALL_clearComposites);

    return NULL;
}


extern "C" {static PyObject *meth_ModelProcessor_getGeometricObjects(PyObject *, PyObject *);}
static PyObject *meth_ModelProcessor_getGeometricObjects(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        ModelProcessor *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_ModelProcessor,&sipCpp))
        {
            GeometricObjectList *sipRes;

            sipRes = &sipCpp->getGeometricObjects();

            PyObject *sipResObj = sipConvertFromMappedType(sipRes,sipMappedType_GeometricObjectList,NULL);

            return sipResObj;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_ModelProcessor,sipNm_BALL_getGeometricObjects);

    return NULL;
}


extern "C" {static PyObject *meth_ModelProcessor_setDrawingPrecision(PyObject *, PyObject *);}
static PyObject *meth_ModelProcessor_setDrawingPrecision(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Index * a0;
        int a0State = 0;
        ModelProcessor *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BM1",&sipSelf,sipClass_ModelProcessor,&sipCpp,sipMappedType_Index,&a0,&a0State))
        {
            sipCpp->setDrawingPrecision(*a0);

            sipReleaseMappedType(a0,sipMappedType_Index,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_ModelProcessor,sipNm_BALL_setDrawingPrecision);

    return NULL;
}


extern "C" {static PyObject *meth_ModelProcessor_getDrawingPrecision(PyObject *, PyObject *);}
static PyObject *meth_ModelProcessor_getDrawingPrecision(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        ModelProcessor *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_ModelProcessor,&sipCpp))
        {
            Index *sipRes;

            sipRes = new Index(sipCpp->getDrawingPrecision());

            PyObject *sipResObj = sipConvertFromMappedType(sipRes,sipMappedType_Index,NULL);
            delete sipRes;

            return sipResObj;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_ModelProcessor,sipNm_BALL_getDrawingPrecision);

    return NULL;
}


extern "C" {static PyObject *meth_ModelProcessor_setSurfaceDrawingPrecision(PyObject *, PyObject *);}
static PyObject *meth_ModelProcessor_setSurfaceDrawingPrecision(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        float a0;
        ModelProcessor *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bf",&sipSelf,sipClass_ModelProcessor,&sipCpp,&a0))
        {
            sipCpp->setSurfaceDrawingPrecision(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_ModelProcessor,sipNm_BALL_setSurfaceDrawingPrecision);

    return NULL;
}


extern "C" {static PyObject *meth_ModelProcessor_getSurfaceDrawingPrecision(PyObject *, PyObject *);}
static PyObject *meth_ModelProcessor_getSurfaceDrawingPrecision(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        ModelProcessor *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_ModelProcessor,&sipCpp))
        {
            float sipRes;

            sipRes = sipCpp->getSurfaceDrawingPrecision();

            return PyFloat_FromDouble((double)sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_ModelProcessor,sipNm_BALL_getSurfaceDrawingPrecision);

    return NULL;
}


extern "C" {static PyObject *meth_ModelProcessor_createGeometricObjects(PyObject *, PyObject *);}
static PyObject *meth_ModelProcessor_createGeometricObjects(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        ModelProcessor *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_ModelProcessor,&sipCpp))
        {
            bool sipRes;

            sipRes = (sipSelfWasArg ? sipCpp->ModelProcessor::createGeometricObjects() : sipCpp->createGeometricObjects());

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_ModelProcessor,sipNm_BALL_createGeometricObjects);

    return NULL;
}


extern "C" {static PyObject *slot_ModelProcessor___call__(PyObject *sipSelf,PyObject *sipArgs);}
static PyObject *slot_ModelProcessor___call__(PyObject *sipSelf,PyObject *sipArgs)
{
    ModelProcessor *sipCpp = reinterpret_cast<ModelProcessor *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_ModelProcessor));

    if (!sipCpp)
        return 0;

    int sipArgsParsed = 0;

    {
        Composite * a0;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"JA",sipClass_Composite,&a0))
        {
            Processor::Result sipRes = (Processor::Result)0;

#line 36 "modelProcessor.sip"
	sipRes = sipCpp->operator () (*a0);
#line 357 "sipBALLModelProcessor.C"

            return sipConvertFromNamedEnum(sipRes,sipEnum_Processor_Result);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_ModelProcessor,sipNm_BALL___call__);

    return 0;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_ModelProcessor(void *, sipWrapperType *);}
static void *cast_ModelProcessor(void *ptr,sipWrapperType *targetClass)
{
    if (targetClass == sipClass_ModelProcessor)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_ModelProcessor(void *, int);}
static void release_ModelProcessor(void *ptr,int state)
{
    if (state & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipModelProcessor *>(ptr);
    else
        delete reinterpret_cast<ModelProcessor *>(ptr);
}


extern "C" {static void dealloc_ModelProcessor(sipWrapper *);}
static void dealloc_ModelProcessor(sipWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipModelProcessor *>(sipSelf->u.cppPtr)->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_ModelProcessor(sipSelf->u.cppPtr,sipSelf->flags);
    }
}


extern "C" {static void *init_ModelProcessor(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_ModelProcessor(sipWrapper *sipSelf,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    sipModelProcessor *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            sipCpp = new sipModelProcessor();
        }
    }

    if (!sipCpp)
    {
        const ModelProcessor * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_ModelProcessor,&a0))
        {
            sipCpp = new sipModelProcessor(*a0);
        }
    }

    if (sipCpp)
        sipCpp->sipPySelf = sipSelf;

    return sipCpp;
}


extern "C" {static void *forceConvertTo_ModelProcessor(PyObject *, int *);}
static void *forceConvertTo_ModelProcessor(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_ModelProcessor))
        return sipConvertToCpp(valobj,sipClass_ModelProcessor,iserrp);

    sipBadClass(sipNm_BALL_ModelProcessor);

    *iserrp = 1;

    return NULL;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_ModelProcessor[] = {
    {(void *)slot_ModelProcessor___call__, call_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_ModelProcessor[] = {
    {sipNm_BALL_clear, meth_ModelProcessor_clear, METH_VARARGS, NULL},
    {sipNm_BALL_clearComposites, meth_ModelProcessor_clearComposites, METH_VARARGS, NULL},
    {sipNm_BALL_createGeometricObjects, meth_ModelProcessor_createGeometricObjects, METH_VARARGS, NULL},
    {sipNm_BALL_getDrawingPrecision, meth_ModelProcessor_getDrawingPrecision, METH_VARARGS, NULL},
    {sipNm_BALL_getGeometricObjects, meth_ModelProcessor_getGeometricObjects, METH_VARARGS, NULL},
    {sipNm_BALL_getSurfaceDrawingPrecision, meth_ModelProcessor_getSurfaceDrawingPrecision, METH_VARARGS, NULL},
    {sipNm_BALL_isValid, meth_ModelProcessor_isValid, METH_VARARGS, NULL},
    {sipNm_BALL_setDrawingPrecision, meth_ModelProcessor_setDrawingPrecision, METH_VARARGS, NULL},
    {sipNm_BALL_setSurfaceDrawingPrecision, meth_ModelProcessor_setSurfaceDrawingPrecision, METH_VARARGS, NULL}
};


sipTypeDef sipType_BALL_ModelProcessor = {
    0,
    0,
    "BALL.ModelProcessor",
    0,
    {0, 0, 1},
    0,
    slots_ModelProcessor,
    9, methods_ModelProcessor,
    0, 0,
    0,
    init_ModelProcessor,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_ModelProcessor,
    cast_ModelProcessor,
    release_ModelProcessor,
    forceConvertTo_ModelProcessor,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
