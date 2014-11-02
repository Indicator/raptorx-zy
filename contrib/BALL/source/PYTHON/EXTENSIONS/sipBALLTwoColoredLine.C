/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLTwoColoredLine.h"

#include "sipBALLGeometricObject.h"
#include "sipBALLColorExtension2.h"
#include "sipBALLVertex2.h"
#include "sipBALLTwoColoredLine.h"
#include "sipBALLVector3.h"
#include "sipBALLColorRGBA.h"
#include "sipBALLColorUnit.h"
#include "sipBALLComposite.h"


sipTwoColoredLine::sipTwoColoredLine() throw(): TwoColoredLine(), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,2);
}

sipTwoColoredLine::sipTwoColoredLine(const TwoColoredLine& a0) throw(): TwoColoredLine(a0), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,2);
}

sipTwoColoredLine::~sipTwoColoredLine() throw()
{
    sipCommonDtor(sipPySelf);
}

void sipTwoColoredLine::clear() throw()
{
    extern void sipVH_BALL_0(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipNm_BALL_clear);

    if (!meth)
    {
        TwoColoredLine::clear();
        return;
    }

    sipVH_BALL_0(sipGILState,meth);
}

bool sipTwoColoredLine::isValid() const throw()
{
    extern bool sipVH_BALL_4(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<sipMethodCache *>(&sipPyMethods[1]),sipPySelf,NULL,sipNm_BALL_isValid);

    if (!meth)
        return TwoColoredLine::isValid();

    return sipVH_BALL_4(sipGILState,meth);
}


extern "C" {static PyObject *meth_TwoColoredLine_getMiddleVertex(PyObject *, PyObject *);}
static PyObject *meth_TwoColoredLine_getMiddleVertex(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        TwoColoredLine *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_TwoColoredLine,&sipCpp))
        {
            Vector3 *sipRes;

            sipRes = new Vector3(sipCpp->getMiddleVertex());

            return sipConvertFromNewInstance(sipRes,sipClass_Vector3,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_TwoColoredLine,sipNm_BALL_getMiddleVertex);

    return NULL;
}


extern "C" {static PyObject *meth_TwoColoredLine_isValid(PyObject *, PyObject *);}
static PyObject *meth_TwoColoredLine_isValid(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        TwoColoredLine *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_TwoColoredLine,&sipCpp))
        {
            bool sipRes;

            sipRes = (sipSelfWasArg ? sipCpp->TwoColoredLine::isValid() : sipCpp->isValid());

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_TwoColoredLine,sipNm_BALL_isValid);

    return NULL;
}


extern "C" {static PyObject *meth_TwoColoredLine_clear(PyObject *, PyObject *);}
static PyObject *meth_TwoColoredLine_clear(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        TwoColoredLine *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_TwoColoredLine,&sipCpp))
        {
            (sipSelfWasArg ? sipCpp->TwoColoredLine::clear() : sipCpp->clear());

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_TwoColoredLine,sipNm_BALL_clear);

    return NULL;
}


extern "C" {static PyObject *meth_TwoColoredLine_set(PyObject *, PyObject *);}
static PyObject *meth_TwoColoredLine_set(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const TwoColoredLine * a0;
        TwoColoredLine *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_TwoColoredLine,&sipCpp,sipClass_TwoColoredLine,&a0))
        {
            sipCpp->set(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_TwoColoredLine,sipNm_BALL_set);

    return NULL;
}


extern "C" {static PyObject *meth_TwoColoredLine_swap(PyObject *, PyObject *);}
static PyObject *meth_TwoColoredLine_swap(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        TwoColoredLine * a0;
        TwoColoredLine *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_TwoColoredLine,&sipCpp,sipClass_TwoColoredLine,&a0))
        {
            sipCpp->swap(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_TwoColoredLine,sipNm_BALL_swap);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_TwoColoredLine(void *, sipWrapperType *);}
static void *cast_TwoColoredLine(void *ptr,sipWrapperType *targetClass)
{
    void *res;

    if (targetClass == sipClass_TwoColoredLine)
        return ptr;

    if ((res = sipCast_GeometricObject((GeometricObject *)(TwoColoredLine *)ptr,targetClass)) != NULL)
        return res;

    if ((res = sipCast_ColorExtension2((ColorExtension2 *)(TwoColoredLine *)ptr,targetClass)) != NULL)
        return res;

    if ((res = sipCast_Vertex2((Vertex2 *)(TwoColoredLine *)ptr,targetClass)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_TwoColoredLine(void *, int);}
static void release_TwoColoredLine(void *ptr,int state)
{
    if (state & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipTwoColoredLine *>(ptr);
    else
        delete reinterpret_cast<TwoColoredLine *>(ptr);
}


extern "C" {static void dealloc_TwoColoredLine(sipWrapper *);}
static void dealloc_TwoColoredLine(sipWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipTwoColoredLine *>(sipSelf->u.cppPtr)->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_TwoColoredLine(sipSelf->u.cppPtr,sipSelf->flags);
    }
}


extern "C" {static void *init_TwoColoredLine(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_TwoColoredLine(sipWrapper *sipSelf,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    sipTwoColoredLine *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            sipCpp = new sipTwoColoredLine();
        }
    }

    if (!sipCpp)
    {
        const TwoColoredLine * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_TwoColoredLine,&a0))
        {
            sipCpp = new sipTwoColoredLine(*a0);
        }
    }

    if (sipCpp)
        sipCpp->sipPySelf = sipSelf;

    return sipCpp;
}


extern "C" {static void *forceConvertTo_TwoColoredLine(PyObject *, int *);}
static void *forceConvertTo_TwoColoredLine(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_TwoColoredLine))
        return sipConvertToCpp(valobj,sipClass_TwoColoredLine,iserrp);

    sipBadClass(sipNm_BALL_TwoColoredLine);

    *iserrp = 1;

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedClassDef supers_TwoColoredLine[] = {{41, 255, 0}, {34, 255, 0}, {35, 255, 1}};


static PyMethodDef methods_TwoColoredLine[] = {
    {sipNm_BALL_clear, meth_TwoColoredLine_clear, METH_VARARGS, NULL},
    {sipNm_BALL_getMiddleVertex, meth_TwoColoredLine_getMiddleVertex, METH_VARARGS, NULL},
    {sipNm_BALL_isValid, meth_TwoColoredLine_isValid, METH_VARARGS, NULL},
    {sipNm_BALL_set, meth_TwoColoredLine_set, METH_VARARGS, NULL},
    {sipNm_BALL_swap, meth_TwoColoredLine_swap, METH_VARARGS, NULL}
};


sipTypeDef sipType_BALL_TwoColoredLine = {
    0,
    SIP_TYPE_SCC,
    "BALL.TwoColoredLine",
    0,
    {0, 0, 1},
    supers_TwoColoredLine,
    0,
    5, methods_TwoColoredLine,
    0, 0,
    0,
    init_TwoColoredLine,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_TwoColoredLine,
    cast_TwoColoredLine,
    release_TwoColoredLine,
    forceConvertTo_TwoColoredLine,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
