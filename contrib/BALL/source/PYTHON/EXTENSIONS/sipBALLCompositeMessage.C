/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLCompositeMessage.h"

#include "sipBALLMessage.h"
#include "sipBALLComposite.h"
#include "sipBALLCompositeMessage.h"
#include "sipBALLString.h"



extern "C" {static PyObject *meth_CompositeMessage_setComposite(PyObject *, PyObject *);}
static PyObject *meth_CompositeMessage_setComposite(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const Composite * a0;
        CompositeMessage *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_CompositeMessage,&sipCpp,sipClass_Composite,&a0))
        {
            sipCpp->setComposite(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_CompositeMessage,sipNm_BALL_setComposite);

    return NULL;
}


extern "C" {static PyObject *meth_CompositeMessage_getComposite(PyObject *, PyObject *);}
static PyObject *meth_CompositeMessage_getComposite(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        CompositeMessage *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_CompositeMessage,&sipCpp))
        {
            Composite *sipRes;

            sipRes = sipCpp->getComposite();

            return sipConvertFromInstance(sipRes,sipClass_Composite,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_CompositeMessage,sipNm_BALL_getComposite);

    return NULL;
}


extern "C" {static PyObject *meth_CompositeMessage_setCompositeName(PyObject *, PyObject *);}
static PyObject *meth_CompositeMessage_setCompositeName(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const String * a0;
        int a0State = 0;
        CompositeMessage *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ1",&sipSelf,sipClass_CompositeMessage,&sipCpp,sipClass_String,&a0,&a0State))
        {
            sipCpp->setCompositeName(*a0);

            sipReleaseInstance(const_cast<String *>(a0),sipClass_String,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_CompositeMessage,sipNm_BALL_setCompositeName);

    return NULL;
}


extern "C" {static PyObject *meth_CompositeMessage_getCompositeName(PyObject *, PyObject *);}
static PyObject *meth_CompositeMessage_getCompositeName(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        CompositeMessage *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_CompositeMessage,&sipCpp))
        {
            const String *sipRes;

            sipRes = &sipCpp->getCompositeName();

            return sipConvertFromInstance(const_cast<String *>(sipRes),sipClass_String,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_CompositeMessage,sipNm_BALL_getCompositeName);

    return NULL;
}


extern "C" {static PyObject *meth_CompositeMessage_setType(PyObject *, PyObject *);}
static PyObject *meth_CompositeMessage_setType(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        CompositeMessage::CompositeMessageType a0;
        CompositeMessage *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BE",&sipSelf,sipClass_CompositeMessage,&sipCpp,sipEnum_CompositeMessage_CompositeMessageType,&a0))
        {
            sipCpp->setType(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_CompositeMessage,sipNm_BALL_setType);

    return NULL;
}


extern "C" {static PyObject *meth_CompositeMessage_getType(PyObject *, PyObject *);}
static PyObject *meth_CompositeMessage_getType(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        CompositeMessage *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_CompositeMessage,&sipCpp))
        {
            CompositeMessage::CompositeMessageType sipRes;

            sipRes = sipCpp->getType();

            return sipConvertFromNamedEnum(sipRes,sipEnum_CompositeMessage_CompositeMessageType);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_CompositeMessage,sipNm_BALL_getType);

    return NULL;
}


extern "C" {static PyObject *meth_CompositeMessage_setUpdateRepresentations(PyObject *, PyObject *);}
static PyObject *meth_CompositeMessage_setUpdateRepresentations(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        bool a0;
        CompositeMessage *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bb",&sipSelf,sipClass_CompositeMessage,&sipCpp,&a0))
        {
            sipCpp->setUpdateRepresentations(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_CompositeMessage,sipNm_BALL_setUpdateRepresentations);

    return NULL;
}


extern "C" {static PyObject *meth_CompositeMessage_updateRepresentations(PyObject *, PyObject *);}
static PyObject *meth_CompositeMessage_updateRepresentations(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        CompositeMessage *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_CompositeMessage,&sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->updateRepresentations();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_CompositeMessage,sipNm_BALL_updateRepresentations);

    return NULL;
}


extern "C" {static PyObject *meth_CompositeMessage_setShowSelectionInfos(PyObject *, PyObject *);}
static PyObject *meth_CompositeMessage_setShowSelectionInfos(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        bool a0;
        CompositeMessage *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bb",&sipSelf,sipClass_CompositeMessage,&sipCpp,&a0))
        {
            sipCpp->setShowSelectionInfos(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_CompositeMessage,sipNm_BALL_setShowSelectionInfos);

    return NULL;
}


extern "C" {static PyObject *meth_CompositeMessage_showSelectionInfos(PyObject *, PyObject *);}
static PyObject *meth_CompositeMessage_showSelectionInfos(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        CompositeMessage *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_CompositeMessage,&sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->showSelectionInfos();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_CompositeMessage,sipNm_BALL_showSelectionInfos);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_CompositeMessage(void *, sipWrapperType *);}
static void *cast_CompositeMessage(void *ptr,sipWrapperType *targetClass)
{
    void *res;

    if (targetClass == sipClass_CompositeMessage)
        return ptr;

    if ((res = sipCast_Message((Message *)(CompositeMessage *)ptr,targetClass)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_CompositeMessage(void *, int);}
static void release_CompositeMessage(void *ptr,int)
{
    delete reinterpret_cast<CompositeMessage *>(ptr);
}


extern "C" {static void dealloc_CompositeMessage(sipWrapper *);}
static void dealloc_CompositeMessage(sipWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_CompositeMessage(sipSelf->u.cppPtr,0);
    }
}


extern "C" {static void *init_CompositeMessage(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_CompositeMessage(sipWrapper *,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    CompositeMessage *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            sipCpp = new CompositeMessage();
        }
    }

    if (!sipCpp)
    {
        const Composite * a0;
        CompositeMessage::CompositeMessageType a1;
        bool a2 = 1;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JAE|b",sipClass_Composite,&a0,sipEnum_CompositeMessage_CompositeMessageType,&a1,&a2))
        {
            sipCpp = new CompositeMessage(*a0,a1,a2);
        }
    }

    if (!sipCpp)
    {
        const CompositeMessage * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_CompositeMessage,&a0))
        {
            sipCpp = new CompositeMessage(*a0);
        }
    }

    return sipCpp;
}


extern "C" {static void *forceConvertTo_CompositeMessage(PyObject *, int *);}
static void *forceConvertTo_CompositeMessage(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_CompositeMessage))
        return sipConvertToCpp(valobj,sipClass_CompositeMessage,iserrp);

    sipBadClass(sipNm_BALL_CompositeMessage);

    *iserrp = 1;

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedClassDef supers_CompositeMessage[] = {{56, 255, 1}};


static PyMethodDef methods_CompositeMessage[] = {
    {sipNm_BALL_getComposite, meth_CompositeMessage_getComposite, METH_VARARGS, NULL},
    {sipNm_BALL_getCompositeName, meth_CompositeMessage_getCompositeName, METH_VARARGS, NULL},
    {sipNm_BALL_getType, meth_CompositeMessage_getType, METH_VARARGS, NULL},
    {sipNm_BALL_setComposite, meth_CompositeMessage_setComposite, METH_VARARGS, NULL},
    {sipNm_BALL_setCompositeName, meth_CompositeMessage_setCompositeName, METH_VARARGS, NULL},
    {sipNm_BALL_setShowSelectionInfos, meth_CompositeMessage_setShowSelectionInfos, METH_VARARGS, NULL},
    {sipNm_BALL_setType, meth_CompositeMessage_setType, METH_VARARGS, NULL},
    {sipNm_BALL_setUpdateRepresentations, meth_CompositeMessage_setUpdateRepresentations, METH_VARARGS, NULL},
    {sipNm_BALL_showSelectionInfos, meth_CompositeMessage_showSelectionInfos, METH_VARARGS, NULL},
    {sipNm_BALL_updateRepresentations, meth_CompositeMessage_updateRepresentations, METH_VARARGS, NULL}
};

static sipEnumMemberDef enummembers_CompositeMessage[] = {
    {sipNm_BALL_CENTER_CAMERA, CompositeMessage::CENTER_CAMERA, 12},
    {sipNm_BALL_CHANGED_COMPOSITE, CompositeMessage::CHANGED_COMPOSITE, 12},
    {sipNm_BALL_CHANGED_COMPOSITE_HIERARCHY, CompositeMessage::CHANGED_COMPOSITE_HIERARCHY, 12},
    {sipNm_BALL_DESELECTED_COMPOSITE, CompositeMessage::DESELECTED_COMPOSITE, 12},
    {sipNm_BALL_NEW_COMPOSITE, CompositeMessage::NEW_COMPOSITE, 12},
    {sipNm_BALL_NEW_MOLECULE, CompositeMessage::NEW_MOLECULE, 12},
    {sipNm_BALL_REMOVED_COMPOSITE, CompositeMessage::REMOVED_COMPOSITE, 12},
    {sipNm_BALL_SELECTED_COMPOSITE, CompositeMessage::SELECTED_COMPOSITE, 12},
    {sipNm_BALL_UNDEFINED, CompositeMessage::UNDEFINED, 12},
};


sipTypeDef sipType_BALL_CompositeMessage = {
    0,
    0,
    "BALL.CompositeMessage",
    0,
    {0, 0, 1},
    supers_CompositeMessage,
    0,
    10, methods_CompositeMessage,
    9, enummembers_CompositeMessage,
    0,
    init_CompositeMessage,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_CompositeMessage,
    cast_CompositeMessage,
    release_CompositeMessage,
    forceConvertTo_CompositeMessage,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
