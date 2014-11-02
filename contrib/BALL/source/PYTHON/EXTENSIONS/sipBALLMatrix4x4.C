/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLMatrix4x4.h"

#include "sipBALLVector4.h"
#include "sipBALLMatrix4x4.h"
#include "sipBALLAngle.h"
#include "sipBALLVector3.h"
#include "sipBALLPosition.h"



extern "C" {static PyObject *meth_Matrix4x4_set(PyObject *, PyObject *);}
static PyObject *meth_Matrix4x4_set(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const Matrix4x4 * a0;
        Matrix4x4 *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_Matrix4x4,&sipCpp,sipClass_Matrix4x4,&a0))
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
        const Vector4 * a0;
        const Vector4 * a1;
        const Vector4 * a2;
        const Vector4 * a3;
        Matrix4x4 *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJAJAJAJA",&sipSelf,sipClass_Matrix4x4,&sipCpp,sipClass_Vector4,&a0,sipClass_Vector4,&a1,sipClass_Vector4,&a2,sipClass_Vector4,&a3))
        {
            try
            {
            sipCpp->set(*a0,*a1,*a2,*a3);
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
        float a6;
        float a7;
        float a8;
        float a9;
        float a10;
        float a11;
        float a12;
        float a13;
        float a14;
        float a15;
        Matrix4x4 *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bffffffffffffffff",&sipSelf,sipClass_Matrix4x4,&sipCpp,&a0,&a1,&a2,&a3,&a4,&a5,&a6,&a7,&a8,&a9,&a10,&a11,&a12,&a13,&a14,&a15))
        {
            try
            {
            sipCpp->set(a0,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13,a14,a15);
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
        float a0 = 1;
        Matrix4x4 *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B|f",&sipSelf,sipClass_Matrix4x4,&sipCpp,&a0))
        {
            try
            {
            sipCpp->set(a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Matrix4x4,sipNm_BALL_set);

    return NULL;
}


extern "C" {static PyObject *meth_Matrix4x4_get(PyObject *, PyObject *);}
static PyObject *meth_Matrix4x4_get(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Matrix4x4 * a0;
        Matrix4x4 *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_Matrix4x4,&sipCpp,sipClass_Matrix4x4,&a0))
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
        Vector4 * a0;
        Vector4 * a1;
        Vector4 * a2;
        Vector4 * a3;
        Matrix4x4 *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJAJAJAJA",&sipSelf,sipClass_Matrix4x4,&sipCpp,sipClass_Vector4,&a0,sipClass_Vector4,&a1,sipClass_Vector4,&a2,sipClass_Vector4,&a3))
        {
            try
            {
            sipCpp->get(*a0,*a1,*a2,*a3);
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
        float a6;
        float a7;
        float a8;
        float a9;
        float a10;
        float a11;
        float a12;
        float a13;
        float a14;
        float a15;
        Matrix4x4 *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bffffffffffffffff",&sipSelf,sipClass_Matrix4x4,&sipCpp,&a0,&a1,&a2,&a3,&a4,&a5,&a6,&a7,&a8,&a9,&a10,&a11,&a12,&a13,&a14,&a15))
        {
            try
            {
            sipCpp->get(a0,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13,a14,a15);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Matrix4x4,sipNm_BALL_get);

    return NULL;
}


extern "C" {static PyObject *meth_Matrix4x4_swap(PyObject *, PyObject *);}
static PyObject *meth_Matrix4x4_swap(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Matrix4x4 * a0;
        Matrix4x4 *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_Matrix4x4,&sipCpp,sipClass_Matrix4x4,&a0))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Matrix4x4,sipNm_BALL_swap);

    return NULL;
}


extern "C" {static PyObject *meth_Matrix4x4_getTrace(PyObject *, PyObject *);}
static PyObject *meth_Matrix4x4_getTrace(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Matrix4x4 *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Matrix4x4,&sipCpp))
        {
            float sipRes;

            try
            {
            sipRes = sipCpp->getTrace();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Matrix4x4,sipNm_BALL_getTrace);

    return NULL;
}


extern "C" {static PyObject *meth_Matrix4x4_getZero(PyObject *, PyObject *);}
static PyObject *meth_Matrix4x4_getZero(PyObject *,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        if (sipParseArgs(&sipArgsParsed,sipArgs,""))
        {
            const Matrix4x4 *sipRes;

            try
            {
            sipRes = &Matrix4x4::getZero();
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return sipConvertFromInstance(const_cast<Matrix4x4 *>(sipRes),sipClass_Matrix4x4,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Matrix4x4,sipNm_BALL_getZero);

    return NULL;
}


extern "C" {static PyObject *meth_Matrix4x4_getIdentity(PyObject *, PyObject *);}
static PyObject *meth_Matrix4x4_getIdentity(PyObject *,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        if (sipParseArgs(&sipArgsParsed,sipArgs,""))
        {
            const Matrix4x4 *sipRes;

            try
            {
            sipRes = &Matrix4x4::getIdentity();
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return sipConvertFromInstance(const_cast<Matrix4x4 *>(sipRes),sipClass_Matrix4x4,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Matrix4x4,sipNm_BALL_getIdentity);

    return NULL;
}


extern "C" {static PyObject *meth_Matrix4x4_setIdentity(PyObject *, PyObject *);}
static PyObject *meth_Matrix4x4_setIdentity(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Matrix4x4 *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Matrix4x4,&sipCpp))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Matrix4x4,sipNm_BALL_setIdentity);

    return NULL;
}


extern "C" {static PyObject *meth_Matrix4x4_transpose(PyObject *, PyObject *);}
static PyObject *meth_Matrix4x4_transpose(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Matrix4x4 *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Matrix4x4,&sipCpp))
        {
            try
            {
            sipCpp->transpose();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Matrix4x4,sipNm_BALL_transpose);

    return NULL;
}


extern "C" {static PyObject *meth_Matrix4x4_getRow(PyObject *, PyObject *);}
static PyObject *meth_Matrix4x4_getRow(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Position * a0;
        int a0State = 0;
        Matrix4x4 *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BM1",&sipSelf,sipClass_Matrix4x4,&sipCpp,sipMappedType_Position,&a0,&a0State))
        {
            Vector4 *sipRes;

            try
            {
            sipRes = new Vector4(sipCpp->getRow(*a0));
            }
            catch (...)
            {

            sipReleaseMappedType(a0,sipMappedType_Position,a0State);
                sipRaiseUnknownException();
                return NULL;
            }

            sipReleaseMappedType(a0,sipMappedType_Position,a0State);

            return sipConvertFromNewInstance(sipRes,sipClass_Vector4,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Matrix4x4,sipNm_BALL_getRow);

    return NULL;
}


extern "C" {static PyObject *meth_Matrix4x4_getColumn(PyObject *, PyObject *);}
static PyObject *meth_Matrix4x4_getColumn(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Position * a0;
        int a0State = 0;
        Matrix4x4 *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BM1",&sipSelf,sipClass_Matrix4x4,&sipCpp,sipMappedType_Position,&a0,&a0State))
        {
            Vector4 *sipRes;

            try
            {
            sipRes = new Vector4(sipCpp->getColumn(*a0));
            }
            catch (...)
            {

            sipReleaseMappedType(a0,sipMappedType_Position,a0State);
                sipRaiseUnknownException();
                return NULL;
            }

            sipReleaseMappedType(a0,sipMappedType_Position,a0State);

            return sipConvertFromNewInstance(sipRes,sipClass_Vector4,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Matrix4x4,sipNm_BALL_getColumn);

    return NULL;
}


extern "C" {static PyObject *meth_Matrix4x4_setRow(PyObject *, PyObject *);}
static PyObject *meth_Matrix4x4_setRow(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Position * a0;
        int a0State = 0;
        const Vector4 * a1;
        Matrix4x4 *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BM1JA",&sipSelf,sipClass_Matrix4x4,&sipCpp,sipMappedType_Position,&a0,&a0State,sipClass_Vector4,&a1))
        {
            try
            {
            sipCpp->setRow(*a0,*a1);
            }
            catch (...)
            {

            sipReleaseMappedType(a0,sipMappedType_Position,a0State);
                sipRaiseUnknownException();
                return NULL;
            }

            sipReleaseMappedType(a0,sipMappedType_Position,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Matrix4x4,sipNm_BALL_setRow);

    return NULL;
}


extern "C" {static PyObject *meth_Matrix4x4_setColumn(PyObject *, PyObject *);}
static PyObject *meth_Matrix4x4_setColumn(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Position * a0;
        int a0State = 0;
        const Vector4 * a1;
        Matrix4x4 *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BM1JA",&sipSelf,sipClass_Matrix4x4,&sipCpp,sipMappedType_Position,&a0,&a0State,sipClass_Vector4,&a1))
        {
            try
            {
            sipCpp->setColumn(*a0,*a1);
            }
            catch (...)
            {

            sipReleaseMappedType(a0,sipMappedType_Position,a0State);
                sipRaiseUnknownException();
                return NULL;
            }

            sipReleaseMappedType(a0,sipMappedType_Position,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Matrix4x4,sipNm_BALL_setColumn);

    return NULL;
}


extern "C" {static PyObject *meth_Matrix4x4_isEqual(PyObject *, PyObject *);}
static PyObject *meth_Matrix4x4_isEqual(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const Matrix4x4 * a0;
        Matrix4x4 *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_Matrix4x4,&sipCpp,sipClass_Matrix4x4,&a0))
        {
            bool sipRes;

            try
            {
            sipRes = sipCpp->isEqual(*a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Matrix4x4,sipNm_BALL_isEqual);

    return NULL;
}


extern "C" {static PyObject *meth_Matrix4x4_getDiagonal(PyObject *, PyObject *);}
static PyObject *meth_Matrix4x4_getDiagonal(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Matrix4x4 *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Matrix4x4,&sipCpp))
        {
            Vector4 *sipRes;

            try
            {
            sipRes = new Vector4(sipCpp->getDiagonal());
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return sipConvertFromNewInstance(sipRes,sipClass_Vector4,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Matrix4x4,sipNm_BALL_getDiagonal);

    return NULL;
}


extern "C" {static PyObject *meth_Matrix4x4_invert(PyObject *, PyObject *);}
static PyObject *meth_Matrix4x4_invert(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Matrix4x4 * a0;
        Matrix4x4 *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_Matrix4x4,&sipCpp,sipClass_Matrix4x4,&a0))
        {
            bool sipRes;

            try
            {
            sipRes = sipCpp->invert(*a0);
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
        Matrix4x4 *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Matrix4x4,&sipCpp))
        {
            bool sipRes;

            try
            {
            sipRes = sipCpp->invert();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Matrix4x4,sipNm_BALL_invert);

    return NULL;
}


extern "C" {static PyObject *meth_Matrix4x4_getDeterminant(PyObject *, PyObject *);}
static PyObject *meth_Matrix4x4_getDeterminant(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Matrix4x4 *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Matrix4x4,&sipCpp))
        {
            float sipRes;

            try
            {
            sipRes = sipCpp->getDeterminant();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Matrix4x4,sipNm_BALL_getDeterminant);

    return NULL;
}


extern "C" {static PyObject *meth_Matrix4x4_translate(PyObject *, PyObject *);}
static PyObject *meth_Matrix4x4_translate(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        float a0;
        float a1;
        float a2;
        Matrix4x4 *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bfff",&sipSelf,sipClass_Matrix4x4,&sipCpp,&a0,&a1,&a2))
        {
            try
            {
            sipCpp->translate(a0,a1,a2);
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
        Matrix4x4 *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_Matrix4x4,&sipCpp,sipClass_Vector3,&a0))
        {
            try
            {
            sipCpp->translate(*a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Matrix4x4,sipNm_BALL_translate);

    return NULL;
}


extern "C" {static PyObject *meth_Matrix4x4_setTranslation(PyObject *, PyObject *);}
static PyObject *meth_Matrix4x4_setTranslation(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        float a0;
        float a1;
        float a2;
        Matrix4x4 *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bfff",&sipSelf,sipClass_Matrix4x4,&sipCpp,&a0,&a1,&a2))
        {
            try
            {
            sipCpp->setTranslation(a0,a1,a2);
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
        Matrix4x4 *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_Matrix4x4,&sipCpp,sipClass_Vector3,&a0))
        {
            try
            {
            sipCpp->setTranslation(*a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Matrix4x4,sipNm_BALL_setTranslation);

    return NULL;
}


extern "C" {static PyObject *meth_Matrix4x4_scale(PyObject *, PyObject *);}
static PyObject *meth_Matrix4x4_scale(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        float a0;
        float a1;
        float a2;
        Matrix4x4 *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bfff",&sipSelf,sipClass_Matrix4x4,&sipCpp,&a0,&a1,&a2))
        {
            try
            {
            sipCpp->scale(a0,a1,a2);
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
        Matrix4x4 *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bf",&sipSelf,sipClass_Matrix4x4,&sipCpp,&a0))
        {
            try
            {
            sipCpp->scale(a0);
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
        Matrix4x4 *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_Matrix4x4,&sipCpp,sipClass_Vector3,&a0))
        {
            try
            {
            sipCpp->scale(*a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Matrix4x4,sipNm_BALL_scale);

    return NULL;
}


extern "C" {static PyObject *meth_Matrix4x4_setScale(PyObject *, PyObject *);}
static PyObject *meth_Matrix4x4_setScale(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        float a0;
        float a1;
        float a2;
        Matrix4x4 *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bfff",&sipSelf,sipClass_Matrix4x4,&sipCpp,&a0,&a1,&a2))
        {
            try
            {
            sipCpp->setScale(a0,a1,a2);
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
        Matrix4x4 *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bf",&sipSelf,sipClass_Matrix4x4,&sipCpp,&a0))
        {
            try
            {
            sipCpp->setScale(a0);
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
        Matrix4x4 *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_Matrix4x4,&sipCpp,sipClass_Vector3,&a0))
        {
            try
            {
            sipCpp->setScale(*a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Matrix4x4,sipNm_BALL_setScale);

    return NULL;
}


extern "C" {static PyObject *meth_Matrix4x4_rotateX(PyObject *, PyObject *);}
static PyObject *meth_Matrix4x4_rotateX(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const Angle * a0;
        Matrix4x4 *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_Matrix4x4,&sipCpp,sipClass_Angle,&a0))
        {
            try
            {
            sipCpp->rotateX(*a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Matrix4x4,sipNm_BALL_rotateX);

    return NULL;
}


extern "C" {static PyObject *meth_Matrix4x4_setRotationX(PyObject *, PyObject *);}
static PyObject *meth_Matrix4x4_setRotationX(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const Angle * a0;
        Matrix4x4 *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_Matrix4x4,&sipCpp,sipClass_Angle,&a0))
        {
            try
            {
            sipCpp->setRotationX(*a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Matrix4x4,sipNm_BALL_setRotationX);

    return NULL;
}


extern "C" {static PyObject *meth_Matrix4x4_rotateY(PyObject *, PyObject *);}
static PyObject *meth_Matrix4x4_rotateY(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const Angle * a0;
        Matrix4x4 *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_Matrix4x4,&sipCpp,sipClass_Angle,&a0))
        {
            try
            {
            sipCpp->rotateY(*a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Matrix4x4,sipNm_BALL_rotateY);

    return NULL;
}


extern "C" {static PyObject *meth_Matrix4x4_setRotationY(PyObject *, PyObject *);}
static PyObject *meth_Matrix4x4_setRotationY(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const Angle * a0;
        Matrix4x4 *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_Matrix4x4,&sipCpp,sipClass_Angle,&a0))
        {
            try
            {
            sipCpp->setRotationY(*a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Matrix4x4,sipNm_BALL_setRotationY);

    return NULL;
}


extern "C" {static PyObject *meth_Matrix4x4_rotateZ(PyObject *, PyObject *);}
static PyObject *meth_Matrix4x4_rotateZ(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const Angle * a0;
        Matrix4x4 *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_Matrix4x4,&sipCpp,sipClass_Angle,&a0))
        {
            try
            {
            sipCpp->rotateZ(*a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Matrix4x4,sipNm_BALL_rotateZ);

    return NULL;
}


extern "C" {static PyObject *meth_Matrix4x4_setRotationZ(PyObject *, PyObject *);}
static PyObject *meth_Matrix4x4_setRotationZ(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const Angle * a0;
        Matrix4x4 *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_Matrix4x4,&sipCpp,sipClass_Angle,&a0))
        {
            try
            {
            sipCpp->setRotationZ(*a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Matrix4x4,sipNm_BALL_setRotationZ);

    return NULL;
}


extern "C" {static PyObject *meth_Matrix4x4_rotate(PyObject *, PyObject *);}
static PyObject *meth_Matrix4x4_rotate(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const Angle * a0;
        float a1;
        float a2;
        float a3;
        Matrix4x4 *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJAfff",&sipSelf,sipClass_Matrix4x4,&sipCpp,sipClass_Angle,&a0,&a1,&a2,&a3))
        {
            try
            {
            sipCpp->rotate(*a0,a1,a2,a3);
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
        const Angle * a0;
        const Vector3 * a1;
        Matrix4x4 *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJAJA",&sipSelf,sipClass_Matrix4x4,&sipCpp,sipClass_Angle,&a0,sipClass_Vector3,&a1))
        {
            try
            {
            sipCpp->rotate(*a0,*a1);
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
        const Angle * a0;
        const Vector4 * a1;
        Matrix4x4 *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJAJA",&sipSelf,sipClass_Matrix4x4,&sipCpp,sipClass_Angle,&a0,sipClass_Vector4,&a1))
        {
            try
            {
            sipCpp->rotate(*a0,*a1);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Matrix4x4,sipNm_BALL_rotate);

    return NULL;
}


extern "C" {static PyObject *meth_Matrix4x4_setRotation(PyObject *, PyObject *);}
static PyObject *meth_Matrix4x4_setRotation(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const Angle * a0;
        float a1;
        float a2;
        float a3;
        Matrix4x4 *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJAfff",&sipSelf,sipClass_Matrix4x4,&sipCpp,sipClass_Angle,&a0,&a1,&a2,&a3))
        {
            try
            {
            sipCpp->setRotation(*a0,a1,a2,a3);
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
        const Angle * a0;
        const Vector3 * a1;
        Matrix4x4 *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJAJA",&sipSelf,sipClass_Matrix4x4,&sipCpp,sipClass_Angle,&a0,sipClass_Vector3,&a1))
        {
            try
            {
            sipCpp->setRotation(*a0,*a1);
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
        const Angle * a0;
        const Vector4 * a1;
        Matrix4x4 *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJAJA",&sipSelf,sipClass_Matrix4x4,&sipCpp,sipClass_Angle,&a0,sipClass_Vector4,&a1))
        {
            try
            {
            sipCpp->setRotation(*a0,*a1);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Matrix4x4,sipNm_BALL_setRotation);

    return NULL;
}


extern "C" {static PyObject *meth_Matrix4x4_isIdentity(PyObject *, PyObject *);}
static PyObject *meth_Matrix4x4_isIdentity(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Matrix4x4 *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Matrix4x4,&sipCpp))
        {
            bool sipRes;

            try
            {
            sipRes = sipCpp->isIdentity();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Matrix4x4,sipNm_BALL_isIdentity);

    return NULL;
}


extern "C" {static PyObject *meth_Matrix4x4_isRegular(PyObject *, PyObject *);}
static PyObject *meth_Matrix4x4_isRegular(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Matrix4x4 *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Matrix4x4,&sipCpp))
        {
            bool sipRes;

            try
            {
            sipRes = sipCpp->isRegular();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Matrix4x4,sipNm_BALL_isRegular);

    return NULL;
}


extern "C" {static PyObject *meth_Matrix4x4_isSingular(PyObject *, PyObject *);}
static PyObject *meth_Matrix4x4_isSingular(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Matrix4x4 *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Matrix4x4,&sipCpp))
        {
            bool sipRes;

            try
            {
            sipRes = sipCpp->isSingular();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Matrix4x4,sipNm_BALL_isSingular);

    return NULL;
}


extern "C" {static PyObject *meth_Matrix4x4_isSymmetric(PyObject *, PyObject *);}
static PyObject *meth_Matrix4x4_isSymmetric(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Matrix4x4 *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Matrix4x4,&sipCpp))
        {
            bool sipRes;

            try
            {
            sipRes = sipCpp->isSymmetric();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Matrix4x4,sipNm_BALL_isSymmetric);

    return NULL;
}


extern "C" {static PyObject *meth_Matrix4x4_isLowerTriangular(PyObject *, PyObject *);}
static PyObject *meth_Matrix4x4_isLowerTriangular(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Matrix4x4 *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Matrix4x4,&sipCpp))
        {
            bool sipRes;

            try
            {
            sipRes = sipCpp->isLowerTriangular();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Matrix4x4,sipNm_BALL_isLowerTriangular);

    return NULL;
}


extern "C" {static PyObject *meth_Matrix4x4_isUpperTriangular(PyObject *, PyObject *);}
static PyObject *meth_Matrix4x4_isUpperTriangular(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Matrix4x4 *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Matrix4x4,&sipCpp))
        {
            bool sipRes;

            try
            {
            sipRes = sipCpp->isUpperTriangular();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Matrix4x4,sipNm_BALL_isUpperTriangular);

    return NULL;
}


extern "C" {static PyObject *meth_Matrix4x4_isDiagonal(PyObject *, PyObject *);}
static PyObject *meth_Matrix4x4_isDiagonal(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Matrix4x4 *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Matrix4x4,&sipCpp))
        {
            bool sipRes;

            try
            {
            sipRes = sipCpp->isDiagonal();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Matrix4x4,sipNm_BALL_isDiagonal);

    return NULL;
}


extern "C" {static PyObject *meth_Matrix4x4_isValid(PyObject *, PyObject *);}
static PyObject *meth_Matrix4x4_isValid(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Matrix4x4 *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Matrix4x4,&sipCpp))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Matrix4x4,sipNm_BALL_isValid);

    return NULL;
}


extern "C" {static PyObject *slot_Matrix4x4___ne__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_Matrix4x4___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    Matrix4x4 *sipCpp = reinterpret_cast<Matrix4x4 *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_Matrix4x4));

    if (!sipCpp)
        return 0;

    int sipArgsParsed = 0;

    {
        const Matrix4x4 * a0;

        if (sipParseArgs(&sipArgsParsed,sipArg,"JA",sipClass_Matrix4x4,&a0))
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

    return sipPySlotExtend(&sipModuleAPI_BALL,ne_slot,sipClass_Matrix4x4,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_Matrix4x4___eq__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_Matrix4x4___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    Matrix4x4 *sipCpp = reinterpret_cast<Matrix4x4 *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_Matrix4x4));

    if (!sipCpp)
        return 0;

    int sipArgsParsed = 0;

    {
        const Matrix4x4 * a0;

        if (sipParseArgs(&sipArgsParsed,sipArg,"JA",sipClass_Matrix4x4,&a0))
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

    return sipPySlotExtend(&sipModuleAPI_BALL,eq_slot,sipClass_Matrix4x4,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_Matrix4x4___idiv__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_Matrix4x4___idiv__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf,(PyTypeObject *)sipClass_Matrix4x4))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    Matrix4x4 *sipCpp = reinterpret_cast<Matrix4x4 *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_Matrix4x4));

    if (!sipCpp)
        return 0;

    int sipArgsParsed = 0;

    {
        float a0;

        if (sipParseArgs(&sipArgsParsed,sipArg,"f",&a0))
        {
            try
            {
            ((*sipCpp) /= a0);
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


extern "C" {static PyObject *slot_Matrix4x4___div__(PyObject *sipArg0,PyObject *sipArg1);}
static PyObject *slot_Matrix4x4___div__(PyObject *sipArg0,PyObject *sipArg1)
{
    int sipArgsParsed = 0;

    {
        Matrix4x4 * a0;
        float a1;

        if (sipParsePair(&sipArgsParsed,sipArg0,sipArg1,"JAf",sipClass_Matrix4x4,&a0,&a1))
        {
            Matrix4x4 *sipRes;

            try
            {
            sipRes = new Matrix4x4((*a0 / a1));
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return sipConvertFromNewInstance(sipRes,sipClass_Matrix4x4,NULL);
        }
    }

    return sipPySlotExtend(&sipModuleAPI_BALL,div_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_Matrix4x4___imul__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_Matrix4x4___imul__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf,(PyTypeObject *)sipClass_Matrix4x4))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    Matrix4x4 *sipCpp = reinterpret_cast<Matrix4x4 *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_Matrix4x4));

    if (!sipCpp)
        return 0;

    int sipArgsParsed = 0;

    {
        float a0;

        if (sipParseArgs(&sipArgsParsed,sipArg,"f",&a0))
        {
            try
            {
            ((*sipCpp) *= a0);
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

    {
        const Matrix4x4 * a0;

        if (sipParseArgs(&sipArgsParsed,sipArg,"JA",sipClass_Matrix4x4,&a0))
        {
            try
            {
            ((*sipCpp) *= *a0);
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


extern "C" {static PyObject *slot_Matrix4x4___mul__(PyObject *sipArg0,PyObject *sipArg1);}
static PyObject *slot_Matrix4x4___mul__(PyObject *sipArg0,PyObject *sipArg1)
{
    int sipArgsParsed = 0;

    {
        Matrix4x4 * a0;
        float a1;

        if (sipParsePair(&sipArgsParsed,sipArg0,sipArg1,"JAf",sipClass_Matrix4x4,&a0,&a1))
        {
            Matrix4x4 *sipRes;

            try
            {
            sipRes = new Matrix4x4((*a0 * a1));
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return sipConvertFromNewInstance(sipRes,sipClass_Matrix4x4,NULL);
        }
    }

    {
        Matrix4x4 * a0;
        const Matrix4x4 * a1;

        if (sipParsePair(&sipArgsParsed,sipArg0,sipArg1,"JAJA",sipClass_Matrix4x4,&a0,sipClass_Matrix4x4,&a1))
        {
            Matrix4x4 *sipRes;

            try
            {
            sipRes = new Matrix4x4((*a0 * *a1));
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return sipConvertFromNewInstance(sipRes,sipClass_Matrix4x4,NULL);
        }
    }

    {
        Matrix4x4 * a0;
        const Vector4 * a1;

        if (sipParsePair(&sipArgsParsed,sipArg0,sipArg1,"JAJA",sipClass_Matrix4x4,&a0,sipClass_Vector4,&a1))
        {
            Vector4 *sipRes;

            try
            {
            sipRes = new Vector4((*a0 * *a1));
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return sipConvertFromNewInstance(sipRes,sipClass_Vector4,NULL);
        }
    }

    return sipPySlotExtend(&sipModuleAPI_BALL,mul_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_Matrix4x4___isub__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_Matrix4x4___isub__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf,(PyTypeObject *)sipClass_Matrix4x4))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    Matrix4x4 *sipCpp = reinterpret_cast<Matrix4x4 *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_Matrix4x4));

    if (!sipCpp)
        return 0;

    int sipArgsParsed = 0;

    {
        const Matrix4x4 * a0;

        if (sipParseArgs(&sipArgsParsed,sipArg,"JA",sipClass_Matrix4x4,&a0))
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


extern "C" {static PyObject *slot_Matrix4x4___sub__(PyObject *sipArg0,PyObject *sipArg1);}
static PyObject *slot_Matrix4x4___sub__(PyObject *sipArg0,PyObject *sipArg1)
{
    int sipArgsParsed = 0;

    {
        Matrix4x4 * a0;
        const Matrix4x4 * a1;

        if (sipParsePair(&sipArgsParsed,sipArg0,sipArg1,"JAJA",sipClass_Matrix4x4,&a0,sipClass_Matrix4x4,&a1))
        {
            Matrix4x4 *sipRes;

            try
            {
            sipRes = new Matrix4x4((*a0 - *a1));
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return sipConvertFromNewInstance(sipRes,sipClass_Matrix4x4,NULL);
        }
    }

    return sipPySlotExtend(&sipModuleAPI_BALL,sub_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_Matrix4x4___iadd__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_Matrix4x4___iadd__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf,(PyTypeObject *)sipClass_Matrix4x4))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    Matrix4x4 *sipCpp = reinterpret_cast<Matrix4x4 *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_Matrix4x4));

    if (!sipCpp)
        return 0;

    int sipArgsParsed = 0;

    {
        const Matrix4x4 * a0;

        if (sipParseArgs(&sipArgsParsed,sipArg,"JA",sipClass_Matrix4x4,&a0))
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


extern "C" {static PyObject *slot_Matrix4x4___add__(PyObject *sipArg0,PyObject *sipArg1);}
static PyObject *slot_Matrix4x4___add__(PyObject *sipArg0,PyObject *sipArg1)
{
    int sipArgsParsed = 0;

    {
        Matrix4x4 * a0;
        const Matrix4x4 * a1;

        if (sipParsePair(&sipArgsParsed,sipArg0,sipArg1,"JAJA",sipClass_Matrix4x4,&a0,sipClass_Matrix4x4,&a1))
        {
            Matrix4x4 *sipRes;

            try
            {
            sipRes = new Matrix4x4((*a0 + *a1));
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return sipConvertFromNewInstance(sipRes,sipClass_Matrix4x4,NULL);
        }
    }

    return sipPySlotExtend(&sipModuleAPI_BALL,add_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static int slot_Matrix4x4___len__(PyObject *sipSelf);}
static int slot_Matrix4x4___len__(PyObject *sipSelf)
{
    Matrix4x4 *sipCpp = reinterpret_cast<Matrix4x4 *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_Matrix4x4));

    if (!sipCpp)
        return -1;


    {
        {
            int sipRes = 0;

#line 88 "matrix44.sip"
  sipRes = 16;
#line 2065 "sipBALLMatrix4x4.C"

            return sipRes;
        }
    }
}


extern "C" {static PyObject *slot_Matrix4x4___getitem__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_Matrix4x4___getitem__(PyObject *sipSelf,PyObject *sipArg)
{
    Matrix4x4 *sipCpp = reinterpret_cast<Matrix4x4 *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_Matrix4x4));

    if (!sipCpp)
        return 0;

    int sipArgsParsed = 0;

    {
        Position * a0;
        int a0State = 0;

        if (sipParseArgs(&sipArgsParsed,sipArg,"M1",sipMappedType_Position,&a0,&a0State))
        {
            float sipRes = 0;
            int sipIsErr = 0;

#line 75 "matrix44.sip"
	try
	{
		sipRes = sipCpp->operator [] (*a0);
	}
	catch (IndexOverflow& e)
	{
		PyErr_SetString(PyExc_IndexError, "index overflow in Matrix4x4. Max. index is 15!");
		sipIsErr = 1;
	}
#line 2102 "sipBALLMatrix4x4.C"

            sipReleaseMappedType(a0,sipMappedType_Position,a0State);

            if (sipIsErr)
                return 0;

            return PyFloat_FromDouble((double)sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Matrix4x4,sipNm_BALL___getitem__);

    return 0;
}


extern "C" {static PyObject *slot_Matrix4x4___call__(PyObject *sipSelf,PyObject *sipArgs);}
static PyObject *slot_Matrix4x4___call__(PyObject *sipSelf,PyObject *sipArgs)
{
    Matrix4x4 *sipCpp = reinterpret_cast<Matrix4x4 *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_Matrix4x4));

    if (!sipCpp)
        return 0;

    int sipArgsParsed = 0;

    {
        Position * a0;
        int a0State = 0;
        Position * a1;
        int a1State = 0;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"M1M1",sipMappedType_Position,&a0,&a0State,sipMappedType_Position,&a1,&a1State))
        {
            float sipRes = 0;

#line 68 "matrix44.sip"
	sipRes = sipCpp->operator () (*a0, *a1);
#line 2142 "sipBALLMatrix4x4.C"

            sipReleaseMappedType(a0,sipMappedType_Position,a0State);
            sipReleaseMappedType(a1,sipMappedType_Position,a1State);

            return PyFloat_FromDouble((double)sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Matrix4x4,sipNm_BALL___call__);

    return 0;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_Matrix4x4(void *, sipWrapperType *);}
static void *cast_Matrix4x4(void *ptr,sipWrapperType *targetClass)
{
    if (targetClass == sipClass_Matrix4x4)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_Matrix4x4(void *, int);}
static void release_Matrix4x4(void *ptr,int)
{
    delete reinterpret_cast<Matrix4x4 *>(ptr);
}


extern "C" {static void dealloc_Matrix4x4(sipWrapper *);}
static void dealloc_Matrix4x4(sipWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_Matrix4x4(sipSelf->u.cppPtr,0);
    }
}


extern "C" {static void *init_Matrix4x4(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_Matrix4x4(sipWrapper *,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    Matrix4x4 *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            try
            {
            sipCpp = new Matrix4x4();
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
        const Matrix4x4 * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_Matrix4x4,&a0))
        {
            try
            {
            sipCpp = new Matrix4x4(*a0);
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
        const Vector4 * a0;
        const Vector4 * a1;
        const Vector4 * a2;
        const Vector4 * a3;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JAJAJAJA",sipClass_Vector4,&a0,sipClass_Vector4,&a1,sipClass_Vector4,&a2,sipClass_Vector4,&a3))
        {
            try
            {
            sipCpp = new Matrix4x4(*a0,*a1,*a2,*a3);
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
        float a6;
        float a7;
        float a8;
        float a9;
        float a10;
        float a11;
        float a12;
        float a13;
        float a14;
        float a15;

        if (sipParseArgs(sipArgsParsed,sipArgs,"ffffffffffffffff",&a0,&a1,&a2,&a3,&a4,&a5,&a6,&a7,&a8,&a9,&a10,&a11,&a12,&a13,&a14,&a15))
        {
            try
            {
            sipCpp = new Matrix4x4(a0,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13,a14,a15);
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


extern "C" {static PyObject *var_Matrix4x4_m44(PyObject *, PyObject *);}
static PyObject *var_Matrix4x4_m44(PyObject *sipSelf,PyObject *sipPy)
{
   float sipVal;
    Matrix4x4 *sipCpp = reinterpret_cast<Matrix4x4 *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_Matrix4x4));

    if (!sipCpp)
        return NULL;

    if (sipPy == NULL)
    {
        sipVal = sipCpp->m44;

        sipPy = PyFloat_FromDouble((double)sipVal);

        return sipPy;
    }

	sipVal = (float)PyFloat_AsDouble(sipPy);

    if (PyErr_Occurred() != NULL)
    {
        sipBadSetType(sipNm_BALL_Matrix4x4,sipNm_BALL_m44);
        return NULL;
    }

    sipCpp->m44 = sipVal;

    Py_INCREF(Py_None);
    return Py_None;
}


extern "C" {static PyObject *var_Matrix4x4_m43(PyObject *, PyObject *);}
static PyObject *var_Matrix4x4_m43(PyObject *sipSelf,PyObject *sipPy)
{
   float sipVal;
    Matrix4x4 *sipCpp = reinterpret_cast<Matrix4x4 *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_Matrix4x4));

    if (!sipCpp)
        return NULL;

    if (sipPy == NULL)
    {
        sipVal = sipCpp->m43;

        sipPy = PyFloat_FromDouble((double)sipVal);

        return sipPy;
    }

	sipVal = (float)PyFloat_AsDouble(sipPy);

    if (PyErr_Occurred() != NULL)
    {
        sipBadSetType(sipNm_BALL_Matrix4x4,sipNm_BALL_m43);
        return NULL;
    }

    sipCpp->m43 = sipVal;

    Py_INCREF(Py_None);
    return Py_None;
}


extern "C" {static PyObject *var_Matrix4x4_m42(PyObject *, PyObject *);}
static PyObject *var_Matrix4x4_m42(PyObject *sipSelf,PyObject *sipPy)
{
   float sipVal;
    Matrix4x4 *sipCpp = reinterpret_cast<Matrix4x4 *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_Matrix4x4));

    if (!sipCpp)
        return NULL;

    if (sipPy == NULL)
    {
        sipVal = sipCpp->m42;

        sipPy = PyFloat_FromDouble((double)sipVal);

        return sipPy;
    }

	sipVal = (float)PyFloat_AsDouble(sipPy);

    if (PyErr_Occurred() != NULL)
    {
        sipBadSetType(sipNm_BALL_Matrix4x4,sipNm_BALL_m42);
        return NULL;
    }

    sipCpp->m42 = sipVal;

    Py_INCREF(Py_None);
    return Py_None;
}


extern "C" {static PyObject *var_Matrix4x4_m41(PyObject *, PyObject *);}
static PyObject *var_Matrix4x4_m41(PyObject *sipSelf,PyObject *sipPy)
{
   float sipVal;
    Matrix4x4 *sipCpp = reinterpret_cast<Matrix4x4 *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_Matrix4x4));

    if (!sipCpp)
        return NULL;

    if (sipPy == NULL)
    {
        sipVal = sipCpp->m41;

        sipPy = PyFloat_FromDouble((double)sipVal);

        return sipPy;
    }

	sipVal = (float)PyFloat_AsDouble(sipPy);

    if (PyErr_Occurred() != NULL)
    {
        sipBadSetType(sipNm_BALL_Matrix4x4,sipNm_BALL_m41);
        return NULL;
    }

    sipCpp->m41 = sipVal;

    Py_INCREF(Py_None);
    return Py_None;
}


extern "C" {static PyObject *var_Matrix4x4_m34(PyObject *, PyObject *);}
static PyObject *var_Matrix4x4_m34(PyObject *sipSelf,PyObject *sipPy)
{
   float sipVal;
    Matrix4x4 *sipCpp = reinterpret_cast<Matrix4x4 *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_Matrix4x4));

    if (!sipCpp)
        return NULL;

    if (sipPy == NULL)
    {
        sipVal = sipCpp->m34;

        sipPy = PyFloat_FromDouble((double)sipVal);

        return sipPy;
    }

	sipVal = (float)PyFloat_AsDouble(sipPy);

    if (PyErr_Occurred() != NULL)
    {
        sipBadSetType(sipNm_BALL_Matrix4x4,sipNm_BALL_m34);
        return NULL;
    }

    sipCpp->m34 = sipVal;

    Py_INCREF(Py_None);
    return Py_None;
}


extern "C" {static PyObject *var_Matrix4x4_m33(PyObject *, PyObject *);}
static PyObject *var_Matrix4x4_m33(PyObject *sipSelf,PyObject *sipPy)
{
   float sipVal;
    Matrix4x4 *sipCpp = reinterpret_cast<Matrix4x4 *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_Matrix4x4));

    if (!sipCpp)
        return NULL;

    if (sipPy == NULL)
    {
        sipVal = sipCpp->m33;

        sipPy = PyFloat_FromDouble((double)sipVal);

        return sipPy;
    }

	sipVal = (float)PyFloat_AsDouble(sipPy);

    if (PyErr_Occurred() != NULL)
    {
        sipBadSetType(sipNm_BALL_Matrix4x4,sipNm_BALL_m33);
        return NULL;
    }

    sipCpp->m33 = sipVal;

    Py_INCREF(Py_None);
    return Py_None;
}


extern "C" {static PyObject *var_Matrix4x4_m32(PyObject *, PyObject *);}
static PyObject *var_Matrix4x4_m32(PyObject *sipSelf,PyObject *sipPy)
{
   float sipVal;
    Matrix4x4 *sipCpp = reinterpret_cast<Matrix4x4 *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_Matrix4x4));

    if (!sipCpp)
        return NULL;

    if (sipPy == NULL)
    {
        sipVal = sipCpp->m32;

        sipPy = PyFloat_FromDouble((double)sipVal);

        return sipPy;
    }

	sipVal = (float)PyFloat_AsDouble(sipPy);

    if (PyErr_Occurred() != NULL)
    {
        sipBadSetType(sipNm_BALL_Matrix4x4,sipNm_BALL_m32);
        return NULL;
    }

    sipCpp->m32 = sipVal;

    Py_INCREF(Py_None);
    return Py_None;
}


extern "C" {static PyObject *var_Matrix4x4_m31(PyObject *, PyObject *);}
static PyObject *var_Matrix4x4_m31(PyObject *sipSelf,PyObject *sipPy)
{
   float sipVal;
    Matrix4x4 *sipCpp = reinterpret_cast<Matrix4x4 *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_Matrix4x4));

    if (!sipCpp)
        return NULL;

    if (sipPy == NULL)
    {
        sipVal = sipCpp->m31;

        sipPy = PyFloat_FromDouble((double)sipVal);

        return sipPy;
    }

	sipVal = (float)PyFloat_AsDouble(sipPy);

    if (PyErr_Occurred() != NULL)
    {
        sipBadSetType(sipNm_BALL_Matrix4x4,sipNm_BALL_m31);
        return NULL;
    }

    sipCpp->m31 = sipVal;

    Py_INCREF(Py_None);
    return Py_None;
}


extern "C" {static PyObject *var_Matrix4x4_m24(PyObject *, PyObject *);}
static PyObject *var_Matrix4x4_m24(PyObject *sipSelf,PyObject *sipPy)
{
   float sipVal;
    Matrix4x4 *sipCpp = reinterpret_cast<Matrix4x4 *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_Matrix4x4));

    if (!sipCpp)
        return NULL;

    if (sipPy == NULL)
    {
        sipVal = sipCpp->m24;

        sipPy = PyFloat_FromDouble((double)sipVal);

        return sipPy;
    }

	sipVal = (float)PyFloat_AsDouble(sipPy);

    if (PyErr_Occurred() != NULL)
    {
        sipBadSetType(sipNm_BALL_Matrix4x4,sipNm_BALL_m24);
        return NULL;
    }

    sipCpp->m24 = sipVal;

    Py_INCREF(Py_None);
    return Py_None;
}


extern "C" {static PyObject *var_Matrix4x4_m23(PyObject *, PyObject *);}
static PyObject *var_Matrix4x4_m23(PyObject *sipSelf,PyObject *sipPy)
{
   float sipVal;
    Matrix4x4 *sipCpp = reinterpret_cast<Matrix4x4 *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_Matrix4x4));

    if (!sipCpp)
        return NULL;

    if (sipPy == NULL)
    {
        sipVal = sipCpp->m23;

        sipPy = PyFloat_FromDouble((double)sipVal);

        return sipPy;
    }

	sipVal = (float)PyFloat_AsDouble(sipPy);

    if (PyErr_Occurred() != NULL)
    {
        sipBadSetType(sipNm_BALL_Matrix4x4,sipNm_BALL_m23);
        return NULL;
    }

    sipCpp->m23 = sipVal;

    Py_INCREF(Py_None);
    return Py_None;
}


extern "C" {static PyObject *var_Matrix4x4_m22(PyObject *, PyObject *);}
static PyObject *var_Matrix4x4_m22(PyObject *sipSelf,PyObject *sipPy)
{
   float sipVal;
    Matrix4x4 *sipCpp = reinterpret_cast<Matrix4x4 *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_Matrix4x4));

    if (!sipCpp)
        return NULL;

    if (sipPy == NULL)
    {
        sipVal = sipCpp->m22;

        sipPy = PyFloat_FromDouble((double)sipVal);

        return sipPy;
    }

	sipVal = (float)PyFloat_AsDouble(sipPy);

    if (PyErr_Occurred() != NULL)
    {
        sipBadSetType(sipNm_BALL_Matrix4x4,sipNm_BALL_m22);
        return NULL;
    }

    sipCpp->m22 = sipVal;

    Py_INCREF(Py_None);
    return Py_None;
}


extern "C" {static PyObject *var_Matrix4x4_m21(PyObject *, PyObject *);}
static PyObject *var_Matrix4x4_m21(PyObject *sipSelf,PyObject *sipPy)
{
   float sipVal;
    Matrix4x4 *sipCpp = reinterpret_cast<Matrix4x4 *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_Matrix4x4));

    if (!sipCpp)
        return NULL;

    if (sipPy == NULL)
    {
        sipVal = sipCpp->m21;

        sipPy = PyFloat_FromDouble((double)sipVal);

        return sipPy;
    }

	sipVal = (float)PyFloat_AsDouble(sipPy);

    if (PyErr_Occurred() != NULL)
    {
        sipBadSetType(sipNm_BALL_Matrix4x4,sipNm_BALL_m21);
        return NULL;
    }

    sipCpp->m21 = sipVal;

    Py_INCREF(Py_None);
    return Py_None;
}


extern "C" {static PyObject *var_Matrix4x4_m14(PyObject *, PyObject *);}
static PyObject *var_Matrix4x4_m14(PyObject *sipSelf,PyObject *sipPy)
{
   float sipVal;
    Matrix4x4 *sipCpp = reinterpret_cast<Matrix4x4 *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_Matrix4x4));

    if (!sipCpp)
        return NULL;

    if (sipPy == NULL)
    {
        sipVal = sipCpp->m14;

        sipPy = PyFloat_FromDouble((double)sipVal);

        return sipPy;
    }

	sipVal = (float)PyFloat_AsDouble(sipPy);

    if (PyErr_Occurred() != NULL)
    {
        sipBadSetType(sipNm_BALL_Matrix4x4,sipNm_BALL_m14);
        return NULL;
    }

    sipCpp->m14 = sipVal;

    Py_INCREF(Py_None);
    return Py_None;
}


extern "C" {static PyObject *var_Matrix4x4_m13(PyObject *, PyObject *);}
static PyObject *var_Matrix4x4_m13(PyObject *sipSelf,PyObject *sipPy)
{
   float sipVal;
    Matrix4x4 *sipCpp = reinterpret_cast<Matrix4x4 *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_Matrix4x4));

    if (!sipCpp)
        return NULL;

    if (sipPy == NULL)
    {
        sipVal = sipCpp->m13;

        sipPy = PyFloat_FromDouble((double)sipVal);

        return sipPy;
    }

	sipVal = (float)PyFloat_AsDouble(sipPy);

    if (PyErr_Occurred() != NULL)
    {
        sipBadSetType(sipNm_BALL_Matrix4x4,sipNm_BALL_m13);
        return NULL;
    }

    sipCpp->m13 = sipVal;

    Py_INCREF(Py_None);
    return Py_None;
}


extern "C" {static PyObject *var_Matrix4x4_m12(PyObject *, PyObject *);}
static PyObject *var_Matrix4x4_m12(PyObject *sipSelf,PyObject *sipPy)
{
   float sipVal;
    Matrix4x4 *sipCpp = reinterpret_cast<Matrix4x4 *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_Matrix4x4));

    if (!sipCpp)
        return NULL;

    if (sipPy == NULL)
    {
        sipVal = sipCpp->m12;

        sipPy = PyFloat_FromDouble((double)sipVal);

        return sipPy;
    }

	sipVal = (float)PyFloat_AsDouble(sipPy);

    if (PyErr_Occurred() != NULL)
    {
        sipBadSetType(sipNm_BALL_Matrix4x4,sipNm_BALL_m12);
        return NULL;
    }

    sipCpp->m12 = sipVal;

    Py_INCREF(Py_None);
    return Py_None;
}


extern "C" {static PyObject *var_Matrix4x4_m11(PyObject *, PyObject *);}
static PyObject *var_Matrix4x4_m11(PyObject *sipSelf,PyObject *sipPy)
{
   float sipVal;
    Matrix4x4 *sipCpp = reinterpret_cast<Matrix4x4 *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_Matrix4x4));

    if (!sipCpp)
        return NULL;

    if (sipPy == NULL)
    {
        sipVal = sipCpp->m11;

        sipPy = PyFloat_FromDouble((double)sipVal);

        return sipPy;
    }

	sipVal = (float)PyFloat_AsDouble(sipPy);

    if (PyErr_Occurred() != NULL)
    {
        sipBadSetType(sipNm_BALL_Matrix4x4,sipNm_BALL_m11);
        return NULL;
    }

    sipCpp->m11 = sipVal;

    Py_INCREF(Py_None);
    return Py_None;
}

PyMethodDef variables_Matrix4x4[] = {
    {sipNm_BALL_m44, var_Matrix4x4_m44, 0, NULL},
    {sipNm_BALL_m43, var_Matrix4x4_m43, 0, NULL},
    {sipNm_BALL_m42, var_Matrix4x4_m42, 0, NULL},
    {sipNm_BALL_m41, var_Matrix4x4_m41, 0, NULL},
    {sipNm_BALL_m34, var_Matrix4x4_m34, 0, NULL},
    {sipNm_BALL_m33, var_Matrix4x4_m33, 0, NULL},
    {sipNm_BALL_m32, var_Matrix4x4_m32, 0, NULL},
    {sipNm_BALL_m31, var_Matrix4x4_m31, 0, NULL},
    {sipNm_BALL_m24, var_Matrix4x4_m24, 0, NULL},
    {sipNm_BALL_m23, var_Matrix4x4_m23, 0, NULL},
    {sipNm_BALL_m22, var_Matrix4x4_m22, 0, NULL},
    {sipNm_BALL_m21, var_Matrix4x4_m21, 0, NULL},
    {sipNm_BALL_m14, var_Matrix4x4_m14, 0, NULL},
    {sipNm_BALL_m13, var_Matrix4x4_m13, 0, NULL},
    {sipNm_BALL_m12, var_Matrix4x4_m12, 0, NULL},
    {sipNm_BALL_m11, var_Matrix4x4_m11, 0, NULL},
    {0, 0, 0, 0}
};


extern "C" {static void *forceConvertTo_Matrix4x4(PyObject *, int *);}
static void *forceConvertTo_Matrix4x4(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_Matrix4x4))
        return sipConvertToCpp(valobj,sipClass_Matrix4x4,iserrp);

    sipBadClass(sipNm_BALL_Matrix4x4);

    *iserrp = 1;

    return NULL;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_Matrix4x4[] = {
    {(void *)slot_Matrix4x4___ne__, ne_slot},
    {(void *)slot_Matrix4x4___eq__, eq_slot},
    {(void *)slot_Matrix4x4___idiv__, idiv_slot},
    {(void *)slot_Matrix4x4___div__, div_slot},
    {(void *)slot_Matrix4x4___imul__, imul_slot},
    {(void *)slot_Matrix4x4___mul__, mul_slot},
    {(void *)slot_Matrix4x4___isub__, isub_slot},
    {(void *)slot_Matrix4x4___sub__, sub_slot},
    {(void *)slot_Matrix4x4___iadd__, iadd_slot},
    {(void *)slot_Matrix4x4___add__, add_slot},
    {(void *)slot_Matrix4x4___len__, len_slot},
    {(void *)slot_Matrix4x4___getitem__, getitem_slot},
    {(void *)slot_Matrix4x4___call__, call_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_Matrix4x4[] = {
    {sipNm_BALL_get, meth_Matrix4x4_get, METH_VARARGS, NULL},
    {sipNm_BALL_getColumn, meth_Matrix4x4_getColumn, METH_VARARGS, NULL},
    {sipNm_BALL_getDeterminant, meth_Matrix4x4_getDeterminant, METH_VARARGS, NULL},
    {sipNm_BALL_getDiagonal, meth_Matrix4x4_getDiagonal, METH_VARARGS, NULL},
    {sipNm_BALL_getIdentity, meth_Matrix4x4_getIdentity, METH_VARARGS, NULL},
    {sipNm_BALL_getRow, meth_Matrix4x4_getRow, METH_VARARGS, NULL},
    {sipNm_BALL_getTrace, meth_Matrix4x4_getTrace, METH_VARARGS, NULL},
    {sipNm_BALL_getZero, meth_Matrix4x4_getZero, METH_VARARGS, NULL},
    {sipNm_BALL_invert, meth_Matrix4x4_invert, METH_VARARGS, NULL},
    {sipNm_BALL_isDiagonal, meth_Matrix4x4_isDiagonal, METH_VARARGS, NULL},
    {sipNm_BALL_isEqual, meth_Matrix4x4_isEqual, METH_VARARGS, NULL},
    {sipNm_BALL_isIdentity, meth_Matrix4x4_isIdentity, METH_VARARGS, NULL},
    {sipNm_BALL_isLowerTriangular, meth_Matrix4x4_isLowerTriangular, METH_VARARGS, NULL},
    {sipNm_BALL_isRegular, meth_Matrix4x4_isRegular, METH_VARARGS, NULL},
    {sipNm_BALL_isSingular, meth_Matrix4x4_isSingular, METH_VARARGS, NULL},
    {sipNm_BALL_isSymmetric, meth_Matrix4x4_isSymmetric, METH_VARARGS, NULL},
    {sipNm_BALL_isUpperTriangular, meth_Matrix4x4_isUpperTriangular, METH_VARARGS, NULL},
    {sipNm_BALL_isValid, meth_Matrix4x4_isValid, METH_VARARGS, NULL},
    {sipNm_BALL_rotate, meth_Matrix4x4_rotate, METH_VARARGS, NULL},
    {sipNm_BALL_rotateX, meth_Matrix4x4_rotateX, METH_VARARGS, NULL},
    {sipNm_BALL_rotateY, meth_Matrix4x4_rotateY, METH_VARARGS, NULL},
    {sipNm_BALL_rotateZ, meth_Matrix4x4_rotateZ, METH_VARARGS, NULL},
    {sipNm_BALL_scale, meth_Matrix4x4_scale, METH_VARARGS, NULL},
    {sipNm_BALL_set, meth_Matrix4x4_set, METH_VARARGS, NULL},
    {sipNm_BALL_setColumn, meth_Matrix4x4_setColumn, METH_VARARGS, NULL},
    {sipNm_BALL_setIdentity, meth_Matrix4x4_setIdentity, METH_VARARGS, NULL},
    {sipNm_BALL_setRotation, meth_Matrix4x4_setRotation, METH_VARARGS, NULL},
    {sipNm_BALL_setRotationX, meth_Matrix4x4_setRotationX, METH_VARARGS, NULL},
    {sipNm_BALL_setRotationY, meth_Matrix4x4_setRotationY, METH_VARARGS, NULL},
    {sipNm_BALL_setRotationZ, meth_Matrix4x4_setRotationZ, METH_VARARGS, NULL},
    {sipNm_BALL_setRow, meth_Matrix4x4_setRow, METH_VARARGS, NULL},
    {sipNm_BALL_setScale, meth_Matrix4x4_setScale, METH_VARARGS, NULL},
    {sipNm_BALL_setTranslation, meth_Matrix4x4_setTranslation, METH_VARARGS, NULL},
    {sipNm_BALL_swap, meth_Matrix4x4_swap, METH_VARARGS, NULL},
    {sipNm_BALL_translate, meth_Matrix4x4_translate, METH_VARARGS, NULL},
    {sipNm_BALL_transpose, meth_Matrix4x4_transpose, METH_VARARGS, NULL}
};


sipTypeDef sipType_BALL_Matrix4x4 = {
    0,
    0,
    "BALL.Matrix4x4",
    0,
    {0, 0, 1},
    0,
    slots_Matrix4x4,
    36, methods_Matrix4x4,
    0, 0,
    variables_Matrix4x4,
    init_Matrix4x4,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_Matrix4x4,
    cast_Matrix4x4,
    release_Matrix4x4,
    forceConvertTo_Matrix4x4,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
