/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLAtomVector.h"

#include "sipBALLComposite.h"
#include "sipBALLAtomVector.h"
#include "sipBALLAtom.h"
#include "sipBALLGradient.h"



extern "C" {static PyObject *meth_AtomVector_clear(PyObject *, PyObject *);}
static PyObject *meth_AtomVector_clear(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        AtomVector *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_AtomVector,&sipCpp))
        {
            try
            {
            sipCpp->clear();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_AtomVector,sipNm_BALL_clear);

    return NULL;
}


extern "C" {static PyObject *meth_AtomVector_set(PyObject *, PyObject *);}
static PyObject *meth_AtomVector_set(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const AtomVector * a0;
        AtomVector *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_AtomVector,&sipCpp,sipClass_AtomVector,&a0))
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

    {
        const Composite * a0;
        bool a1;
        AtomVector *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJAb",&sipSelf,sipClass_AtomVector,&sipCpp,sipClass_Composite,&a0,&a1))
        {
            try
            {
            sipCpp->set(*a0,a1);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_AtomVector,sipNm_BALL_set);

    return NULL;
}


extern "C" {static PyObject *meth_AtomVector_size(PyObject *, PyObject *);}
static PyObject *meth_AtomVector_size(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        AtomVector *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_AtomVector,&sipCpp))
        {
            int sipRes;

            try
            {
            sipRes = sipCpp->size();
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return PyInt_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_AtomVector,sipNm_BALL_size);

    return NULL;
}


extern "C" {static PyObject *meth_AtomVector_savePositions(PyObject *, PyObject *);}
static PyObject *meth_AtomVector_savePositions(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        AtomVector *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_AtomVector,&sipCpp))
        {
            try
            {
            sipCpp->savePositions();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_AtomVector,sipNm_BALL_savePositions);

    return NULL;
}


extern "C" {static PyObject *meth_AtomVector_resetPositions(PyObject *, PyObject *);}
static PyObject *meth_AtomVector_resetPositions(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        AtomVector *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_AtomVector,&sipCpp))
        {
            try
            {
            sipCpp->resetPositions();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_AtomVector,sipNm_BALL_resetPositions);

    return NULL;
}


extern "C" {static PyObject *meth_AtomVector_moveTo(PyObject *, PyObject *);}
static PyObject *meth_AtomVector_moveTo(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const Gradient * a0;
        float a1;
        AtomVector *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJAf",&sipSelf,sipClass_AtomVector,&sipCpp,sipClass_Gradient,&a0,&a1))
        {
            try
            {
            sipCpp->moveTo(*a0,a1);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_AtomVector,sipNm_BALL_moveTo);

    return NULL;
}


extern "C" {static PyObject *meth_AtomVector_push_back(PyObject *, PyObject *);}
static PyObject *meth_AtomVector_push_back(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Atom * a0;
        AtomVector *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ@",&sipSelf,sipClass_AtomVector,&sipCpp,sipClass_Atom,&a0))
        {
            try
            {
            sipCpp->push_back(a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_AtomVector,sipNm_BALL_push_back);

    return NULL;
}


extern "C" {static PyObject *meth_AtomVector_resize(PyObject *, PyObject *);}
static PyObject *meth_AtomVector_resize(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        int a0;
        AtomVector *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bi",&sipSelf,sipClass_AtomVector,&sipCpp,&a0))
        {
            try
            {
            sipCpp->resize(a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_AtomVector,sipNm_BALL_resize);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_AtomVector(void *, sipWrapperType *);}
static void *cast_AtomVector(void *ptr,sipWrapperType *targetClass)
{
    if (targetClass == sipClass_AtomVector)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_AtomVector(void *, int);}
static void release_AtomVector(void *ptr,int)
{
    delete reinterpret_cast<AtomVector *>(ptr);
}


extern "C" {static void dealloc_AtomVector(sipWrapper *);}
static void dealloc_AtomVector(sipWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_AtomVector(sipSelf->u.cppPtr,0);
    }
}


extern "C" {static void *init_AtomVector(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_AtomVector(sipWrapper *,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    AtomVector *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            try
            {
            sipCpp = new AtomVector();
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
        Composite * a0;
        bool a1;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JAb",sipClass_Composite,&a0,&a1))
        {
            try
            {
            sipCpp = new AtomVector(*a0,a1);
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
        AtomVector * a0;
        bool a1;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JAb",sipClass_AtomVector,&a0,&a1))
        {
            try
            {
            sipCpp = new AtomVector(*a0,a1);
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
        const AtomVector * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_AtomVector,&a0))
        {
            try
            {
            sipCpp = new AtomVector(*a0);
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }
        }
    }

    return sipCpp;
}


extern "C" {static void *forceConvertTo_AtomVector(PyObject *, int *);}
static void *forceConvertTo_AtomVector(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_AtomVector))
        return sipConvertToCpp(valobj,sipClass_AtomVector,iserrp);

    sipBadClass(sipNm_BALL_AtomVector);

    *iserrp = 1;

    return NULL;
}


static PyMethodDef methods_AtomVector[] = {
    {sipNm_BALL_clear, meth_AtomVector_clear, METH_VARARGS, NULL},
    {sipNm_BALL_moveTo, meth_AtomVector_moveTo, METH_VARARGS, NULL},
    {sipNm_BALL_push_back, meth_AtomVector_push_back, METH_VARARGS, NULL},
    {sipNm_BALL_resetPositions, meth_AtomVector_resetPositions, METH_VARARGS, NULL},
    {sipNm_BALL_resize, meth_AtomVector_resize, METH_VARARGS, NULL},
    {sipNm_BALL_savePositions, meth_AtomVector_savePositions, METH_VARARGS, NULL},
    {sipNm_BALL_set, meth_AtomVector_set, METH_VARARGS, NULL},
    {sipNm_BALL_size, meth_AtomVector_size, METH_VARARGS, NULL}
};


sipTypeDef sipType_BALL_AtomVector = {
    0,
    0,
    "BALL.AtomVector",
    0,
    {0, 0, 1},
    0,
    0,
    8, methods_AtomVector,
    0, 0,
    0,
    init_AtomVector,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_AtomVector,
    cast_AtomVector,
    release_AtomVector,
    forceConvertTo_AtomVector,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
