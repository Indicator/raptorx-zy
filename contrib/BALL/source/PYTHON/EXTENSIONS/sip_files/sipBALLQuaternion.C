/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLQuaternion.h"

#include "sipBALLVector3.h"
#include "sipBALLQuaternion.h"
#include "sipBALLMatrix4x4.h"



extern "C" {static PyObject *meth_Quaternion_set(PyObject *, PyObject *);}
static PyObject *meth_Quaternion_set(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const Quaternion * a0;
        Quaternion *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_Quaternion,&sipCpp,sipClass_Quaternion,&a0))
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
        Quaternion *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJAf",&sipSelf,sipClass_Quaternion,&sipCpp,sipClass_Vector3,&a0,&a1))
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

    {
        float a0;
        float a1;
        float a2;
        float a3;
        Quaternion *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bffff",&sipSelf,sipClass_Quaternion,&sipCpp,&a0,&a1,&a2,&a3))
        {
            try
            {
            sipCpp->set(a0,a1,a2,a3);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Quaternion,sipNm_BALL_set);

    return NULL;
}


extern "C" {static PyObject *meth_Quaternion_get(PyObject *, PyObject *);}
static PyObject *meth_Quaternion_get(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Quaternion * a0;
        Quaternion *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_Quaternion,&sipCpp,sipClass_Quaternion,&a0))
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

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Quaternion,sipNm_BALL_get);

    return NULL;
}


extern "C" {static PyObject *meth_Quaternion_setIdentity(PyObject *, PyObject *);}
static PyObject *meth_Quaternion_setIdentity(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Quaternion *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Quaternion,&sipCpp))
        {
            try
            {
            sipCpp->setIdentity();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Quaternion,sipNm_BALL_setIdentity);

    return NULL;
}


extern "C" {static PyObject *meth_Quaternion_swap(PyObject *, PyObject *);}
static PyObject *meth_Quaternion_swap(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Quaternion * a0;
        Quaternion *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_Quaternion,&sipCpp,sipClass_Quaternion,&a0))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Quaternion,sipNm_BALL_swap);

    return NULL;
}


extern "C" {static PyObject *meth_Quaternion_getAngle(PyObject *, PyObject *);}
static PyObject *meth_Quaternion_getAngle(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Quaternion *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Quaternion,&sipCpp))
        {
            float sipRes;

            try
            {
            sipRes = sipCpp->getAngle();
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return PyFloat_FromDouble((double)sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Quaternion,sipNm_BALL_getAngle);

    return NULL;
}


extern "C" {static PyObject *meth_Quaternion_getAxis(PyObject *, PyObject *);}
static PyObject *meth_Quaternion_getAxis(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Quaternion *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Quaternion,&sipCpp))
        {
            Vector3 *sipRes;

            try
            {
            sipRes = new Vector3(sipCpp->getAxis());
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return sipConvertFromNewInstance(sipRes,sipClass_Vector3,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Quaternion,sipNm_BALL_getAxis);

    return NULL;
}


extern "C" {static PyObject *meth_Quaternion_getRotationMatrix(PyObject *, PyObject *);}
static PyObject *meth_Quaternion_getRotationMatrix(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Matrix4x4 * a0;
        Quaternion *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_Quaternion,&sipCpp,sipClass_Matrix4x4,&a0))
        {
            Matrix4x4 *sipRes;

            try
            {
            sipRes = &sipCpp->getRotationMatrix(*a0);
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return sipConvertFromInstance(sipRes,sipClass_Matrix4x4,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Quaternion,sipNm_BALL_getRotationMatrix);

    return NULL;
}


extern "C" {static PyObject *meth_Quaternion_getInverse(PyObject *, PyObject *);}
static PyObject *meth_Quaternion_getInverse(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Quaternion *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Quaternion,&sipCpp))
        {
            Quaternion *sipRes;

            try
            {
            sipRes = new Quaternion(sipCpp->getInverse());
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return sipConvertFromNewInstance(sipRes,sipClass_Quaternion,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Quaternion,sipNm_BALL_getInverse);

    return NULL;
}


extern "C" {static PyObject *meth_Quaternion_getConjugate(PyObject *, PyObject *);}
static PyObject *meth_Quaternion_getConjugate(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Quaternion *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Quaternion,&sipCpp))
        {
            Quaternion *sipRes;

            try
            {
            sipRes = new Quaternion(sipCpp->getConjugate());
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return sipConvertFromNewInstance(sipRes,sipClass_Quaternion,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Quaternion,sipNm_BALL_getConjugate);

    return NULL;
}


extern "C" {static PyObject *slot_Quaternion___ne__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_Quaternion___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    Quaternion *sipCpp = reinterpret_cast<Quaternion *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_Quaternion));

    if (!sipCpp)
        return 0;

    int sipArgsParsed = 0;

    {
        const Quaternion * a0;

        if (sipParseArgs(&sipArgsParsed,sipArg,"JA",sipClass_Quaternion,&a0))
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

    return sipPySlotExtend(&sipModuleAPI_BALL,ne_slot,sipClass_Quaternion,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_Quaternion___eq__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_Quaternion___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    Quaternion *sipCpp = reinterpret_cast<Quaternion *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_Quaternion));

    if (!sipCpp)
        return 0;

    int sipArgsParsed = 0;

    {
        const Quaternion * a0;

        if (sipParseArgs(&sipArgsParsed,sipArg,"JA",sipClass_Quaternion,&a0))
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

    return sipPySlotExtend(&sipModuleAPI_BALL,eq_slot,sipClass_Quaternion,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_Quaternion___isub__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_Quaternion___isub__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf,(PyTypeObject *)sipClass_Quaternion))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    Quaternion *sipCpp = reinterpret_cast<Quaternion *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_Quaternion));

    if (!sipCpp)
        return 0;

    int sipArgsParsed = 0;

    {
        const Quaternion * a0;

        if (sipParseArgs(&sipArgsParsed,sipArg,"JA",sipClass_Quaternion,&a0))
        {
            try
            {
            ((*sipCpp) -= *a0);
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    PyErr_Clear();

    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}


extern "C" {static PyObject *slot_Quaternion___iadd__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_Quaternion___iadd__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf,(PyTypeObject *)sipClass_Quaternion))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    Quaternion *sipCpp = reinterpret_cast<Quaternion *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_Quaternion));

    if (!sipCpp)
        return 0;

    int sipArgsParsed = 0;

    {
        const Quaternion * a0;

        if (sipParseArgs(&sipArgsParsed,sipArg,"JA",sipClass_Quaternion,&a0))
        {
            try
            {
            ((*sipCpp) += *a0);
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    PyErr_Clear();

    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_Quaternion(void *, sipWrapperType *);}
static void *cast_Quaternion(void *ptr,sipWrapperType *targetClass)
{
    if (targetClass == sipClass_Quaternion)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_Quaternion(void *, int);}
static void release_Quaternion(void *ptr,int)
{
    delete reinterpret_cast<Quaternion *>(ptr);
}


extern "C" {static void dealloc_Quaternion(sipWrapper *);}
static void dealloc_Quaternion(sipWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_Quaternion(sipSelf->u.cppPtr,0);
    }
}


extern "C" {static void *init_Quaternion(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_Quaternion(sipWrapper *,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    Quaternion *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            try
            {
            sipCpp = new Quaternion();
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
        const Quaternion * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_Quaternion,&a0))
        {
            try
            {
            sipCpp = new Quaternion(*a0);
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
            sipCpp = new Quaternion(*a0,a1);
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
        float a0;
        float a1;
        float a2;
        float a3;

        if (sipParseArgs(sipArgsParsed,sipArgs,"ffff",&a0,&a1,&a2,&a3))
        {
            try
            {
            sipCpp = new Quaternion(a0,a1,a2,a3);
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


extern "C" {static PyObject *var_Quaternion_angle(PyObject *, PyObject *);}
static PyObject *var_Quaternion_angle(PyObject *sipSelf,PyObject *sipPy)
{
   float sipVal;
    Quaternion *sipCpp = reinterpret_cast<Quaternion *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_Quaternion));

    if (!sipCpp)
        return NULL;

    if (sipPy == NULL)
    {
        sipVal = sipCpp->angle;

        sipPy = PyFloat_FromDouble((double)sipVal);

        return sipPy;
    }

	sipVal = (float)PyFloat_AsDouble(sipPy);

    if (PyErr_Occurred() != NULL)
    {
        sipBadSetType(sipNm_BALL_Quaternion,sipNm_BALL_angle);
        return NULL;
    }

    sipCpp->angle = sipVal;

    Py_INCREF(Py_None);
    return Py_None;
}


extern "C" {static PyObject *var_Quaternion_k(PyObject *, PyObject *);}
static PyObject *var_Quaternion_k(PyObject *sipSelf,PyObject *sipPy)
{
   float sipVal;
    Quaternion *sipCpp = reinterpret_cast<Quaternion *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_Quaternion));

    if (!sipCpp)
        return NULL;

    if (sipPy == NULL)
    {
        sipVal = sipCpp->k;

        sipPy = PyFloat_FromDouble((double)sipVal);

        return sipPy;
    }

	sipVal = (float)PyFloat_AsDouble(sipPy);

    if (PyErr_Occurred() != NULL)
    {
        sipBadSetType(sipNm_BALL_Quaternion,sipNm_BALL_k);
        return NULL;
    }

    sipCpp->k = sipVal;

    Py_INCREF(Py_None);
    return Py_None;
}


extern "C" {static PyObject *var_Quaternion_j(PyObject *, PyObject *);}
static PyObject *var_Quaternion_j(PyObject *sipSelf,PyObject *sipPy)
{
   float sipVal;
    Quaternion *sipCpp = reinterpret_cast<Quaternion *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_Quaternion));

    if (!sipCpp)
        return NULL;

    if (sipPy == NULL)
    {
        sipVal = sipCpp->j;

        sipPy = PyFloat_FromDouble((double)sipVal);

        return sipPy;
    }

	sipVal = (float)PyFloat_AsDouble(sipPy);

    if (PyErr_Occurred() != NULL)
    {
        sipBadSetType(sipNm_BALL_Quaternion,sipNm_BALL_j);
        return NULL;
    }

    sipCpp->j = sipVal;

    Py_INCREF(Py_None);
    return Py_None;
}


extern "C" {static PyObject *var_Quaternion_i(PyObject *, PyObject *);}
static PyObject *var_Quaternion_i(PyObject *sipSelf,PyObject *sipPy)
{
   float sipVal;
    Quaternion *sipCpp = reinterpret_cast<Quaternion *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_Quaternion));

    if (!sipCpp)
        return NULL;

    if (sipPy == NULL)
    {
        sipVal = sipCpp->i;

        sipPy = PyFloat_FromDouble((double)sipVal);

        return sipPy;
    }

	sipVal = (float)PyFloat_AsDouble(sipPy);

    if (PyErr_Occurred() != NULL)
    {
        sipBadSetType(sipNm_BALL_Quaternion,sipNm_BALL_i);
        return NULL;
    }

    sipCpp->i = sipVal;

    Py_INCREF(Py_None);
    return Py_None;
}

PyMethodDef variables_Quaternion[] = {
    {sipNm_BALL_angle, var_Quaternion_angle, 0, NULL},
    {sipNm_BALL_k, var_Quaternion_k, 0, NULL},
    {sipNm_BALL_j, var_Quaternion_j, 0, NULL},
    {sipNm_BALL_i, var_Quaternion_i, 0, NULL},
    {0, 0, 0, 0}
};


extern "C" {static void *forceConvertTo_Quaternion(PyObject *, int *);}
static void *forceConvertTo_Quaternion(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_Quaternion))
        return sipConvertToCpp(valobj,sipClass_Quaternion,iserrp);

    sipBadClass(sipNm_BALL_Quaternion);

    *iserrp = 1;

    return NULL;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_Quaternion[] = {
    {(void *)slot_Quaternion___ne__, ne_slot},
    {(void *)slot_Quaternion___eq__, eq_slot},
    {(void *)slot_Quaternion___isub__, isub_slot},
    {(void *)slot_Quaternion___iadd__, iadd_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_Quaternion[] = {
    {sipNm_BALL_get, meth_Quaternion_get, METH_VARARGS, NULL},
    {sipNm_BALL_getAngle, meth_Quaternion_getAngle, METH_VARARGS, NULL},
    {sipNm_BALL_getAxis, meth_Quaternion_getAxis, METH_VARARGS, NULL},
    {sipNm_BALL_getConjugate, meth_Quaternion_getConjugate, METH_VARARGS, NULL},
    {sipNm_BALL_getInverse, meth_Quaternion_getInverse, METH_VARARGS, NULL},
    {sipNm_BALL_getRotationMatrix, meth_Quaternion_getRotationMatrix, METH_VARARGS, NULL},
    {sipNm_BALL_set, meth_Quaternion_set, METH_VARARGS, NULL},
    {sipNm_BALL_setIdentity, meth_Quaternion_setIdentity, METH_VARARGS, NULL},
    {sipNm_BALL_swap, meth_Quaternion_swap, METH_VARARGS, NULL}
};


sipTypeDef sipType_BALL_Quaternion = {
    0,
    0,
    "BALL.Quaternion",
    0,
    {0, 0, 1},
    0,
    slots_Quaternion,
    9, methods_Quaternion,
    0, 0,
    variables_Quaternion,
    init_Quaternion,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_Quaternion,
    cast_Quaternion,
    release_Quaternion,
    forceConvertTo_Quaternion,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
