/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLGeneralException.h"

#include "sipBALLString.h"
#include "sipBALLGeneralException.h"



extern "C" {static PyObject *meth_GeneralException_getName(PyObject *, PyObject *);}
static PyObject *meth_GeneralException_getName(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        GeneralException *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_GeneralException,&sipCpp))
        {
            const char *sipRes;

            try
            {
            sipRes = sipCpp->getName();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_GeneralException,sipNm_BALL_getName);

    return NULL;
}


extern "C" {static PyObject *meth_GeneralException_getMessage(PyObject *, PyObject *);}
static PyObject *meth_GeneralException_getMessage(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        GeneralException *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_GeneralException,&sipCpp))
        {
            const char *sipRes;

            try
            {
            sipRes = sipCpp->getMessage();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_GeneralException,sipNm_BALL_getMessage);

    return NULL;
}


extern "C" {static PyObject *meth_GeneralException_getLine(PyObject *, PyObject *);}
static PyObject *meth_GeneralException_getLine(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        GeneralException *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_GeneralException,&sipCpp))
        {
            int sipRes;

            try
            {
            sipRes = sipCpp->getLine();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_GeneralException,sipNm_BALL_getLine);

    return NULL;
}


extern "C" {static PyObject *meth_GeneralException_getFile(PyObject *, PyObject *);}
static PyObject *meth_GeneralException_getFile(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        GeneralException *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_GeneralException,&sipCpp))
        {
            const char *sipRes;

            try
            {
            sipRes = sipCpp->getFile();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_GeneralException,sipNm_BALL_getFile);

    return NULL;
}


extern "C" {static PyObject *slot_GeneralException___repr__(PyObject *sipSelf);}
static PyObject *slot_GeneralException___repr__(PyObject *sipSelf)
{
    GeneralException *sipCpp = reinterpret_cast<GeneralException *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_GeneralException));

    if (!sipCpp)
        return 0;


    {
        {
            PyObject * sipRes = 0;

#line 34 "exception.sip"
  if (sipCpp == 0)
  {
    sipRes = PyString_FromString("");
  }
  else
  {
    sipRes = PyString_FromString(String(String(sipCpp->getName())
					+ " in line " + String(sipCpp->getLine()) + " of "
          + String(sipCpp->getFile()) + ": " + String(sipCpp->getMessage())).c_str());
  }
#line 193 "sipBALLGeneralException.C"

            return sipRes;
        }
    }
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_GeneralException(void *, sipWrapperType *);}
static void *cast_GeneralException(void *ptr,sipWrapperType *targetClass)
{
    if (targetClass == sipClass_GeneralException)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_GeneralException(void *, int);}
static void release_GeneralException(void *ptr,int)
{
    delete reinterpret_cast<GeneralException *>(ptr);
}


extern "C" {static void dealloc_GeneralException(sipWrapper *);}
static void dealloc_GeneralException(sipWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_GeneralException(sipSelf->u.cppPtr,0);
    }
}


extern "C" {static void *init_GeneralException(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_GeneralException(sipWrapper *,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    GeneralException *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            try
            {
            sipCpp = new GeneralException();
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
        const char * a0;
        int a1;

        if (sipParseArgs(sipArgsParsed,sipArgs,"si",&a0,&a1))
        {
            try
            {
            sipCpp = new GeneralException(a0,a1);
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
        const char * a0;
        int a1;
        const String * a2;
        int a2State = 0;
        const String * a3;
        int a3State = 0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"siJ1J1",&a0,&a1,sipClass_String,&a2,&a2State,sipClass_String,&a3,&a3State))
        {
            try
            {
            sipCpp = new GeneralException(a0,a1,*a2,*a3);
            }
            catch (...)
            {

            sipReleaseInstance(const_cast<String *>(a2),sipClass_String,a2State);
            sipReleaseInstance(const_cast<String *>(a3),sipClass_String,a3State);
                sipRaiseUnknownException();
                return NULL;
            }

            sipReleaseInstance(const_cast<String *>(a2),sipClass_String,a2State);
            sipReleaseInstance(const_cast<String *>(a3),sipClass_String,a3State);
        }
    }

    if (!sipCpp)
    {
        const GeneralException * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_GeneralException,&a0))
        {
            try
            {
            sipCpp = new GeneralException(*a0);
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


extern "C" {static void *forceConvertTo_GeneralException(PyObject *, int *);}
static void *forceConvertTo_GeneralException(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_GeneralException))
        return sipConvertToCpp(valobj,sipClass_GeneralException,iserrp);

    sipBadClass(sipNm_BALL_GeneralException);

    *iserrp = 1;

    return NULL;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_GeneralException[] = {
    {(void *)slot_GeneralException___repr__, repr_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_GeneralException[] = {
    {sipNm_BALL_getFile, meth_GeneralException_getFile, METH_VARARGS, NULL},
    {sipNm_BALL_getLine, meth_GeneralException_getLine, METH_VARARGS, NULL},
    {sipNm_BALL_getMessage, meth_GeneralException_getMessage, METH_VARARGS, NULL},
    {sipNm_BALL_getName, meth_GeneralException_getName, METH_VARARGS, NULL}
};


sipTypeDef sipType_BALL_GeneralException = {
    0,
    0,
    "BALL.GeneralException",
    0,
    {0, 0, 1},
    0,
    slots_GeneralException,
    4, methods_GeneralException,
    0, 0,
    0,
    init_GeneralException,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_GeneralException,
    cast_GeneralException,
    release_GeneralException,
    forceConvertTo_GeneralException,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
