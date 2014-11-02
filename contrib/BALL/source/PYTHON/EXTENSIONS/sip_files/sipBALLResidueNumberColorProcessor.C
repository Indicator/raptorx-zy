/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLResidueNumberColorProcessor.h"

#include "sipBALLColorProcessor.h"
#include "sipBALLResidueNumberColorProcessor.h"
#include "sipBALLColorRGBA.h"
#include "sipBALLComposite.h"
#include "sipBALLAtom.h"
#include "sipBALLVector3.h"


sipResidueNumberColorProcessor::sipResidueNumberColorProcessor() throw(): ResidueNumberColorProcessor(), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,2);
}

sipResidueNumberColorProcessor::sipResidueNumberColorProcessor(const ResidueNumberColorProcessor& a0): ResidueNumberColorProcessor(a0), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,2);
}

sipResidueNumberColorProcessor::~sipResidueNumberColorProcessor()
{
    sipCommonDtor(sipPySelf);
}

bool sipResidueNumberColorProcessor::start() throw()
{
    extern bool sipVH_BALL_4(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipNm_BALL_start);

    if (!meth)
        return ResidueNumberColorProcessor::start();

    return sipVH_BALL_4(sipGILState,meth);
}

void sipResidueNumberColorProcessor::clear() throw()
{
    extern void sipVH_BALL_0(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,NULL,sipNm_BALL_clear);

    if (!meth)
    {
        ColorProcessor::clear();
        return;
    }

    sipVH_BALL_0(sipGILState,meth);
}


extern "C" {static PyObject *meth_ResidueNumberColorProcessor_getColor(PyObject *, PyObject *);}
static PyObject *meth_ResidueNumberColorProcessor_getColor(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const Composite * a0;
        ColorRGBA * a1;
        ResidueNumberColorProcessor *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJAJA",&sipSelf,sipClass_ResidueNumberColorProcessor,&sipCpp,sipClass_Composite,&a0,sipClass_ColorRGBA,&a1))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_ResidueNumberColorProcessor,sipNm_BALL_getColor);

    return NULL;
}


extern "C" {static PyObject *meth_ResidueNumberColorProcessor_setFirstColor(PyObject *, PyObject *);}
static PyObject *meth_ResidueNumberColorProcessor_setFirstColor(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const ColorRGBA * a0;
        ResidueNumberColorProcessor *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_ResidueNumberColorProcessor,&sipCpp,sipClass_ColorRGBA,&a0))
        {
            try
            {
            sipCpp->setFirstColor(*a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_ResidueNumberColorProcessor,sipNm_BALL_setFirstColor);

    return NULL;
}


extern "C" {static PyObject *meth_ResidueNumberColorProcessor_setLastColor(PyObject *, PyObject *);}
static PyObject *meth_ResidueNumberColorProcessor_setLastColor(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const ColorRGBA * a0;
        ResidueNumberColorProcessor *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_ResidueNumberColorProcessor,&sipCpp,sipClass_ColorRGBA,&a0))
        {
            try
            {
            sipCpp->setLastColor(*a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_ResidueNumberColorProcessor,sipNm_BALL_setLastColor);

    return NULL;
}


extern "C" {static PyObject *meth_ResidueNumberColorProcessor_setMiddleColor(PyObject *, PyObject *);}
static PyObject *meth_ResidueNumberColorProcessor_setMiddleColor(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const ColorRGBA * a0;
        ResidueNumberColorProcessor *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_ResidueNumberColorProcessor,&sipCpp,sipClass_ColorRGBA,&a0))
        {
            try
            {
            sipCpp->setMiddleColor(*a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_ResidueNumberColorProcessor,sipNm_BALL_setMiddleColor);

    return NULL;
}


extern "C" {static PyObject *meth_ResidueNumberColorProcessor_getFirstColor(PyObject *, PyObject *);}
static PyObject *meth_ResidueNumberColorProcessor_getFirstColor(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        ResidueNumberColorProcessor *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_ResidueNumberColorProcessor,&sipCpp))
        {
            const ColorRGBA *sipRes;

            try
            {
            sipRes = &sipCpp->getFirstColor();
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return sipConvertFromInstance(const_cast<ColorRGBA *>(sipRes),sipClass_ColorRGBA,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_ResidueNumberColorProcessor,sipNm_BALL_getFirstColor);

    return NULL;
}


extern "C" {static PyObject *meth_ResidueNumberColorProcessor_getMiddleColor(PyObject *, PyObject *);}
static PyObject *meth_ResidueNumberColorProcessor_getMiddleColor(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        ResidueNumberColorProcessor *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_ResidueNumberColorProcessor,&sipCpp))
        {
            const ColorRGBA *sipRes;

            try
            {
            sipRes = &sipCpp->getMiddleColor();
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return sipConvertFromInstance(const_cast<ColorRGBA *>(sipRes),sipClass_ColorRGBA,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_ResidueNumberColorProcessor,sipNm_BALL_getMiddleColor);

    return NULL;
}


extern "C" {static PyObject *meth_ResidueNumberColorProcessor_getLastColor(PyObject *, PyObject *);}
static PyObject *meth_ResidueNumberColorProcessor_getLastColor(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        ResidueNumberColorProcessor *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_ResidueNumberColorProcessor,&sipCpp))
        {
            const ColorRGBA *sipRes;

            try
            {
            sipRes = &sipCpp->getLastColor();
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return sipConvertFromInstance(const_cast<ColorRGBA *>(sipRes),sipClass_ColorRGBA,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_ResidueNumberColorProcessor,sipNm_BALL_getLastColor);

    return NULL;
}


extern "C" {static PyObject *meth_ResidueNumberColorProcessor_start(PyObject *, PyObject *);}
static PyObject *meth_ResidueNumberColorProcessor_start(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        ResidueNumberColorProcessor *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_ResidueNumberColorProcessor,&sipCpp))
        {
            bool sipRes;

            sipRes = (sipSelfWasArg ? sipCpp->ResidueNumberColorProcessor::start() : sipCpp->start());

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_ResidueNumberColorProcessor,sipNm_BALL_start);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_ResidueNumberColorProcessor(void *, sipWrapperType *);}
static void *cast_ResidueNumberColorProcessor(void *ptr,sipWrapperType *targetClass)
{
    void *res;

    if (targetClass == sipClass_ResidueNumberColorProcessor)
        return ptr;

    if ((res = sipCast_ColorProcessor((ColorProcessor *)(ResidueNumberColorProcessor *)ptr,targetClass)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_ResidueNumberColorProcessor(void *, int);}
static void release_ResidueNumberColorProcessor(void *ptr,int state)
{
    if (state & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipResidueNumberColorProcessor *>(ptr);
    else
        delete reinterpret_cast<ResidueNumberColorProcessor *>(ptr);
}


extern "C" {static void dealloc_ResidueNumberColorProcessor(sipWrapper *);}
static void dealloc_ResidueNumberColorProcessor(sipWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipResidueNumberColorProcessor *>(sipSelf->u.cppPtr)->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_ResidueNumberColorProcessor(sipSelf->u.cppPtr,sipSelf->flags);
    }
}


extern "C" {static void *init_ResidueNumberColorProcessor(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_ResidueNumberColorProcessor(sipWrapper *sipSelf,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    sipResidueNumberColorProcessor *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            sipCpp = new sipResidueNumberColorProcessor();
        }
    }

    if (!sipCpp)
    {
        const ResidueNumberColorProcessor * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_ResidueNumberColorProcessor,&a0))
        {
            try
            {
            sipCpp = new sipResidueNumberColorProcessor(*a0);
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


extern "C" {static void *forceConvertTo_ResidueNumberColorProcessor(PyObject *, int *);}
static void *forceConvertTo_ResidueNumberColorProcessor(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_ResidueNumberColorProcessor))
        return sipConvertToCpp(valobj,sipClass_ResidueNumberColorProcessor,iserrp);

    sipBadClass(sipNm_BALL_ResidueNumberColorProcessor);

    *iserrp = 1;

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedClassDef supers_ResidueNumberColorProcessor[] = {{15, 255, 1}};


static PyMethodDef methods_ResidueNumberColorProcessor[] = {
    {sipNm_BALL_getColor, meth_ResidueNumberColorProcessor_getColor, METH_VARARGS, NULL},
    {sipNm_BALL_getFirstColor, meth_ResidueNumberColorProcessor_getFirstColor, METH_VARARGS, NULL},
    {sipNm_BALL_getLastColor, meth_ResidueNumberColorProcessor_getLastColor, METH_VARARGS, NULL},
    {sipNm_BALL_getMiddleColor, meth_ResidueNumberColorProcessor_getMiddleColor, METH_VARARGS, NULL},
    {sipNm_BALL_setFirstColor, meth_ResidueNumberColorProcessor_setFirstColor, METH_VARARGS, NULL},
    {sipNm_BALL_setLastColor, meth_ResidueNumberColorProcessor_setLastColor, METH_VARARGS, NULL},
    {sipNm_BALL_setMiddleColor, meth_ResidueNumberColorProcessor_setMiddleColor, METH_VARARGS, NULL},
    {sipNm_BALL_start, meth_ResidueNumberColorProcessor_start, METH_VARARGS, NULL}
};


sipTypeDef sipType_BALL_ResidueNumberColorProcessor = {
    0,
    0,
    "BALL.ResidueNumberColorProcessor",
    0,
    {0, 0, 1},
    supers_ResidueNumberColorProcessor,
    0,
    8, methods_ResidueNumberColorProcessor,
    0, 0,
    0,
    init_ResidueNumberColorProcessor,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_ResidueNumberColorProcessor,
    cast_ResidueNumberColorProcessor,
    release_ResidueNumberColorProcessor,
    forceConvertTo_ResidueNumberColorProcessor,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
