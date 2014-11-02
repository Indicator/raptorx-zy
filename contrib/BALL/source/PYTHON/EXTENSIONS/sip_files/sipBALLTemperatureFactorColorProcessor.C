/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLTemperatureFactorColorProcessor.h"

#include "sipBALLInterpolateColorProcessor.h"
#include "sipBALLTemperatureFactorColorProcessor.h"
#include "sipBALLComposite.h"
#include "sipBALLColorRGBA.h"
#include "sipBALLColorProcessor.h"
#include "sipBALLAtom.h"
#include "sipBALLVector3.h"


sipTemperatureFactorColorProcessor::sipTemperatureFactorColorProcessor(): TemperatureFactorColorProcessor(), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,4);
}

sipTemperatureFactorColorProcessor::sipTemperatureFactorColorProcessor(const TemperatureFactorColorProcessor& a0): TemperatureFactorColorProcessor(a0), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,4);
}

sipTemperatureFactorColorProcessor::~sipTemperatureFactorColorProcessor()
{
    sipCommonDtor(sipPySelf);
}

void sipTemperatureFactorColorProcessor::getColor(const Composite& a0,ColorRGBA& a1)
{
    extern void sipVH_BALL_15(sip_gilstate_t,PyObject *,const Composite&,ColorRGBA&);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipNm_BALL_getColor);

    if (!meth)
    {
        TemperatureFactorColorProcessor::getColor(a0,a1);
        return;
    }

    sipVH_BALL_15(sipGILState,meth,a0,a1);
}

bool sipTemperatureFactorColorProcessor::start() throw()
{
    extern bool sipVH_BALL_4(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,NULL,sipNm_BALL_start);

    if (!meth)
        return InterpolateColorProcessor::start();

    return sipVH_BALL_4(sipGILState,meth);
}

void sipTemperatureFactorColorProcessor::interpolateColor(float a0,ColorRGBA& a1) throw()
{
    extern void sipVH_BALL_17(sip_gilstate_t,PyObject *,float,ColorRGBA&);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[2],sipPySelf,NULL,sipNm_BALL_interpolateColor);

    if (!meth)
    {
        InterpolateColorProcessor::interpolateColor(a0,a1);
        return;
    }

    sipVH_BALL_17(sipGILState,meth,a0,a1);
}

void sipTemperatureFactorColorProcessor::clear() throw()
{
    extern void sipVH_BALL_0(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[3],sipPySelf,NULL,sipNm_BALL_clear);

    if (!meth)
    {
        ColorProcessor::clear();
        return;
    }

    sipVH_BALL_0(sipGILState,meth);
}


extern "C" {static PyObject *meth_TemperatureFactorColorProcessor_getColor(PyObject *, PyObject *);}
static PyObject *meth_TemperatureFactorColorProcessor_getColor(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        const Composite * a0;
        ColorRGBA * a1;
        TemperatureFactorColorProcessor *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJAJA",&sipSelf,sipClass_TemperatureFactorColorProcessor,&sipCpp,sipClass_Composite,&a0,sipClass_ColorRGBA,&a1))
        {
            try
            {
            (sipSelfWasArg ? sipCpp->TemperatureFactorColorProcessor::getColor(*a0,*a1) : sipCpp->getColor(*a0,*a1));
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_TemperatureFactorColorProcessor,sipNm_BALL_getColor);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_TemperatureFactorColorProcessor(void *, sipWrapperType *);}
static void *cast_TemperatureFactorColorProcessor(void *ptr,sipWrapperType *targetClass)
{
    void *res;

    if (targetClass == sipClass_TemperatureFactorColorProcessor)
        return ptr;

    if ((res = sipCast_InterpolateColorProcessor((InterpolateColorProcessor *)(TemperatureFactorColorProcessor *)ptr,targetClass)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_TemperatureFactorColorProcessor(void *, int);}
static void release_TemperatureFactorColorProcessor(void *ptr,int state)
{
    if (state & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipTemperatureFactorColorProcessor *>(ptr);
    else
        delete reinterpret_cast<TemperatureFactorColorProcessor *>(ptr);
}


extern "C" {static void dealloc_TemperatureFactorColorProcessor(sipWrapper *);}
static void dealloc_TemperatureFactorColorProcessor(sipWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipTemperatureFactorColorProcessor *>(sipSelf->u.cppPtr)->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_TemperatureFactorColorProcessor(sipSelf->u.cppPtr,sipSelf->flags);
    }
}


extern "C" {static void *init_TemperatureFactorColorProcessor(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_TemperatureFactorColorProcessor(sipWrapper *sipSelf,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    sipTemperatureFactorColorProcessor *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            try
            {
            sipCpp = new sipTemperatureFactorColorProcessor();
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
        const TemperatureFactorColorProcessor * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_TemperatureFactorColorProcessor,&a0))
        {
            try
            {
            sipCpp = new sipTemperatureFactorColorProcessor(*a0);
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


extern "C" {static void *forceConvertTo_TemperatureFactorColorProcessor(PyObject *, int *);}
static void *forceConvertTo_TemperatureFactorColorProcessor(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_TemperatureFactorColorProcessor))
        return sipConvertToCpp(valobj,sipClass_TemperatureFactorColorProcessor,iserrp);

    sipBadClass(sipNm_BALL_TemperatureFactorColorProcessor);

    *iserrp = 1;

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedClassDef supers_TemperatureFactorColorProcessor[] = {{27, 255, 1}};


static PyMethodDef methods_TemperatureFactorColorProcessor[] = {
    {sipNm_BALL_getColor, meth_TemperatureFactorColorProcessor_getColor, METH_VARARGS, NULL}
};


sipTypeDef sipType_BALL_TemperatureFactorColorProcessor = {
    0,
    0,
    "BALL.TemperatureFactorColorProcessor",
    0,
    {0, 0, 1},
    supers_TemperatureFactorColorProcessor,
    0,
    1, methods_TemperatureFactorColorProcessor,
    0, 0,
    0,
    init_TemperatureFactorColorProcessor,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_TemperatureFactorColorProcessor,
    cast_TemperatureFactorColorProcessor,
    release_TemperatureFactorColorProcessor,
    forceConvertTo_TemperatureFactorColorProcessor,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
