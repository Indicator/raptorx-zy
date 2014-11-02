/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLRepresentationMessage.h"

#include "sipBALLMessage.h"
#include "sipBALLRepresentation.h"
#include "sipBALLRepresentationMessage.h"



extern "C" {static PyObject *meth_RepresentationMessage_setRepresentation(PyObject *, PyObject *);}
static PyObject *meth_RepresentationMessage_setRepresentation(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Representation * a0;
        RepresentationMessage *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_RepresentationMessage,&sipCpp,sipClass_Representation,&a0))
        {
            sipCpp->setRepresentation(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_RepresentationMessage,sipNm_BALL_setRepresentation);

    return NULL;
}


extern "C" {static PyObject *meth_RepresentationMessage_getRepresentation(PyObject *, PyObject *);}
static PyObject *meth_RepresentationMessage_getRepresentation(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        RepresentationMessage *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_RepresentationMessage,&sipCpp))
        {
            Representation *sipRes;

            sipRes = sipCpp->getRepresentation();

            return sipConvertFromInstance(sipRes,sipClass_Representation,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_RepresentationMessage,sipNm_BALL_getRepresentation);

    return NULL;
}


extern "C" {static PyObject *meth_RepresentationMessage_setType(PyObject *, PyObject *);}
static PyObject *meth_RepresentationMessage_setType(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        RepresentationMessage::RepresentationMessageType a0;
        RepresentationMessage *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BE",&sipSelf,sipClass_RepresentationMessage,&sipCpp,sipEnum_RepresentationMessage_RepresentationMessageType,&a0))
        {
            sipCpp->setType(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_RepresentationMessage,sipNm_BALL_setType);

    return NULL;
}


extern "C" {static PyObject *meth_RepresentationMessage_getType(PyObject *, PyObject *);}
static PyObject *meth_RepresentationMessage_getType(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        RepresentationMessage *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_RepresentationMessage,&sipCpp))
        {
            RepresentationMessage::RepresentationMessageType sipRes;

            sipRes = sipCpp->getType();

            return sipConvertFromNamedEnum(sipRes,sipEnum_RepresentationMessage_RepresentationMessageType);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_RepresentationMessage,sipNm_BALL_getType);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_RepresentationMessage(void *, sipWrapperType *);}
static void *cast_RepresentationMessage(void *ptr,sipWrapperType *targetClass)
{
    void *res;

    if (targetClass == sipClass_RepresentationMessage)
        return ptr;

    if ((res = sipCast_Message((Message *)(RepresentationMessage *)ptr,targetClass)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_RepresentationMessage(void *, int);}
static void release_RepresentationMessage(void *ptr,int)
{
    delete reinterpret_cast<RepresentationMessage *>(ptr);
}


extern "C" {static void dealloc_RepresentationMessage(sipWrapper *);}
static void dealloc_RepresentationMessage(sipWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_RepresentationMessage(sipSelf->u.cppPtr,0);
    }
}


extern "C" {static void *init_RepresentationMessage(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_RepresentationMessage(sipWrapper *,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    RepresentationMessage *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            sipCpp = new RepresentationMessage();
        }
    }

    if (!sipCpp)
    {
        Representation * a0;
        RepresentationMessage::RepresentationMessageType a1;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JAE",sipClass_Representation,&a0,sipEnum_RepresentationMessage_RepresentationMessageType,&a1))
        {
            sipCpp = new RepresentationMessage(*a0,a1);
        }
    }

    if (!sipCpp)
    {
        const RepresentationMessage * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_RepresentationMessage,&a0))
        {
            try
            {
            sipCpp = new RepresentationMessage(*a0);
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


extern "C" {static void *forceConvertTo_RepresentationMessage(PyObject *, int *);}
static void *forceConvertTo_RepresentationMessage(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_RepresentationMessage))
        return sipConvertToCpp(valobj,sipClass_RepresentationMessage,iserrp);

    sipBadClass(sipNm_BALL_RepresentationMessage);

    *iserrp = 1;

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedClassDef supers_RepresentationMessage[] = {{56, 255, 1}};


static PyMethodDef methods_RepresentationMessage[] = {
    {sipNm_BALL_getRepresentation, meth_RepresentationMessage_getRepresentation, METH_VARARGS, NULL},
    {sipNm_BALL_getType, meth_RepresentationMessage_getType, METH_VARARGS, NULL},
    {sipNm_BALL_setRepresentation, meth_RepresentationMessage_setRepresentation, METH_VARARGS, NULL},
    {sipNm_BALL_setType, meth_RepresentationMessage_setType, METH_VARARGS, NULL}
};

static sipEnumMemberDef enummembers_RepresentationMessage[] = {
    {sipNm_BALL_ADD, RepresentationMessage::ADD, 10},
    {sipNm_BALL_ADD_TO_GEOMETRIC_CONTROL, RepresentationMessage::ADD_TO_GEOMETRIC_CONTROL, 10},
    {sipNm_BALL_FINISHED_UPDATE, RepresentationMessage::FINISHED_UPDATE, 10},
    {sipNm_BALL_REMOVE, RepresentationMessage::REMOVE, 10},
    {sipNm_BALL_SELECTED, RepresentationMessage::SELECTED, 10},
    {sipNm_BALL_STARTED_UPDATE, RepresentationMessage::STARTED_UPDATE, 10},
    {sipNm_BALL_UNDEFINED, RepresentationMessage::UNDEFINED, 10},
    {sipNm_BALL_UPDATE, RepresentationMessage::UPDATE, 10},
};


sipTypeDef sipType_BALL_RepresentationMessage = {
    0,
    0,
    "BALL.RepresentationMessage",
    0,
    {0, 0, 1},
    supers_RepresentationMessage,
    0,
    4, methods_RepresentationMessage,
    8, enummembers_RepresentationMessage,
    0,
    init_RepresentationMessage,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_RepresentationMessage,
    cast_RepresentationMessage,
    release_RepresentationMessage,
    forceConvertTo_RepresentationMessage,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
