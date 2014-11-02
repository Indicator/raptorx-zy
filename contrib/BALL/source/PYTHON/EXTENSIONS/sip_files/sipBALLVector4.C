/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLVector4.h"

#include "sipBALLVector4.h"
#include "sipBALLIndex.h"



extern "C" {static PyObject *meth_Vector4_set(PyObject *, PyObject *);}
static PyObject *meth_Vector4_set(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        float a0;
        float a1;
        float a2;
        float a3 = 1;
        Vector4 *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bfff|f",&sipSelf,sipClass_Vector4,&sipCpp,&a0,&a1,&a2,&a3))
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

    {
        const Vector4 * a0;
        Vector4 *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_Vector4,&sipCpp,sipClass_Vector4,&a0))
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
        float a0 = 1;
        Vector4 *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B|f",&sipSelf,sipClass_Vector4,&sipCpp,&a0))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Vector4,sipNm_BALL_set);

    return NULL;
}


extern "C" {static PyObject *meth_Vector4_get(PyObject *, PyObject *);}
static PyObject *meth_Vector4_get(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        float a0;
        float a1;
        float a2;
        float a3;
        Vector4 *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bffff",&sipSelf,sipClass_Vector4,&sipCpp,&a0,&a1,&a2,&a3))
        {
            try
            {
            sipCpp->get(a0,a1,a2,a3);
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
        Vector4 *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_Vector4,&sipCpp,sipClass_Vector4,&a0))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Vector4,sipNm_BALL_get);

    return NULL;
}


extern "C" {static PyObject *meth_Vector4_swap(PyObject *, PyObject *);}
static PyObject *meth_Vector4_swap(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Vector4 * a0;
        Vector4 *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_Vector4,&sipCpp,sipClass_Vector4,&a0))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Vector4,sipNm_BALL_swap);

    return NULL;
}


extern "C" {static PyObject *meth_Vector4_getLength(PyObject *, PyObject *);}
static PyObject *meth_Vector4_getLength(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Vector4 *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Vector4,&sipCpp))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Vector4,sipNm_BALL_getLength);

    return NULL;
}


extern "C" {static PyObject *meth_Vector4_getSquareLength(PyObject *, PyObject *);}
static PyObject *meth_Vector4_getSquareLength(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Vector4 *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Vector4,&sipCpp))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Vector4,sipNm_BALL_getSquareLength);

    return NULL;
}


extern "C" {static PyObject *meth_Vector4_normalize(PyObject *, PyObject *);}
static PyObject *meth_Vector4_normalize(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Vector4 *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Vector4,&sipCpp))
        {
            Vector4 *sipRes;

            try
            {
            sipRes = &sipCpp->normalize();
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return sipConvertFromInstance(sipRes,sipClass_Vector4,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Vector4,sipNm_BALL_normalize);

    return NULL;
}


extern "C" {static PyObject *meth_Vector4_getZero(PyObject *, PyObject *);}
static PyObject *meth_Vector4_getZero(PyObject *,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        if (sipParseArgs(&sipArgsParsed,sipArgs,""))
        {
            const Vector4 *sipRes;

            try
            {
            sipRes = &Vector4::getZero();
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return sipConvertFromInstance(const_cast<Vector4 *>(sipRes),sipClass_Vector4,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Vector4,sipNm_BALL_getZero);

    return NULL;
}


extern "C" {static PyObject *meth_Vector4_getUnit(PyObject *, PyObject *);}
static PyObject *meth_Vector4_getUnit(PyObject *,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        if (sipParseArgs(&sipArgsParsed,sipArgs,""))
        {
            const Vector4 *sipRes;

            try
            {
            sipRes = &Vector4::getUnit();
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return sipConvertFromInstance(const_cast<Vector4 *>(sipRes),sipClass_Vector4,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Vector4,sipNm_BALL_getUnit);

    return NULL;
}


extern "C" {static PyObject *meth_Vector4_getDistance(PyObject *, PyObject *);}
static PyObject *meth_Vector4_getDistance(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const Vector4 * a0;
        Vector4 *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_Vector4,&sipCpp,sipClass_Vector4,&a0))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Vector4,sipNm_BALL_getDistance);

    return NULL;
}


extern "C" {static PyObject *meth_Vector4_getSquareDistance(PyObject *, PyObject *);}
static PyObject *meth_Vector4_getSquareDistance(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const Vector4 * a0;
        Vector4 *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_Vector4,&sipCpp,sipClass_Vector4,&a0))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Vector4,sipNm_BALL_getSquareDistance);

    return NULL;
}


extern "C" {static PyObject *meth_Vector4_isOrthogonalTo(PyObject *, PyObject *);}
static PyObject *meth_Vector4_isOrthogonalTo(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Vector4 * a0;
        Vector4 *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_Vector4,&sipCpp,sipClass_Vector4,&a0))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Vector4,sipNm_BALL_isOrthogonalTo);

    return NULL;
}


extern "C" {static PyObject *meth_Vector4_isValid(PyObject *, PyObject *);}
static PyObject *meth_Vector4_isValid(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Vector4 *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Vector4,&sipCpp))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Vector4,sipNm_BALL_isValid);

    return NULL;
}


extern "C" {static PyObject *slot_Vector4___ne__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_Vector4___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    Vector4 *sipCpp = reinterpret_cast<Vector4 *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_Vector4));

    if (!sipCpp)
        return 0;

    int sipArgsParsed = 0;

    {
        const Vector4 * a0;

        if (sipParseArgs(&sipArgsParsed,sipArg,"JA",sipClass_Vector4,&a0))
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

    return sipPySlotExtend(&sipModuleAPI_BALL,ne_slot,sipClass_Vector4,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_Vector4___eq__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_Vector4___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    Vector4 *sipCpp = reinterpret_cast<Vector4 *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_Vector4));

    if (!sipCpp)
        return 0;

    int sipArgsParsed = 0;

    {
        const Vector4 * a0;

        if (sipParseArgs(&sipArgsParsed,sipArg,"JA",sipClass_Vector4,&a0))
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

    return sipPySlotExtend(&sipModuleAPI_BALL,eq_slot,sipClass_Vector4,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_Vector4___idiv__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_Vector4___idiv__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf,(PyTypeObject *)sipClass_Vector4))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    Vector4 *sipCpp = reinterpret_cast<Vector4 *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_Vector4));

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


extern "C" {static PyObject *slot_Vector4___div__(PyObject *sipArg0,PyObject *sipArg1);}
static PyObject *slot_Vector4___div__(PyObject *sipArg0,PyObject *sipArg1)
{
    int sipArgsParsed = 0;

    {
        Vector4 * a0;
        float a1;

        if (sipParsePair(&sipArgsParsed,sipArg0,sipArg1,"JAf",sipClass_Vector4,&a0,&a1))
        {
            Vector4 *sipRes;

            try
            {
            sipRes = new Vector4((*a0 / a1));
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return sipConvertFromNewInstance(sipRes,sipClass_Vector4,NULL);
        }
    }

    return sipPySlotExtend(&sipModuleAPI_BALL,div_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_Vector4___imul__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_Vector4___imul__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf,(PyTypeObject *)sipClass_Vector4))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    Vector4 *sipCpp = reinterpret_cast<Vector4 *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_Vector4));

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

    PyErr_Clear();

    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}


extern "C" {static PyObject *slot_Vector4___mul__(PyObject *sipArg0,PyObject *sipArg1);}
static PyObject *slot_Vector4___mul__(PyObject *sipArg0,PyObject *sipArg1)
{
    int sipArgsParsed = 0;

    {
        Vector4 * a0;
        float a1;

        if (sipParsePair(&sipArgsParsed,sipArg0,sipArg1,"JAf",sipClass_Vector4,&a0,&a1))
        {
            Vector4 *sipRes;

            try
            {
            sipRes = new Vector4((*a0 * a1));
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return sipConvertFromNewInstance(sipRes,sipClass_Vector4,NULL);
        }
    }

    {
        Vector4 * a0;
        const Vector4 * a1;

        if (sipParsePair(&sipArgsParsed,sipArg0,sipArg1,"JAJA",sipClass_Vector4,&a0,sipClass_Vector4,&a1))
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


extern "C" {static PyObject *slot_Vector4___isub__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_Vector4___isub__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf,(PyTypeObject *)sipClass_Vector4))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    Vector4 *sipCpp = reinterpret_cast<Vector4 *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_Vector4));

    if (!sipCpp)
        return 0;

    int sipArgsParsed = 0;

    {
        const Vector4 * a0;

        if (sipParseArgs(&sipArgsParsed,sipArg,"JA",sipClass_Vector4,&a0))
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


extern "C" {static PyObject *slot_Vector4___iadd__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_Vector4___iadd__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf,(PyTypeObject *)sipClass_Vector4))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    Vector4 *sipCpp = reinterpret_cast<Vector4 *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_Vector4));

    if (!sipCpp)
        return 0;

    int sipArgsParsed = 0;

    {
        const Vector4 * a0;

        if (sipParseArgs(&sipArgsParsed,sipArg,"JA",sipClass_Vector4,&a0))
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


extern "C" {static PyObject *slot_Vector4___getitem__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_Vector4___getitem__(PyObject *sipSelf,PyObject *sipArg)
{
    Vector4 *sipCpp = reinterpret_cast<Vector4 *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_Vector4));

    if (!sipCpp)
        return 0;

    int sipArgsParsed = 0;

    {
        Index * a0;
        int a0State = 0;

        if (sipParseArgs(&sipArgsParsed,sipArg,"M1",sipMappedType_Index,&a0,&a0State))
        {
            float sipRes = 0;

#line 40 "vector4.sip"
	sipRes = sipCpp->operator [] (*a0);
#line 829 "sipBALLVector4.C"

            sipReleaseMappedType(a0,sipMappedType_Index,a0State);

            return PyFloat_FromDouble((double)sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Vector4,sipNm_BALL___getitem__);

    return 0;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_Vector4(void *, sipWrapperType *);}
static void *cast_Vector4(void *ptr,sipWrapperType *targetClass)
{
    if (targetClass == sipClass_Vector4)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_Vector4(void *, int);}
static void release_Vector4(void *ptr,int)
{
    delete reinterpret_cast<Vector4 *>(ptr);
}


extern "C" {static void dealloc_Vector4(sipWrapper *);}
static void dealloc_Vector4(sipWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_Vector4(sipSelf->u.cppPtr,0);
    }
}


extern "C" {static void *init_Vector4(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_Vector4(sipWrapper *,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    Vector4 *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            try
            {
            sipCpp = new Vector4();
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
        float a3 = 1;

        if (sipParseArgs(sipArgsParsed,sipArgs,"fff|f",&a0,&a1,&a2,&a3))
        {
            try
            {
            sipCpp = new Vector4(a0,a1,a2,a3);
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

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_Vector4,&a0))
        {
            try
            {
            sipCpp = new Vector4(*a0);
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


extern "C" {static PyObject *var_Vector4_h(PyObject *, PyObject *);}
static PyObject *var_Vector4_h(PyObject *sipSelf,PyObject *sipPy)
{
   float sipVal;
    Vector4 *sipCpp = reinterpret_cast<Vector4 *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_Vector4));

    if (!sipCpp)
        return NULL;

    if (sipPy == NULL)
    {
        sipVal = sipCpp->h;

        sipPy = PyFloat_FromDouble((double)sipVal);

        return sipPy;
    }

	sipVal = (float)PyFloat_AsDouble(sipPy);

    if (PyErr_Occurred() != NULL)
    {
        sipBadSetType(sipNm_BALL_Vector4,sipNm_BALL_h);
        return NULL;
    }

    sipCpp->h = sipVal;

    Py_INCREF(Py_None);
    return Py_None;
}


extern "C" {static PyObject *var_Vector4_z(PyObject *, PyObject *);}
static PyObject *var_Vector4_z(PyObject *sipSelf,PyObject *sipPy)
{
   float sipVal;
    Vector4 *sipCpp = reinterpret_cast<Vector4 *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_Vector4));

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
        sipBadSetType(sipNm_BALL_Vector4,sipNm_BALL_z);
        return NULL;
    }

    sipCpp->z = sipVal;

    Py_INCREF(Py_None);
    return Py_None;
}


extern "C" {static PyObject *var_Vector4_y(PyObject *, PyObject *);}
static PyObject *var_Vector4_y(PyObject *sipSelf,PyObject *sipPy)
{
   float sipVal;
    Vector4 *sipCpp = reinterpret_cast<Vector4 *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_Vector4));

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
        sipBadSetType(sipNm_BALL_Vector4,sipNm_BALL_y);
        return NULL;
    }

    sipCpp->y = sipVal;

    Py_INCREF(Py_None);
    return Py_None;
}


extern "C" {static PyObject *var_Vector4_x(PyObject *, PyObject *);}
static PyObject *var_Vector4_x(PyObject *sipSelf,PyObject *sipPy)
{
   float sipVal;
    Vector4 *sipCpp = reinterpret_cast<Vector4 *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_Vector4));

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
        sipBadSetType(sipNm_BALL_Vector4,sipNm_BALL_x);
        return NULL;
    }

    sipCpp->x = sipVal;

    Py_INCREF(Py_None);
    return Py_None;
}

PyMethodDef variables_Vector4[] = {
    {sipNm_BALL_h, var_Vector4_h, 0, NULL},
    {sipNm_BALL_z, var_Vector4_z, 0, NULL},
    {sipNm_BALL_y, var_Vector4_y, 0, NULL},
    {sipNm_BALL_x, var_Vector4_x, 0, NULL},
    {0, 0, 0, 0}
};


extern "C" {static void *forceConvertTo_Vector4(PyObject *, int *);}
static void *forceConvertTo_Vector4(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_Vector4))
        return sipConvertToCpp(valobj,sipClass_Vector4,iserrp);

    sipBadClass(sipNm_BALL_Vector4);

    *iserrp = 1;

    return NULL;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_Vector4[] = {
    {(void *)slot_Vector4___ne__, ne_slot},
    {(void *)slot_Vector4___eq__, eq_slot},
    {(void *)slot_Vector4___idiv__, idiv_slot},
    {(void *)slot_Vector4___div__, div_slot},
    {(void *)slot_Vector4___imul__, imul_slot},
    {(void *)slot_Vector4___mul__, mul_slot},
    {(void *)slot_Vector4___isub__, isub_slot},
    {(void *)slot_Vector4___iadd__, iadd_slot},
    {(void *)slot_Vector4___getitem__, getitem_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_Vector4[] = {
    {sipNm_BALL_get, meth_Vector4_get, METH_VARARGS, NULL},
    {sipNm_BALL_getDistance, meth_Vector4_getDistance, METH_VARARGS, NULL},
    {sipNm_BALL_getLength, meth_Vector4_getLength, METH_VARARGS, NULL},
    {sipNm_BALL_getSquareDistance, meth_Vector4_getSquareDistance, METH_VARARGS, NULL},
    {sipNm_BALL_getSquareLength, meth_Vector4_getSquareLength, METH_VARARGS, NULL},
    {sipNm_BALL_getUnit, meth_Vector4_getUnit, METH_VARARGS, NULL},
    {sipNm_BALL_getZero, meth_Vector4_getZero, METH_VARARGS, NULL},
    {sipNm_BALL_isOrthogonalTo, meth_Vector4_isOrthogonalTo, METH_VARARGS, NULL},
    {sipNm_BALL_isValid, meth_Vector4_isValid, METH_VARARGS, NULL},
    {sipNm_BALL_normalize, meth_Vector4_normalize, METH_VARARGS, NULL},
    {sipNm_BALL_set, meth_Vector4_set, METH_VARARGS, NULL},
    {sipNm_BALL_swap, meth_Vector4_swap, METH_VARARGS, NULL}
};


sipTypeDef sipType_BALL_Vector4 = {
    0,
    0,
    "BALL.Vector4",
    0,
    {0, 0, 1},
    0,
    slots_Vector4,
    12, methods_Vector4,
    0, 0,
    variables_Vector4,
    init_Vector4,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_Vector4,
    cast_Vector4,
    release_Vector4,
    forceConvertTo_Vector4,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
