/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLGeometricObjectSelectionMessage.h"

#include "sipBALLMessage.h"
#include "sipBALLGeometricObjectSelectionMessage.h"
#include "sipBALLGeometricObjectList.h"



extern "C" {static PyObject *meth_GeometricObjectSelectionMessage_setSelection(PyObject *, PyObject *);}
static PyObject *meth_GeometricObjectSelectionMessage_setSelection(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const GeometricObjectList * a0;
        int a0State = 0;
        GeometricObjectSelectionMessage *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BM1",&sipSelf,sipClass_GeometricObjectSelectionMessage,&sipCpp,sipMappedType_GeometricObjectList,&a0,&a0State))
        {
            sipCpp->setSelection(*a0);

            sipReleaseMappedType(const_cast<GeometricObjectList *>(a0),sipMappedType_GeometricObjectList,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_GeometricObjectSelectionMessage,sipNm_BALL_setSelection);

    return NULL;
}


extern "C" {static PyObject *meth_GeometricObjectSelectionMessage_getSelection(PyObject *, PyObject *);}
static PyObject *meth_GeometricObjectSelectionMessage_getSelection(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        GeometricObjectSelectionMessage *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_GeometricObjectSelectionMessage,&sipCpp))
        {
            const GeometricObjectList *sipRes;

            sipRes = &sipCpp->getSelection();

            PyObject *sipResObj = sipConvertFromMappedType(const_cast<GeometricObjectList *>(sipRes),sipMappedType_GeometricObjectList,NULL);

            return sipResObj;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_GeometricObjectSelectionMessage,sipNm_BALL_getSelection);

    return NULL;
}


extern "C" {static PyObject *meth_GeometricObjectSelectionMessage_setSelected(PyObject *, PyObject *);}
static PyObject *meth_GeometricObjectSelectionMessage_setSelected(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        bool a0;
        GeometricObjectSelectionMessage *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bb",&sipSelf,sipClass_GeometricObjectSelectionMessage,&sipCpp,&a0))
        {
            sipCpp->setSelected(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_GeometricObjectSelectionMessage,sipNm_BALL_setSelected);

    return NULL;
}


extern "C" {static PyObject *meth_GeometricObjectSelectionMessage_isSelected(PyObject *, PyObject *);}
static PyObject *meth_GeometricObjectSelectionMessage_isSelected(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        GeometricObjectSelectionMessage *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_GeometricObjectSelectionMessage,&sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isSelected();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_GeometricObjectSelectionMessage,sipNm_BALL_isSelected);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_GeometricObjectSelectionMessage(void *, sipWrapperType *);}
static void *cast_GeometricObjectSelectionMessage(void *ptr,sipWrapperType *targetClass)
{
    void *res;

    if (targetClass == sipClass_GeometricObjectSelectionMessage)
        return ptr;

    if ((res = sipCast_Message((Message *)(GeometricObjectSelectionMessage *)ptr,targetClass)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_GeometricObjectSelectionMessage(void *, int);}
static void release_GeometricObjectSelectionMessage(void *ptr,int)
{
    delete reinterpret_cast<GeometricObjectSelectionMessage *>(ptr);
}


extern "C" {static void dealloc_GeometricObjectSelectionMessage(sipWrapper *);}
static void dealloc_GeometricObjectSelectionMessage(sipWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_GeometricObjectSelectionMessage(sipSelf->u.cppPtr,0);
    }
}


extern "C" {static void *init_GeometricObjectSelectionMessage(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_GeometricObjectSelectionMessage(sipWrapper *,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    GeometricObjectSelectionMessage *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            sipCpp = new GeometricObjectSelectionMessage();
        }
    }

    if (!sipCpp)
    {
        const GeometricObjectSelectionMessage * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_GeometricObjectSelectionMessage,&a0))
        {
            try
            {
            sipCpp = new GeometricObjectSelectionMessage(*a0);
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


extern "C" {static void *forceConvertTo_GeometricObjectSelectionMessage(PyObject *, int *);}
static void *forceConvertTo_GeometricObjectSelectionMessage(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_GeometricObjectSelectionMessage))
        return sipConvertToCpp(valobj,sipClass_GeometricObjectSelectionMessage,iserrp);

    sipBadClass(sipNm_BALL_GeometricObjectSelectionMessage);

    *iserrp = 1;

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedClassDef supers_GeometricObjectSelectionMessage[] = {{56, 255, 1}};


static PyMethodDef methods_GeometricObjectSelectionMessage[] = {
    {sipNm_BALL_getSelection, meth_GeometricObjectSelectionMessage_getSelection, METH_VARARGS, NULL},
    {sipNm_BALL_isSelected, meth_GeometricObjectSelectionMessage_isSelected, METH_VARARGS, NULL},
    {sipNm_BALL_setSelected, meth_GeometricObjectSelectionMessage_setSelected, METH_VARARGS, NULL},
    {sipNm_BALL_setSelection, meth_GeometricObjectSelectionMessage_setSelection, METH_VARARGS, NULL}
};


sipTypeDef sipType_BALL_GeometricObjectSelectionMessage = {
    0,
    0,
    "BALL.GeometricObjectSelectionMessage",
    0,
    {0, 0, 1},
    supers_GeometricObjectSelectionMessage,
    0,
    4, methods_GeometricObjectSelectionMessage,
    0, 0,
    0,
    init_GeometricObjectSelectionMessage,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_GeometricObjectSelectionMessage,
    cast_GeometricObjectSelectionMessage,
    release_GeometricObjectSelectionMessage,
    forceConvertTo_GeometricObjectSelectionMessage,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
