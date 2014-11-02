/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLNewSelectionMessage.h"

#include "sipBALLMessage.h"
#include "sipBALLNewSelectionMessage.h"



extern "C" {static PyObject *meth_NewSelectionMessage_openItems(PyObject *, PyObject *);}
static PyObject *meth_NewSelectionMessage_openItems(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        NewSelectionMessage *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_NewSelectionMessage,&sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->openItems();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_NewSelectionMessage,sipNm_BALL_openItems);

    return NULL;
}


extern "C" {static PyObject *meth_NewSelectionMessage_setOpenItems(PyObject *, PyObject *);}
static PyObject *meth_NewSelectionMessage_setOpenItems(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        bool a0;
        NewSelectionMessage *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bb",&sipSelf,sipClass_NewSelectionMessage,&sipCpp,&a0))
        {
            sipCpp->setOpenItems(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_NewSelectionMessage,sipNm_BALL_setOpenItems);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_NewSelectionMessage(void *, sipWrapperType *);}
static void *cast_NewSelectionMessage(void *ptr,sipWrapperType *targetClass)
{
    void *res;

    if (targetClass == sipClass_NewSelectionMessage)
        return ptr;

    if ((res = sipCast_Message((Message *)(NewSelectionMessage *)ptr,targetClass)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_NewSelectionMessage(void *, int);}
static void release_NewSelectionMessage(void *ptr,int)
{
    delete reinterpret_cast<NewSelectionMessage *>(ptr);
}


extern "C" {static void dealloc_NewSelectionMessage(sipWrapper *);}
static void dealloc_NewSelectionMessage(sipWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_NewSelectionMessage(sipSelf->u.cppPtr,0);
    }
}


extern "C" {static void *init_NewSelectionMessage(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_NewSelectionMessage(sipWrapper *,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    NewSelectionMessage *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            sipCpp = new NewSelectionMessage();
        }
    }

    if (!sipCpp)
    {
        const NewSelectionMessage * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_NewSelectionMessage,&a0))
        {
            try
            {
            sipCpp = new NewSelectionMessage(*a0);
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


extern "C" {static void *forceConvertTo_NewSelectionMessage(PyObject *, int *);}
static void *forceConvertTo_NewSelectionMessage(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_NewSelectionMessage))
        return sipConvertToCpp(valobj,sipClass_NewSelectionMessage,iserrp);

    sipBadClass(sipNm_BALL_NewSelectionMessage);

    *iserrp = 1;

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedClassDef supers_NewSelectionMessage[] = {{56, 255, 1}};


static PyMethodDef methods_NewSelectionMessage[] = {
    {sipNm_BALL_openItems, meth_NewSelectionMessage_openItems, METH_VARARGS, NULL},
    {sipNm_BALL_setOpenItems, meth_NewSelectionMessage_setOpenItems, METH_VARARGS, NULL}
};


sipTypeDef sipType_BALL_NewSelectionMessage = {
    0,
    0,
    "BALL.NewSelectionMessage",
    0,
    {0, 0, 1},
    supers_NewSelectionMessage,
    0,
    2, methods_NewSelectionMessage,
    0, 0,
    0,
    init_NewSelectionMessage,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_NewSelectionMessage,
    cast_NewSelectionMessage,
    release_NewSelectionMessage,
    forceConvertTo_NewSelectionMessage,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
