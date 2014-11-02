/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLShowDisplayPropertiesMessage.h"

#include "sipBALLMessage.h"



/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_ShowDisplayPropertiesMessage(void *, sipWrapperType *);}
static void *cast_ShowDisplayPropertiesMessage(void *ptr,sipWrapperType *targetClass)
{
    void *res;

    if (targetClass == sipClass_ShowDisplayPropertiesMessage)
        return ptr;

    if ((res = sipCast_Message((Message *)(ShowDisplayPropertiesMessage *)ptr,targetClass)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_ShowDisplayPropertiesMessage(void *, int);}
static void release_ShowDisplayPropertiesMessage(void *ptr,int)
{
    delete reinterpret_cast<ShowDisplayPropertiesMessage *>(ptr);
}


extern "C" {static void dealloc_ShowDisplayPropertiesMessage(sipWrapper *);}
static void dealloc_ShowDisplayPropertiesMessage(sipWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_ShowDisplayPropertiesMessage(sipSelf->u.cppPtr,0);
    }
}


extern "C" {static void *init_ShowDisplayPropertiesMessage(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_ShowDisplayPropertiesMessage(sipWrapper *,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    ShowDisplayPropertiesMessage *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            try
            {
            sipCpp = new ShowDisplayPropertiesMessage();
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
        const ShowDisplayPropertiesMessage * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_ShowDisplayPropertiesMessage,&a0))
        {
            try
            {
            sipCpp = new ShowDisplayPropertiesMessage(*a0);
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


extern "C" {static void *forceConvertTo_ShowDisplayPropertiesMessage(PyObject *, int *);}
static void *forceConvertTo_ShowDisplayPropertiesMessage(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_ShowDisplayPropertiesMessage))
        return sipConvertToCpp(valobj,sipClass_ShowDisplayPropertiesMessage,iserrp);

    sipBadClass(sipNm_BALL_ShowDisplayPropertiesMessage);

    *iserrp = 1;

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedClassDef supers_ShowDisplayPropertiesMessage[] = {{56, 255, 1}};


sipTypeDef sipType_BALL_ShowDisplayPropertiesMessage = {
    0,
    0,
    "BALL.ShowDisplayPropertiesMessage",
    0,
    {0, 0, 1},
    supers_ShowDisplayPropertiesMessage,
    0,
    0, 0,
    0, 0,
    0,
    init_ShowDisplayPropertiesMessage,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_ShowDisplayPropertiesMessage,
    cast_ShowDisplayPropertiesMessage,
    release_ShowDisplayPropertiesMessage,
    forceConvertTo_ShowDisplayPropertiesMessage,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
