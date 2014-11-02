/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLIllegalKey.h"

#include "sipBALLGeneralException.h"



/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_IllegalKey(void *, sipWrapperType *);}
static void *cast_IllegalKey(void *ptr,sipWrapperType *targetClass)
{
    void *res;

    if (targetClass == sipClass_IllegalKey)
        return ptr;

    if ((res = sipCast_GeneralException((GeneralException *)(IllegalKey *)ptr,targetClass)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_IllegalKey(void *, int);}
static void release_IllegalKey(void *ptr,int)
{
    delete reinterpret_cast<IllegalKey *>(ptr);
}


extern "C" {static void dealloc_IllegalKey(sipWrapper *);}
static void dealloc_IllegalKey(sipWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_IllegalKey(sipSelf->u.cppPtr,0);
    }
}


extern "C" {static void *init_IllegalKey(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_IllegalKey(sipWrapper *,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    IllegalKey *sipCpp = 0;

    if (!sipCpp)
    {
        const char * a0;
        int a1;

        if (sipParseArgs(sipArgsParsed,sipArgs,"si",&a0,&a1))
        {
            try
            {
            sipCpp = new IllegalKey(a0,a1);
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
        const IllegalKey * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_IllegalKey,&a0))
        {
            try
            {
            sipCpp = new IllegalKey(*a0);
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


extern "C" {static void *forceConvertTo_IllegalKey(PyObject *, int *);}
static void *forceConvertTo_IllegalKey(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_IllegalKey))
        return sipConvertToCpp(valobj,sipClass_IllegalKey,iserrp);

    sipBadClass(sipNm_BALL_IllegalKey);

    *iserrp = 1;

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedClassDef supers_IllegalKey[] = {{240, 255, 1}};


sipTypeDef sipType_BALL_IllegalKey = {
    0,
    0,
    "BALL.IllegalKey",
    0,
    {0, 0, 1},
    supers_IllegalKey,
    0,
    0, 0,
    0, 0,
    0,
    init_IllegalKey,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_IllegalKey,
    cast_IllegalKey,
    release_IllegalKey,
    forceConvertTo_IllegalKey,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
