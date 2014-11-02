/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLOccupancyColorProcessor.h"

#include "sipBALLColorProcessor.h"
#include "sipBALLOccupancyColorProcessor.h"
#include "sipBALLComposite.h"
#include "sipBALLColorRGBA.h"
#include "sipBALLAtom.h"
#include "sipBALLVector3.h"


sipOccupancyColorProcessor::sipOccupancyColorProcessor(): OccupancyColorProcessor(), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,3);
}

sipOccupancyColorProcessor::sipOccupancyColorProcessor(const OccupancyColorProcessor& a0): OccupancyColorProcessor(a0), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,3);
}

sipOccupancyColorProcessor::~sipOccupancyColorProcessor()
{
    sipCommonDtor(sipPySelf);
}

void sipOccupancyColorProcessor::getColor(const Composite& a0,ColorRGBA& a1)
{
    extern void sipVH_BALL_15(sip_gilstate_t,PyObject *,const Composite&,ColorRGBA&);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipNm_BALL_getColor);

    if (!meth)
    {
        OccupancyColorProcessor::getColor(a0,a1);
        return;
    }

    sipVH_BALL_15(sipGILState,meth,a0,a1);
}

void sipOccupancyColorProcessor::clear() throw()
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

bool sipOccupancyColorProcessor::start() throw()
{
    extern bool sipVH_BALL_4(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[2],sipPySelf,NULL,sipNm_BALL_start);

    if (!meth)
        return ColorProcessor::start();

    return sipVH_BALL_4(sipGILState,meth);
}


extern "C" {static PyObject *meth_OccupancyColorProcessor_getColor(PyObject *, PyObject *);}
static PyObject *meth_OccupancyColorProcessor_getColor(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        const Composite * a0;
        ColorRGBA * a1;
        OccupancyColorProcessor *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJAJA",&sipSelf,sipClass_OccupancyColorProcessor,&sipCpp,sipClass_Composite,&a0,sipClass_ColorRGBA,&a1))
        {
            try
            {
            (sipSelfWasArg ? sipCpp->OccupancyColorProcessor::getColor(*a0,*a1) : sipCpp->getColor(*a0,*a1));
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_OccupancyColorProcessor,sipNm_BALL_getColor);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_OccupancyColorProcessor(void *, sipWrapperType *);}
static void *cast_OccupancyColorProcessor(void *ptr,sipWrapperType *targetClass)
{
    void *res;

    if (targetClass == sipClass_OccupancyColorProcessor)
        return ptr;

    if ((res = sipCast_ColorProcessor((ColorProcessor *)(OccupancyColorProcessor *)ptr,targetClass)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_OccupancyColorProcessor(void *, int);}
static void release_OccupancyColorProcessor(void *ptr,int state)
{
    if (state & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipOccupancyColorProcessor *>(ptr);
    else
        delete reinterpret_cast<OccupancyColorProcessor *>(ptr);
}


extern "C" {static void dealloc_OccupancyColorProcessor(sipWrapper *);}
static void dealloc_OccupancyColorProcessor(sipWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipOccupancyColorProcessor *>(sipSelf->u.cppPtr)->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_OccupancyColorProcessor(sipSelf->u.cppPtr,sipSelf->flags);
    }
}


extern "C" {static void *init_OccupancyColorProcessor(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_OccupancyColorProcessor(sipWrapper *sipSelf,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    sipOccupancyColorProcessor *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            try
            {
            sipCpp = new sipOccupancyColorProcessor();
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
        const OccupancyColorProcessor * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_OccupancyColorProcessor,&a0))
        {
            try
            {
            sipCpp = new sipOccupancyColorProcessor(*a0);
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


extern "C" {static void *forceConvertTo_OccupancyColorProcessor(PyObject *, int *);}
static void *forceConvertTo_OccupancyColorProcessor(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_OccupancyColorProcessor))
        return sipConvertToCpp(valobj,sipClass_OccupancyColorProcessor,iserrp);

    sipBadClass(sipNm_BALL_OccupancyColorProcessor);

    *iserrp = 1;

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedClassDef supers_OccupancyColorProcessor[] = {{15, 255, 1}};


static PyMethodDef methods_OccupancyColorProcessor[] = {
    {sipNm_BALL_getColor, meth_OccupancyColorProcessor_getColor, METH_VARARGS, NULL}
};


sipTypeDef sipType_BALL_OccupancyColorProcessor = {
    0,
    0,
    "BALL.OccupancyColorProcessor",
    0,
    {0, 0, 1},
    supers_OccupancyColorProcessor,
    0,
    1, methods_OccupancyColorProcessor,
    0, 0,
    0,
    init_OccupancyColorProcessor,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_OccupancyColorProcessor,
    cast_OccupancyColorProcessor,
    release_OccupancyColorProcessor,
    forceConvertTo_OccupancyColorProcessor,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
