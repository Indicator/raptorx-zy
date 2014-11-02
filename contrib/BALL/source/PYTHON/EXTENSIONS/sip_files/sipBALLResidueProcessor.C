/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLResidueProcessor.h"

#include "sipBALLResidueProcessor.h"
#include "sipBALLProcessor.h"
#include "sipBALLResidue.h"



extern "C" {static PyObject *meth_ResidueProcessor_start(PyObject *, PyObject *);}
static PyObject *meth_ResidueProcessor_start(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        ResidueProcessor *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_ResidueProcessor,&sipCpp))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_ResidueProcessor,sipNm_BALL_start);

    return NULL;
}


extern "C" {static PyObject *meth_ResidueProcessor_finish(PyObject *, PyObject *);}
static PyObject *meth_ResidueProcessor_finish(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        ResidueProcessor *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_ResidueProcessor,&sipCpp))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_ResidueProcessor,sipNm_BALL_finish);

    return NULL;
}


extern "C" {static PyObject *slot_ResidueProcessor___call__(PyObject *sipSelf,PyObject *sipArgs);}
static PyObject *slot_ResidueProcessor___call__(PyObject *sipSelf,PyObject *sipArgs)
{
    ResidueProcessor *sipCpp = reinterpret_cast<ResidueProcessor *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_ResidueProcessor));

    if (!sipCpp)
        return 0;

    int sipArgsParsed = 0;

    {
        Residue * a0;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"JA",sipClass_Residue,&a0))
        {
            Processor::Result sipRes = (Processor::Result)0;

#line 19 "pyResidueProcessor.sip"
  sipRes = sipCpp->operator () (*a0);
#line 105 "sipBALLResidueProcessor.C"

            return sipConvertFromNamedEnum(sipRes,sipEnum_Processor_Result);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_ResidueProcessor,sipNm_BALL___call__);

    return 0;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_ResidueProcessor(void *, sipWrapperType *);}
static void *cast_ResidueProcessor(void *ptr,sipWrapperType *targetClass)
{
    if (targetClass == sipClass_ResidueProcessor)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_ResidueProcessor(void *, int);}
static void release_ResidueProcessor(void *ptr,int)
{
    delete reinterpret_cast<ResidueProcessor *>(ptr);
}


extern "C" {static void dealloc_ResidueProcessor(sipWrapper *);}
static void dealloc_ResidueProcessor(sipWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_ResidueProcessor(sipSelf->u.cppPtr,0);
    }
}


extern "C" {static void *init_ResidueProcessor(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_ResidueProcessor(sipWrapper *,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    ResidueProcessor *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            try
            {
            sipCpp = new ResidueProcessor();
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
        const ResidueProcessor * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_ResidueProcessor,&a0))
        {
            try
            {
            sipCpp = new ResidueProcessor(*a0);
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


extern "C" {static void *forceConvertTo_ResidueProcessor(PyObject *, int *);}
static void *forceConvertTo_ResidueProcessor(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_ResidueProcessor))
        return sipConvertToCpp(valobj,sipClass_ResidueProcessor,iserrp);

    sipBadClass(sipNm_BALL_ResidueProcessor);

    *iserrp = 1;

    return NULL;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_ResidueProcessor[] = {
    {(void *)slot_ResidueProcessor___call__, call_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_ResidueProcessor[] = {
    {sipNm_BALL_finish, meth_ResidueProcessor_finish, METH_VARARGS, NULL},
    {sipNm_BALL_start, meth_ResidueProcessor_start, METH_VARARGS, NULL}
};


sipTypeDef sipType_BALL_ResidueProcessor = {
    0,
    0,
    "BALL.ResidueProcessor",
    0,
    {0, 0, 1},
    0,
    slots_ResidueProcessor,
    2, methods_ResidueProcessor,
    0, 0,
    0,
    init_ResidueProcessor,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_ResidueProcessor,
    cast_ResidueProcessor,
    release_ResidueProcessor,
    forceConvertTo_ResidueProcessor,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
