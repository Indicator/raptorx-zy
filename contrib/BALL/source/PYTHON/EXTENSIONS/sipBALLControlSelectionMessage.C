/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLControlSelectionMessage.h"

#include "sipBALLGenericSelectionMessage.h"
#include "sipBALLPyCompositeList.h"



/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_ControlSelectionMessage(void *, sipWrapperType *);}
static void *cast_ControlSelectionMessage(void *ptr,sipWrapperType *targetClass)
{
    void *res;

    if (targetClass == sipClass_ControlSelectionMessage)
        return ptr;

    if ((res = sipCast_GenericSelectionMessage((GenericSelectionMessage *)(ControlSelectionMessage *)ptr,targetClass)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_ControlSelectionMessage(void *, int);}
static void release_ControlSelectionMessage(void *ptr,int)
{
    delete reinterpret_cast<ControlSelectionMessage *>(ptr);
}


extern "C" {static void dealloc_ControlSelectionMessage(sipWrapper *);}
static void dealloc_ControlSelectionMessage(sipWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_ControlSelectionMessage(sipSelf->u.cppPtr,0);
    }
}


extern "C" {static void *init_ControlSelectionMessage(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_ControlSelectionMessage(sipWrapper *,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    ControlSelectionMessage *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            sipCpp = new ControlSelectionMessage();
        }
    }

    if (!sipCpp)
    {
        const ControlSelectionMessage * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_ControlSelectionMessage,&a0))
        {
            try
            {
            sipCpp = new ControlSelectionMessage(*a0);
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


extern "C" {static void *forceConvertTo_ControlSelectionMessage(PyObject *, int *);}
static void *forceConvertTo_ControlSelectionMessage(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_ControlSelectionMessage))
        return sipConvertToCpp(valobj,sipClass_ControlSelectionMessage,iserrp);

    sipBadClass(sipNm_BALL_ControlSelectionMessage);

    *iserrp = 1;

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedClassDef supers_ControlSelectionMessage[] = {{64, 255, 1}};


sipTypeDef sipType_BALL_ControlSelectionMessage = {
    0,
    0,
    "BALL.ControlSelectionMessage",
    0,
    {0, 0, 1},
    supers_ControlSelectionMessage,
    0,
    0, 0,
    0, 0,
    0,
    init_ControlSelectionMessage,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_ControlSelectionMessage,
    cast_ControlSelectionMessage,
    release_ControlSelectionMessage,
    forceConvertTo_ControlSelectionMessage,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
