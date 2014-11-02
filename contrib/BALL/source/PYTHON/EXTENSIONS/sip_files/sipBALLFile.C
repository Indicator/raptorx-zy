/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLFile.h"

#include "sipBALLString.h"
#include "sipBALLOpenMode.h"
#include "sipBALLFile.h"



extern "C" {static PyObject *meth_File_open(PyObject *, PyObject *);}
static PyObject *meth_File_open(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const String * a0;
        int a0State = 0;
        OpenMode a1def = std::ios::in;
        OpenMode * a1 = &a1def;
        int a1State = 0;
        File *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ1|J1",&sipSelf,sipClass_File,&sipCpp,sipClass_String,&a0,&a0State,sipClass_OpenMode,&a1,&a1State))
        {
            bool sipRes;

            try
            {
            sipRes = sipCpp->open(*a0,*a1);
            }
            catch (...)
            {

            sipReleaseInstance(const_cast<String *>(a0),sipClass_String,a0State);
            sipReleaseInstance(a1,sipClass_OpenMode,a1State);
                sipRaiseUnknownException();
                return NULL;
            }

            sipReleaseInstance(const_cast<String *>(a0),sipClass_String,a0State);
            sipReleaseInstance(a1,sipClass_OpenMode,a1State);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_File,sipNm_BALL_open);

    return NULL;
}


extern "C" {static PyObject *meth_File_reopen(PyObject *, PyObject *);}
static PyObject *meth_File_reopen(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        File *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_File,&sipCpp))
        {
            bool sipRes;

            try
            {
            sipRes = sipCpp->reopen();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_File,sipNm_BALL_reopen);

    return NULL;
}


extern "C" {static PyObject *meth_File_close(PyObject *, PyObject *);}
static PyObject *meth_File_close(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        File *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_File,&sipCpp))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_File,sipNm_BALL_close);

    return NULL;
}


extern "C" {static PyObject *meth_File_getName(PyObject *, PyObject *);}
static PyObject *meth_File_getName(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        File *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_File,&sipCpp))
        {
            const String *sipRes;

            try
            {
            sipRes = &sipCpp->getName();
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return sipConvertFromInstance(const_cast<String *>(sipRes),sipClass_String,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_File,sipNm_BALL_getName);

    return NULL;
}


extern "C" {static PyObject *meth_File_getSize(PyObject *, PyObject *);}
static PyObject *meth_File_getSize(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        File *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_File,&sipCpp))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_File,sipNm_BALL_getSize);

    return NULL;
}


extern "C" {static PyObject *meth_File_getOpenMode(PyObject *, PyObject *);}
static PyObject *meth_File_getOpenMode(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        File *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_File,&sipCpp))
        {
            OpenMode *sipRes;

            try
            {
            sipRes = new OpenMode(sipCpp->getOpenMode());
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return sipConvertFromNewInstance(sipRes,sipClass_OpenMode,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_File,sipNm_BALL_getOpenMode);

    return NULL;
}


extern "C" {static PyObject *meth_File_copyTo(PyObject *, PyObject *);}
static PyObject *meth_File_copyTo(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const String * a0;
        int a0State = 0;
        File *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ1",&sipSelf,sipClass_File,&sipCpp,sipClass_String,&a0,&a0State))
        {
            bool sipRes;

            try
            {
            sipRes = sipCpp->copyTo(*a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_File,sipNm_BALL_copyTo);

    return NULL;
}


extern "C" {static PyObject *meth_File_moveTo(PyObject *, PyObject *);}
static PyObject *meth_File_moveTo(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const String * a0;
        int a0State = 0;
        File *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ1",&sipSelf,sipClass_File,&sipCpp,sipClass_String,&a0,&a0State))
        {
            bool sipRes;

            try
            {
            sipRes = sipCpp->moveTo(*a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_File,sipNm_BALL_moveTo);

    return NULL;
}


extern "C" {static PyObject *meth_File_remove(PyObject *, PyObject *);}
static PyObject *meth_File_remove(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        File *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_File,&sipCpp))
        {
            bool sipRes;

            try
            {
            sipRes = sipCpp->remove();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_File,sipNm_BALL_remove);

    return NULL;
}


extern "C" {static PyObject *meth_File_renameTo(PyObject *, PyObject *);}
static PyObject *meth_File_renameTo(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const String * a0;
        int a0State = 0;
        File *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ1",&sipSelf,sipClass_File,&sipCpp,sipClass_String,&a0,&a0State))
        {
            bool sipRes;

            try
            {
            sipRes = sipCpp->renameTo(*a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_File,sipNm_BALL_renameTo);

    return NULL;
}


extern "C" {static PyObject *meth_File_truncate(PyObject *, PyObject *);}
static PyObject *meth_File_truncate(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        int a0;
        File *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bi",&sipSelf,sipClass_File,&sipCpp,&a0))
        {
            bool sipRes;

            try
            {
            sipRes = sipCpp->truncate(a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_File,sipNm_BALL_truncate);

    return NULL;
}


extern "C" {static PyObject *meth_File_isOpen(PyObject *, PyObject *);}
static PyObject *meth_File_isOpen(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        File *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_File,&sipCpp))
        {
            bool sipRes;

            try
            {
            sipRes = sipCpp->isOpen();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_File,sipNm_BALL_isOpen);

    return NULL;
}


extern "C" {static PyObject *meth_File_isClosed(PyObject *, PyObject *);}
static PyObject *meth_File_isClosed(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        File *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_File,&sipCpp))
        {
            bool sipRes;

            try
            {
            sipRes = sipCpp->isClosed();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_File,sipNm_BALL_isClosed);

    return NULL;
}


extern "C" {static PyObject *meth_File_isAccessible(PyObject *, PyObject *);}
static PyObject *meth_File_isAccessible(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        File *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_File,&sipCpp))
        {
            bool sipRes;

            try
            {
            sipRes = sipCpp->isAccessible();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_File,sipNm_BALL_isAccessible);

    return NULL;
}


extern "C" {static PyObject *meth_File_isCanonized(PyObject *, PyObject *);}
static PyObject *meth_File_isCanonized(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        File *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_File,&sipCpp))
        {
            bool sipRes;

            try
            {
            sipRes = sipCpp->isCanonized();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_File,sipNm_BALL_isCanonized);

    return NULL;
}


extern "C" {static PyObject *meth_File_isReadable(PyObject *, PyObject *);}
static PyObject *meth_File_isReadable(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        File *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_File,&sipCpp))
        {
            bool sipRes;

            try
            {
            sipRes = sipCpp->isReadable();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_File,sipNm_BALL_isReadable);

    return NULL;
}


extern "C" {static PyObject *meth_File_isWritable(PyObject *, PyObject *);}
static PyObject *meth_File_isWritable(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        File *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_File,&sipCpp))
        {
            bool sipRes;

            try
            {
            sipRes = sipCpp->isWritable();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_File,sipNm_BALL_isWritable);

    return NULL;
}


extern "C" {static PyObject *meth_File_isExecutable(PyObject *, PyObject *);}
static PyObject *meth_File_isExecutable(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        File *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_File,&sipCpp))
        {
            bool sipRes;

            try
            {
            sipRes = sipCpp->isExecutable();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_File,sipNm_BALL_isExecutable);

    return NULL;
}


extern "C" {static PyObject *meth_File_isValid(PyObject *, PyObject *);}
static PyObject *meth_File_isValid(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        File *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_File,&sipCpp))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_File,sipNm_BALL_isValid);

    return NULL;
}


extern "C" {static PyObject *slot_File___ne__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_File___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    File *sipCpp = reinterpret_cast<File *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_File));

    if (!sipCpp)
        return 0;

    int sipArgsParsed = 0;

    {
        const File * a0;

        if (sipParseArgs(&sipArgsParsed,sipArg,"JA",sipClass_File,&a0))
        {
            bool sipRes;

            try
            {
            sipRes = ((*sipCpp) != *a0);
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return PyBool_FromLong(sipRes);
        }
    }

    return sipPySlotExtend(&sipModuleAPI_BALL,ne_slot,sipClass_File,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_File___eq__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_File___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    File *sipCpp = reinterpret_cast<File *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_File));

    if (!sipCpp)
        return 0;

    int sipArgsParsed = 0;

    {
        const File * a0;

        if (sipParseArgs(&sipArgsParsed,sipArg,"JA",sipClass_File,&a0))
        {
            bool sipRes;

            try
            {
            sipRes = ((*sipCpp) == *a0);
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return PyBool_FromLong(sipRes);
        }
    }

    return sipPySlotExtend(&sipModuleAPI_BALL,eq_slot,sipClass_File,sipSelf,sipArg);
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_File(void *, sipWrapperType *);}
static void *cast_File(void *ptr,sipWrapperType *targetClass)
{
    if (targetClass == sipClass_File)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_File(void *, int);}
static void release_File(void *ptr,int)
{
    delete reinterpret_cast<File *>(ptr);
}


extern "C" {static void dealloc_File(sipWrapper *);}
static void dealloc_File(sipWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_File(sipSelf->u.cppPtr,0);
    }
}


extern "C" {static void *init_File(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_File(sipWrapper *,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    File *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            try
            {
            sipCpp = new File();
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
        OpenMode a1def = std::ios::in;
        OpenMode * a1 = &a1def;
        int a1State = 0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"J1|J1",sipClass_String,&a0,&a0State,sipClass_OpenMode,&a1,&a1State))
        {
            try
            {
            sipCpp = new File(*a0,*a1);
            }
            catch (...)
            {

            sipReleaseInstance(const_cast<String *>(a0),sipClass_String,a0State);
            sipReleaseInstance(a1,sipClass_OpenMode,a1State);
                sipRaiseUnknownException();
                return NULL;
            }

            sipReleaseInstance(const_cast<String *>(a0),sipClass_String,a0State);
            sipReleaseInstance(a1,sipClass_OpenMode,a1State);
        }
    }

    if (!sipCpp)
    {
        const File * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_File,&a0))
        {
            try
            {
            sipCpp = new File(*a0);
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


extern "C" {static void *forceConvertTo_File(PyObject *, int *);}
static void *forceConvertTo_File(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_File))
        return sipConvertToCpp(valobj,sipClass_File,iserrp);

    sipBadClass(sipNm_BALL_File);

    *iserrp = 1;

    return NULL;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_File[] = {
    {(void *)slot_File___ne__, ne_slot},
    {(void *)slot_File___eq__, eq_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_File[] = {
    {sipNm_BALL_close, meth_File_close, METH_VARARGS, NULL},
    {sipNm_BALL_copyTo, meth_File_copyTo, METH_VARARGS, NULL},
    {sipNm_BALL_getName, meth_File_getName, METH_VARARGS, NULL},
    {sipNm_BALL_getOpenMode, meth_File_getOpenMode, METH_VARARGS, NULL},
    {sipNm_BALL_getSize, meth_File_getSize, METH_VARARGS, NULL},
    {sipNm_BALL_isAccessible, meth_File_isAccessible, METH_VARARGS, NULL},
    {sipNm_BALL_isCanonized, meth_File_isCanonized, METH_VARARGS, NULL},
    {sipNm_BALL_isClosed, meth_File_isClosed, METH_VARARGS, NULL},
    {sipNm_BALL_isExecutable, meth_File_isExecutable, METH_VARARGS, NULL},
    {sipNm_BALL_isOpen, meth_File_isOpen, METH_VARARGS, NULL},
    {sipNm_BALL_isReadable, meth_File_isReadable, METH_VARARGS, NULL},
    {sipNm_BALL_isValid, meth_File_isValid, METH_VARARGS, NULL},
    {sipNm_BALL_isWritable, meth_File_isWritable, METH_VARARGS, NULL},
    {sipNm_BALL_moveTo, meth_File_moveTo, METH_VARARGS, NULL},
    {sipNm_BALL_open, meth_File_open, METH_VARARGS, NULL},
    {sipNm_BALL_remove, meth_File_remove, METH_VARARGS, NULL},
    {sipNm_BALL_renameTo, meth_File_renameTo, METH_VARARGS, NULL},
    {sipNm_BALL_reopen, meth_File_reopen, METH_VARARGS, NULL},
    {sipNm_BALL_truncate, meth_File_truncate, METH_VARARGS, NULL}
};

static sipEnumMemberDef enummembers_File[] = {
    {sipNm_BALL_MODE_APP, File::MODE_APP, -1},
    {sipNm_BALL_MODE_ATE, File::MODE_ATE, -1},
    {sipNm_BALL_MODE_BINARY, File::MODE_BINARY, -1},
    {sipNm_BALL_MODE_IN, File::MODE_IN, -1},
    {sipNm_BALL_MODE_OUT, File::MODE_OUT, -1},
    {sipNm_BALL_MODE_TRUNC, File::MODE_TRUNC, -1},
};


sipTypeDef sipType_BALL_File = {
    0,
    0,
    "BALL.File",
    0,
    {0, 0, 1},
    0,
    slots_File,
    19, methods_File,
    6, enummembers_File,
    0,
    init_File,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_File,
    cast_File,
    release_File,
    forceConvertTo_File,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
