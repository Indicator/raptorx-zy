/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLCustomColorProcessor.h"

#include "sipBALLColorProcessor.h"
#include "sipBALLAtom.h"
#include "sipBALLVector3.h"
#include "sipBALLComposite.h"
#include "sipBALLColorRGBA.h"


sipCustomColorProcessor::sipCustomColorProcessor(): CustomColorProcessor(), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,2);
}

sipCustomColorProcessor::sipCustomColorProcessor(const CustomColorProcessor& a0): CustomColorProcessor(a0), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,2);
}

sipCustomColorProcessor::~sipCustomColorProcessor()
{
    sipCommonDtor(sipPySelf);
}

void sipCustomColorProcessor::clear() throw()
{
    extern void sipVH_BALL_0(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipNm_BALL_clear);

    if (!meth)
    {
        ColorProcessor::clear();
        return;
    }

    sipVH_BALL_0(sipGILState,meth);
}

bool sipCustomColorProcessor::start() throw()
{
    extern bool sipVH_BALL_4(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,NULL,sipNm_BALL_start);

    if (!meth)
        return ColorProcessor::start();

    return sipVH_BALL_4(sipGILState,meth);
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_CustomColorProcessor(void *, sipWrapperType *);}
static void *cast_CustomColorProcessor(void *ptr,sipWrapperType *targetClass)
{
    void *res;

    if (targetClass == sipClass_CustomColorProcessor)
        return ptr;

    if ((res = sipCast_ColorProcessor((ColorProcessor *)(CustomColorProcessor *)ptr,targetClass)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_CustomColorProcessor(void *, int);}
static void release_CustomColorProcessor(void *ptr,int state)
{
    if (state & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipCustomColorProcessor *>(ptr);
    else
        delete reinterpret_cast<CustomColorProcessor *>(ptr);
}


extern "C" {static void dealloc_CustomColorProcessor(sipWrapper *);}
static void dealloc_CustomColorProcessor(sipWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipCustomColorProcessor *>(sipSelf->u.cppPtr)->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_CustomColorProcessor(sipSelf->u.cppPtr,sipSelf->flags);
    }
}


extern "C" {static void *init_CustomColorProcessor(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_CustomColorProcessor(sipWrapper *sipSelf,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    sipCustomColorProcessor *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            try
            {
            sipCpp = new sipCustomColorProcessor();
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
        const CustomColorProcessor * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_CustomColorProcessor,&a0))
        {
            try
            {
            sipCpp = new sipCustomColorProcessor(*a0);
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


extern "C" {static void *forceConvertTo_CustomColorProcessor(PyObject *, int *);}
static void *forceConvertTo_CustomColorProcessor(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_CustomColorProcessor))
        return sipConvertToCpp(valobj,sipClass_CustomColorProcessor,iserrp);

    sipBadClass(sipNm_BALL_CustomColorProcessor);

    *iserrp = 1;

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedClassDef supers_CustomColorProcessor[] = {{15, 255, 1}};


sipTypeDef sipType_BALL_CustomColorProcessor = {
    0,
    0,
    "BALL.CustomColorProcessor",
    0,
    {0, 0, 1},
    supers_CustomColorProcessor,
    0,
    0, 0,
    0, 0,
    0,
    init_CustomColorProcessor,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_CustomColorProcessor,
    cast_CustomColorProcessor,
    release_CustomColorProcessor,
    forceConvertTo_CustomColorProcessor,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
