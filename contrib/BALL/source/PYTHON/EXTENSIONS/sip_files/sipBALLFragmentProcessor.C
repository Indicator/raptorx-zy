/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLFragmentProcessor.h"

#include "sipBALLFragmentProcessor.h"
#include "sipBALLProcessor.h"
#include "sipBALLFragment.h"



extern "C" {static PyObject *meth_FragmentProcessor_start(PyObject *, PyObject *);}
static PyObject *meth_FragmentProcessor_start(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        FragmentProcessor *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_FragmentProcessor,&sipCpp))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_FragmentProcessor,sipNm_BALL_start);

    return NULL;
}


extern "C" {static PyObject *meth_FragmentProcessor_finish(PyObject *, PyObject *);}
static PyObject *meth_FragmentProcessor_finish(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        FragmentProcessor *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_FragmentProcessor,&sipCpp))
        {
            bool sipRes;

            try
            {
            sipRes = sipCpp->finish();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_FragmentProcessor,sipNm_BALL_finish);

    return NULL;
}


extern "C" {static PyObject *slot_FragmentProcessor___call__(PyObject *sipSelf,PyObject *sipArgs);}
static PyObject *slot_FragmentProcessor___call__(PyObject *sipSelf,PyObject *sipArgs)
{
    FragmentProcessor *sipCpp = reinterpret_cast<FragmentProcessor *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_FragmentProcessor));

    if (!sipCpp)
        return 0;

    int sipArgsParsed = 0;

    {
        Fragment * a0;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"JA",sipClass_Fragment,&a0))
        {
            Processor::Result sipRes = (Processor::Result)0;

#line 19 "pyFragmentProcessor.sip"
  sipRes = sipCpp->operator () (*a0);
#line 105 "sipBALLFragmentProcessor.C"

            return sipConvertFromNamedEnum(sipRes,sipEnum_Processor_Result);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_FragmentProcessor,sipNm_BALL___call__);

    return 0;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_FragmentProcessor(void *, sipWrapperType *);}
static void *cast_FragmentProcessor(void *ptr,sipWrapperType *targetClass)
{
    if (targetClass == sipClass_FragmentProcessor)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_FragmentProcessor(void *, int);}
static void release_FragmentProcessor(void *ptr,int)
{
    delete reinterpret_cast<FragmentProcessor *>(ptr);
}


extern "C" {static void dealloc_FragmentProcessor(sipWrapper *);}
static void dealloc_FragmentProcessor(sipWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_FragmentProcessor(sipSelf->u.cppPtr,0);
    }
}


extern "C" {static void *init_FragmentProcessor(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_FragmentProcessor(sipWrapper *,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    FragmentProcessor *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            try
            {
            sipCpp = new FragmentProcessor();
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
        const FragmentProcessor * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_FragmentProcessor,&a0))
        {
            try
            {
            sipCpp = new FragmentProcessor(*a0);
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


extern "C" {static void *forceConvertTo_FragmentProcessor(PyObject *, int *);}
static void *forceConvertTo_FragmentProcessor(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_FragmentProcessor))
        return sipConvertToCpp(valobj,sipClass_FragmentProcessor,iserrp);

    sipBadClass(sipNm_BALL_FragmentProcessor);

    *iserrp = 1;

    return NULL;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_FragmentProcessor[] = {
    {(void *)slot_FragmentProcessor___call__, call_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_FragmentProcessor[] = {
    {sipNm_BALL_finish, meth_FragmentProcessor_finish, METH_VARARGS, NULL},
    {sipNm_BALL_start, meth_FragmentProcessor_start, METH_VARARGS, NULL}
};


sipTypeDef sipType_BALL_FragmentProcessor = {
    0,
    0,
    "BALL.FragmentProcessor",
    0,
    {0, 0, 1},
    0,
    slots_FragmentProcessor,
    2, methods_FragmentProcessor,
    0, 0,
    0,
    init_FragmentProcessor,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_FragmentProcessor,
    cast_FragmentProcessor,
    release_FragmentProcessor,
    forceConvertTo_FragmentProcessor,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
