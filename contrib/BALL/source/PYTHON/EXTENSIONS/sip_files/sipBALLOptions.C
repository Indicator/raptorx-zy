/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLOptions.h"

#include "sipBALLIllegalKey.h"
#include "sipBALLOptions.h"
#include "sipBALLString.h"
#include "sipBALLVector3.h"



extern "C" {static PyObject *meth_Options_isInteger(PyObject *, PyObject *);}
static PyObject *meth_Options_isInteger(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const String * a0;
        int a0State = 0;
        Options *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ1",&sipSelf,sipClass_Options,&sipCpp,sipClass_String,&a0,&a0State))
        {
            bool sipRes;

            try
            {
            sipRes = sipCpp->isInteger(*a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Options,sipNm_BALL_isInteger);

    return NULL;
}


extern "C" {static PyObject *meth_Options_isBool(PyObject *, PyObject *);}
static PyObject *meth_Options_isBool(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const String * a0;
        int a0State = 0;
        Options *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ1",&sipSelf,sipClass_Options,&sipCpp,sipClass_String,&a0,&a0State))
        {
            bool sipRes;

            try
            {
            sipRes = sipCpp->isBool(*a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Options,sipNm_BALL_isBool);

    return NULL;
}


extern "C" {static PyObject *meth_Options_isReal(PyObject *, PyObject *);}
static PyObject *meth_Options_isReal(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const String * a0;
        int a0State = 0;
        Options *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ1",&sipSelf,sipClass_Options,&sipCpp,sipClass_String,&a0,&a0State))
        {
            bool sipRes;

            try
            {
            sipRes = sipCpp->isReal(*a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Options,sipNm_BALL_isReal);

    return NULL;
}


extern "C" {static PyObject *meth_Options_isVector(PyObject *, PyObject *);}
static PyObject *meth_Options_isVector(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const String * a0;
        int a0State = 0;
        Options *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ1",&sipSelf,sipClass_Options,&sipCpp,sipClass_String,&a0,&a0State))
        {
            bool sipRes;

            try
            {
            sipRes = sipCpp->isVector(*a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Options,sipNm_BALL_isVector);

    return NULL;
}


extern "C" {static PyObject *meth_Options_isSet(PyObject *, PyObject *);}
static PyObject *meth_Options_isSet(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const String * a0;
        int a0State = 0;
        Options *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ1",&sipSelf,sipClass_Options,&sipCpp,sipClass_String,&a0,&a0State))
        {
            bool sipRes;

            try
            {
            sipRes = sipCpp->isSet(*a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Options,sipNm_BALL_isSet);

    return NULL;
}


extern "C" {static PyObject *meth_Options_setName(PyObject *, PyObject *);}
static PyObject *meth_Options_setName(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const String * a0;
        int a0State = 0;
        Options *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ1",&sipSelf,sipClass_Options,&sipCpp,sipClass_String,&a0,&a0State))
        {
            try
            {
            sipCpp->setName(*a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Options,sipNm_BALL_setName);

    return NULL;
}


extern "C" {static PyObject *meth_Options_getName(PyObject *, PyObject *);}
static PyObject *meth_Options_getName(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Options *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Options,&sipCpp))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Options,sipNm_BALL_getName);

    return NULL;
}


extern "C" {static PyObject *meth_Options_get(PyObject *, PyObject *);}
static PyObject *meth_Options_get(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const String * a0;
        int a0State = 0;
        Options *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ1",&sipSelf,sipClass_Options,&sipCpp,sipClass_String,&a0,&a0State))
        {
            String *sipRes;

            try
            {
            sipRes = new String(sipCpp->get(*a0));
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Options,sipNm_BALL_get);

    return NULL;
}


extern "C" {static PyObject *meth_Options_getBool(PyObject *, PyObject *);}
static PyObject *meth_Options_getBool(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const String * a0;
        int a0State = 0;
        Options *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ1",&sipSelf,sipClass_Options,&sipCpp,sipClass_String,&a0,&a0State))
        {
            bool sipRes;

            try
            {
            sipRes = sipCpp->getBool(*a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Options,sipNm_BALL_getBool);

    return NULL;
}


extern "C" {static PyObject *meth_Options_getReal(PyObject *, PyObject *);}
static PyObject *meth_Options_getReal(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const String * a0;
        int a0State = 0;
        Options *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ1",&sipSelf,sipClass_Options,&sipCpp,sipClass_String,&a0,&a0State))
        {
            double sipRes;

            try
            {
            sipRes = sipCpp->getReal(*a0);
            }
            catch (...)
            {

            sipReleaseInstance(const_cast<String *>(a0),sipClass_String,a0State);
                sipRaiseUnknownException();
                return NULL;
            }

            sipReleaseInstance(const_cast<String *>(a0),sipClass_String,a0State);

            return PyFloat_FromDouble(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Options,sipNm_BALL_getReal);

    return NULL;
}


extern "C" {static PyObject *meth_Options_getVector(PyObject *, PyObject *);}
static PyObject *meth_Options_getVector(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const String * a0;
        int a0State = 0;
        Options *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ1",&sipSelf,sipClass_Options,&sipCpp,sipClass_String,&a0,&a0State))
        {
            Vector3 *sipRes;

            try
            {
            sipRes = new Vector3(sipCpp->getVector(*a0));
            }
            catch (...)
            {

            sipReleaseInstance(const_cast<String *>(a0),sipClass_String,a0State);
                sipRaiseUnknownException();
                return NULL;
            }

            sipReleaseInstance(const_cast<String *>(a0),sipClass_String,a0State);

            return sipConvertFromNewInstance(sipRes,sipClass_Vector3,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Options,sipNm_BALL_getVector);

    return NULL;
}


extern "C" {static PyObject *meth_Options_getInteger(PyObject *, PyObject *);}
static PyObject *meth_Options_getInteger(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const String * a0;
        int a0State = 0;
        Options *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ1",&sipSelf,sipClass_Options,&sipCpp,sipClass_String,&a0,&a0State))
        {
            long sipRes;

            try
            {
            sipRes = sipCpp->getInteger(*a0);
            }
            catch (...)
            {

            sipReleaseInstance(const_cast<String *>(a0),sipClass_String,a0State);
                sipRaiseUnknownException();
                return NULL;
            }

            sipReleaseInstance(const_cast<String *>(a0),sipClass_String,a0State);

            return PyLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Options,sipNm_BALL_getInteger);

    return NULL;
}


extern "C" {static PyObject *meth_Options_set(PyObject *, PyObject *);}
static PyObject *meth_Options_set(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const String * a0;
        int a0State = 0;
        const String * a1;
        int a1State = 0;
        Options *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ1J1",&sipSelf,sipClass_Options,&sipCpp,sipClass_String,&a0,&a0State,sipClass_String,&a1,&a1State))
        {
            try
            {
            sipCpp->set(*a0,*a1);
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

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Options,sipNm_BALL_set);

    return NULL;
}


extern "C" {static PyObject *meth_Options_setReal(PyObject *, PyObject *);}
static PyObject *meth_Options_setReal(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const String * a0;
        int a0State = 0;
        double a1;
        Options *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ1d",&sipSelf,sipClass_Options,&sipCpp,sipClass_String,&a0,&a0State,&a1))
        {
            try
            {
            sipCpp->setReal(*a0,a1);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Options,sipNm_BALL_setReal);

    return NULL;
}


extern "C" {static PyObject *meth_Options_setVector(PyObject *, PyObject *);}
static PyObject *meth_Options_setVector(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const String * a0;
        int a0State = 0;
        const Vector3 * a1;
        Options *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ1JA",&sipSelf,sipClass_Options,&sipCpp,sipClass_String,&a0,&a0State,sipClass_Vector3,&a1))
        {
            try
            {
            sipCpp->setVector(*a0,*a1);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Options,sipNm_BALL_setVector);

    return NULL;
}


extern "C" {static PyObject *meth_Options_setInteger(PyObject *, PyObject *);}
static PyObject *meth_Options_setInteger(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const String * a0;
        int a0State = 0;
        long a1;
        Options *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ1l",&sipSelf,sipClass_Options,&sipCpp,sipClass_String,&a0,&a0State,&a1))
        {
            try
            {
            sipCpp->setInteger(*a0,a1);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Options,sipNm_BALL_setInteger);

    return NULL;
}


extern "C" {static PyObject *meth_Options_setBool(PyObject *, PyObject *);}
static PyObject *meth_Options_setBool(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const String * a0;
        int a0State = 0;
        bool a1;
        Options *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ1b",&sipSelf,sipClass_Options,&sipCpp,sipClass_String,&a0,&a0State,&a1))
        {
            try
            {
            sipCpp->setBool(*a0,a1);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Options,sipNm_BALL_setBool);

    return NULL;
}


extern "C" {static PyObject *meth_Options_setDefault(PyObject *, PyObject *);}
static PyObject *meth_Options_setDefault(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const String * a0;
        int a0State = 0;
        const String * a1;
        int a1State = 0;
        Options *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ1J1",&sipSelf,sipClass_Options,&sipCpp,sipClass_String,&a0,&a0State,sipClass_String,&a1,&a1State))
        {
            String *sipRes;

            try
            {
            sipRes = new String(sipCpp->setDefault(*a0,*a1));
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Options,sipNm_BALL_setDefault);

    return NULL;
}


extern "C" {static PyObject *meth_Options_setDefaultInteger(PyObject *, PyObject *);}
static PyObject *meth_Options_setDefaultInteger(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const String * a0;
        int a0State = 0;
        long a1;
        Options *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ1l",&sipSelf,sipClass_Options,&sipCpp,sipClass_String,&a0,&a0State,&a1))
        {
            long sipRes;

            try
            {
            sipRes = sipCpp->setDefaultInteger(*a0,a1);
            }
            catch (...)
            {

            sipReleaseInstance(const_cast<String *>(a0),sipClass_String,a0State);
                sipRaiseUnknownException();
                return NULL;
            }

            sipReleaseInstance(const_cast<String *>(a0),sipClass_String,a0State);

            return PyLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Options,sipNm_BALL_setDefaultInteger);

    return NULL;
}


extern "C" {static PyObject *meth_Options_setDefaultReal(PyObject *, PyObject *);}
static PyObject *meth_Options_setDefaultReal(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const String * a0;
        int a0State = 0;
        double a1;
        Options *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ1d",&sipSelf,sipClass_Options,&sipCpp,sipClass_String,&a0,&a0State,&a1))
        {
            double sipRes;

            try
            {
            sipRes = sipCpp->setDefaultReal(*a0,a1);
            }
            catch (...)
            {

            sipReleaseInstance(const_cast<String *>(a0),sipClass_String,a0State);
                sipRaiseUnknownException();
                return NULL;
            }

            sipReleaseInstance(const_cast<String *>(a0),sipClass_String,a0State);

            return PyFloat_FromDouble(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Options,sipNm_BALL_setDefaultReal);

    return NULL;
}


extern "C" {static PyObject *meth_Options_setDefaultBool(PyObject *, PyObject *);}
static PyObject *meth_Options_setDefaultBool(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const String * a0;
        int a0State = 0;
        bool a1;
        Options *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ1b",&sipSelf,sipClass_Options,&sipCpp,sipClass_String,&a0,&a0State,&a1))
        {
            bool sipRes;

            try
            {
            sipRes = sipCpp->setDefaultBool(*a0,a1);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Options,sipNm_BALL_setDefaultBool);

    return NULL;
}


extern "C" {static PyObject *meth_Options_readOptionFile(PyObject *, PyObject *);}
static PyObject *meth_Options_readOptionFile(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const String * a0;
        int a0State = 0;
        Options *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ1",&sipSelf,sipClass_Options,&sipCpp,sipClass_String,&a0,&a0State))
        {
            bool sipRes;

            try
            {
            sipRes = sipCpp->readOptionFile(*a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Options,sipNm_BALL_readOptionFile);

    return NULL;
}


extern "C" {static PyObject *slot_Options___str__(PyObject *sipSelf);}
static PyObject *slot_Options___str__(PyObject *sipSelf)
{
    Options *sipCpp = reinterpret_cast<Options *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_Options));

    if (!sipCpp)
        return 0;


    {
        {
            PyObject * sipRes = 0;

#line 64 "options.sip"
	sipRes = PyString_FromString(String(String("Options ") + sipCpp->getName()
    			    + " { " + String(sipCpp->getSize()) + " entries }").c_str());
#line 898 "sipBALLOptions.C"

            return sipRes;
        }
    }
}


extern "C" {static PyObject *slot_Options___getitem__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_Options___getitem__(PyObject *sipSelf,PyObject *sipArg)
{
    Options *sipCpp = reinterpret_cast<Options *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_Options));

    if (!sipCpp)
        return 0;

    int sipArgsParsed = 0;

    {
        const String * a0;
        int a0State = 0;

        if (sipParseArgs(&sipArgsParsed,sipArg,"J1",sipClass_String,&a0,&a0State))
        {
            const String *sipRes = 0;

#line 59 "options.sip"
  sipRes = new String(sipCpp->operator [] (*a0));
#line 926 "sipBALLOptions.C"

            sipReleaseInstance(const_cast<String *>(a0),sipClass_String,a0State);

            return sipConvertFromInstance(const_cast<String *>(sipRes),sipClass_String,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Options,sipNm_BALL___getitem__);

    return 0;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_Options(void *, sipWrapperType *);}
static void *cast_Options(void *ptr,sipWrapperType *targetClass)
{
    if (targetClass == sipClass_Options)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_Options(void *, int);}
static void release_Options(void *ptr,int)
{
    delete reinterpret_cast<Options *>(ptr);
}


extern "C" {static void dealloc_Options(sipWrapper *);}
static void dealloc_Options(sipWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_Options(sipSelf->u.cppPtr,0);
    }
}


extern "C" {static void *init_Options(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_Options(sipWrapper *,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    Options *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            try
            {
            sipCpp = new Options();
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
        const Options * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_Options,&a0))
        {
            try
            {
            sipCpp = new Options(*a0);
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


extern "C" {static void *forceConvertTo_Options(PyObject *, int *);}
static void *forceConvertTo_Options(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_Options))
        return sipConvertToCpp(valobj,sipClass_Options,iserrp);

    sipBadClass(sipNm_BALL_Options);

    *iserrp = 1;

    return NULL;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_Options[] = {
    {(void *)slot_Options___str__, str_slot},
    {(void *)slot_Options___getitem__, getitem_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_Options[] = {
    {sipNm_BALL_get, meth_Options_get, METH_VARARGS, NULL},
    {sipNm_BALL_getBool, meth_Options_getBool, METH_VARARGS, NULL},
    {sipNm_BALL_getInteger, meth_Options_getInteger, METH_VARARGS, NULL},
    {sipNm_BALL_getName, meth_Options_getName, METH_VARARGS, NULL},
    {sipNm_BALL_getReal, meth_Options_getReal, METH_VARARGS, NULL},
    {sipNm_BALL_getVector, meth_Options_getVector, METH_VARARGS, NULL},
    {sipNm_BALL_isBool, meth_Options_isBool, METH_VARARGS, NULL},
    {sipNm_BALL_isInteger, meth_Options_isInteger, METH_VARARGS, NULL},
    {sipNm_BALL_isReal, meth_Options_isReal, METH_VARARGS, NULL},
    {sipNm_BALL_isSet, meth_Options_isSet, METH_VARARGS, NULL},
    {sipNm_BALL_isVector, meth_Options_isVector, METH_VARARGS, NULL},
    {sipNm_BALL_readOptionFile, meth_Options_readOptionFile, METH_VARARGS, NULL},
    {sipNm_BALL_set, meth_Options_set, METH_VARARGS, NULL},
    {sipNm_BALL_setBool, meth_Options_setBool, METH_VARARGS, NULL},
    {sipNm_BALL_setDefault, meth_Options_setDefault, METH_VARARGS, NULL},
    {sipNm_BALL_setDefaultBool, meth_Options_setDefaultBool, METH_VARARGS, NULL},
    {sipNm_BALL_setDefaultInteger, meth_Options_setDefaultInteger, METH_VARARGS, NULL},
    {sipNm_BALL_setDefaultReal, meth_Options_setDefaultReal, METH_VARARGS, NULL},
    {sipNm_BALL_setInteger, meth_Options_setInteger, METH_VARARGS, NULL},
    {sipNm_BALL_setName, meth_Options_setName, METH_VARARGS, NULL},
    {sipNm_BALL_setReal, meth_Options_setReal, METH_VARARGS, NULL},
    {sipNm_BALL_setVector, meth_Options_setVector, METH_VARARGS, NULL}
};


/* Define the ints to be added to this type dictionary. */
static sipIntInstanceDef intInstances_Options[] = {
    {sipNm_BALL_MAX_ENTRY_LENGTH, Options::MAX_ENTRY_LENGTH},
    {0, 0}
};


sipTypeDef sipType_BALL_Options = {
    0,
    0,
    "BALL.Options",
    0,
    {0, 0, 1},
    0,
    slots_Options,
    22, methods_Options,
    0, 0,
    0,
    init_Options,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_Options,
    cast_Options,
    release_Options,
    forceConvertTo_Options,
    0,
    0,
    {0, 0, 0, 0, intInstances_Options, 0, 0, 0, 0, 0, 0},
    0
};
