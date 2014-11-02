/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLElementColorProcessor.h"

#include "sipBALLColorProcessor.h"
#include "sipBALLElementColorProcessor.h"
#include "sipBALLComposite.h"
#include "sipBALLColorRGBA.h"
#include "sipBALLAtom.h"
#include "sipBALLVector3.h"


sipElementColorProcessor::sipElementColorProcessor() throw(): ElementColorProcessor(), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,3);
}

sipElementColorProcessor::sipElementColorProcessor(const ElementColorProcessor& a0): ElementColorProcessor(a0), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,3);
}

sipElementColorProcessor::~sipElementColorProcessor()
{
    sipCommonDtor(sipPySelf);
}

void sipElementColorProcessor::getColor(const Composite& a0,ColorRGBA& a1)
{
    extern void sipVH_BALL_15(sip_gilstate_t,PyObject *,const Composite&,ColorRGBA&);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipNm_BALL_getColor);

    if (!meth)
    {
        ElementColorProcessor::getColor(a0,a1);
        return;
    }

    sipVH_BALL_15(sipGILState,meth,a0,a1);
}

void sipElementColorProcessor::clear() throw()
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

bool sipElementColorProcessor::start() throw()
{
    extern bool sipVH_BALL_4(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[2],sipPySelf,NULL,sipNm_BALL_start);

    if (!meth)
        return ColorProcessor::start();

    return sipVH_BALL_4(sipGILState,meth);
}


extern "C" {static PyObject *meth_ElementColorProcessor_setTransparency(PyObject *, PyObject *);}
static PyObject *meth_ElementColorProcessor_setTransparency(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        int a0;
        ElementColorProcessor *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bi",&sipSelf,sipClass_ElementColorProcessor,&sipCpp,&a0))
        {
            sipCpp->setTransparency(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_ElementColorProcessor,sipNm_BALL_setTransparency);

    return NULL;
}


extern "C" {static PyObject *meth_ElementColorProcessor_getColor(PyObject *, PyObject *);}
static PyObject *meth_ElementColorProcessor_getColor(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        const Composite * a0;
        ColorRGBA * a1;
        ElementColorProcessor *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJAJA",&sipSelf,sipClass_ElementColorProcessor,&sipCpp,sipClass_Composite,&a0,sipClass_ColorRGBA,&a1))
        {
            try
            {
            (sipSelfWasArg ? sipCpp->ElementColorProcessor::getColor(*a0,*a1) : sipCpp->getColor(*a0,*a1));
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_ElementColorProcessor,sipNm_BALL_getColor);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_ElementColorProcessor(void *, sipWrapperType *);}
static void *cast_ElementColorProcessor(void *ptr,sipWrapperType *targetClass)
{
    void *res;

    if (targetClass == sipClass_ElementColorProcessor)
        return ptr;

    if ((res = sipCast_ColorProcessor((ColorProcessor *)(ElementColorProcessor *)ptr,targetClass)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_ElementColorProcessor(void *, int);}
static void release_ElementColorProcessor(void *ptr,int state)
{
    if (state & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipElementColorProcessor *>(ptr);
    else
        delete reinterpret_cast<ElementColorProcessor *>(ptr);
}


extern "C" {static void dealloc_ElementColorProcessor(sipWrapper *);}
static void dealloc_ElementColorProcessor(sipWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipElementColorProcessor *>(sipSelf->u.cppPtr)->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_ElementColorProcessor(sipSelf->u.cppPtr,sipSelf->flags);
    }
}


extern "C" {static void *init_ElementColorProcessor(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_ElementColorProcessor(sipWrapper *sipSelf,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    sipElementColorProcessor *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            sipCpp = new sipElementColorProcessor();
        }
    }

    if (!sipCpp)
    {
        const ElementColorProcessor * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_ElementColorProcessor,&a0))
        {
            try
            {
            sipCpp = new sipElementColorProcessor(*a0);
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


extern "C" {static void *forceConvertTo_ElementColorProcessor(PyObject *, int *);}
static void *forceConvertTo_ElementColorProcessor(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_ElementColorProcessor))
        return sipConvertToCpp(valobj,sipClass_ElementColorProcessor,iserrp);

    sipBadClass(sipNm_BALL_ElementColorProcessor);

    *iserrp = 1;

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedClassDef supers_ElementColorProcessor[] = {{15, 255, 1}};


static PyMethodDef methods_ElementColorProcessor[] = {
    {sipNm_BALL_getColor, meth_ElementColorProcessor_getColor, METH_VARARGS, NULL},
    {sipNm_BALL_setTransparency, meth_ElementColorProcessor_setTransparency, METH_VARARGS, NULL}
};


sipTypeDef sipType_BALL_ElementColorProcessor = {
    0,
    0,
    "BALL.ElementColorProcessor",
    0,
    {0, 0, 1},
    supers_ElementColorProcessor,
    0,
    2, methods_ElementColorProcessor,
    0, 0,
    0,
    init_ElementColorProcessor,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_ElementColorProcessor,
    cast_ElementColorProcessor,
    release_ElementColorProcessor,
    forceConvertTo_ElementColorProcessor,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
