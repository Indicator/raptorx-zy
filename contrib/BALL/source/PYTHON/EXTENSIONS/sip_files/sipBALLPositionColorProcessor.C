/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLPositionColorProcessor.h"

#include "sipBALLColorProcessor.h"
#include "sipBALLPositionColorProcessor.h"
#include "sipBALLComposite.h"
#include "sipBALLColorRGBA.h"
#include "sipBALLAtom.h"
#include "sipBALLVector3.h"


sipPositionColorProcessor::sipPositionColorProcessor(): PositionColorProcessor(), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,3);
}

sipPositionColorProcessor::sipPositionColorProcessor(const PositionColorProcessor& a0): PositionColorProcessor(a0), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,3);
}

sipPositionColorProcessor::~sipPositionColorProcessor()
{
    sipCommonDtor(sipPySelf);
}

void sipPositionColorProcessor::getColor(const Composite& a0,ColorRGBA& a1)
{
    extern void sipVH_BALL_15(sip_gilstate_t,PyObject *,const Composite&,ColorRGBA&);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipNm_BALL_getColor);

    if (!meth)
    {
        PositionColorProcessor::getColor(a0,a1);
        return;
    }

    sipVH_BALL_15(sipGILState,meth,a0,a1);
}

void sipPositionColorProcessor::clear() throw()
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

bool sipPositionColorProcessor::start() throw()
{
    extern bool sipVH_BALL_4(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[2],sipPySelf,NULL,sipNm_BALL_start);

    if (!meth)
        return PositionColorProcessor::start();

    return sipVH_BALL_4(sipGILState,meth);
}


extern "C" {static PyObject *meth_PositionColorProcessor_getColor(PyObject *, PyObject *);}
static PyObject *meth_PositionColorProcessor_getColor(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        const Composite * a0;
        ColorRGBA * a1;
        PositionColorProcessor *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJAJA",&sipSelf,sipClass_PositionColorProcessor,&sipCpp,sipClass_Composite,&a0,sipClass_ColorRGBA,&a1))
        {
            try
            {
            (sipSelfWasArg ? sipCpp->PositionColorProcessor::getColor(*a0,*a1) : sipCpp->getColor(*a0,*a1));
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_PositionColorProcessor,sipNm_BALL_getColor);

    return NULL;
}


extern "C" {static PyObject *meth_PositionColorProcessor_start(PyObject *, PyObject *);}
static PyObject *meth_PositionColorProcessor_start(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        PositionColorProcessor *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_PositionColorProcessor,&sipCpp))
        {
            bool sipRes;

            sipRes = (sipSelfWasArg ? sipCpp->PositionColorProcessor::start() : sipCpp->start());

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_PositionColorProcessor,sipNm_BALL_start);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_PositionColorProcessor(void *, sipWrapperType *);}
static void *cast_PositionColorProcessor(void *ptr,sipWrapperType *targetClass)
{
    void *res;

    if (targetClass == sipClass_PositionColorProcessor)
        return ptr;

    if ((res = sipCast_ColorProcessor((ColorProcessor *)(PositionColorProcessor *)ptr,targetClass)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_PositionColorProcessor(void *, int);}
static void release_PositionColorProcessor(void *ptr,int state)
{
    if (state & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipPositionColorProcessor *>(ptr);
    else
        delete reinterpret_cast<PositionColorProcessor *>(ptr);
}


extern "C" {static void dealloc_PositionColorProcessor(sipWrapper *);}
static void dealloc_PositionColorProcessor(sipWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipPositionColorProcessor *>(sipSelf->u.cppPtr)->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_PositionColorProcessor(sipSelf->u.cppPtr,sipSelf->flags);
    }
}


extern "C" {static void *init_PositionColorProcessor(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_PositionColorProcessor(sipWrapper *sipSelf,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    sipPositionColorProcessor *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            try
            {
            sipCpp = new sipPositionColorProcessor();
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
        const PositionColorProcessor * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_PositionColorProcessor,&a0))
        {
            try
            {
            sipCpp = new sipPositionColorProcessor(*a0);
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


extern "C" {static void *forceConvertTo_PositionColorProcessor(PyObject *, int *);}
static void *forceConvertTo_PositionColorProcessor(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_PositionColorProcessor))
        return sipConvertToCpp(valobj,sipClass_PositionColorProcessor,iserrp);

    sipBadClass(sipNm_BALL_PositionColorProcessor);

    *iserrp = 1;

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedClassDef supers_PositionColorProcessor[] = {{15, 255, 1}};


static PyMethodDef methods_PositionColorProcessor[] = {
    {sipNm_BALL_getColor, meth_PositionColorProcessor_getColor, METH_VARARGS, NULL},
    {sipNm_BALL_start, meth_PositionColorProcessor_start, METH_VARARGS, NULL}
};


sipTypeDef sipType_BALL_PositionColorProcessor = {
    0,
    0,
    "BALL.PositionColorProcessor",
    0,
    {0, 0, 1},
    supers_PositionColorProcessor,
    0,
    2, methods_PositionColorProcessor,
    0, 0,
    0,
    init_PositionColorProcessor,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_PositionColorProcessor,
    cast_PositionColorProcessor,
    release_PositionColorProcessor,
    forceConvertTo_PositionColorProcessor,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
