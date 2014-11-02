/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLPersistentObject.h"


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_PersistentObject(void *, sipWrapperType *);}
static void *cast_PersistentObject(void *ptr,sipWrapperType *targetClass)
{
    if (targetClass == sipClass_PersistentObject)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_PersistentObject(void *, int);}
static void release_PersistentObject(void *ptr,int)
{
    delete reinterpret_cast<PersistentObject *>(ptr);
}


extern "C" {static void dealloc_PersistentObject(sipWrapper *);}
static void dealloc_PersistentObject(sipWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_PersistentObject(sipSelf->u.cppPtr,0);
    }
}


extern "C" {static void *init_PersistentObject(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_PersistentObject(sipWrapper *,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    PersistentObject *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            try
            {
            sipCpp = new PersistentObject();
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
        const PersistentObject * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_PersistentObject,&a0))
        {
            try
            {
            sipCpp = new PersistentObject(*a0);
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


extern "C" {static void *forceConvertTo_PersistentObject(PyObject *, int *);}
static void *forceConvertTo_PersistentObject(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_PersistentObject))
        return sipConvertToCpp(valobj,sipClass_PersistentObject,iserrp);

    sipBadClass(sipNm_BALL_PersistentObject);

    *iserrp = 1;

    return NULL;
}


sipTypeDef sipType_BALL_PersistentObject = {
    0,
    0,
    "BALL.PersistentObject",
    0,
    {0, 0, 1},
    0,
    0,
    0, 0,
    0, 0,
    0,
    init_PersistentObject,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_PersistentObject,
    cast_PersistentObject,
    release_PersistentObject,
    forceConvertTo_PersistentObject,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
