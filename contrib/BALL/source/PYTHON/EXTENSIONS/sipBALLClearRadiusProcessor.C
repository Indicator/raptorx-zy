/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLClearRadiusProcessor.h"

#include "sipBALLAtomProcessor.h"
#include "sipBALLClearRadiusProcessor.h"
#include "sipBALLProcessor.h"
#include "sipBALLAtom.h"



extern "C" {static PyObject *slot_ClearRadiusProcessor___call__(PyObject *sipSelf,PyObject *sipArgs);}
static PyObject *slot_ClearRadiusProcessor___call__(PyObject *sipSelf,PyObject *sipArgs)
{
    ClearRadiusProcessor *sipCpp = reinterpret_cast<ClearRadiusProcessor *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_ClearRadiusProcessor));

    if (!sipCpp)
        return 0;

    int sipArgsParsed = 0;

    {
        Atom * a0;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"JA",sipClass_Atom,&a0))
        {
            Processor::Result sipRes = (Processor::Result)0;

#line 35 "defaultProcessors.sip"
  sipRes = sipCpp->operator () (*a0);
#line 40 "sipBALLClearRadiusProcessor.C"

            return sipConvertFromNamedEnum(sipRes,sipEnum_Processor_Result);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_ClearRadiusProcessor,sipNm_BALL___call__);

    return 0;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_ClearRadiusProcessor(void *, sipWrapperType *);}
static void *cast_ClearRadiusProcessor(void *ptr,sipWrapperType *targetClass)
{
    void *res;

    if (targetClass == sipClass_ClearRadiusProcessor)
        return ptr;

    if ((res = sipCast_AtomProcessor((AtomProcessor *)(ClearRadiusProcessor *)ptr,targetClass)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_ClearRadiusProcessor(void *, int);}
static void release_ClearRadiusProcessor(void *ptr,int)
{
    delete reinterpret_cast<ClearRadiusProcessor *>(ptr);
}


extern "C" {static void dealloc_ClearRadiusProcessor(sipWrapper *);}
static void dealloc_ClearRadiusProcessor(sipWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_ClearRadiusProcessor(sipSelf->u.cppPtr,0);
    }
}


extern "C" {static void *init_ClearRadiusProcessor(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_ClearRadiusProcessor(sipWrapper *,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    ClearRadiusProcessor *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            try
            {
            sipCpp = new ClearRadiusProcessor();
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
        const ClearRadiusProcessor * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_ClearRadiusProcessor,&a0))
        {
            try
            {
            sipCpp = new ClearRadiusProcessor(*a0);
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


extern "C" {static void *forceConvertTo_ClearRadiusProcessor(PyObject *, int *);}
static void *forceConvertTo_ClearRadiusProcessor(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_ClearRadiusProcessor))
        return sipConvertToCpp(valobj,sipClass_ClearRadiusProcessor,iserrp);

    sipBadClass(sipNm_BALL_ClearRadiusProcessor);

    *iserrp = 1;

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedClassDef supers_ClearRadiusProcessor[] = {{107, 255, 1}};


/* Define this type's Python slots. */
static sipPySlotDef slots_ClearRadiusProcessor[] = {
    {(void *)slot_ClearRadiusProcessor___call__, call_slot},
    {0, (sipPySlotType)0}
};


sipTypeDef sipType_BALL_ClearRadiusProcessor = {
    0,
    0,
    "BALL.ClearRadiusProcessor",
    0,
    {0, 0, 1},
    supers_ClearRadiusProcessor,
    slots_ClearRadiusProcessor,
    0, 0,
    0, 0,
    0,
    init_ClearRadiusProcessor,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_ClearRadiusProcessor,
    cast_ClearRadiusProcessor,
    release_ClearRadiusProcessor,
    forceConvertTo_ClearRadiusProcessor,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
