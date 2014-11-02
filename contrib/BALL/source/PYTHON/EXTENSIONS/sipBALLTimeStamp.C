/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLTimeStamp.h"

#include "sipBALLTimeStamp.h"
#include "sipBALLPreciseTime.h"


sipTimeStamp::sipTimeStamp() throw(): TimeStamp(), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,1);
}

sipTimeStamp::sipTimeStamp(const TimeStamp& a0): TimeStamp(a0), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,1);
}

sipTimeStamp::~sipTimeStamp() throw()
{
    sipCommonDtor(sipPySelf);
}

void sipTimeStamp::stamp(const PreciseTime& a0) throw()
{
    extern void sipVH_BALL_56(sip_gilstate_t,PyObject *,const PreciseTime&);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipNm_BALL_stamp);

    if (!meth)
    {
        TimeStamp::stamp(a0);
        return;
    }

    sipVH_BALL_56(sipGILState,meth,a0);
}


extern "C" {static PyObject *meth_TimeStamp_isNewerThan(PyObject *, PyObject *);}
static PyObject *meth_TimeStamp_isNewerThan(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const PreciseTime * a0;
        TimeStamp *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_TimeStamp,&sipCpp,sipClass_PreciseTime,&a0))
        {
            bool sipRes;

            sipRes = sipCpp->isNewerThan(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    {
        const TimeStamp * a0;
        TimeStamp *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_TimeStamp,&sipCpp,sipClass_TimeStamp,&a0))
        {
            bool sipRes;

            sipRes = sipCpp->isNewerThan(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_TimeStamp,sipNm_BALL_isNewerThan);

    return NULL;
}


extern "C" {static PyObject *meth_TimeStamp_isOlderThan(PyObject *, PyObject *);}
static PyObject *meth_TimeStamp_isOlderThan(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const PreciseTime * a0;
        TimeStamp *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_TimeStamp,&sipCpp,sipClass_PreciseTime,&a0))
        {
            bool sipRes;

            sipRes = sipCpp->isOlderThan(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    {
        const TimeStamp * a0;
        TimeStamp *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_TimeStamp,&sipCpp,sipClass_TimeStamp,&a0))
        {
            bool sipRes;

            sipRes = sipCpp->isOlderThan(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_TimeStamp,sipNm_BALL_isOlderThan);

    return NULL;
}


extern "C" {static PyObject *meth_TimeStamp_stamp(PyObject *, PyObject *);}
static PyObject *meth_TimeStamp_stamp(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        const PreciseTime& a0def = PreciseTime::ZERO;
        const PreciseTime * a0 = &a0def;
        TimeStamp *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B|JA",&sipSelf,sipClass_TimeStamp,&sipCpp,sipClass_PreciseTime,&a0))
        {
            (sipSelfWasArg ? sipCpp->TimeStamp::stamp(*a0) : sipCpp->stamp(*a0));

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_TimeStamp,sipNm_BALL_stamp);

    return NULL;
}


extern "C" {static PyObject *meth_TimeStamp_getTime(PyObject *, PyObject *);}
static PyObject *meth_TimeStamp_getTime(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        TimeStamp *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_TimeStamp,&sipCpp))
        {
            const PreciseTime *sipRes;

            sipRes = &sipCpp->getTime();

            return sipConvertFromInstance(const_cast<PreciseTime *>(sipRes),sipClass_PreciseTime,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_TimeStamp,sipNm_BALL_getTime);

    return NULL;
}


extern "C" {static PyObject *slot_TimeStamp___str__(PyObject *sipSelf);}
static PyObject *slot_TimeStamp___str__(PyObject *sipSelf)
{
    TimeStamp *sipCpp = reinterpret_cast<TimeStamp *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_TimeStamp));

    if (!sipCpp)
        return 0;


    {
        {
            PyObject * sipRes = 0;

#line 67 "timeStamp.sip"
	time_t secs = sipCpp->getTime().getSeconds();
	static char buf[128];
	strftime(buf, 127, "\045Y\045m\045d\045H\045M\045S", localtime(&secs));
	String time_str(buf);
	time_str.append(".");
	String usec_str(sipCpp->getTime().getMicroSeconds() / 1.0e6);
	time_str.append(usec_str.after("."));

	sipRes = PyString_FromString(time_str.c_str());
#line 207 "sipBALLTimeStamp.C"

            return sipRes;
        }
    }
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_TimeStamp(void *, sipWrapperType *);}
static void *cast_TimeStamp(void *ptr,sipWrapperType *targetClass)
{
    if (targetClass == sipClass_TimeStamp)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_TimeStamp(void *, int);}
static void release_TimeStamp(void *ptr,int state)
{
    if (state & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipTimeStamp *>(ptr);
    else
        delete reinterpret_cast<TimeStamp *>(ptr);
}


extern "C" {static void dealloc_TimeStamp(sipWrapper *);}
static void dealloc_TimeStamp(sipWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipTimeStamp *>(sipSelf->u.cppPtr)->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_TimeStamp(sipSelf->u.cppPtr,sipSelf->flags);
    }
}


extern "C" {static void *init_TimeStamp(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_TimeStamp(sipWrapper *sipSelf,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    sipTimeStamp *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            sipCpp = new sipTimeStamp();
        }
    }

    if (!sipCpp)
    {
        const TimeStamp * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_TimeStamp,&a0))
        {
            try
            {
            sipCpp = new sipTimeStamp(*a0);
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }
        }
    }

    if (sipCpp)
        sipCpp->sipPySelf = sipSelf;

    return sipCpp;
}


extern "C" {static void *forceConvertTo_TimeStamp(PyObject *, int *);}
static void *forceConvertTo_TimeStamp(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_TimeStamp))
        return sipConvertToCpp(valobj,sipClass_TimeStamp,iserrp);

    sipBadClass(sipNm_BALL_TimeStamp);

    *iserrp = 1;

    return NULL;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_TimeStamp[] = {
    {(void *)slot_TimeStamp___str__, str_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_TimeStamp[] = {
    {sipNm_BALL_getTime, meth_TimeStamp_getTime, METH_VARARGS, NULL},
    {sipNm_BALL_isNewerThan, meth_TimeStamp_isNewerThan, METH_VARARGS, NULL},
    {sipNm_BALL_isOlderThan, meth_TimeStamp_isOlderThan, METH_VARARGS, NULL},
    {sipNm_BALL_stamp, meth_TimeStamp_stamp, METH_VARARGS, NULL}
};


sipTypeDef sipType_BALL_TimeStamp = {
    0,
    0,
    "BALL.TimeStamp",
    0,
    {0, 0, 1},
    0,
    slots_TimeStamp,
    4, methods_TimeStamp,
    0, 0,
    0,
    init_TimeStamp,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_TimeStamp,
    cast_TimeStamp,
    release_TimeStamp,
    forceConvertTo_TimeStamp,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
