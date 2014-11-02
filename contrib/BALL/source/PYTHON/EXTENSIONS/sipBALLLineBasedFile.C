/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLLineBasedFile.h"

#include "sipBALLFile.h"
#include "sipBALLFileNotFound.h"
#include "sipBALLParseError.h"
#include "sipBALLString.h"
#include "sipBALLOpenMode.h"
#include "sipBALLLineBasedFile.h"
#include "sipBALLPosition.h"



extern "C" {static PyObject *meth_LineBasedFile_clear(PyObject *, PyObject *);}
static PyObject *meth_LineBasedFile_clear(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        LineBasedFile *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_LineBasedFile,&sipCpp))
        {
            sipCpp->clear();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_LineBasedFile,sipNm_BALL_clear);

    return NULL;
}


extern "C" {static PyObject *meth_LineBasedFile_getLineNumber(PyObject *, PyObject *);}
static PyObject *meth_LineBasedFile_getLineNumber(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        LineBasedFile *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_LineBasedFile,&sipCpp))
        {
            Position *sipRes;

            sipRes = new Position(sipCpp->getLineNumber());

            PyObject *sipResObj = sipConvertFromMappedType(sipRes,sipMappedType_Position,NULL);
            delete sipRes;

            return sipResObj;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_LineBasedFile,sipNm_BALL_getLineNumber);

    return NULL;
}


extern "C" {static PyObject *meth_LineBasedFile_getLine(PyObject *, PyObject *);}
static PyObject *meth_LineBasedFile_getLine(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        LineBasedFile *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_LineBasedFile,&sipCpp))
        {
            String *sipRes;

            sipRes = &sipCpp->getLine();

            return sipConvertFromInstance(sipRes,sipClass_String,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_LineBasedFile,sipNm_BALL_getLine);

    return NULL;
}


extern "C" {static PyObject *meth_LineBasedFile_readLine(PyObject *, PyObject *);}
static PyObject *meth_LineBasedFile_readLine(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        LineBasedFile *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_LineBasedFile,&sipCpp))
        {
            bool sipRes;

            try
            {
            sipRes = sipCpp->readLine();
            }
            catch (ParseError &sipExceptionRef)
            {
                /* Hope that there is a valid copy ctor. */
                ParseError *sipExceptionCopy = new ParseError(sipExceptionRef);

                sipRaiseClassException(sipClass_ParseError,sipExceptionCopy);

                return NULL;
            }

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_LineBasedFile,sipNm_BALL_readLine);

    return NULL;
}


extern "C" {static PyObject *meth_LineBasedFile_skipLines(PyObject *, PyObject *);}
static PyObject *meth_LineBasedFile_skipLines(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        int a0 = 1;
        LineBasedFile *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B|i",&sipSelf,sipClass_LineBasedFile,&sipCpp,&a0))
        {
            bool sipRes;

            try
            {
            sipRes = sipCpp->skipLines(a0);
            }
            catch (ParseError &sipExceptionRef)
            {
                /* Hope that there is a valid copy ctor. */
                ParseError *sipExceptionCopy = new ParseError(sipExceptionRef);

                sipRaiseClassException(sipClass_ParseError,sipExceptionCopy);

                return NULL;
            }

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_LineBasedFile,sipNm_BALL_skipLines);

    return NULL;
}


extern "C" {static PyObject *meth_LineBasedFile_search(PyObject *, PyObject *);}
static PyObject *meth_LineBasedFile_search(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const String * a0;
        int a0State = 0;
        bool a1 = 0;
        LineBasedFile *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ1|b",&sipSelf,sipClass_LineBasedFile,&sipCpp,sipClass_String,&a0,&a0State,&a1))
        {
            bool sipRes;

            try
            {
            sipRes = sipCpp->search(*a0,a1);
            }
            catch (ParseError &sipExceptionRef)
            {

            sipReleaseInstance(const_cast<String *>(a0),sipClass_String,a0State);
                /* Hope that there is a valid copy ctor. */
                ParseError *sipExceptionCopy = new ParseError(sipExceptionRef);

                sipRaiseClassException(sipClass_ParseError,sipExceptionCopy);

                return NULL;
            }

            sipReleaseInstance(const_cast<String *>(a0),sipClass_String,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    {
        const String * a0;
        int a0State = 0;
        const String * a1;
        int a1State = 0;
        bool a2 = 0;
        LineBasedFile *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ1J1|b",&sipSelf,sipClass_LineBasedFile,&sipCpp,sipClass_String,&a0,&a0State,sipClass_String,&a1,&a1State,&a2))
        {
            bool sipRes;

            try
            {
            sipRes = sipCpp->search(*a0,*a1,a2);
            }
            catch (ParseError &sipExceptionRef)
            {

            sipReleaseInstance(const_cast<String *>(a0),sipClass_String,a0State);
            sipReleaseInstance(const_cast<String *>(a1),sipClass_String,a1State);
                /* Hope that there is a valid copy ctor. */
                ParseError *sipExceptionCopy = new ParseError(sipExceptionRef);

                sipRaiseClassException(sipClass_ParseError,sipExceptionCopy);

                return NULL;
            }

            sipReleaseInstance(const_cast<String *>(a0),sipClass_String,a0State);
            sipReleaseInstance(const_cast<String *>(a1),sipClass_String,a1State);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_LineBasedFile,sipNm_BALL_search);

    return NULL;
}


extern "C" {static PyObject *meth_LineBasedFile_gotoLine(PyObject *, PyObject *);}
static PyObject *meth_LineBasedFile_gotoLine(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Position * a0;
        int a0State = 0;
        LineBasedFile *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BM1",&sipSelf,sipClass_LineBasedFile,&sipCpp,sipMappedType_Position,&a0,&a0State))
        {
            bool sipRes;

            try
            {
            sipRes = sipCpp->gotoLine(*a0);
            }
            catch (ParseError &sipExceptionRef)
            {

            sipReleaseMappedType(a0,sipMappedType_Position,a0State);
                /* Hope that there is a valid copy ctor. */
                ParseError *sipExceptionCopy = new ParseError(sipExceptionRef);

                sipRaiseClassException(sipClass_ParseError,sipExceptionCopy);

                return NULL;
            }

            sipReleaseMappedType(a0,sipMappedType_Position,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_LineBasedFile,sipNm_BALL_gotoLine);

    return NULL;
}


extern "C" {static PyObject *meth_LineBasedFile_rewind(PyObject *, PyObject *);}
static PyObject *meth_LineBasedFile_rewind(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        LineBasedFile *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_LineBasedFile,&sipCpp))
        {
            try
            {
            sipCpp->rewind();
            }
            catch (ParseError &sipExceptionRef)
            {
                /* Hope that there is a valid copy ctor. */
                ParseError *sipExceptionCopy = new ParseError(sipExceptionRef);

                sipRaiseClassException(sipClass_ParseError,sipExceptionCopy);

                return NULL;
            }

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_LineBasedFile,sipNm_BALL_rewind);

    return NULL;
}


extern "C" {static PyObject *meth_LineBasedFile_test(PyObject *, PyObject *);}
static PyObject *meth_LineBasedFile_test(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const char * a0;
        int a1;
        bool a2;
        const String * a3;
        int a3State = 0;
        LineBasedFile *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BsibJ1",&sipSelf,sipClass_LineBasedFile,&sipCpp,&a0,&a1,&a2,sipClass_String,&a3,&a3State))
        {
            try
            {
            sipCpp->test(a0,a1,a2,*a3);
            }
            catch (ParseError &sipExceptionRef)
            {

            sipReleaseInstance(const_cast<String *>(a3),sipClass_String,a3State);
                /* Hope that there is a valid copy ctor. */
                ParseError *sipExceptionCopy = new ParseError(sipExceptionRef);

                sipRaiseClassException(sipClass_ParseError,sipExceptionCopy);

                return NULL;
            }

            sipReleaseInstance(const_cast<String *>(a3),sipClass_String,a3State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_LineBasedFile,sipNm_BALL_test);

    return NULL;
}


extern "C" {static PyObject *meth_LineBasedFile_startsWith(PyObject *, PyObject *);}
static PyObject *meth_LineBasedFile_startsWith(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const String * a0;
        int a0State = 0;
        LineBasedFile *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ1",&sipSelf,sipClass_LineBasedFile,&sipCpp,sipClass_String,&a0,&a0State))
        {
            bool sipRes;

            sipRes = sipCpp->startsWith(*a0);

            sipReleaseInstance(const_cast<String *>(a0),sipClass_String,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_LineBasedFile,sipNm_BALL_startsWith);

    return NULL;
}


extern "C" {static PyObject *meth_LineBasedFile_has(PyObject *, PyObject *);}
static PyObject *meth_LineBasedFile_has(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const String * a0;
        int a0State = 0;
        LineBasedFile *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ1",&sipSelf,sipClass_LineBasedFile,&sipCpp,sipClass_String,&a0,&a0State))
        {
            bool sipRes;

            sipRes = sipCpp->has(*a0);

            sipReleaseInstance(const_cast<String *>(a0),sipClass_String,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_LineBasedFile,sipNm_BALL_has);

    return NULL;
}


extern "C" {static PyObject *slot_LineBasedFile___ne__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_LineBasedFile___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    LineBasedFile *sipCpp = reinterpret_cast<LineBasedFile *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_LineBasedFile));

    if (!sipCpp)
        return 0;

    int sipArgsParsed = 0;

    {
        const LineBasedFile * a0;

        if (sipParseArgs(&sipArgsParsed,sipArg,"JA",sipClass_LineBasedFile,&a0))
        {
            bool sipRes;

            sipRes = ((*sipCpp) != *a0);

            return PyBool_FromLong(sipRes);
        }
    }

    return sipPySlotExtend(&sipModuleAPI_BALL,ne_slot,sipClass_LineBasedFile,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_LineBasedFile___eq__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_LineBasedFile___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    LineBasedFile *sipCpp = reinterpret_cast<LineBasedFile *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_LineBasedFile));

    if (!sipCpp)
        return 0;

    int sipArgsParsed = 0;

    {
        const LineBasedFile * a0;

        if (sipParseArgs(&sipArgsParsed,sipArg,"JA",sipClass_LineBasedFile,&a0))
        {
            bool sipRes;

            sipRes = ((*sipCpp) == *a0);

            return PyBool_FromLong(sipRes);
        }
    }

    return sipPySlotExtend(&sipModuleAPI_BALL,eq_slot,sipClass_LineBasedFile,sipSelf,sipArg);
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_LineBasedFile(void *, sipWrapperType *);}
static void *cast_LineBasedFile(void *ptr,sipWrapperType *targetClass)
{
    void *res;

    if (targetClass == sipClass_LineBasedFile)
        return ptr;

    if ((res = sipCast_File((File *)(LineBasedFile *)ptr,targetClass)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_LineBasedFile(void *, int);}
static void release_LineBasedFile(void *ptr,int)
{
    delete reinterpret_cast<LineBasedFile *>(ptr);
}


extern "C" {static void dealloc_LineBasedFile(sipWrapper *);}
static void dealloc_LineBasedFile(sipWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_LineBasedFile(sipSelf->u.cppPtr,0);
    }
}


extern "C" {static void *init_LineBasedFile(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_LineBasedFile(sipWrapper *,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    LineBasedFile *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            sipCpp = new LineBasedFile();
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
            sipCpp = new LineBasedFile(*a0,*a1);
            }
            catch (FileNotFound &sipExceptionRef)
            {

            sipReleaseInstance(const_cast<String *>(a0),sipClass_String,a0State);
            sipReleaseInstance(a1,sipClass_OpenMode,a1State);
                /* Hope that there is a valid copy ctor. */
                FileNotFound *sipExceptionCopy = new FileNotFound(sipExceptionRef);

                sipRaiseClassException(sipClass_FileNotFound,sipExceptionCopy);

                return NULL;
            }

            sipReleaseInstance(const_cast<String *>(a0),sipClass_String,a0State);
            sipReleaseInstance(a1,sipClass_OpenMode,a1State);
        }
    }

    if (!sipCpp)
    {
        const LineBasedFile * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_LineBasedFile,&a0))
        {
            try
            {
            sipCpp = new LineBasedFile(*a0);
            }
            catch (FileNotFound &sipExceptionRef)
            {
                /* Hope that there is a valid copy ctor. */
                FileNotFound *sipExceptionCopy = new FileNotFound(sipExceptionRef);

                sipRaiseClassException(sipClass_FileNotFound,sipExceptionCopy);

                return NULL;
            }
        }
    }

    return sipCpp;
}


extern "C" {static void *forceConvertTo_LineBasedFile(PyObject *, int *);}
static void *forceConvertTo_LineBasedFile(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_LineBasedFile))
        return sipConvertToCpp(valobj,sipClass_LineBasedFile,iserrp);

    sipBadClass(sipNm_BALL_LineBasedFile);

    *iserrp = 1;

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedClassDef supers_LineBasedFile[] = {{163, 255, 1}};


/* Define this type's Python slots. */
static sipPySlotDef slots_LineBasedFile[] = {
    {(void *)slot_LineBasedFile___ne__, ne_slot},
    {(void *)slot_LineBasedFile___eq__, eq_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_LineBasedFile[] = {
    {sipNm_BALL_clear, meth_LineBasedFile_clear, METH_VARARGS, NULL},
    {sipNm_BALL_getLine, meth_LineBasedFile_getLine, METH_VARARGS, NULL},
    {sipNm_BALL_getLineNumber, meth_LineBasedFile_getLineNumber, METH_VARARGS, NULL},
    {sipNm_BALL_gotoLine, meth_LineBasedFile_gotoLine, METH_VARARGS, NULL},
    {sipNm_BALL_has, meth_LineBasedFile_has, METH_VARARGS, NULL},
    {sipNm_BALL_readLine, meth_LineBasedFile_readLine, METH_VARARGS, NULL},
    {sipNm_BALL_rewind, meth_LineBasedFile_rewind, METH_VARARGS, NULL},
    {sipNm_BALL_search, meth_LineBasedFile_search, METH_VARARGS, NULL},
    {sipNm_BALL_skipLines, meth_LineBasedFile_skipLines, METH_VARARGS, NULL},
    {sipNm_BALL_startsWith, meth_LineBasedFile_startsWith, METH_VARARGS, NULL},
    {sipNm_BALL_test, meth_LineBasedFile_test, METH_VARARGS, NULL}
};


sipTypeDef sipType_BALL_LineBasedFile = {
    0,
    0,
    "BALL.LineBasedFile",
    0,
    {0, 0, 1},
    supers_LineBasedFile,
    slots_LineBasedFile,
    11, methods_LineBasedFile,
    0, 0,
    0,
    init_LineBasedFile,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_LineBasedFile,
    cast_LineBasedFile,
    release_LineBasedFile,
    forceConvertTo_LineBasedFile,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
