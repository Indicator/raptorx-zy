/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLBondProcessor.h"

#include "sipBALLBondProcessor.h"
#include "sipBALLProcessor.h"
#include "sipBALLBond.h"



extern "C" {static PyObject *meth_BondProcessor_start(PyObject *, PyObject *);}
static PyObject *meth_BondProcessor_start(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        BondProcessor *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_BondProcessor,&sipCpp))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_BondProcessor,sipNm_BALL_start);

    return NULL;
}


extern "C" {static PyObject *meth_BondProcessor_finish(PyObject *, PyObject *);}
static PyObject *meth_BondProcessor_finish(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        BondProcessor *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_BondProcessor,&sipCpp))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_BondProcessor,sipNm_BALL_finish);

    return NULL;
}


extern "C" {static PyObject *slot_BondProcessor___call__(PyObject *sipSelf,PyObject *sipArgs);}
static PyObject *slot_BondProcessor___call__(PyObject *sipSelf,PyObject *sipArgs)
{
    BondProcessor *sipCpp = reinterpret_cast<BondProcessor *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_BondProcessor));

    if (!sipCpp)
        return 0;

    int sipArgsParsed = 0;

    {
        Bond * a0;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"JA",sipClass_Bond,&a0))
        {
            Processor::Result sipRes = (Processor::Result)0;

#line 20 "pyBondProcessor.sip"
  sipRes = sipCpp->operator () (*a0);
#line 105 "sipBALLBondProcessor.C"

            return sipConvertFromNamedEnum(sipRes,sipEnum_Processor_Result);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_BondProcessor,sipNm_BALL___call__);

    return 0;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_BondProcessor(void *, sipWrapperType *);}
static void *cast_BondProcessor(void *ptr,sipWrapperType *targetClass)
{
    if (targetClass == sipClass_BondProcessor)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_BondProcessor(void *, int);}
static void release_BondProcessor(void *ptr,int)
{
    delete reinterpret_cast<BondProcessor *>(ptr);
}


extern "C" {static void dealloc_BondProcessor(sipWrapper *);}
static void dealloc_BondProcessor(sipWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_BondProcessor(sipSelf->u.cppPtr,0);
    }
}


extern "C" {static void *init_BondProcessor(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_BondProcessor(sipWrapper *,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    BondProcessor *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            try
            {
            sipCpp = new BondProcessor();
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
        const BondProcessor * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_BondProcessor,&a0))
        {
            try
            {
            sipCpp = new BondProcessor(*a0);
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


extern "C" {static void *forceConvertTo_BondProcessor(PyObject *, int *);}
static void *forceConvertTo_BondProcessor(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_BondProcessor))
        return sipConvertToCpp(valobj,sipClass_BondProcessor,iserrp);

    sipBadClass(sipNm_BALL_BondProcessor);

    *iserrp = 1;

    return NULL;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_BondProcessor[] = {
    {(void *)slot_BondProcessor___call__, call_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_BondProcessor[] = {
    {sipNm_BALL_finish, meth_BondProcessor_finish, METH_VARARGS, NULL},
    {sipNm_BALL_start, meth_BondProcessor_start, METH_VARARGS, NULL}
};


sipTypeDef sipType_BALL_BondProcessor = {
    0,
    0,
    "BALL.BondProcessor",
    0,
    {0, 0, 1},
    0,
    slots_BondProcessor,
    2, methods_BondProcessor,
    0, 0,
    0,
    init_BondProcessor,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_BondProcessor,
    cast_BondProcessor,
    release_BondProcessor,
    forceConvertTo_BondProcessor,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
