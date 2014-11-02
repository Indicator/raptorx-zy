/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLSimpleBox.h"

#include "sipBALLSimpleBox3.h"
#include "sipBALLGeometricObject.h"
#include "sipBALLSimpleBox.h"
#include "sipBALLVector3.h"
#include "sipBALLColorRGBA.h"
#include "sipBALLColorUnit.h"
#include "sipBALLComposite.h"


sipSimpleBox::sipSimpleBox() throw(): SimpleBox(), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,2);
}

sipSimpleBox::sipSimpleBox(const SimpleBox& a0) throw(): SimpleBox(a0), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,2);
}

sipSimpleBox::~sipSimpleBox() throw()
{
    sipCommonDtor(sipPySelf);
}

void sipSimpleBox::clear() throw()
{
    extern void sipVH_BALL_0(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipNm_BALL_clear);

    if (!meth)
    {
        SimpleBox::clear();
        return;
    }

    sipVH_BALL_0(sipGILState,meth);
}

bool sipSimpleBox::isValid() const throw()
{
    extern bool sipVH_BALL_4(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<sipMethodCache *>(&sipPyMethods[1]),sipPySelf,NULL,sipNm_BALL_isValid);

    if (!meth)
        return SimpleBox::isValid();

    return sipVH_BALL_4(sipGILState,meth);
}


extern "C" {static PyObject *meth_SimpleBox_isValid(PyObject *, PyObject *);}
static PyObject *meth_SimpleBox_isValid(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        SimpleBox *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_SimpleBox,&sipCpp))
        {
            bool sipRes;

            sipRes = (sipSelfWasArg ? sipCpp->SimpleBox::isValid() : sipCpp->isValid());

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_SimpleBox,sipNm_BALL_isValid);

    return NULL;
}


extern "C" {static PyObject *meth_SimpleBox_clear(PyObject *, PyObject *);}
static PyObject *meth_SimpleBox_clear(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        SimpleBox *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_SimpleBox,&sipCpp))
        {
            (sipSelfWasArg ? sipCpp->SimpleBox::clear() : sipCpp->clear());

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_SimpleBox,sipNm_BALL_clear);

    return NULL;
}


extern "C" {static PyObject *meth_SimpleBox_set(PyObject *, PyObject *);}
static PyObject *meth_SimpleBox_set(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const SimpleBox * a0;
        SimpleBox *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_SimpleBox,&sipCpp,sipClass_SimpleBox,&a0))
        {
            sipCpp->set(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_SimpleBox,sipNm_BALL_set);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_SimpleBox(void *, sipWrapperType *);}
static void *cast_SimpleBox(void *ptr,sipWrapperType *targetClass)
{
    void *res;

    if (targetClass == sipClass_SimpleBox)
        return ptr;

    if ((res = sipCast_SimpleBox3((SimpleBox3 *)(SimpleBox *)ptr,targetClass)) != NULL)
        return res;

    if ((res = sipCast_GeometricObject((GeometricObject *)(SimpleBox *)ptr,targetClass)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_SimpleBox(void *, int);}
static void release_SimpleBox(void *ptr,int state)
{
    if (state & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipSimpleBox *>(ptr);
    else
        delete reinterpret_cast<SimpleBox *>(ptr);
}


extern "C" {static void dealloc_SimpleBox(sipWrapper *);}
static void dealloc_SimpleBox(sipWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipSimpleBox *>(sipSelf->u.cppPtr)->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_SimpleBox(sipSelf->u.cppPtr,sipSelf->flags);
    }
}


extern "C" {static void *init_SimpleBox(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_SimpleBox(sipWrapper *sipSelf,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    sipSimpleBox *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            sipCpp = new sipSimpleBox();
        }
    }

    if (!sipCpp)
    {
        const SimpleBox * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_SimpleBox,&a0))
        {
            sipCpp = new sipSimpleBox(*a0);
        }
    }

    if (sipCpp)
        sipCpp->sipPySelf = sipSelf;

    return sipCpp;
}


extern "C" {static void *forceConvertTo_SimpleBox(PyObject *, int *);}
static void *forceConvertTo_SimpleBox(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_SimpleBox))
        return sipConvertToCpp(valobj,sipClass_SimpleBox,iserrp);

    sipBadClass(sipNm_BALL_SimpleBox);

    *iserrp = 1;

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedClassDef supers_SimpleBox[] = {{145, 255, 0}, {41, 255, 1}};


static PyMethodDef methods_SimpleBox[] = {
    {sipNm_BALL_clear, meth_SimpleBox_clear, METH_VARARGS, NULL},
    {sipNm_BALL_isValid, meth_SimpleBox_isValid, METH_VARARGS, NULL},
    {sipNm_BALL_set, meth_SimpleBox_set, METH_VARARGS, NULL}
};


sipTypeDef sipType_BALL_SimpleBox = {
    0,
    SIP_TYPE_SCC,
    "BALL.SimpleBox",
    0,
    {0, 0, 1},
    supers_SimpleBox,
    0,
    3, methods_SimpleBox,
    0, 0,
    0,
    init_SimpleBox,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_SimpleBox,
    cast_SimpleBox,
    release_SimpleBox,
    forceConvertTo_SimpleBox,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
