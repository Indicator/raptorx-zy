/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLTwoColoredTube.h"

#include "sipBALLGeometricObject.h"
#include "sipBALLColorExtension2.h"
#include "sipBALLVertex2.h"
#include "sipBALLTwoColoredTube.h"
#include "sipBALLVector3.h"
#include "sipBALLColorRGBA.h"
#include "sipBALLColorUnit.h"
#include "sipBALLComposite.h"


sipTwoColoredTube::sipTwoColoredTube() throw(): TwoColoredTube(), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,2);
}

sipTwoColoredTube::sipTwoColoredTube(const TwoColoredTube& a0) throw(): TwoColoredTube(a0), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,2);
}

sipTwoColoredTube::~sipTwoColoredTube() throw()
{
    sipCommonDtor(sipPySelf);
}

void sipTwoColoredTube::clear() throw()
{
    extern void sipVH_BALL_0(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipNm_BALL_clear);

    if (!meth)
    {
        TwoColoredTube::clear();
        return;
    }

    sipVH_BALL_0(sipGILState,meth);
}

bool sipTwoColoredTube::isValid() const throw()
{
    extern bool sipVH_BALL_4(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<sipMethodCache *>(&sipPyMethods[1]),sipPySelf,NULL,sipNm_BALL_isValid);

    if (!meth)
        return TwoColoredTube::isValid();

    return sipVH_BALL_4(sipGILState,meth);
}


extern "C" {static PyObject *meth_TwoColoredTube_getMiddleVertex(PyObject *, PyObject *);}
static PyObject *meth_TwoColoredTube_getMiddleVertex(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        TwoColoredTube *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_TwoColoredTube,&sipCpp))
        {
            Vector3 *sipRes;

            sipRes = new Vector3(sipCpp->getMiddleVertex());

            return sipConvertFromNewInstance(sipRes,sipClass_Vector3,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_TwoColoredTube,sipNm_BALL_getMiddleVertex);

    return NULL;
}


extern "C" {static PyObject *meth_TwoColoredTube_isValid(PyObject *, PyObject *);}
static PyObject *meth_TwoColoredTube_isValid(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        TwoColoredTube *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_TwoColoredTube,&sipCpp))
        {
            bool sipRes;

            sipRes = (sipSelfWasArg ? sipCpp->TwoColoredTube::isValid() : sipCpp->isValid());

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_TwoColoredTube,sipNm_BALL_isValid);

    return NULL;
}


extern "C" {static PyObject *meth_TwoColoredTube_getLength(PyObject *, PyObject *);}
static PyObject *meth_TwoColoredTube_getLength(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        TwoColoredTube *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_TwoColoredTube,&sipCpp))
        {
            float sipRes;

            sipRes = sipCpp->getLength();

            return PyFloat_FromDouble((double)sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_TwoColoredTube,sipNm_BALL_getLength);

    return NULL;
}


extern "C" {static PyObject *meth_TwoColoredTube_getRadius(PyObject *, PyObject *);}
static PyObject *meth_TwoColoredTube_getRadius(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        TwoColoredTube *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_TwoColoredTube,&sipCpp))
        {
            float sipRes;

            sipRes = sipCpp->getRadius();

            return PyFloat_FromDouble((double)sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_TwoColoredTube,sipNm_BALL_getRadius);

    return NULL;
}


extern "C" {static PyObject *meth_TwoColoredTube_clear(PyObject *, PyObject *);}
static PyObject *meth_TwoColoredTube_clear(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        TwoColoredTube *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_TwoColoredTube,&sipCpp))
        {
            (sipSelfWasArg ? sipCpp->TwoColoredTube::clear() : sipCpp->clear());

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_TwoColoredTube,sipNm_BALL_clear);

    return NULL;
}


extern "C" {static PyObject *meth_TwoColoredTube_set(PyObject *, PyObject *);}
static PyObject *meth_TwoColoredTube_set(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const TwoColoredTube * a0;
        TwoColoredTube *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_TwoColoredTube,&sipCpp,sipClass_TwoColoredTube,&a0))
        {
            sipCpp->set(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_TwoColoredTube,sipNm_BALL_set);

    return NULL;
}


extern "C" {static PyObject *meth_TwoColoredTube_setRadius(PyObject *, PyObject *);}
static PyObject *meth_TwoColoredTube_setRadius(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        float a0;
        TwoColoredTube *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bf",&sipSelf,sipClass_TwoColoredTube,&sipCpp,&a0))
        {
            sipCpp->setRadius(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_TwoColoredTube,sipNm_BALL_setRadius);

    return NULL;
}


extern "C" {static PyObject *meth_TwoColoredTube_swap(PyObject *, PyObject *);}
static PyObject *meth_TwoColoredTube_swap(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        TwoColoredTube * a0;
        TwoColoredTube *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_TwoColoredTube,&sipCpp,sipClass_TwoColoredTube,&a0))
        {
            sipCpp->swap(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_TwoColoredTube,sipNm_BALL_swap);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_TwoColoredTube(void *, sipWrapperType *);}
static void *cast_TwoColoredTube(void *ptr,sipWrapperType *targetClass)
{
    void *res;

    if (targetClass == sipClass_TwoColoredTube)
        return ptr;

    if ((res = sipCast_GeometricObject((GeometricObject *)(TwoColoredTube *)ptr,targetClass)) != NULL)
        return res;

    if ((res = sipCast_ColorExtension2((ColorExtension2 *)(TwoColoredTube *)ptr,targetClass)) != NULL)
        return res;

    if ((res = sipCast_Vertex2((Vertex2 *)(TwoColoredTube *)ptr,targetClass)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_TwoColoredTube(void *, int);}
static void release_TwoColoredTube(void *ptr,int state)
{
    if (state & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipTwoColoredTube *>(ptr);
    else
        delete reinterpret_cast<TwoColoredTube *>(ptr);
}


extern "C" {static void dealloc_TwoColoredTube(sipWrapper *);}
static void dealloc_TwoColoredTube(sipWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipTwoColoredTube *>(sipSelf->u.cppPtr)->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_TwoColoredTube(sipSelf->u.cppPtr,sipSelf->flags);
    }
}


extern "C" {static void *init_TwoColoredTube(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_TwoColoredTube(sipWrapper *sipSelf,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    sipTwoColoredTube *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            sipCpp = new sipTwoColoredTube();
        }
    }

    if (!sipCpp)
    {
        const TwoColoredTube * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_TwoColoredTube,&a0))
        {
            sipCpp = new sipTwoColoredTube(*a0);
        }
    }

    if (sipCpp)
        sipCpp->sipPySelf = sipSelf;

    return sipCpp;
}


extern "C" {static void *forceConvertTo_TwoColoredTube(PyObject *, int *);}
static void *forceConvertTo_TwoColoredTube(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_TwoColoredTube))
        return sipConvertToCpp(valobj,sipClass_TwoColoredTube,iserrp);

    sipBadClass(sipNm_BALL_TwoColoredTube);

    *iserrp = 1;

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedClassDef supers_TwoColoredTube[] = {{41, 255, 0}, {34, 255, 0}, {35, 255, 1}};


static PyMethodDef methods_TwoColoredTube[] = {
    {sipNm_BALL_clear, meth_TwoColoredTube_clear, METH_VARARGS, NULL},
    {sipNm_BALL_getLength, meth_TwoColoredTube_getLength, METH_VARARGS, NULL},
    {sipNm_BALL_getMiddleVertex, meth_TwoColoredTube_getMiddleVertex, METH_VARARGS, NULL},
    {sipNm_BALL_getRadius, meth_TwoColoredTube_getRadius, METH_VARARGS, NULL},
    {sipNm_BALL_isValid, meth_TwoColoredTube_isValid, METH_VARARGS, NULL},
    {sipNm_BALL_set, meth_TwoColoredTube_set, METH_VARARGS, NULL},
    {sipNm_BALL_setRadius, meth_TwoColoredTube_setRadius, METH_VARARGS, NULL},
    {sipNm_BALL_swap, meth_TwoColoredTube_swap, METH_VARARGS, NULL}
};


sipTypeDef sipType_BALL_TwoColoredTube = {
    0,
    SIP_TYPE_SCC,
    "BALL.TwoColoredTube",
    0,
    {0, 0, 1},
    supers_TwoColoredTube,
    0,
    8, methods_TwoColoredTube,
    0, 0,
    0,
    init_TwoColoredTube,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_TwoColoredTube,
    cast_TwoColoredTube,
    release_TwoColoredTube,
    forceConvertTo_TwoColoredTube,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
