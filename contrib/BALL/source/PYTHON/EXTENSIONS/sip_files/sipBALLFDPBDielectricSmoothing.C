/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLFDPBDielectricSmoothing.h"

#include "sipBALLString.h"



/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_FDPB_DielectricSmoothing(void *, sipWrapperType *);}
static void *cast_FDPB_DielectricSmoothing(void *ptr,sipWrapperType *targetClass)
{
    if (targetClass == sipClass_FDPB_DielectricSmoothing)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_FDPB_DielectricSmoothing(void *, int);}
static void release_FDPB_DielectricSmoothing(void *ptr,int)
{
    delete reinterpret_cast<FDPB::DielectricSmoothing *>(ptr);
}


extern "C" {static void dealloc_FDPB_DielectricSmoothing(sipWrapper *);}
static void dealloc_FDPB_DielectricSmoothing(sipWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_FDPB_DielectricSmoothing(sipSelf->u.cppPtr,0);
    }
}


extern "C" {static void *init_FDPB_DielectricSmoothing(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_FDPB_DielectricSmoothing(sipWrapper *,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    FDPB::DielectricSmoothing *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            try
            {
            sipCpp = new FDPB::DielectricSmoothing();
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
        const FDPB::DielectricSmoothing * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_FDPB_DielectricSmoothing,&a0))
        {
            try
            {
            sipCpp = new FDPB::DielectricSmoothing(*a0);
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


extern "C" {static void *forceConvertTo_FDPB_DielectricSmoothing(PyObject *, int *);}
static void *forceConvertTo_FDPB_DielectricSmoothing(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_FDPB_DielectricSmoothing))
        return sipConvertToCpp(valobj,sipClass_FDPB_DielectricSmoothing,iserrp);

    sipBadClass(sipNm_BALL_DielectricSmoothing);

    *iserrp = 1;

    return NULL;
}


sipTypeDef sipType_BALL_FDPB_DielectricSmoothing = {
    0,
    0,
    "BALL.FDPB.DielectricSmoothing",
    0,
    {77, 255, 0},
    0,
    0,
    0, 0,
    0, 0,
    0,
    init_FDPB_DielectricSmoothing,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_FDPB_DielectricSmoothing,
    cast_FDPB_DielectricSmoothing,
    release_FDPB_DielectricSmoothing,
    forceConvertTo_FDPB_DielectricSmoothing,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
