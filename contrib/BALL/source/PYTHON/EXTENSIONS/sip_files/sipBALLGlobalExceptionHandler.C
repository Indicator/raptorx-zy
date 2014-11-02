/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLGlobalExceptionHandler.h"

#include "sipBALLGlobalExceptionHandler.h"
#include "sipBALLString.h"



extern "C" {static PyObject *meth_GlobalExceptionHandler_setName(PyObject *, PyObject *);}
static PyObject *meth_GlobalExceptionHandler_setName(PyObject *,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const String * a0;
        int a0State = 0;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"J1",sipClass_String,&a0,&a0State))
        {
            try
            {
            GlobalExceptionHandler::setName(*a0);
            }
            catch (...)
            {

            sipReleaseInstance(const_cast<String *>(a0),sipClass_String,a0State);
                sipRaiseUnknownException();
                return NULL;
            }

            sipReleaseInstance(const_cast<String *>(a0),sipClass_String,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_GlobalExceptionHandler,sipNm_BALL_setName);

    return NULL;
}


extern "C" {static PyObject *meth_GlobalExceptionHandler_setMessage(PyObject *, PyObject *);}
static PyObject *meth_GlobalExceptionHandler_setMessage(PyObject *,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const String * a0;
        int a0State = 0;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"J1",sipClass_String,&a0,&a0State))
        {
            try
            {
            GlobalExceptionHandler::setMessage(*a0);
            }
            catch (...)
            {

            sipReleaseInstance(const_cast<String *>(a0),sipClass_String,a0State);
                sipRaiseUnknownException();
                return NULL;
            }

            sipReleaseInstance(const_cast<String *>(a0),sipClass_String,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_GlobalExceptionHandler,sipNm_BALL_setMessage);

    return NULL;
}


extern "C" {static PyObject *meth_GlobalExceptionHandler_setLine(PyObject *, PyObject *);}
static PyObject *meth_GlobalExceptionHandler_setLine(PyObject *,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        int a0;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"i",&a0))
        {
            try
            {
            GlobalExceptionHandler::setLine(a0);
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_GlobalExceptionHandler,sipNm_BALL_setLine);

    return NULL;
}


extern "C" {static PyObject *meth_GlobalExceptionHandler_setFile(PyObject *, PyObject *);}
static PyObject *meth_GlobalExceptionHandler_setFile(PyObject *,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const String * a0;
        int a0State = 0;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"J1",sipClass_String,&a0,&a0State))
        {
            try
            {
            GlobalExceptionHandler::setFile(*a0);
            }
            catch (...)
            {

            sipReleaseInstance(const_cast<String *>(a0),sipClass_String,a0State);
                sipRaiseUnknownException();
                return NULL;
            }

            sipReleaseInstance(const_cast<String *>(a0),sipClass_String,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_GlobalExceptionHandler,sipNm_BALL_setFile);

    return NULL;
}


extern "C" {static PyObject *meth_GlobalExceptionHandler_set(PyObject *, PyObject *);}
static PyObject *meth_GlobalExceptionHandler_set(PyObject *,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const String * a0;
        int a0State = 0;
        int a1;
        const String * a2;
        int a2State = 0;
        const String * a3;
        int a3State = 0;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"J1iJ1J1",sipClass_String,&a0,&a0State,&a1,sipClass_String,&a2,&a2State,sipClass_String,&a3,&a3State))
        {
            try
            {
            GlobalExceptionHandler::set(*a0,a1,*a2,*a3);
            }
            catch (...)
            {

            sipReleaseInstance(const_cast<String *>(a0),sipClass_String,a0State);
            sipReleaseInstance(const_cast<String *>(a2),sipClass_String,a2State);
            sipReleaseInstance(const_cast<String *>(a3),sipClass_String,a3State);
                sipRaiseUnknownException();
                return NULL;
            }

            sipReleaseInstance(const_cast<String *>(a0),sipClass_String,a0State);
            sipReleaseInstance(const_cast<String *>(a2),sipClass_String,a2State);
            sipReleaseInstance(const_cast<String *>(a3),sipClass_String,a3State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_GlobalExceptionHandler,sipNm_BALL_set);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_GlobalExceptionHandler(void *, sipWrapperType *);}
static void *cast_GlobalExceptionHandler(void *ptr,sipWrapperType *targetClass)
{
    if (targetClass == sipClass_GlobalExceptionHandler)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_GlobalExceptionHandler(void *, int);}
static void release_GlobalExceptionHandler(void *ptr,int)
{
    delete reinterpret_cast<GlobalExceptionHandler *>(ptr);
}


extern "C" {static void dealloc_GlobalExceptionHandler(sipWrapper *);}
static void dealloc_GlobalExceptionHandler(sipWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_GlobalExceptionHandler(sipSelf->u.cppPtr,0);
    }
}


extern "C" {static void *init_GlobalExceptionHandler(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_GlobalExceptionHandler(sipWrapper *,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    GlobalExceptionHandler *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            try
            {
            sipCpp = new GlobalExceptionHandler();
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
        const GlobalExceptionHandler * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_GlobalExceptionHandler,&a0))
        {
            try
            {
            sipCpp = new GlobalExceptionHandler(*a0);
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


extern "C" {static void *forceConvertTo_GlobalExceptionHandler(PyObject *, int *);}
static void *forceConvertTo_GlobalExceptionHandler(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_GlobalExceptionHandler))
        return sipConvertToCpp(valobj,sipClass_GlobalExceptionHandler,iserrp);

    sipBadClass(sipNm_BALL_GlobalExceptionHandler);

    *iserrp = 1;

    return NULL;
}


static PyMethodDef methods_GlobalExceptionHandler[] = {
    {sipNm_BALL_set, meth_GlobalExceptionHandler_set, METH_VARARGS, NULL},
    {sipNm_BALL_setFile, meth_GlobalExceptionHandler_setFile, METH_VARARGS, NULL},
    {sipNm_BALL_setLine, meth_GlobalExceptionHandler_setLine, METH_VARARGS, NULL},
    {sipNm_BALL_setMessage, meth_GlobalExceptionHandler_setMessage, METH_VARARGS, NULL},
    {sipNm_BALL_setName, meth_GlobalExceptionHandler_setName, METH_VARARGS, NULL}
};


sipTypeDef sipType_BALL_GlobalExceptionHandler = {
    0,
    0,
    "BALL.GlobalExceptionHandler",
    0,
    {0, 0, 1},
    0,
    0,
    5, methods_GlobalExceptionHandler,
    0, 0,
    0,
    init_GlobalExceptionHandler,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_GlobalExceptionHandler,
    cast_GlobalExceptionHandler,
    release_GlobalExceptionHandler,
    forceConvertTo_GlobalExceptionHandler,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
