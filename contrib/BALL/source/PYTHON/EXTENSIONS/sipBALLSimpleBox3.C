/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLSimpleBox3.h"

#include "sipBALLVector3.h"
#include "sipBALLSimpleBox3.h"



extern "C" {static PyObject *meth_SimpleBox3_set(PyObject *, PyObject *);}
static PyObject *meth_SimpleBox3_set(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        SimpleBox3 * a0;
        SimpleBox3 *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_SimpleBox3,&sipCpp,sipClass_SimpleBox3,&a0))
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
        Vector3 * a0;
        Vector3 * a1;
        SimpleBox3 *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJAJA",&sipSelf,sipClass_SimpleBox3,&sipCpp,sipClass_Vector3,&a0,sipClass_Vector3,&a1))
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
        float a0;
        float a1;
        float a2;
        float a3;
        float a4;
        float a5;
        SimpleBox3 *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bffffff",&sipSelf,sipClass_SimpleBox3,&sipCpp,&a0,&a1,&a2,&a3,&a4,&a5))
        {
            try
            {
            sipCpp->set(a0,a1,a2,a3,a4,a5);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_SimpleBox3,sipNm_BALL_set);

    return NULL;
}


extern "C" {static PyObject *meth_SimpleBox3_get(PyObject *, PyObject *);}
static PyObject *meth_SimpleBox3_get(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        SimpleBox3 * a0;
        SimpleBox3 *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_SimpleBox3,&sipCpp,sipClass_SimpleBox3,&a0))
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
        SimpleBox3 *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJAJA",&sipSelf,sipClass_SimpleBox3,&sipCpp,sipClass_Vector3,&a0,sipClass_Vector3,&a1))
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

    {
        float a0;
        float a1;
        float a2;
        float a3;
        float a4;
        float a5;
        SimpleBox3 *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bffffff",&sipSelf,sipClass_SimpleBox3,&sipCpp,&a0,&a1,&a2,&a3,&a4,&a5))
        {
            try
            {
            sipCpp->get(a0,a1,a2,a3,a4,a5);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_SimpleBox3,sipNm_BALL_get);

    return NULL;
}


extern "C" {static PyObject *meth_SimpleBox3_swap(PyObject *, PyObject *);}
static PyObject *meth_SimpleBox3_swap(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        SimpleBox3 * a0;
        SimpleBox3 *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_SimpleBox3,&sipCpp,sipClass_SimpleBox3,&a0))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_SimpleBox3,sipNm_BALL_swap);

    return NULL;
}


extern "C" {static PyObject *meth_SimpleBox3_getSurface(PyObject *, PyObject *);}
static PyObject *meth_SimpleBox3_getSurface(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        SimpleBox3 *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_SimpleBox3,&sipCpp))
        {
            float sipRes;

            try
            {
            sipRes = sipCpp->getSurface();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_SimpleBox3,sipNm_BALL_getSurface);

    return NULL;
}


extern "C" {static PyObject *meth_SimpleBox3_getVolume(PyObject *, PyObject *);}
static PyObject *meth_SimpleBox3_getVolume(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        SimpleBox3 *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_SimpleBox3,&sipCpp))
        {
            float sipRes;

            try
            {
            sipRes = sipCpp->getVolume();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_SimpleBox3,sipNm_BALL_getVolume);

    return NULL;
}


extern "C" {static PyObject *meth_SimpleBox3_getWidth(PyObject *, PyObject *);}
static PyObject *meth_SimpleBox3_getWidth(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        SimpleBox3 *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_SimpleBox3,&sipCpp))
        {
            float sipRes;

            try
            {
            sipRes = sipCpp->getWidth();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_SimpleBox3,sipNm_BALL_getWidth);

    return NULL;
}


extern "C" {static PyObject *meth_SimpleBox3_getHeight(PyObject *, PyObject *);}
static PyObject *meth_SimpleBox3_getHeight(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        SimpleBox3 *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_SimpleBox3,&sipCpp))
        {
            float sipRes;

            try
            {
            sipRes = sipCpp->getHeight();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_SimpleBox3,sipNm_BALL_getHeight);

    return NULL;
}


extern "C" {static PyObject *meth_SimpleBox3_getDepth(PyObject *, PyObject *);}
static PyObject *meth_SimpleBox3_getDepth(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        SimpleBox3 *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_SimpleBox3,&sipCpp))
        {
            float sipRes;

            try
            {
            sipRes = sipCpp->getDepth();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_SimpleBox3,sipNm_BALL_getDepth);

    return NULL;
}


extern "C" {static PyObject *meth_SimpleBox3_join(PyObject *, PyObject *);}
static PyObject *meth_SimpleBox3_join(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        SimpleBox3 * a0;
        SimpleBox3 *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_SimpleBox3,&sipCpp,sipClass_SimpleBox3,&a0))
        {
            try
            {
            sipCpp->join(*a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_SimpleBox3,sipNm_BALL_join);

    return NULL;
}


extern "C" {static PyObject *meth_SimpleBox3_isValid(PyObject *, PyObject *);}
static PyObject *meth_SimpleBox3_isValid(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        SimpleBox3 *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_SimpleBox3,&sipCpp))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_SimpleBox3,sipNm_BALL_isValid);

    return NULL;
}


extern "C" {static PyObject *slot_SimpleBox3___str__(PyObject *sipSelf);}
static PyObject *slot_SimpleBox3___str__(PyObject *sipSelf)
{
    SimpleBox3 *sipCpp = reinterpret_cast<SimpleBox3 *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_SimpleBox3));

    if (!sipCpp)
        return 0;


    {
        {
            PyObject * sipRes = 0;

#line 47 "simpleBox3.sip"
	 static String tmp;
	 tmp = "SimpleBox3 { (";
	 tmp += String(sipCpp->a.x) + " ";
	 tmp += String(sipCpp->a.y) + " ";
	 tmp += String(sipCpp->a.z) + ") (";
	 tmp += String(sipCpp->b.x) + " ";
	 tmp += String(sipCpp->b.y) + " ";
	 tmp += String(sipCpp->b.z) + ") }";
	 sipRes = PyString_FromString(tmp.c_str());
#line 468 "sipBALLSimpleBox3.C"

            return sipRes;
        }
    }
}


extern "C" {static PyObject *slot_SimpleBox3___ne__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_SimpleBox3___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    SimpleBox3 *sipCpp = reinterpret_cast<SimpleBox3 *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_SimpleBox3));

    if (!sipCpp)
        return 0;

    int sipArgsParsed = 0;

    {
        SimpleBox3 * a0;

        if (sipParseArgs(&sipArgsParsed,sipArg,"JA",sipClass_SimpleBox3,&a0))
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

    return sipPySlotExtend(&sipModuleAPI_BALL,ne_slot,sipClass_SimpleBox3,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_SimpleBox3___eq__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_SimpleBox3___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    SimpleBox3 *sipCpp = reinterpret_cast<SimpleBox3 *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_SimpleBox3));

    if (!sipCpp)
        return 0;

    int sipArgsParsed = 0;

    {
        const SimpleBox3 * a0;

        if (sipParseArgs(&sipArgsParsed,sipArg,"JA",sipClass_SimpleBox3,&a0))
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

    return sipPySlotExtend(&sipModuleAPI_BALL,eq_slot,sipClass_SimpleBox3,sipSelf,sipArg);
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_SimpleBox3(void *, sipWrapperType *);}
static void *cast_SimpleBox3(void *ptr,sipWrapperType *targetClass)
{
    if (targetClass == sipClass_SimpleBox3)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_SimpleBox3(void *, int);}
static void release_SimpleBox3(void *ptr,int)
{
    delete reinterpret_cast<SimpleBox3 *>(ptr);
}


extern "C" {static void dealloc_SimpleBox3(sipWrapper *);}
static void dealloc_SimpleBox3(sipWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_SimpleBox3(sipSelf->u.cppPtr,0);
    }
}


extern "C" {static void *init_SimpleBox3(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_SimpleBox3(sipWrapper *,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    SimpleBox3 *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            try
            {
            sipCpp = new SimpleBox3();
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
        SimpleBox3 * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_SimpleBox3,&a0))
        {
            try
            {
            sipCpp = new SimpleBox3(*a0);
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
        Vector3 * a0;
        Vector3 * a1;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JAJA",sipClass_Vector3,&a0,sipClass_Vector3,&a1))
        {
            try
            {
            sipCpp = new SimpleBox3(*a0,*a1);
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
        float a4;
        float a5;

        if (sipParseArgs(sipArgsParsed,sipArgs,"ffffff",&a0,&a1,&a2,&a3,&a4,&a5))
        {
            try
            {
            sipCpp = new SimpleBox3(a0,a1,a2,a3,a4,a5);
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


extern "C" {static PyObject *var_SimpleBox3_b(PyObject *, PyObject *);}
static PyObject *var_SimpleBox3_b(PyObject *sipSelf,PyObject *sipPy)
{
    int sipIsErr = 0;
   Vector3 *sipVal;
    SimpleBox3 *sipCpp = reinterpret_cast<SimpleBox3 *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_SimpleBox3));

    if (!sipCpp)
        return NULL;

    if (sipPy == NULL)
    {
        sipVal = &sipCpp->b;

        sipPy = sipConvertFromInstance(sipVal,sipClass_Vector3,NULL);

        return sipPy;
    }

    sipVal = reinterpret_cast<Vector3 *>(sipForceConvertToInstance(sipPy,sipClass_Vector3,NULL,SIP_NOT_NONE,NULL,&sipIsErr));

    if (sipIsErr)
        return NULL;

    sipCpp->b = *sipVal;

    Py_INCREF(Py_None);
    return Py_None;
}


extern "C" {static PyObject *var_SimpleBox3_a(PyObject *, PyObject *);}
static PyObject *var_SimpleBox3_a(PyObject *sipSelf,PyObject *sipPy)
{
    int sipIsErr = 0;
   Vector3 *sipVal;
    SimpleBox3 *sipCpp = reinterpret_cast<SimpleBox3 *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_SimpleBox3));

    if (!sipCpp)
        return NULL;

    if (sipPy == NULL)
    {
        sipVal = &sipCpp->a;

        sipPy = sipConvertFromInstance(sipVal,sipClass_Vector3,NULL);

        return sipPy;
    }

    sipVal = reinterpret_cast<Vector3 *>(sipForceConvertToInstance(sipPy,sipClass_Vector3,NULL,SIP_NOT_NONE,NULL,&sipIsErr));

    if (sipIsErr)
        return NULL;

    sipCpp->a = *sipVal;

    Py_INCREF(Py_None);
    return Py_None;
}

PyMethodDef variables_SimpleBox3[] = {
    {sipNm_BALL_b, var_SimpleBox3_b, 0, NULL},
    {sipNm_BALL_a, var_SimpleBox3_a, 0, NULL},
    {0, 0, 0, 0}
};


extern "C" {static void *forceConvertTo_SimpleBox3(PyObject *, int *);}
static void *forceConvertTo_SimpleBox3(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_SimpleBox3))
        return sipConvertToCpp(valobj,sipClass_SimpleBox3,iserrp);

    sipBadClass(sipNm_BALL_SimpleBox3);

    *iserrp = 1;

    return NULL;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_SimpleBox3[] = {
    {(void *)slot_SimpleBox3___str__, str_slot},
    {(void *)slot_SimpleBox3___ne__, ne_slot},
    {(void *)slot_SimpleBox3___eq__, eq_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_SimpleBox3[] = {
    {sipNm_BALL_get, meth_SimpleBox3_get, METH_VARARGS, NULL},
    {sipNm_BALL_getDepth, meth_SimpleBox3_getDepth, METH_VARARGS, NULL},
    {sipNm_BALL_getHeight, meth_SimpleBox3_getHeight, METH_VARARGS, NULL},
    {sipNm_BALL_getSurface, meth_SimpleBox3_getSurface, METH_VARARGS, NULL},
    {sipNm_BALL_getVolume, meth_SimpleBox3_getVolume, METH_VARARGS, NULL},
    {sipNm_BALL_getWidth, meth_SimpleBox3_getWidth, METH_VARARGS, NULL},
    {sipNm_BALL_isValid, meth_SimpleBox3_isValid, METH_VARARGS, NULL},
    {sipNm_BALL_join, meth_SimpleBox3_join, METH_VARARGS, NULL},
    {sipNm_BALL_set, meth_SimpleBox3_set, METH_VARARGS, NULL},
    {sipNm_BALL_swap, meth_SimpleBox3_swap, METH_VARARGS, NULL}
};


sipTypeDef sipType_BALL_SimpleBox3 = {
    0,
    0,
    "BALL.SimpleBox3",
    0,
    {0, 0, 1},
    0,
    slots_SimpleBox3,
    10, methods_SimpleBox3,
    0, 0,
    variables_SimpleBox3,
    init_SimpleBox3,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_SimpleBox3,
    cast_SimpleBox3,
    release_SimpleBox3,
    forceConvertTo_SimpleBox3,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
