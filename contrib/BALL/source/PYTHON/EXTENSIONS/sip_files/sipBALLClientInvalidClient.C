/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLClientInvalidClient.h"

#include "sipBALLGeneralException.h"



/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_Client_InvalidClient(void *, sipWrapperType *);}
static void *cast_Client_InvalidClient(void *ptr,sipWrapperType *targetClass)
{
    void *res;

    if (targetClass == sipClass_Client_InvalidClient)
        return ptr;

    if ((res = sipCast_GeneralException((GeneralException *)(Client::InvalidClient *)ptr,targetClass)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_Client_InvalidClient(void *, int);}
static void release_Client_InvalidClient(void *ptr,int)
{
    delete reinterpret_cast<Client::InvalidClient *>(ptr);
}


extern "C" {static void dealloc_Client_InvalidClient(sipWrapper *);}
static void dealloc_Client_InvalidClient(sipWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_Client_InvalidClient(sipSelf->u.cppPtr,0);
    }
}


extern "C" {static void *init_Client_InvalidClient(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_Client_InvalidClient(sipWrapper *,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    Client::InvalidClient *sipCpp = 0;

    if (!sipCpp)
    {
        const char * a0;
        int a1;

        if (sipParseArgs(sipArgsParsed,sipArgs,"si",&a0,&a1))
        {
            sipCpp = new Client::InvalidClient(a0,a1);
        }
    }

    if (!sipCpp)
    {
        const Client::InvalidClient * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_Client_InvalidClient,&a0))
        {
            try
            {
            sipCpp = new Client::InvalidClient(*a0);
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


extern "C" {static void *forceConvertTo_Client_InvalidClient(PyObject *, int *);}
static void *forceConvertTo_Client_InvalidClient(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_Client_InvalidClient))
        return sipConvertToCpp(valobj,sipClass_Client_InvalidClient,iserrp);

    sipBadClass(sipNm_BALL_InvalidClient);

    *iserrp = 1;

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedClassDef supers_Client_InvalidClient[] = {{240, 255, 1}};


sipTypeDef sipType_BALL_Client_InvalidClient = {
    0,
    0,
    "BALL.Client.InvalidClient",
    0,
    {244, 255, 0},
    supers_Client_InvalidClient,
    0,
    0, 0,
    0, 0,
    0,
    init_Client_InvalidClient,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_Client_InvalidClient,
    cast_Client_InvalidClient,
    release_Client_InvalidClient,
    forceConvertTo_Client_InvalidClient,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
