/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLSecondaryStructureProcessor.h"

#include "sipBALLCompositeProcessor.h"
#include "sipBALLSecondaryStructureProcessor.h"
#include "sipBALLProcessor.h"
#include "sipBALLComposite.h"



extern "C" {static PyObject *slot_SecondaryStructureProcessor___call__(PyObject *sipSelf,PyObject *sipArgs);}
static PyObject *slot_SecondaryStructureProcessor___call__(PyObject *sipSelf,PyObject *sipArgs)
{
    SecondaryStructureProcessor *sipCpp = reinterpret_cast<SecondaryStructureProcessor *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_SecondaryStructureProcessor));

    if (!sipCpp)
        return 0;

    int sipArgsParsed = 0;

    {
        Composite * a0;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"JA",sipClass_Composite,&a0))
        {
            Processor::Result sipRes = (Processor::Result)0;

#line 13 "secondaryStructureProcessor.sip"
  sipRes = sipCpp->operator () (*a0);
#line 40 "sipBALLSecondaryStructureProcessor.C"

            return sipConvertFromNamedEnum(sipRes,sipEnum_Processor_Result);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_SecondaryStructureProcessor,sipNm_BALL___call__);

    return 0;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_SecondaryStructureProcessor(void *, sipWrapperType *);}
static void *cast_SecondaryStructureProcessor(void *ptr,sipWrapperType *targetClass)
{
    void *res;

    if (targetClass == sipClass_SecondaryStructureProcessor)
        return ptr;

    if ((res = sipCast_CompositeProcessor((CompositeProcessor *)(SecondaryStructureProcessor *)ptr,targetClass)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_SecondaryStructureProcessor(void *, int);}
static void release_SecondaryStructureProcessor(void *ptr,int)
{
    delete reinterpret_cast<SecondaryStructureProcessor *>(ptr);
}


extern "C" {static void dealloc_SecondaryStructureProcessor(sipWrapper *);}
static void dealloc_SecondaryStructureProcessor(sipWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_SecondaryStructureProcessor(sipSelf->u.cppPtr,0);
    }
}


extern "C" {static void *init_SecondaryStructureProcessor(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_SecondaryStructureProcessor(sipWrapper *,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    SecondaryStructureProcessor *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            try
            {
            sipCpp = new SecondaryStructureProcessor();
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
        const SecondaryStructureProcessor * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_SecondaryStructureProcessor,&a0))
        {
            try
            {
            sipCpp = new SecondaryStructureProcessor(*a0);
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


extern "C" {static void *forceConvertTo_SecondaryStructureProcessor(PyObject *, int *);}
static void *forceConvertTo_SecondaryStructureProcessor(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_SecondaryStructureProcessor))
        return sipConvertToCpp(valobj,sipClass_SecondaryStructureProcessor,iserrp);

    sipBadClass(sipNm_BALL_SecondaryStructureProcessor);

    *iserrp = 1;

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedClassDef supers_SecondaryStructureProcessor[] = {{149, 255, 1}};


/* Define this type's Python slots. */
static sipPySlotDef slots_SecondaryStructureProcessor[] = {
    {(void *)slot_SecondaryStructureProcessor___call__, call_slot},
    {0, (sipPySlotType)0}
};


sipTypeDef sipType_BALL_SecondaryStructureProcessor = {
    0,
    0,
    "BALL.SecondaryStructureProcessor",
    0,
    {0, 0, 1},
    supers_SecondaryStructureProcessor,
    slots_SecondaryStructureProcessor,
    0, 0,
    0, 0,
    0,
    init_SecondaryStructureProcessor,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_SecondaryStructureProcessor,
    cast_SecondaryStructureProcessor,
    release_SecondaryStructureProcessor,
    forceConvertTo_SecondaryStructureProcessor,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
