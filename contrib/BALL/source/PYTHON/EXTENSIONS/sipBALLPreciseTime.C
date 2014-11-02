/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLPreciseTime.h"

#include "sipBALLPreciseTime.h"



extern "C" {static PyObject *meth_PreciseTime_set(PyObject *, PyObject *);}
static PyObject *meth_PreciseTime_set(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        long a0;
        long a1;
        PreciseTime *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bll",&sipSelf,sipClass_PreciseTime,&sipCpp,&a0,&a1))
        {
            sipCpp->set(a0,a1);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    {
        const PreciseTime * a0;
        PreciseTime *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_PreciseTime,&sipCpp,sipClass_PreciseTime,&a0))
        {
            sipCpp->set(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_PreciseTime,sipNm_BALL_set);

    return NULL;
}


extern "C" {static PyObject *meth_PreciseTime_getSeconds(PyObject *, PyObject *);}
static PyObject *meth_PreciseTime_getSeconds(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        PreciseTime *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_PreciseTime,&sipCpp))
        {
            long sipRes;

            sipRes = sipCpp->getSeconds();

            return PyLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_PreciseTime,sipNm_BALL_getSeconds);

    return NULL;
}


extern "C" {static PyObject *meth_PreciseTime_getMicroSeconds(PyObject *, PyObject *);}
static PyObject *meth_PreciseTime_getMicroSeconds(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        PreciseTime *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_PreciseTime,&sipCpp))
        {
            long sipRes;

            sipRes = sipCpp->getMicroSeconds();

            return PyLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_PreciseTime,sipNm_BALL_getMicroSeconds);

    return NULL;
}


extern "C" {static PyObject *meth_PreciseTime_now(PyObject *, PyObject *);}
static PyObject *meth_PreciseTime_now(PyObject *,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        if (sipParseArgs(&sipArgsParsed,sipArgs,""))
        {
            PreciseTime *sipRes;

            sipRes = new PreciseTime(PreciseTime::now());

            return sipConvertFromNewInstance(sipRes,sipClass_PreciseTime,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_PreciseTime,sipNm_BALL_now);

    return NULL;
}


extern "C" {static PyObject *slot_PreciseTime___str__(PyObject *sipSelf);}
static PyObject *slot_PreciseTime___str__(PyObject *sipSelf)
{
    PreciseTime *sipCpp = reinterpret_cast<PreciseTime *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_PreciseTime));

    if (!sipCpp)
        return 0;


    {
        {
            PyObject * sipRes = 0;

#line 34 "timeStamp.sip"
	static char buf[128];
	time_t secs = sipCpp->getSeconds();
	strftime(buf, 127, "\045Y\045m\045d\045H\045M\045S", localtime(&secs));
	String time_str(buf);
	time_str.append(".");
	String usec_str(sipCpp->getMicroSeconds() / 1.0e6);
	time_str.append(usec_str.after("."));

	sipRes = PyString_FromString(time_str.c_str());
#line 153 "sipBALLPreciseTime.C"

            return sipRes;
        }
    }
}


extern "C" {static PyObject *slot_PreciseTime___eq__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_PreciseTime___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    PreciseTime *sipCpp = reinterpret_cast<PreciseTime *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_PreciseTime));

    if (!sipCpp)
        return 0;

    int sipArgsParsed = 0;

    {
        const PreciseTime * a0;

        if (sipParseArgs(&sipArgsParsed,sipArg,"JA",sipClass_PreciseTime,&a0))
        {
            bool sipRes;

            sipRes = ((*sipCpp) == *a0);

            return PyBool_FromLong(sipRes);
        }
    }

    return sipPySlotExtend(&sipModuleAPI_BALL,eq_slot,sipClass_PreciseTime,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_PreciseTime___gt__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_PreciseTime___gt__(PyObject *sipSelf,PyObject *sipArg)
{
    PreciseTime *sipCpp = reinterpret_cast<PreciseTime *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_PreciseTime));

    if (!sipCpp)
        return 0;

    int sipArgsParsed = 0;

    {
        const PreciseTime * a0;

        if (sipParseArgs(&sipArgsParsed,sipArg,"JA",sipClass_PreciseTime,&a0))
        {
            bool sipRes;

            sipRes = ((*sipCpp) > *a0);

            return PyBool_FromLong(sipRes);
        }
    }

    return sipPySlotExtend(&sipModuleAPI_BALL,gt_slot,sipClass_PreciseTime,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_PreciseTime___lt__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_PreciseTime___lt__(PyObject *sipSelf,PyObject *sipArg)
{
    PreciseTime *sipCpp = reinterpret_cast<PreciseTime *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_PreciseTime));

    if (!sipCpp)
        return 0;

    int sipArgsParsed = 0;

    {
        const PreciseTime * a0;

        if (sipParseArgs(&sipArgsParsed,sipArg,"JA",sipClass_PreciseTime,&a0))
        {
            bool sipRes;

            sipRes = ((*sipCpp) < *a0);

            return PyBool_FromLong(sipRes);
        }
    }

    return sipPySlotExtend(&sipModuleAPI_BALL,lt_slot,sipClass_PreciseTime,sipSelf,sipArg);
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_PreciseTime(void *, sipWrapperType *);}
static void *cast_PreciseTime(void *ptr,sipWrapperType *targetClass)
{
    if (targetClass == sipClass_PreciseTime)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_PreciseTime(void *, int);}
static void release_PreciseTime(void *ptr,int)
{
    delete reinterpret_cast<PreciseTime *>(ptr);
}


extern "C" {static void dealloc_PreciseTime(sipWrapper *);}
static void dealloc_PreciseTime(sipWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_PreciseTime(sipSelf->u.cppPtr,0);
    }
}


extern "C" {static void *init_PreciseTime(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_PreciseTime(sipWrapper *,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    PreciseTime *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            try
            {
            sipCpp = new PreciseTime();
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
        const PreciseTime * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_PreciseTime,&a0))
        {
            try
            {
            sipCpp = new PreciseTime(*a0);
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


extern "C" {static void *forceConvertTo_PreciseTime(PyObject *, int *);}
static void *forceConvertTo_PreciseTime(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_PreciseTime))
        return sipConvertToCpp(valobj,sipClass_PreciseTime,iserrp);

    sipBadClass(sipNm_BALL_PreciseTime);

    *iserrp = 1;

    return NULL;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_PreciseTime[] = {
    {(void *)slot_PreciseTime___str__, str_slot},
    {(void *)slot_PreciseTime___eq__, eq_slot},
    {(void *)slot_PreciseTime___gt__, gt_slot},
    {(void *)slot_PreciseTime___lt__, lt_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_PreciseTime[] = {
    {sipNm_BALL_getMicroSeconds, meth_PreciseTime_getMicroSeconds, METH_VARARGS, NULL},
    {sipNm_BALL_getSeconds, meth_PreciseTime_getSeconds, METH_VARARGS, NULL},
    {sipNm_BALL_now, meth_PreciseTime_now, METH_VARARGS, NULL},
    {sipNm_BALL_set, meth_PreciseTime_set, METH_VARARGS, NULL}
};


sipTypeDef sipType_BALL_PreciseTime = {
    0,
    0,
    "BALL.PreciseTime",
    0,
    {0, 0, 1},
    0,
    slots_PreciseTime,
    4, methods_PreciseTime,
    0, 0,
    0,
    init_PreciseTime,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_PreciseTime,
    cast_PreciseTime,
    release_PreciseTime,
    forceConvertTo_PreciseTime,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
