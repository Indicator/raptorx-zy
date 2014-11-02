/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLFDPBDefault.h"

#include "sipBALLIndex.h"
#include "sipBALLString.h"



/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_FDPB_Default(void *, sipWrapperType *);}
static void *cast_FDPB_Default(void *ptr,sipWrapperType *targetClass)
{
    if (targetClass == sipClass_FDPB_Default)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_FDPB_Default(void *, int);}
static void release_FDPB_Default(void *ptr,int)
{
    delete reinterpret_cast<FDPB::Default *>(ptr);
}


extern "C" {static void dealloc_FDPB_Default(sipWrapper *);}
static void dealloc_FDPB_Default(sipWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_FDPB_Default(sipSelf->u.cppPtr,0);
    }
}


extern "C" {static void *init_FDPB_Default(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_FDPB_Default(sipWrapper *,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    FDPB::Default *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            try
            {
            sipCpp = new FDPB::Default();
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
        const FDPB::Default * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_FDPB_Default,&a0))
        {
            try
            {
            sipCpp = new FDPB::Default(*a0);
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


extern "C" {static void *forceConvertTo_FDPB_Default(PyObject *, int *);}
static void *forceConvertTo_FDPB_Default(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_FDPB_Default))
        return sipConvertToCpp(valobj,sipClass_FDPB_Default,iserrp);

    sipBadClass(sipNm_BALL_Default);

    *iserrp = 1;

    return NULL;
}


/* Define the ints to be added to this type dictionary. */
static sipIntInstanceDef intInstances_FDPB_Default[] = {
    {sipNm_BALL_PRINT_TIMING, FDPB::Default::PRINT_TIMING},
    {sipNm_BALL_VERBOSITY, FDPB::Default::VERBOSITY},
    {0, 0}
};


/* Define the doubles to be added to this type dictionary. */
static sipDoubleInstanceDef doubleInstances_FDPB_Default[] = {
    {sipNm_BALL_MAX_CRITERION, FDPB::Default::MAX_CRITERION},
    {sipNm_BALL_RMS_CRITERION, FDPB::Default::RMS_CRITERION},
    {sipNm_BALL_SOLUTE_DC, FDPB::Default::SOLUTE_DC},
    {sipNm_BALL_SOLVENT_DC, FDPB::Default::SOLVENT_DC},
    {sipNm_BALL_ION_RADIUS, FDPB::Default::ION_RADIUS},
    {sipNm_BALL_PROBE_RADIUS, FDPB::Default::PROBE_RADIUS},
    {sipNm_BALL_TEMPERATURE, FDPB::Default::TEMPERATURE},
    {sipNm_BALL_IONIC_STRENGTH, FDPB::Default::IONIC_STRENGTH},
    {sipNm_BALL_BORDER, FDPB::Default::BORDER},
    {sipNm_BALL_SPACING, FDPB::Default::SPACING},
    {0, 0}
};


sipTypeDef sipType_BALL_FDPB_Default = {
    0,
    0,
    "BALL.FDPB.Default",
    0,
    {77, 255, 0},
    0,
    0,
    0, 0,
    0, 0,
    0,
    init_FDPB_Default,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_FDPB_Default,
    cast_FDPB_Default,
    release_FDPB_Default,
    forceConvertTo_FDPB_Default,
    0,
    0,
    {0, 0, 0, 0, intInstances_FDPB_Default, 0, 0, 0, 0, doubleInstances_FDPB_Default, 0},
    0
};
