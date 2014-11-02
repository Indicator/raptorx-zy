/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLstd__openmode.h"


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_std__openmode(void *, sipWrapperType *);}
static void *cast_std__openmode(void *ptr,sipWrapperType *targetClass)
{
    if (targetClass == sipClass_std__openmode)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_std__openmode(void *, int);}
static void release_std__openmode(void *ptr,int)
{
    delete reinterpret_cast<std__openmode *>(ptr);
}


extern "C" {static void dealloc_std__openmode(sipWrapper *);}
static void dealloc_std__openmode(sipWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_std__openmode(sipSelf->u.cppPtr,0);
    }
}


extern "C" {static void *init_std__openmode(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_std__openmode(sipWrapper *,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    std__openmode *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            try
            {
            sipCpp = new std__openmode();
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
        const std__openmode * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_std__openmode,&a0))
        {
            try
            {
            sipCpp = new std__openmode(*a0);
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


extern "C" {static void *forceConvertTo_std__openmode(PyObject *, int *);}
static void *forceConvertTo_std__openmode(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_std__openmode))
        return sipConvertToCpp(valobj,sipClass_std__openmode,iserrp);

    sipBadClass(sipNm_BALL_std__openmode);

    *iserrp = 1;

    return NULL;
}


sipTypeDef sipType_BALL_std__openmode = {
    0,
    0,
    "BALL.std__openmode",
    0,
    {0, 0, 1},
    0,
    0,
    0, 0,
    0, 0,
    0,
    init_std__openmode,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_std__openmode,
    cast_std__openmode,
    release_std__openmode,
    forceConvertTo_std__openmode,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
