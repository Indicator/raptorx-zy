/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLPath.h"

#include "sipBALLPath.h"
#include "sipBALLString.h"



extern "C" {static PyObject *meth_Path_getDataPath(PyObject *, PyObject *);}
static PyObject *meth_Path_getDataPath(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Path *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Path,&sipCpp))
        {
            String *sipRes;

            try
            {
            sipRes = new String(sipCpp->getDataPath());
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return sipConvertFromNewInstance(sipRes,sipClass_String,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Path,sipNm_BALL_getDataPath);

    return NULL;
}


extern "C" {static PyObject *meth_Path_setDataPath(PyObject *, PyObject *);}
static PyObject *meth_Path_setDataPath(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const String * a0;
        int a0State = 0;
        Path *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ1",&sipSelf,sipClass_Path,&sipCpp,sipClass_String,&a0,&a0State))
        {
            try
            {
            sipCpp->setDataPath(*a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Path,sipNm_BALL_setDataPath);

    return NULL;
}


extern "C" {static PyObject *meth_Path_addDataPath(PyObject *, PyObject *);}
static PyObject *meth_Path_addDataPath(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const String * a0;
        int a0State = 0;
        Path *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ1",&sipSelf,sipClass_Path,&sipCpp,sipClass_String,&a0,&a0State))
        {
            try
            {
            sipCpp->addDataPath(*a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Path,sipNm_BALL_addDataPath);

    return NULL;
}


extern "C" {static PyObject *meth_Path_getDefaultDataPath(PyObject *, PyObject *);}
static PyObject *meth_Path_getDefaultDataPath(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Path *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Path,&sipCpp))
        {
            String *sipRes;

            try
            {
            sipRes = new String(sipCpp->getDefaultDataPath());
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return sipConvertFromNewInstance(sipRes,sipClass_String,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Path,sipNm_BALL_getDefaultDataPath);

    return NULL;
}


extern "C" {static PyObject *meth_Path_find(PyObject *, PyObject *);}
static PyObject *meth_Path_find(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const String * a0;
        int a0State = 0;
        Path *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ1",&sipSelf,sipClass_Path,&sipCpp,sipClass_String,&a0,&a0State))
        {
            String *sipRes;

            try
            {
            sipRes = new String(sipCpp->find(*a0));
            }
            catch (...)
            {

            sipReleaseInstance(const_cast<String *>(a0),sipClass_String,a0State);
                sipRaiseUnknownException();
                return NULL;
            }

            sipReleaseInstance(const_cast<String *>(a0),sipClass_String,a0State);

            return sipConvertFromNewInstance(sipRes,sipClass_String,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Path,sipNm_BALL_find);

    return NULL;
}


extern "C" {static PyObject *meth_Path_findStrict(PyObject *, PyObject *);}
static PyObject *meth_Path_findStrict(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const String * a0;
        int a0State = 0;
        Path *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ1",&sipSelf,sipClass_Path,&sipCpp,sipClass_String,&a0,&a0State))
        {
            String *sipRes;

            try
            {
            sipRes = new String(sipCpp->findStrict(*a0));
            }
            catch (...)
            {

            sipReleaseInstance(const_cast<String *>(a0),sipClass_String,a0State);
                sipRaiseUnknownException();
                return NULL;
            }

            sipReleaseInstance(const_cast<String *>(a0),sipClass_String,a0State);

            return sipConvertFromNewInstance(sipRes,sipClass_String,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Path,sipNm_BALL_findStrict);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_Path(void *, sipWrapperType *);}
static void *cast_Path(void *ptr,sipWrapperType *targetClass)
{
    if (targetClass == sipClass_Path)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_Path(void *, int);}
static void release_Path(void *ptr,int)
{
    delete reinterpret_cast<Path *>(ptr);
}


extern "C" {static void dealloc_Path(sipWrapper *);}
static void dealloc_Path(sipWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_Path(sipSelf->u.cppPtr,0);
    }
}


extern "C" {static void *init_Path(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_Path(sipWrapper *,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    Path *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            try
            {
            sipCpp = new Path();
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
        const Path * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_Path,&a0))
        {
            try
            {
            sipCpp = new Path(*a0);
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


extern "C" {static void *forceConvertTo_Path(PyObject *, int *);}
static void *forceConvertTo_Path(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_Path))
        return sipConvertToCpp(valobj,sipClass_Path,iserrp);

    sipBadClass(sipNm_BALL_Path);

    *iserrp = 1;

    return NULL;
}


static PyMethodDef methods_Path[] = {
    {sipNm_BALL_addDataPath, meth_Path_addDataPath, METH_VARARGS, NULL},
    {sipNm_BALL_find, meth_Path_find, METH_VARARGS, NULL},
    {sipNm_BALL_findStrict, meth_Path_findStrict, METH_VARARGS, NULL},
    {sipNm_BALL_getDataPath, meth_Path_getDataPath, METH_VARARGS, NULL},
    {sipNm_BALL_getDefaultDataPath, meth_Path_getDefaultDataPath, METH_VARARGS, NULL},
    {sipNm_BALL_setDataPath, meth_Path_setDataPath, METH_VARARGS, NULL}
};


sipTypeDef sipType_BALL_Path = {
    0,
    0,
    "BALL.Path",
    0,
    {0, 0, 1},
    0,
    0,
    6, methods_Path,
    0, 0,
    0,
    init_Path,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_Path,
    cast_Path,
    release_Path,
    forceConvertTo_Path,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
