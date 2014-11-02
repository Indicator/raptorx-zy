/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLTooManyBonds.h"

#include "sipBALLGeneralException.h"
#include "sipBALLString.h"



/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_TooManyBonds(void *, sipWrapperType *);}
static void *cast_TooManyBonds(void *ptr,sipWrapperType *targetClass)
{
    void *res;

    if (targetClass == sipClass_TooManyBonds)
        return ptr;

    if ((res = sipCast_GeneralException((GeneralException *)(TooManyBonds *)ptr,targetClass)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_TooManyBonds(void *, int);}
static void release_TooManyBonds(void *ptr,int)
{
    delete reinterpret_cast<TooManyBonds *>(ptr);
}


extern "C" {static void dealloc_TooManyBonds(sipWrapper *);}
static void dealloc_TooManyBonds(sipWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_TooManyBonds(sipSelf->u.cppPtr,0);
    }
}


extern "C" {static void *init_TooManyBonds(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_TooManyBonds(sipWrapper *,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    TooManyBonds *sipCpp = 0;

    if (!sipCpp)
    {
        const char * a0;
        int a1;
        const String * a2;
        int a2State = 0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"siJ1",&a0,&a1,sipClass_String,&a2,&a2State))
        {
            sipCpp = new TooManyBonds(a0,a1,*a2);

            sipReleaseInstance(const_cast<String *>(a2),sipClass_String,a2State);
        }
    }

    if (!sipCpp)
    {
        const TooManyBonds * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_TooManyBonds,&a0))
        {
            try
            {
            sipCpp = new TooManyBonds(*a0);
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


extern "C" {static void *forceConvertTo_TooManyBonds(PyObject *, int *);}
static void *forceConvertTo_TooManyBonds(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_TooManyBonds))
        return sipConvertToCpp(valobj,sipClass_TooManyBonds,iserrp);

    sipBadClass(sipNm_BALL_TooManyBonds);

    *iserrp = 1;

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedClassDef supers_TooManyBonds[] = {{240, 255, 1}};


sipTypeDef sipType_BALL_TooManyBonds = {
    0,
    0,
    "BALL.TooManyBonds",
    0,
    {0, 0, 1},
    supers_TooManyBonds,
    0,
    0, 0,
    0, 0,
    0,
    init_TooManyBonds,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_TooManyBonds,
    cast_TooManyBonds,
    release_TooManyBonds,
    forceConvertTo_TooManyBonds,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
