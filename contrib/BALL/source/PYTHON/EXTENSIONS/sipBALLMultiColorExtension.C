/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLMultiColorExtension.h"

#include "sipBALLMultiColorExtension.h"


sipMultiColorExtension::sipMultiColorExtension() throw(): MultiColorExtension(), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,1);
}

sipMultiColorExtension::sipMultiColorExtension(const MultiColorExtension& a0) throw(): MultiColorExtension(a0), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,1);
}

sipMultiColorExtension::~sipMultiColorExtension() throw()
{
    sipCommonDtor(sipPySelf);
}

void sipMultiColorExtension::clear() throw()
{
    extern void sipVH_BALL_0(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipNm_BALL_clear);

    if (!meth)
    {
        MultiColorExtension::clear();
        return;
    }

    sipVH_BALL_0(sipGILState,meth);
}


extern "C" {static PyObject *meth_MultiColorExtension_clear(PyObject *, PyObject *);}
static PyObject *meth_MultiColorExtension_clear(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        MultiColorExtension *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_MultiColorExtension,&sipCpp))
        {
            (sipSelfWasArg ? sipCpp->MultiColorExtension::clear() : sipCpp->clear());

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_MultiColorExtension,sipNm_BALL_clear);

    return NULL;
}


extern "C" {static PyObject *meth_MultiColorExtension_set(PyObject *, PyObject *);}
static PyObject *meth_MultiColorExtension_set(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const MultiColorExtension * a0;
        MultiColorExtension *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_MultiColorExtension,&sipCpp,sipClass_MultiColorExtension,&a0))
        {
            sipCpp->set(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_MultiColorExtension,sipNm_BALL_set);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_MultiColorExtension(void *, sipWrapperType *);}
static void *cast_MultiColorExtension(void *ptr,sipWrapperType *targetClass)
{
    if (targetClass == sipClass_MultiColorExtension)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_MultiColorExtension(void *, int);}
static void release_MultiColorExtension(void *ptr,int state)
{
    if (state & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipMultiColorExtension *>(ptr);
    else
        delete reinterpret_cast<MultiColorExtension *>(ptr);
}


extern "C" {static void dealloc_MultiColorExtension(sipWrapper *);}
static void dealloc_MultiColorExtension(sipWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipMultiColorExtension *>(sipSelf->u.cppPtr)->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_MultiColorExtension(sipSelf->u.cppPtr,sipSelf->flags);
    }
}


extern "C" {static void *init_MultiColorExtension(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_MultiColorExtension(sipWrapper *sipSelf,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    sipMultiColorExtension *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            sipCpp = new sipMultiColorExtension();
        }
    }

    if (!sipCpp)
    {
        const MultiColorExtension * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_MultiColorExtension,&a0))
        {
            sipCpp = new sipMultiColorExtension(*a0);
        }
    }

    if (sipCpp)
        sipCpp->sipPySelf = sipSelf;

    return sipCpp;
}


extern "C" {static void *forceConvertTo_MultiColorExtension(PyObject *, int *);}
static void *forceConvertTo_MultiColorExtension(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_MultiColorExtension))
        return sipConvertToCpp(valobj,sipClass_MultiColorExtension,iserrp);

    sipBadClass(sipNm_BALL_MultiColorExtension);

    *iserrp = 1;

    return NULL;
}


static PyMethodDef methods_MultiColorExtension[] = {
    {sipNm_BALL_clear, meth_MultiColorExtension_clear, METH_VARARGS, NULL},
    {sipNm_BALL_set, meth_MultiColorExtension_set, METH_VARARGS, NULL}
};


sipTypeDef sipType_BALL_MultiColorExtension = {
    0,
    0,
    "BALL.MultiColorExtension",
    0,
    {0, 0, 1},
    0,
    0,
    2, methods_MultiColorExtension,
    0, 0,
    0,
    init_MultiColorExtension,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_MultiColorExtension,
    cast_MultiColorExtension,
    release_MultiColorExtension,
    forceConvertTo_MultiColorExtension,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
