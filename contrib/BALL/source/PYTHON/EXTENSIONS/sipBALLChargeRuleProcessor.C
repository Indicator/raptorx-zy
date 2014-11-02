/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLChargeRuleProcessor.h"

#include "sipBALLRuleProcessor.h"
#include "sipBALLINIFile.h"
#include "sipBALLString.h"
#include "sipBALLChargeRuleProcessor.h"
#include "sipBALLProcessor.h"
#include "sipBALLAtom.h"


sipChargeRuleProcessor::sipChargeRuleProcessor(): ChargeRuleProcessor(), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,2);
}

sipChargeRuleProcessor::sipChargeRuleProcessor(INIFile& a0,const String& a1): ChargeRuleProcessor(a0,a1), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,2);
}

sipChargeRuleProcessor::sipChargeRuleProcessor(const ChargeRuleProcessor& a0): ChargeRuleProcessor(a0), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,2);
}

sipChargeRuleProcessor::~sipChargeRuleProcessor()
{
    sipCommonDtor(sipPySelf);
}

bool sipChargeRuleProcessor::start()
{
    extern bool sipVH_BALL_4(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipNm_BALL_start);

    if (!meth)
        return RuleProcessor::start();

    return sipVH_BALL_4(sipGILState,meth);
}

bool sipChargeRuleProcessor::finish()
{
    extern bool sipVH_BALL_4(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,NULL,sipNm_BALL_finish);

    if (!meth)
        return RuleProcessor::finish();

    return sipVH_BALL_4(sipGILState,meth);
}


extern "C" {static PyObject *slot_ChargeRuleProcessor___call__(PyObject *sipSelf,PyObject *sipArgs);}
static PyObject *slot_ChargeRuleProcessor___call__(PyObject *sipSelf,PyObject *sipArgs)
{
    ChargeRuleProcessor *sipCpp = reinterpret_cast<ChargeRuleProcessor *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_ChargeRuleProcessor));

    if (!sipCpp)
        return 0;

    int sipArgsParsed = 0;

    {
        Atom * a0;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"JA",sipClass_Atom,&a0))
        {
            Processor::Result sipRes = (Processor::Result)0;

#line 21 "chargeRuleProcessor.sip"
	sipRes = sipCpp->operator () (*a0);
#line 92 "sipBALLChargeRuleProcessor.C"

            return sipConvertFromNamedEnum(sipRes,sipEnum_Processor_Result);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_ChargeRuleProcessor,sipNm_BALL___call__);

    return 0;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_ChargeRuleProcessor(void *, sipWrapperType *);}
static void *cast_ChargeRuleProcessor(void *ptr,sipWrapperType *targetClass)
{
    void *res;

    if (targetClass == sipClass_ChargeRuleProcessor)
        return ptr;

    if ((res = sipCast_RuleProcessor((RuleProcessor *)(ChargeRuleProcessor *)ptr,targetClass)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_ChargeRuleProcessor(void *, int);}
static void release_ChargeRuleProcessor(void *ptr,int state)
{
    if (state & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipChargeRuleProcessor *>(ptr);
    else
        delete reinterpret_cast<ChargeRuleProcessor *>(ptr);
}


extern "C" {static void dealloc_ChargeRuleProcessor(sipWrapper *);}
static void dealloc_ChargeRuleProcessor(sipWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipChargeRuleProcessor *>(sipSelf->u.cppPtr)->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_ChargeRuleProcessor(sipSelf->u.cppPtr,sipSelf->flags);
    }
}


extern "C" {static void *init_ChargeRuleProcessor(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_ChargeRuleProcessor(sipWrapper *sipSelf,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    sipChargeRuleProcessor *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            try
            {
            sipCpp = new sipChargeRuleProcessor();
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
        INIFile * a0;
        const String& a1def = "ChargeRules";
        const String * a1 = &a1def;
        int a1State = 0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA|J1",sipClass_INIFile,&a0,sipClass_String,&a1,&a1State))
        {
            try
            {
            sipCpp = new sipChargeRuleProcessor(*a0,*a1);
            }
            catch (...)
            {

            sipReleaseInstance(const_cast<String *>(a1),sipClass_String,a1State);
                sipRaiseUnknownException();
                return NULL;
            }

            sipReleaseInstance(const_cast<String *>(a1),sipClass_String,a1State);
        }
    }

    if (!sipCpp)
    {
        const ChargeRuleProcessor * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_ChargeRuleProcessor,&a0))
        {
            try
            {
            sipCpp = new sipChargeRuleProcessor(*a0);
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


extern "C" {static void *forceConvertTo_ChargeRuleProcessor(PyObject *, int *);}
static void *forceConvertTo_ChargeRuleProcessor(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_ChargeRuleProcessor))
        return sipConvertToCpp(valobj,sipClass_ChargeRuleProcessor,iserrp);

    sipBadClass(sipNm_BALL_ChargeRuleProcessor);

    *iserrp = 1;

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedClassDef supers_ChargeRuleProcessor[] = {{116, 255, 1}};


/* Define this type's Python slots. */
static sipPySlotDef slots_ChargeRuleProcessor[] = {
    {(void *)slot_ChargeRuleProcessor___call__, call_slot},
    {0, (sipPySlotType)0}
};


sipTypeDef sipType_BALL_ChargeRuleProcessor = {
    0,
    0,
    "BALL.ChargeRuleProcessor",
    0,
    {0, 0, 1},
    supers_ChargeRuleProcessor,
    slots_ChargeRuleProcessor,
    0, 0,
    0, 0,
    0,
    init_ChargeRuleProcessor,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_ChargeRuleProcessor,
    cast_ChargeRuleProcessor,
    release_ChargeRuleProcessor,
    forceConvertTo_ChargeRuleProcessor,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
