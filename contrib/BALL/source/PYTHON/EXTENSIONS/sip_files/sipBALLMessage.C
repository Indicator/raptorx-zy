/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLMessage.h"


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_Message(void *, sipWrapperType *);}
static void *cast_Message(void *ptr,sipWrapperType *targetClass)
{
    if (targetClass == sipClass_Message)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_Message(void *, int);}
static void release_Message(void *ptr,int)
{
    delete reinterpret_cast<Message *>(ptr);
}


extern "C" {static void dealloc_Message(sipWrapper *);}
static void dealloc_Message(sipWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_Message(sipSelf->u.cppPtr,0);
    }
}


extern "C" {static void *init_Message(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_Message(sipWrapper *,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    Message *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            sipCpp = new Message();
        }
    }

    if (!sipCpp)
    {
        const Message * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_Message,&a0))
        {
            sipCpp = new Message(*a0);
        }
    }

    return sipCpp;
}


extern "C" {static void *forceConvertTo_Message(PyObject *, int *);}
static void *forceConvertTo_Message(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_Message))
        return sipConvertToCpp(valobj,sipClass_Message,iserrp);

    sipBadClass(sipNm_BALL_Message);

    *iserrp = 1;

    return NULL;
}


sipTypeDef sipType_BALL_Message = {
    0,
    0,
    "BALL.Message",
    0,
    {0, 0, 1},
    0,
    0,
    0, 0,
    0, 0,
    0,
    init_Message,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_Message,
    cast_Message,
    release_Message,
    forceConvertTo_Message,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
