/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLBox3.h"

#include "sipBALLVector3.h"
#include "sipBALLBox3.h"



extern "C" {static PyObject *meth_Box3_set(PyObject *, PyObject *);}
static PyObject *meth_Box3_set(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Box3 * a0;
        Box3 *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_Box3,&sipCpp,sipClass_Box3,&a0))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Box3,sipNm_BALL_set);

    return NULL;
}


extern "C" {static PyObject *meth_Box3_getSurface(PyObject *, PyObject *);}
static PyObject *meth_Box3_getSurface(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Box3 *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Box3,&sipCpp))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Box3,sipNm_BALL_getSurface);

    return NULL;
}


extern "C" {static PyObject *meth_Box3_getVolume(PyObject *, PyObject *);}
static PyObject *meth_Box3_getVolume(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Box3 *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Box3,&sipCpp))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Box3,sipNm_BALL_getVolume);

    return NULL;
}


extern "C" {static PyObject *meth_Box3_getWidth(PyObject *, PyObject *);}
static PyObject *meth_Box3_getWidth(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Box3 *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Box3,&sipCpp))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Box3,sipNm_BALL_getWidth);

    return NULL;
}


extern "C" {static PyObject *meth_Box3_getHeight(PyObject *, PyObject *);}
static PyObject *meth_Box3_getHeight(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Box3 *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Box3,&sipCpp))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Box3,sipNm_BALL_getHeight);

    return NULL;
}


extern "C" {static PyObject *meth_Box3_getDepth(PyObject *, PyObject *);}
static PyObject *meth_Box3_getDepth(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Box3 *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Box3,&sipCpp))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Box3,sipNm_BALL_getDepth);

    return NULL;
}


extern "C" {static PyObject *meth_Box3_isValid(PyObject *, PyObject *);}
static PyObject *meth_Box3_isValid(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Box3 *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Box3,&sipCpp))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Box3,sipNm_BALL_isValid);

    return NULL;
}


extern "C" {static PyObject *slot_Box3___str__(PyObject *sipSelf);}
static PyObject *slot_Box3___str__(PyObject *sipSelf)
{
    Box3 *sipCpp = reinterpret_cast<Box3 *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_Box3));

    if (!sipCpp)
        return 0;


    {
        {
            PyObject * sipRes = 0;

#line 33 "box3.sip"
	static String tmp;
	tmp = "Box3 { (";
	tmp += String(sipCpp->getWidth()) + " x ";
	tmp += String(sipCpp->getHeight()) + " x ";
	tmp += String(sipCpp->getDepth()) + ") @ ( ";
	tmp += String(sipCpp->getPoint().x) + " ";
	tmp += String(sipCpp->getPoint().y) + " ";
	tmp += String(sipCpp->getPoint().z) + ") }";
	sipRes = PyString_FromString(tmp.c_str());
#line 273 "sipBALLBox3.C"

            return sipRes;
        }
    }
}


extern "C" {static PyObject *slot_Box3___ne__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_Box3___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    Box3 *sipCpp = reinterpret_cast<Box3 *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_Box3));

    if (!sipCpp)
        return 0;

    int sipArgsParsed = 0;

    {
        Box3 * a0;

        if (sipParseArgs(&sipArgsParsed,sipArg,"JA",sipClass_Box3,&a0))
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

    return sipPySlotExtend(&sipModuleAPI_BALL,ne_slot,sipClass_Box3,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_Box3___eq__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_Box3___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    Box3 *sipCpp = reinterpret_cast<Box3 *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_Box3));

    if (!sipCpp)
        return 0;

    int sipArgsParsed = 0;

    {
        const Box3 * a0;

        if (sipParseArgs(&sipArgsParsed,sipArg,"JA",sipClass_Box3,&a0))
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

    return sipPySlotExtend(&sipModuleAPI_BALL,eq_slot,sipClass_Box3,sipSelf,sipArg);
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_Box3(void *, sipWrapperType *);}
static void *cast_Box3(void *ptr,sipWrapperType *targetClass)
{
    if (targetClass == sipClass_Box3)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_Box3(void *, int);}
static void release_Box3(void *ptr,int)
{
    delete reinterpret_cast<Box3 *>(ptr);
}


extern "C" {static void dealloc_Box3(sipWrapper *);}
static void dealloc_Box3(sipWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_Box3(sipSelf->u.cppPtr,0);
    }
}


extern "C" {static void *init_Box3(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_Box3(sipWrapper *,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    Box3 *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            try
            {
            sipCpp = new Box3();
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
        Box3 * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_Box3,&a0))
        {
            try
            {
            sipCpp = new Box3(*a0);
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
            sipCpp = new Box3(*a0,*a1);
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


extern "C" {static void *forceConvertTo_Box3(PyObject *, int *);}
static void *forceConvertTo_Box3(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_Box3))
        return sipConvertToCpp(valobj,sipClass_Box3,iserrp);

    sipBadClass(sipNm_BALL_Box3);

    *iserrp = 1;

    return NULL;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_Box3[] = {
    {(void *)slot_Box3___str__, str_slot},
    {(void *)slot_Box3___ne__, ne_slot},
    {(void *)slot_Box3___eq__, eq_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_Box3[] = {
    {sipNm_BALL_getDepth, meth_Box3_getDepth, METH_VARARGS, NULL},
    {sipNm_BALL_getHeight, meth_Box3_getHeight, METH_VARARGS, NULL},
    {sipNm_BALL_getSurface, meth_Box3_getSurface, METH_VARARGS, NULL},
    {sipNm_BALL_getVolume, meth_Box3_getVolume, METH_VARARGS, NULL},
    {sipNm_BALL_getWidth, meth_Box3_getWidth, METH_VARARGS, NULL},
    {sipNm_BALL_isValid, meth_Box3_isValid, METH_VARARGS, NULL},
    {sipNm_BALL_set, meth_Box3_set, METH_VARARGS, NULL}
};


sipTypeDef sipType_BALL_Box3 = {
    0,
    0,
    "BALL.Box3",
    0,
    {0, 0, 1},
    0,
    slots_Box3,
    7, methods_Box3,
    0, 0,
    0,
    init_Box3,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_Box3,
    cast_Box3,
    release_Box3,
    forceConvertTo_Box3,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
