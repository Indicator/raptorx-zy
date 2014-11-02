/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLRadiusRuleProcessor.h"

#include "sipBALLRuleProcessor.h"
#include "sipBALLINIFile.h"
#include "sipBALLString.h"
#include "sipBALLRadiusRuleProcessor.h"
#include "sipBALLProcessor.h"
#include "sipBALLAtom.h"


sipRadiusRuleProcessor::sipRadiusRuleProcessor(): RadiusRuleProcessor(), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,2);
}

sipRadiusRuleProcessor::sipRadiusRuleProcessor(INIFile& a0,const String& a1): RadiusRuleProcessor(a0,a1), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,2);
}

sipRadiusRuleProcessor::sipRadiusRuleProcessor(const RadiusRuleProcessor& a0): RadiusRuleProcessor(a0), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,2);
}

sipRadiusRuleProcessor::~sipRadiusRuleProcessor()
{
    sipCommonDtor(sipPySelf);
}

bool sipRadiusRuleProcessor::start()
{
    extern bool sipVH_BALL_4(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipNm_BALL_start);

    if (!meth)
        return RuleProcessor::start();

    return sipVH_BALL_4(sipGILState,meth);
}

bool sipRadiusRuleProcessor::finish()
{
    extern bool sipVH_BALL_4(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,NULL,sipNm_BALL_finish);

    if (!meth)
        return RuleProcessor::finish();

    return sipVH_BALL_4(sipGILState,meth);
}


extern "C" {static PyObject *slot_RadiusRuleProcessor___call__(PyObject *sipSelf,PyObject *sipArgs);}
static PyObject *slot_RadiusRuleProcessor___call__(PyObject *sipSelf,PyObject *sipArgs)
{
    RadiusRuleProcessor *sipCpp = reinterpret_cast<RadiusRuleProcessor *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_RadiusRuleProcessor));

    if (!sipCpp)
        return 0;

    int sipArgsParsed = 0;

    {
        Atom * a0;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"JA",sipClass_Atom,&a0))
        {
            Processor::Result sipRes = (Processor::Result)0;

#line 21 "radiusRuleProcessor.sip"
	sipRes = sipCpp->operator () (*a0);
#line 92 "sipBALLRadiusRuleProcessor.C"

            return sipConvertFromNamedEnum(sipRes,sipEnum_Processor_Result);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_RadiusRuleProcessor,sipNm_BALL___call__);

    return 0;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_RadiusRuleProcessor(void *, sipWrapperType *);}
static void *cast_RadiusRuleProcessor(void *ptr,sipWrapperType *targetClass)
{
    void *res;

    if (targetClass == sipClass_RadiusRuleProcessor)
        return ptr;

    if ((res = sipCast_RuleProcessor((RuleProcessor *)(RadiusRuleProcessor *)ptr,targetClass)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_RadiusRuleProcessor(void *, int);}
static void release_RadiusRuleProcessor(void *ptr,int state)
{
    if (state & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipRadiusRuleProcessor *>(ptr);
    else
        delete reinterpret_cast<RadiusRuleProcessor *>(ptr);
}


extern "C" {static void dealloc_RadiusRuleProcessor(sipWrapper *);}
static void dealloc_RadiusRuleProcessor(sipWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipRadiusRuleProcessor *>(sipSelf->u.cppPtr)->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_RadiusRuleProcessor(sipSelf->u.cppPtr,sipSelf->flags);
    }
}


extern "C" {static void *init_RadiusRuleProcessor(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_RadiusRuleProcessor(sipWrapper *sipSelf,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    sipRadiusRuleProcessor *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            try
            {
            sipCpp = new sipRadiusRuleProcessor();
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
        const String& a1def = "RadiusRules";
        const String * a1 = &a1def;
        int a1State = 0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA|J1",sipClass_INIFile,&a0,sipClass_String,&a1,&a1State))
        {
            try
            {
            sipCpp = new sipRadiusRuleProcessor(*a0,*a1);
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
        const RadiusRuleProcessor * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_RadiusRuleProcessor,&a0))
        {
            try
            {
            sipCpp = new sipRadiusRuleProcessor(*a0);
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


extern "C" {static void *forceConvertTo_RadiusRuleProcessor(PyObject *, int *);}
static void *forceConvertTo_RadiusRuleProcessor(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_RadiusRuleProcessor))
        return sipConvertToCpp(valobj,sipClass_RadiusRuleProcessor,iserrp);

    sipBadClass(sipNm_BALL_RadiusRuleProcessor);

    *iserrp = 1;

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedClassDef supers_RadiusRuleProcessor[] = {{116, 255, 1}};


/* Define this type's Python slots. */
static sipPySlotDef slots_RadiusRuleProcessor[] = {
    {(void *)slot_RadiusRuleProcessor___call__, call_slot},
    {0, (sipPySlotType)0}
};


sipTypeDef sipType_BALL_RadiusRuleProcessor = {
    0,
    0,
    "BALL.RadiusRuleProcessor",
    0,
    {0, 0, 1},
    supers_RadiusRuleProcessor,
    slots_RadiusRuleProcessor,
    0, 0,
    0, 0,
    0,
    init_RadiusRuleProcessor,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_RadiusRuleProcessor,
    cast_RadiusRuleProcessor,
    release_RadiusRuleProcessor,
    forceConvertTo_RadiusRuleProcessor,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
