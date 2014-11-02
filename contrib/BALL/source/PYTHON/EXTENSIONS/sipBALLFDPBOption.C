/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLFDPBOption.h"

#include "sipBALLString.h"



/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_FDPB_Option(void *, sipWrapperType *);}
static void *cast_FDPB_Option(void *ptr,sipWrapperType *targetClass)
{
    if (targetClass == sipClass_FDPB_Option)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_FDPB_Option(void *, int);}
static void release_FDPB_Option(void *ptr,int)
{
    delete reinterpret_cast<FDPB::Option *>(ptr);
}


extern "C" {static void dealloc_FDPB_Option(sipWrapper *);}
static void dealloc_FDPB_Option(sipWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_FDPB_Option(sipSelf->u.cppPtr,0);
    }
}


extern "C" {static void *init_FDPB_Option(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_FDPB_Option(sipWrapper *,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    FDPB::Option *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            try
            {
            sipCpp = new FDPB::Option();
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
        const FDPB::Option * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_FDPB_Option,&a0))
        {
            try
            {
            sipCpp = new FDPB::Option(*a0);
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


extern "C" {static void *forceConvertTo_FDPB_Option(PyObject *, int *);}
static void *forceConvertTo_FDPB_Option(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_FDPB_Option))
        return sipConvertToCpp(valobj,sipClass_FDPB_Option,iserrp);

    sipBadClass(sipNm_BALL_Option);

    *iserrp = 1;

    return NULL;
}


sipTypeDef sipType_BALL_FDPB_Option = {
    0,
    0,
    "BALL.FDPB.Option",
    0,
    {77, 255, 0},
    0,
    0,
    0, 0,
    0, 0,
    0,
    init_FDPB_Option,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_FDPB_Option,
    cast_FDPB_Option,
    release_FDPB_Option,
    forceConvertTo_FDPB_Option,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
