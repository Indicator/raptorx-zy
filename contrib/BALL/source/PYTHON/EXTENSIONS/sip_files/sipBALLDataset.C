/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLDataset.h"

#include "sipBALLDataset.h"
#include "sipBALLComposite.h"
#include "sipBALLString.h"


sipDataset::sipDataset(): Dataset(), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,1);
}

sipDataset::sipDataset(const Dataset& a0): Dataset(a0), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,1);
}

sipDataset::~sipDataset()
{
    sipCommonDtor(sipPySelf);
}

void sipDataset::clear()
{
    extern void sipVH_BALL_0(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipNm_BALL_clear);

    if (!meth)
    {
        Dataset::clear();
        return;
    }

    sipVH_BALL_0(sipGILState,meth);
}


extern "C" {static PyObject *meth_Dataset_clear(PyObject *, PyObject *);}
static PyObject *meth_Dataset_clear(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        Dataset *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Dataset,&sipCpp))
        {
            try
            {
            (sipSelfWasArg ? sipCpp->Dataset::clear() : sipCpp->clear());
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Dataset,sipNm_BALL_clear);

    return NULL;
}


extern "C" {static PyObject *meth_Dataset_set(PyObject *, PyObject *);}
static PyObject *meth_Dataset_set(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const Dataset * a0;
        Dataset *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_Dataset,&sipCpp,sipClass_Dataset,&a0))
        {
            try
            {
            sipCpp->set(*a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Dataset,sipNm_BALL_set);

    return NULL;
}


extern "C" {static PyObject *meth_Dataset_setName(PyObject *, PyObject *);}
static PyObject *meth_Dataset_setName(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        String * a0;
        int a0State = 0;
        Dataset *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ1",&sipSelf,sipClass_Dataset,&sipCpp,sipClass_String,&a0,&a0State))
        {
            try
            {
            sipCpp->setName(*a0);
            }
            catch (...)
            {

            sipReleaseInstance(a0,sipClass_String,a0State);
                sipRaiseUnknownException();
                return NULL;
            }

            sipReleaseInstance(a0,sipClass_String,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Dataset,sipNm_BALL_setName);

    return NULL;
}


extern "C" {static PyObject *meth_Dataset_getName(PyObject *, PyObject *);}
static PyObject *meth_Dataset_getName(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Dataset *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Dataset,&sipCpp))
        {
            String *sipRes;

            try
            {
            sipRes = new String(sipCpp->getName());
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return sipConvertFromNewInstance(sipRes,sipClass_String,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Dataset,sipNm_BALL_getName);

    return NULL;
}


extern "C" {static PyObject *meth_Dataset_setType(PyObject *, PyObject *);}
static PyObject *meth_Dataset_setType(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        String * a0;
        int a0State = 0;
        Dataset *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ1",&sipSelf,sipClass_Dataset,&sipCpp,sipClass_String,&a0,&a0State))
        {
            try
            {
            sipCpp->setType(*a0);
            }
            catch (...)
            {

            sipReleaseInstance(a0,sipClass_String,a0State);
                sipRaiseUnknownException();
                return NULL;
            }

            sipReleaseInstance(a0,sipClass_String,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Dataset,sipNm_BALL_setType);

    return NULL;
}


extern "C" {static PyObject *meth_Dataset_getType(PyObject *, PyObject *);}
static PyObject *meth_Dataset_getType(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Dataset *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Dataset,&sipCpp))
        {
            String *sipRes;

            try
            {
            sipRes = new String(sipCpp->getType());
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return sipConvertFromNewInstance(sipRes,sipClass_String,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Dataset,sipNm_BALL_getType);

    return NULL;
}


extern "C" {static PyObject *meth_Dataset_setComposite(PyObject *, PyObject *);}
static PyObject *meth_Dataset_setComposite(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Composite * a0;
        Dataset *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ@",&sipSelf,sipClass_Dataset,&sipCpp,sipClass_Composite,&a0))
        {
            try
            {
            sipCpp->setComposite(a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Dataset,sipNm_BALL_setComposite);

    return NULL;
}


extern "C" {static PyObject *meth_Dataset_getComposite(PyObject *, PyObject *);}
static PyObject *meth_Dataset_getComposite(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Dataset *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Dataset,&sipCpp))
        {
            Composite *sipRes;

            try
            {
            sipRes = sipCpp->getComposite();
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return sipConvertFromInstance(sipRes,sipClass_Composite,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Dataset,sipNm_BALL_getComposite);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_Dataset(void *, sipWrapperType *);}
static void *cast_Dataset(void *ptr,sipWrapperType *targetClass)
{
    if (targetClass == sipClass_Dataset)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_Dataset(void *, int);}
static void release_Dataset(void *ptr,int state)
{
    if (state & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipDataset *>(ptr);
    else
        delete reinterpret_cast<Dataset *>(ptr);
}


extern "C" {static void dealloc_Dataset(sipWrapper *);}
static void dealloc_Dataset(sipWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipDataset *>(sipSelf->u.cppPtr)->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_Dataset(sipSelf->u.cppPtr,sipSelf->flags);
    }
}


extern "C" {static void *init_Dataset(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_Dataset(sipWrapper *sipSelf,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    sipDataset *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            try
            {
            sipCpp = new sipDataset();
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
        const Dataset * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_Dataset,&a0))
        {
            try
            {
            sipCpp = new sipDataset(*a0);
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


extern "C" {static void *forceConvertTo_Dataset(PyObject *, int *);}
static void *forceConvertTo_Dataset(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_Dataset))
        return sipConvertToCpp(valobj,sipClass_Dataset,iserrp);

    sipBadClass(sipNm_BALL_Dataset);

    *iserrp = 1;

    return NULL;
}


static PyMethodDef methods_Dataset[] = {
    {sipNm_BALL_clear, meth_Dataset_clear, METH_VARARGS, NULL},
    {sipNm_BALL_getComposite, meth_Dataset_getComposite, METH_VARARGS, NULL},
    {sipNm_BALL_getName, meth_Dataset_getName, METH_VARARGS, NULL},
    {sipNm_BALL_getType, meth_Dataset_getType, METH_VARARGS, NULL},
    {sipNm_BALL_set, meth_Dataset_set, METH_VARARGS, NULL},
    {sipNm_BALL_setComposite, meth_Dataset_setComposite, METH_VARARGS, NULL},
    {sipNm_BALL_setName, meth_Dataset_setName, METH_VARARGS, NULL},
    {sipNm_BALL_setType, meth_Dataset_setType, METH_VARARGS, NULL}
};


sipTypeDef sipType_BALL_Dataset = {
    0,
    0,
    "BALL.Dataset",
    0,
    {0, 0, 1},
    0,
    0,
    8, methods_Dataset,
    0, 0,
    0,
    init_Dataset,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_Dataset,
    cast_Dataset,
    release_Dataset,
    forceConvertTo_Dataset,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
