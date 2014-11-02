/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLLine3.h"

#include "sipBALLVector3.h"
#include "sipBALLLine3.h"



extern "C" {static PyObject *meth_Line3_swap(PyObject *, PyObject *);}
static PyObject *meth_Line3_swap(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Line3 * a0;
        Line3 *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_Line3,&sipCpp,sipClass_Line3,&a0))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Line3,sipNm_BALL_swap);

    return NULL;
}


extern "C" {static PyObject *meth_Line3_set(PyObject *, PyObject *);}
static PyObject *meth_Line3_set(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const Line3 * a0;
        Line3 *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_Line3,&sipCpp,sipClass_Line3,&a0))
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
        Line3::Form a2 = Line3::FORM__PARAMETER;
        Line3 *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJAJA|E",&sipSelf,sipClass_Line3,&sipCpp,sipClass_Vector3,&a0,sipClass_Vector3,&a1,sipEnum_Line3_Form,&a2))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Line3,sipNm_BALL_set);

    return NULL;
}


extern "C" {static PyObject *meth_Line3_get(PyObject *, PyObject *);}
static PyObject *meth_Line3_get(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Line3 * a0;
        Line3 *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_Line3,&sipCpp,sipClass_Line3,&a0))
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
        Line3::Form a2 = Line3::FORM__PARAMETER;
        Line3 *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJAJA|E",&sipSelf,sipClass_Line3,&sipCpp,sipClass_Vector3,&a0,sipClass_Vector3,&a1,sipEnum_Line3_Form,&a2))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Line3,sipNm_BALL_get);

    return NULL;
}


extern "C" {static PyObject *meth_Line3_normalize(PyObject *, PyObject *);}
static PyObject *meth_Line3_normalize(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Line3 *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Line3,&sipCpp))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Line3,sipNm_BALL_normalize);

    return NULL;
}


extern "C" {static PyObject *meth_Line3_has(PyObject *, PyObject *);}
static PyObject *meth_Line3_has(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const Vector3 * a0;
        Line3 *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_Line3,&sipCpp,sipClass_Vector3,&a0))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Line3,sipNm_BALL_has);

    return NULL;
}


extern "C" {static PyObject *meth_Line3_isValid(PyObject *, PyObject *);}
static PyObject *meth_Line3_isValid(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Line3 *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Line3,&sipCpp))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Line3,sipNm_BALL_isValid);

    return NULL;
}


extern "C" {static PyObject *slot_Line3___ne__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_Line3___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    Line3 *sipCpp = reinterpret_cast<Line3 *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_Line3));

    if (!sipCpp)
        return 0;

    int sipArgsParsed = 0;

    {
        const Line3 * a0;

        if (sipParseArgs(&sipArgsParsed,sipArg,"JA",sipClass_Line3,&a0))
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

    return sipPySlotExtend(&sipModuleAPI_BALL,ne_slot,sipClass_Line3,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_Line3___eq__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_Line3___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    Line3 *sipCpp = reinterpret_cast<Line3 *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_Line3));

    if (!sipCpp)
        return 0;

    int sipArgsParsed = 0;

    {
        const Line3 * a0;

        if (sipParseArgs(&sipArgsParsed,sipArg,"JA",sipClass_Line3,&a0))
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

    return sipPySlotExtend(&sipModuleAPI_BALL,eq_slot,sipClass_Line3,sipSelf,sipArg);
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_Line3(void *, sipWrapperType *);}
static void *cast_Line3(void *ptr,sipWrapperType *targetClass)
{
    if (targetClass == sipClass_Line3)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_Line3(void *, int);}
static void release_Line3(void *ptr,int)
{
    delete reinterpret_cast<Line3 *>(ptr);
}


extern "C" {static void dealloc_Line3(sipWrapper *);}
static void dealloc_Line3(sipWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_Line3(sipSelf->u.cppPtr,0);
    }
}


extern "C" {static void *init_Line3(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_Line3(sipWrapper *,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    Line3 *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            try
            {
            sipCpp = new Line3();
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
        const Line3 * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_Line3,&a0))
        {
            try
            {
            sipCpp = new Line3(*a0);
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
        Line3::Form a2 = Line3::FORM__PARAMETER;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JAJA|E",sipClass_Vector3,&a0,sipClass_Vector3,&a1,sipEnum_Line3_Form,&a2))
        {
            try
            {
            sipCpp = new Line3(*a0,*a1,a2);
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


extern "C" {static PyObject *var_Line3_d(PyObject *, PyObject *);}
static PyObject *var_Line3_d(PyObject *sipSelf,PyObject *sipPy)
{
    int sipIsErr = 0;
   Vector3 *sipVal;
    Line3 *sipCpp = reinterpret_cast<Line3 *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_Line3));

    if (!sipCpp)
        return NULL;

    if (sipPy == NULL)
    {
        sipVal = &sipCpp->d;

        sipPy = sipConvertFromInstance(sipVal,sipClass_Vector3,NULL);

        return sipPy;
    }

    sipVal = reinterpret_cast<Vector3 *>(sipForceConvertToInstance(sipPy,sipClass_Vector3,NULL,SIP_NOT_NONE,NULL,&sipIsErr));

    if (sipIsErr)
        return NULL;

    sipCpp->d = *sipVal;

    Py_INCREF(Py_None);
    return Py_None;
}


extern "C" {static PyObject *var_Line3_p(PyObject *, PyObject *);}
static PyObject *var_Line3_p(PyObject *sipSelf,PyObject *sipPy)
{
    int sipIsErr = 0;
   Vector3 *sipVal;
    Line3 *sipCpp = reinterpret_cast<Line3 *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_Line3));

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

PyMethodDef variables_Line3[] = {
    {sipNm_BALL_d, var_Line3_d, 0, NULL},
    {sipNm_BALL_p, var_Line3_p, 0, NULL},
    {0, 0, 0, 0}
};


extern "C" {static void *forceConvertTo_Line3(PyObject *, int *);}
static void *forceConvertTo_Line3(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_Line3))
        return sipConvertToCpp(valobj,sipClass_Line3,iserrp);

    sipBadClass(sipNm_BALL_Line3);

    *iserrp = 1;

    return NULL;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_Line3[] = {
    {(void *)slot_Line3___ne__, ne_slot},
    {(void *)slot_Line3___eq__, eq_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_Line3[] = {
    {sipNm_BALL_get, meth_Line3_get, METH_VARARGS, NULL},
    {sipNm_BALL_has, meth_Line3_has, METH_VARARGS, NULL},
    {sipNm_BALL_isValid, meth_Line3_isValid, METH_VARARGS, NULL},
    {sipNm_BALL_normalize, meth_Line3_normalize, METH_VARARGS, NULL},
    {sipNm_BALL_set, meth_Line3_set, METH_VARARGS, NULL},
    {sipNm_BALL_swap, meth_Line3_swap, METH_VARARGS, NULL}
};

static sipEnumMemberDef enummembers_Line3[] = {
    {sipNm_BALL_FORM__PARAMETER, Line3::FORM__PARAMETER, 20},
    {sipNm_BALL_FORM__TWO_POINTS, Line3::FORM__TWO_POINTS, 20},
};


sipTypeDef sipType_BALL_Line3 = {
    0,
    0,
    "BALL.Line3",
    0,
    {0, 0, 1},
    0,
    slots_Line3,
    6, methods_Line3,
    2, enummembers_Line3,
    variables_Line3,
    init_Line3,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_Line3,
    cast_Line3,
    release_Line3,
    forceConvertTo_Line3,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
