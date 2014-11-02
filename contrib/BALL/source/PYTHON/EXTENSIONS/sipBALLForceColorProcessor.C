/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLForceColorProcessor.h"

#include "sipBALLInterpolateColorProcessor.h"
#include "sipBALLForceColorProcessor.h"
#include "sipBALLComposite.h"
#include "sipBALLColorRGBA.h"
#include "sipBALLColorProcessor.h"
#include "sipBALLAtom.h"
#include "sipBALLVector3.h"


sipForceColorProcessor::sipForceColorProcessor(): ForceColorProcessor(), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,4);
}

sipForceColorProcessor::sipForceColorProcessor(const ForceColorProcessor& a0): ForceColorProcessor(a0), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,4);
}

sipForceColorProcessor::~sipForceColorProcessor()
{
    sipCommonDtor(sipPySelf);
}

void sipForceColorProcessor::getColor(const Composite& a0,ColorRGBA& a1)
{
    extern void sipVH_BALL_15(sip_gilstate_t,PyObject *,const Composite&,ColorRGBA&);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipNm_BALL_getColor);

    if (!meth)
    {
        ForceColorProcessor::getColor(a0,a1);
        return;
    }

    sipVH_BALL_15(sipGILState,meth,a0,a1);
}

bool sipForceColorProcessor::start() throw()
{
    extern bool sipVH_BALL_4(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,NULL,sipNm_BALL_start);

    if (!meth)
        return InterpolateColorProcessor::start();

    return sipVH_BALL_4(sipGILState,meth);
}

void sipForceColorProcessor::interpolateColor(float a0,ColorRGBA& a1) throw()
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

void sipForceColorProcessor::clear() throw()
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


extern "C" {static PyObject *meth_ForceColorProcessor_getColor(PyObject *, PyObject *);}
static PyObject *meth_ForceColorProcessor_getColor(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        const Composite * a0;
        ColorRGBA * a1;
        ForceColorProcessor *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJAJA",&sipSelf,sipClass_ForceColorProcessor,&sipCpp,sipClass_Composite,&a0,sipClass_ColorRGBA,&a1))
        {
            try
            {
            (sipSelfWasArg ? sipCpp->ForceColorProcessor::getColor(*a0,*a1) : sipCpp->getColor(*a0,*a1));
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_ForceColorProcessor,sipNm_BALL_getColor);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_ForceColorProcessor(void *, sipWrapperType *);}
static void *cast_ForceColorProcessor(void *ptr,sipWrapperType *targetClass)
{
    void *res;

    if (targetClass == sipClass_ForceColorProcessor)
        return ptr;

    if ((res = sipCast_InterpolateColorProcessor((InterpolateColorProcessor *)(ForceColorProcessor *)ptr,targetClass)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_ForceColorProcessor(void *, int);}
static void release_ForceColorProcessor(void *ptr,int state)
{
    if (state & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipForceColorProcessor *>(ptr);
    else
        delete reinterpret_cast<ForceColorProcessor *>(ptr);
}


extern "C" {static void dealloc_ForceColorProcessor(sipWrapper *);}
static void dealloc_ForceColorProcessor(sipWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipForceColorProcessor *>(sipSelf->u.cppPtr)->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_ForceColorProcessor(sipSelf->u.cppPtr,sipSelf->flags);
    }
}


extern "C" {static void *init_ForceColorProcessor(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_ForceColorProcessor(sipWrapper *sipSelf,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    sipForceColorProcessor *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            try
            {
            sipCpp = new sipForceColorProcessor();
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
        const ForceColorProcessor * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_ForceColorProcessor,&a0))
        {
            try
            {
            sipCpp = new sipForceColorProcessor(*a0);
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


extern "C" {static void *forceConvertTo_ForceColorProcessor(PyObject *, int *);}
static void *forceConvertTo_ForceColorProcessor(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_ForceColorProcessor))
        return sipConvertToCpp(valobj,sipClass_ForceColorProcessor,iserrp);

    sipBadClass(sipNm_BALL_ForceColorProcessor);

    *iserrp = 1;

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedClassDef supers_ForceColorProcessor[] = {{27, 255, 1}};


static PyMethodDef methods_ForceColorProcessor[] = {
    {sipNm_BALL_getColor, meth_ForceColorProcessor_getColor, METH_VARARGS, NULL}
};


sipTypeDef sipType_BALL_ForceColorProcessor = {
    0,
    0,
    "BALL.ForceColorProcessor",
    0,
    {0, 0, 1},
    supers_ForceColorProcessor,
    0,
    1, methods_ForceColorProcessor,
    0, 0,
    0,
    init_ForceColorProcessor,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_ForceColorProcessor,
    cast_ForceColorProcessor,
    release_ForceColorProcessor,
    forceConvertTo_ForceColorProcessor,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
