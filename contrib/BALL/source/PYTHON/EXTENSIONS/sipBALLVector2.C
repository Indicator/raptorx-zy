/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLVector2.h"

#include "sipBALLPersistentObject.h"
#include "sipBALLDivisionByZero.h"
#include "sipBALLIndexOverflow.h"
#include "sipBALLVector2.h"
#include "sipBALLPosition.h"


sipVector2::sipVector2() throw(): Vector2(), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,1);
}

sipVector2::sipVector2(float a0) throw(): Vector2(a0), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,1);
}

sipVector2::sipVector2(float a0,float a1) throw(): Vector2(a0,a1), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,1);
}

sipVector2::sipVector2(const Vector2& a0) throw(): Vector2(a0), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,1);
}

sipVector2::~sipVector2() throw()
{
    sipCommonDtor(sipPySelf);
}

void sipVector2::clear() throw()
{
    extern void sipVH_BALL_0(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipNm_BALL_clear);

    if (!meth)
    {
        Vector2::clear();
        return;
    }

    sipVH_BALL_0(sipGILState,meth);
}


extern "C" {static PyObject *meth_Vector2_clear(PyObject *, PyObject *);}
static PyObject *meth_Vector2_clear(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        Vector2 *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Vector2,&sipCpp))
        {
            (sipSelfWasArg ? sipCpp->Vector2::clear() : sipCpp->clear());

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Vector2,sipNm_BALL_clear);

    return NULL;
}


extern "C" {static PyObject *meth_Vector2_set(PyObject *, PyObject *);}
static PyObject *meth_Vector2_set(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        float a0;
        Vector2 *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bf",&sipSelf,sipClass_Vector2,&sipCpp,&a0))
        {
            sipCpp->set(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    {
        float a0;
        float a1;
        Vector2 *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bff",&sipSelf,sipClass_Vector2,&sipCpp,&a0,&a1))
        {
            sipCpp->set(a0,a1);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    {
        const Vector2 * a0;
        Vector2 *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_Vector2,&sipCpp,sipClass_Vector2,&a0))
        {
            sipCpp->set(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Vector2,sipNm_BALL_set);

    return NULL;
}


extern "C" {static PyObject *meth_Vector2_getLength(PyObject *, PyObject *);}
static PyObject *meth_Vector2_getLength(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Vector2 *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Vector2,&sipCpp))
        {
            float sipRes;

            sipRes = sipCpp->getLength();

            return PyFloat_FromDouble((double)sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Vector2,sipNm_BALL_getLength);

    return NULL;
}


extern "C" {static PyObject *meth_Vector2_getSquareLength(PyObject *, PyObject *);}
static PyObject *meth_Vector2_getSquareLength(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Vector2 *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Vector2,&sipCpp))
        {
            float sipRes;

            sipRes = sipCpp->getSquareLength();

            return PyFloat_FromDouble((double)sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Vector2,sipNm_BALL_getSquareLength);

    return NULL;
}


extern "C" {static PyObject *meth_Vector2_normalize(PyObject *, PyObject *);}
static PyObject *meth_Vector2_normalize(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Vector2 *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Vector2,&sipCpp))
        {
            Vector2 *sipRes;

            try
            {
            sipRes = &sipCpp->normalize();
            }
            catch (DivisionByZero &sipExceptionRef)
            {
                /* Hope that there is a valid copy ctor. */
                DivisionByZero *sipExceptionCopy = new DivisionByZero(sipExceptionRef);

                sipRaiseClassException(sipClass_DivisionByZero,sipExceptionCopy);

                return NULL;
            }

            return sipConvertFromInstance(sipRes,sipClass_Vector2,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Vector2,sipNm_BALL_normalize);

    return NULL;
}


extern "C" {static PyObject *meth_Vector2_negate(PyObject *, PyObject *);}
static PyObject *meth_Vector2_negate(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Vector2 *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Vector2,&sipCpp))
        {
            Vector2 *sipRes;

            sipRes = &sipCpp->negate();

            return sipConvertFromInstance(sipRes,sipClass_Vector2,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Vector2,sipNm_BALL_negate);

    return NULL;
}


extern "C" {static PyObject *meth_Vector2_getZero(PyObject *, PyObject *);}
static PyObject *meth_Vector2_getZero(PyObject *,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        if (sipParseArgs(&sipArgsParsed,sipArgs,""))
        {
            const Vector2 *sipRes;

            sipRes = &Vector2::getZero();

            return sipConvertFromInstance(const_cast<Vector2 *>(sipRes),sipClass_Vector2,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Vector2,sipNm_BALL_getZero);

    return NULL;
}


extern "C" {static PyObject *meth_Vector2_getUnit(PyObject *, PyObject *);}
static PyObject *meth_Vector2_getUnit(PyObject *,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        if (sipParseArgs(&sipArgsParsed,sipArgs,""))
        {
            const Vector2 *sipRes;

            sipRes = &Vector2::getUnit();

            return sipConvertFromInstance(const_cast<Vector2 *>(sipRes),sipClass_Vector2,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Vector2,sipNm_BALL_getUnit);

    return NULL;
}


extern "C" {static PyObject *meth_Vector2_getDistance(PyObject *, PyObject *);}
static PyObject *meth_Vector2_getDistance(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const Vector2 * a0;
        Vector2 *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_Vector2,&sipCpp,sipClass_Vector2,&a0))
        {
            float sipRes;

            sipRes = sipCpp->getDistance(*a0);

            return PyFloat_FromDouble((double)sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Vector2,sipNm_BALL_getDistance);

    return NULL;
}


extern "C" {static PyObject *meth_Vector2_getSquareDistance(PyObject *, PyObject *);}
static PyObject *meth_Vector2_getSquareDistance(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const Vector2 * a0;
        Vector2 *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_Vector2,&sipCpp,sipClass_Vector2,&a0))
        {
            float sipRes;

            sipRes = sipCpp->getSquareDistance(*a0);

            return PyFloat_FromDouble((double)sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Vector2,sipNm_BALL_getSquareDistance);

    return NULL;
}


extern "C" {static PyObject *meth_Vector2_isZero(PyObject *, PyObject *);}
static PyObject *meth_Vector2_isZero(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Vector2 *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Vector2,&sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isZero();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Vector2,sipNm_BALL_isZero);

    return NULL;
}


extern "C" {static PyObject *meth_Vector2_isOrthogonalTo(PyObject *, PyObject *);}
static PyObject *meth_Vector2_isOrthogonalTo(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Vector2 * a0;
        Vector2 *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_Vector2,&sipCpp,sipClass_Vector2,&a0))
        {
            bool sipRes;

            sipRes = sipCpp->isOrthogonalTo(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Vector2,sipNm_BALL_isOrthogonalTo);

    return NULL;
}


extern "C" {static PyObject *meth_Vector2_isValid(PyObject *, PyObject *);}
static PyObject *meth_Vector2_isValid(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Vector2 *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Vector2,&sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isValid();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Vector2,sipNm_BALL_isValid);

    return NULL;
}


extern "C" {static PyObject *slot_Vector2___str__(PyObject *sipSelf);}
static PyObject *slot_Vector2___str__(PyObject *sipSelf)
{
    Vector2 *sipCpp = reinterpret_cast<Vector2 *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_Vector2));

    if (!sipCpp)
        return 0;


    {
        {
            PyObject * sipRes = 0;

#line 95 "vector2.sip"
	static String tmp;
	tmp = "(";
	tmp += String(sipCpp->x) + " ";
	tmp += String(sipCpp->y) + ")";
	sipRes = PyString_FromString(tmp.c_str());
#line 447 "sipBALLVector2.C"

            return sipRes;
        }
    }
}


extern "C" {static PyObject *slot_Vector2___ne__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_Vector2___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    Vector2 *sipCpp = reinterpret_cast<Vector2 *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_Vector2));

    if (!sipCpp)
        return 0;

    int sipArgsParsed = 0;

    {
        const Vector2 * a0;

        if (sipParseArgs(&sipArgsParsed,sipArg,"JA",sipClass_Vector2,&a0))
        {
            bool sipRes;

            sipRes = ((*sipCpp) != *a0);

            return PyBool_FromLong(sipRes);
        }
    }

    return sipPySlotExtend(&sipModuleAPI_BALL,ne_slot,sipClass_Vector2,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_Vector2___eq__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_Vector2___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    Vector2 *sipCpp = reinterpret_cast<Vector2 *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_Vector2));

    if (!sipCpp)
        return 0;

    int sipArgsParsed = 0;

    {
        const Vector2 * a0;

        if (sipParseArgs(&sipArgsParsed,sipArg,"JA",sipClass_Vector2,&a0))
        {
            bool sipRes;

            sipRes = ((*sipCpp) == *a0);

            return PyBool_FromLong(sipRes);
        }
    }

    return sipPySlotExtend(&sipModuleAPI_BALL,eq_slot,sipClass_Vector2,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_Vector2___idiv__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_Vector2___idiv__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf,(PyTypeObject *)sipClass_Vector2))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    Vector2 *sipCpp = reinterpret_cast<Vector2 *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_Vector2));

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


extern "C" {static PyObject *slot_Vector2___div__(PyObject *sipArg0,PyObject *sipArg1);}
static PyObject *slot_Vector2___div__(PyObject *sipArg0,PyObject *sipArg1)
{
    int sipArgsParsed = 0;

    {
        Vector2 * a0;
        float a1;

        if (sipParsePair(&sipArgsParsed,sipArg0,sipArg1,"JAf",sipClass_Vector2,&a0,&a1))
        {
            Vector2 *sipRes;

            try
            {
            sipRes = new Vector2((*a0 / a1));
            }
            catch (DivisionByZero &sipExceptionRef)
            {
                /* Hope that there is a valid copy ctor. */
                DivisionByZero *sipExceptionCopy = new DivisionByZero(sipExceptionRef);

                sipRaiseClassException(sipClass_DivisionByZero,sipExceptionCopy);

                return NULL;
            }

            return sipConvertFromNewInstance(sipRes,sipClass_Vector2,NULL);
        }
    }

    return sipPySlotExtend(&sipModuleAPI_BALL,div_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_Vector2___imul__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_Vector2___imul__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf,(PyTypeObject *)sipClass_Vector2))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    Vector2 *sipCpp = reinterpret_cast<Vector2 *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_Vector2));

    if (!sipCpp)
        return 0;

    int sipArgsParsed = 0;

    {
        float a0;

        if (sipParseArgs(&sipArgsParsed,sipArg,"f",&a0))
        {
            ((*sipCpp) *= a0);

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    PyErr_Clear();

    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}


extern "C" {static PyObject *slot_Vector2___mul__(PyObject *sipArg0,PyObject *sipArg1);}
static PyObject *slot_Vector2___mul__(PyObject *sipArg0,PyObject *sipArg1)
{
    int sipArgsParsed = 0;

    {
        Vector2 * a0;
        float a1;

        if (sipParsePair(&sipArgsParsed,sipArg0,sipArg1,"JAf",sipClass_Vector2,&a0,&a1))
        {
            Vector2 *sipRes;

            sipRes = new Vector2((*a0 * a1));

            return sipConvertFromNewInstance(sipRes,sipClass_Vector2,NULL);
        }
    }

    {
        Vector2 * a0;
        const Vector2 * a1;

        if (sipParsePair(&sipArgsParsed,sipArg0,sipArg1,"JAJA",sipClass_Vector2,&a0,sipClass_Vector2,&a1))
        {
            float sipRes;

            sipRes = (*a0 * *a1);

            return PyFloat_FromDouble((double)sipRes);
        }
    }

    return sipPySlotExtend(&sipModuleAPI_BALL,mul_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_Vector2___isub__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_Vector2___isub__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf,(PyTypeObject *)sipClass_Vector2))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    Vector2 *sipCpp = reinterpret_cast<Vector2 *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_Vector2));

    if (!sipCpp)
        return 0;

    int sipArgsParsed = 0;

    {
        const Vector2 * a0;

        if (sipParseArgs(&sipArgsParsed,sipArg,"JA",sipClass_Vector2,&a0))
        {
            ((*sipCpp) -= *a0);

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    PyErr_Clear();

    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}


extern "C" {static PyObject *slot_Vector2___iadd__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_Vector2___iadd__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf,(PyTypeObject *)sipClass_Vector2))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    Vector2 *sipCpp = reinterpret_cast<Vector2 *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_Vector2));

    if (!sipCpp)
        return 0;

    int sipArgsParsed = 0;

    {
        const Vector2 * a0;

        if (sipParseArgs(&sipArgsParsed,sipArg,"JA",sipClass_Vector2,&a0))
        {
            ((*sipCpp) += *a0);

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    PyErr_Clear();

    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}


extern "C" {static PyObject *slot_Vector2___sub__(PyObject *sipArg0,PyObject *sipArg1);}
static PyObject *slot_Vector2___sub__(PyObject *sipArg0,PyObject *sipArg1)
{
    int sipArgsParsed = 0;

    {
        Vector2 * a0;
        const Vector2 * a1;

        if (sipParsePair(&sipArgsParsed,sipArg0,sipArg1,"JAJA",sipClass_Vector2,&a0,sipClass_Vector2,&a1))
        {
            Vector2 *sipRes;

            sipRes = new Vector2((*a0 - *a1));

            return sipConvertFromNewInstance(sipRes,sipClass_Vector2,NULL);
        }
    }

    return sipPySlotExtend(&sipModuleAPI_BALL,sub_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_Vector2___add__(PyObject *sipArg0,PyObject *sipArg1);}
static PyObject *slot_Vector2___add__(PyObject *sipArg0,PyObject *sipArg1)
{
    int sipArgsParsed = 0;

    {
        Vector2 * a0;
        const Vector2 * a1;

        if (sipParsePair(&sipArgsParsed,sipArg0,sipArg1,"JAJA",sipClass_Vector2,&a0,sipClass_Vector2,&a1))
        {
            Vector2 *sipRes;

            sipRes = new Vector2((*a0 + *a1));

            return sipConvertFromNewInstance(sipRes,sipClass_Vector2,NULL);
        }
    }

    return sipPySlotExtend(&sipModuleAPI_BALL,add_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_Vector2___getitem__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_Vector2___getitem__(PyObject *sipSelf,PyObject *sipArg)
{
    Vector2 *sipCpp = reinterpret_cast<Vector2 *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_Vector2));

    if (!sipCpp)
        return 0;

    int sipArgsParsed = 0;

    {
        Position * a0;
        int a0State = 0;

        if (sipParseArgs(&sipArgsParsed,sipArg,"M1",sipMappedType_Position,&a0,&a0State))
        {
            float sipRes = 0;

#line 63 "vector2.sip"
	sipRes = sipCpp->operator [] (*a0);
#line 799 "sipBALLVector2.C"

            sipReleaseMappedType(a0,sipMappedType_Position,a0State);

            return PyFloat_FromDouble((double)sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Vector2,sipNm_BALL___getitem__);

    return 0;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_Vector2(void *, sipWrapperType *);}
static void *cast_Vector2(void *ptr,sipWrapperType *targetClass)
{
    void *res;

    if (targetClass == sipClass_Vector2)
        return ptr;

    if ((res = sipCast_PersistentObject((PersistentObject *)(Vector2 *)ptr,targetClass)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_Vector2(void *, int);}
static void release_Vector2(void *ptr,int state)
{
    if (state & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipVector2 *>(ptr);
    else
        delete reinterpret_cast<Vector2 *>(ptr);
}


extern "C" {static void dealloc_Vector2(sipWrapper *);}
static void dealloc_Vector2(sipWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipVector2 *>(sipSelf->u.cppPtr)->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_Vector2(sipSelf->u.cppPtr,sipSelf->flags);
    }
}


extern "C" {static void *init_Vector2(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_Vector2(sipWrapper *sipSelf,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    sipVector2 *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            sipCpp = new sipVector2();
        }
    }

    if (!sipCpp)
    {
        float a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"f",&a0))
        {
            sipCpp = new sipVector2(a0);
        }
    }

    if (!sipCpp)
    {
        float a0;
        float a1;

        if (sipParseArgs(sipArgsParsed,sipArgs,"ff",&a0,&a1))
        {
            sipCpp = new sipVector2(a0,a1);
        }
    }

    if (!sipCpp)
    {
        const Vector2 * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_Vector2,&a0))
        {
            sipCpp = new sipVector2(*a0);
        }
    }

    if (sipCpp)
        sipCpp->sipPySelf = sipSelf;

    return sipCpp;
}


extern "C" {static PyObject *var_Vector2_y(PyObject *, PyObject *);}
static PyObject *var_Vector2_y(PyObject *sipSelf,PyObject *sipPy)
{
   float sipVal;
    Vector2 *sipCpp = reinterpret_cast<Vector2 *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_Vector2));

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
        sipBadSetType(sipNm_BALL_Vector2,sipNm_BALL_y);
        return NULL;
    }

    sipCpp->y = sipVal;

    Py_INCREF(Py_None);
    return Py_None;
}


extern "C" {static PyObject *var_Vector2_x(PyObject *, PyObject *);}
static PyObject *var_Vector2_x(PyObject *sipSelf,PyObject *sipPy)
{
   float sipVal;
    Vector2 *sipCpp = reinterpret_cast<Vector2 *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_Vector2));

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
        sipBadSetType(sipNm_BALL_Vector2,sipNm_BALL_x);
        return NULL;
    }

    sipCpp->x = sipVal;

    Py_INCREF(Py_None);
    return Py_None;
}

PyMethodDef variables_Vector2[] = {
    {sipNm_BALL_y, var_Vector2_y, 0, NULL},
    {sipNm_BALL_x, var_Vector2_x, 0, NULL},
    {0, 0, 0, 0}
};


extern "C" {static void *forceConvertTo_Vector2(PyObject *, int *);}
static void *forceConvertTo_Vector2(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_Vector2))
        return sipConvertToCpp(valobj,sipClass_Vector2,iserrp);

    sipBadClass(sipNm_BALL_Vector2);

    *iserrp = 1;

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedClassDef supers_Vector2[] = {{220, 255, 1}};


/* Define this type's Python slots. */
static sipPySlotDef slots_Vector2[] = {
    {(void *)slot_Vector2___str__, str_slot},
    {(void *)slot_Vector2___ne__, ne_slot},
    {(void *)slot_Vector2___eq__, eq_slot},
    {(void *)slot_Vector2___idiv__, idiv_slot},
    {(void *)slot_Vector2___div__, div_slot},
    {(void *)slot_Vector2___imul__, imul_slot},
    {(void *)slot_Vector2___mul__, mul_slot},
    {(void *)slot_Vector2___isub__, isub_slot},
    {(void *)slot_Vector2___iadd__, iadd_slot},
    {(void *)slot_Vector2___sub__, sub_slot},
    {(void *)slot_Vector2___add__, add_slot},
    {(void *)slot_Vector2___getitem__, getitem_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_Vector2[] = {
    {sipNm_BALL_clear, meth_Vector2_clear, METH_VARARGS, NULL},
    {sipNm_BALL_getDistance, meth_Vector2_getDistance, METH_VARARGS, NULL},
    {sipNm_BALL_getLength, meth_Vector2_getLength, METH_VARARGS, NULL},
    {sipNm_BALL_getSquareDistance, meth_Vector2_getSquareDistance, METH_VARARGS, NULL},
    {sipNm_BALL_getSquareLength, meth_Vector2_getSquareLength, METH_VARARGS, NULL},
    {sipNm_BALL_getUnit, meth_Vector2_getUnit, METH_VARARGS, NULL},
    {sipNm_BALL_getZero, meth_Vector2_getZero, METH_VARARGS, NULL},
    {sipNm_BALL_isOrthogonalTo, meth_Vector2_isOrthogonalTo, METH_VARARGS, NULL},
    {sipNm_BALL_isValid, meth_Vector2_isValid, METH_VARARGS, NULL},
    {sipNm_BALL_isZero, meth_Vector2_isZero, METH_VARARGS, NULL},
    {sipNm_BALL_negate, meth_Vector2_negate, METH_VARARGS, NULL},
    {sipNm_BALL_normalize, meth_Vector2_normalize, METH_VARARGS, NULL},
    {sipNm_BALL_set, meth_Vector2_set, METH_VARARGS, NULL}
};


sipTypeDef sipType_BALL_Vector2 = {
    0,
    0,
    "BALL.Vector2",
    0,
    {0, 0, 1},
    supers_Vector2,
    slots_Vector2,
    13, methods_Vector2,
    0, 0,
    variables_Vector2,
    init_Vector2,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_Vector2,
    cast_Vector2,
    release_Vector2,
    forceConvertTo_Vector2,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
