/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLChainColorProcessor.h"

#include "sipBALLPositionColorProcessor.h"
#include "sipBALLComposite.h"
#include "sipBALLColorRGBA.h"
#include "sipBALLColorProcessor.h"
#include "sipBALLAtom.h"
#include "sipBALLVector3.h"


sipChainColorProcessor::sipChainColorProcessor(): ChainColorProcessor(), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,3);
}

sipChainColorProcessor::sipChainColorProcessor(const ChainColorProcessor& a0): ChainColorProcessor(a0), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,3);
}

sipChainColorProcessor::~sipChainColorProcessor()
{
    sipCommonDtor(sipPySelf);
}

void sipChainColorProcessor::getColor(const Composite& a0,ColorRGBA& a1)
{
    extern void sipVH_BALL_15(sip_gilstate_t,PyObject *,const Composite&,ColorRGBA&);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipNm_BALL_getColor);

    if (!meth)
    {
        PositionColorProcessor::getColor(a0,a1);
        return;
    }

    sipVH_BALL_15(sipGILState,meth,a0,a1);
}

void sipChainColorProcessor::clear() throw()
{
    extern void sipVH_BALL_0(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,NULL,sipNm_BALL_clear);

    if (!meth)
    {
        ColorProcessor::clear();
        return;
    }

    sipVH_BALL_0(sipGILState,meth);
}

bool sipChainColorProcessor::start() throw()
{
    extern bool sipVH_BALL_4(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[2],sipPySelf,NULL,sipNm_BALL_start);

    if (!meth)
        return PositionColorProcessor::start();

    return sipVH_BALL_4(sipGILState,meth);
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_ChainColorProcessor(void *, sipWrapperType *);}
static void *cast_ChainColorProcessor(void *ptr,sipWrapperType *targetClass)
{
    void *res;

    if (targetClass == sipClass_ChainColorProcessor)
        return ptr;

    if ((res = sipCast_PositionColorProcessor((PositionColorProcessor *)(ChainColorProcessor *)ptr,targetClass)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_ChainColorProcessor(void *, int);}
static void release_ChainColorProcessor(void *ptr,int state)
{
    if (state & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipChainColorProcessor *>(ptr);
    else
        delete reinterpret_cast<ChainColorProcessor *>(ptr);
}


extern "C" {static void dealloc_ChainColorProcessor(sipWrapper *);}
static void dealloc_ChainColorProcessor(sipWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipChainColorProcessor *>(sipSelf->u.cppPtr)->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_ChainColorProcessor(sipSelf->u.cppPtr,sipSelf->flags);
    }
}


extern "C" {static void *init_ChainColorProcessor(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_ChainColorProcessor(sipWrapper *sipSelf,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    sipChainColorProcessor *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            try
            {
            sipCpp = new sipChainColorProcessor();
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
        const ChainColorProcessor * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_ChainColorProcessor,&a0))
        {
            try
            {
            sipCpp = new sipChainColorProcessor(*a0);
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


extern "C" {static void *forceConvertTo_ChainColorProcessor(PyObject *, int *);}
static void *forceConvertTo_ChainColorProcessor(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_ChainColorProcessor))
        return sipConvertToCpp(valobj,sipClass_ChainColorProcessor,iserrp);

    sipBadClass(sipNm_BALL_ChainColorProcessor);

    *iserrp = 1;

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedClassDef supers_ChainColorProcessor[] = {{22, 255, 1}};


sipTypeDef sipType_BALL_ChainColorProcessor = {
    0,
    0,
    "BALL.ChainColorProcessor",
    0,
    {0, 0, 1},
    supers_ChainColorProcessor,
    0,
    0, 0,
    0, 0,
    0,
    init_ChainColorProcessor,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_ChainColorProcessor,
    cast_ChainColorProcessor,
    release_ChainColorProcessor,
    forceConvertTo_ChainColorProcessor,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
