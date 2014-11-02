/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLMoleculeColorProcessor.h"

#include "sipBALLPositionColorProcessor.h"
#include "sipBALLComposite.h"
#include "sipBALLColorRGBA.h"
#include "sipBALLColorProcessor.h"
#include "sipBALLAtom.h"
#include "sipBALLVector3.h"


sipMoleculeColorProcessor::sipMoleculeColorProcessor(): MoleculeColorProcessor(), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,3);
}

sipMoleculeColorProcessor::sipMoleculeColorProcessor(const MoleculeColorProcessor& a0): MoleculeColorProcessor(a0), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,3);
}

sipMoleculeColorProcessor::~sipMoleculeColorProcessor()
{
    sipCommonDtor(sipPySelf);
}

void sipMoleculeColorProcessor::getColor(const Composite& a0,ColorRGBA& a1)
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

void sipMoleculeColorProcessor::clear() throw()
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

bool sipMoleculeColorProcessor::start() throw()
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
extern "C" {static void *cast_MoleculeColorProcessor(void *, sipWrapperType *);}
static void *cast_MoleculeColorProcessor(void *ptr,sipWrapperType *targetClass)
{
    void *res;

    if (targetClass == sipClass_MoleculeColorProcessor)
        return ptr;

    if ((res = sipCast_PositionColorProcessor((PositionColorProcessor *)(MoleculeColorProcessor *)ptr,targetClass)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_MoleculeColorProcessor(void *, int);}
static void release_MoleculeColorProcessor(void *ptr,int state)
{
    if (state & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipMoleculeColorProcessor *>(ptr);
    else
        delete reinterpret_cast<MoleculeColorProcessor *>(ptr);
}


extern "C" {static void dealloc_MoleculeColorProcessor(sipWrapper *);}
static void dealloc_MoleculeColorProcessor(sipWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipMoleculeColorProcessor *>(sipSelf->u.cppPtr)->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_MoleculeColorProcessor(sipSelf->u.cppPtr,sipSelf->flags);
    }
}


extern "C" {static void *init_MoleculeColorProcessor(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_MoleculeColorProcessor(sipWrapper *sipSelf,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    sipMoleculeColorProcessor *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            try
            {
            sipCpp = new sipMoleculeColorProcessor();
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
        const MoleculeColorProcessor * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_MoleculeColorProcessor,&a0))
        {
            try
            {
            sipCpp = new sipMoleculeColorProcessor(*a0);
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


extern "C" {static void *forceConvertTo_MoleculeColorProcessor(PyObject *, int *);}
static void *forceConvertTo_MoleculeColorProcessor(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_MoleculeColorProcessor))
        return sipConvertToCpp(valobj,sipClass_MoleculeColorProcessor,iserrp);

    sipBadClass(sipNm_BALL_MoleculeColorProcessor);

    *iserrp = 1;

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedClassDef supers_MoleculeColorProcessor[] = {{22, 255, 1}};


sipTypeDef sipType_BALL_MoleculeColorProcessor = {
    0,
    0,
    "BALL.MoleculeColorProcessor",
    0,
    {0, 0, 1},
    supers_MoleculeColorProcessor,
    0,
    0, 0,
    0, 0,
    0,
    init_MoleculeColorProcessor,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_MoleculeColorProcessor,
    cast_MoleculeColorProcessor,
    release_MoleculeColorProcessor,
    forceConvertTo_MoleculeColorProcessor,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
