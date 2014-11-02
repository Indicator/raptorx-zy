/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLCompositeProcessor.h"

#include "sipBALLCompositeProcessor.h"
#include "sipBALLProcessor.h"
#include "sipBALLComposite.h"



extern "C" {static PyObject *meth_CompositeProcessor_start(PyObject *, PyObject *);}
static PyObject *meth_CompositeProcessor_start(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        CompositeProcessor *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_CompositeProcessor,&sipCpp))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_CompositeProcessor,sipNm_BALL_start);

    return NULL;
}


extern "C" {static PyObject *meth_CompositeProcessor_finish(PyObject *, PyObject *);}
static PyObject *meth_CompositeProcessor_finish(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        CompositeProcessor *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_CompositeProcessor,&sipCpp))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_CompositeProcessor,sipNm_BALL_finish);

    return NULL;
}


extern "C" {static PyObject *slot_CompositeProcessor___call__(PyObject *sipSelf,PyObject *sipArgs);}
static PyObject *slot_CompositeProcessor___call__(PyObject *sipSelf,PyObject *sipArgs)
{
    CompositeProcessor *sipCpp = reinterpret_cast<CompositeProcessor *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_CompositeProcessor));

    if (!sipCpp)
        return 0;

    int sipArgsParsed = 0;

    {
        Composite * a0;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"JA",sipClass_Composite,&a0))
        {
            Processor::Result sipRes = (Processor::Result)0;

#line 18 "pyCompositeProcessor.sip"
  sipRes = sipCpp->operator () (*a0);
#line 105 "sipBALLCompositeProcessor.C"

            return sipConvertFromNamedEnum(sipRes,sipEnum_Processor_Result);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_CompositeProcessor,sipNm_BALL___call__);

    return 0;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_CompositeProcessor(void *, sipWrapperType *);}
static void *cast_CompositeProcessor(void *ptr,sipWrapperType *targetClass)
{
    if (targetClass == sipClass_CompositeProcessor)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_CompositeProcessor(void *, int);}
static void release_CompositeProcessor(void *ptr,int)
{
    delete reinterpret_cast<CompositeProcessor *>(ptr);
}


extern "C" {static void dealloc_CompositeProcessor(sipWrapper *);}
static void dealloc_CompositeProcessor(sipWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_CompositeProcessor(sipSelf->u.cppPtr,0);
    }
}


extern "C" {static void *init_CompositeProcessor(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_CompositeProcessor(sipWrapper *,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    CompositeProcessor *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            try
            {
            sipCpp = new CompositeProcessor();
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
        const CompositeProcessor * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_CompositeProcessor,&a0))
        {
            try
            {
            sipCpp = new CompositeProcessor(*a0);
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


extern "C" {static void *forceConvertTo_CompositeProcessor(PyObject *, int *);}
static void *forceConvertTo_CompositeProcessor(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_CompositeProcessor))
        return sipConvertToCpp(valobj,sipClass_CompositeProcessor,iserrp);

    sipBadClass(sipNm_BALL_CompositeProcessor);

    *iserrp = 1;

    return NULL;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_CompositeProcessor[] = {
    {(void *)slot_CompositeProcessor___call__, call_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_CompositeProcessor[] = {
    {sipNm_BALL_finish, meth_CompositeProcessor_finish, METH_VARARGS, NULL},
    {sipNm_BALL_start, meth_CompositeProcessor_start, METH_VARARGS, NULL}
};


sipTypeDef sipType_BALL_CompositeProcessor = {
    0,
    0,
    "BALL.CompositeProcessor",
    0,
    {0, 0, 1},
    0,
    slots_CompositeProcessor,
    2, methods_CompositeProcessor,
    0, 0,
    0,
    init_CompositeProcessor,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_CompositeProcessor,
    cast_CompositeProcessor,
    release_CompositeProcessor,
    forceConvertTo_CompositeProcessor,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
