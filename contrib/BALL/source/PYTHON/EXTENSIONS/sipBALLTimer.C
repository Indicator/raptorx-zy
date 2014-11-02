/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLTimer.h"

#include "sipBALLTimer.h"



extern "C" {static PyObject *meth_Timer_isRunning(PyObject *, PyObject *);}
static PyObject *meth_Timer_isRunning(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Timer *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Timer,&sipCpp))
        {
            bool sipRes;

            try
            {
            sipRes = sipCpp->isRunning();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Timer,sipNm_BALL_isRunning);

    return NULL;
}


extern "C" {static PyObject *meth_Timer_isValid(PyObject *, PyObject *);}
static PyObject *meth_Timer_isValid(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Timer *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Timer,&sipCpp))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Timer,sipNm_BALL_isValid);

    return NULL;
}


extern "C" {static PyObject *meth_Timer_start(PyObject *, PyObject *);}
static PyObject *meth_Timer_start(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Timer *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Timer,&sipCpp))
        {
            bool sipRes;

            try
            {
            sipRes = sipCpp->start();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Timer,sipNm_BALL_start);

    return NULL;
}


extern "C" {static PyObject *meth_Timer_stop(PyObject *, PyObject *);}
static PyObject *meth_Timer_stop(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Timer *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Timer,&sipCpp))
        {
            bool sipRes;

            try
            {
            sipRes = sipCpp->stop();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Timer,sipNm_BALL_stop);

    return NULL;
}


extern "C" {static PyObject *meth_Timer_getCPUTime(PyObject *, PyObject *);}
static PyObject *meth_Timer_getCPUTime(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Timer *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Timer,&sipCpp))
        {
            double sipRes;

            try
            {
            sipRes = sipCpp->getCPUTime();
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return PyFloat_FromDouble(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Timer,sipNm_BALL_getCPUTime);

    return NULL;
}


extern "C" {static PyObject *meth_Timer_getClockTime(PyObject *, PyObject *);}
static PyObject *meth_Timer_getClockTime(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Timer *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Timer,&sipCpp))
        {
            double sipRes;

            try
            {
            sipRes = sipCpp->getClockTime();
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return PyFloat_FromDouble(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Timer,sipNm_BALL_getClockTime);

    return NULL;
}


extern "C" {static PyObject *meth_Timer_getSystemTime(PyObject *, PyObject *);}
static PyObject *meth_Timer_getSystemTime(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Timer *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Timer,&sipCpp))
        {
            double sipRes;

            try
            {
            sipRes = sipCpp->getSystemTime();
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return PyFloat_FromDouble(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Timer,sipNm_BALL_getSystemTime);

    return NULL;
}


extern "C" {static PyObject *meth_Timer_getUserTime(PyObject *, PyObject *);}
static PyObject *meth_Timer_getUserTime(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Timer *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Timer,&sipCpp))
        {
            double sipRes;

            try
            {
            sipRes = sipCpp->getUserTime();
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return PyFloat_FromDouble(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Timer,sipNm_BALL_getUserTime);

    return NULL;
}


extern "C" {static PyObject *meth_Timer_clear(PyObject *, PyObject *);}
static PyObject *meth_Timer_clear(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Timer *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Timer,&sipCpp))
        {
            try
            {
            sipCpp->clear();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Timer,sipNm_BALL_clear);

    return NULL;
}


extern "C" {static PyObject *meth_Timer_reset(PyObject *, PyObject *);}
static PyObject *meth_Timer_reset(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Timer *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Timer,&sipCpp))
        {
            try
            {
            sipCpp->reset();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Timer,sipNm_BALL_reset);

    return NULL;
}


extern "C" {static PyObject *slot_Timer___ge__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_Timer___ge__(PyObject *sipSelf,PyObject *sipArg)
{
    Timer *sipCpp = reinterpret_cast<Timer *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_Timer));

    if (!sipCpp)
        return 0;

    int sipArgsParsed = 0;

    {
        const Timer * a0;

        if (sipParseArgs(&sipArgsParsed,sipArg,"JA",sipClass_Timer,&a0))
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

    return sipPySlotExtend(&sipModuleAPI_BALL,ge_slot,sipClass_Timer,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_Timer___gt__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_Timer___gt__(PyObject *sipSelf,PyObject *sipArg)
{
    Timer *sipCpp = reinterpret_cast<Timer *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_Timer));

    if (!sipCpp)
        return 0;

    int sipArgsParsed = 0;

    {
        const Timer * a0;

        if (sipParseArgs(&sipArgsParsed,sipArg,"JA",sipClass_Timer,&a0))
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

    return sipPySlotExtend(&sipModuleAPI_BALL,gt_slot,sipClass_Timer,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_Timer___eq__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_Timer___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    Timer *sipCpp = reinterpret_cast<Timer *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_Timer));

    if (!sipCpp)
        return 0;

    int sipArgsParsed = 0;

    {
        const Timer * a0;

        if (sipParseArgs(&sipArgsParsed,sipArg,"JA",sipClass_Timer,&a0))
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

    return sipPySlotExtend(&sipModuleAPI_BALL,eq_slot,sipClass_Timer,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_Timer___le__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_Timer___le__(PyObject *sipSelf,PyObject *sipArg)
{
    Timer *sipCpp = reinterpret_cast<Timer *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_Timer));

    if (!sipCpp)
        return 0;

    int sipArgsParsed = 0;

    {
        const Timer * a0;

        if (sipParseArgs(&sipArgsParsed,sipArg,"JA",sipClass_Timer,&a0))
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

    return sipPySlotExtend(&sipModuleAPI_BALL,le_slot,sipClass_Timer,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_Timer___lt__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_Timer___lt__(PyObject *sipSelf,PyObject *sipArg)
{
    Timer *sipCpp = reinterpret_cast<Timer *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_Timer));

    if (!sipCpp)
        return 0;

    int sipArgsParsed = 0;

    {
        const Timer * a0;

        if (sipParseArgs(&sipArgsParsed,sipArg,"JA",sipClass_Timer,&a0))
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

    return sipPySlotExtend(&sipModuleAPI_BALL,lt_slot,sipClass_Timer,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_Timer___ne__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_Timer___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    Timer *sipCpp = reinterpret_cast<Timer *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_Timer));

    if (!sipCpp)
        return 0;

    int sipArgsParsed = 0;

    {
        const Timer * a0;

        if (sipParseArgs(&sipArgsParsed,sipArg,"JA",sipClass_Timer,&a0))
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

    return sipPySlotExtend(&sipModuleAPI_BALL,ne_slot,sipClass_Timer,sipSelf,sipArg);
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_Timer(void *, sipWrapperType *);}
static void *cast_Timer(void *ptr,sipWrapperType *targetClass)
{
    if (targetClass == sipClass_Timer)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_Timer(void *, int);}
static void release_Timer(void *ptr,int)
{
    delete reinterpret_cast<Timer *>(ptr);
}


extern "C" {static void dealloc_Timer(sipWrapper *);}
static void dealloc_Timer(sipWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_Timer(sipSelf->u.cppPtr,0);
    }
}


extern "C" {static void *init_Timer(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_Timer(sipWrapper *,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    Timer *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            try
            {
            sipCpp = new Timer();
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
        Timer * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_Timer,&a0))
        {
            try
            {
            sipCpp = new Timer(*a0);
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


extern "C" {static void *forceConvertTo_Timer(PyObject *, int *);}
static void *forceConvertTo_Timer(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_Timer))
        return sipConvertToCpp(valobj,sipClass_Timer,iserrp);

    sipBadClass(sipNm_BALL_Timer);

    *iserrp = 1;

    return NULL;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_Timer[] = {
    {(void *)slot_Timer___ge__, ge_slot},
    {(void *)slot_Timer___gt__, gt_slot},
    {(void *)slot_Timer___eq__, eq_slot},
    {(void *)slot_Timer___le__, le_slot},
    {(void *)slot_Timer___lt__, lt_slot},
    {(void *)slot_Timer___ne__, ne_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_Timer[] = {
    {sipNm_BALL_clear, meth_Timer_clear, METH_VARARGS, NULL},
    {sipNm_BALL_getCPUTime, meth_Timer_getCPUTime, METH_VARARGS, NULL},
    {sipNm_BALL_getClockTime, meth_Timer_getClockTime, METH_VARARGS, NULL},
    {sipNm_BALL_getSystemTime, meth_Timer_getSystemTime, METH_VARARGS, NULL},
    {sipNm_BALL_getUserTime, meth_Timer_getUserTime, METH_VARARGS, NULL},
    {sipNm_BALL_isRunning, meth_Timer_isRunning, METH_VARARGS, NULL},
    {sipNm_BALL_isValid, meth_Timer_isValid, METH_VARARGS, NULL},
    {sipNm_BALL_reset, meth_Timer_reset, METH_VARARGS, NULL},
    {sipNm_BALL_start, meth_Timer_start, METH_VARARGS, NULL},
    {sipNm_BALL_stop, meth_Timer_stop, METH_VARARGS, NULL}
};


sipTypeDef sipType_BALL_Timer = {
    0,
    0,
    "BALL.Timer",
    0,
    {0, 0, 1},
    0,
    slots_Timer,
    10, methods_Timer,
    0, 0,
    0,
    init_Timer,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_Timer,
    cast_Timer,
    release_Timer,
    forceConvertTo_Timer,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
