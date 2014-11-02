/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLColorExtension2.h"

#include "sipBALLColorExtension2.h"
#include "sipBALLColorRGBA.h"


sipColorExtension2::sipColorExtension2() throw(): ColorExtension2(), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,1);
}

sipColorExtension2::sipColorExtension2(const ColorExtension2& a0) throw(): ColorExtension2(a0), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,1);
}

sipColorExtension2::~sipColorExtension2() throw()
{
    sipCommonDtor(sipPySelf);
}

void sipColorExtension2::clear() throw()
{
    extern void sipVH_BALL_0(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipNm_BALL_clear);

    if (!meth)
    {
        ColorExtension2::clear();
        return;
    }

    sipVH_BALL_0(sipGILState,meth);
}


extern "C" {static PyObject *meth_ColorExtension2_clear(PyObject *, PyObject *);}
static PyObject *meth_ColorExtension2_clear(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        ColorExtension2 *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_ColorExtension2,&sipCpp))
        {
            (sipSelfWasArg ? sipCpp->ColorExtension2::clear() : sipCpp->clear());

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_ColorExtension2,sipNm_BALL_clear);

    return NULL;
}


extern "C" {static PyObject *meth_ColorExtension2_set(PyObject *, PyObject *);}
static PyObject *meth_ColorExtension2_set(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const ColorExtension2 * a0;
        ColorExtension2 *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_ColorExtension2,&sipCpp,sipClass_ColorExtension2,&a0))
        {
            sipCpp->set(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_ColorExtension2,sipNm_BALL_set);

    return NULL;
}


extern "C" {static PyObject *meth_ColorExtension2_swap(PyObject *, PyObject *);}
static PyObject *meth_ColorExtension2_swap(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        ColorExtension2 * a0;
        ColorExtension2 *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_ColorExtension2,&sipCpp,sipClass_ColorExtension2,&a0))
        {
            sipCpp->swap(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_ColorExtension2,sipNm_BALL_swap);

    return NULL;
}


extern "C" {static PyObject *meth_ColorExtension2_setColor2(PyObject *, PyObject *);}
static PyObject *meth_ColorExtension2_setColor2(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const ColorRGBA * a0;
        ColorExtension2 *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_ColorExtension2,&sipCpp,sipClass_ColorRGBA,&a0))
        {
            sipCpp->setColor2(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_ColorExtension2,sipNm_BALL_setColor2);

    return NULL;
}


extern "C" {static PyObject *meth_ColorExtension2_getColor2(PyObject *, PyObject *);}
static PyObject *meth_ColorExtension2_getColor2(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        ColorExtension2 *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_ColorExtension2,&sipCpp))
        {
            ColorRGBA *sipRes;

            sipRes = &sipCpp->getColor2();

            return sipConvertFromInstance(sipRes,sipClass_ColorRGBA,NULL);
        }
    }

    {
        ColorRGBA * a0;
        ColorExtension2 *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_ColorExtension2,&sipCpp,sipClass_ColorRGBA,&a0))
        {
            sipCpp->getColor2(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_ColorExtension2,sipNm_BALL_getColor2);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_ColorExtension2(void *, sipWrapperType *);}
static void *cast_ColorExtension2(void *ptr,sipWrapperType *targetClass)
{
    if (targetClass == sipClass_ColorExtension2)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_ColorExtension2(void *, int);}
static void release_ColorExtension2(void *ptr,int state)
{
    if (state & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipColorExtension2 *>(ptr);
    else
        delete reinterpret_cast<ColorExtension2 *>(ptr);
}


extern "C" {static void dealloc_ColorExtension2(sipWrapper *);}
static void dealloc_ColorExtension2(sipWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipColorExtension2 *>(sipSelf->u.cppPtr)->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_ColorExtension2(sipSelf->u.cppPtr,sipSelf->flags);
    }
}


extern "C" {static void *init_ColorExtension2(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_ColorExtension2(sipWrapper *sipSelf,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    sipColorExtension2 *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            sipCpp = new sipColorExtension2();
        }
    }

    if (!sipCpp)
    {
        const ColorExtension2 * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_ColorExtension2,&a0))
        {
            sipCpp = new sipColorExtension2(*a0);
        }
    }

    if (sipCpp)
        sipCpp->sipPySelf = sipSelf;

    return sipCpp;
}


extern "C" {static void *forceConvertTo_ColorExtension2(PyObject *, int *);}
static void *forceConvertTo_ColorExtension2(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_ColorExtension2))
        return sipConvertToCpp(valobj,sipClass_ColorExtension2,iserrp);

    sipBadClass(sipNm_BALL_ColorExtension2);

    *iserrp = 1;

    return NULL;
}


static PyMethodDef methods_ColorExtension2[] = {
    {sipNm_BALL_clear, meth_ColorExtension2_clear, METH_VARARGS, NULL},
    {sipNm_BALL_getColor2, meth_ColorExtension2_getColor2, METH_VARARGS, NULL},
    {sipNm_BALL_set, meth_ColorExtension2_set, METH_VARARGS, NULL},
    {sipNm_BALL_setColor2, meth_ColorExtension2_setColor2, METH_VARARGS, NULL},
    {sipNm_BALL_swap, meth_ColorExtension2_swap, METH_VARARGS, NULL}
};


sipTypeDef sipType_BALL_ColorExtension2 = {
    0,
    0,
    "BALL.ColorExtension2",
    0,
    {0, 0, 1},
    0,
    0,
    5, methods_ColorExtension2,
    0, 0,
    0,
    init_ColorExtension2,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_ColorExtension2,
    cast_ColorExtension2,
    release_ColorExtension2,
    forceConvertTo_ColorExtension2,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
