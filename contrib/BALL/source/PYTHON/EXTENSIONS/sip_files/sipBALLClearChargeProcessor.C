/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLClearChargeProcessor.h"

#include "sipBALLAtomProcessor.h"
#include "sipBALLClearChargeProcessor.h"
#include "sipBALLProcessor.h"
#include "sipBALLAtom.h"



extern "C" {static PyObject *slot_ClearChargeProcessor___call__(PyObject *sipSelf,PyObject *sipArgs);}
static PyObject *slot_ClearChargeProcessor___call__(PyObject *sipSelf,PyObject *sipArgs)
{
    ClearChargeProcessor *sipCpp = reinterpret_cast<ClearChargeProcessor *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_ClearChargeProcessor));

    if (!sipCpp)
        return 0;

    int sipArgsParsed = 0;

    {
        Atom * a0;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"JA",sipClass_Atom,&a0))
        {
            Processor::Result sipRes = (Processor::Result)0;

#line 19 "defaultProcessors.sip"
  sipRes = sipCpp->operator () (*a0);
#line 40 "sipBALLClearChargeProcessor.C"

            return sipConvertFromNamedEnum(sipRes,sipEnum_Processor_Result);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_ClearChargeProcessor,sipNm_BALL___call__);

    return 0;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_ClearChargeProcessor(void *, sipWrapperType *);}
static void *cast_ClearChargeProcessor(void *ptr,sipWrapperType *targetClass)
{
    void *res;

    if (targetClass == sipClass_ClearChargeProcessor)
        return ptr;

    if ((res = sipCast_AtomProcessor((AtomProcessor *)(ClearChargeProcessor *)ptr,targetClass)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_ClearChargeProcessor(void *, int);}
static void release_ClearChargeProcessor(void *ptr,int)
{
    delete reinterpret_cast<ClearChargeProcessor *>(ptr);
}


extern "C" {static void dealloc_ClearChargeProcessor(sipWrapper *);}
static void dealloc_ClearChargeProcessor(sipWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_ClearChargeProcessor(sipSelf->u.cppPtr,0);
    }
}


extern "C" {static void *init_ClearChargeProcessor(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_ClearChargeProcessor(sipWrapper *,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    ClearChargeProcessor *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            try
            {
            sipCpp = new ClearChargeProcessor();
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
        const ClearChargeProcessor * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_ClearChargeProcessor,&a0))
        {
            try
            {
            sipCpp = new ClearChargeProcessor(*a0);
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


extern "C" {static void *forceConvertTo_ClearChargeProcessor(PyObject *, int *);}
static void *forceConvertTo_ClearChargeProcessor(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_ClearChargeProcessor))
        return sipConvertToCpp(valobj,sipClass_ClearChargeProcessor,iserrp);

    sipBadClass(sipNm_BALL_ClearChargeProcessor);

    *iserrp = 1;

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedClassDef supers_ClearChargeProcessor[] = {{107, 255, 1}};


/* Define this type's Python slots. */
static sipPySlotDef slots_ClearChargeProcessor[] = {
    {(void *)slot_ClearChargeProcessor___call__, call_slot},
    {0, (sipPySlotType)0}
};


sipTypeDef sipType_BALL_ClearChargeProcessor = {
    0,
    0,
    "BALL.ClearChargeProcessor",
    0,
    {0, 0, 1},
    supers_ClearChargeProcessor,
    slots_ClearChargeProcessor,
    0, 0,
    0, 0,
    0,
    init_ClearChargeProcessor,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_ClearChargeProcessor,
    cast_ClearChargeProcessor,
    release_ClearChargeProcessor,
    forceConvertTo_ClearChargeProcessor,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
