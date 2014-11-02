/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLString.h"

#include "sipBALLNullPointer.h"
#include "sipBALLIndexOverflow.h"
#include "sipBALLIndexUnderflow.h"
#include "sipBALLIndex.h"
#include "sipBALLString.h"
#include "sipBALLSubstring.h"



extern "C" {static PyObject *meth_String_destroy(PyObject *, PyObject *);}
static PyObject *meth_String_destroy(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        String *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_String,&sipCpp))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_String,sipNm_BALL_destroy);

    return NULL;
}


extern "C" {static PyObject *meth_String_set(PyObject *, PyObject *);}
static PyObject *meth_String_set(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const String * a0;
        int a0State = 0;
        int a1 = 0;
        int a2 = String::EndPos;
        String *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ1|ii",&sipSelf,sipClass_String,&sipCpp,sipClass_String,&a0,&a0State,&a1,&a2))
        {
            try
            {
            sipCpp->set(*a0,a1,a2);
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

    {
        const char * a0;
        int a1 = 0;
        int a2 = String::EndPos;
        String *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bs|ii",&sipSelf,sipClass_String,&sipCpp,&a0,&a1,&a2))
        {
            try
            {
            sipCpp->set(a0,a1,a2);
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
        long a0;
        String *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bl",&sipSelf,sipClass_String,&sipCpp,&a0))
        {
            try
            {
            sipCpp->set(a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_String,sipNm_BALL_set);

    return NULL;
}


extern "C" {static PyObject *meth_String_setCompareMode(PyObject *, PyObject *);}
static PyObject *meth_String_setCompareMode(PyObject *,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        String::CompareMode a0;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"E",sipEnum_String_CompareMode,&a0))
        {
            try
            {
            String::setCompareMode(a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_String,sipNm_BALL_setCompareMode);

    return NULL;
}


extern "C" {static PyObject *meth_String_getCompareMode(PyObject *, PyObject *);}
static PyObject *meth_String_getCompareMode(PyObject *,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        if (sipParseArgs(&sipArgsParsed,sipArgs,""))
        {
            String::CompareMode sipRes;

            try
            {
            sipRes = String::getCompareMode();
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return sipConvertFromNamedEnum(sipRes,sipEnum_String_CompareMode);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_String,sipNm_BALL_getCompareMode);

    return NULL;
}


extern "C" {static PyObject *meth_String_toBool(PyObject *, PyObject *);}
static PyObject *meth_String_toBool(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        String *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_String,&sipCpp))
        {
            bool sipRes;

            try
            {
            sipRes = sipCpp->toBool();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_String,sipNm_BALL_toBool);

    return NULL;
}


extern "C" {static PyObject *meth_String_toChar(PyObject *, PyObject *);}
static PyObject *meth_String_toChar(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        String *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_String,&sipCpp))
        {
            char sipRes;

            try
            {
            sipRes = sipCpp->toChar();
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return PyString_FromStringAndSize(&sipRes,1);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_String,sipNm_BALL_toChar);

    return NULL;
}


extern "C" {static PyObject *meth_String_toShort(PyObject *, PyObject *);}
static PyObject *meth_String_toShort(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        String *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_String,&sipCpp))
        {
            short sipRes;

            try
            {
            sipRes = sipCpp->toShort();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_String,sipNm_BALL_toShort);

    return NULL;
}


extern "C" {static PyObject *meth_String_toInt(PyObject *, PyObject *);}
static PyObject *meth_String_toInt(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        String *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_String,&sipCpp))
        {
            int sipRes;

            try
            {
            sipRes = sipCpp->toInt();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_String,sipNm_BALL_toInt);

    return NULL;
}


extern "C" {static PyObject *meth_String_toLong(PyObject *, PyObject *);}
static PyObject *meth_String_toLong(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        String *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_String,&sipCpp))
        {
            long sipRes;

            try
            {
            sipRes = sipCpp->toLong();
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return PyLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_String,sipNm_BALL_toLong);

    return NULL;
}


extern "C" {static PyObject *meth_String_toFloat(PyObject *, PyObject *);}
static PyObject *meth_String_toFloat(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        String *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_String,&sipCpp))
        {
            float sipRes;

            try
            {
            sipRes = sipCpp->toFloat();
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return PyFloat_FromDouble((double)sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_String,sipNm_BALL_toFloat);

    return NULL;
}


extern "C" {static PyObject *meth_String_toDouble(PyObject *, PyObject *);}
static PyObject *meth_String_toDouble(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        String *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_String,&sipCpp))
        {
            double sipRes;

            try
            {
            sipRes = sipCpp->toDouble();
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return PyFloat_FromDouble(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_String,sipNm_BALL_toDouble);

    return NULL;
}


extern "C" {static PyObject *meth_String_toLower(PyObject *, PyObject *);}
static PyObject *meth_String_toLower(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        int a0 = 0;
        int a1 = String::EndPos;
        String *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B|ii",&sipSelf,sipClass_String,&sipCpp,&a0,&a1))
        {
            try
            {
            sipCpp->toLower(a0,a1);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_String,sipNm_BALL_toLower);

    return NULL;
}


extern "C" {static PyObject *meth_String_toUpper(PyObject *, PyObject *);}
static PyObject *meth_String_toUpper(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        int a0 = 0;
        int a1 = String::EndPos;
        String *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B|ii",&sipSelf,sipClass_String,&sipCpp,&a0,&a1))
        {
            try
            {
            sipCpp->toUpper(a0,a1);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_String,sipNm_BALL_toUpper);

    return NULL;
}


extern "C" {static PyObject *meth_String_getSubstring(PyObject *, PyObject *);}
static PyObject *meth_String_getSubstring(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        int a0 = 0;
        int a1 = String::EndPos;
        String *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B|ii",&sipSelf,sipClass_String,&sipCpp,&a0,&a1))
        {
            Substring *sipRes;

            try
            {
            sipRes = new Substring(sipCpp->getSubstring(a0,a1));
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return sipConvertFromNewInstance(sipRes,sipClass_Substring,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_String,sipNm_BALL_getSubstring);

    return NULL;
}


extern "C" {static PyObject *meth_String_before(PyObject *, PyObject *);}
static PyObject *meth_String_before(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const String * a0;
        int a0State = 0;
        int a1 = 0;
        String *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ1|i",&sipSelf,sipClass_String,&sipCpp,sipClass_String,&a0,&a0State,&a1))
        {
            Substring *sipRes;

            try
            {
            sipRes = new Substring(sipCpp->before(*a0,a1));
            }
            catch (...)
            {

            sipReleaseInstance(const_cast<String *>(a0),sipClass_String,a0State);
                sipRaiseUnknownException();
                return NULL;
            }

            sipReleaseInstance(const_cast<String *>(a0),sipClass_String,a0State);

            return sipConvertFromNewInstance(sipRes,sipClass_Substring,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_String,sipNm_BALL_before);

    return NULL;
}


extern "C" {static PyObject *meth_String_through(PyObject *, PyObject *);}
static PyObject *meth_String_through(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const String * a0;
        int a0State = 0;
        int a1 = 0;
        String *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ1|i",&sipSelf,sipClass_String,&sipCpp,sipClass_String,&a0,&a0State,&a1))
        {
            Substring *sipRes;

            try
            {
            sipRes = new Substring(sipCpp->through(*a0,a1));
            }
            catch (...)
            {

            sipReleaseInstance(const_cast<String *>(a0),sipClass_String,a0State);
                sipRaiseUnknownException();
                return NULL;
            }

            sipReleaseInstance(const_cast<String *>(a0),sipClass_String,a0State);

            return sipConvertFromNewInstance(sipRes,sipClass_Substring,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_String,sipNm_BALL_through);

    return NULL;
}


extern "C" {static PyObject *meth_String_from(PyObject *, PyObject *);}
static PyObject *meth_String_from(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const String * a0;
        int a0State = 0;
        int a1 = 0;
        String *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ1|i",&sipSelf,sipClass_String,&sipCpp,sipClass_String,&a0,&a0State,&a1))
        {
            Substring *sipRes;

            try
            {
            sipRes = new Substring(sipCpp->from(*a0,a1));
            }
            catch (...)
            {

            sipReleaseInstance(const_cast<String *>(a0),sipClass_String,a0State);
                sipRaiseUnknownException();
                return NULL;
            }

            sipReleaseInstance(const_cast<String *>(a0),sipClass_String,a0State);

            return sipConvertFromNewInstance(sipRes,sipClass_Substring,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_String,sipNm_BALL_from);

    return NULL;
}


extern "C" {static PyObject *meth_String_after(PyObject *, PyObject *);}
static PyObject *meth_String_after(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const String * a0;
        int a0State = 0;
        int a1 = 0;
        String *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ1|i",&sipSelf,sipClass_String,&sipCpp,sipClass_String,&a0,&a0State,&a1))
        {
            Substring *sipRes;

            try
            {
            sipRes = new Substring(sipCpp->after(*a0,a1));
            }
            catch (...)
            {

            sipReleaseInstance(const_cast<String *>(a0),sipClass_String,a0State);
                sipRaiseUnknownException();
                return NULL;
            }

            sipReleaseInstance(const_cast<String *>(a0),sipClass_String,a0State);

            return sipConvertFromNewInstance(sipRes,sipClass_Substring,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_String,sipNm_BALL_after);

    return NULL;
}


extern "C" {static PyObject *meth_String_countFields(PyObject *, PyObject *);}
static PyObject *meth_String_countFields(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const char * a0 = String::CHARACTER_CLASS__WHITESPACE;
        String *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B|s",&sipSelf,sipClass_String,&sipCpp,&a0))
        {
            int sipRes;

            try
            {
            sipRes = sipCpp->countFields(a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_String,sipNm_BALL_countFields);

    return NULL;
}


extern "C" {static PyObject *meth_String_getField(PyObject *, PyObject *);}
static PyObject *meth_String_getField(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Index * a0;
        int a0State = 0;
        const char * a1 = String::CHARACTER_CLASS__WHITESPACE;
        String *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BM1|s",&sipSelf,sipClass_String,&sipCpp,sipMappedType_Index,&a0,&a0State,&a1))
        {
            String *sipRes;

            try
            {
            sipRes = new String(sipCpp->getField(*a0,a1));
            }
            catch (...)
            {

            sipReleaseMappedType(a0,sipMappedType_Index,a0State);
                sipRaiseUnknownException();
                return NULL;
            }

            sipReleaseMappedType(a0,sipMappedType_Index,a0State);

            return sipConvertFromNewInstance(sipRes,sipClass_String,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_String,sipNm_BALL_getField);

    return NULL;
}


extern "C" {static PyObject *meth_String_trimLeft(PyObject *, PyObject *);}
static PyObject *meth_String_trimLeft(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const char * a0 = String::CHARACTER_CLASS__WHITESPACE;
        String *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B|s",&sipSelf,sipClass_String,&sipCpp,&a0))
        {
            String *sipRes;

            try
            {
            sipRes = &sipCpp->trimLeft(a0);
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return sipConvertFromInstance(sipRes,sipClass_String,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_String,sipNm_BALL_trimLeft);

    return NULL;
}


extern "C" {static PyObject *meth_String_trimRight(PyObject *, PyObject *);}
static PyObject *meth_String_trimRight(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const char * a0 = String::CHARACTER_CLASS__WHITESPACE;
        String *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B|s",&sipSelf,sipClass_String,&sipCpp,&a0))
        {
            String *sipRes;

            try
            {
            sipRes = &sipCpp->trimRight(a0);
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return sipConvertFromInstance(sipRes,sipClass_String,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_String,sipNm_BALL_trimRight);

    return NULL;
}


extern "C" {static PyObject *meth_String_trim(PyObject *, PyObject *);}
static PyObject *meth_String_trim(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const char * a0 = String::CHARACTER_CLASS__WHITESPACE;
        String *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B|s",&sipSelf,sipClass_String,&sipCpp,&a0))
        {
            String *sipRes;

            try
            {
            sipRes = &sipCpp->trim(a0);
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return sipConvertFromInstance(sipRes,sipClass_String,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_String,sipNm_BALL_trim);

    return NULL;
}


extern "C" {static PyObject *meth_String_truncate(PyObject *, PyObject *);}
static PyObject *meth_String_truncate(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        int a0;
        String *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bi",&sipSelf,sipClass_String,&sipCpp,&a0))
        {
            String *sipRes;

            try
            {
            sipRes = &sipCpp->truncate(a0);
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return sipConvertFromInstance(sipRes,sipClass_String,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_String,sipNm_BALL_truncate);

    return NULL;
}


extern "C" {static PyObject *meth_String_left(PyObject *, PyObject *);}
static PyObject *meth_String_left(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        int a0;
        String *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bi",&sipSelf,sipClass_String,&sipCpp,&a0))
        {
            Substring *sipRes;

            try
            {
            sipRes = new Substring(sipCpp->left(a0));
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return sipConvertFromNewInstance(sipRes,sipClass_Substring,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_String,sipNm_BALL_left);

    return NULL;
}


extern "C" {static PyObject *meth_String_right(PyObject *, PyObject *);}
static PyObject *meth_String_right(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        int a0;
        String *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bi",&sipSelf,sipClass_String,&sipCpp,&a0))
        {
            Substring *sipRes;

            try
            {
            sipRes = new Substring(sipCpp->right(a0));
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return sipConvertFromNewInstance(sipRes,sipClass_Substring,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_String,sipNm_BALL_right);

    return NULL;
}


extern "C" {static PyObject *meth_String_instr(PyObject *, PyObject *);}
static PyObject *meth_String_instr(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const String * a0;
        int a0State = 0;
        int a1 = 0;
        String *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ1|i",&sipSelf,sipClass_String,&sipCpp,sipClass_String,&a0,&a0State,&a1))
        {
            Substring *sipRes;

            try
            {
            sipRes = new Substring(sipCpp->instr(*a0,a1));
            }
            catch (...)
            {

            sipReleaseInstance(const_cast<String *>(a0),sipClass_String,a0State);
                sipRaiseUnknownException();
                return NULL;
            }

            sipReleaseInstance(const_cast<String *>(a0),sipClass_String,a0State);

            return sipConvertFromNewInstance(sipRes,sipClass_Substring,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_String,sipNm_BALL_instr);

    return NULL;
}


extern "C" {static PyObject *meth_String_swap(PyObject *, PyObject *);}
static PyObject *meth_String_swap(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        String * a0;
        int a0State = 0;
        String *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ1",&sipSelf,sipClass_String,&sipCpp,sipClass_String,&a0,&a0State))
        {
            try
            {
            sipCpp->swap(*a0);
            }
            catch (...)
            {

            sipReleaseInstance(a0,sipClass_String,a0State);
                sipRaiseUnknownException();
                return NULL;
            }

            sipReleaseInstance(a0,sipClass_String,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_String,sipNm_BALL_swap);

    return NULL;
}


extern "C" {static PyObject *meth_String_reverse(PyObject *, PyObject *);}
static PyObject *meth_String_reverse(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        int a0 = 0;
        int a1 = String::EndPos;
        String *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B|ii",&sipSelf,sipClass_String,&sipCpp,&a0,&a1))
        {
            String *sipRes;

            try
            {
            sipRes = &sipCpp->reverse(a0,a1);
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return sipConvertFromInstance(sipRes,sipClass_String,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_String,sipNm_BALL_reverse);

    return NULL;
}


extern "C" {static PyObject *meth_String_substitute(PyObject *, PyObject *);}
static PyObject *meth_String_substitute(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const String * a0;
        int a0State = 0;
        const String * a1;
        int a1State = 0;
        String *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ1J1",&sipSelf,sipClass_String,&sipCpp,sipClass_String,&a0,&a0State,sipClass_String,&a1,&a1State))
        {
            Index *sipRes;

            try
            {
            sipRes = new Index(sipCpp->substitute(*a0,*a1));
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

            PyObject *sipResObj = sipConvertFromMappedType(sipRes,sipMappedType_Index,NULL);
            delete sipRes;

            return sipResObj;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_String,sipNm_BALL_substitute);

    return NULL;
}


extern "C" {static PyObject *meth_String_has(PyObject *, PyObject *);}
static PyObject *meth_String_has(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        char a0;
        String *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bc",&sipSelf,sipClass_String,&sipCpp,&a0))
        {
            bool sipRes;

            try
            {
            sipRes = sipCpp->has(a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_String,sipNm_BALL_has);

    return NULL;
}


extern "C" {static PyObject *meth_String_hasSubstring(PyObject *, PyObject *);}
static PyObject *meth_String_hasSubstring(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const String * a0;
        int a0State = 0;
        int a1 = 0;
        String *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ1|i",&sipSelf,sipClass_String,&sipCpp,sipClass_String,&a0,&a0State,&a1))
        {
            bool sipRes;

            try
            {
            sipRes = sipCpp->hasSubstring(*a0,a1);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_String,sipNm_BALL_hasSubstring);

    return NULL;
}


extern "C" {static PyObject *meth_String_hasPrefix(PyObject *, PyObject *);}
static PyObject *meth_String_hasPrefix(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const String * a0;
        int a0State = 0;
        String *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ1",&sipSelf,sipClass_String,&sipCpp,sipClass_String,&a0,&a0State))
        {
            bool sipRes;

            try
            {
            sipRes = sipCpp->hasPrefix(*a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_String,sipNm_BALL_hasPrefix);

    return NULL;
}


extern "C" {static PyObject *meth_String_hasSuffix(PyObject *, PyObject *);}
static PyObject *meth_String_hasSuffix(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const String * a0;
        int a0State = 0;
        String *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ1",&sipSelf,sipClass_String,&sipCpp,sipClass_String,&a0,&a0State))
        {
            bool sipRes;

            try
            {
            sipRes = sipCpp->hasSuffix(*a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_String,sipNm_BALL_hasSuffix);

    return NULL;
}


extern "C" {static PyObject *meth_String_isEmpty(PyObject *, PyObject *);}
static PyObject *meth_String_isEmpty(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        String *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_String,&sipCpp))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_String,sipNm_BALL_isEmpty);

    return NULL;
}


extern "C" {static PyObject *meth_String_isAlpha(PyObject *, PyObject *);}
static PyObject *meth_String_isAlpha(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        String *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_String,&sipCpp))
        {
            bool sipRes;

            try
            {
            sipRes = sipCpp->isAlpha();
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return PyBool_FromLong(sipRes);
        }
    }

    {
        char a0;
        String *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bc",&sipSelf,sipClass_String,&sipCpp,&a0))
        {
            bool sipRes;

            try
            {
            sipRes = sipCpp->isAlpha(a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_String,sipNm_BALL_isAlpha);

    return NULL;
}


extern "C" {static PyObject *meth_String_isAlnum(PyObject *, PyObject *);}
static PyObject *meth_String_isAlnum(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        String *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_String,&sipCpp))
        {
            bool sipRes;

            try
            {
            sipRes = sipCpp->isAlnum();
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return PyBool_FromLong(sipRes);
        }
    }

    {
        char a0;
        String *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bc",&sipSelf,sipClass_String,&sipCpp,&a0))
        {
            bool sipRes;

            try
            {
            sipRes = sipCpp->isAlnum(a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_String,sipNm_BALL_isAlnum);

    return NULL;
}


extern "C" {static PyObject *meth_String_isDigit(PyObject *, PyObject *);}
static PyObject *meth_String_isDigit(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        String *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_String,&sipCpp))
        {
            bool sipRes;

            try
            {
            sipRes = sipCpp->isDigit();
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return PyBool_FromLong(sipRes);
        }
    }

    {
        char a0;
        String *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bc",&sipSelf,sipClass_String,&sipCpp,&a0))
        {
            bool sipRes;

            try
            {
            sipRes = sipCpp->isDigit(a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_String,sipNm_BALL_isDigit);

    return NULL;
}


extern "C" {static PyObject *meth_String_isSpace(PyObject *, PyObject *);}
static PyObject *meth_String_isSpace(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        String *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_String,&sipCpp))
        {
            bool sipRes;

            try
            {
            sipRes = sipCpp->isSpace();
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return PyBool_FromLong(sipRes);
        }
    }

    {
        char a0;
        String *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bc",&sipSelf,sipClass_String,&sipCpp,&a0))
        {
            bool sipRes;

            try
            {
            sipRes = sipCpp->isSpace(a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_String,sipNm_BALL_isSpace);

    return NULL;
}


extern "C" {static PyObject *meth_String_isWhitespace(PyObject *, PyObject *);}
static PyObject *meth_String_isWhitespace(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        String *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_String,&sipCpp))
        {
            bool sipRes;

            try
            {
            sipRes = sipCpp->isWhitespace();
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return PyBool_FromLong(sipRes);
        }
    }

    {
        char a0;
        String *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bc",&sipSelf,sipClass_String,&sipCpp,&a0))
        {
            bool sipRes;

            try
            {
            sipRes = sipCpp->isWhitespace(a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_String,sipNm_BALL_isWhitespace);

    return NULL;
}


extern "C" {static PyObject *meth_String_compare(PyObject *, PyObject *);}
static PyObject *meth_String_compare(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const String * a0;
        int a0State = 0;
        int a1 = 0;
        String *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ1|i",&sipSelf,sipClass_String,&sipCpp,sipClass_String,&a0,&a0State,&a1))
        {
            int sipRes;

            try
            {
            sipRes = sipCpp->compare(*a0,a1);
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

    {
        const String * a0;
        int a0State = 0;
        int a1;
        int a2;
        String *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ1ii",&sipSelf,sipClass_String,&sipCpp,sipClass_String,&a0,&a0State,&a1,&a2))
        {
            int sipRes;

            try
            {
            sipRes = sipCpp->compare(*a0,a1,a2);
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

    {
        const char * a0;
        int a1 = 0;
        String *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bs|i",&sipSelf,sipClass_String,&sipCpp,&a0,&a1))
        {
            int sipRes;

            try
            {
            sipRes = sipCpp->compare(a0,a1);
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return PyInt_FromLong(sipRes);
        }
    }

    {
        const char * a0;
        int a1;
        int a2;
        String *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bsii",&sipSelf,sipClass_String,&sipCpp,&a0,&a1,&a2))
        {
            int sipRes;

            try
            {
            sipRes = sipCpp->compare(a0,a1,a2);
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return PyInt_FromLong(sipRes);
        }
    }

    {
        char a0;
        int a1 = 0;
        String *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bc|i",&sipSelf,sipClass_String,&sipCpp,&a0,&a1))
        {
            int sipRes;

            try
            {
            sipRes = sipCpp->compare(a0,a1);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_String,sipNm_BALL_compare);

    return NULL;
}


extern "C" {static PyObject *meth_String_isValid(PyObject *, PyObject *);}
static PyObject *meth_String_isValid(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        String *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_String,&sipCpp))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_String,sipNm_BALL_isValid);

    return NULL;
}


extern "C" {static PyObject *meth_String_size(PyObject *, PyObject *);}
static PyObject *meth_String_size(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        String *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_String,&sipCpp))
        {
            int sipRes;

            try
            {
            sipRes = sipCpp->size();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_String,sipNm_BALL_size);

    return NULL;
}


extern "C" {static PyObject *meth_String_c_str(PyObject *, PyObject *);}
static PyObject *meth_String_c_str(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        String *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_String,&sipCpp))
        {
            const char *sipRes;

            try
            {
            sipRes = sipCpp->c_str();
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            if (sipRes == NULL)
            {
                Py_INCREF(Py_None);
                return Py_None;
            }

            return PyString_FromString(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_String,sipNm_BALL_c_str);

    return NULL;
}


extern "C" {static PyObject *slot_String___repr__(PyObject *sipSelf);}
static PyObject *slot_String___repr__(PyObject *sipSelf)
{
    String *sipCpp = reinterpret_cast<String *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_String));

    if (!sipCpp)
        return 0;


    {
        {
            PyObject * sipRes = 0;

#line 271 "string.sip"
	if (sipCpp == 0)
	{
		sipRes = PyString_FromString("");
	}
	else
	{
		sipRes = PyString_FromString(sipCpp->c_str());
	}
#line 1859 "sipBALLString.C"

            return sipRes;
        }
    }
}


extern "C" {static PyObject *slot_String___str__(PyObject *sipSelf);}
static PyObject *slot_String___str__(PyObject *sipSelf)
{
    String *sipCpp = reinterpret_cast<String *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_String));

    if (!sipCpp)
        return 0;


    {
        {
            PyObject * sipRes = 0;

#line 259 "string.sip"
	if (sipCpp == 0)
	{
		sipRes = PyString_FromString("");
	}
	else
	{
		sipRes = PyString_FromString(sipCpp->c_str());
	}
#line 1889 "sipBALLString.C"

            return sipRes;
        }
    }
}


extern "C" {static PyObject *slot_String___gt__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_String___gt__(PyObject *sipSelf,PyObject *sipArg)
{
    String *sipCpp = reinterpret_cast<String *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_String));

    if (!sipCpp)
        return 0;

    int sipArgsParsed = 0;

    {
        const String * a0;
        int a0State = 0;

        if (sipParseArgs(&sipArgsParsed,sipArg,"J1",sipClass_String,&a0,&a0State))
        {
            bool sipRes;

            try
            {
            sipRes = ((*sipCpp) > *a0);
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

    {
        const char * a0;

        if (sipParseArgs(&sipArgsParsed,sipArg,"s",&a0))
        {
            bool sipRes;

            try
            {
            sipRes = ((*sipCpp) > a0);
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return PyBool_FromLong(sipRes);
        }
    }

    {
        char a0;

        if (sipParseArgs(&sipArgsParsed,sipArg,"c",&a0))
        {
            bool sipRes;

            try
            {
            sipRes = ((*sipCpp) > a0);
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return PyBool_FromLong(sipRes);
        }
    }

    return sipPySlotExtend(&sipModuleAPI_BALL,gt_slot,sipClass_String,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_String___ge__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_String___ge__(PyObject *sipSelf,PyObject *sipArg)
{
    String *sipCpp = reinterpret_cast<String *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_String));

    if (!sipCpp)
        return 0;

    int sipArgsParsed = 0;

    {
        const String * a0;
        int a0State = 0;

        if (sipParseArgs(&sipArgsParsed,sipArg,"J1",sipClass_String,&a0,&a0State))
        {
            bool sipRes;

            try
            {
            sipRes = ((*sipCpp) >= *a0);
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

    {
        const char * a0;

        if (sipParseArgs(&sipArgsParsed,sipArg,"s",&a0))
        {
            bool sipRes;

            try
            {
            sipRes = ((*sipCpp) >= a0);
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return PyBool_FromLong(sipRes);
        }
    }

    {
        char a0;

        if (sipParseArgs(&sipArgsParsed,sipArg,"c",&a0))
        {
            bool sipRes;

            try
            {
            sipRes = ((*sipCpp) >= a0);
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return PyBool_FromLong(sipRes);
        }
    }

    return sipPySlotExtend(&sipModuleAPI_BALL,ge_slot,sipClass_String,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_String___le__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_String___le__(PyObject *sipSelf,PyObject *sipArg)
{
    String *sipCpp = reinterpret_cast<String *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_String));

    if (!sipCpp)
        return 0;

    int sipArgsParsed = 0;

    {
        const String * a0;
        int a0State = 0;

        if (sipParseArgs(&sipArgsParsed,sipArg,"J1",sipClass_String,&a0,&a0State))
        {
            bool sipRes;

            try
            {
            sipRes = ((*sipCpp) <= *a0);
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

    {
        const char * a0;

        if (sipParseArgs(&sipArgsParsed,sipArg,"s",&a0))
        {
            bool sipRes;

            try
            {
            sipRes = ((*sipCpp) <= a0);
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return PyBool_FromLong(sipRes);
        }
    }

    {
        char a0;

        if (sipParseArgs(&sipArgsParsed,sipArg,"c",&a0))
        {
            bool sipRes;

            try
            {
            sipRes = ((*sipCpp) <= a0);
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return PyBool_FromLong(sipRes);
        }
    }

    return sipPySlotExtend(&sipModuleAPI_BALL,le_slot,sipClass_String,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_String___lt__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_String___lt__(PyObject *sipSelf,PyObject *sipArg)
{
    String *sipCpp = reinterpret_cast<String *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_String));

    if (!sipCpp)
        return 0;

    int sipArgsParsed = 0;

    {
        const String * a0;
        int a0State = 0;

        if (sipParseArgs(&sipArgsParsed,sipArg,"J1",sipClass_String,&a0,&a0State))
        {
            bool sipRes;

            try
            {
            sipRes = ((*sipCpp) < *a0);
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

    {
        const char * a0;

        if (sipParseArgs(&sipArgsParsed,sipArg,"s",&a0))
        {
            bool sipRes;

            try
            {
            sipRes = ((*sipCpp) < a0);
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return PyBool_FromLong(sipRes);
        }
    }

    {
        char a0;

        if (sipParseArgs(&sipArgsParsed,sipArg,"c",&a0))
        {
            bool sipRes;

            try
            {
            sipRes = ((*sipCpp) < a0);
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return PyBool_FromLong(sipRes);
        }
    }

    return sipPySlotExtend(&sipModuleAPI_BALL,lt_slot,sipClass_String,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_String___ne__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_String___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    String *sipCpp = reinterpret_cast<String *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_String));

    if (!sipCpp)
        return 0;

    int sipArgsParsed = 0;

    {
        const String * a0;
        int a0State = 0;

        if (sipParseArgs(&sipArgsParsed,sipArg,"J1",sipClass_String,&a0,&a0State))
        {
            bool sipRes;

            try
            {
            sipRes = ((*sipCpp) != *a0);
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

    {
        const char * a0;

        if (sipParseArgs(&sipArgsParsed,sipArg,"s",&a0))
        {
            bool sipRes;

            try
            {
            sipRes = ((*sipCpp) != a0);
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return PyBool_FromLong(sipRes);
        }
    }

    {
        char a0;

        if (sipParseArgs(&sipArgsParsed,sipArg,"c",&a0))
        {
            bool sipRes;

            try
            {
            sipRes = ((*sipCpp) != a0);
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return PyBool_FromLong(sipRes);
        }
    }

    return sipPySlotExtend(&sipModuleAPI_BALL,ne_slot,sipClass_String,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_String___eq__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_String___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    String *sipCpp = reinterpret_cast<String *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_String));

    if (!sipCpp)
        return 0;

    int sipArgsParsed = 0;

    {
        const String * a0;
        int a0State = 0;

        if (sipParseArgs(&sipArgsParsed,sipArg,"J1",sipClass_String,&a0,&a0State))
        {
            bool sipRes;

            try
            {
            sipRes = ((*sipCpp) == *a0);
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

    {
        const char * a0;

        if (sipParseArgs(&sipArgsParsed,sipArg,"s",&a0))
        {
            bool sipRes;

            try
            {
            sipRes = ((*sipCpp) == a0);
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return PyBool_FromLong(sipRes);
        }
    }

    {
        char a0;

        if (sipParseArgs(&sipArgsParsed,sipArg,"c",&a0))
        {
            bool sipRes;

            try
            {
            sipRes = ((*sipCpp) == a0);
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return PyBool_FromLong(sipRes);
        }
    }

    return sipPySlotExtend(&sipModuleAPI_BALL,eq_slot,sipClass_String,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_String___add__(PyObject *sipArg0,PyObject *sipArg1);}
static PyObject *slot_String___add__(PyObject *sipArg0,PyObject *sipArg1)
{
    int sipArgsParsed = 0;

    {
        String * a0;
        int a0State = 0;
        const String * a1;
        int a1State = 0;

        if (sipParsePair(&sipArgsParsed,sipArg0,sipArg1,"J1J1",sipClass_String,&a0,&a0State,sipClass_String,&a1,&a1State))
        {
            String *sipRes;

            try
            {
            sipRes = new String((*a0 + *a1));
            }
            catch (...)
            {

            sipReleaseInstance(a0,sipClass_String,a0State);
            sipReleaseInstance(const_cast<String *>(a1),sipClass_String,a1State);
                sipRaiseUnknownException();
                return NULL;
            }

            sipReleaseInstance(a0,sipClass_String,a0State);
            sipReleaseInstance(const_cast<String *>(a1),sipClass_String,a1State);

            return sipConvertFromNewInstance(sipRes,sipClass_String,NULL);
        }
    }

    {
        String * a0;
        int a0State = 0;
        const char * a1;

        if (sipParsePair(&sipArgsParsed,sipArg0,sipArg1,"J1s",sipClass_String,&a0,&a0State,&a1))
        {
            String *sipRes;

            try
            {
            sipRes = new String((*a0 + a1));
            }
            catch (...)
            {

            sipReleaseInstance(a0,sipClass_String,a0State);
                sipRaiseUnknownException();
                return NULL;
            }

            sipReleaseInstance(a0,sipClass_String,a0State);

            return sipConvertFromNewInstance(sipRes,sipClass_String,NULL);
        }
    }

    {
        String * a0;
        int a0State = 0;
        char a1;

        if (sipParsePair(&sipArgsParsed,sipArg0,sipArg1,"J1c",sipClass_String,&a0,&a0State,&a1))
        {
            String *sipRes;

            try
            {
            sipRes = new String((*a0 + a1));
            }
            catch (...)
            {

            sipReleaseInstance(a0,sipClass_String,a0State);
                sipRaiseUnknownException();
                return NULL;
            }

            sipReleaseInstance(a0,sipClass_String,a0State);

            return sipConvertFromNewInstance(sipRes,sipClass_String,NULL);
        }
    }

    return sipPySlotExtend(&sipModuleAPI_BALL,add_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_String___call__(PyObject *sipSelf,PyObject *sipArgs);}
static PyObject *slot_String___call__(PyObject *sipSelf,PyObject *sipArgs)
{
    String *sipCpp = reinterpret_cast<String *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_String));

    if (!sipCpp)
        return 0;

    int sipArgsParsed = 0;

    {
        int a0;
        int a1 = String::EndPos;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"i|i",&a0,&a1))
        {
            Substring *sipRes = 0;

#line 171 "string.sip"
	sipRes = new Substring(sipCpp->operator () (a0, a1));
#line 2502 "sipBALLString.C"

            return sipConvertFromNewInstance(sipRes,sipClass_Substring,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_String,sipNm_BALL___call__);

    return 0;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_String(void *, sipWrapperType *);}
static void *cast_String(void *ptr,sipWrapperType *targetClass)
{
    if (targetClass == sipClass_String)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_String(void *, int);}
static void release_String(void *ptr,int)
{
    delete reinterpret_cast<String *>(ptr);
}


extern "C" {static void dealloc_String(sipWrapper *);}
static void dealloc_String(sipWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_String(sipSelf->u.cppPtr,0);
    }
}


extern "C" {static void *init_String(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_String(sipWrapper *,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    String *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            try
            {
            sipCpp = new String();
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
            sipCpp = new String(*a0);
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
        const String * a0;
        int a0State = 0;
        Index * a1;
        int a1State = 0;
        int a2 = String::EndPos;

        if (sipParseArgs(sipArgsParsed,sipArgs,"J1M1|i",sipClass_String,&a0,&a0State,sipMappedType_Index,&a1,&a1State,&a2))
        {
            try
            {
            sipCpp = new String(*a0,*a1,a2);
            }
            catch (NullPointer &sipExceptionRef)
            {

            sipReleaseInstance(const_cast<String *>(a0),sipClass_String,a0State);
            sipReleaseMappedType(a1,sipMappedType_Index,a1State);
                /* Hope that there is a valid copy ctor. */
                NullPointer *sipExceptionCopy = new NullPointer(sipExceptionRef);

                sipRaiseClassException(sipClass_NullPointer,sipExceptionCopy);

                return NULL;
            }
            catch (IndexOverflow &sipExceptionRef)
            {

            sipReleaseInstance(const_cast<String *>(a0),sipClass_String,a0State);
            sipReleaseMappedType(a1,sipMappedType_Index,a1State);
                /* Hope that there is a valid copy ctor. */
                IndexOverflow *sipExceptionCopy = new IndexOverflow(sipExceptionRef);

                sipRaiseClassException(sipClass_IndexOverflow,sipExceptionCopy);

                return NULL;
            }
            catch (IndexUnderflow &sipExceptionRef)
            {

            sipReleaseInstance(const_cast<String *>(a0),sipClass_String,a0State);
            sipReleaseMappedType(a1,sipMappedType_Index,a1State);
                /* Hope that there is a valid copy ctor. */
                IndexUnderflow *sipExceptionCopy = new IndexUnderflow(sipExceptionRef);

                sipRaiseClassException(sipClass_IndexUnderflow,sipExceptionCopy);

                return NULL;
            }

            sipReleaseInstance(const_cast<String *>(a0),sipClass_String,a0State);
            sipReleaseMappedType(a1,sipMappedType_Index,a1State);
        }
    }

    if (!sipCpp)
    {
        const char * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"s",&a0))
        {
            try
            {
            sipCpp = new String(a0);
            }
            catch (NullPointer &sipExceptionRef)
            {
                /* Hope that there is a valid copy ctor. */
                NullPointer *sipExceptionCopy = new NullPointer(sipExceptionRef);

                sipRaiseClassException(sipClass_NullPointer,sipExceptionCopy);

                return NULL;
            }
            catch (IndexOverflow &sipExceptionRef)
            {
                /* Hope that there is a valid copy ctor. */
                IndexOverflow *sipExceptionCopy = new IndexOverflow(sipExceptionRef);

                sipRaiseClassException(sipClass_IndexOverflow,sipExceptionCopy);

                return NULL;
            }
            catch (IndexUnderflow &sipExceptionRef)
            {
                /* Hope that there is a valid copy ctor. */
                IndexUnderflow *sipExceptionCopy = new IndexUnderflow(sipExceptionRef);

                sipRaiseClassException(sipClass_IndexUnderflow,sipExceptionCopy);

                return NULL;
            }
        }
    }

    if (!sipCpp)
    {
        const char * a0;
        Index * a1;
        int a1State = 0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"sM1",&a0,sipMappedType_Index,&a1,&a1State))
        {
            try
            {
            sipCpp = new String(a0,*a1);
            }
            catch (NullPointer &sipExceptionRef)
            {

            sipReleaseMappedType(a1,sipMappedType_Index,a1State);
                /* Hope that there is a valid copy ctor. */
                NullPointer *sipExceptionCopy = new NullPointer(sipExceptionRef);

                sipRaiseClassException(sipClass_NullPointer,sipExceptionCopy);

                return NULL;
            }
            catch (IndexOverflow &sipExceptionRef)
            {

            sipReleaseMappedType(a1,sipMappedType_Index,a1State);
                /* Hope that there is a valid copy ctor. */
                IndexOverflow *sipExceptionCopy = new IndexOverflow(sipExceptionRef);

                sipRaiseClassException(sipClass_IndexOverflow,sipExceptionCopy);

                return NULL;
            }
            catch (IndexUnderflow &sipExceptionRef)
            {

            sipReleaseMappedType(a1,sipMappedType_Index,a1State);
                /* Hope that there is a valid copy ctor. */
                IndexUnderflow *sipExceptionCopy = new IndexUnderflow(sipExceptionRef);

                sipRaiseClassException(sipClass_IndexUnderflow,sipExceptionCopy);

                return NULL;
            }

            sipReleaseMappedType(a1,sipMappedType_Index,a1State);
        }
    }

    if (!sipCpp)
    {
        const char * a0;
        Index * a1;
        int a1State = 0;
        int a2;

        if (sipParseArgs(sipArgsParsed,sipArgs,"sM1i",&a0,sipMappedType_Index,&a1,&a1State,&a2))
        {
            try
            {
            sipCpp = new String(a0,*a1,a2);
            }
            catch (NullPointer &sipExceptionRef)
            {

            sipReleaseMappedType(a1,sipMappedType_Index,a1State);
                /* Hope that there is a valid copy ctor. */
                NullPointer *sipExceptionCopy = new NullPointer(sipExceptionRef);

                sipRaiseClassException(sipClass_NullPointer,sipExceptionCopy);

                return NULL;
            }
            catch (IndexOverflow &sipExceptionRef)
            {

            sipReleaseMappedType(a1,sipMappedType_Index,a1State);
                /* Hope that there is a valid copy ctor. */
                IndexOverflow *sipExceptionCopy = new IndexOverflow(sipExceptionRef);

                sipRaiseClassException(sipClass_IndexOverflow,sipExceptionCopy);

                return NULL;
            }
            catch (IndexUnderflow &sipExceptionRef)
            {

            sipReleaseMappedType(a1,sipMappedType_Index,a1State);
                /* Hope that there is a valid copy ctor. */
                IndexUnderflow *sipExceptionCopy = new IndexUnderflow(sipExceptionRef);

                sipRaiseClassException(sipClass_IndexUnderflow,sipExceptionCopy);

                return NULL;
            }

            sipReleaseMappedType(a1,sipMappedType_Index,a1State);
        }
    }

    if (!sipCpp)
    {
        double a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"d",&a0))
        {
            try
            {
            sipCpp = new String(a0);
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


extern "C" {static PyObject *var_String_CHARACTER_CLASS__WHITESPACE(PyObject *, PyObject *);}
static PyObject *var_String_CHARACTER_CLASS__WHITESPACE(PyObject *sipSelf,PyObject *sipPy)
{
   const char *sipVal;
    String *sipCpp = reinterpret_cast<String *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_String));

    if (!sipCpp)
        return NULL;

    if (sipPy == NULL)
    {
        sipVal = sipCpp->CHARACTER_CLASS__WHITESPACE;

        sipPy = PyString_FromString(sipVal);

        return sipPy;
    }

	sipVal = PyString_AsString(sipPy);

    if (sipVal == NULL)
    {
        sipBadSetType(sipNm_BALL_String,sipNm_BALL_CHARACTER_CLASS__WHITESPACE);
        return NULL;
    }

    sipCpp->CHARACTER_CLASS__WHITESPACE = sipVal;

    Py_INCREF(Py_None);
    return Py_None;
}


extern "C" {static PyObject *var_String_CHARACTER_CLASS__ASCII_NUMERIC(PyObject *, PyObject *);}
static PyObject *var_String_CHARACTER_CLASS__ASCII_NUMERIC(PyObject *sipSelf,PyObject *sipPy)
{
   const char *sipVal;
    String *sipCpp = reinterpret_cast<String *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_String));

    if (!sipCpp)
        return NULL;

    if (sipPy == NULL)
    {
        sipVal = sipCpp->CHARACTER_CLASS__ASCII_NUMERIC;

        sipPy = PyString_FromString(sipVal);

        return sipPy;
    }

	sipVal = PyString_AsString(sipPy);

    if (sipVal == NULL)
    {
        sipBadSetType(sipNm_BALL_String,sipNm_BALL_CHARACTER_CLASS__ASCII_NUMERIC);
        return NULL;
    }

    sipCpp->CHARACTER_CLASS__ASCII_NUMERIC = sipVal;

    Py_INCREF(Py_None);
    return Py_None;
}


extern "C" {static PyObject *var_String_CHARACTER_CLASS__ASCII_UPPER(PyObject *, PyObject *);}
static PyObject *var_String_CHARACTER_CLASS__ASCII_UPPER(PyObject *sipSelf,PyObject *sipPy)
{
   const char *sipVal;
    String *sipCpp = reinterpret_cast<String *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_String));

    if (!sipCpp)
        return NULL;

    if (sipPy == NULL)
    {
        sipVal = sipCpp->CHARACTER_CLASS__ASCII_UPPER;

        sipPy = PyString_FromString(sipVal);

        return sipPy;
    }

	sipVal = PyString_AsString(sipPy);

    if (sipVal == NULL)
    {
        sipBadSetType(sipNm_BALL_String,sipNm_BALL_CHARACTER_CLASS__ASCII_UPPER);
        return NULL;
    }

    sipCpp->CHARACTER_CLASS__ASCII_UPPER = sipVal;

    Py_INCREF(Py_None);
    return Py_None;
}


extern "C" {static PyObject *var_String_CHARACTER_CLASS__ASCII_LOWER(PyObject *, PyObject *);}
static PyObject *var_String_CHARACTER_CLASS__ASCII_LOWER(PyObject *sipSelf,PyObject *sipPy)
{
   const char *sipVal;
    String *sipCpp = reinterpret_cast<String *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_String));

    if (!sipCpp)
        return NULL;

    if (sipPy == NULL)
    {
        sipVal = sipCpp->CHARACTER_CLASS__ASCII_LOWER;

        sipPy = PyString_FromString(sipVal);

        return sipPy;
    }

	sipVal = PyString_AsString(sipPy);

    if (sipVal == NULL)
    {
        sipBadSetType(sipNm_BALL_String,sipNm_BALL_CHARACTER_CLASS__ASCII_LOWER);
        return NULL;
    }

    sipCpp->CHARACTER_CLASS__ASCII_LOWER = sipVal;

    Py_INCREF(Py_None);
    return Py_None;
}


extern "C" {static PyObject *var_String_CHARACTER_CLASS__ASCII_ALPHANUMERIC(PyObject *, PyObject *);}
static PyObject *var_String_CHARACTER_CLASS__ASCII_ALPHANUMERIC(PyObject *sipSelf,PyObject *sipPy)
{
   const char *sipVal;
    String *sipCpp = reinterpret_cast<String *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_String));

    if (!sipCpp)
        return NULL;

    if (sipPy == NULL)
    {
        sipVal = sipCpp->CHARACTER_CLASS__ASCII_ALPHANUMERIC;

        sipPy = PyString_FromString(sipVal);

        return sipPy;
    }

	sipVal = PyString_AsString(sipPy);

    if (sipVal == NULL)
    {
        sipBadSetType(sipNm_BALL_String,sipNm_BALL_CHARACTER_CLASS__ASCII_ALPHANUMERIC);
        return NULL;
    }

    sipCpp->CHARACTER_CLASS__ASCII_ALPHANUMERIC = sipVal;

    Py_INCREF(Py_None);
    return Py_None;
}


extern "C" {static PyObject *var_String_CHARACTER_CLASS__ASCII_ALPHA(PyObject *, PyObject *);}
static PyObject *var_String_CHARACTER_CLASS__ASCII_ALPHA(PyObject *sipSelf,PyObject *sipPy)
{
   const char *sipVal;
    String *sipCpp = reinterpret_cast<String *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_String));

    if (!sipCpp)
        return NULL;

    if (sipPy == NULL)
    {
        sipVal = sipCpp->CHARACTER_CLASS__ASCII_ALPHA;

        sipPy = PyString_FromString(sipVal);

        return sipPy;
    }

	sipVal = PyString_AsString(sipPy);

    if (sipVal == NULL)
    {
        sipBadSetType(sipNm_BALL_String,sipNm_BALL_CHARACTER_CLASS__ASCII_ALPHA);
        return NULL;
    }

    sipCpp->CHARACTER_CLASS__ASCII_ALPHA = sipVal;

    Py_INCREF(Py_None);
    return Py_None;
}

PyMethodDef variables_String[] = {
    {sipNm_BALL_CHARACTER_CLASS__WHITESPACE, var_String_CHARACTER_CLASS__WHITESPACE, 0, NULL},
    {sipNm_BALL_CHARACTER_CLASS__ASCII_NUMERIC, var_String_CHARACTER_CLASS__ASCII_NUMERIC, 0, NULL},
    {sipNm_BALL_CHARACTER_CLASS__ASCII_UPPER, var_String_CHARACTER_CLASS__ASCII_UPPER, 0, NULL},
    {sipNm_BALL_CHARACTER_CLASS__ASCII_LOWER, var_String_CHARACTER_CLASS__ASCII_LOWER, 0, NULL},
    {sipNm_BALL_CHARACTER_CLASS__ASCII_ALPHANUMERIC, var_String_CHARACTER_CLASS__ASCII_ALPHANUMERIC, 0, NULL},
    {sipNm_BALL_CHARACTER_CLASS__ASCII_ALPHA, var_String_CHARACTER_CLASS__ASCII_ALPHA, 0, NULL},
    {0, 0, 0, 0}
};


extern "C" {static int convertTo_String(PyObject *, void **, int *, PyObject *);}
static int convertTo_String(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *)
{
    String **sipCppPtr = reinterpret_cast<String **>(sipCppPtrV);

#line 282 "string.sip"
  if (sipIsErr == NULL)
    return (PyString_Check(sipPy) || sipIsSubClassInstance(sipPy,sipClass_String));

  if (sipPy == Py_None)
  {
    *sipCppPtr = new String;

    return 1;
  }
  if (PyString_Check(sipPy))
  {
    *sipCppPtr = new String(PyString_AS_STRING(sipPy));

    return 1;
  }

  *sipCppPtr = (String *)sipConvertToCpp(sipPy,sipClass_String,sipIsErr);

  return 0;
#line 3040 "sipBALLString.C"
}


extern "C" {static void *forceConvertTo_String(PyObject *, int *);}
static void *forceConvertTo_String(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (convertTo_String(valobj,NULL,NULL,NULL))
    {
        void *val;

        /*
         * Note that we throw away the flag that says if the value
         * has just been created on the heap or not.
         */
        convertTo_String(valobj,&val,iserrp,NULL);

        return val;
    }

    sipBadClass(sipNm_BALL_String);

    *iserrp = 1;

    return NULL;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_String[] = {
    {(void *)slot_String___repr__, repr_slot},
    {(void *)slot_String___str__, str_slot},
    {(void *)slot_String___gt__, gt_slot},
    {(void *)slot_String___ge__, ge_slot},
    {(void *)slot_String___le__, le_slot},
    {(void *)slot_String___lt__, lt_slot},
    {(void *)slot_String___ne__, ne_slot},
    {(void *)slot_String___eq__, eq_slot},
    {(void *)slot_String___add__, add_slot},
    {(void *)slot_String___call__, call_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_String[] = {
    {sipNm_BALL_after, meth_String_after, METH_VARARGS, NULL},
    {sipNm_BALL_before, meth_String_before, METH_VARARGS, NULL},
    {sipNm_BALL_c_str, meth_String_c_str, METH_VARARGS, NULL},
    {sipNm_BALL_compare, meth_String_compare, METH_VARARGS, NULL},
    {sipNm_BALL_countFields, meth_String_countFields, METH_VARARGS, NULL},
    {sipNm_BALL_destroy, meth_String_destroy, METH_VARARGS, NULL},
    {sipNm_BALL_from, meth_String_from, METH_VARARGS, NULL},
    {sipNm_BALL_getCompareMode, meth_String_getCompareMode, METH_VARARGS, NULL},
    {sipNm_BALL_getField, meth_String_getField, METH_VARARGS, NULL},
    {sipNm_BALL_getSubstring, meth_String_getSubstring, METH_VARARGS, NULL},
    {sipNm_BALL_has, meth_String_has, METH_VARARGS, NULL},
    {sipNm_BALL_hasPrefix, meth_String_hasPrefix, METH_VARARGS, NULL},
    {sipNm_BALL_hasSubstring, meth_String_hasSubstring, METH_VARARGS, NULL},
    {sipNm_BALL_hasSuffix, meth_String_hasSuffix, METH_VARARGS, NULL},
    {sipNm_BALL_instr, meth_String_instr, METH_VARARGS, NULL},
    {sipNm_BALL_isAlnum, meth_String_isAlnum, METH_VARARGS, NULL},
    {sipNm_BALL_isAlpha, meth_String_isAlpha, METH_VARARGS, NULL},
    {sipNm_BALL_isDigit, meth_String_isDigit, METH_VARARGS, NULL},
    {sipNm_BALL_isEmpty, meth_String_isEmpty, METH_VARARGS, NULL},
    {sipNm_BALL_isSpace, meth_String_isSpace, METH_VARARGS, NULL},
    {sipNm_BALL_isValid, meth_String_isValid, METH_VARARGS, NULL},
    {sipNm_BALL_isWhitespace, meth_String_isWhitespace, METH_VARARGS, NULL},
    {sipNm_BALL_left, meth_String_left, METH_VARARGS, NULL},
    {sipNm_BALL_reverse, meth_String_reverse, METH_VARARGS, NULL},
    {sipNm_BALL_right, meth_String_right, METH_VARARGS, NULL},
    {sipNm_BALL_set, meth_String_set, METH_VARARGS, NULL},
    {sipNm_BALL_setCompareMode, meth_String_setCompareMode, METH_VARARGS, NULL},
    {sipNm_BALL_size, meth_String_size, METH_VARARGS, NULL},
    {sipNm_BALL_substitute, meth_String_substitute, METH_VARARGS, NULL},
    {sipNm_BALL_swap, meth_String_swap, METH_VARARGS, NULL},
    {sipNm_BALL_through, meth_String_through, METH_VARARGS, NULL},
    {sipNm_BALL_toBool, meth_String_toBool, METH_VARARGS, NULL},
    {sipNm_BALL_toChar, meth_String_toChar, METH_VARARGS, NULL},
    {sipNm_BALL_toDouble, meth_String_toDouble, METH_VARARGS, NULL},
    {sipNm_BALL_toFloat, meth_String_toFloat, METH_VARARGS, NULL},
    {sipNm_BALL_toInt, meth_String_toInt, METH_VARARGS, NULL},
    {sipNm_BALL_toLong, meth_String_toLong, METH_VARARGS, NULL},
    {sipNm_BALL_toLower, meth_String_toLower, METH_VARARGS, NULL},
    {sipNm_BALL_toShort, meth_String_toShort, METH_VARARGS, NULL},
    {sipNm_BALL_toUpper, meth_String_toUpper, METH_VARARGS, NULL},
    {sipNm_BALL_trim, meth_String_trim, METH_VARARGS, NULL},
    {sipNm_BALL_trimLeft, meth_String_trimLeft, METH_VARARGS, NULL},
    {sipNm_BALL_trimRight, meth_String_trimRight, METH_VARARGS, NULL},
    {sipNm_BALL_truncate, meth_String_truncate, METH_VARARGS, NULL}
};

static sipEnumMemberDef enummembers_String[] = {
    {sipNm_BALL_CASE_INSENSITIVE, String::CASE_INSENSITIVE, 33},
    {sipNm_BALL_CASE_SENSITIVE, String::CASE_SENSITIVE, 33},
};


sipTypeDef sipType_BALL_String = {
    0,
    0,
    "BALL.String",
    0,
    {0, 0, 1},
    0,
    slots_String,
    44, methods_String,
    2, enummembers_String,
    variables_String,
    init_String,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_String,
    cast_String,
    release_String,
    forceConvertTo_String,
    convertTo_String,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
