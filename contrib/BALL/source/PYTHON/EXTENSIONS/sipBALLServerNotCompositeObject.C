/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLServerNotCompositeObject.h"

#include "sipBALLGeneralException.h"



/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_Server_NotCompositeObject(void *, sipWrapperType *);}
static void *cast_Server_NotCompositeObject(void *ptr,sipWrapperType *targetClass)
{
    void *res;

    if (targetClass == sipClass_Server_NotCompositeObject)
        return ptr;

    if ((res = sipCast_GeneralException((GeneralException *)(Server::NotCompositeObject *)ptr,targetClass)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_Server_NotCompositeObject(void *, int);}
static void release_Server_NotCompositeObject(void *ptr,int)
{
    delete reinterpret_cast<Server::NotCompositeObject *>(ptr);
}


extern "C" {static void dealloc_Server_NotCompositeObject(sipWrapper *);}
static void dealloc_Server_NotCompositeObject(sipWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_Server_NotCompositeObject(sipSelf->u.cppPtr,0);
    }
}


extern "C" {static void *init_Server_NotCompositeObject(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_Server_NotCompositeObject(sipWrapper *,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    Server::NotCompositeObject *sipCpp = 0;

    if (!sipCpp)
    {
        const char * a0;
        int a1;

        if (sipParseArgs(sipArgsParsed,sipArgs,"si",&a0,&a1))
        {
            sipCpp = new Server::NotCompositeObject(a0,a1);
        }
    }

    if (!sipCpp)
    {
        const Server::NotCompositeObject * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_Server_NotCompositeObject,&a0))
        {
            try
            {
            sipCpp = new Server::NotCompositeObject(*a0);
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


extern "C" {static void *forceConvertTo_Server_NotCompositeObject(PyObject *, int *);}
static void *forceConvertTo_Server_NotCompositeObject(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_Server_NotCompositeObject))
        return sipConvertToCpp(valobj,sipClass_Server_NotCompositeObject,iserrp);

    sipBadClass(sipNm_BALL_NotCompositeObject);

    *iserrp = 1;

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedClassDef supers_Server_NotCompositeObject[] = {{240, 255, 1}};


sipTypeDef sipType_BALL_Server_NotCompositeObject = {
    0,
    0,
    "BALL.Server.NotCompositeObject",
    0,
    {241, 255, 0},
    supers_Server_NotCompositeObject,
    0,
    0, 0,
    0, 0,
    0,
    init_Server_NotCompositeObject,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_Server_NotCompositeObject,
    cast_Server_NotCompositeObject,
    release_Server_NotCompositeObject,
    forceConvertTo_Server_NotCompositeObject,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
