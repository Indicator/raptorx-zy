/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLFDPBBoundary.h"

#include "sipBALLString.h"



/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_FDPB_Boundary(void *, sipWrapperType *);}
static void *cast_FDPB_Boundary(void *ptr,sipWrapperType *targetClass)
{
    if (targetClass == sipClass_FDPB_Boundary)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_FDPB_Boundary(void *, int);}
static void release_FDPB_Boundary(void *ptr,int)
{
    delete reinterpret_cast<FDPB::Boundary *>(ptr);
}


extern "C" {static void dealloc_FDPB_Boundary(sipWrapper *);}
static void dealloc_FDPB_Boundary(sipWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_FDPB_Boundary(sipSelf->u.cppPtr,0);
    }
}


extern "C" {static void *init_FDPB_Boundary(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_FDPB_Boundary(sipWrapper *,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    FDPB::Boundary *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            try
            {
            sipCpp = new FDPB::Boundary();
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
        const FDPB::Boundary * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_FDPB_Boundary,&a0))
        {
            try
            {
            sipCpp = new FDPB::Boundary(*a0);
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


extern "C" {static void *forceConvertTo_FDPB_Boundary(PyObject *, int *);}
static void *forceConvertTo_FDPB_Boundary(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_FDPB_Boundary))
        return sipConvertToCpp(valobj,sipClass_FDPB_Boundary,iserrp);

    sipBadClass(sipNm_BALL_Boundary);

    *iserrp = 1;

    return NULL;
}


sipTypeDef sipType_BALL_FDPB_Boundary = {
    0,
    0,
    "BALL.FDPB.Boundary",
    0,
    {77, 255, 0},
    0,
    0,
    0, 0,
    0, 0,
    0,
    init_FDPB_Boundary,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_FDPB_Boundary,
    cast_FDPB_Boundary,
    release_FDPB_Boundary,
    forceConvertTo_FDPB_Boundary,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
