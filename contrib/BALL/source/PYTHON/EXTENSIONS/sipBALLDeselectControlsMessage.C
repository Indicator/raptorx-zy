/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLDeselectControlsMessage.h"

#include "sipBALLMessage.h"



/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_DeselectControlsMessage(void *, sipWrapperType *);}
static void *cast_DeselectControlsMessage(void *ptr,sipWrapperType *targetClass)
{
    void *res;

    if (targetClass == sipClass_DeselectControlsMessage)
        return ptr;

    if ((res = sipCast_Message((Message *)(DeselectControlsMessage *)ptr,targetClass)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_DeselectControlsMessage(void *, int);}
static void release_DeselectControlsMessage(void *ptr,int)
{
    delete reinterpret_cast<DeselectControlsMessage *>(ptr);
}


extern "C" {static void dealloc_DeselectControlsMessage(sipWrapper *);}
static void dealloc_DeselectControlsMessage(sipWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_DeselectControlsMessage(sipSelf->u.cppPtr,0);
    }
}


extern "C" {static void *init_DeselectControlsMessage(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_DeselectControlsMessage(sipWrapper *,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    DeselectControlsMessage *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            try
            {
            sipCpp = new DeselectControlsMessage();
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
        const DeselectControlsMessage * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_DeselectControlsMessage,&a0))
        {
            try
            {
            sipCpp = new DeselectControlsMessage(*a0);
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


extern "C" {static void *forceConvertTo_DeselectControlsMessage(PyObject *, int *);}
static void *forceConvertTo_DeselectControlsMessage(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_DeselectControlsMessage))
        return sipConvertToCpp(valobj,sipClass_DeselectControlsMessage,iserrp);

    sipBadClass(sipNm_BALL_DeselectControlsMessage);

    *iserrp = 1;

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedClassDef supers_DeselectControlsMessage[] = {{56, 255, 1}};


sipTypeDef sipType_BALL_DeselectControlsMessage = {
    0,
    0,
    "BALL.DeselectControlsMessage",
    0,
    {0, 0, 1},
    supers_DeselectControlsMessage,
    0,
    0, 0,
    0, 0,
    0,
    init_DeselectControlsMessage,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_DeselectControlsMessage,
    cast_DeselectControlsMessage,
    release_DeselectControlsMessage,
    forceConvertTo_DeselectControlsMessage,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
