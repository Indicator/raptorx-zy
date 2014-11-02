/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLClippingPlane.h"

#include "sipBALLClippingPlane.h"
#include "sipBALLVector3.h"



extern "C" {static PyObject *meth_ClippingPlane_clear(PyObject *, PyObject *);}
static PyObject *meth_ClippingPlane_clear(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        ClippingPlane *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_ClippingPlane,&sipCpp))
        {
            sipCpp->clear();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_ClippingPlane,sipNm_BALL_clear);

    return NULL;
}


extern "C" {static PyObject *meth_ClippingPlane_getNormal(PyObject *, PyObject *);}
static PyObject *meth_ClippingPlane_getNormal(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        ClippingPlane *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_ClippingPlane,&sipCpp))
        {
            const Vector3 *sipRes;

            try
            {
            sipRes = &sipCpp->getNormal();
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return sipConvertFromInstance(const_cast<Vector3 *>(sipRes),sipClass_Vector3,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_ClippingPlane,sipNm_BALL_getNormal);

    return NULL;
}


extern "C" {static PyObject *meth_ClippingPlane_setNormal(PyObject *, PyObject *);}
static PyObject *meth_ClippingPlane_setNormal(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const Vector3 * a0;
        ClippingPlane *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_ClippingPlane,&sipCpp,sipClass_Vector3,&a0))
        {
            try
            {
            sipCpp->setNormal(*a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_ClippingPlane,sipNm_BALL_setNormal);

    return NULL;
}


extern "C" {static PyObject *meth_ClippingPlane_isActive(PyObject *, PyObject *);}
static PyObject *meth_ClippingPlane_isActive(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        ClippingPlane *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_ClippingPlane,&sipCpp))
        {
            bool sipRes;

            try
            {
            sipRes = sipCpp->isActive();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_ClippingPlane,sipNm_BALL_isActive);

    return NULL;
}


extern "C" {static PyObject *meth_ClippingPlane_setActive(PyObject *, PyObject *);}
static PyObject *meth_ClippingPlane_setActive(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        bool a0;
        ClippingPlane *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bb",&sipSelf,sipClass_ClippingPlane,&sipCpp,&a0))
        {
            try
            {
            sipCpp->setActive(a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_ClippingPlane,sipNm_BALL_setActive);

    return NULL;
}


extern "C" {static PyObject *meth_ClippingPlane_isHidden(PyObject *, PyObject *);}
static PyObject *meth_ClippingPlane_isHidden(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        ClippingPlane *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_ClippingPlane,&sipCpp))
        {
            bool sipRes;

            try
            {
            sipRes = sipCpp->isHidden();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_ClippingPlane,sipNm_BALL_isHidden);

    return NULL;
}


extern "C" {static PyObject *meth_ClippingPlane_setHidden(PyObject *, PyObject *);}
static PyObject *meth_ClippingPlane_setHidden(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        bool a0;
        ClippingPlane *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bb",&sipSelf,sipClass_ClippingPlane,&sipCpp,&a0))
        {
            try
            {
            sipCpp->setHidden(a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_ClippingPlane,sipNm_BALL_setHidden);

    return NULL;
}


extern "C" {static PyObject *meth_ClippingPlane_getDistance(PyObject *, PyObject *);}
static PyObject *meth_ClippingPlane_getDistance(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        ClippingPlane *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_ClippingPlane,&sipCpp))
        {
            float sipRes;

            try
            {
            sipRes = sipCpp->getDistance();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_ClippingPlane,sipNm_BALL_getDistance);

    return NULL;
}


extern "C" {static PyObject *meth_ClippingPlane_getPoint(PyObject *, PyObject *);}
static PyObject *meth_ClippingPlane_getPoint(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        ClippingPlane *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_ClippingPlane,&sipCpp))
        {
            const Vector3 *sipRes;

            try
            {
            sipRes = &sipCpp->getPoint();
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return sipConvertFromInstance(const_cast<Vector3 *>(sipRes),sipClass_Vector3,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_ClippingPlane,sipNm_BALL_getPoint);

    return NULL;
}


extern "C" {static PyObject *meth_ClippingPlane_setPoint(PyObject *, PyObject *);}
static PyObject *meth_ClippingPlane_setPoint(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const Vector3 * a0;
        ClippingPlane *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_ClippingPlane,&sipCpp,sipClass_Vector3,&a0))
        {
            try
            {
            sipCpp->setPoint(*a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_ClippingPlane,sipNm_BALL_setPoint);

    return NULL;
}


extern "C" {static PyObject *meth_ClippingPlane_flip(PyObject *, PyObject *);}
static PyObject *meth_ClippingPlane_flip(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        ClippingPlane *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_ClippingPlane,&sipCpp))
        {
            try
            {
            sipCpp->flip();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_ClippingPlane,sipNm_BALL_flip);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_ClippingPlane(void *, sipWrapperType *);}
static void *cast_ClippingPlane(void *ptr,sipWrapperType *targetClass)
{
    if (targetClass == sipClass_ClippingPlane)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_ClippingPlane(void *, int);}
static void release_ClippingPlane(void *ptr,int)
{
    delete reinterpret_cast<ClippingPlane *>(ptr);
}


extern "C" {static void dealloc_ClippingPlane(sipWrapper *);}
static void dealloc_ClippingPlane(sipWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_ClippingPlane(sipSelf->u.cppPtr,0);
    }
}


extern "C" {static void *init_ClippingPlane(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_ClippingPlane(sipWrapper *,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    ClippingPlane *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            sipCpp = new ClippingPlane();
        }
    }

    if (!sipCpp)
    {
        const ClippingPlane * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_ClippingPlane,&a0))
        {
            sipCpp = new ClippingPlane(*a0);
        }
    }

    return sipCpp;
}


extern "C" {static void *forceConvertTo_ClippingPlane(PyObject *, int *);}
static void *forceConvertTo_ClippingPlane(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_ClippingPlane))
        return sipConvertToCpp(valobj,sipClass_ClippingPlane,iserrp);

    sipBadClass(sipNm_BALL_ClippingPlane);

    *iserrp = 1;

    return NULL;
}


static PyMethodDef methods_ClippingPlane[] = {
    {sipNm_BALL_clear, meth_ClippingPlane_clear, METH_VARARGS, NULL},
    {sipNm_BALL_flip, meth_ClippingPlane_flip, METH_VARARGS, NULL},
    {sipNm_BALL_getDistance, meth_ClippingPlane_getDistance, METH_VARARGS, NULL},
    {sipNm_BALL_getNormal, meth_ClippingPlane_getNormal, METH_VARARGS, NULL},
    {sipNm_BALL_getPoint, meth_ClippingPlane_getPoint, METH_VARARGS, NULL},
    {sipNm_BALL_isActive, meth_ClippingPlane_isActive, METH_VARARGS, NULL},
    {sipNm_BALL_isHidden, meth_ClippingPlane_isHidden, METH_VARARGS, NULL},
    {sipNm_BALL_setActive, meth_ClippingPlane_setActive, METH_VARARGS, NULL},
    {sipNm_BALL_setHidden, meth_ClippingPlane_setHidden, METH_VARARGS, NULL},
    {sipNm_BALL_setNormal, meth_ClippingPlane_setNormal, METH_VARARGS, NULL},
    {sipNm_BALL_setPoint, meth_ClippingPlane_setPoint, METH_VARARGS, NULL}
};


sipTypeDef sipType_BALL_ClippingPlane = {
    0,
    0,
    "BALL.ClippingPlane",
    0,
    {0, 0, 1},
    0,
    0,
    11, methods_ClippingPlane,
    0, 0,
    0,
    init_ClippingPlane,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_ClippingPlane,
    cast_ClippingPlane,
    release_ClippingPlane,
    forceConvertTo_ClippingPlane,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
