/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLGradient.h"

#include "sipBALLAtomVector.h"
#include "sipBALLGradient.h"



extern "C" {static PyObject *meth_Gradient_set(PyObject *, PyObject *);}
static PyObject *meth_Gradient_set(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const Gradient * a0;
        Gradient *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_Gradient,&sipCpp,sipClass_Gradient,&a0))
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
        const AtomVector * a0;
        Gradient *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_Gradient,&sipCpp,sipClass_AtomVector,&a0))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Gradient,sipNm_BALL_set);

    return NULL;
}


extern "C" {static PyObject *meth_Gradient_negate(PyObject *, PyObject *);}
static PyObject *meth_Gradient_negate(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Gradient *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Gradient,&sipCpp))
        {
            try
            {
            sipCpp->negate();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Gradient,sipNm_BALL_negate);

    return NULL;
}


extern "C" {static PyObject *meth_Gradient_normalize(PyObject *, PyObject *);}
static PyObject *meth_Gradient_normalize(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Gradient *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Gradient,&sipCpp))
        {
            try
            {
            sipCpp->normalize();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Gradient,sipNm_BALL_normalize);

    return NULL;
}


extern "C" {static PyObject *meth_Gradient_size(PyObject *, PyObject *);}
static PyObject *meth_Gradient_size(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Gradient *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Gradient,&sipCpp))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Gradient,sipNm_BALL_size);

    return NULL;
}


extern "C" {static PyObject *meth_Gradient_invalidate(PyObject *, PyObject *);}
static PyObject *meth_Gradient_invalidate(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Gradient *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Gradient,&sipCpp))
        {
            try
            {
            sipCpp->invalidate();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Gradient,sipNm_BALL_invalidate);

    return NULL;
}


extern "C" {static PyObject *meth_Gradient_isValid(PyObject *, PyObject *);}
static PyObject *meth_Gradient_isValid(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Gradient *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Gradient,&sipCpp))
        {
            bool sipRes;

            try
            {
            sipRes = sipCpp->isValid();
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Gradient,sipNm_BALL_isValid);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_Gradient(void *, sipWrapperType *);}
static void *cast_Gradient(void *ptr,sipWrapperType *targetClass)
{
    if (targetClass == sipClass_Gradient)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_Gradient(void *, int);}
static void release_Gradient(void *ptr,int)
{
    delete reinterpret_cast<Gradient *>(ptr);
}


extern "C" {static void dealloc_Gradient(sipWrapper *);}
static void dealloc_Gradient(sipWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_Gradient(sipSelf->u.cppPtr,0);
    }
}


extern "C" {static void *init_Gradient(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_Gradient(sipWrapper *,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    Gradient *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            try
            {
            sipCpp = new Gradient();
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
            sipCpp = new Gradient(*a0);
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
        const Gradient * a0;
        bool a1;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JAb",sipClass_Gradient,&a0,&a1))
        {
            try
            {
            sipCpp = new Gradient(*a0,a1);
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
        const Gradient * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_Gradient,&a0))
        {
            try
            {
            sipCpp = new Gradient(*a0);
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


extern "C" {static PyObject *var_Gradient_rms(PyObject *, PyObject *);}
static PyObject *var_Gradient_rms(PyObject *sipSelf,PyObject *sipPy)
{
   double sipVal;
    Gradient *sipCpp = reinterpret_cast<Gradient *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_Gradient));

    if (!sipCpp)
        return NULL;

    if (sipPy == NULL)
    {
        sipVal = sipCpp->rms;

        sipPy = PyFloat_FromDouble(sipVal);

        return sipPy;
    }

	sipVal = PyFloat_AsDouble(sipPy);

    if (PyErr_Occurred() != NULL)
    {
        sipBadSetType(sipNm_BALL_Gradient,sipNm_BALL_rms);
        return NULL;
    }

    sipCpp->rms = sipVal;

    Py_INCREF(Py_None);
    return Py_None;
}


extern "C" {static PyObject *var_Gradient_inv_norm(PyObject *, PyObject *);}
static PyObject *var_Gradient_inv_norm(PyObject *sipSelf,PyObject *sipPy)
{
   double sipVal;
    Gradient *sipCpp = reinterpret_cast<Gradient *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_Gradient));

    if (!sipCpp)
        return NULL;

    if (sipPy == NULL)
    {
        sipVal = sipCpp->inv_norm;

        sipPy = PyFloat_FromDouble(sipVal);

        return sipPy;
    }

	sipVal = PyFloat_AsDouble(sipPy);

    if (PyErr_Occurred() != NULL)
    {
        sipBadSetType(sipNm_BALL_Gradient,sipNm_BALL_inv_norm);
        return NULL;
    }

    sipCpp->inv_norm = sipVal;

    Py_INCREF(Py_None);
    return Py_None;
}


extern "C" {static PyObject *var_Gradient_norm(PyObject *, PyObject *);}
static PyObject *var_Gradient_norm(PyObject *sipSelf,PyObject *sipPy)
{
   double sipVal;
    Gradient *sipCpp = reinterpret_cast<Gradient *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_Gradient));

    if (!sipCpp)
        return NULL;

    if (sipPy == NULL)
    {
        sipVal = sipCpp->norm;

        sipPy = PyFloat_FromDouble(sipVal);

        return sipPy;
    }

	sipVal = PyFloat_AsDouble(sipPy);

    if (PyErr_Occurred() != NULL)
    {
        sipBadSetType(sipNm_BALL_Gradient,sipNm_BALL_norm);
        return NULL;
    }

    sipCpp->norm = sipVal;

    Py_INCREF(Py_None);
    return Py_None;
}

PyMethodDef variables_Gradient[] = {
    {sipNm_BALL_rms, var_Gradient_rms, 0, NULL},
    {sipNm_BALL_inv_norm, var_Gradient_inv_norm, 0, NULL},
    {sipNm_BALL_norm, var_Gradient_norm, 0, NULL},
    {0, 0, 0, 0}
};


extern "C" {static void *forceConvertTo_Gradient(PyObject *, int *);}
static void *forceConvertTo_Gradient(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_Gradient))
        return sipConvertToCpp(valobj,sipClass_Gradient,iserrp);

    sipBadClass(sipNm_BALL_Gradient);

    *iserrp = 1;

    return NULL;
}


static PyMethodDef methods_Gradient[] = {
    {sipNm_BALL_invalidate, meth_Gradient_invalidate, METH_VARARGS, NULL},
    {sipNm_BALL_isValid, meth_Gradient_isValid, METH_VARARGS, NULL},
    {sipNm_BALL_negate, meth_Gradient_negate, METH_VARARGS, NULL},
    {sipNm_BALL_normalize, meth_Gradient_normalize, METH_VARARGS, NULL},
    {sipNm_BALL_set, meth_Gradient_set, METH_VARARGS, NULL},
    {sipNm_BALL_size, meth_Gradient_size, METH_VARARGS, NULL}
};


sipTypeDef sipType_BALL_Gradient = {
    0,
    0,
    "BALL.Gradient",
    0,
    {0, 0, 1},
    0,
    0,
    6, methods_Gradient,
    0, 0,
    variables_Gradient,
    init_Gradient,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_Gradient,
    cast_Gradient,
    release_Gradient,
    forceConvertTo_Gradient,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
