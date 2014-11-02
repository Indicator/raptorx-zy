/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLMolecularTaskMessage.h"

#include "sipBALLMessage.h"
#include "sipBALLMolecularTaskMessage.h"



extern "C" {static PyObject *meth_MolecularTaskMessage_setType(PyObject *, PyObject *);}
static PyObject *meth_MolecularTaskMessage_setType(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        MolecularTaskMessage::MolecularTaskMessageType a0;
        MolecularTaskMessage *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BE",&sipSelf,sipClass_MolecularTaskMessage,&sipCpp,sipEnum_MolecularTaskMessage_MolecularTaskMessageType,&a0))
        {
            sipCpp->setType(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_MolecularTaskMessage,sipNm_BALL_setType);

    return NULL;
}


extern "C" {static PyObject *meth_MolecularTaskMessage_getType(PyObject *, PyObject *);}
static PyObject *meth_MolecularTaskMessage_getType(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        MolecularTaskMessage *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_MolecularTaskMessage,&sipCpp))
        {
            MolecularTaskMessage::MolecularTaskMessageType sipRes;

            sipRes = sipCpp->getType();

            return sipConvertFromNamedEnum(sipRes,sipEnum_MolecularTaskMessage_MolecularTaskMessageType);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_MolecularTaskMessage,sipNm_BALL_getType);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_MolecularTaskMessage(void *, sipWrapperType *);}
static void *cast_MolecularTaskMessage(void *ptr,sipWrapperType *targetClass)
{
    void *res;

    if (targetClass == sipClass_MolecularTaskMessage)
        return ptr;

    if ((res = sipCast_Message((Message *)(MolecularTaskMessage *)ptr,targetClass)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_MolecularTaskMessage(void *, int);}
static void release_MolecularTaskMessage(void *ptr,int)
{
    delete reinterpret_cast<MolecularTaskMessage *>(ptr);
}


extern "C" {static void dealloc_MolecularTaskMessage(sipWrapper *);}
static void dealloc_MolecularTaskMessage(sipWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_MolecularTaskMessage(sipSelf->u.cppPtr,0);
    }
}


extern "C" {static void *init_MolecularTaskMessage(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_MolecularTaskMessage(sipWrapper *,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    MolecularTaskMessage *sipCpp = 0;

    if (!sipCpp)
    {
        MolecularTaskMessage::MolecularTaskMessageType a0 = MolecularTaskMessage::UNDEFINED;

        if (sipParseArgs(sipArgsParsed,sipArgs,"|E",sipEnum_MolecularTaskMessage_MolecularTaskMessageType,&a0))
        {
            sipCpp = new MolecularTaskMessage(a0);
        }
    }

    if (!sipCpp)
    {
        const MolecularTaskMessage * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_MolecularTaskMessage,&a0))
        {
            try
            {
            sipCpp = new MolecularTaskMessage(*a0);
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


extern "C" {static void *forceConvertTo_MolecularTaskMessage(PyObject *, int *);}
static void *forceConvertTo_MolecularTaskMessage(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_MolecularTaskMessage))
        return sipConvertToCpp(valobj,sipClass_MolecularTaskMessage,iserrp);

    sipBadClass(sipNm_BALL_MolecularTaskMessage);

    *iserrp = 1;

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedClassDef supers_MolecularTaskMessage[] = {{56, 255, 1}};


static PyMethodDef methods_MolecularTaskMessage[] = {
    {sipNm_BALL_getType, meth_MolecularTaskMessage_getType, METH_VARARGS, NULL},
    {sipNm_BALL_setType, meth_MolecularTaskMessage_setType, METH_VARARGS, NULL}
};

static sipEnumMemberDef enummembers_MolecularTaskMessage[] = {
    {sipNm_BALL_ADD_HYDROGENS, MolecularTaskMessage::ADD_HYDROGENS, 9},
    {sipNm_BALL_BUILD_BONDS, MolecularTaskMessage::BUILD_BONDS, 9},
    {sipNm_BALL_CHECK_RESIDUE, MolecularTaskMessage::CHECK_RESIDUE, 9},
    {sipNm_BALL_CREATE_DISTANCE_GRID, MolecularTaskMessage::CREATE_DISTANCE_GRID, 9},
    {sipNm_BALL_UNDEFINED, MolecularTaskMessage::UNDEFINED, 9},
};


sipTypeDef sipType_BALL_MolecularTaskMessage = {
    0,
    0,
    "BALL.MolecularTaskMessage",
    0,
    {0, 0, 1},
    supers_MolecularTaskMessage,
    0,
    2, methods_MolecularTaskMessage,
    5, enummembers_MolecularTaskMessage,
    0,
    init_MolecularTaskMessage,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_MolecularTaskMessage,
    cast_MolecularTaskMessage,
    release_MolecularTaskMessage,
    forceConvertTo_MolecularTaskMessage,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
