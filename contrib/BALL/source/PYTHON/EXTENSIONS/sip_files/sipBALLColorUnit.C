/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLColorUnit.h"

#include "sipBALLInvalidRange.h"
#include "sipBALLNotInHexFormat.h"
#include "sipBALLString.h"
#include "sipBALLColorUnit.h"



extern "C" {static PyObject *meth_ColorUnit_clear(PyObject *, PyObject *);}
static PyObject *meth_ColorUnit_clear(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        ColorUnit *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_ColorUnit,&sipCpp))
        {
            sipCpp->clear();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_ColorUnit,sipNm_BALL_clear);

    return NULL;
}


extern "C" {static PyObject *meth_ColorUnit_set(PyObject *, PyObject *);}
static PyObject *meth_ColorUnit_set(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        unsigned a0;
        ColorUnit *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bu",&sipSelf,sipClass_ColorUnit,&sipCpp,&a0))
        {
            try
            {
            sipCpp->set(a0);
            }
            catch (InvalidRange &sipExceptionRef)
            {
                /* Hope that there is a valid copy ctor. */
                InvalidRange *sipExceptionCopy = new InvalidRange(sipExceptionRef);

                sipRaiseClassException(sipClass_InvalidRange,sipExceptionCopy);

                return NULL;
            }

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_ColorUnit,sipNm_BALL_set);

    return NULL;
}


extern "C" {static PyObject *meth_ColorUnit_get(PyObject *, PyObject *);}
static PyObject *meth_ColorUnit_get(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        unsigned a0;
        ColorUnit *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_ColorUnit,&sipCpp))
        {
            sipCpp->get(a0);

            return PyLong_FromUnsignedLong(a0);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_ColorUnit,sipNm_BALL_get);

    return NULL;
}


extern "C" {static PyObject *slot_ColorUnit___ge__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_ColorUnit___ge__(PyObject *sipSelf,PyObject *sipArg)
{
    ColorUnit *sipCpp = reinterpret_cast<ColorUnit *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_ColorUnit));

    if (!sipCpp)
        return 0;

    int sipArgsParsed = 0;

    {
        const ColorUnit * a0;

        if (sipParseArgs(&sipArgsParsed,sipArg,"JA",sipClass_ColorUnit,&a0))
        {
            bool sipRes;

            sipRes = ((*sipCpp) >= *a0);

            return PyBool_FromLong(sipRes);
        }
    }

    return sipPySlotExtend(&sipModuleAPI_BALL,ge_slot,sipClass_ColorUnit,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_ColorUnit___gt__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_ColorUnit___gt__(PyObject *sipSelf,PyObject *sipArg)
{
    ColorUnit *sipCpp = reinterpret_cast<ColorUnit *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_ColorUnit));

    if (!sipCpp)
        return 0;

    int sipArgsParsed = 0;

    {
        const ColorUnit * a0;

        if (sipParseArgs(&sipArgsParsed,sipArg,"JA",sipClass_ColorUnit,&a0))
        {
            bool sipRes;

            sipRes = ((*sipCpp) > *a0);

            return PyBool_FromLong(sipRes);
        }
    }

    return sipPySlotExtend(&sipModuleAPI_BALL,gt_slot,sipClass_ColorUnit,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_ColorUnit___le__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_ColorUnit___le__(PyObject *sipSelf,PyObject *sipArg)
{
    ColorUnit *sipCpp = reinterpret_cast<ColorUnit *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_ColorUnit));

    if (!sipCpp)
        return 0;

    int sipArgsParsed = 0;

    {
        const ColorUnit * a0;

        if (sipParseArgs(&sipArgsParsed,sipArg,"JA",sipClass_ColorUnit,&a0))
        {
            bool sipRes;

            sipRes = ((*sipCpp) <= *a0);

            return PyBool_FromLong(sipRes);
        }
    }

    return sipPySlotExtend(&sipModuleAPI_BALL,le_slot,sipClass_ColorUnit,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_ColorUnit___eq__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_ColorUnit___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    ColorUnit *sipCpp = reinterpret_cast<ColorUnit *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_ColorUnit));

    if (!sipCpp)
        return 0;

    int sipArgsParsed = 0;

    {
        const ColorUnit * a0;

        if (sipParseArgs(&sipArgsParsed,sipArg,"JA",sipClass_ColorUnit,&a0))
        {
            bool sipRes;

            sipRes = ((*sipCpp) == *a0);

            return PyBool_FromLong(sipRes);
        }
    }

    return sipPySlotExtend(&sipModuleAPI_BALL,eq_slot,sipClass_ColorUnit,sipSelf,sipArg);
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_ColorUnit(void *, sipWrapperType *);}
static void *cast_ColorUnit(void *ptr,sipWrapperType *targetClass)
{
    if (targetClass == sipClass_ColorUnit)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_ColorUnit(void *, int);}
static void release_ColorUnit(void *ptr,int)
{
    delete reinterpret_cast<ColorUnit *>(ptr);
}


extern "C" {static void dealloc_ColorUnit(sipWrapper *);}
static void dealloc_ColorUnit(sipWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_ColorUnit(sipSelf->u.cppPtr,0);
    }
}


extern "C" {static void *init_ColorUnit(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_ColorUnit(sipWrapper *,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    ColorUnit *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            sipCpp = new ColorUnit();
        }
    }

    if (!sipCpp)
    {
        const ColorUnit * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_ColorUnit,&a0))
        {
            sipCpp = new ColorUnit(*a0);
        }
    }

    if (!sipCpp)
    {
        const String * a0;
        int a0State = 0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"J1",sipClass_String,&a0,&a0State))
        {
            try
            {
            sipCpp = new ColorUnit(*a0);
            }
            catch (InvalidRange &sipExceptionRef)
            {

            sipReleaseInstance(const_cast<String *>(a0),sipClass_String,a0State);
                /* Hope that there is a valid copy ctor. */
                InvalidRange *sipExceptionCopy = new InvalidRange(sipExceptionRef);

                sipRaiseClassException(sipClass_InvalidRange,sipExceptionCopy);

                return NULL;
            }
            catch (NotInHexFormat &sipExceptionRef)
            {

            sipReleaseInstance(const_cast<String *>(a0),sipClass_String,a0State);
                /* Hope that there is a valid copy ctor. */
                NotInHexFormat *sipExceptionCopy = new NotInHexFormat(sipExceptionRef);

                sipRaiseClassException(sipClass_NotInHexFormat,sipExceptionCopy);

                return NULL;
            }

            sipReleaseInstance(const_cast<String *>(a0),sipClass_String,a0State);
        }
    }

    if (!sipCpp)
    {
        unsigned a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"u",&a0))
        {
            try
            {
            sipCpp = new ColorUnit(a0);
            }
            catch (InvalidRange &sipExceptionRef)
            {
                /* Hope that there is a valid copy ctor. */
                InvalidRange *sipExceptionCopy = new InvalidRange(sipExceptionRef);

                sipRaiseClassException(sipClass_InvalidRange,sipExceptionCopy);

                return NULL;
            }
        }
    }

    return sipCpp;
}


extern "C" {static void *forceConvertTo_ColorUnit(PyObject *, int *);}
static void *forceConvertTo_ColorUnit(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_ColorUnit))
        return sipConvertToCpp(valobj,sipClass_ColorUnit,iserrp);

    sipBadClass(sipNm_BALL_ColorUnit);

    *iserrp = 1;

    return NULL;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_ColorUnit[] = {
    {(void *)slot_ColorUnit___ge__, ge_slot},
    {(void *)slot_ColorUnit___gt__, gt_slot},
    {(void *)slot_ColorUnit___le__, le_slot},
    {(void *)slot_ColorUnit___eq__, eq_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_ColorUnit[] = {
    {sipNm_BALL_clear, meth_ColorUnit_clear, METH_VARARGS, NULL},
    {sipNm_BALL_get, meth_ColorUnit_get, METH_VARARGS, NULL},
    {sipNm_BALL_set, meth_ColorUnit_set, METH_VARARGS, NULL}
};


sipTypeDef sipType_BALL_ColorUnit = {
    0,
    0,
    "BALL.ColorUnit",
    0,
    {0, 0, 1},
    0,
    slots_ColorUnit,
    3, methods_ColorUnit,
    0, 0,
    0,
    init_ColorUnit,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_ColorUnit,
    cast_ColorUnit,
    release_ColorUnit,
    forceConvertTo_ColorUnit,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
