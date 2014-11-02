/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLNamedProperty.h"

#include "sipBALLPersistentObject.h"
#include "sipBALLString.h"
#include "sipBALLNamedProperty.h"



extern "C" {static PyObject *meth_NamedProperty_getType(PyObject *, PyObject *);}
static PyObject *meth_NamedProperty_getType(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        NamedProperty *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_NamedProperty,&sipCpp))
        {
            int sipRes;

            try
            {
            sipRes = sipCpp->getType();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_NamedProperty,sipNm_BALL_getType);

    return NULL;
}


extern "C" {static PyObject *meth_NamedProperty_getName(PyObject *, PyObject *);}
static PyObject *meth_NamedProperty_getName(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        NamedProperty *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_NamedProperty,&sipCpp))
        {
            String *sipRes;

            try
            {
            sipRes = new String(sipCpp->getName());
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_NamedProperty,sipNm_BALL_getName);

    return NULL;
}


extern "C" {static PyObject *meth_NamedProperty_getBool(PyObject *, PyObject *);}
static PyObject *meth_NamedProperty_getBool(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        NamedProperty *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_NamedProperty,&sipCpp))
        {
            bool sipRes;

            try
            {
            sipRes = sipCpp->getBool();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_NamedProperty,sipNm_BALL_getBool);

    return NULL;
}


extern "C" {static PyObject *meth_NamedProperty_getInt(PyObject *, PyObject *);}
static PyObject *meth_NamedProperty_getInt(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        NamedProperty *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_NamedProperty,&sipCpp))
        {
            int sipRes;

            try
            {
            sipRes = sipCpp->getInt();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_NamedProperty,sipNm_BALL_getInt);

    return NULL;
}


extern "C" {static PyObject *meth_NamedProperty_getFloat(PyObject *, PyObject *);}
static PyObject *meth_NamedProperty_getFloat(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        NamedProperty *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_NamedProperty,&sipCpp))
        {
            float sipRes;

            try
            {
            sipRes = sipCpp->getFloat();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_NamedProperty,sipNm_BALL_getFloat);

    return NULL;
}


extern "C" {static PyObject *meth_NamedProperty_getUnsignedInt(PyObject *, PyObject *);}
static PyObject *meth_NamedProperty_getUnsignedInt(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        NamedProperty *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_NamedProperty,&sipCpp))
        {
            int sipRes;

            try
            {
            sipRes = sipCpp->getUnsignedInt();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_NamedProperty,sipNm_BALL_getUnsignedInt);

    return NULL;
}


extern "C" {static PyObject *meth_NamedProperty_getObject(PyObject *, PyObject *);}
static PyObject *meth_NamedProperty_getObject(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        NamedProperty *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_NamedProperty,&sipCpp))
        {
            PersistentObject *sipRes;

            try
            {
            sipRes = sipCpp->getObject();
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return sipConvertFromInstance(sipRes,sipClass_PersistentObject,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_NamedProperty,sipNm_BALL_getObject);

    return NULL;
}


extern "C" {static PyObject *meth_NamedProperty_getString(PyObject *, PyObject *);}
static PyObject *meth_NamedProperty_getString(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        NamedProperty *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_NamedProperty,&sipCpp))
        {
            String *sipRes;

            try
            {
            sipRes = new String(sipCpp->getString());
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_NamedProperty,sipNm_BALL_getString);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_NamedProperty(void *, sipWrapperType *);}
static void *cast_NamedProperty(void *ptr,sipWrapperType *targetClass)
{
    void *res;

    if (targetClass == sipClass_NamedProperty)
        return ptr;

    if ((res = sipCast_PersistentObject((PersistentObject *)(NamedProperty *)ptr,targetClass)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_NamedProperty(void *, int);}
static void release_NamedProperty(void *ptr,int)
{
    delete reinterpret_cast<NamedProperty *>(ptr);
}


extern "C" {static void dealloc_NamedProperty(sipWrapper *);}
static void dealloc_NamedProperty(sipWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_NamedProperty(sipSelf->u.cppPtr,0);
    }
}


extern "C" {static void *init_NamedProperty(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_NamedProperty(sipWrapper *,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    NamedProperty *sipCpp = 0;

    if (!sipCpp)
    {
        String * a0;
        int a0State = 0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"J1",sipClass_String,&a0,&a0State))
        {
            try
            {
            sipCpp = new NamedProperty(*a0);
            }
            catch (...)
            {

            sipReleaseInstance(a0,sipClass_String,a0State);
                sipRaiseUnknownException();
                return NULL;
            }

            sipReleaseInstance(a0,sipClass_String,a0State);
        }
    }

    if (!sipCpp)
    {
        String * a0;
        int a0State = 0;
        bool a1;

        if (sipParseArgs(sipArgsParsed,sipArgs,"J1b",sipClass_String,&a0,&a0State,&a1))
        {
            try
            {
            sipCpp = new NamedProperty(*a0,a1);
            }
            catch (...)
            {

            sipReleaseInstance(a0,sipClass_String,a0State);
                sipRaiseUnknownException();
                return NULL;
            }

            sipReleaseInstance(a0,sipClass_String,a0State);
        }
    }

    if (!sipCpp)
    {
        String * a0;
        int a0State = 0;
        String * a1;
        int a1State = 0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"J1J1",sipClass_String,&a0,&a0State,sipClass_String,&a1,&a1State))
        {
            try
            {
            sipCpp = new NamedProperty(*a0,*a1);
            }
            catch (...)
            {

            sipReleaseInstance(a0,sipClass_String,a0State);
            sipReleaseInstance(a1,sipClass_String,a1State);
                sipRaiseUnknownException();
                return NULL;
            }

            sipReleaseInstance(a0,sipClass_String,a0State);
            sipReleaseInstance(a1,sipClass_String,a1State);
        }
    }

    if (!sipCpp)
    {
        String * a0;
        int a0State = 0;
        PersistentObject * a1;

        if (sipParseArgs(sipArgsParsed,sipArgs,"J1JA",sipClass_String,&a0,&a0State,sipClass_PersistentObject,&a1))
        {
            try
            {
            sipCpp = new NamedProperty(*a0,*a1);
            }
            catch (...)
            {

            sipReleaseInstance(a0,sipClass_String,a0State);
                sipRaiseUnknownException();
                return NULL;
            }

            sipReleaseInstance(a0,sipClass_String,a0State);
        }
    }

    if (!sipCpp)
    {
        NamedProperty * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_NamedProperty,&a0))
        {
            try
            {
            sipCpp = new NamedProperty(*a0);
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
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            try
            {
            sipCpp = new NamedProperty();
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


extern "C" {static void *forceConvertTo_NamedProperty(PyObject *, int *);}
static void *forceConvertTo_NamedProperty(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_NamedProperty))
        return sipConvertToCpp(valobj,sipClass_NamedProperty,iserrp);

    sipBadClass(sipNm_BALL_NamedProperty);

    *iserrp = 1;

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedClassDef supers_NamedProperty[] = {{220, 255, 1}};


static PyMethodDef methods_NamedProperty[] = {
    {sipNm_BALL_getBool, meth_NamedProperty_getBool, METH_VARARGS, NULL},
    {sipNm_BALL_getFloat, meth_NamedProperty_getFloat, METH_VARARGS, NULL},
    {sipNm_BALL_getInt, meth_NamedProperty_getInt, METH_VARARGS, NULL},
    {sipNm_BALL_getName, meth_NamedProperty_getName, METH_VARARGS, NULL},
    {sipNm_BALL_getObject, meth_NamedProperty_getObject, METH_VARARGS, NULL},
    {sipNm_BALL_getString, meth_NamedProperty_getString, METH_VARARGS, NULL},
    {sipNm_BALL_getType, meth_NamedProperty_getType, METH_VARARGS, NULL},
    {sipNm_BALL_getUnsignedInt, meth_NamedProperty_getUnsignedInt, METH_VARARGS, NULL}
};


sipTypeDef sipType_BALL_NamedProperty = {
    0,
    0,
    "BALL.NamedProperty",
    0,
    {0, 0, 1},
    supers_NamedProperty,
    0,
    8, methods_NamedProperty,
    0, 0,
    0,
    init_NamedProperty,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_NamedProperty,
    cast_NamedProperty,
    release_NamedProperty,
    forceConvertTo_NamedProperty,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
