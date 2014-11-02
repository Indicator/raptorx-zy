/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLSubstring.h"

#include "sipBALLString.h"
#include "sipBALLIndex.h"
#include "sipBALLSubstring.h"



extern "C" {static PyObject *meth_Substring_destroy(PyObject *, PyObject *);}
static PyObject *meth_Substring_destroy(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Substring *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Substring,&sipCpp))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Substring,sipNm_BALL_destroy);

    return NULL;
}


extern "C" {static PyObject *meth_Substring_toString(PyObject *, PyObject *);}
static PyObject *meth_Substring_toString(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Substring *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Substring,&sipCpp))
        {
            String *sipRes;

            try
            {
            sipRes = new String(sipCpp->toString());
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Substring,sipNm_BALL_toString);

    return NULL;
}


extern "C" {static PyObject *meth_Substring_bind(PyObject *, PyObject *);}
static PyObject *meth_Substring_bind(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const String * a0;
        int a0State = 0;
        int a1 = 0;
        int a2 = String::EndPos;
        Substring *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ1|ii",&sipSelf,sipClass_Substring,&sipCpp,sipClass_String,&a0,&a0State,&a1,&a2))
        {
            Substring *sipRes;

            try
            {
            sipRes = &sipCpp->bind(*a0,a1,a2);
            }
            catch (...)
            {

            sipReleaseInstance(const_cast<String *>(a0),sipClass_String,a0State);
                sipRaiseUnknownException();
                return NULL;
            }

            sipReleaseInstance(const_cast<String *>(a0),sipClass_String,a0State);

            return sipConvertFromInstance(sipRes,sipClass_Substring,NULL);
        }
    }

    {
        const Substring * a0;
        int a1 = 0;
        int a2 = String::EndPos;
        Substring *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA|ii",&sipSelf,sipClass_Substring,&sipCpp,sipClass_Substring,&a0,&a1,&a2))
        {
            Substring *sipRes;

            try
            {
            sipRes = &sipCpp->bind(*a0,a1,a2);
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return sipConvertFromInstance(sipRes,sipClass_Substring,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Substring,sipNm_BALL_bind);

    return NULL;
}


extern "C" {static PyObject *meth_Substring_unbind(PyObject *, PyObject *);}
static PyObject *meth_Substring_unbind(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Substring *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Substring,&sipCpp))
        {
            try
            {
            sipCpp->unbind();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Substring,sipNm_BALL_unbind);

    return NULL;
}


extern "C" {static PyObject *meth_Substring_getBoundString(PyObject *, PyObject *);}
static PyObject *meth_Substring_getBoundString(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Substring *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Substring,&sipCpp))
        {
            String *sipRes;

            try
            {
            sipRes = sipCpp->getBoundString();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Substring,sipNm_BALL_getBoundString);

    return NULL;
}


extern "C" {static PyObject *meth_Substring_set(PyObject *, PyObject *);}
static PyObject *meth_Substring_set(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const String * a0;
        int a0State = 0;
        Substring *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ1",&sipSelf,sipClass_Substring,&sipCpp,sipClass_String,&a0,&a0State))
        {
            try
            {
            sipCpp->set(*a0);
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
        const Substring * a0;
        Substring *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_Substring,&sipCpp,sipClass_Substring,&a0))
        {
            try
            {
            sipCpp->set(*a0);
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
        const char * a0;
        int a1 = String::EndPos;
        Substring *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bs|i",&sipSelf,sipClass_Substring,&sipCpp,&a0,&a1))
        {
            try
            {
            sipCpp->set(a0,a1);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Substring,sipNm_BALL_set);

    return NULL;
}


extern "C" {static PyObject *meth_Substring_getFirstIndex(PyObject *, PyObject *);}
static PyObject *meth_Substring_getFirstIndex(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Substring *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Substring,&sipCpp))
        {
            Index *sipRes;

            try
            {
            sipRes = new Index(sipCpp->getFirstIndex());
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            PyObject *sipResObj = sipConvertFromMappedType(sipRes,sipMappedType_Index,NULL);
            delete sipRes;

            return sipResObj;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Substring,sipNm_BALL_getFirstIndex);

    return NULL;
}


extern "C" {static PyObject *meth_Substring_getLastIndex(PyObject *, PyObject *);}
static PyObject *meth_Substring_getLastIndex(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Substring *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Substring,&sipCpp))
        {
            Index *sipRes;

            try
            {
            sipRes = new Index(sipCpp->getLastIndex());
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            PyObject *sipResObj = sipConvertFromMappedType(sipRes,sipMappedType_Index,NULL);
            delete sipRes;

            return sipResObj;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Substring,sipNm_BALL_getLastIndex);

    return NULL;
}


extern "C" {static PyObject *meth_Substring_size(PyObject *, PyObject *);}
static PyObject *meth_Substring_size(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Substring *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Substring,&sipCpp))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Substring,sipNm_BALL_size);

    return NULL;
}


extern "C" {static PyObject *meth_Substring_toLower(PyObject *, PyObject *);}
static PyObject *meth_Substring_toLower(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Substring *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Substring,&sipCpp))
        {
            Substring *sipRes;

            try
            {
            sipRes = &sipCpp->toLower();
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return sipConvertFromInstance(sipRes,sipClass_Substring,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Substring,sipNm_BALL_toLower);

    return NULL;
}


extern "C" {static PyObject *meth_Substring_toUpper(PyObject *, PyObject *);}
static PyObject *meth_Substring_toUpper(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Substring *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Substring,&sipCpp))
        {
            Substring *sipRes;

            try
            {
            sipRes = &sipCpp->toUpper();
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return sipConvertFromInstance(sipRes,sipClass_Substring,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Substring,sipNm_BALL_toUpper);

    return NULL;
}


extern "C" {static PyObject *meth_Substring_isBound(PyObject *, PyObject *);}
static PyObject *meth_Substring_isBound(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Substring *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Substring,&sipCpp))
        {
            bool sipRes;

            try
            {
            sipRes = sipCpp->isBound();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Substring,sipNm_BALL_isBound);

    return NULL;
}


extern "C" {static PyObject *meth_Substring_isEmpty(PyObject *, PyObject *);}
static PyObject *meth_Substring_isEmpty(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Substring *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Substring,&sipCpp))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Substring,sipNm_BALL_isEmpty);

    return NULL;
}


extern "C" {static PyObject *meth_Substring_isValid(PyObject *, PyObject *);}
static PyObject *meth_Substring_isValid(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Substring *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Substring,&sipCpp))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Substring,sipNm_BALL_isValid);

    return NULL;
}


extern "C" {static PyObject *slot_Substring___ne__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_Substring___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    Substring *sipCpp = reinterpret_cast<Substring *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_Substring));

    if (!sipCpp)
        return 0;

    int sipArgsParsed = 0;

    {
        const Substring * a0;

        if (sipParseArgs(&sipArgsParsed,sipArg,"JA",sipClass_Substring,&a0))
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

    return sipPySlotExtend(&sipModuleAPI_BALL,ne_slot,sipClass_Substring,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_Substring___eq__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_Substring___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    Substring *sipCpp = reinterpret_cast<Substring *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_Substring));

    if (!sipCpp)
        return 0;

    int sipArgsParsed = 0;

    {
        const Substring * a0;

        if (sipParseArgs(&sipArgsParsed,sipArg,"JA",sipClass_Substring,&a0))
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

    return sipPySlotExtend(&sipModuleAPI_BALL,eq_slot,sipClass_Substring,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_Substring___getitem__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_Substring___getitem__(PyObject *sipSelf,PyObject *sipArg)
{
    Substring *sipCpp = reinterpret_cast<Substring *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_Substring));

    if (!sipCpp)
        return 0;

    int sipArgsParsed = 0;

    {
        Index * a0;
        int a0State = 0;

        if (sipParseArgs(&sipArgsParsed,sipArg,"M1",sipMappedType_Index,&a0,&a0State))
        {
            char sipRes = 0;

#line 55 "string.sip"
	sipRes = sipCpp->operator [] (*a0);
#line 792 "sipBALLSubstring.C"

            sipReleaseMappedType(a0,sipMappedType_Index,a0State);

            return PyString_FromStringAndSize(&sipRes,1);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Substring,sipNm_BALL___getitem__);

    return 0;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_Substring(void *, sipWrapperType *);}
static void *cast_Substring(void *ptr,sipWrapperType *targetClass)
{
    if (targetClass == sipClass_Substring)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_Substring(void *, int);}
static void release_Substring(void *ptr,int)
{
    delete reinterpret_cast<Substring *>(ptr);
}


extern "C" {static void dealloc_Substring(sipWrapper *);}
static void dealloc_Substring(sipWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_Substring(sipSelf->u.cppPtr,0);
    }
}


extern "C" {static void *init_Substring(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_Substring(sipWrapper *,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    Substring *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            try
            {
            sipCpp = new Substring();
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
        const Substring * a0;
        bool a1 = 1;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA|b",sipClass_Substring,&a0,&a1))
        {
            try
            {
            sipCpp = new Substring(*a0,a1);
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
        Index a1def = 0;
        Index * a1 = &a1def;
        int a1State = 0;
        int a2 = String::EndPos;

        if (sipParseArgs(sipArgsParsed,sipArgs,"J1|M1i",sipClass_String,&a0,&a0State,sipMappedType_Index,&a1,&a1State,&a2))
        {
            try
            {
            sipCpp = new Substring(*a0,*a1,a2);
            }
            catch (...)
            {

            sipReleaseInstance(const_cast<String *>(a0),sipClass_String,a0State);
            sipReleaseMappedType(a1,sipMappedType_Index,a1State);
                sipRaiseUnknownException();
                return NULL;
            }

            sipReleaseInstance(const_cast<String *>(a0),sipClass_String,a0State);
            sipReleaseMappedType(a1,sipMappedType_Index,a1State);
        }
    }

    if (!sipCpp)
    {
        const Substring * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_Substring,&a0))
        {
            try
            {
            sipCpp = new Substring(*a0);
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


extern "C" {static void *forceConvertTo_Substring(PyObject *, int *);}
static void *forceConvertTo_Substring(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_Substring))
        return sipConvertToCpp(valobj,sipClass_Substring,iserrp);

    sipBadClass(sipNm_BALL_Substring);

    *iserrp = 1;

    return NULL;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_Substring[] = {
    {(void *)slot_Substring___ne__, ne_slot},
    {(void *)slot_Substring___eq__, eq_slot},
    {(void *)slot_Substring___getitem__, getitem_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_Substring[] = {
    {sipNm_BALL_bind, meth_Substring_bind, METH_VARARGS, NULL},
    {sipNm_BALL_destroy, meth_Substring_destroy, METH_VARARGS, NULL},
    {sipNm_BALL_getBoundString, meth_Substring_getBoundString, METH_VARARGS, NULL},
    {sipNm_BALL_getFirstIndex, meth_Substring_getFirstIndex, METH_VARARGS, NULL},
    {sipNm_BALL_getLastIndex, meth_Substring_getLastIndex, METH_VARARGS, NULL},
    {sipNm_BALL_isBound, meth_Substring_isBound, METH_VARARGS, NULL},
    {sipNm_BALL_isEmpty, meth_Substring_isEmpty, METH_VARARGS, NULL},
    {sipNm_BALL_isValid, meth_Substring_isValid, METH_VARARGS, NULL},
    {sipNm_BALL_set, meth_Substring_set, METH_VARARGS, NULL},
    {sipNm_BALL_size, meth_Substring_size, METH_VARARGS, NULL},
    {sipNm_BALL_toLower, meth_Substring_toLower, METH_VARARGS, NULL},
    {sipNm_BALL_toString, meth_Substring_toString, METH_VARARGS, NULL},
    {sipNm_BALL_toUpper, meth_Substring_toUpper, METH_VARARGS, NULL},
    {sipNm_BALL_unbind, meth_Substring_unbind, METH_VARARGS, NULL}
};


sipTypeDef sipType_BALL_Substring = {
    0,
    0,
    "BALL.Substring",
    0,
    {0, 0, 1},
    0,
    slots_Substring,
    14, methods_Substring,
    0, 0,
    0,
    init_Substring,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_Substring,
    cast_Substring,
    release_Substring,
    forceConvertTo_Substring,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
