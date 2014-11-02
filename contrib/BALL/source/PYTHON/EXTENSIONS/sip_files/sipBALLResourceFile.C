/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLResourceFile.h"

#include "sipBALLFile.h"
#include "sipBALLString.h"
#include "sipBALLResourceFile.h"
#include "sipBALLResourceEntry.h"
#include "sipBALLOpenMode.h"



extern "C" {static PyObject *meth_ResourceFile_destroy(PyObject *, PyObject *);}
static PyObject *meth_ResourceFile_destroy(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        ResourceFile *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_ResourceFile,&sipCpp))
        {
            try
            {
            sipCpp->destroy();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_ResourceFile,sipNm_BALL_destroy);

    return NULL;
}


extern "C" {static PyObject *meth_ResourceFile_open(PyObject *, PyObject *);}
static PyObject *meth_ResourceFile_open(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const String * a0;
        int a0State = 0;
        ResourceFile *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ1",&sipSelf,sipClass_ResourceFile,&sipCpp,sipClass_String,&a0,&a0State))
        {
            bool sipRes;

            try
            {
            sipRes = sipCpp->open(*a0);
            }
            catch (...)
            {

            sipReleaseInstance(const_cast<String *>(a0),sipClass_String,a0State);
                sipRaiseUnknownException();
                return NULL;
            }

            sipReleaseInstance(const_cast<String *>(a0),sipClass_String,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_ResourceFile,sipNm_BALL_open);

    return NULL;
}


extern "C" {static PyObject *meth_ResourceFile_close(PyObject *, PyObject *);}
static PyObject *meth_ResourceFile_close(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        ResourceFile *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_ResourceFile,&sipCpp))
        {
            try
            {
            sipCpp->close();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_ResourceFile,sipNm_BALL_close);

    return NULL;
}


extern "C" {static PyObject *meth_ResourceFile_saveAs(PyObject *, PyObject *);}
static PyObject *meth_ResourceFile_saveAs(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const String * a0;
        int a0State = 0;
        ResourceFile *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ1",&sipSelf,sipClass_ResourceFile,&sipCpp,sipClass_String,&a0,&a0State))
        {
            try
            {
            sipCpp->saveAs(*a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_ResourceFile,sipNm_BALL_saveAs);

    return NULL;
}


extern "C" {static PyObject *meth_ResourceFile_save(PyObject *, PyObject *);}
static PyObject *meth_ResourceFile_save(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const ResourceEntry * a0;
        ResourceFile *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_ResourceFile,&sipCpp,sipClass_ResourceEntry,&a0))
        {
            try
            {
            sipCpp->save(*a0);
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

    {
        ResourceFile *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_ResourceFile,&sipCpp))
        {
            try
            {
            sipCpp->save();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_ResourceFile,sipNm_BALL_save);

    return NULL;
}


extern "C" {static PyObject *meth_ResourceFile_getSize(PyObject *, PyObject *);}
static PyObject *meth_ResourceFile_getSize(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        ResourceFile *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_ResourceFile,&sipCpp))
        {
            int sipRes;

            try
            {
            sipRes = sipCpp->getSize();
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return PyInt_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_ResourceFile,sipNm_BALL_getSize);

    return NULL;
}


extern "C" {static PyObject *meth_ResourceFile_getRoot(PyObject *, PyObject *);}
static PyObject *meth_ResourceFile_getRoot(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        ResourceFile *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_ResourceFile,&sipCpp))
        {
            ResourceEntry *sipRes;

            try
            {
            sipRes = &sipCpp->getRoot();
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return sipConvertFromInstance(sipRes,sipClass_ResourceEntry,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_ResourceFile,sipNm_BALL_getRoot);

    return NULL;
}


extern "C" {static PyObject *meth_ResourceFile_getEntry(PyObject *, PyObject *);}
static PyObject *meth_ResourceFile_getEntry(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const String * a0;
        int a0State = 0;
        ResourceFile *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ1",&sipSelf,sipClass_ResourceFile,&sipCpp,sipClass_String,&a0,&a0State))
        {
            ResourceEntry *sipRes;

            try
            {
            sipRes = sipCpp->getEntry(*a0);
            }
            catch (...)
            {

            sipReleaseInstance(const_cast<String *>(a0),sipClass_String,a0State);
                sipRaiseUnknownException();
                return NULL;
            }

            sipReleaseInstance(const_cast<String *>(a0),sipClass_String,a0State);

            return sipConvertFromInstance(sipRes,sipClass_ResourceEntry,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_ResourceFile,sipNm_BALL_getEntry);

    return NULL;
}


extern "C" {static PyObject *meth_ResourceFile_getValue(PyObject *, PyObject *);}
static PyObject *meth_ResourceFile_getValue(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const String * a0;
        int a0State = 0;
        ResourceFile *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ1",&sipSelf,sipClass_ResourceFile,&sipCpp,sipClass_String,&a0,&a0State))
        {
            String *sipRes;

            try
            {
            sipRes = sipCpp->getValue(*a0);
            }
            catch (...)
            {

            sipReleaseInstance(const_cast<String *>(a0),sipClass_String,a0State);
                sipRaiseUnknownException();
                return NULL;
            }

            sipReleaseInstance(const_cast<String *>(a0),sipClass_String,a0State);

            return sipConvertFromInstance(sipRes,sipClass_String,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_ResourceFile,sipNm_BALL_getValue);

    return NULL;
}


extern "C" {static PyObject *meth_ResourceFile_insert(PyObject *, PyObject *);}
static PyObject *meth_ResourceFile_insert(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const String * a0;
        int a0State = 0;
        const String * a1;
        int a1State = 0;
        ResourceFile *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ1J1",&sipSelf,sipClass_ResourceFile,&sipCpp,sipClass_String,&a0,&a0State,sipClass_String,&a1,&a1State))
        {
            ResourceEntry *sipRes;

            try
            {
            sipRes = sipCpp->insert(*a0,*a1);
            }
            catch (...)
            {

            sipReleaseInstance(const_cast<String *>(a0),sipClass_String,a0State);
            sipReleaseInstance(const_cast<String *>(a1),sipClass_String,a1State);
                sipRaiseUnknownException();
                return NULL;
            }

            sipReleaseInstance(const_cast<String *>(a0),sipClass_String,a0State);
            sipReleaseInstance(const_cast<String *>(a1),sipClass_String,a1State);

            return sipConvertFromInstance(sipRes,sipClass_ResourceEntry,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_ResourceFile,sipNm_BALL_insert);

    return NULL;
}


extern "C" {static PyObject *meth_ResourceFile_removeKey(PyObject *, PyObject *);}
static PyObject *meth_ResourceFile_removeKey(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const String * a0;
        int a0State = 0;
        ResourceFile *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ1",&sipSelf,sipClass_ResourceFile,&sipCpp,sipClass_String,&a0,&a0State))
        {
            bool sipRes;

            try
            {
            sipRes = sipCpp->removeKey(*a0);
            }
            catch (...)
            {

            sipReleaseInstance(const_cast<String *>(a0),sipClass_String,a0State);
                sipRaiseUnknownException();
                return NULL;
            }

            sipReleaseInstance(const_cast<String *>(a0),sipClass_String,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_ResourceFile,sipNm_BALL_removeKey);

    return NULL;
}


extern "C" {static PyObject *meth_ResourceFile_hasKey(PyObject *, PyObject *);}
static PyObject *meth_ResourceFile_hasKey(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const String * a0;
        int a0State = 0;
        ResourceFile *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ1",&sipSelf,sipClass_ResourceFile,&sipCpp,sipClass_String,&a0,&a0State))
        {
            bool sipRes;

            try
            {
            sipRes = sipCpp->hasKey(*a0);
            }
            catch (...)
            {

            sipReleaseInstance(const_cast<String *>(a0),sipClass_String,a0State);
                sipRaiseUnknownException();
                return NULL;
            }

            sipReleaseInstance(const_cast<String *>(a0),sipClass_String,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_ResourceFile,sipNm_BALL_hasKey);

    return NULL;
}


extern "C" {static PyObject *meth_ResourceFile_isEmpty(PyObject *, PyObject *);}
static PyObject *meth_ResourceFile_isEmpty(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        ResourceFile *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_ResourceFile,&sipCpp))
        {
            bool sipRes;

            try
            {
            sipRes = sipCpp->isEmpty();
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_ResourceFile,sipNm_BALL_isEmpty);

    return NULL;
}


extern "C" {static PyObject *meth_ResourceFile_isValid(PyObject *, PyObject *);}
static PyObject *meth_ResourceFile_isValid(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        ResourceFile *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_ResourceFile,&sipCpp))
        {
            bool sipRes;

            try
            {
            sipRes = sipCpp->isValid();
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_ResourceFile,sipNm_BALL_isValid);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_ResourceFile(void *, sipWrapperType *);}
static void *cast_ResourceFile(void *ptr,sipWrapperType *targetClass)
{
    void *res;

    if (targetClass == sipClass_ResourceFile)
        return ptr;

    if ((res = sipCast_File((File *)(ResourceFile *)ptr,targetClass)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_ResourceFile(void *, int);}
static void release_ResourceFile(void *ptr,int)
{
    delete reinterpret_cast<ResourceFile *>(ptr);
}


extern "C" {static void dealloc_ResourceFile(sipWrapper *);}
static void dealloc_ResourceFile(sipWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_ResourceFile(sipSelf->u.cppPtr,0);
    }
}


extern "C" {static void *init_ResourceFile(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_ResourceFile(sipWrapper *,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    ResourceFile *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            try
            {
            sipCpp = new ResourceFile();
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
        const String * a0;
        int a0State = 0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"J1",sipClass_String,&a0,&a0State))
        {
            try
            {
            sipCpp = new ResourceFile(*a0);
            }
            catch (...)
            {

            sipReleaseInstance(const_cast<String *>(a0),sipClass_String,a0State);
                sipRaiseUnknownException();
                return NULL;
            }

            sipReleaseInstance(const_cast<String *>(a0),sipClass_String,a0State);
        }
    }

    if (!sipCpp)
    {
        const ResourceFile * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_ResourceFile,&a0))
        {
            try
            {
            sipCpp = new ResourceFile(*a0);
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


extern "C" {static PyObject *var_ResourceFile_SEPARATOR(PyObject *, PyObject *);}
static PyObject *var_ResourceFile_SEPARATOR(PyObject *,PyObject *sipPy)
{
   char *sipValPtr;

    if (sipPy == NULL)
    {
        char sipVal = ResourceFile::SEPARATOR;

        sipPy = PyString_FromStringAndSize(&sipVal,1);

        return sipPy;
    }

	sipValPtr = PyString_AsString(sipPy);

    if (sipValPtr == NULL)
    {
        sipBadSetType(sipNm_BALL_ResourceFile,sipNm_BALL_SEPARATOR);
        return NULL;
    }

    ResourceFile::SEPARATOR = *sipValPtr;

    Py_INCREF(Py_None);
    return Py_None;
}


extern "C" {static PyObject *var_ResourceFile_ENTRY_END(PyObject *, PyObject *);}
static PyObject *var_ResourceFile_ENTRY_END(PyObject *,PyObject *sipPy)
{
   char *sipValPtr;

    if (sipPy == NULL)
    {
        char sipVal = ResourceFile::ENTRY_END;

        sipPy = PyString_FromStringAndSize(&sipVal,1);

        return sipPy;
    }

	sipValPtr = PyString_AsString(sipPy);

    if (sipValPtr == NULL)
    {
        sipBadSetType(sipNm_BALL_ResourceFile,sipNm_BALL_ENTRY_END);
        return NULL;
    }

    ResourceFile::ENTRY_END = *sipValPtr;

    Py_INCREF(Py_None);
    return Py_None;
}


extern "C" {static PyObject *var_ResourceFile_ENTRY_BEGIN(PyObject *, PyObject *);}
static PyObject *var_ResourceFile_ENTRY_BEGIN(PyObject *,PyObject *sipPy)
{
   char *sipValPtr;

    if (sipPy == NULL)
    {
        char sipVal = ResourceFile::ENTRY_BEGIN;

        sipPy = PyString_FromStringAndSize(&sipVal,1);

        return sipPy;
    }

	sipValPtr = PyString_AsString(sipPy);

    if (sipValPtr == NULL)
    {
        sipBadSetType(sipNm_BALL_ResourceFile,sipNm_BALL_ENTRY_BEGIN);
        return NULL;
    }

    ResourceFile::ENTRY_BEGIN = *sipValPtr;

    Py_INCREF(Py_None);
    return Py_None;
}

PyMethodDef variables_ResourceFile[] = {
    {sipNm_BALL_SEPARATOR, var_ResourceFile_SEPARATOR, METH_STATIC, NULL},
    {sipNm_BALL_ENTRY_END, var_ResourceFile_ENTRY_END, METH_STATIC, NULL},
    {sipNm_BALL_ENTRY_BEGIN, var_ResourceFile_ENTRY_BEGIN, METH_STATIC, NULL},
    {0, 0, 0, 0}
};


extern "C" {static void *forceConvertTo_ResourceFile(PyObject *, int *);}
static void *forceConvertTo_ResourceFile(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_ResourceFile))
        return sipConvertToCpp(valobj,sipClass_ResourceFile,iserrp);

    sipBadClass(sipNm_BALL_ResourceFile);

    *iserrp = 1;

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedClassDef supers_ResourceFile[] = {{163, 255, 1}};


static PyMethodDef methods_ResourceFile[] = {
    {sipNm_BALL_close, meth_ResourceFile_close, METH_VARARGS, NULL},
    {sipNm_BALL_destroy, meth_ResourceFile_destroy, METH_VARARGS, NULL},
    {sipNm_BALL_getEntry, meth_ResourceFile_getEntry, METH_VARARGS, NULL},
    {sipNm_BALL_getRoot, meth_ResourceFile_getRoot, METH_VARARGS, NULL},
    {sipNm_BALL_getSize, meth_ResourceFile_getSize, METH_VARARGS, NULL},
    {sipNm_BALL_getValue, meth_ResourceFile_getValue, METH_VARARGS, NULL},
    {sipNm_BALL_hasKey, meth_ResourceFile_hasKey, METH_VARARGS, NULL},
    {sipNm_BALL_insert, meth_ResourceFile_insert, METH_VARARGS, NULL},
    {sipNm_BALL_isEmpty, meth_ResourceFile_isEmpty, METH_VARARGS, NULL},
    {sipNm_BALL_isValid, meth_ResourceFile_isValid, METH_VARARGS, NULL},
    {sipNm_BALL_open, meth_ResourceFile_open, METH_VARARGS, NULL},
    {sipNm_BALL_removeKey, meth_ResourceFile_removeKey, METH_VARARGS, NULL},
    {sipNm_BALL_save, meth_ResourceFile_save, METH_VARARGS, NULL},
    {sipNm_BALL_saveAs, meth_ResourceFile_saveAs, METH_VARARGS, NULL}
};


sipTypeDef sipType_BALL_ResourceFile = {
    0,
    0,
    "BALL.ResourceFile",
    0,
    {0, 0, 1},
    supers_ResourceFile,
    0,
    14, methods_ResourceFile,
    0, 0,
    variables_ResourceFile,
    init_ResourceFile,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_ResourceFile,
    cast_ResourceFile,
    release_ResourceFile,
    forceConvertTo_ResourceFile,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
