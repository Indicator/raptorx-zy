/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLCircle3.h"

#include "sipBALLVector3.h"
#include "sipBALLCircle3.h"



extern "C" {static PyObject *meth_Circle3_swap(PyObject *, PyObject *);}
static PyObject *meth_Circle3_swap(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Circle3 * a0;
        Circle3 *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_Circle3,&sipCpp,sipClass_Circle3,&a0))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Circle3,sipNm_BALL_swap);

    return NULL;
}


extern "C" {static PyObject *meth_Circle3_set(PyObject *, PyObject *);}
static PyObject *meth_Circle3_set(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const Circle3 * a0;
        Circle3 *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_Circle3,&sipCpp,sipClass_Circle3,&a0))
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
        const Vector3 * a1;
        float a2;
        Circle3 *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJAJAf",&sipSelf,sipClass_Circle3,&sipCpp,sipClass_Vector3,&a0,sipClass_Vector3,&a1,&a2))
        {
            try
            {
            sipCpp->set(*a0,*a1,a2);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Circle3,sipNm_BALL_set);

    return NULL;
}


extern "C" {static PyObject *meth_Circle3_get(PyObject *, PyObject *);}
static PyObject *meth_Circle3_get(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Circle3 * a0;
        Circle3 *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_Circle3,&sipCpp,sipClass_Circle3,&a0))
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
        Vector3 * a1;
        float a2;
        Circle3 *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJAJAf",&sipSelf,sipClass_Circle3,&sipCpp,sipClass_Vector3,&a0,sipClass_Vector3,&a1,&a2))
        {
            try
            {
            sipCpp->get(*a0,*a1,a2);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Circle3,sipNm_BALL_get);

    return NULL;
}


extern "C" {static PyObject *meth_Circle3_has(PyObject *, PyObject *);}
static PyObject *meth_Circle3_has(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const Vector3 * a0;
        bool a1 = 0;
        Circle3 *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA|b",&sipSelf,sipClass_Circle3,&sipCpp,sipClass_Vector3,&a0,&a1))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Circle3,sipNm_BALL_has);

    return NULL;
}


extern "C" {static PyObject *meth_Circle3_isValid(PyObject *, PyObject *);}
static PyObject *meth_Circle3_isValid(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Circle3 *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Circle3,&sipCpp))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Circle3,sipNm_BALL_isValid);

    return NULL;
}


extern "C" {static PyObject *slot_Circle3___ne__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_Circle3___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    Circle3 *sipCpp = reinterpret_cast<Circle3 *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_Circle3));

    if (!sipCpp)
        return 0;

    int sipArgsParsed = 0;

    {
        const Circle3 * a0;

        if (sipParseArgs(&sipArgsParsed,sipArg,"JA",sipClass_Circle3,&a0))
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

    return sipPySlotExtend(&sipModuleAPI_BALL,ne_slot,sipClass_Circle3,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_Circle3___eq__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_Circle3___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    Circle3 *sipCpp = reinterpret_cast<Circle3 *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_Circle3));

    if (!sipCpp)
        return 0;

    int sipArgsParsed = 0;

    {
        const Circle3 * a0;

        if (sipParseArgs(&sipArgsParsed,sipArg,"JA",sipClass_Circle3,&a0))
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

    return sipPySlotExtend(&sipModuleAPI_BALL,eq_slot,sipClass_Circle3,sipSelf,sipArg);
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_Circle3(void *, sipWrapperType *);}
static void *cast_Circle3(void *ptr,sipWrapperType *targetClass)
{
    if (targetClass == sipClass_Circle3)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_Circle3(void *, int);}
static void release_Circle3(void *ptr,int)
{
    delete reinterpret_cast<Circle3 *>(ptr);
}


extern "C" {static void dealloc_Circle3(sipWrapper *);}
static void dealloc_Circle3(sipWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_Circle3(sipSelf->u.cppPtr,0);
    }
}


extern "C" {static void *init_Circle3(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_Circle3(sipWrapper *,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    Circle3 *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            try
            {
            sipCpp = new Circle3();
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
        const Circle3 * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_Circle3,&a0))
        {
            try
            {
            sipCpp = new Circle3(*a0);
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
        const Vector3 * a1;
        float a2;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JAJAf",sipClass_Vector3,&a0,sipClass_Vector3,&a1,&a2))
        {
            try
            {
            sipCpp = new Circle3(*a0,*a1,a2);
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


extern "C" {static void *forceConvertTo_Circle3(PyObject *, int *);}
static void *forceConvertTo_Circle3(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_Circle3))
        return sipConvertToCpp(valobj,sipClass_Circle3,iserrp);

    sipBadClass(sipNm_BALL_Circle3);

    *iserrp = 1;

    return NULL;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_Circle3[] = {
    {(void *)slot_Circle3___ne__, ne_slot},
    {(void *)slot_Circle3___eq__, eq_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_Circle3[] = {
    {sipNm_BALL_get, meth_Circle3_get, METH_VARARGS, NULL},
    {sipNm_BALL_has, meth_Circle3_has, METH_VARARGS, NULL},
    {sipNm_BALL_isValid, meth_Circle3_isValid, METH_VARARGS, NULL},
    {sipNm_BALL_set, meth_Circle3_set, METH_VARARGS, NULL},
    {sipNm_BALL_swap, meth_Circle3_swap, METH_VARARGS, NULL}
};


sipTypeDef sipType_BALL_Circle3 = {
    0,
    0,
    "BALL.Circle3",
    0,
    {0, 0, 1},
    0,
    slots_Circle3,
    5, methods_Circle3,
    0, 0,
    0,
    init_Circle3,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_Circle3,
    cast_Circle3,
    release_Circle3,
    forceConvertTo_Circle3,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
