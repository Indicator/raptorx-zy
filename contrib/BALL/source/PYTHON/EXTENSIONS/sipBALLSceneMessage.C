/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLSceneMessage.h"

#include "sipBALLMessage.h"
#include "sipBALLSceneMessage.h"
#include "sipBALLStage.h"



extern "C" {static PyObject *meth_SceneMessage_setType(PyObject *, PyObject *);}
static PyObject *meth_SceneMessage_setType(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        SceneMessage::SceneMessageType a0;
        SceneMessage *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BE",&sipSelf,sipClass_SceneMessage,&sipCpp,sipEnum_SceneMessage_SceneMessageType,&a0))
        {
            sipCpp->setType(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_SceneMessage,sipNm_BALL_setType);

    return NULL;
}


extern "C" {static PyObject *meth_SceneMessage_getType(PyObject *, PyObject *);}
static PyObject *meth_SceneMessage_getType(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        SceneMessage *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_SceneMessage,&sipCpp))
        {
            SceneMessage::SceneMessageType sipRes;

            sipRes = sipCpp->getType();

            return sipConvertFromNamedEnum(sipRes,sipEnum_SceneMessage_SceneMessageType);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_SceneMessage,sipNm_BALL_getType);

    return NULL;
}


extern "C" {static PyObject *meth_SceneMessage_setStage(PyObject *, PyObject *);}
static PyObject *meth_SceneMessage_setStage(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Stage * a0;
        SceneMessage *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_SceneMessage,&sipCpp,sipClass_Stage,&a0))
        {
            sipCpp->setStage(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_SceneMessage,sipNm_BALL_setStage);

    return NULL;
}


extern "C" {static PyObject *meth_SceneMessage_getStage(PyObject *, PyObject *);}
static PyObject *meth_SceneMessage_getStage(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        SceneMessage *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_SceneMessage,&sipCpp))
        {
            Stage *sipRes;

            sipRes = &sipCpp->getStage();

            return sipConvertFromInstance(sipRes,sipClass_Stage,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_SceneMessage,sipNm_BALL_getStage);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_SceneMessage(void *, sipWrapperType *);}
static void *cast_SceneMessage(void *ptr,sipWrapperType *targetClass)
{
    void *res;

    if (targetClass == sipClass_SceneMessage)
        return ptr;

    if ((res = sipCast_Message((Message *)(SceneMessage *)ptr,targetClass)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_SceneMessage(void *, int);}
static void release_SceneMessage(void *ptr,int)
{
    delete reinterpret_cast<SceneMessage *>(ptr);
}


extern "C" {static void dealloc_SceneMessage(sipWrapper *);}
static void dealloc_SceneMessage(sipWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_SceneMessage(sipSelf->u.cppPtr,0);
    }
}


extern "C" {static void *init_SceneMessage(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_SceneMessage(sipWrapper *,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    SceneMessage *sipCpp = 0;

    if (!sipCpp)
    {
        SceneMessage::SceneMessageType a0 = SceneMessage::UNDEFINED;

        if (sipParseArgs(sipArgsParsed,sipArgs,"|E",sipEnum_SceneMessage_SceneMessageType,&a0))
        {
            sipCpp = new SceneMessage(a0);
        }
    }

    if (!sipCpp)
    {
        const SceneMessage * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_SceneMessage,&a0))
        {
            sipCpp = new SceneMessage(*a0);
        }
    }

    return sipCpp;
}


extern "C" {static void *forceConvertTo_SceneMessage(PyObject *, int *);}
static void *forceConvertTo_SceneMessage(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_SceneMessage))
        return sipConvertToCpp(valobj,sipClass_SceneMessage,iserrp);

    sipBadClass(sipNm_BALL_SceneMessage);

    *iserrp = 1;

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedClassDef supers_SceneMessage[] = {{56, 255, 1}};


static PyMethodDef methods_SceneMessage[] = {
    {sipNm_BALL_getStage, meth_SceneMessage_getStage, METH_VARARGS, NULL},
    {sipNm_BALL_getType, meth_SceneMessage_getType, METH_VARARGS, NULL},
    {sipNm_BALL_setStage, meth_SceneMessage_setStage, METH_VARARGS, NULL},
    {sipNm_BALL_setType, meth_SceneMessage_setType, METH_VARARGS, NULL}
};

static sipEnumMemberDef enummembers_SceneMessage[] = {
    {sipNm_BALL_ENTER_MOVE_MODE, SceneMessage::ENTER_MOVE_MODE, 11},
    {sipNm_BALL_ENTER_PICKING_MODE, SceneMessage::ENTER_PICKING_MODE, 11},
    {sipNm_BALL_ENTER_ROTATE_MODE, SceneMessage::ENTER_ROTATE_MODE, 11},
    {sipNm_BALL_EXPORT_PNG, SceneMessage::EXPORT_PNG, 11},
    {sipNm_BALL_EXPORT_POVRAY, SceneMessage::EXPORT_POVRAY, 11},
    {sipNm_BALL_REBUILD_DISPLAY_LISTS, SceneMessage::REBUILD_DISPLAY_LISTS, 11},
    {sipNm_BALL_REDRAW, SceneMessage::REDRAW, 11},
    {sipNm_BALL_REMOVE_COORDINATE_SYSTEM, SceneMessage::REMOVE_COORDINATE_SYSTEM, 11},
    {sipNm_BALL_UNDEFINED, SceneMessage::UNDEFINED, 11},
    {sipNm_BALL_UPDATE_CAMERA, SceneMessage::UPDATE_CAMERA, 11},
};


sipTypeDef sipType_BALL_SceneMessage = {
    0,
    0,
    "BALL.SceneMessage",
    0,
    {0, 0, 1},
    supers_SceneMessage,
    0,
    4, methods_SceneMessage,
    10, enummembers_SceneMessage,
    0,
    init_SceneMessage,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_SceneMessage,
    cast_SceneMessage,
    release_SceneMessage,
    forceConvertTo_SceneMessage,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
