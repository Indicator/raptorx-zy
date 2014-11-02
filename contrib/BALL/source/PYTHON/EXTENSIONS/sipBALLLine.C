/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLLine.h"

#include "sipBALLGeometricObject.h"
#include "sipBALLVertex2.h"
#include "sipBALLLine.h"
#include "sipBALLColorRGBA.h"
#include "sipBALLColorUnit.h"
#include "sipBALLComposite.h"
#include "sipBALLVector3.h"


sipLine::sipLine() throw(): Line(), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,2);
}

sipLine::sipLine(const Line& a0) throw(): Line(a0), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,2);
}

sipLine::~sipLine() throw()
{
    sipCommonDtor(sipPySelf);
}

void sipLine::clear() throw()
{
    extern void sipVH_BALL_0(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipNm_BALL_clear);

    if (!meth)
    {
        Line::clear();
        return;
    }

    sipVH_BALL_0(sipGILState,meth);
}

bool sipLine::isValid() const throw()
{
    extern bool sipVH_BALL_4(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<sipMethodCache *>(&sipPyMethods[1]),sipPySelf,NULL,sipNm_BALL_isValid);

    if (!meth)
        return Line::isValid();

    return sipVH_BALL_4(sipGILState,meth);
}


extern "C" {static PyObject *meth_Line_isValid(PyObject *, PyObject *);}
static PyObject *meth_Line_isValid(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        Line *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Line,&sipCpp))
        {
            bool sipRes;

            sipRes = (sipSelfWasArg ? sipCpp->Line::isValid() : sipCpp->isValid());

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Line,sipNm_BALL_isValid);

    return NULL;
}


extern "C" {static PyObject *meth_Line_clear(PyObject *, PyObject *);}
static PyObject *meth_Line_clear(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        Line *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Line,&sipCpp))
        {
            (sipSelfWasArg ? sipCpp->Line::clear() : sipCpp->clear());

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Line,sipNm_BALL_clear);

    return NULL;
}


extern "C" {static PyObject *meth_Line_set(PyObject *, PyObject *);}
static PyObject *meth_Line_set(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const Line * a0;
        Line *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_Line,&sipCpp,sipClass_Line,&a0))
        {
            sipCpp->set(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Line,sipNm_BALL_set);

    return NULL;
}


extern "C" {static PyObject *meth_Line_swap(PyObject *, PyObject *);}
static PyObject *meth_Line_swap(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Line * a0;
        Line *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_Line,&sipCpp,sipClass_Line,&a0))
        {
            sipCpp->swap(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Line,sipNm_BALL_swap);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_Line(void *, sipWrapperType *);}
static void *cast_Line(void *ptr,sipWrapperType *targetClass)
{
    void *res;

    if (targetClass == sipClass_Line)
        return ptr;

    if ((res = sipCast_GeometricObject((GeometricObject *)(Line *)ptr,targetClass)) != NULL)
        return res;

    if ((res = sipCast_Vertex2((Vertex2 *)(Line *)ptr,targetClass)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_Line(void *, int);}
static void release_Line(void *ptr,int state)
{
    if (state & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipLine *>(ptr);
    else
        delete reinterpret_cast<Line *>(ptr);
}


extern "C" {static void dealloc_Line(sipWrapper *);}
static void dealloc_Line(sipWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipLine *>(sipSelf->u.cppPtr)->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_Line(sipSelf->u.cppPtr,sipSelf->flags);
    }
}


extern "C" {static void *init_Line(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_Line(sipWrapper *sipSelf,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    sipLine *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            sipCpp = new sipLine();
        }
    }

    if (!sipCpp)
    {
        const Line * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_Line,&a0))
        {
            sipCpp = new sipLine(*a0);
        }
    }

    if (sipCpp)
        sipCpp->sipPySelf = sipSelf;

    return sipCpp;
}


extern "C" {static void *forceConvertTo_Line(PyObject *, int *);}
static void *forceConvertTo_Line(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_Line))
        return sipConvertToCpp(valobj,sipClass_Line,iserrp);

    sipBadClass(sipNm_BALL_Line);

    *iserrp = 1;

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedClassDef supers_Line[] = {{41, 255, 0}, {35, 255, 1}};


static PyMethodDef methods_Line[] = {
    {sipNm_BALL_clear, meth_Line_clear, METH_VARARGS, NULL},
    {sipNm_BALL_isValid, meth_Line_isValid, METH_VARARGS, NULL},
    {sipNm_BALL_set, meth_Line_set, METH_VARARGS, NULL},
    {sipNm_BALL_swap, meth_Line_swap, METH_VARARGS, NULL}
};


sipTypeDef sipType_BALL_Line = {
    0,
    SIP_TYPE_SCC,
    "BALL.Line",
    0,
    {0, 0, 1},
    supers_Line,
    0,
    4, methods_Line,
    0, 0,
    0,
    init_Line,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_Line,
    cast_Line,
    release_Line,
    forceConvertTo_Line,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
