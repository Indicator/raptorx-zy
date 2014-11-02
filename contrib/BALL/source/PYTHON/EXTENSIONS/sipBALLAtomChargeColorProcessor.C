/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLAtomChargeColorProcessor.h"

#include "sipBALLInterpolateColorProcessor.h"
#include "sipBALLAtomChargeColorProcessor.h"
#include "sipBALLComposite.h"
#include "sipBALLColorRGBA.h"
#include "sipBALLColorProcessor.h"
#include "sipBALLAtom.h"
#include "sipBALLVector3.h"


sipAtomChargeColorProcessor::sipAtomChargeColorProcessor() throw(): AtomChargeColorProcessor(), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,4);
}

sipAtomChargeColorProcessor::sipAtomChargeColorProcessor(const AtomChargeColorProcessor& a0) throw(): AtomChargeColorProcessor(a0), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,4);
}

sipAtomChargeColorProcessor::~sipAtomChargeColorProcessor()
{
    sipCommonDtor(sipPySelf);
}

void sipAtomChargeColorProcessor::getColor(const Composite& a0,ColorRGBA& a1)
{
    extern void sipVH_BALL_15(sip_gilstate_t,PyObject *,const Composite&,ColorRGBA&);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipNm_BALL_getColor);

    if (!meth)
    {
        AtomChargeColorProcessor::getColor(a0,a1);
        return;
    }

    sipVH_BALL_15(sipGILState,meth,a0,a1);
}

bool sipAtomChargeColorProcessor::start() throw()
{
    extern bool sipVH_BALL_4(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,NULL,sipNm_BALL_start);

    if (!meth)
        return InterpolateColorProcessor::start();

    return sipVH_BALL_4(sipGILState,meth);
}

void sipAtomChargeColorProcessor::interpolateColor(float a0,ColorRGBA& a1) throw()
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

void sipAtomChargeColorProcessor::clear() throw()
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


extern "C" {static PyObject *meth_AtomChargeColorProcessor_getColor(PyObject *, PyObject *);}
static PyObject *meth_AtomChargeColorProcessor_getColor(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        const Composite * a0;
        ColorRGBA * a1;
        AtomChargeColorProcessor *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJAJA",&sipSelf,sipClass_AtomChargeColorProcessor,&sipCpp,sipClass_Composite,&a0,sipClass_ColorRGBA,&a1))
        {
            try
            {
            (sipSelfWasArg ? sipCpp->AtomChargeColorProcessor::getColor(*a0,*a1) : sipCpp->getColor(*a0,*a1));
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_AtomChargeColorProcessor,sipNm_BALL_getColor);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_AtomChargeColorProcessor(void *, sipWrapperType *);}
static void *cast_AtomChargeColorProcessor(void *ptr,sipWrapperType *targetClass)
{
    void *res;

    if (targetClass == sipClass_AtomChargeColorProcessor)
        return ptr;

    if ((res = sipCast_InterpolateColorProcessor((InterpolateColorProcessor *)(AtomChargeColorProcessor *)ptr,targetClass)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_AtomChargeColorProcessor(void *, int);}
static void release_AtomChargeColorProcessor(void *ptr,int state)
{
    if (state & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipAtomChargeColorProcessor *>(ptr);
    else
        delete reinterpret_cast<AtomChargeColorProcessor *>(ptr);
}


extern "C" {static void dealloc_AtomChargeColorProcessor(sipWrapper *);}
static void dealloc_AtomChargeColorProcessor(sipWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipAtomChargeColorProcessor *>(sipSelf->u.cppPtr)->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_AtomChargeColorProcessor(sipSelf->u.cppPtr,sipSelf->flags);
    }
}


extern "C" {static void *init_AtomChargeColorProcessor(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_AtomChargeColorProcessor(sipWrapper *sipSelf,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    sipAtomChargeColorProcessor *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            sipCpp = new sipAtomChargeColorProcessor();
        }
    }

    if (!sipCpp)
    {
        const AtomChargeColorProcessor * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_AtomChargeColorProcessor,&a0))
        {
            sipCpp = new sipAtomChargeColorProcessor(*a0);
        }
    }

    if (sipCpp)
        sipCpp->sipPySelf = sipSelf;

    return sipCpp;
}


extern "C" {static void *forceConvertTo_AtomChargeColorProcessor(PyObject *, int *);}
static void *forceConvertTo_AtomChargeColorProcessor(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_AtomChargeColorProcessor))
        return sipConvertToCpp(valobj,sipClass_AtomChargeColorProcessor,iserrp);

    sipBadClass(sipNm_BALL_AtomChargeColorProcessor);

    *iserrp = 1;

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedClassDef supers_AtomChargeColorProcessor[] = {{27, 255, 1}};


static PyMethodDef methods_AtomChargeColorProcessor[] = {
    {sipNm_BALL_getColor, meth_AtomChargeColorProcessor_getColor, METH_VARARGS, NULL}
};


sipTypeDef sipType_BALL_AtomChargeColorProcessor = {
    0,
    0,
    "BALL.AtomChargeColorProcessor",
    0,
    {0, 0, 1},
    supers_AtomChargeColorProcessor,
    0,
    1, methods_AtomChargeColorProcessor,
    0, 0,
    0,
    init_AtomChargeColorProcessor,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_AtomChargeColorProcessor,
    cast_AtomChargeColorProcessor,
    release_AtomChargeColorProcessor,
    forceConvertTo_AtomChargeColorProcessor,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
