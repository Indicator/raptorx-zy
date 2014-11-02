/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLInterpolateColorProcessor.h"

#include "sipBALLColorProcessor.h"
#include "sipBALLInterpolateColorProcessor.h"
#include "sipBALLColorRGBA.h"
#include "sipBALLAtom.h"
#include "sipBALLVector3.h"
#include "sipBALLComposite.h"


sipInterpolateColorProcessor::sipInterpolateColorProcessor(): InterpolateColorProcessor(), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,3);
}

sipInterpolateColorProcessor::sipInterpolateColorProcessor(const InterpolateColorProcessor& a0): InterpolateColorProcessor(a0), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,3);
}

sipInterpolateColorProcessor::~sipInterpolateColorProcessor()
{
    sipCommonDtor(sipPySelf);
}

bool sipInterpolateColorProcessor::start() throw()
{
    extern bool sipVH_BALL_4(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipNm_BALL_start);

    if (!meth)
        return InterpolateColorProcessor::start();

    return sipVH_BALL_4(sipGILState,meth);
}

void sipInterpolateColorProcessor::interpolateColor(float a0,ColorRGBA& a1) throw()
{
    extern void sipVH_BALL_17(sip_gilstate_t,PyObject *,float,ColorRGBA&);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,NULL,sipNm_BALL_interpolateColor);

    if (!meth)
    {
        InterpolateColorProcessor::interpolateColor(a0,a1);
        return;
    }

    sipVH_BALL_17(sipGILState,meth,a0,a1);
}

void sipInterpolateColorProcessor::clear() throw()
{
    extern void sipVH_BALL_0(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[2],sipPySelf,NULL,sipNm_BALL_clear);

    if (!meth)
    {
        ColorProcessor::clear();
        return;
    }

    sipVH_BALL_0(sipGILState,meth);
}


extern "C" {static PyObject *meth_InterpolateColorProcessor_start(PyObject *, PyObject *);}
static PyObject *meth_InterpolateColorProcessor_start(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        InterpolateColorProcessor *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_InterpolateColorProcessor,&sipCpp))
        {
            bool sipRes;

            sipRes = (sipSelfWasArg ? sipCpp->InterpolateColorProcessor::start() : sipCpp->start());

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_InterpolateColorProcessor,sipNm_BALL_start);

    return NULL;
}


extern "C" {static PyObject *meth_InterpolateColorProcessor_setMode(PyObject *, PyObject *);}
static PyObject *meth_InterpolateColorProcessor_setMode(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        InterpolateColorProcessor::Mode a0;
        InterpolateColorProcessor *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BE",&sipSelf,sipClass_InterpolateColorProcessor,&sipCpp,sipEnum_InterpolateColorProcessor_Mode,&a0))
        {
            try
            {
            sipCpp->setMode(a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_InterpolateColorProcessor,sipNm_BALL_setMode);

    return NULL;
}


extern "C" {static PyObject *meth_InterpolateColorProcessor_getMode(PyObject *, PyObject *);}
static PyObject *meth_InterpolateColorProcessor_getMode(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        InterpolateColorProcessor *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_InterpolateColorProcessor,&sipCpp))
        {
            InterpolateColorProcessor::Mode sipRes;

            try
            {
            sipRes = sipCpp->getMode();
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return sipConvertFromNamedEnum(sipRes,sipEnum_InterpolateColorProcessor_Mode);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_InterpolateColorProcessor,sipNm_BALL_getMode);

    return NULL;
}


extern "C" {static PyObject *meth_InterpolateColorProcessor_setMinColor(PyObject *, PyObject *);}
static PyObject *meth_InterpolateColorProcessor_setMinColor(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const ColorRGBA * a0;
        InterpolateColorProcessor *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_InterpolateColorProcessor,&sipCpp,sipClass_ColorRGBA,&a0))
        {
            sipCpp->setMinColor(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_InterpolateColorProcessor,sipNm_BALL_setMinColor);

    return NULL;
}


extern "C" {static PyObject *meth_InterpolateColorProcessor_setMaxColor(PyObject *, PyObject *);}
static PyObject *meth_InterpolateColorProcessor_setMaxColor(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const ColorRGBA * a0;
        InterpolateColorProcessor *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_InterpolateColorProcessor,&sipCpp,sipClass_ColorRGBA,&a0))
        {
            sipCpp->setMaxColor(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_InterpolateColorProcessor,sipNm_BALL_setMaxColor);

    return NULL;
}


extern "C" {static PyObject *meth_InterpolateColorProcessor_getMinColor(PyObject *, PyObject *);}
static PyObject *meth_InterpolateColorProcessor_getMinColor(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        InterpolateColorProcessor *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_InterpolateColorProcessor,&sipCpp))
        {
            const ColorRGBA *sipRes;

            sipRes = &sipCpp->getMinColor();

            return sipConvertFromInstance(const_cast<ColorRGBA *>(sipRes),sipClass_ColorRGBA,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_InterpolateColorProcessor,sipNm_BALL_getMinColor);

    return NULL;
}


extern "C" {static PyObject *meth_InterpolateColorProcessor_getMaxColor(PyObject *, PyObject *);}
static PyObject *meth_InterpolateColorProcessor_getMaxColor(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        InterpolateColorProcessor *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_InterpolateColorProcessor,&sipCpp))
        {
            const ColorRGBA *sipRes;

            sipRes = &sipCpp->getMaxColor();

            return sipConvertFromInstance(const_cast<ColorRGBA *>(sipRes),sipClass_ColorRGBA,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_InterpolateColorProcessor,sipNm_BALL_getMaxColor);

    return NULL;
}


extern "C" {static PyObject *meth_InterpolateColorProcessor_setMaxValue(PyObject *, PyObject *);}
static PyObject *meth_InterpolateColorProcessor_setMaxValue(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        float a0;
        InterpolateColorProcessor *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bf",&sipSelf,sipClass_InterpolateColorProcessor,&sipCpp,&a0))
        {
            sipCpp->setMaxValue(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_InterpolateColorProcessor,sipNm_BALL_setMaxValue);

    return NULL;
}


extern "C" {static PyObject *meth_InterpolateColorProcessor_getMaxValue(PyObject *, PyObject *);}
static PyObject *meth_InterpolateColorProcessor_getMaxValue(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        InterpolateColorProcessor *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_InterpolateColorProcessor,&sipCpp))
        {
            float sipRes;

            sipRes = sipCpp->getMaxValue();

            return PyFloat_FromDouble((double)sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_InterpolateColorProcessor,sipNm_BALL_getMaxValue);

    return NULL;
}


extern "C" {static PyObject *meth_InterpolateColorProcessor_setMinValue(PyObject *, PyObject *);}
static PyObject *meth_InterpolateColorProcessor_setMinValue(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        float a0;
        InterpolateColorProcessor *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bf",&sipSelf,sipClass_InterpolateColorProcessor,&sipCpp,&a0))
        {
            sipCpp->setMinValue(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_InterpolateColorProcessor,sipNm_BALL_setMinValue);

    return NULL;
}


extern "C" {static PyObject *meth_InterpolateColorProcessor_getMinValue(PyObject *, PyObject *);}
static PyObject *meth_InterpolateColorProcessor_getMinValue(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        InterpolateColorProcessor *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_InterpolateColorProcessor,&sipCpp))
        {
            float sipRes;

            sipRes = sipCpp->getMinValue();

            return PyFloat_FromDouble((double)sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_InterpolateColorProcessor,sipNm_BALL_getMinValue);

    return NULL;
}


extern "C" {static PyObject *meth_InterpolateColorProcessor_interpolateColor(PyObject *, PyObject *);}
static PyObject *meth_InterpolateColorProcessor_interpolateColor(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        float a0;
        ColorRGBA * a1;
        InterpolateColorProcessor *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BfJA",&sipSelf,sipClass_InterpolateColorProcessor,&sipCpp,&a0,sipClass_ColorRGBA,&a1))
        {
            (sipSelfWasArg ? sipCpp->InterpolateColorProcessor::interpolateColor(a0,*a1) : sipCpp->interpolateColor(a0,*a1));

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_InterpolateColorProcessor,sipNm_BALL_interpolateColor);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_InterpolateColorProcessor(void *, sipWrapperType *);}
static void *cast_InterpolateColorProcessor(void *ptr,sipWrapperType *targetClass)
{
    void *res;

    if (targetClass == sipClass_InterpolateColorProcessor)
        return ptr;

    if ((res = sipCast_ColorProcessor((ColorProcessor *)(InterpolateColorProcessor *)ptr,targetClass)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_InterpolateColorProcessor(void *, int);}
static void release_InterpolateColorProcessor(void *ptr,int state)
{
    if (state & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipInterpolateColorProcessor *>(ptr);
    else
        delete reinterpret_cast<InterpolateColorProcessor *>(ptr);
}


extern "C" {static void dealloc_InterpolateColorProcessor(sipWrapper *);}
static void dealloc_InterpolateColorProcessor(sipWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipInterpolateColorProcessor *>(sipSelf->u.cppPtr)->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_InterpolateColorProcessor(sipSelf->u.cppPtr,sipSelf->flags);
    }
}


extern "C" {static void *init_InterpolateColorProcessor(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_InterpolateColorProcessor(sipWrapper *sipSelf,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    sipInterpolateColorProcessor *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            try
            {
            sipCpp = new sipInterpolateColorProcessor();
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
        const InterpolateColorProcessor * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_InterpolateColorProcessor,&a0))
        {
            try
            {
            sipCpp = new sipInterpolateColorProcessor(*a0);
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


extern "C" {static void *forceConvertTo_InterpolateColorProcessor(PyObject *, int *);}
static void *forceConvertTo_InterpolateColorProcessor(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_InterpolateColorProcessor))
        return sipConvertToCpp(valobj,sipClass_InterpolateColorProcessor,iserrp);

    sipBadClass(sipNm_BALL_InterpolateColorProcessor);

    *iserrp = 1;

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedClassDef supers_InterpolateColorProcessor[] = {{15, 255, 1}};


static PyMethodDef methods_InterpolateColorProcessor[] = {
    {sipNm_BALL_getMaxColor, meth_InterpolateColorProcessor_getMaxColor, METH_VARARGS, NULL},
    {sipNm_BALL_getMaxValue, meth_InterpolateColorProcessor_getMaxValue, METH_VARARGS, NULL},
    {sipNm_BALL_getMinColor, meth_InterpolateColorProcessor_getMinColor, METH_VARARGS, NULL},
    {sipNm_BALL_getMinValue, meth_InterpolateColorProcessor_getMinValue, METH_VARARGS, NULL},
    {sipNm_BALL_getMode, meth_InterpolateColorProcessor_getMode, METH_VARARGS, NULL},
    {sipNm_BALL_interpolateColor, meth_InterpolateColorProcessor_interpolateColor, METH_VARARGS, NULL},
    {sipNm_BALL_setMaxColor, meth_InterpolateColorProcessor_setMaxColor, METH_VARARGS, NULL},
    {sipNm_BALL_setMaxValue, meth_InterpolateColorProcessor_setMaxValue, METH_VARARGS, NULL},
    {sipNm_BALL_setMinColor, meth_InterpolateColorProcessor_setMinColor, METH_VARARGS, NULL},
    {sipNm_BALL_setMinValue, meth_InterpolateColorProcessor_setMinValue, METH_VARARGS, NULL},
    {sipNm_BALL_setMode, meth_InterpolateColorProcessor_setMode, METH_VARARGS, NULL},
    {sipNm_BALL_start, meth_InterpolateColorProcessor_start, METH_VARARGS, NULL}
};

static sipEnumMemberDef enummembers_InterpolateColorProcessor[] = {
    {sipNm_BALL_DEFAULT_COLOR_FOR_OUTSIDE_COLORS, InterpolateColorProcessor::DEFAULT_COLOR_FOR_OUTSIDE_COLORS, 1},
    {sipNm_BALL_NO_OUTSIDE_COLORS, InterpolateColorProcessor::NO_OUTSIDE_COLORS, 1},
    {sipNm_BALL_USE_OUTSIDE_COLOR, InterpolateColorProcessor::USE_OUTSIDE_COLOR, 1},
};


sipTypeDef sipType_BALL_InterpolateColorProcessor = {
    0,
    0,
    "BALL.InterpolateColorProcessor",
    0,
    {0, 0, 1},
    supers_InterpolateColorProcessor,
    0,
    12, methods_InterpolateColorProcessor,
    3, enummembers_InterpolateColorProcessor,
    0,
    init_InterpolateColorProcessor,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_InterpolateColorProcessor,
    cast_InterpolateColorProcessor,
    release_InterpolateColorProcessor,
    forceConvertTo_InterpolateColorProcessor,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
