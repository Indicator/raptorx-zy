/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLDisc.h"

#include "sipBALLGeometricObject.h"
#include "sipBALLCircle3.h"
#include "sipBALLDisc.h"
#include "sipBALLColorRGBA.h"
#include "sipBALLColorUnit.h"
#include "sipBALLComposite.h"


sipDisc::sipDisc() throw(): Disc(), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,2);
}

sipDisc::sipDisc(const Circle3& a0) throw(): Disc(a0), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,2);
}

sipDisc::sipDisc(const Disc& a0) throw(): Disc(a0), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,2);
}

sipDisc::~sipDisc() throw()
{
    sipCommonDtor(sipPySelf);
}

void sipDisc::clear() throw()
{
    extern void sipVH_BALL_0(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipNm_BALL_clear);

    if (!meth)
    {
        Disc::clear();
        return;
    }

    sipVH_BALL_0(sipGILState,meth);
}

bool sipDisc::isValid() const throw()
{
    extern bool sipVH_BALL_4(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<sipMethodCache *>(&sipPyMethods[1]),sipPySelf,NULL,sipNm_BALL_isValid);

    if (!meth)
        return Disc::isValid();

    return sipVH_BALL_4(sipGILState,meth);
}


extern "C" {static PyObject *meth_Disc_isValid(PyObject *, PyObject *);}
static PyObject *meth_Disc_isValid(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        Disc *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Disc,&sipCpp))
        {
            bool sipRes;

            sipRes = (sipSelfWasArg ? sipCpp->Disc::isValid() : sipCpp->isValid());

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Disc,sipNm_BALL_isValid);

    return NULL;
}


extern "C" {static PyObject *meth_Disc_getCircle(PyObject *, PyObject *);}
static PyObject *meth_Disc_getCircle(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Disc *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Disc,&sipCpp))
        {
            const Circle3 *sipRes;

            sipRes = &sipCpp->getCircle();

            return sipConvertFromInstance(const_cast<Circle3 *>(sipRes),sipClass_Circle3,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Disc,sipNm_BALL_getCircle);

    return NULL;
}


extern "C" {static PyObject *meth_Disc_clear(PyObject *, PyObject *);}
static PyObject *meth_Disc_clear(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        Disc *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Disc,&sipCpp))
        {
            (sipSelfWasArg ? sipCpp->Disc::clear() : sipCpp->clear());

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Disc,sipNm_BALL_clear);

    return NULL;
}


extern "C" {static PyObject *meth_Disc_set(PyObject *, PyObject *);}
static PyObject *meth_Disc_set(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const Disc * a0;
        Disc *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_Disc,&sipCpp,sipClass_Disc,&a0))
        {
            sipCpp->set(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Disc,sipNm_BALL_set);

    return NULL;
}


extern "C" {static PyObject *meth_Disc_setCircle(PyObject *, PyObject *);}
static PyObject *meth_Disc_setCircle(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const Circle3 * a0;
        Disc *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_Disc,&sipCpp,sipClass_Circle3,&a0))
        {
            sipCpp->setCircle(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Disc,sipNm_BALL_setCircle);

    return NULL;
}


extern "C" {static PyObject *meth_Disc_swap(PyObject *, PyObject *);}
static PyObject *meth_Disc_swap(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Disc * a0;
        Disc *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_Disc,&sipCpp,sipClass_Disc,&a0))
        {
            sipCpp->swap(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Disc,sipNm_BALL_swap);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_Disc(void *, sipWrapperType *);}
static void *cast_Disc(void *ptr,sipWrapperType *targetClass)
{
    void *res;

    if (targetClass == sipClass_Disc)
        return ptr;

    if ((res = sipCast_GeometricObject((GeometricObject *)(Disc *)ptr,targetClass)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_Disc(void *, int);}
static void release_Disc(void *ptr,int state)
{
    if (state & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipDisc *>(ptr);
    else
        delete reinterpret_cast<Disc *>(ptr);
}


extern "C" {static void dealloc_Disc(sipWrapper *);}
static void dealloc_Disc(sipWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipDisc *>(sipSelf->u.cppPtr)->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_Disc(sipSelf->u.cppPtr,sipSelf->flags);
    }
}


extern "C" {static void *init_Disc(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_Disc(sipWrapper *sipSelf,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    sipDisc *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            sipCpp = new sipDisc();
        }
    }

    if (!sipCpp)
    {
        const Circle3 * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_Circle3,&a0))
        {
            sipCpp = new sipDisc(*a0);
        }
    }

    if (!sipCpp)
    {
        const Disc * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_Disc,&a0))
        {
            sipCpp = new sipDisc(*a0);
        }
    }

    if (sipCpp)
        sipCpp->sipPySelf = sipSelf;

    return sipCpp;
}


extern "C" {static void *forceConvertTo_Disc(PyObject *, int *);}
static void *forceConvertTo_Disc(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_Disc))
        return sipConvertToCpp(valobj,sipClass_Disc,iserrp);

    sipBadClass(sipNm_BALL_Disc);

    *iserrp = 1;

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedClassDef supers_Disc[] = {{41, 255, 1}};


static PyMethodDef methods_Disc[] = {
    {sipNm_BALL_clear, meth_Disc_clear, METH_VARARGS, NULL},
    {sipNm_BALL_getCircle, meth_Disc_getCircle, METH_VARARGS, NULL},
    {sipNm_BALL_isValid, meth_Disc_isValid, METH_VARARGS, NULL},
    {sipNm_BALL_set, meth_Disc_set, METH_VARARGS, NULL},
    {sipNm_BALL_setCircle, meth_Disc_setCircle, METH_VARARGS, NULL},
    {sipNm_BALL_swap, meth_Disc_swap, METH_VARARGS, NULL}
};


sipTypeDef sipType_BALL_Disc = {
    0,
    SIP_TYPE_SCC,
    "BALL.Disc",
    0,
    {0, 0, 1},
    supers_Disc,
    0,
    6, methods_Disc,
    0, 0,
    0,
    init_Disc,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_Disc,
    cast_Disc,
    release_Disc,
    forceConvertTo_Disc,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
