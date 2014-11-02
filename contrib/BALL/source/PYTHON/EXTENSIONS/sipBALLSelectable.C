/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLSelectable.h"

#include "sipBALLSelectable.h"


sipSelectable::sipSelectable() throw(): Selectable(), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,2);
}

sipSelectable::sipSelectable(const Selectable& a0,bool a1) throw(): Selectable(a0,a1), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,2);
}

sipSelectable::sipSelectable(const Selectable& a0): Selectable(a0), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,2);
}

sipSelectable::~sipSelectable() throw()
{
    sipCommonDtor(sipPySelf);
}

void sipSelectable::select() throw()
{
    extern void sipVH_BALL_0(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipNm_BALL_select);

    if (!meth)
    {
        Selectable::select();
        return;
    }

    sipVH_BALL_0(sipGILState,meth);
}

void sipSelectable::deselect() throw()
{
    extern void sipVH_BALL_0(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,NULL,sipNm_BALL_deselect);

    if (!meth)
    {
        Selectable::deselect();
        return;
    }

    sipVH_BALL_0(sipGILState,meth);
}


extern "C" {static PyObject *meth_Selectable_clear(PyObject *, PyObject *);}
static PyObject *meth_Selectable_clear(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Selectable *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Selectable,&sipCpp))
        {
            sipCpp->clear();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Selectable,sipNm_BALL_clear);

    return NULL;
}


extern "C" {static PyObject *meth_Selectable_set(PyObject *, PyObject *);}
static PyObject *meth_Selectable_set(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const Selectable * a0;
        bool a1 = 1;
        Selectable *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA|b",&sipSelf,sipClass_Selectable,&sipCpp,sipClass_Selectable,&a0,&a1))
        {
            sipCpp->set(*a0,a1);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Selectable,sipNm_BALL_set);

    return NULL;
}


extern "C" {static PyObject *meth_Selectable_get(PyObject *, PyObject *);}
static PyObject *meth_Selectable_get(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Selectable * a0;
        bool a1 = 1;
        Selectable *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA|b",&sipSelf,sipClass_Selectable,&sipCpp,sipClass_Selectable,&a0,&a1))
        {
            sipCpp->get(*a0,a1);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Selectable,sipNm_BALL_get);

    return NULL;
}


extern "C" {static PyObject *meth_Selectable_swap(PyObject *, PyObject *);}
static PyObject *meth_Selectable_swap(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Selectable * a0;
        Selectable *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_Selectable,&sipCpp,sipClass_Selectable,&a0))
        {
            sipCpp->swap(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Selectable,sipNm_BALL_swap);

    return NULL;
}


extern "C" {static PyObject *meth_Selectable_select(PyObject *, PyObject *);}
static PyObject *meth_Selectable_select(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        Selectable *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Selectable,&sipCpp))
        {
            (sipSelfWasArg ? sipCpp->Selectable::select() : sipCpp->select());

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Selectable,sipNm_BALL_select);

    return NULL;
}


extern "C" {static PyObject *meth_Selectable_deselect(PyObject *, PyObject *);}
static PyObject *meth_Selectable_deselect(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        Selectable *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Selectable,&sipCpp))
        {
            (sipSelfWasArg ? sipCpp->Selectable::deselect() : sipCpp->deselect());

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Selectable,sipNm_BALL_deselect);

    return NULL;
}


extern "C" {static PyObject *meth_Selectable_isSelected(PyObject *, PyObject *);}
static PyObject *meth_Selectable_isSelected(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Selectable *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Selectable,&sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isSelected();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Selectable,sipNm_BALL_isSelected);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_Selectable(void *, sipWrapperType *);}
static void *cast_Selectable(void *ptr,sipWrapperType *targetClass)
{
    if (targetClass == sipClass_Selectable)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_Selectable(void *, int);}
static void release_Selectable(void *ptr,int state)
{
    if (state & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipSelectable *>(ptr);
    else
        delete reinterpret_cast<Selectable *>(ptr);
}


extern "C" {static void dealloc_Selectable(sipWrapper *);}
static void dealloc_Selectable(sipWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipSelectable *>(sipSelf->u.cppPtr)->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_Selectable(sipSelf->u.cppPtr,sipSelf->flags);
    }
}


extern "C" {static void *init_Selectable(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_Selectable(sipWrapper *sipSelf,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    sipSelectable *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            sipCpp = new sipSelectable();
        }
    }

    if (!sipCpp)
    {
        const Selectable * a0;
        bool a1 = 1;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA|b",sipClass_Selectable,&a0,&a1))
        {
            sipCpp = new sipSelectable(*a0,a1);
        }
    }

    if (!sipCpp)
    {
        const Selectable * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_Selectable,&a0))
        {
            try
            {
            sipCpp = new sipSelectable(*a0);
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


extern "C" {static void *forceConvertTo_Selectable(PyObject *, int *);}
static void *forceConvertTo_Selectable(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_Selectable))
        return sipConvertToCpp(valobj,sipClass_Selectable,iserrp);

    sipBadClass(sipNm_BALL_Selectable);

    *iserrp = 1;

    return NULL;
}


static PyMethodDef methods_Selectable[] = {
    {sipNm_BALL_clear, meth_Selectable_clear, METH_VARARGS, NULL},
    {sipNm_BALL_deselect, meth_Selectable_deselect, METH_VARARGS, NULL},
    {sipNm_BALL_get, meth_Selectable_get, METH_VARARGS, NULL},
    {sipNm_BALL_isSelected, meth_Selectable_isSelected, METH_VARARGS, NULL},
    {sipNm_BALL_select, meth_Selectable_select, METH_VARARGS, NULL},
    {sipNm_BALL_set, meth_Selectable_set, METH_VARARGS, NULL},
    {sipNm_BALL_swap, meth_Selectable_swap, METH_VARARGS, NULL}
};


sipTypeDef sipType_BALL_Selectable = {
    0,
    0,
    "BALL.Selectable",
    0,
    {0, 0, 1},
    0,
    0,
    7, methods_Selectable,
    0, 0,
    0,
    init_Selectable,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_Selectable,
    cast_Selectable,
    release_Selectable,
    forceConvertTo_Selectable,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
