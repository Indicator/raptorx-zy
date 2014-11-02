/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLEmbeddable.h"

#include "sipBALLEmbeddable.h"


sipEmbeddable::sipEmbeddable(): Embeddable(), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,1);
}

sipEmbeddable::sipEmbeddable(const Embeddable& a0): Embeddable(a0), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,1);
}

sipEmbeddable::~sipEmbeddable() throw()
{
    sipCommonDtor(sipPySelf);
}

void sipEmbeddable::registerThis() throw()
{
    extern void sipVH_BALL_0(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipNm_BALL_registerThis);

    if (!meth)
    {
        Embeddable::registerThis();
        return;
    }

    sipVH_BALL_0(sipGILState,meth);
}


extern "C" {static PyObject *meth_Embeddable_unregisterThis(PyObject *, PyObject *);}
static PyObject *meth_Embeddable_unregisterThis(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Embeddable *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Embeddable,&sipCpp))
        {
            sipCpp->unregisterThis();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Embeddable,sipNm_BALL_unregisterThis);

    return NULL;
}


extern "C" {static PyObject *meth_Embeddable_registerThis(PyObject *, PyObject *);}
static PyObject *meth_Embeddable_registerThis(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        Embeddable *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Embeddable,&sipCpp))
        {
            (sipSelfWasArg ? sipCpp->Embeddable::registerThis() : sipCpp->registerThis());

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Embeddable,sipNm_BALL_registerThis);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_Embeddable(void *, sipWrapperType *);}
static void *cast_Embeddable(void *ptr,sipWrapperType *targetClass)
{
    if (targetClass == sipClass_Embeddable)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_Embeddable(void *, int);}
static void release_Embeddable(void *ptr,int state)
{
    if (state & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipEmbeddable *>(ptr);
    else
        delete reinterpret_cast<Embeddable *>(ptr);
}


extern "C" {static void dealloc_Embeddable(sipWrapper *);}
static void dealloc_Embeddable(sipWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipEmbeddable *>(sipSelf->u.cppPtr)->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_Embeddable(sipSelf->u.cppPtr,sipSelf->flags);
    }
}


extern "C" {static void *init_Embeddable(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_Embeddable(sipWrapper *sipSelf,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    sipEmbeddable *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            try
            {
            sipCpp = new sipEmbeddable();
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
        const Embeddable * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_Embeddable,&a0))
        {
            try
            {
            sipCpp = new sipEmbeddable(*a0);
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


extern "C" {static void *forceConvertTo_Embeddable(PyObject *, int *);}
static void *forceConvertTo_Embeddable(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_Embeddable))
        return sipConvertToCpp(valobj,sipClass_Embeddable,iserrp);

    sipBadClass(sipNm_BALL_Embeddable);

    *iserrp = 1;

    return NULL;
}


static PyMethodDef methods_Embeddable[] = {
    {sipNm_BALL_registerThis, meth_Embeddable_registerThis, METH_VARARGS, NULL},
    {sipNm_BALL_unregisterThis, meth_Embeddable_unregisterThis, METH_VARARGS, NULL}
};


sipTypeDef sipType_BALL_Embeddable = {
    0,
    0,
    "BALL.Embeddable",
    0,
    {0, 0, 1},
    0,
    0,
    2, methods_Embeddable,
    0, 0,
    0,
    init_Embeddable,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_Embeddable,
    cast_Embeddable,
    release_Embeddable,
    forceConvertTo_Embeddable,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
