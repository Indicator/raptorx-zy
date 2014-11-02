/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLAtomProcessor.h"

#include "sipBALLAtomProcessor.h"
#include "sipBALLProcessor.h"
#include "sipBALLAtom.h"



extern "C" {static PyObject *meth_AtomProcessor_start(PyObject *, PyObject *);}
static PyObject *meth_AtomProcessor_start(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        AtomProcessor *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_AtomProcessor,&sipCpp))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_AtomProcessor,sipNm_BALL_start);

    return NULL;
}


extern "C" {static PyObject *meth_AtomProcessor_finish(PyObject *, PyObject *);}
static PyObject *meth_AtomProcessor_finish(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        AtomProcessor *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_AtomProcessor,&sipCpp))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_AtomProcessor,sipNm_BALL_finish);

    return NULL;
}


extern "C" {static PyObject *slot_AtomProcessor___call__(PyObject *sipSelf,PyObject *sipArgs);}
static PyObject *slot_AtomProcessor___call__(PyObject *sipSelf,PyObject *sipArgs)
{
    AtomProcessor *sipCpp = reinterpret_cast<AtomProcessor *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_AtomProcessor));

    if (!sipCpp)
        return 0;

    int sipArgsParsed = 0;

    {
        Atom * a0;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"JA",sipClass_Atom,&a0))
        {
            Processor::Result sipRes = (Processor::Result)0;

#line 20 "pyAtomProcessor.sip"
  sipRes = sipCpp->operator () (*a0);
#line 105 "sipBALLAtomProcessor.C"

            return sipConvertFromNamedEnum(sipRes,sipEnum_Processor_Result);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_AtomProcessor,sipNm_BALL___call__);

    return 0;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_AtomProcessor(void *, sipWrapperType *);}
static void *cast_AtomProcessor(void *ptr,sipWrapperType *targetClass)
{
    if (targetClass == sipClass_AtomProcessor)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_AtomProcessor(void *, int);}
static void release_AtomProcessor(void *ptr,int)
{
    delete reinterpret_cast<AtomProcessor *>(ptr);
}


extern "C" {static void dealloc_AtomProcessor(sipWrapper *);}
static void dealloc_AtomProcessor(sipWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_AtomProcessor(sipSelf->u.cppPtr,0);
    }
}


extern "C" {static void *init_AtomProcessor(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_AtomProcessor(sipWrapper *,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    AtomProcessor *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            try
            {
            sipCpp = new AtomProcessor();
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
        const AtomProcessor * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_AtomProcessor,&a0))
        {
            try
            {
            sipCpp = new AtomProcessor(*a0);
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


extern "C" {static void *forceConvertTo_AtomProcessor(PyObject *, int *);}
static void *forceConvertTo_AtomProcessor(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_AtomProcessor))
        return sipConvertToCpp(valobj,sipClass_AtomProcessor,iserrp);

    sipBadClass(sipNm_BALL_AtomProcessor);

    *iserrp = 1;

    return NULL;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_AtomProcessor[] = {
    {(void *)slot_AtomProcessor___call__, call_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_AtomProcessor[] = {
    {sipNm_BALL_finish, meth_AtomProcessor_finish, METH_VARARGS, NULL},
    {sipNm_BALL_start, meth_AtomProcessor_start, METH_VARARGS, NULL}
};


sipTypeDef sipType_BALL_AtomProcessor = {
    0,
    0,
    "BALL.AtomProcessor",
    0,
    {0, 0, 1},
    0,
    slots_AtomProcessor,
    2, methods_AtomProcessor,
    0, 0,
    0,
    init_AtomProcessor,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_AtomProcessor,
    cast_AtomProcessor,
    release_AtomProcessor,
    forceConvertTo_AtomProcessor,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
