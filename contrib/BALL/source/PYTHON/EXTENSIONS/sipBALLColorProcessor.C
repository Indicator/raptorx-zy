/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLColorProcessor.h"

#include "sipBALLColorProcessor.h"
#include "sipBALLAtom.h"
#include "sipBALLVector3.h"
#include "sipBALLComposite.h"
#include "sipBALLColorRGBA.h"


sipColorProcessor::sipColorProcessor() throw(): ColorProcessor(), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,2);
}

sipColorProcessor::sipColorProcessor(const ColorProcessor& a0) throw(): ColorProcessor(a0), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,2);
}

sipColorProcessor::~sipColorProcessor()
{
    sipCommonDtor(sipPySelf);
}

void sipColorProcessor::clear() throw()
{
    extern void sipVH_BALL_0(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipNm_BALL_clear);

    if (!meth)
    {
        ColorProcessor::clear();
        return;
    }

    sipVH_BALL_0(sipGILState,meth);
}

bool sipColorProcessor::start() throw()
{
    extern bool sipVH_BALL_4(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,NULL,sipNm_BALL_start);

    if (!meth)
        return ColorProcessor::start();

    return sipVH_BALL_4(sipGILState,meth);
}


extern "C" {static PyObject *meth_ColorProcessor_clear(PyObject *, PyObject *);}
static PyObject *meth_ColorProcessor_clear(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        ColorProcessor *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_ColorProcessor,&sipCpp))
        {
            (sipSelfWasArg ? sipCpp->ColorProcessor::clear() : sipCpp->clear());

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_ColorProcessor,sipNm_BALL_clear);

    return NULL;
}


extern "C" {static PyObject *meth_ColorProcessor_set(PyObject *, PyObject *);}
static PyObject *meth_ColorProcessor_set(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const ColorProcessor * a0;
        ColorProcessor *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_ColorProcessor,&sipCpp,sipClass_ColorProcessor,&a0))
        {
            sipCpp->set(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_ColorProcessor,sipNm_BALL_set);

    return NULL;
}


extern "C" {static PyObject *meth_ColorProcessor_start(PyObject *, PyObject *);}
static PyObject *meth_ColorProcessor_start(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        ColorProcessor *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_ColorProcessor,&sipCpp))
        {
            bool sipRes;

            sipRes = (sipSelfWasArg ? sipCpp->ColorProcessor::start() : sipCpp->start());

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_ColorProcessor,sipNm_BALL_start);

    return NULL;
}


extern "C" {static PyObject *meth_ColorProcessor_updateAlwaysNeeded(PyObject *, PyObject *);}
static PyObject *meth_ColorProcessor_updateAlwaysNeeded(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        ColorProcessor *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_ColorProcessor,&sipCpp))
        {
            bool sipRes;

            try
            {
            sipRes = sipCpp->updateAlwaysNeeded();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_ColorProcessor,sipNm_BALL_updateAlwaysNeeded);

    return NULL;
}


extern "C" {static PyObject *meth_ColorProcessor_setDefaultColor(PyObject *, PyObject *);}
static PyObject *meth_ColorProcessor_setDefaultColor(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const ColorRGBA * a0;
        ColorProcessor *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_ColorProcessor,&sipCpp,sipClass_ColorRGBA,&a0))
        {
            sipCpp->setDefaultColor(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_ColorProcessor,sipNm_BALL_setDefaultColor);

    return NULL;
}


extern "C" {static PyObject *meth_ColorProcessor_getDefaultColor(PyObject *, PyObject *);}
static PyObject *meth_ColorProcessor_getDefaultColor(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        ColorProcessor *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_ColorProcessor,&sipCpp))
        {
            const ColorRGBA *sipRes;

            sipRes = &sipCpp->getDefaultColor();

            return sipConvertFromInstance(const_cast<ColorRGBA *>(sipRes),sipClass_ColorRGBA,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_ColorProcessor,sipNm_BALL_getDefaultColor);

    return NULL;
}


extern "C" {static PyObject *meth_ColorProcessor_getColor(PyObject *, PyObject *);}
static PyObject *meth_ColorProcessor_getColor(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const Composite * a0;
        ColorRGBA * a1;
        ColorProcessor *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJAJA",&sipSelf,sipClass_ColorProcessor,&sipCpp,sipClass_Composite,&a0,sipClass_ColorRGBA,&a1))
        {
            try
            {
            sipCpp->getColor(*a0,*a1);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_ColorProcessor,sipNm_BALL_getColor);

    return NULL;
}


extern "C" {static PyObject *meth_ColorProcessor_getTransparency(PyObject *, PyObject *);}
static PyObject *meth_ColorProcessor_getTransparency(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        ColorProcessor *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_ColorProcessor,&sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->getTransparency();

            return PyInt_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_ColorProcessor,sipNm_BALL_getTransparency);

    return NULL;
}


extern "C" {static PyObject *meth_ColorProcessor_setTransparency(PyObject *, PyObject *);}
static PyObject *meth_ColorProcessor_setTransparency(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        int a0;
        ColorProcessor *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bi",&sipSelf,sipClass_ColorProcessor,&sipCpp,&a0))
        {
            sipCpp->setTransparency(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_ColorProcessor,sipNm_BALL_setTransparency);

    return NULL;
}


extern "C" {static PyObject *meth_ColorProcessor_setAdditionalGridDistance(PyObject *, PyObject *);}
static PyObject *meth_ColorProcessor_setAdditionalGridDistance(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        float a0;
        ColorProcessor *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bf",&sipSelf,sipClass_ColorProcessor,&sipCpp,&a0))
        {
            sipCpp->setAdditionalGridDistance(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_ColorProcessor,sipNm_BALL_setAdditionalGridDistance);

    return NULL;
}


extern "C" {static PyObject *meth_ColorProcessor_getAdditionalGridDistance(PyObject *, PyObject *);}
static PyObject *meth_ColorProcessor_getAdditionalGridDistance(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        ColorProcessor *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_ColorProcessor,&sipCpp))
        {
            float sipRes;

            sipRes = sipCpp->getAdditionalGridDistance();

            return PyFloat_FromDouble((double)sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_ColorProcessor,sipNm_BALL_getAdditionalGridDistance);

    return NULL;
}


extern "C" {static PyObject *meth_ColorProcessor_setModelType(PyObject *, PyObject *);}
static PyObject *meth_ColorProcessor_setModelType(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        ModelType a0;
        ColorProcessor *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BE",&sipSelf,sipClass_ColorProcessor,&sipCpp,sipEnum_ModelType,&a0))
        {
            try
            {
            sipCpp->setModelType(a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_ColorProcessor,sipNm_BALL_setModelType);

    return NULL;
}


extern "C" {static PyObject *meth_ColorProcessor_getClosestItem(PyObject *, PyObject *);}
static PyObject *meth_ColorProcessor_getClosestItem(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const Vector3 * a0;
        ColorProcessor *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_ColorProcessor,&sipCpp,sipClass_Vector3,&a0))
        {
            const Atom *sipRes;

            sipRes = sipCpp->getClosestItem(*a0);

            return sipConvertFromInstance(const_cast<Atom *>(sipRes),sipClass_Atom,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_ColorProcessor,sipNm_BALL_getClosestItem);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_ColorProcessor(void *, sipWrapperType *);}
static void *cast_ColorProcessor(void *ptr,sipWrapperType *targetClass)
{
    if (targetClass == sipClass_ColorProcessor)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_ColorProcessor(void *, int);}
static void release_ColorProcessor(void *ptr,int state)
{
    if (state & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipColorProcessor *>(ptr);
    else
        delete reinterpret_cast<ColorProcessor *>(ptr);
}


extern "C" {static void dealloc_ColorProcessor(sipWrapper *);}
static void dealloc_ColorProcessor(sipWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipColorProcessor *>(sipSelf->u.cppPtr)->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_ColorProcessor(sipSelf->u.cppPtr,sipSelf->flags);
    }
}


extern "C" {static void *init_ColorProcessor(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_ColorProcessor(sipWrapper *sipSelf,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    sipColorProcessor *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            sipCpp = new sipColorProcessor();
        }
    }

    if (!sipCpp)
    {
        const ColorProcessor * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_ColorProcessor,&a0))
        {
            sipCpp = new sipColorProcessor(*a0);
        }
    }

    if (sipCpp)
        sipCpp->sipPySelf = sipSelf;

    return sipCpp;
}


extern "C" {static void *forceConvertTo_ColorProcessor(PyObject *, int *);}
static void *forceConvertTo_ColorProcessor(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_ColorProcessor))
        return sipConvertToCpp(valobj,sipClass_ColorProcessor,iserrp);

    sipBadClass(sipNm_BALL_ColorProcessor);

    *iserrp = 1;

    return NULL;
}


static PyMethodDef methods_ColorProcessor[] = {
    {sipNm_BALL_clear, meth_ColorProcessor_clear, METH_VARARGS, NULL},
    {sipNm_BALL_getAdditionalGridDistance, meth_ColorProcessor_getAdditionalGridDistance, METH_VARARGS, NULL},
    {sipNm_BALL_getClosestItem, meth_ColorProcessor_getClosestItem, METH_VARARGS, NULL},
    {sipNm_BALL_getColor, meth_ColorProcessor_getColor, METH_VARARGS, NULL},
    {sipNm_BALL_getDefaultColor, meth_ColorProcessor_getDefaultColor, METH_VARARGS, NULL},
    {sipNm_BALL_getTransparency, meth_ColorProcessor_getTransparency, METH_VARARGS, NULL},
    {sipNm_BALL_set, meth_ColorProcessor_set, METH_VARARGS, NULL},
    {sipNm_BALL_setAdditionalGridDistance, meth_ColorProcessor_setAdditionalGridDistance, METH_VARARGS, NULL},
    {sipNm_BALL_setDefaultColor, meth_ColorProcessor_setDefaultColor, METH_VARARGS, NULL},
    {sipNm_BALL_setModelType, meth_ColorProcessor_setModelType, METH_VARARGS, NULL},
    {sipNm_BALL_setTransparency, meth_ColorProcessor_setTransparency, METH_VARARGS, NULL},
    {sipNm_BALL_start, meth_ColorProcessor_start, METH_VARARGS, NULL},
    {sipNm_BALL_updateAlwaysNeeded, meth_ColorProcessor_updateAlwaysNeeded, METH_VARARGS, NULL}
};


sipTypeDef sipType_BALL_ColorProcessor = {
    0,
    0,
    "BALL.ColorProcessor",
    0,
    {0, 0, 1},
    0,
    0,
    13, methods_ColorProcessor,
    0, 0,
    0,
    init_ColorProcessor,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_ColorProcessor,
    cast_ColorProcessor,
    release_ColorProcessor,
    forceConvertTo_ColorProcessor,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
