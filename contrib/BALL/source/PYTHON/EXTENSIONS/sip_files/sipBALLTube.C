/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLTube.h"

#include "sipBALLGeometricObject.h"
#include "sipBALLVertex2.h"
#include "sipBALLTube.h"
#include "sipBALLColorRGBA.h"
#include "sipBALLColorUnit.h"
#include "sipBALLComposite.h"
#include "sipBALLVector3.h"


sipTube::sipTube() throw(): Tube(), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,2);
}

sipTube::sipTube(const Tube& a0) throw(): Tube(a0), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,2);
}

sipTube::~sipTube() throw()
{
    sipCommonDtor(sipPySelf);
}

void sipTube::clear() throw()
{
    extern void sipVH_BALL_0(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipNm_BALL_clear);

    if (!meth)
    {
        Tube::clear();
        return;
    }

    sipVH_BALL_0(sipGILState,meth);
}

bool sipTube::isValid() const throw()
{
    extern bool sipVH_BALL_4(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<sipMethodCache *>(&sipPyMethods[1]),sipPySelf,NULL,sipNm_BALL_isValid);

    if (!meth)
        return Tube::isValid();

    return sipVH_BALL_4(sipGILState,meth);
}


extern "C" {static PyObject *meth_Tube_getRadius(PyObject *, PyObject *);}
static PyObject *meth_Tube_getRadius(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Tube *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Tube,&sipCpp))
        {
            float sipRes;

            sipRes = sipCpp->getRadius();

            return PyFloat_FromDouble((double)sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Tube,sipNm_BALL_getRadius);

    return NULL;
}


extern "C" {static PyObject *meth_Tube_isValid(PyObject *, PyObject *);}
static PyObject *meth_Tube_isValid(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        Tube *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Tube,&sipCpp))
        {
            bool sipRes;

            sipRes = (sipSelfWasArg ? sipCpp->Tube::isValid() : sipCpp->isValid());

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Tube,sipNm_BALL_isValid);

    return NULL;
}


extern "C" {static PyObject *meth_Tube_getLength(PyObject *, PyObject *);}
static PyObject *meth_Tube_getLength(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Tube *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Tube,&sipCpp))
        {
            float sipRes;

            sipRes = sipCpp->getLength();

            return PyFloat_FromDouble((double)sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Tube,sipNm_BALL_getLength);

    return NULL;
}


extern "C" {static PyObject *meth_Tube_getSquareLength(PyObject *, PyObject *);}
static PyObject *meth_Tube_getSquareLength(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Tube *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Tube,&sipCpp))
        {
            float sipRes;

            sipRes = sipCpp->getSquareLength();

            return PyFloat_FromDouble((double)sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Tube,sipNm_BALL_getSquareLength);

    return NULL;
}


extern "C" {static PyObject *meth_Tube_clear(PyObject *, PyObject *);}
static PyObject *meth_Tube_clear(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        Tube *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Tube,&sipCpp))
        {
            (sipSelfWasArg ? sipCpp->Tube::clear() : sipCpp->clear());

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Tube,sipNm_BALL_clear);

    return NULL;
}


extern "C" {static PyObject *meth_Tube_set(PyObject *, PyObject *);}
static PyObject *meth_Tube_set(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const Tube * a0;
        Tube *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_Tube,&sipCpp,sipClass_Tube,&a0))
        {
            sipCpp->set(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Tube,sipNm_BALL_set);

    return NULL;
}


extern "C" {static PyObject *meth_Tube_setRadius(PyObject *, PyObject *);}
static PyObject *meth_Tube_setRadius(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        float a0;
        Tube *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bf",&sipSelf,sipClass_Tube,&sipCpp,&a0))
        {
            sipCpp->setRadius(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Tube,sipNm_BALL_setRadius);

    return NULL;
}


extern "C" {static PyObject *meth_Tube_swap(PyObject *, PyObject *);}
static PyObject *meth_Tube_swap(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Tube * a0;
        Tube *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_Tube,&sipCpp,sipClass_Tube,&a0))
        {
            sipCpp->swap(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Tube,sipNm_BALL_swap);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_Tube(void *, sipWrapperType *);}
static void *cast_Tube(void *ptr,sipWrapperType *targetClass)
{
    void *res;

    if (targetClass == sipClass_Tube)
        return ptr;

    if ((res = sipCast_GeometricObject((GeometricObject *)(Tube *)ptr,targetClass)) != NULL)
        return res;

    if ((res = sipCast_Vertex2((Vertex2 *)(Tube *)ptr,targetClass)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_Tube(void *, int);}
static void release_Tube(void *ptr,int state)
{
    if (state & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipTube *>(ptr);
    else
        delete reinterpret_cast<Tube *>(ptr);
}


extern "C" {static void dealloc_Tube(sipWrapper *);}
static void dealloc_Tube(sipWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipTube *>(sipSelf->u.cppPtr)->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_Tube(sipSelf->u.cppPtr,sipSelf->flags);
    }
}


extern "C" {static void *init_Tube(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_Tube(sipWrapper *sipSelf,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    sipTube *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            sipCpp = new sipTube();
        }
    }

    if (!sipCpp)
    {
        const Tube * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_Tube,&a0))
        {
            sipCpp = new sipTube(*a0);
        }
    }

    if (sipCpp)
        sipCpp->sipPySelf = sipSelf;

    return sipCpp;
}


extern "C" {static void *forceConvertTo_Tube(PyObject *, int *);}
static void *forceConvertTo_Tube(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_Tube))
        return sipConvertToCpp(valobj,sipClass_Tube,iserrp);

    sipBadClass(sipNm_BALL_Tube);

    *iserrp = 1;

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedClassDef supers_Tube[] = {{41, 255, 0}, {35, 255, 1}};


static PyMethodDef methods_Tube[] = {
    {sipNm_BALL_clear, meth_Tube_clear, METH_VARARGS, NULL},
    {sipNm_BALL_getLength, meth_Tube_getLength, METH_VARARGS, NULL},
    {sipNm_BALL_getRadius, meth_Tube_getRadius, METH_VARARGS, NULL},
    {sipNm_BALL_getSquareLength, meth_Tube_getSquareLength, METH_VARARGS, NULL},
    {sipNm_BALL_isValid, meth_Tube_isValid, METH_VARARGS, NULL},
    {sipNm_BALL_set, meth_Tube_set, METH_VARARGS, NULL},
    {sipNm_BALL_setRadius, meth_Tube_setRadius, METH_VARARGS, NULL},
    {sipNm_BALL_swap, meth_Tube_swap, METH_VARARGS, NULL}
};


sipTypeDef sipType_BALL_Tube = {
    0,
    SIP_TYPE_SCC,
    "BALL.Tube",
    0,
    {0, 0, 1},
    supers_Tube,
    0,
    8, methods_Tube,
    0, 0,
    0,
    init_Tube,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_Tube,
    cast_Tube,
    release_Tube,
    forceConvertTo_Tube,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
