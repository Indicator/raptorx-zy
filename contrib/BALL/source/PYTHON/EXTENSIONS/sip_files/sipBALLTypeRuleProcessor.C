/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLTypeRuleProcessor.h"

#include "sipBALLRuleProcessor.h"
#include "sipBALLINIFile.h"
#include "sipBALLString.h"
#include "sipBALLTypeRuleProcessor.h"
#include "sipBALLProcessor.h"
#include "sipBALLAtom.h"


sipTypeRuleProcessor::sipTypeRuleProcessor(): TypeRuleProcessor(), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,2);
}

sipTypeRuleProcessor::sipTypeRuleProcessor(INIFile& a0,const String& a1): TypeRuleProcessor(a0,a1), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,2);
}

sipTypeRuleProcessor::sipTypeRuleProcessor(const TypeRuleProcessor& a0): TypeRuleProcessor(a0), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,2);
}

sipTypeRuleProcessor::~sipTypeRuleProcessor()
{
    sipCommonDtor(sipPySelf);
}

bool sipTypeRuleProcessor::start()
{
    extern bool sipVH_BALL_4(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipNm_BALL_start);

    if (!meth)
        return RuleProcessor::start();

    return sipVH_BALL_4(sipGILState,meth);
}

bool sipTypeRuleProcessor::finish()
{
    extern bool sipVH_BALL_4(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,NULL,sipNm_BALL_finish);

    if (!meth)
        return RuleProcessor::finish();

    return sipVH_BALL_4(sipGILState,meth);
}


extern "C" {static PyObject *slot_TypeRuleProcessor___call__(PyObject *sipSelf,PyObject *sipArgs);}
static PyObject *slot_TypeRuleProcessor___call__(PyObject *sipSelf,PyObject *sipArgs)
{
    TypeRuleProcessor *sipCpp = reinterpret_cast<TypeRuleProcessor *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_TypeRuleProcessor));

    if (!sipCpp)
        return 0;

    int sipArgsParsed = 0;

    {
        Atom * a0;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"JA",sipClass_Atom,&a0))
        {
            Processor::Result sipRes = (Processor::Result)0;

#line 23 "typeRuleProcessor.sip"
  sipRes = sipCpp->operator () (*a0);
#line 92 "sipBALLTypeRuleProcessor.C"

            return sipConvertFromNamedEnum(sipRes,sipEnum_Processor_Result);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_TypeRuleProcessor,sipNm_BALL___call__);

    return 0;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_TypeRuleProcessor(void *, sipWrapperType *);}
static void *cast_TypeRuleProcessor(void *ptr,sipWrapperType *targetClass)
{
    void *res;

    if (targetClass == sipClass_TypeRuleProcessor)
        return ptr;

    if ((res = sipCast_RuleProcessor((RuleProcessor *)(TypeRuleProcessor *)ptr,targetClass)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_TypeRuleProcessor(void *, int);}
static void release_TypeRuleProcessor(void *ptr,int state)
{
    if (state & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipTypeRuleProcessor *>(ptr);
    else
        delete reinterpret_cast<TypeRuleProcessor *>(ptr);
}


extern "C" {static void dealloc_TypeRuleProcessor(sipWrapper *);}
static void dealloc_TypeRuleProcessor(sipWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipTypeRuleProcessor *>(sipSelf->u.cppPtr)->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_TypeRuleProcessor(sipSelf->u.cppPtr,sipSelf->flags);
    }
}


extern "C" {static void *init_TypeRuleProcessor(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_TypeRuleProcessor(sipWrapper *sipSelf,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    sipTypeRuleProcessor *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            try
            {
            sipCpp = new sipTypeRuleProcessor();
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
        const String * a1;
        int a1State = 0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JAJ1",sipClass_INIFile,&a0,sipClass_String,&a1,&a1State))
        {
            try
            {
            sipCpp = new sipTypeRuleProcessor(*a0,*a1);
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
        const TypeRuleProcessor * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_TypeRuleProcessor,&a0))
        {
            try
            {
            sipCpp = new sipTypeRuleProcessor(*a0);
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


extern "C" {static void *forceConvertTo_TypeRuleProcessor(PyObject *, int *);}
static void *forceConvertTo_TypeRuleProcessor(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_TypeRuleProcessor))
        return sipConvertToCpp(valobj,sipClass_TypeRuleProcessor,iserrp);

    sipBadClass(sipNm_BALL_TypeRuleProcessor);

    *iserrp = 1;

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedClassDef supers_TypeRuleProcessor[] = {{116, 255, 1}};


/* Define this type's Python slots. */
static sipPySlotDef slots_TypeRuleProcessor[] = {
    {(void *)slot_TypeRuleProcessor___call__, call_slot},
    {0, (sipPySlotType)0}
};


sipTypeDef sipType_BALL_TypeRuleProcessor = {
    0,
    0,
    "BALL.TypeRuleProcessor",
    0,
    {0, 0, 1},
    supers_TypeRuleProcessor,
    slots_TypeRuleProcessor,
    0, 0,
    0, 0,
    0,
    init_TypeRuleProcessor,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_TypeRuleProcessor,
    cast_TypeRuleProcessor,
    release_TypeRuleProcessor,
    forceConvertTo_TypeRuleProcessor,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
