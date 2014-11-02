/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLINIFile.h"

#include "sipBALLString.h"
#include "sipBALLINIFile.h"



extern "C" {static PyObject *meth_INIFile_clear(PyObject *, PyObject *);}
static PyObject *meth_INIFile_clear(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        INIFile *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_INIFile,&sipCpp))
        {
            try
            {
            sipCpp->clear();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_INIFile,sipNm_BALL_clear);

    return NULL;
}


extern "C" {static PyObject *meth_INIFile_read(PyObject *, PyObject *);}
static PyObject *meth_INIFile_read(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        INIFile *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_INIFile,&sipCpp))
        {
            bool sipRes;

            try
            {
            sipRes = sipCpp->read();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_INIFile,sipNm_BALL_read);

    return NULL;
}


extern "C" {static PyObject *meth_INIFile_write(PyObject *, PyObject *);}
static PyObject *meth_INIFile_write(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        INIFile *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_INIFile,&sipCpp))
        {
            bool sipRes;

            try
            {
            sipRes = sipCpp->write();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_INIFile,sipNm_BALL_write);

    return NULL;
}


extern "C" {static PyObject *meth_INIFile_getFilename(PyObject *, PyObject *);}
static PyObject *meth_INIFile_getFilename(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        INIFile *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_INIFile,&sipCpp))
        {
            const String *sipRes;

            try
            {
            sipRes = &sipCpp->getFilename();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_INIFile,sipNm_BALL_getFilename);

    return NULL;
}


extern "C" {static PyObject *meth_INIFile_setFilename(PyObject *, PyObject *);}
static PyObject *meth_INIFile_setFilename(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const String * a0;
        int a0State = 0;
        INIFile *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ1",&sipSelf,sipClass_INIFile,&sipCpp,sipClass_String,&a0,&a0State))
        {
            try
            {
            sipCpp->setFilename(*a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_INIFile,sipNm_BALL_setFilename);

    return NULL;
}


extern "C" {static PyObject *meth_INIFile_isValid(PyObject *, PyObject *);}
static PyObject *meth_INIFile_isValid(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        INIFile *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_INIFile,&sipCpp))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_INIFile,sipNm_BALL_isValid);

    return NULL;
}


extern "C" {static PyObject *meth_INIFile_getNumberOfLines(PyObject *, PyObject *);}
static PyObject *meth_INIFile_getNumberOfLines(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        INIFile *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_INIFile,&sipCpp))
        {
            int sipRes;

            try
            {
            sipRes = sipCpp->getNumberOfLines();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_INIFile,sipNm_BALL_getNumberOfLines);

    return NULL;
}


extern "C" {static PyObject *meth_INIFile_hasSection(PyObject *, PyObject *);}
static PyObject *meth_INIFile_hasSection(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const String * a0;
        int a0State = 0;
        INIFile *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ1",&sipSelf,sipClass_INIFile,&sipCpp,sipClass_String,&a0,&a0State))
        {
            bool sipRes;

            try
            {
            sipRes = sipCpp->hasSection(*a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_INIFile,sipNm_BALL_hasSection);

    return NULL;
}


extern "C" {static PyObject *meth_INIFile_getNumberOfSections(PyObject *, PyObject *);}
static PyObject *meth_INIFile_getNumberOfSections(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        INIFile *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_INIFile,&sipCpp))
        {
            int sipRes;

            try
            {
            sipRes = sipCpp->getNumberOfSections();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_INIFile,sipNm_BALL_getNumberOfSections);

    return NULL;
}


extern "C" {static PyObject *meth_INIFile_getSectionLength(PyObject *, PyObject *);}
static PyObject *meth_INIFile_getSectionLength(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const String * a0;
        int a0State = 0;
        INIFile *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ1",&sipSelf,sipClass_INIFile,&sipCpp,sipClass_String,&a0,&a0State))
        {
            int sipRes;

            try
            {
            sipRes = sipCpp->getSectionLength(*a0);
            }
            catch (...)
            {

            sipReleaseInstance(const_cast<String *>(a0),sipClass_String,a0State);
                sipRaiseUnknownException();
                return NULL;
            }

            sipReleaseInstance(const_cast<String *>(a0),sipClass_String,a0State);

            return PyInt_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_INIFile,sipNm_BALL_getSectionLength);

    return NULL;
}


extern "C" {static PyObject *meth_INIFile_deleteSection(PyObject *, PyObject *);}
static PyObject *meth_INIFile_deleteSection(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const String * a0;
        int a0State = 0;
        INIFile *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ1",&sipSelf,sipClass_INIFile,&sipCpp,sipClass_String,&a0,&a0State))
        {
            bool sipRes;

            try
            {
            sipRes = sipCpp->deleteSection(*a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_INIFile,sipNm_BALL_deleteSection);

    return NULL;
}


extern "C" {static PyObject *meth_INIFile_appendSection(PyObject *, PyObject *);}
static PyObject *meth_INIFile_appendSection(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const String * a0;
        int a0State = 0;
        INIFile *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ1",&sipSelf,sipClass_INIFile,&sipCpp,sipClass_String,&a0,&a0State))
        {
            bool sipRes;

            try
            {
            sipRes = sipCpp->appendSection(*a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_INIFile,sipNm_BALL_appendSection);

    return NULL;
}


extern "C" {static PyObject *meth_INIFile_hasEntry(PyObject *, PyObject *);}
static PyObject *meth_INIFile_hasEntry(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const String * a0;
        int a0State = 0;
        const String * a1;
        int a1State = 0;
        INIFile *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ1J1",&sipSelf,sipClass_INIFile,&sipCpp,sipClass_String,&a0,&a0State,sipClass_String,&a1,&a1State))
        {
            bool sipRes;

            try
            {
            sipRes = sipCpp->hasEntry(*a0,*a1);
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

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_INIFile,sipNm_BALL_hasEntry);

    return NULL;
}


extern "C" {static PyObject *meth_INIFile_getValue(PyObject *, PyObject *);}
static PyObject *meth_INIFile_getValue(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const String * a0;
        int a0State = 0;
        const String * a1;
        int a1State = 0;
        INIFile *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ1J1",&sipSelf,sipClass_INIFile,&sipCpp,sipClass_String,&a0,&a0State,sipClass_String,&a1,&a1State))
        {
            String *sipRes;

            try
            {
            sipRes = new String(sipCpp->getValue(*a0,*a1));
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

            return sipConvertFromNewInstance(sipRes,sipClass_String,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_INIFile,sipNm_BALL_getValue);

    return NULL;
}


extern "C" {static PyObject *meth_INIFile_insertValue(PyObject *, PyObject *);}
static PyObject *meth_INIFile_insertValue(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const String * a0;
        int a0State = 0;
        const String * a1;
        int a1State = 0;
        const String * a2;
        int a2State = 0;
        INIFile *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ1J1J1",&sipSelf,sipClass_INIFile,&sipCpp,sipClass_String,&a0,&a0State,sipClass_String,&a1,&a1State,sipClass_String,&a2,&a2State))
        {
            bool sipRes;

            try
            {
            sipRes = sipCpp->insertValue(*a0,*a1,*a2);
            }
            catch (...)
            {

            sipReleaseInstance(const_cast<String *>(a0),sipClass_String,a0State);
            sipReleaseInstance(const_cast<String *>(a1),sipClass_String,a1State);
            sipReleaseInstance(const_cast<String *>(a2),sipClass_String,a2State);
                sipRaiseUnknownException();
                return NULL;
            }

            sipReleaseInstance(const_cast<String *>(a0),sipClass_String,a0State);
            sipReleaseInstance(const_cast<String *>(a1),sipClass_String,a1State);
            sipReleaseInstance(const_cast<String *>(a2),sipClass_String,a2State);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_INIFile,sipNm_BALL_insertValue);

    return NULL;
}


extern "C" {static PyObject *meth_INIFile_setValue(PyObject *, PyObject *);}
static PyObject *meth_INIFile_setValue(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const String * a0;
        int a0State = 0;
        const String * a1;
        int a1State = 0;
        const String * a2;
        int a2State = 0;
        INIFile *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ1J1J1",&sipSelf,sipClass_INIFile,&sipCpp,sipClass_String,&a0,&a0State,sipClass_String,&a1,&a1State,sipClass_String,&a2,&a2State))
        {
            bool sipRes;

            try
            {
            sipRes = sipCpp->setValue(*a0,*a1,*a2);
            }
            catch (...)
            {

            sipReleaseInstance(const_cast<String *>(a0),sipClass_String,a0State);
            sipReleaseInstance(const_cast<String *>(a1),sipClass_String,a1State);
            sipReleaseInstance(const_cast<String *>(a2),sipClass_String,a2State);
                sipRaiseUnknownException();
                return NULL;
            }

            sipReleaseInstance(const_cast<String *>(a0),sipClass_String,a0State);
            sipReleaseInstance(const_cast<String *>(a1),sipClass_String,a1State);
            sipReleaseInstance(const_cast<String *>(a2),sipClass_String,a2State);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_INIFile,sipNm_BALL_setValue);

    return NULL;
}


extern "C" {static PyObject *meth_INIFile_setDuplicateKeyCheck(PyObject *, PyObject *);}
static PyObject *meth_INIFile_setDuplicateKeyCheck(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        bool a0;
        INIFile *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bb",&sipSelf,sipClass_INIFile,&sipCpp,&a0))
        {
            try
            {
            sipCpp->setDuplicateKeyCheck(a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_INIFile,sipNm_BALL_setDuplicateKeyCheck);

    return NULL;
}


extern "C" {static PyObject *slot_INIFile___eq__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_INIFile___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    INIFile *sipCpp = reinterpret_cast<INIFile *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_INIFile));

    if (!sipCpp)
        return 0;

    int sipArgsParsed = 0;

    {
        const INIFile * a0;

        if (sipParseArgs(&sipArgsParsed,sipArg,"JA",sipClass_INIFile,&a0))
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

    return sipPySlotExtend(&sipModuleAPI_BALL,eq_slot,sipClass_INIFile,sipSelf,sipArg);
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_INIFile(void *, sipWrapperType *);}
static void *cast_INIFile(void *ptr,sipWrapperType *targetClass)
{
    if (targetClass == sipClass_INIFile)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_INIFile(void *, int);}
static void release_INIFile(void *ptr,int)
{
    delete reinterpret_cast<INIFile *>(ptr);
}


extern "C" {static void dealloc_INIFile(sipWrapper *);}
static void dealloc_INIFile(sipWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_INIFile(sipSelf->u.cppPtr,0);
    }
}


extern "C" {static void *init_INIFile(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_INIFile(sipWrapper *,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    INIFile *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            try
            {
            sipCpp = new INIFile();
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
            sipCpp = new INIFile(*a0);
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
        const INIFile * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_INIFile,&a0))
        {
            try
            {
            sipCpp = new INIFile(*a0);
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


extern "C" {static void *forceConvertTo_INIFile(PyObject *, int *);}
static void *forceConvertTo_INIFile(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_INIFile))
        return sipConvertToCpp(valobj,sipClass_INIFile,iserrp);

    sipBadClass(sipNm_BALL_INIFile);

    *iserrp = 1;

    return NULL;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_INIFile[] = {
    {(void *)slot_INIFile___eq__, eq_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_INIFile[] = {
    {sipNm_BALL_appendSection, meth_INIFile_appendSection, METH_VARARGS, NULL},
    {sipNm_BALL_clear, meth_INIFile_clear, METH_VARARGS, NULL},
    {sipNm_BALL_deleteSection, meth_INIFile_deleteSection, METH_VARARGS, NULL},
    {sipNm_BALL_getFilename, meth_INIFile_getFilename, METH_VARARGS, NULL},
    {sipNm_BALL_getNumberOfLines, meth_INIFile_getNumberOfLines, METH_VARARGS, NULL},
    {sipNm_BALL_getNumberOfSections, meth_INIFile_getNumberOfSections, METH_VARARGS, NULL},
    {sipNm_BALL_getSectionLength, meth_INIFile_getSectionLength, METH_VARARGS, NULL},
    {sipNm_BALL_getValue, meth_INIFile_getValue, METH_VARARGS, NULL},
    {sipNm_BALL_hasEntry, meth_INIFile_hasEntry, METH_VARARGS, NULL},
    {sipNm_BALL_hasSection, meth_INIFile_hasSection, METH_VARARGS, NULL},
    {sipNm_BALL_insertValue, meth_INIFile_insertValue, METH_VARARGS, NULL},
    {sipNm_BALL_isValid, meth_INIFile_isValid, METH_VARARGS, NULL},
    {sipNm_BALL_read, meth_INIFile_read, METH_VARARGS, NULL},
    {sipNm_BALL_setDuplicateKeyCheck, meth_INIFile_setDuplicateKeyCheck, METH_VARARGS, NULL},
    {sipNm_BALL_setFilename, meth_INIFile_setFilename, METH_VARARGS, NULL},
    {sipNm_BALL_setValue, meth_INIFile_setValue, METH_VARARGS, NULL},
    {sipNm_BALL_write, meth_INIFile_write, METH_VARARGS, NULL}
};

static sipEnumMemberDef enummembers_INIFile[] = {
    {sipNm_BALL_MAX_LINE_LENGTH, INIFile::MAX_LINE_LENGTH, -1},
};


sipTypeDef sipType_BALL_INIFile = {
    0,
    0,
    "BALL.INIFile",
    0,
    {0, 0, 1},
    0,
    slots_INIFile,
    17, methods_INIFile,
    1, enummembers_INIFile,
    0,
    init_INIFile,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_INIFile,
    cast_INIFile,
    release_INIFile,
    forceConvertTo_INIFile,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
