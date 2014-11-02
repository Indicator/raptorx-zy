/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLVector3.h"

#include "sipBALLPersistentObject.h"
#include "sipBALLDivisionByZero.h"
#include "sipBALLAngle.h"
#include "sipBALLVector3.h"
#include "sipBALLIndex.h"



extern "C" {static PyObject *meth_Vector3_set(PyObject *, PyObject *);}
static PyObject *meth_Vector3_set(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        float a0;
        Vector3 *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bf",&sipSelf,sipClass_Vector3,&sipCpp,&a0))
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

    {
        float a0;
        float a1;
        float a2;
        Vector3 *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bfff",&sipSelf,sipClass_Vector3,&sipCpp,&a0,&a1,&a2))
        {
            try
            {
            sipCpp->set(a0,a1,a2);
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
        Vector3 *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_Vector3,&sipCpp,sipClass_Vector3,&a0))
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
        float a0;
        const Angle * a1;
        const Angle * a2;
        Vector3 *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BfJAJA",&sipSelf,sipClass_Vector3,&sipCpp,&a0,sipClass_Angle,&a1,sipClass_Angle,&a2))
        {
            try
            {
            sipCpp->set(a0,*a1,*a2);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Vector3,sipNm_BALL_set);

    return NULL;
}


extern "C" {static PyObject *meth_Vector3_get(PyObject *, PyObject *);}
static PyObject *meth_Vector3_get(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Vector3 * a0;
        Vector3 *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_Vector3,&sipCpp,sipClass_Vector3,&a0))
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
        float a0;
        Angle * a1;
        Angle * a2;
        Vector3 *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BfJAJA",&sipSelf,sipClass_Vector3,&sipCpp,&a0,sipClass_Angle,&a1,sipClass_Angle,&a2))
        {
            try
            {
            sipCpp->get(a0,*a1,*a2);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Vector3,sipNm_BALL_get);

    return NULL;
}


extern "C" {static PyObject *meth_Vector3_swap(PyObject *, PyObject *);}
static PyObject *meth_Vector3_swap(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Vector3 * a0;
        Vector3 *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_Vector3,&sipCpp,sipClass_Vector3,&a0))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Vector3,sipNm_BALL_swap);

    return NULL;
}


extern "C" {static PyObject *meth_Vector3_getLength(PyObject *, PyObject *);}
static PyObject *meth_Vector3_getLength(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Vector3 *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Vector3,&sipCpp))
        {
            float sipRes;

            try
            {
            sipRes = sipCpp->getLength();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Vector3,sipNm_BALL_getLength);

    return NULL;
}


extern "C" {static PyObject *meth_Vector3_getSquareLength(PyObject *, PyObject *);}
static PyObject *meth_Vector3_getSquareLength(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Vector3 *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Vector3,&sipCpp))
        {
            float sipRes;

            try
            {
            sipRes = sipCpp->getSquareLength();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Vector3,sipNm_BALL_getSquareLength);

    return NULL;
}


extern "C" {static PyObject *meth_Vector3_normalize(PyObject *, PyObject *);}
static PyObject *meth_Vector3_normalize(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Vector3 *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Vector3,&sipCpp))
        {
            Vector3 *sipRes;

            try
            {
            sipRes = &sipCpp->normalize();
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return sipConvertFromInstance(sipRes,sipClass_Vector3,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Vector3,sipNm_BALL_normalize);

    return NULL;
}


extern "C" {static PyObject *meth_Vector3_negate(PyObject *, PyObject *);}
static PyObject *meth_Vector3_negate(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Vector3 *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Vector3,&sipCpp))
        {
            Vector3 *sipRes;

            try
            {
            sipRes = &sipCpp->negate();
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return sipConvertFromInstance(sipRes,sipClass_Vector3,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Vector3,sipNm_BALL_negate);

    return NULL;
}


extern "C" {static PyObject *meth_Vector3_getZero(PyObject *, PyObject *);}
static PyObject *meth_Vector3_getZero(PyObject *,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        if (sipParseArgs(&sipArgsParsed,sipArgs,""))
        {
            const Vector3 *sipRes;

            try
            {
            sipRes = &Vector3::getZero();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Vector3,sipNm_BALL_getZero);

    return NULL;
}


extern "C" {static PyObject *meth_Vector3_getUnit(PyObject *, PyObject *);}
static PyObject *meth_Vector3_getUnit(PyObject *,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        if (sipParseArgs(&sipArgsParsed,sipArgs,""))
        {
            const Vector3 *sipRes;

            try
            {
            sipRes = &Vector3::getUnit();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Vector3,sipNm_BALL_getUnit);

    return NULL;
}


extern "C" {static PyObject *meth_Vector3_getDistance(PyObject *, PyObject *);}
static PyObject *meth_Vector3_getDistance(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const Vector3 * a0;
        Vector3 *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_Vector3,&sipCpp,sipClass_Vector3,&a0))
        {
            float sipRes;

            try
            {
            sipRes = sipCpp->getDistance(*a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Vector3,sipNm_BALL_getDistance);

    return NULL;
}


extern "C" {static PyObject *meth_Vector3_getSquareDistance(PyObject *, PyObject *);}
static PyObject *meth_Vector3_getSquareDistance(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const Vector3 * a0;
        Vector3 *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_Vector3,&sipCpp,sipClass_Vector3,&a0))
        {
            float sipRes;

            try
            {
            sipRes = sipCpp->getSquareDistance(*a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Vector3,sipNm_BALL_getSquareDistance);

    return NULL;
}


extern "C" {static PyObject *meth_Vector3_getAngle(PyObject *, PyObject *);}
static PyObject *meth_Vector3_getAngle(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const Vector3 * a0;
        Vector3 *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_Vector3,&sipCpp,sipClass_Vector3,&a0))
        {
            Angle *sipRes;

            try
            {
            sipRes = new Angle(sipCpp->getAngle(*a0));
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return sipConvertFromNewInstance(sipRes,sipClass_Angle,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Vector3,sipNm_BALL_getAngle);

    return NULL;
}


extern "C" {static PyObject *meth_Vector3_getOrthogonalProjection(PyObject *, PyObject *);}
static PyObject *meth_Vector3_getOrthogonalProjection(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const Vector3 * a0;
        Vector3 *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_Vector3,&sipCpp,sipClass_Vector3,&a0))
        {
            Vector3 *sipRes;

            try
            {
            sipRes = new Vector3(sipCpp->getOrthogonalProjection(*a0));
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Vector3,sipNm_BALL_getOrthogonalProjection);

    return NULL;
}


extern "C" {static PyObject *meth_Vector3_getPerpendicularNormalization(PyObject *, PyObject *);}
static PyObject *meth_Vector3_getPerpendicularNormalization(PyObject *,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const Vector3 * a0;
        const Vector3 * a1;
        const Vector3 * a2;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"JAJAJA",sipClass_Vector3,&a0,sipClass_Vector3,&a1,sipClass_Vector3,&a2))
        {
            Vector3 *sipRes;

            try
            {
            sipRes = new Vector3(Vector3::getPerpendicularNormalization(*a0,*a1,*a2));
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Vector3,sipNm_BALL_getPerpendicularNormalization);

    return NULL;
}


extern "C" {static PyObject *meth_Vector3_getTripleProduct(PyObject *, PyObject *);}
static PyObject *meth_Vector3_getTripleProduct(PyObject *,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const Vector3 * a0;
        const Vector3 * a1;
        const Vector3 * a2;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"JAJAJA",sipClass_Vector3,&a0,sipClass_Vector3,&a1,sipClass_Vector3,&a2))
        {
            float sipRes;

            try
            {
            sipRes = Vector3::getTripleProduct(*a0,*a1,*a2);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Vector3,sipNm_BALL_getTripleProduct);

    return NULL;
}


extern "C" {static PyObject *meth_Vector3_isZero(PyObject *, PyObject *);}
static PyObject *meth_Vector3_isZero(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Vector3 *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Vector3,&sipCpp))
        {
            bool sipRes;

            try
            {
            sipRes = sipCpp->isZero();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Vector3,sipNm_BALL_isZero);

    return NULL;
}


extern "C" {static PyObject *meth_Vector3_isOrthogonalTo(PyObject *, PyObject *);}
static PyObject *meth_Vector3_isOrthogonalTo(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Vector3 * a0;
        Vector3 *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_Vector3,&sipCpp,sipClass_Vector3,&a0))
        {
            bool sipRes;

            try
            {
            sipRes = sipCpp->isOrthogonalTo(*a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Vector3,sipNm_BALL_isOrthogonalTo);

    return NULL;
}


extern "C" {static PyObject *meth_Vector3_isValid(PyObject *, PyObject *);}
static PyObject *meth_Vector3_isValid(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Vector3 *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Vector3,&sipCpp))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Vector3,sipNm_BALL_isValid);

    return NULL;
}


extern "C" {static PyObject *slot_Vector3___str__(PyObject *sipSelf);}
static PyObject *slot_Vector3___str__(PyObject *sipSelf)
{
    Vector3 *sipCpp = reinterpret_cast<Vector3 *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_Vector3));

    if (!sipCpp)
        return 0;


    {
        {
            PyObject * sipRes = 0;

#line 87 "vector3.sip"
  static String tmp;
  tmp = "(";
  tmp += String(sipCpp->x) + " ";
  tmp += String(sipCpp->y) + " ";
  tmp += String(sipCpp->z) + ")";
 	sipRes = PyString_FromString(tmp.c_str());
#line 731 "sipBALLVector3.C"

            return sipRes;
        }
    }
}


extern "C" {static PyObject *slot_Vector3___sub__(PyObject *sipArg0,PyObject *sipArg1);}
static PyObject *slot_Vector3___sub__(PyObject *sipArg0,PyObject *sipArg1)
{
    int sipArgsParsed = 0;

    {
        Vector3 * a0;
        const Vector3 * a1;

        if (sipParsePair(&sipArgsParsed,sipArg0,sipArg1,"JAJA",sipClass_Vector3,&a0,sipClass_Vector3,&a1))
        {
            Vector3 *sipRes;

            try
            {
            sipRes = new Vector3((*a0 - *a1));
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return sipConvertFromNewInstance(sipRes,sipClass_Vector3,NULL);
        }
    }

    return sipPySlotExtend(&sipModuleAPI_BALL,sub_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_Vector3___add__(PyObject *sipArg0,PyObject *sipArg1);}
static PyObject *slot_Vector3___add__(PyObject *sipArg0,PyObject *sipArg1)
{
    int sipArgsParsed = 0;

    {
        Vector3 * a0;
        const Vector3 * a1;

        if (sipParsePair(&sipArgsParsed,sipArg0,sipArg1,"JAJA",sipClass_Vector3,&a0,sipClass_Vector3,&a1))
        {
            Vector3 *sipRes;

            try
            {
            sipRes = new Vector3((*a0 + *a1));
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return sipConvertFromNewInstance(sipRes,sipClass_Vector3,NULL);
        }
    }

    return sipPySlotExtend(&sipModuleAPI_BALL,add_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_Vector3___ne__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_Vector3___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    Vector3 *sipCpp = reinterpret_cast<Vector3 *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_Vector3));

    if (!sipCpp)
        return 0;

    int sipArgsParsed = 0;

    {
        const Vector3 * a0;

        if (sipParseArgs(&sipArgsParsed,sipArg,"JA",sipClass_Vector3,&a0))
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

    return sipPySlotExtend(&sipModuleAPI_BALL,ne_slot,sipClass_Vector3,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_Vector3___eq__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_Vector3___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    Vector3 *sipCpp = reinterpret_cast<Vector3 *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_Vector3));

    if (!sipCpp)
        return 0;

    int sipArgsParsed = 0;

    {
        const Vector3 * a0;

        if (sipParseArgs(&sipArgsParsed,sipArg,"JA",sipClass_Vector3,&a0))
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

    return sipPySlotExtend(&sipModuleAPI_BALL,eq_slot,sipClass_Vector3,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_Vector3___mod__(PyObject *sipArg0,PyObject *sipArg1);}
static PyObject *slot_Vector3___mod__(PyObject *sipArg0,PyObject *sipArg1)
{
    int sipArgsParsed = 0;

    {
        Vector3 * a0;
        const Vector3 * a1;

        if (sipParsePair(&sipArgsParsed,sipArg0,sipArg1,"JAJA",sipClass_Vector3,&a0,sipClass_Vector3,&a1))
        {
            Vector3 *sipRes;

            try
            {
            sipRes = new Vector3((*a0 % *a1));
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return sipConvertFromNewInstance(sipRes,sipClass_Vector3,NULL);
        }
    }

    return sipPySlotExtend(&sipModuleAPI_BALL,mod_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_Vector3___div__(PyObject *sipArg0,PyObject *sipArg1);}
static PyObject *slot_Vector3___div__(PyObject *sipArg0,PyObject *sipArg1)
{
    int sipArgsParsed = 0;

    {
        Vector3 * a0;
        float a1;

        if (sipParsePair(&sipArgsParsed,sipArg0,sipArg1,"JAf",sipClass_Vector3,&a0,&a1))
        {
            Vector3 *sipRes;

            try
            {
            sipRes = new Vector3((*a0 / a1));
            }
            catch (DivisionByZero &sipExceptionRef)
            {
                /* Hope that there is a valid copy ctor. */
                DivisionByZero *sipExceptionCopy = new DivisionByZero(sipExceptionRef);

                sipRaiseClassException(sipClass_DivisionByZero,sipExceptionCopy);

                return NULL;
            }

            return sipConvertFromNewInstance(sipRes,sipClass_Vector3,NULL);
        }
    }

    return sipPySlotExtend(&sipModuleAPI_BALL,div_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_Vector3___mul__(PyObject *sipArg0,PyObject *sipArg1);}
static PyObject *slot_Vector3___mul__(PyObject *sipArg0,PyObject *sipArg1)
{
    int sipArgsParsed = 0;

    {
        Vector3 * a0;
        float a1;

        if (sipParsePair(&sipArgsParsed,sipArg0,sipArg1,"JAf",sipClass_Vector3,&a0,&a1))
        {
            Vector3 *sipRes;

            try
            {
            sipRes = new Vector3((*a0 * a1));
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return sipConvertFromNewInstance(sipRes,sipClass_Vector3,NULL);
        }
    }

    {
        Vector3 * a0;
        const Vector3 * a1;

        if (sipParsePair(&sipArgsParsed,sipArg0,sipArg1,"JAJA",sipClass_Vector3,&a0,sipClass_Vector3,&a1))
        {
            float sipRes;

            try
            {
            sipRes = (*a0 * *a1);
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return PyFloat_FromDouble((double)sipRes);
        }
    }

    return sipPySlotExtend(&sipModuleAPI_BALL,mul_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_Vector3___idiv__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_Vector3___idiv__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf,(PyTypeObject *)sipClass_Vector3))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    Vector3 *sipCpp = reinterpret_cast<Vector3 *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_Vector3));

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
            catch (DivisionByZero &sipExceptionRef)
            {
                /* Hope that there is a valid copy ctor. */
                DivisionByZero *sipExceptionCopy = new DivisionByZero(sipExceptionRef);

                sipRaiseClassException(sipClass_DivisionByZero,sipExceptionCopy);

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


extern "C" {static PyObject *slot_Vector3___isub__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_Vector3___isub__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf,(PyTypeObject *)sipClass_Vector3))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    Vector3 *sipCpp = reinterpret_cast<Vector3 *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_Vector3));

    if (!sipCpp)
        return 0;

    int sipArgsParsed = 0;

    {
        const Vector3 * a0;

        if (sipParseArgs(&sipArgsParsed,sipArg,"JA",sipClass_Vector3,&a0))
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


extern "C" {static PyObject *slot_Vector3___iadd__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_Vector3___iadd__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf,(PyTypeObject *)sipClass_Vector3))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    Vector3 *sipCpp = reinterpret_cast<Vector3 *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_Vector3));

    if (!sipCpp)
        return 0;

    int sipArgsParsed = 0;

    {
        const Vector3 * a0;

        if (sipParseArgs(&sipArgsParsed,sipArg,"JA",sipClass_Vector3,&a0))
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


extern "C" {static PyObject *slot_Vector3___getitem__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_Vector3___getitem__(PyObject *sipSelf,PyObject *sipArg)
{
    Vector3 *sipCpp = reinterpret_cast<Vector3 *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_Vector3));

    if (!sipCpp)
        return 0;

    int sipArgsParsed = 0;

    {
        Index * a0;
        int a0State = 0;

        if (sipParseArgs(&sipArgsParsed,sipArg,"M1",sipMappedType_Index,&a0,&a0State))
        {
            float sipRes = 0;

#line 48 "vector3.sip"
	sipRes = sipCpp->operator [] (*a0);
#line 1143 "sipBALLVector3.C"

            sipReleaseMappedType(a0,sipMappedType_Index,a0State);

            return PyFloat_FromDouble((double)sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Vector3,sipNm_BALL___getitem__);

    return 0;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_Vector3(void *, sipWrapperType *);}
static void *cast_Vector3(void *ptr,sipWrapperType *targetClass)
{
    void *res;

    if (targetClass == sipClass_Vector3)
        return ptr;

    if ((res = sipCast_PersistentObject((PersistentObject *)(Vector3 *)ptr,targetClass)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_Vector3(void *, int);}
static void release_Vector3(void *ptr,int)
{
    delete reinterpret_cast<Vector3 *>(ptr);
}


extern "C" {static void dealloc_Vector3(sipWrapper *);}
static void dealloc_Vector3(sipWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_Vector3(sipSelf->u.cppPtr,0);
    }
}


extern "C" {static void *init_Vector3(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_Vector3(sipWrapper *,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    Vector3 *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            try
            {
            sipCpp = new Vector3();
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

        if (sipParseArgs(sipArgsParsed,sipArgs,"f",&a0))
        {
            try
            {
            sipCpp = new Vector3(a0);
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

        if (sipParseArgs(sipArgsParsed,sipArgs,"fff",&a0,&a1,&a2))
        {
            try
            {
            sipCpp = new Vector3(a0,a1,a2);
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

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_Vector3,&a0))
        {
            try
            {
            sipCpp = new Vector3(*a0);
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
        const Angle * a1;
        const Angle * a2;

        if (sipParseArgs(sipArgsParsed,sipArgs,"fJAJA",&a0,sipClass_Angle,&a1,sipClass_Angle,&a2))
        {
            try
            {
            sipCpp = new Vector3(a0,*a1,*a2);
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


extern "C" {static PyObject *var_Vector3_z(PyObject *, PyObject *);}
static PyObject *var_Vector3_z(PyObject *sipSelf,PyObject *sipPy)
{
   float sipVal;
    Vector3 *sipCpp = reinterpret_cast<Vector3 *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_Vector3));

    if (!sipCpp)
        return NULL;

    if (sipPy == NULL)
    {
        sipVal = sipCpp->z;

        sipPy = PyFloat_FromDouble((double)sipVal);

        return sipPy;
    }

	sipVal = (float)PyFloat_AsDouble(sipPy);

    if (PyErr_Occurred() != NULL)
    {
        sipBadSetType(sipNm_BALL_Vector3,sipNm_BALL_z);
        return NULL;
    }

    sipCpp->z = sipVal;

    Py_INCREF(Py_None);
    return Py_None;
}


extern "C" {static PyObject *var_Vector3_y(PyObject *, PyObject *);}
static PyObject *var_Vector3_y(PyObject *sipSelf,PyObject *sipPy)
{
   float sipVal;
    Vector3 *sipCpp = reinterpret_cast<Vector3 *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_Vector3));

    if (!sipCpp)
        return NULL;

    if (sipPy == NULL)
    {
        sipVal = sipCpp->y;

        sipPy = PyFloat_FromDouble((double)sipVal);

        return sipPy;
    }

	sipVal = (float)PyFloat_AsDouble(sipPy);

    if (PyErr_Occurred() != NULL)
    {
        sipBadSetType(sipNm_BALL_Vector3,sipNm_BALL_y);
        return NULL;
    }

    sipCpp->y = sipVal;

    Py_INCREF(Py_None);
    return Py_None;
}


extern "C" {static PyObject *var_Vector3_x(PyObject *, PyObject *);}
static PyObject *var_Vector3_x(PyObject *sipSelf,PyObject *sipPy)
{
   float sipVal;
    Vector3 *sipCpp = reinterpret_cast<Vector3 *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_Vector3));

    if (!sipCpp)
        return NULL;

    if (sipPy == NULL)
    {
        sipVal = sipCpp->x;

        sipPy = PyFloat_FromDouble((double)sipVal);

        return sipPy;
    }

	sipVal = (float)PyFloat_AsDouble(sipPy);

    if (PyErr_Occurred() != NULL)
    {
        sipBadSetType(sipNm_BALL_Vector3,sipNm_BALL_x);
        return NULL;
    }

    sipCpp->x = sipVal;

    Py_INCREF(Py_None);
    return Py_None;
}

PyMethodDef variables_Vector3[] = {
    {sipNm_BALL_z, var_Vector3_z, 0, NULL},
    {sipNm_BALL_y, var_Vector3_y, 0, NULL},
    {sipNm_BALL_x, var_Vector3_x, 0, NULL},
    {0, 0, 0, 0}
};


extern "C" {static void *forceConvertTo_Vector3(PyObject *, int *);}
static void *forceConvertTo_Vector3(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_Vector3))
        return sipConvertToCpp(valobj,sipClass_Vector3,iserrp);

    sipBadClass(sipNm_BALL_Vector3);

    *iserrp = 1;

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedClassDef supers_Vector3[] = {{220, 255, 1}};


/* Define this type's Python slots. */
static sipPySlotDef slots_Vector3[] = {
    {(void *)slot_Vector3___str__, str_slot},
    {(void *)slot_Vector3___sub__, sub_slot},
    {(void *)slot_Vector3___add__, add_slot},
    {(void *)slot_Vector3___ne__, ne_slot},
    {(void *)slot_Vector3___eq__, eq_slot},
    {(void *)slot_Vector3___mod__, mod_slot},
    {(void *)slot_Vector3___div__, div_slot},
    {(void *)slot_Vector3___mul__, mul_slot},
    {(void *)slot_Vector3___idiv__, idiv_slot},
    {(void *)slot_Vector3___isub__, isub_slot},
    {(void *)slot_Vector3___iadd__, iadd_slot},
    {(void *)slot_Vector3___getitem__, getitem_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_Vector3[] = {
    {sipNm_BALL_get, meth_Vector3_get, METH_VARARGS, NULL},
    {sipNm_BALL_getAngle, meth_Vector3_getAngle, METH_VARARGS, NULL},
    {sipNm_BALL_getDistance, meth_Vector3_getDistance, METH_VARARGS, NULL},
    {sipNm_BALL_getLength, meth_Vector3_getLength, METH_VARARGS, NULL},
    {sipNm_BALL_getOrthogonalProjection, meth_Vector3_getOrthogonalProjection, METH_VARARGS, NULL},
    {sipNm_BALL_getPerpendicularNormalization, meth_Vector3_getPerpendicularNormalization, METH_VARARGS, NULL},
    {sipNm_BALL_getSquareDistance, meth_Vector3_getSquareDistance, METH_VARARGS, NULL},
    {sipNm_BALL_getSquareLength, meth_Vector3_getSquareLength, METH_VARARGS, NULL},
    {sipNm_BALL_getTripleProduct, meth_Vector3_getTripleProduct, METH_VARARGS, NULL},
    {sipNm_BALL_getUnit, meth_Vector3_getUnit, METH_VARARGS, NULL},
    {sipNm_BALL_getZero, meth_Vector3_getZero, METH_VARARGS, NULL},
    {sipNm_BALL_isOrthogonalTo, meth_Vector3_isOrthogonalTo, METH_VARARGS, NULL},
    {sipNm_BALL_isValid, meth_Vector3_isValid, METH_VARARGS, NULL},
    {sipNm_BALL_isZero, meth_Vector3_isZero, METH_VARARGS, NULL},
    {sipNm_BALL_negate, meth_Vector3_negate, METH_VARARGS, NULL},
    {sipNm_BALL_normalize, meth_Vector3_normalize, METH_VARARGS, NULL},
    {sipNm_BALL_set, meth_Vector3_set, METH_VARARGS, NULL},
    {sipNm_BALL_swap, meth_Vector3_swap, METH_VARARGS, NULL}
};


sipTypeDef sipType_BALL_Vector3 = {
    0,
    0,
    "BALL.Vector3",
    0,
    {0, 0, 1},
    supers_Vector3,
    slots_Vector3,
    18, methods_Vector3,
    0, 0,
    variables_Vector3,
    init_Vector3,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_Vector3,
    cast_Vector3,
    release_Vector3,
    forceConvertTo_Vector3,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
