/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLGenericSelectionMessage.h"

#include "sipBALLMessage.h"
#include "sipBALLGenericSelectionMessage.h"
#include "sipBALLPyCompositeList.h"



extern "C" {static PyObject *meth_GenericSelectionMessage_setSelection(PyObject *, PyObject *);}
static PyObject *meth_GenericSelectionMessage_setSelection(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const PyCompositeList * a0;
        int a0State = 0;
        GenericSelectionMessage *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BM1",&sipSelf,sipClass_GenericSelectionMessage,&sipCpp,sipMappedType_PyCompositeList,&a0,&a0State))
        {
            sipCpp->setSelection(*a0);

            sipReleaseMappedType(const_cast<PyCompositeList *>(a0),sipMappedType_PyCompositeList,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_GenericSelectionMessage,sipNm_BALL_setSelection);

    return NULL;
}


extern "C" {static PyObject *meth_GenericSelectionMessage_getSelection(PyObject *, PyObject *);}
static PyObject *meth_GenericSelectionMessage_getSelection(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        GenericSelectionMessage *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_GenericSelectionMessage,&sipCpp))
        {
            PyCompositeList *sipRes;

            sipRes = new PyCompositeList(sipCpp->getSelection());

            PyObject *sipResObj = sipConvertFromMappedType(sipRes,sipMappedType_PyCompositeList,NULL);
            delete sipRes;

            return sipResObj;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_GenericSelectionMessage,sipNm_BALL_getSelection);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_GenericSelectionMessage(void *, sipWrapperType *);}
static void *cast_GenericSelectionMessage(void *ptr,sipWrapperType *targetClass)
{
    void *res;

    if (targetClass == sipClass_GenericSelectionMessage)
        return ptr;

    if ((res = sipCast_Message((Message *)(GenericSelectionMessage *)ptr,targetClass)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_GenericSelectionMessage(void *, int);}
static void release_GenericSelectionMessage(void *ptr,int)
{
    delete reinterpret_cast<GenericSelectionMessage *>(ptr);
}


extern "C" {static void dealloc_GenericSelectionMessage(sipWrapper *);}
static void dealloc_GenericSelectionMessage(sipWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_GenericSelectionMessage(sipSelf->u.cppPtr,0);
    }
}


extern "C" {static void *init_GenericSelectionMessage(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_GenericSelectionMessage(sipWrapper *,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    GenericSelectionMessage *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            sipCpp = new GenericSelectionMessage();
        }
    }

    if (!sipCpp)
    {
        const GenericSelectionMessage * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_GenericSelectionMessage,&a0))
        {
            sipCpp = new GenericSelectionMessage(*a0);
        }
    }

    return sipCpp;
}


extern "C" {static void *forceConvertTo_GenericSelectionMessage(PyObject *, int *);}
static void *forceConvertTo_GenericSelectionMessage(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_GenericSelectionMessage))
        return sipConvertToCpp(valobj,sipClass_GenericSelectionMessage,iserrp);

    sipBadClass(sipNm_BALL_GenericSelectionMessage);

    *iserrp = 1;

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedClassDef supers_GenericSelectionMessage[] = {{56, 255, 1}};


static PyMethodDef methods_GenericSelectionMessage[] = {
    {sipNm_BALL_getSelection, meth_GenericSelectionMessage_getSelection, METH_VARARGS, NULL},
    {sipNm_BALL_setSelection, meth_GenericSelectionMessage_setSelection, METH_VARARGS, NULL}
};


sipTypeDef sipType_BALL_GenericSelectionMessage = {
    0,
    0,
    "BALL.GenericSelectionMessage",
    0,
    {0, 0, 1},
    supers_GenericSelectionMessage,
    0,
    2, methods_GenericSelectionMessage,
    0, 0,
    0,
    init_GenericSelectionMessage,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_GenericSelectionMessage,
    cast_GenericSelectionMessage,
    release_GenericSelectionMessage,
    forceConvertTo_GenericSelectionMessage,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
