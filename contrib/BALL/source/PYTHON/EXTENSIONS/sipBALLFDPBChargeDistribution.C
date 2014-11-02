/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLFDPBChargeDistribution.h"

#include "sipBALLString.h"



/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_FDPB_ChargeDistribution(void *, sipWrapperType *);}
static void *cast_FDPB_ChargeDistribution(void *ptr,sipWrapperType *targetClass)
{
    if (targetClass == sipClass_FDPB_ChargeDistribution)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_FDPB_ChargeDistribution(void *, int);}
static void release_FDPB_ChargeDistribution(void *ptr,int)
{
    delete reinterpret_cast<FDPB::ChargeDistribution *>(ptr);
}


extern "C" {static void dealloc_FDPB_ChargeDistribution(sipWrapper *);}
static void dealloc_FDPB_ChargeDistribution(sipWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_FDPB_ChargeDistribution(sipSelf->u.cppPtr,0);
    }
}


extern "C" {static void *init_FDPB_ChargeDistribution(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_FDPB_ChargeDistribution(sipWrapper *,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    FDPB::ChargeDistribution *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            try
            {
            sipCpp = new FDPB::ChargeDistribution();
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
        const FDPB::ChargeDistribution * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_FDPB_ChargeDistribution,&a0))
        {
            try
            {
            sipCpp = new FDPB::ChargeDistribution(*a0);
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


extern "C" {static void *forceConvertTo_FDPB_ChargeDistribution(PyObject *, int *);}
static void *forceConvertTo_FDPB_ChargeDistribution(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_FDPB_ChargeDistribution))
        return sipConvertToCpp(valobj,sipClass_FDPB_ChargeDistribution,iserrp);

    sipBadClass(sipNm_BALL_ChargeDistribution);

    *iserrp = 1;

    return NULL;
}


sipTypeDef sipType_BALL_FDPB_ChargeDistribution = {
    0,
    0,
    "BALL.FDPB.ChargeDistribution",
    0,
    {77, 255, 0},
    0,
    0,
    0, 0,
    0, 0,
    0,
    init_FDPB_ChargeDistribution,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_FDPB_ChargeDistribution,
    cast_FDPB_ChargeDistribution,
    release_FDPB_ChargeDistribution,
    forceConvertTo_FDPB_ChargeDistribution,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
