/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLCreateRepresentationMessage.h"

#include "sipBALLMessage.h"
#include "sipBALLPyCompositeList.h"
#include "sipBALLCreateRepresentationMessage.h"



extern "C" {static PyObject *meth_CreateRepresentationMessage_getModelType(PyObject *, PyObject *);}
static PyObject *meth_CreateRepresentationMessage_getModelType(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        CreateRepresentationMessage *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_CreateRepresentationMessage,&sipCpp))
        {
            ModelType sipRes;

            sipRes = sipCpp->getModelType();

            return sipConvertFromNamedEnum(sipRes,sipEnum_ModelType);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_CreateRepresentationMessage,sipNm_BALL_getModelType);

    return NULL;
}


extern "C" {static PyObject *meth_CreateRepresentationMessage_getColoringMethod(PyObject *, PyObject *);}
static PyObject *meth_CreateRepresentationMessage_getColoringMethod(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        CreateRepresentationMessage *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_CreateRepresentationMessage,&sipCpp))
        {
            ColoringMethod sipRes;

            sipRes = sipCpp->getColoringMethod();

            return sipConvertFromNamedEnum(sipRes,sipEnum_ColoringMethod);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_CreateRepresentationMessage,sipNm_BALL_getColoringMethod);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_CreateRepresentationMessage(void *, sipWrapperType *);}
static void *cast_CreateRepresentationMessage(void *ptr,sipWrapperType *targetClass)
{
    void *res;

    if (targetClass == sipClass_CreateRepresentationMessage)
        return ptr;

    if ((res = sipCast_Message((Message *)(CreateRepresentationMessage *)ptr,targetClass)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_CreateRepresentationMessage(void *, int);}
static void release_CreateRepresentationMessage(void *ptr,int)
{
    delete reinterpret_cast<CreateRepresentationMessage *>(ptr);
}


extern "C" {static void dealloc_CreateRepresentationMessage(sipWrapper *);}
static void dealloc_CreateRepresentationMessage(sipWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_CreateRepresentationMessage(sipSelf->u.cppPtr,0);
    }
}


extern "C" {static void *init_CreateRepresentationMessage(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_CreateRepresentationMessage(sipWrapper *,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    CreateRepresentationMessage *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            sipCpp = new CreateRepresentationMessage();
        }
    }

    if (!sipCpp)
    {
        const PyCompositeList * a0;
        int a0State = 0;
        ModelType a1;
        ColoringMethod a2;

        if (sipParseArgs(sipArgsParsed,sipArgs,"M1EE",sipMappedType_PyCompositeList,&a0,&a0State,sipEnum_ModelType,&a1,sipEnum_ColoringMethod,&a2))
        {
            sipCpp = new CreateRepresentationMessage(*a0,a1,a2);

            sipReleaseMappedType(const_cast<PyCompositeList *>(a0),sipMappedType_PyCompositeList,a0State);
        }
    }

    if (!sipCpp)
    {
        const CreateRepresentationMessage * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_CreateRepresentationMessage,&a0))
        {
            try
            {
            sipCpp = new CreateRepresentationMessage(*a0);
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


extern "C" {static void *forceConvertTo_CreateRepresentationMessage(PyObject *, int *);}
static void *forceConvertTo_CreateRepresentationMessage(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_CreateRepresentationMessage))
        return sipConvertToCpp(valobj,sipClass_CreateRepresentationMessage,iserrp);

    sipBadClass(sipNm_BALL_CreateRepresentationMessage);

    *iserrp = 1;

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedClassDef supers_CreateRepresentationMessage[] = {{56, 255, 1}};


static PyMethodDef methods_CreateRepresentationMessage[] = {
    {sipNm_BALL_getColoringMethod, meth_CreateRepresentationMessage_getColoringMethod, METH_VARARGS, NULL},
    {sipNm_BALL_getModelType, meth_CreateRepresentationMessage_getModelType, METH_VARARGS, NULL}
};


sipTypeDef sipType_BALL_CreateRepresentationMessage = {
    0,
    0,
    "BALL.CreateRepresentationMessage",
    0,
    {0, 0, 1},
    supers_CreateRepresentationMessage,
    0,
    2, methods_CreateRepresentationMessage,
    0, 0,
    0,
    init_CreateRepresentationMessage,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_CreateRepresentationMessage,
    cast_CreateRepresentationMessage,
    release_CreateRepresentationMessage,
    forceConvertTo_CreateRepresentationMessage,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
