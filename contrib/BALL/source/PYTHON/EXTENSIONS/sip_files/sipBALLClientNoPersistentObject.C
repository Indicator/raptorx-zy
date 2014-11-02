/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLClientNoPersistentObject.h"

#include "sipBALLGeneralException.h"



/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_Client_NoPersistentObject(void *, sipWrapperType *);}
static void *cast_Client_NoPersistentObject(void *ptr,sipWrapperType *targetClass)
{
    void *res;

    if (targetClass == sipClass_Client_NoPersistentObject)
        return ptr;

    if ((res = sipCast_GeneralException((GeneralException *)(Client::NoPersistentObject *)ptr,targetClass)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_Client_NoPersistentObject(void *, int);}
static void release_Client_NoPersistentObject(void *ptr,int)
{
    delete reinterpret_cast<Client::NoPersistentObject *>(ptr);
}


extern "C" {static void dealloc_Client_NoPersistentObject(sipWrapper *);}
static void dealloc_Client_NoPersistentObject(sipWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_Client_NoPersistentObject(sipSelf->u.cppPtr,0);
    }
}


extern "C" {static void *init_Client_NoPersistentObject(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_Client_NoPersistentObject(sipWrapper *,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    Client::NoPersistentObject *sipCpp = 0;

    if (!sipCpp)
    {
        const char * a0;
        int a1;

        if (sipParseArgs(sipArgsParsed,sipArgs,"si",&a0,&a1))
        {
            sipCpp = new Client::NoPersistentObject(a0,a1);
        }
    }

    if (!sipCpp)
    {
        const Client::NoPersistentObject * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_Client_NoPersistentObject,&a0))
        {
            try
            {
            sipCpp = new Client::NoPersistentObject(*a0);
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


extern "C" {static void *forceConvertTo_Client_NoPersistentObject(PyObject *, int *);}
static void *forceConvertTo_Client_NoPersistentObject(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_Client_NoPersistentObject))
        return sipConvertToCpp(valobj,sipClass_Client_NoPersistentObject,iserrp);

    sipBadClass(sipNm_BALL_NoPersistentObject);

    *iserrp = 1;

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedClassDef supers_Client_NoPersistentObject[] = {{240, 255, 1}};


sipTypeDef sipType_BALL_Client_NoPersistentObject = {
    0,
    0,
    "BALL.Client.NoPersistentObject",
    0,
    {244, 255, 0},
    supers_Client_NoPersistentObject,
    0,
    0, 0,
    0, 0,
    0,
    init_Client_NoPersistentObject,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_Client_NoPersistentObject,
    cast_Client_NoPersistentObject,
    release_Client_NoPersistentObject,
    forceConvertTo_Client_NoPersistentObject,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
