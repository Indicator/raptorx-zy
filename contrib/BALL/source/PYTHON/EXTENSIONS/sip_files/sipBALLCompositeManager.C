/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLCompositeManager.h"

#include "sipBALLCompositeManager.h"
#include "sipBALLPyCompositeList.h"
#include "sipBALLComposite.h"


sipCompositeManager::sipCompositeManager() throw(): CompositeManager(), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,1);
}

sipCompositeManager::sipCompositeManager(const CompositeManager& a0) throw(): CompositeManager(a0), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,1);
}

sipCompositeManager::~sipCompositeManager() throw()
{
    sipCommonDtor(sipPySelf);
}

void sipCompositeManager::clear() throw()
{
    extern void sipVH_BALL_0(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipNm_BALL_clear);

    if (!meth)
    {
        CompositeManager::clear();
        return;
    }

    sipVH_BALL_0(sipGILState,meth);
}


extern "C" {static PyObject *meth_CompositeManager_clear(PyObject *, PyObject *);}
static PyObject *meth_CompositeManager_clear(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        CompositeManager *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_CompositeManager,&sipCpp))
        {
            (sipSelfWasArg ? sipCpp->CompositeManager::clear() : sipCpp->clear());

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_CompositeManager,sipNm_BALL_clear);

    return NULL;
}


extern "C" {static PyObject *meth_CompositeManager_has(PyObject *, PyObject *);}
static PyObject *meth_CompositeManager_has(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const Composite * a0;
        CompositeManager *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ@",&sipSelf,sipClass_CompositeManager,&sipCpp,sipClass_Composite,&a0))
        {
            bool sipRes;

            sipRes = sipCpp->has(a0);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_CompositeManager,sipNm_BALL_has);

    return NULL;
}


extern "C" {static PyObject *meth_CompositeManager_hasRoot(PyObject *, PyObject *);}
static PyObject *meth_CompositeManager_hasRoot(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const Composite * a0;
        CompositeManager *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ@",&sipSelf,sipClass_CompositeManager,&sipCpp,sipClass_Composite,&a0))
        {
            bool sipRes;

            sipRes = sipCpp->hasRoot(a0);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_CompositeManager,sipNm_BALL_hasRoot);

    return NULL;
}


extern "C" {static PyObject *meth_CompositeManager_insert(PyObject *, PyObject *);}
static PyObject *meth_CompositeManager_insert(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Composite * a0;
        CompositeManager *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_CompositeManager,&sipCpp,sipClass_Composite,&a0))
        {
            bool sipRes;

            sipRes = sipCpp->insert(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_CompositeManager,sipNm_BALL_insert);

    return NULL;
}


extern "C" {static PyObject *meth_CompositeManager_remove(PyObject *, PyObject *);}
static PyObject *meth_CompositeManager_remove(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Composite * a0;
        bool a1 = 1;
        CompositeManager *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA|b",&sipSelf,sipClass_CompositeManager,&sipCpp,sipClass_Composite,&a0,&a1))
        {
            sipCpp->remove(*a0,a1);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_CompositeManager,sipNm_BALL_remove);

    return NULL;
}


extern "C" {static PyObject *meth_CompositeManager_getNumberOfComposites(PyObject *, PyObject *);}
static PyObject *meth_CompositeManager_getNumberOfComposites(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        CompositeManager *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_CompositeManager,&sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->getNumberOfComposites();

            return PyInt_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_CompositeManager,sipNm_BALL_getNumberOfComposites);

    return NULL;
}


extern "C" {static PyObject *meth_CompositeManager_getComposites(PyObject *, PyObject *);}
static PyObject *meth_CompositeManager_getComposites(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        CompositeManager *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_CompositeManager,&sipCpp))
        {
            PyCompositeList *sipRes;

            sipRes = new PyCompositeList(sipCpp->getComposites());

            PyObject *sipResObj = sipConvertFromMappedType(sipRes,sipMappedType_PyCompositeList,NULL);
            delete sipRes;

            return sipResObj;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_CompositeManager,sipNm_BALL_getComposites);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_CompositeManager(void *, sipWrapperType *);}
static void *cast_CompositeManager(void *ptr,sipWrapperType *targetClass)
{
    if (targetClass == sipClass_CompositeManager)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_CompositeManager(void *, int);}
static void release_CompositeManager(void *ptr,int state)
{
    if (state & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipCompositeManager *>(ptr);
    else
        delete reinterpret_cast<CompositeManager *>(ptr);
}


extern "C" {static void dealloc_CompositeManager(sipWrapper *);}
static void dealloc_CompositeManager(sipWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipCompositeManager *>(sipSelf->u.cppPtr)->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_CompositeManager(sipSelf->u.cppPtr,sipSelf->flags);
    }
}


extern "C" {static void *init_CompositeManager(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_CompositeManager(sipWrapper *sipSelf,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    sipCompositeManager *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            sipCpp = new sipCompositeManager();
        }
    }

    if (!sipCpp)
    {
        const CompositeManager * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_CompositeManager,&a0))
        {
            sipCpp = new sipCompositeManager(*a0);
        }
    }

    if (sipCpp)
        sipCpp->sipPySelf = sipSelf;

    return sipCpp;
}


extern "C" {static void *forceConvertTo_CompositeManager(PyObject *, int *);}
static void *forceConvertTo_CompositeManager(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_CompositeManager))
        return sipConvertToCpp(valobj,sipClass_CompositeManager,iserrp);

    sipBadClass(sipNm_BALL_CompositeManager);

    *iserrp = 1;

    return NULL;
}


static PyMethodDef methods_CompositeManager[] = {
    {sipNm_BALL_clear, meth_CompositeManager_clear, METH_VARARGS, NULL},
    {sipNm_BALL_getComposites, meth_CompositeManager_getComposites, METH_VARARGS, NULL},
    {sipNm_BALL_getNumberOfComposites, meth_CompositeManager_getNumberOfComposites, METH_VARARGS, NULL},
    {sipNm_BALL_has, meth_CompositeManager_has, METH_VARARGS, NULL},
    {sipNm_BALL_hasRoot, meth_CompositeManager_hasRoot, METH_VARARGS, NULL},
    {sipNm_BALL_insert, meth_CompositeManager_insert, METH_VARARGS, NULL},
    {sipNm_BALL_remove, meth_CompositeManager_remove, METH_VARARGS, NULL}
};


sipTypeDef sipType_BALL_CompositeManager = {
    0,
    0,
    "BALL.CompositeManager",
    0,
    {0, 0, 1},
    0,
    0,
    7, methods_CompositeManager,
    0, 0,
    0,
    init_CompositeManager,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_CompositeManager,
    cast_CompositeManager,
    release_CompositeManager,
    forceConvertTo_CompositeManager,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
