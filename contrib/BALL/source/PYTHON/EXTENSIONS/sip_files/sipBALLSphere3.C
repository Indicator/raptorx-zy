/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLSphere3.h"

#include "sipBALLVector3.h"
#include "sipBALLSphere3.h"



extern "C" {static PyObject *meth_Sphere3_swap(PyObject *, PyObject *);}
static PyObject *meth_Sphere3_swap(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Sphere3 * a0;
        Sphere3 *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_Sphere3,&sipCpp,sipClass_Sphere3,&a0))
        {
            try
            {
            sipCpp->swap(*a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Sphere3,sipNm_BALL_swap);

    return NULL;
}


extern "C" {static PyObject *meth_Sphere3_set(PyObject *, PyObject *);}
static PyObject *meth_Sphere3_set(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const Sphere3 * a0;
        Sphere3 *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_Sphere3,&sipCpp,sipClass_Sphere3,&a0))
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
        const Vector3 * a0;
        float a1;
        Sphere3 *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJAf",&sipSelf,sipClass_Sphere3,&sipCpp,sipClass_Vector3,&a0,&a1))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Sphere3,sipNm_BALL_set);

    return NULL;
}


extern "C" {static PyObject *meth_Sphere3_get(PyObject *, PyObject *);}
static PyObject *meth_Sphere3_get(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Sphere3 * a0;
        Sphere3 *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_Sphere3,&sipCpp,sipClass_Sphere3,&a0))
        {
            try
            {
            sipCpp->get(*a0);
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
        Vector3 * a0;
        float a1;
        Sphere3 *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJAf",&sipSelf,sipClass_Sphere3,&sipCpp,sipClass_Vector3,&a0,&a1))
        {
            try
            {
            sipCpp->get(*a0,a1);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Sphere3,sipNm_BALL_get);

    return NULL;
}


extern "C" {static PyObject *meth_Sphere3_has(PyObject *, PyObject *);}
static PyObject *meth_Sphere3_has(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const Vector3 * a0;
        bool a1 = 0;
        Sphere3 *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA|b",&sipSelf,sipClass_Sphere3,&sipCpp,sipClass_Vector3,&a0,&a1))
        {
            bool sipRes;

            try
            {
            sipRes = sipCpp->has(*a0,a1);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Sphere3,sipNm_BALL_has);

    return NULL;
}


extern "C" {static PyObject *meth_Sphere3_isEmpty(PyObject *, PyObject *);}
static PyObject *meth_Sphere3_isEmpty(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Sphere3 *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Sphere3,&sipCpp))
        {
            bool sipRes;

            try
            {
            sipRes = sipCpp->isEmpty();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Sphere3,sipNm_BALL_isEmpty);

    return NULL;
}


extern "C" {static PyObject *meth_Sphere3_isValid(PyObject *, PyObject *);}
static PyObject *meth_Sphere3_isValid(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Sphere3 *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Sphere3,&sipCpp))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Sphere3,sipNm_BALL_isValid);

    return NULL;
}


extern "C" {static PyObject *slot_Sphere3___ne__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_Sphere3___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    Sphere3 *sipCpp = reinterpret_cast<Sphere3 *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_Sphere3));

    if (!sipCpp)
        return 0;

    int sipArgsParsed = 0;

    {
        const Sphere3 * a0;

        if (sipParseArgs(&sipArgsParsed,sipArg,"JA",sipClass_Sphere3,&a0))
        {
            bool sipRes;

            try
            {
            sipRes = ((*sipCpp) != *a0);
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return PyBool_FromLong(sipRes);
        }
    }

    return sipPySlotExtend(&sipModuleAPI_BALL,ne_slot,sipClass_Sphere3,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_Sphere3___eq__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_Sphere3___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    Sphere3 *sipCpp = reinterpret_cast<Sphere3 *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_Sphere3));

    if (!sipCpp)
        return 0;

    int sipArgsParsed = 0;

    {
        const Sphere3 * a0;

        if (sipParseArgs(&sipArgsParsed,sipArg,"JA",sipClass_Sphere3,&a0))
        {
            bool sipRes;

            try
            {
            sipRes = ((*sipCpp) == *a0);
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return PyBool_FromLong(sipRes);
        }
    }

    return sipPySlotExtend(&sipModuleAPI_BALL,eq_slot,sipClass_Sphere3,sipSelf,sipArg);
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_Sphere3(void *, sipWrapperType *);}
static void *cast_Sphere3(void *ptr,sipWrapperType *targetClass)
{
    if (targetClass == sipClass_Sphere3)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_Sphere3(void *, int);}
static void release_Sphere3(void *ptr,int)
{
    delete reinterpret_cast<Sphere3 *>(ptr);
}


extern "C" {static void dealloc_Sphere3(sipWrapper *);}
static void dealloc_Sphere3(sipWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_Sphere3(sipSelf->u.cppPtr,0);
    }
}


extern "C" {static void *init_Sphere3(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_Sphere3(sipWrapper *,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    Sphere3 *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            try
            {
            sipCpp = new Sphere3();
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
        const Sphere3 * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_Sphere3,&a0))
        {
            try
            {
            sipCpp = new Sphere3(*a0);
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
        const Vector3 * a0;
        float a1;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JAf",sipClass_Vector3,&a0,&a1))
        {
            try
            {
            sipCpp = new Sphere3(*a0,a1);
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


extern "C" {static PyObject *var_Sphere3_radius(PyObject *, PyObject *);}
static PyObject *var_Sphere3_radius(PyObject *sipSelf,PyObject *sipPy)
{
   float sipVal;
    Sphere3 *sipCpp = reinterpret_cast<Sphere3 *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_Sphere3));

    if (!sipCpp)
        return NULL;

    if (sipPy == NULL)
    {
        sipVal = sipCpp->radius;

        sipPy = PyFloat_FromDouble((double)sipVal);

        return sipPy;
    }

	sipVal = (float)PyFloat_AsDouble(sipPy);

    if (PyErr_Occurred() != NULL)
    {
        sipBadSetType(sipNm_BALL_Sphere3,sipNm_BALL_radius);
        return NULL;
    }

    sipCpp->radius = sipVal;

    Py_INCREF(Py_None);
    return Py_None;
}


extern "C" {static PyObject *var_Sphere3_p(PyObject *, PyObject *);}
static PyObject *var_Sphere3_p(PyObject *sipSelf,PyObject *sipPy)
{
    int sipIsErr = 0;
   Vector3 *sipVal;
    Sphere3 *sipCpp = reinterpret_cast<Sphere3 *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_Sphere3));

    if (!sipCpp)
        return NULL;

    if (sipPy == NULL)
    {
        sipVal = &sipCpp->p;

        sipPy = sipConvertFromInstance(sipVal,sipClass_Vector3,NULL);

        return sipPy;
    }

    sipVal = reinterpret_cast<Vector3 *>(sipForceConvertToInstance(sipPy,sipClass_Vector3,NULL,SIP_NOT_NONE,NULL,&sipIsErr));

    if (sipIsErr)
        return NULL;

    sipCpp->p = *sipVal;

    Py_INCREF(Py_None);
    return Py_None;
}

PyMethodDef variables_Sphere3[] = {
    {sipNm_BALL_radius, var_Sphere3_radius, 0, NULL},
    {sipNm_BALL_p, var_Sphere3_p, 0, NULL},
    {0, 0, 0, 0}
};


extern "C" {static void *forceConvertTo_Sphere3(PyObject *, int *);}
static void *forceConvertTo_Sphere3(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_Sphere3))
        return sipConvertToCpp(valobj,sipClass_Sphere3,iserrp);

    sipBadClass(sipNm_BALL_Sphere3);

    *iserrp = 1;

    return NULL;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_Sphere3[] = {
    {(void *)slot_Sphere3___ne__, ne_slot},
    {(void *)slot_Sphere3___eq__, eq_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_Sphere3[] = {
    {sipNm_BALL_get, meth_Sphere3_get, METH_VARARGS, NULL},
    {sipNm_BALL_has, meth_Sphere3_has, METH_VARARGS, NULL},
    {sipNm_BALL_isEmpty, meth_Sphere3_isEmpty, METH_VARARGS, NULL},
    {sipNm_BALL_isValid, meth_Sphere3_isValid, METH_VARARGS, NULL},
    {sipNm_BALL_set, meth_Sphere3_set, METH_VARARGS, NULL},
    {sipNm_BALL_swap, meth_Sphere3_swap, METH_VARARGS, NULL}
};


sipTypeDef sipType_BALL_Sphere3 = {
    0,
    0,
    "BALL.Sphere3",
    0,
    {0, 0, 1},
    0,
    slots_Sphere3,
    6, methods_Sphere3,
    0, 0,
    variables_Sphere3,
    init_Sphere3,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_Sphere3,
    cast_Sphere3,
    release_Sphere3,
    forceConvertTo_Sphere3,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
