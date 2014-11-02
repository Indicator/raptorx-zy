/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLAngle.h"

#include "sipBALLAngle.h"



extern "C" {static PyObject *meth_Angle_swap(PyObject *, PyObject *);}
static PyObject *meth_Angle_swap(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Angle * a0;
        Angle *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_Angle,&sipCpp,sipClass_Angle,&a0))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Angle,sipNm_BALL_swap);

    return NULL;
}


extern "C" {static PyObject *meth_Angle_set(PyObject *, PyObject *);}
static PyObject *meth_Angle_set(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        float a0;
        bool a1 = 1;
        Angle *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bf|b",&sipSelf,sipClass_Angle,&sipCpp,&a0,&a1))
        {
            try
            {
            sipCpp->set(a0,a1);
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
        Angle *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_Angle,&sipCpp,sipClass_Angle,&a0))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Angle,sipNm_BALL_set);

    return NULL;
}


extern "C" {static PyObject *meth_Angle_toRadian(PyObject *, PyObject *);}
static PyObject *meth_Angle_toRadian(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Angle *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Angle,&sipCpp))
        {
            float sipRes;

            try
            {
            sipRes = sipCpp->toRadian();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Angle,sipNm_BALL_toRadian);

    return NULL;
}


extern "C" {static PyObject *meth_Angle_toDegree(PyObject *, PyObject *);}
static PyObject *meth_Angle_toDegree(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Angle *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Angle,&sipCpp))
        {
            float sipRes;

            try
            {
            sipRes = sipCpp->toDegree();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Angle,sipNm_BALL_toDegree);

    return NULL;
}


extern "C" {static PyObject *meth_Angle_normalize(PyObject *, PyObject *);}
static PyObject *meth_Angle_normalize(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Angle::Range a0;
        Angle *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BE",&sipSelf,sipClass_Angle,&sipCpp,sipEnum_Angle_Range,&a0))
        {
            try
            {
            sipCpp->normalize(a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Angle,sipNm_BALL_normalize);

    return NULL;
}


extern "C" {static PyObject *meth_Angle_negate(PyObject *, PyObject *);}
static PyObject *meth_Angle_negate(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Angle *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Angle,&sipCpp))
        {
            try
            {
            sipCpp->negate();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Angle,sipNm_BALL_negate);

    return NULL;
}


extern "C" {static PyObject *meth_Angle_isEquivalent(PyObject *, PyObject *);}
static PyObject *meth_Angle_isEquivalent(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Angle * a0;
        Angle *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_Angle,&sipCpp,sipClass_Angle,&a0))
        {
            bool sipRes;

            try
            {
            sipRes = sipCpp->isEquivalent(*a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Angle,sipNm_BALL_isEquivalent);

    return NULL;
}


extern "C" {static PyObject *meth_Angle_isValid(PyObject *, PyObject *);}
static PyObject *meth_Angle_isValid(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Angle *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Angle,&sipCpp))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Angle,sipNm_BALL_isValid);

    return NULL;
}


extern "C" {static PyObject *slot_Angle___str__(PyObject *sipSelf);}
static PyObject *slot_Angle___str__(PyObject *sipSelf)
{
    Angle *sipCpp = reinterpret_cast<Angle *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_Angle));

    if (!sipCpp)
        return 0;


    {
        {
            PyObject * sipRes = 0;

#line 65 "angle.sip"
	sipRes = PyString_FromString(String(sipCpp->toRadian()).c_str());
#line 319 "sipBALLAngle.C"

            return sipRes;
        }
    }
}


extern "C" {static PyObject *slot_Angle___gt__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_Angle___gt__(PyObject *sipSelf,PyObject *sipArg)
{
    Angle *sipCpp = reinterpret_cast<Angle *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_Angle));

    if (!sipCpp)
        return 0;

    int sipArgsParsed = 0;

    {
        const Angle * a0;

        if (sipParseArgs(&sipArgsParsed,sipArg,"JA",sipClass_Angle,&a0))
        {
            bool sipRes;

            try
            {
            sipRes = ((*sipCpp) > *a0);
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return PyBool_FromLong(sipRes);
        }
    }

    return sipPySlotExtend(&sipModuleAPI_BALL,gt_slot,sipClass_Angle,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_Angle___ge__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_Angle___ge__(PyObject *sipSelf,PyObject *sipArg)
{
    Angle *sipCpp = reinterpret_cast<Angle *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_Angle));

    if (!sipCpp)
        return 0;

    int sipArgsParsed = 0;

    {
        const Angle * a0;

        if (sipParseArgs(&sipArgsParsed,sipArg,"JA",sipClass_Angle,&a0))
        {
            bool sipRes;

            try
            {
            sipRes = ((*sipCpp) >= *a0);
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return PyBool_FromLong(sipRes);
        }
    }

    return sipPySlotExtend(&sipModuleAPI_BALL,ge_slot,sipClass_Angle,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_Angle___le__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_Angle___le__(PyObject *sipSelf,PyObject *sipArg)
{
    Angle *sipCpp = reinterpret_cast<Angle *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_Angle));

    if (!sipCpp)
        return 0;

    int sipArgsParsed = 0;

    {
        const Angle * a0;

        if (sipParseArgs(&sipArgsParsed,sipArg,"JA",sipClass_Angle,&a0))
        {
            bool sipRes;

            try
            {
            sipRes = ((*sipCpp) <= *a0);
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return PyBool_FromLong(sipRes);
        }
    }

    return sipPySlotExtend(&sipModuleAPI_BALL,le_slot,sipClass_Angle,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_Angle___lt__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_Angle___lt__(PyObject *sipSelf,PyObject *sipArg)
{
    Angle *sipCpp = reinterpret_cast<Angle *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_Angle));

    if (!sipCpp)
        return 0;

    int sipArgsParsed = 0;

    {
        const Angle * a0;

        if (sipParseArgs(&sipArgsParsed,sipArg,"JA",sipClass_Angle,&a0))
        {
            bool sipRes;

            try
            {
            sipRes = ((*sipCpp) < *a0);
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
        float a0;

        if (sipParseArgs(&sipArgsParsed,sipArg,"f",&a0))
        {
            bool sipRes;

            try
            {
            sipRes = ((*sipCpp) < a0);
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return PyBool_FromLong(sipRes);
        }
    }

    return sipPySlotExtend(&sipModuleAPI_BALL,lt_slot,sipClass_Angle,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_Angle___ne__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_Angle___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    Angle *sipCpp = reinterpret_cast<Angle *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_Angle));

    if (!sipCpp)
        return 0;

    int sipArgsParsed = 0;

    {
        const Angle * a0;

        if (sipParseArgs(&sipArgsParsed,sipArg,"JA",sipClass_Angle,&a0))
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

    return sipPySlotExtend(&sipModuleAPI_BALL,ne_slot,sipClass_Angle,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_Angle___eq__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_Angle___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    Angle *sipCpp = reinterpret_cast<Angle *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_Angle));

    if (!sipCpp)
        return 0;

    int sipArgsParsed = 0;

    {
        const Angle * a0;

        if (sipParseArgs(&sipArgsParsed,sipArg,"JA",sipClass_Angle,&a0))
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

    return sipPySlotExtend(&sipModuleAPI_BALL,eq_slot,sipClass_Angle,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_Angle___div__(PyObject *sipArg0,PyObject *sipArg1);}
static PyObject *slot_Angle___div__(PyObject *sipArg0,PyObject *sipArg1)
{
    int sipArgsParsed = 0;

    {
        Angle * a0;
        const Angle * a1;

        if (sipParsePair(&sipArgsParsed,sipArg0,sipArg1,"JAJA",sipClass_Angle,&a0,sipClass_Angle,&a1))
        {
            Angle *sipRes;

            try
            {
            sipRes = new Angle((*a0 / *a1));
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return sipConvertFromNewInstance(sipRes,sipClass_Angle,NULL);
        }
    }

    return sipPySlotExtend(&sipModuleAPI_BALL,div_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_Angle___idiv__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_Angle___idiv__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf,(PyTypeObject *)sipClass_Angle))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    Angle *sipCpp = reinterpret_cast<Angle *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_Angle));

    if (!sipCpp)
        return 0;

    int sipArgsParsed = 0;

    {
        const Angle * a0;

        if (sipParseArgs(&sipArgsParsed,sipArg,"JA",sipClass_Angle,&a0))
        {
            try
            {
            ((*sipCpp) /= *a0);
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


extern "C" {static PyObject *slot_Angle___imul__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_Angle___imul__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf,(PyTypeObject *)sipClass_Angle))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    Angle *sipCpp = reinterpret_cast<Angle *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_Angle));

    if (!sipCpp)
        return 0;

    int sipArgsParsed = 0;

    {
        const Angle * a0;

        if (sipParseArgs(&sipArgsParsed,sipArg,"JA",sipClass_Angle,&a0))
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


extern "C" {static PyObject *slot_Angle___sub__(PyObject *sipArg0,PyObject *sipArg1);}
static PyObject *slot_Angle___sub__(PyObject *sipArg0,PyObject *sipArg1)
{
    int sipArgsParsed = 0;

    {
        Angle * a0;
        const Angle * a1;

        if (sipParsePair(&sipArgsParsed,sipArg0,sipArg1,"JAJA",sipClass_Angle,&a0,sipClass_Angle,&a1))
        {
            Angle *sipRes;

            try
            {
            sipRes = new Angle((*a0 - *a1));
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return sipConvertFromNewInstance(sipRes,sipClass_Angle,NULL);
        }
    }

    return sipPySlotExtend(&sipModuleAPI_BALL,sub_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_Angle___isub__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_Angle___isub__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf,(PyTypeObject *)sipClass_Angle))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    Angle *sipCpp = reinterpret_cast<Angle *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_Angle));

    if (!sipCpp)
        return 0;

    int sipArgsParsed = 0;

    {
        const Angle * a0;

        if (sipParseArgs(&sipArgsParsed,sipArg,"JA",sipClass_Angle,&a0))
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

    {
        float a0;

        if (sipParseArgs(&sipArgsParsed,sipArg,"f",&a0))
        {
            try
            {
            ((*sipCpp) -= a0);
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


extern "C" {static PyObject *slot_Angle___add__(PyObject *sipArg0,PyObject *sipArg1);}
static PyObject *slot_Angle___add__(PyObject *sipArg0,PyObject *sipArg1)
{
    int sipArgsParsed = 0;

    {
        Angle * a0;
        const Angle * a1;

        if (sipParsePair(&sipArgsParsed,sipArg0,sipArg1,"JAJA",sipClass_Angle,&a0,sipClass_Angle,&a1))
        {
            Angle *sipRes;

            try
            {
            sipRes = new Angle((*a0 + *a1));
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return sipConvertFromNewInstance(sipRes,sipClass_Angle,NULL);
        }
    }

    return sipPySlotExtend(&sipModuleAPI_BALL,add_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_Angle___iadd__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_Angle___iadd__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf,(PyTypeObject *)sipClass_Angle))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    Angle *sipCpp = reinterpret_cast<Angle *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_Angle));

    if (!sipCpp)
        return 0;

    int sipArgsParsed = 0;

    {
        const Angle * a0;

        if (sipParseArgs(&sipArgsParsed,sipArg,"JA",sipClass_Angle,&a0))
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

    {
        float a0;

        if (sipParseArgs(&sipArgsParsed,sipArg,"f",&a0))
        {
            try
            {
            ((*sipCpp) += a0);
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
extern "C" {static void *cast_Angle(void *, sipWrapperType *);}
static void *cast_Angle(void *ptr,sipWrapperType *targetClass)
{
    if (targetClass == sipClass_Angle)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_Angle(void *, int);}
static void release_Angle(void *ptr,int)
{
    delete reinterpret_cast<Angle *>(ptr);
}


extern "C" {static void dealloc_Angle(sipWrapper *);}
static void dealloc_Angle(sipWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_Angle(sipSelf->u.cppPtr,0);
    }
}


extern "C" {static void *init_Angle(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_Angle(sipWrapper *,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    Angle *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            try
            {
            sipCpp = new Angle();
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
        const Angle * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_Angle,&a0))
        {
            try
            {
            sipCpp = new Angle(*a0);
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
        bool a1 = 1;

        if (sipParseArgs(sipArgsParsed,sipArgs,"f|b",&a0,&a1))
        {
            try
            {
            sipCpp = new Angle(a0,a1);
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


extern "C" {static void *forceConvertTo_Angle(PyObject *, int *);}
static void *forceConvertTo_Angle(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_Angle))
        return sipConvertToCpp(valobj,sipClass_Angle,iserrp);

    sipBadClass(sipNm_BALL_Angle);

    *iserrp = 1;

    return NULL;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_Angle[] = {
    {(void *)slot_Angle___str__, str_slot},
    {(void *)slot_Angle___gt__, gt_slot},
    {(void *)slot_Angle___ge__, ge_slot},
    {(void *)slot_Angle___le__, le_slot},
    {(void *)slot_Angle___lt__, lt_slot},
    {(void *)slot_Angle___ne__, ne_slot},
    {(void *)slot_Angle___eq__, eq_slot},
    {(void *)slot_Angle___div__, div_slot},
    {(void *)slot_Angle___idiv__, idiv_slot},
    {(void *)slot_Angle___imul__, imul_slot},
    {(void *)slot_Angle___sub__, sub_slot},
    {(void *)slot_Angle___isub__, isub_slot},
    {(void *)slot_Angle___add__, add_slot},
    {(void *)slot_Angle___iadd__, iadd_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_Angle[] = {
    {sipNm_BALL_isEquivalent, meth_Angle_isEquivalent, METH_VARARGS, NULL},
    {sipNm_BALL_isValid, meth_Angle_isValid, METH_VARARGS, NULL},
    {sipNm_BALL_negate, meth_Angle_negate, METH_VARARGS, NULL},
    {sipNm_BALL_normalize, meth_Angle_normalize, METH_VARARGS, NULL},
    {sipNm_BALL_set, meth_Angle_set, METH_VARARGS, NULL},
    {sipNm_BALL_swap, meth_Angle_swap, METH_VARARGS, NULL},
    {sipNm_BALL_toDegree, meth_Angle_toDegree, METH_VARARGS, NULL},
    {sipNm_BALL_toRadian, meth_Angle_toRadian, METH_VARARGS, NULL}
};

static sipEnumMemberDef enummembers_Angle[] = {
    {sipNm_BALL_RANGE__SIGNED, Angle::RANGE__SIGNED, 21},
    {sipNm_BALL_RANGE__UNLIMITED, Angle::RANGE__UNLIMITED, 21},
    {sipNm_BALL_RANGE__UNSIGNED, Angle::RANGE__UNSIGNED, 21},
};


sipTypeDef sipType_BALL_Angle = {
    0,
    0,
    "BALL.Angle",
    0,
    {0, 0, 1},
    0,
    slots_Angle,
    8, methods_Angle,
    3, enummembers_Angle,
    0,
    init_Angle,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_Angle,
    cast_Angle,
    release_Angle,
    forceConvertTo_Angle,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
