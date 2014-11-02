/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLPlane3.h"

#include "sipBALLVector3.h"
#include "sipBALLPlane3.h"
#include "sipBALLLine3.h"



extern "C" {static PyObject *meth_Plane3_swap(PyObject *, PyObject *);}
static PyObject *meth_Plane3_swap(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Plane3 * a0;
        Plane3 *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_Plane3,&sipCpp,sipClass_Plane3,&a0))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Plane3,sipNm_BALL_swap);

    return NULL;
}


extern "C" {static PyObject *meth_Plane3_set(PyObject *, PyObject *);}
static PyObject *meth_Plane3_set(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const Plane3 * a0;
        Plane3 *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_Plane3,&sipCpp,sipClass_Plane3,&a0))
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
        Plane3 *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJAJA",&sipSelf,sipClass_Plane3,&sipCpp,sipClass_Vector3,&a0,sipClass_Vector3,&a1))
        {
            try
            {
            sipCpp->set(*a0,*a1);
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
        const Vector3 * a2;
        Plane3 *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJAJAJA",&sipSelf,sipClass_Plane3,&sipCpp,sipClass_Vector3,&a0,sipClass_Vector3,&a1,sipClass_Vector3,&a2))
        {
            try
            {
            sipCpp->set(*a0,*a1,*a2);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Plane3,sipNm_BALL_set);

    return NULL;
}


extern "C" {static PyObject *meth_Plane3_get(PyObject *, PyObject *);}
static PyObject *meth_Plane3_get(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Plane3 * a0;
        Plane3 *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_Plane3,&sipCpp,sipClass_Plane3,&a0))
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
        Plane3 *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJAJA",&sipSelf,sipClass_Plane3,&sipCpp,sipClass_Vector3,&a0,sipClass_Vector3,&a1))
        {
            try
            {
            sipCpp->get(*a0,*a1);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Plane3,sipNm_BALL_get);

    return NULL;
}


extern "C" {static PyObject *meth_Plane3_normalize(PyObject *, PyObject *);}
static PyObject *meth_Plane3_normalize(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Plane3 *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Plane3,&sipCpp))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Plane3,sipNm_BALL_normalize);

    return NULL;
}


extern "C" {static PyObject *meth_Plane3_hessify(PyObject *, PyObject *);}
static PyObject *meth_Plane3_hessify(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Plane3 *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Plane3,&sipCpp))
        {
            try
            {
            sipCpp->hessify();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Plane3,sipNm_BALL_hessify);

    return NULL;
}


extern "C" {static PyObject *meth_Plane3_has(PyObject *, PyObject *);}
static PyObject *meth_Plane3_has(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const Vector3 * a0;
        Plane3 *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_Plane3,&sipCpp,sipClass_Vector3,&a0))
        {
            bool sipRes;

            try
            {
            sipRes = sipCpp->has(*a0);
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return PyBool_FromLong(sipRes);
        }
    }

    {
        const Line3 * a0;
        Plane3 *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_Plane3,&sipCpp,sipClass_Line3,&a0))
        {
            bool sipRes;

            try
            {
            sipRes = sipCpp->has(*a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Plane3,sipNm_BALL_has);

    return NULL;
}


extern "C" {static PyObject *meth_Plane3_isValid(PyObject *, PyObject *);}
static PyObject *meth_Plane3_isValid(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Plane3 *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Plane3,&sipCpp))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Plane3,sipNm_BALL_isValid);

    return NULL;
}


extern "C" {static PyObject *slot_Plane3___ne__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_Plane3___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    Plane3 *sipCpp = reinterpret_cast<Plane3 *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_Plane3));

    if (!sipCpp)
        return 0;

    int sipArgsParsed = 0;

    {
        const Plane3 * a0;

        if (sipParseArgs(&sipArgsParsed,sipArg,"JA",sipClass_Plane3,&a0))
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

    return sipPySlotExtend(&sipModuleAPI_BALL,ne_slot,sipClass_Plane3,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_Plane3___eq__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_Plane3___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    Plane3 *sipCpp = reinterpret_cast<Plane3 *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_Plane3));

    if (!sipCpp)
        return 0;

    int sipArgsParsed = 0;

    {
        const Plane3 * a0;

        if (sipParseArgs(&sipArgsParsed,sipArg,"JA",sipClass_Plane3,&a0))
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

    return sipPySlotExtend(&sipModuleAPI_BALL,eq_slot,sipClass_Plane3,sipSelf,sipArg);
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_Plane3(void *, sipWrapperType *);}
static void *cast_Plane3(void *ptr,sipWrapperType *targetClass)
{
    if (targetClass == sipClass_Plane3)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_Plane3(void *, int);}
static void release_Plane3(void *ptr,int)
{
    delete reinterpret_cast<Plane3 *>(ptr);
}


extern "C" {static void dealloc_Plane3(sipWrapper *);}
static void dealloc_Plane3(sipWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_Plane3(sipSelf->u.cppPtr,0);
    }
}


extern "C" {static void *init_Plane3(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_Plane3(sipWrapper *,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    Plane3 *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            try
            {
            sipCpp = new Plane3();
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
        const Plane3 * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_Plane3,&a0))
        {
            try
            {
            sipCpp = new Plane3(*a0);
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

        if (sipParseArgs(sipArgsParsed,sipArgs,"JAJA",sipClass_Vector3,&a0,sipClass_Vector3,&a1))
        {
            try
            {
            sipCpp = new Plane3(*a0,*a1);
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
        const Vector3 * a2;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JAJAJA",sipClass_Vector3,&a0,sipClass_Vector3,&a1,sipClass_Vector3,&a2))
        {
            try
            {
            sipCpp = new Plane3(*a0,*a1,*a2);
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
            sipCpp = new Plane3(a0,a1,a2,a3);
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


extern "C" {static void *forceConvertTo_Plane3(PyObject *, int *);}
static void *forceConvertTo_Plane3(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_Plane3))
        return sipConvertToCpp(valobj,sipClass_Plane3,iserrp);

    sipBadClass(sipNm_BALL_Plane3);

    *iserrp = 1;

    return NULL;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_Plane3[] = {
    {(void *)slot_Plane3___ne__, ne_slot},
    {(void *)slot_Plane3___eq__, eq_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_Plane3[] = {
    {sipNm_BALL_get, meth_Plane3_get, METH_VARARGS, NULL},
    {sipNm_BALL_has, meth_Plane3_has, METH_VARARGS, NULL},
    {sipNm_BALL_hessify, meth_Plane3_hessify, METH_VARARGS, NULL},
    {sipNm_BALL_isValid, meth_Plane3_isValid, METH_VARARGS, NULL},
    {sipNm_BALL_normalize, meth_Plane3_normalize, METH_VARARGS, NULL},
    {sipNm_BALL_set, meth_Plane3_set, METH_VARARGS, NULL},
    {sipNm_BALL_swap, meth_Plane3_swap, METH_VARARGS, NULL}
};


sipTypeDef sipType_BALL_Plane3 = {
    0,
    0,
    "BALL.Plane3",
    0,
    {0, 0, 1},
    0,
    slots_Plane3,
    7, methods_Plane3,
    0, 0,
    0,
    init_Plane3,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_Plane3,
    cast_Plane3,
    release_Plane3,
    forceConvertTo_Plane3,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
