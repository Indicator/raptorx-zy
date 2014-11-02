/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLPropertyManager.h"

#include "sipBALLIndexOverflow.h"
#include "sipBALLPropertyManager.h"
#include "sipBALLString.h"
#include "sipBALLNamedProperty.h"
#include "sipBALLPosition.h"
#include "sipBALLPersistentObject.h"



extern "C" {static PyObject *meth_PropertyManager_clear(PyObject *, PyObject *);}
static PyObject *meth_PropertyManager_clear(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        PropertyManager *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_PropertyManager,&sipCpp))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_PropertyManager,sipNm_BALL_clear);

    return NULL;
}


extern "C" {static PyObject *meth_PropertyManager_destroy(PyObject *, PyObject *);}
static PyObject *meth_PropertyManager_destroy(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        PropertyManager *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_PropertyManager,&sipCpp))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_PropertyManager,sipNm_BALL_destroy);

    return NULL;
}


extern "C" {static PyObject *meth_PropertyManager_set(PyObject *, PyObject *);}
static PyObject *meth_PropertyManager_set(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const PropertyManager * a0;
        PropertyManager *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_PropertyManager,&sipCpp,sipClass_PropertyManager,&a0))
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

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_PropertyManager,sipNm_BALL_set);

    return NULL;
}


extern "C" {static PyObject *meth_PropertyManager_get(PyObject *, PyObject *);}
static PyObject *meth_PropertyManager_get(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        PropertyManager * a0;
        PropertyManager *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_PropertyManager,&sipCpp,sipClass_PropertyManager,&a0))
        {
            try
            {
            sipCpp->get(*a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_PropertyManager,sipNm_BALL_get);

    return NULL;
}


extern "C" {static PyObject *meth_PropertyManager_swap(PyObject *, PyObject *);}
static PyObject *meth_PropertyManager_swap(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        PropertyManager * a0;
        PropertyManager *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_PropertyManager,&sipCpp,sipClass_PropertyManager,&a0))
        {
            try
            {
            sipCpp->swap(*a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_PropertyManager,sipNm_BALL_swap);

    return NULL;
}


extern "C" {static PyObject *meth_PropertyManager_setProperty(PyObject *, PyObject *);}
static PyObject *meth_PropertyManager_setProperty(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        int a0;
        PropertyManager *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bi",&sipSelf,sipClass_PropertyManager,&sipCpp,&a0))
        {
            try
            {
            sipCpp->setProperty(a0);
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
        NamedProperty * a0;
        PropertyManager *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_PropertyManager,&sipCpp,sipClass_NamedProperty,&a0))
        {
            try
            {
            sipCpp->setProperty(*a0);
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
        const String * a0;
        int a0State = 0;
        PropertyManager *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ1",&sipSelf,sipClass_PropertyManager,&sipCpp,sipClass_String,&a0,&a0State))
        {
            try
            {
            sipCpp->setProperty(*a0);
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
        const String * a0;
        int a0State = 0;
        float a1;
        PropertyManager *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ1f",&sipSelf,sipClass_PropertyManager,&sipCpp,sipClass_String,&a0,&a0State,&a1))
        {
            try
            {
            sipCpp->setProperty(*a0,a1);
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
        const String * a0;
        int a0State = 0;
        String * a1;
        int a1State = 0;
        PropertyManager *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ1J1",&sipSelf,sipClass_PropertyManager,&sipCpp,sipClass_String,&a0,&a0State,sipClass_String,&a1,&a1State))
        {
            try
            {
            sipCpp->setProperty(*a0,*a1);
            }
            catch (...)
            {

            sipReleaseInstance(const_cast<String *>(a0),sipClass_String,a0State);
            sipReleaseInstance(a1,sipClass_String,a1State);
                sipRaiseUnknownException();
                return NULL;
            }

            sipReleaseInstance(const_cast<String *>(a0),sipClass_String,a0State);
            sipReleaseInstance(a1,sipClass_String,a1State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    {
        const String * a0;
        int a0State = 0;
        PersistentObject * a1;
        PropertyManager *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ1JA",&sipSelf,sipClass_PropertyManager,&sipCpp,sipClass_String,&a0,&a0State,sipClass_PersistentObject,&a1))
        {
            try
            {
            sipCpp->setProperty(*a0,*a1);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_PropertyManager,sipNm_BALL_setProperty);

    return NULL;
}


extern "C" {static PyObject *meth_PropertyManager_clearProperty(PyObject *, PyObject *);}
static PyObject *meth_PropertyManager_clearProperty(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        int a0;
        PropertyManager *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bi",&sipSelf,sipClass_PropertyManager,&sipCpp,&a0))
        {
            try
            {
            sipCpp->clearProperty(a0);
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
        const String * a0;
        int a0State = 0;
        PropertyManager *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ1",&sipSelf,sipClass_PropertyManager,&sipCpp,sipClass_String,&a0,&a0State))
        {
            try
            {
            sipCpp->clearProperty(*a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_PropertyManager,sipNm_BALL_clearProperty);

    return NULL;
}


extern "C" {static PyObject *meth_PropertyManager_toggleProperty(PyObject *, PyObject *);}
static PyObject *meth_PropertyManager_toggleProperty(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        int a0;
        PropertyManager *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bi",&sipSelf,sipClass_PropertyManager,&sipCpp,&a0))
        {
            try
            {
            sipCpp->toggleProperty(a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_PropertyManager,sipNm_BALL_toggleProperty);

    return NULL;
}


extern "C" {static PyObject *meth_PropertyManager_countProperties(PyObject *, PyObject *);}
static PyObject *meth_PropertyManager_countProperties(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        PropertyManager *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_PropertyManager,&sipCpp))
        {
            int sipRes;

            try
            {
            sipRes = sipCpp->countProperties();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_PropertyManager,sipNm_BALL_countProperties);

    return NULL;
}


extern "C" {static PyObject *meth_PropertyManager_getProperty(PyObject *, PyObject *);}
static PyObject *meth_PropertyManager_getProperty(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const String * a0;
        int a0State = 0;
        PropertyManager *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ1",&sipSelf,sipClass_PropertyManager,&sipCpp,sipClass_String,&a0,&a0State))
        {
            const NamedProperty *sipRes;

            try
            {
            sipRes = &sipCpp->getProperty(*a0);
            }
            catch (...)
            {

            sipReleaseInstance(const_cast<String *>(a0),sipClass_String,a0State);
                sipRaiseUnknownException();
                return NULL;
            }

            sipReleaseInstance(const_cast<String *>(a0),sipClass_String,a0State);

            return sipConvertFromInstance(const_cast<NamedProperty *>(sipRes),sipClass_NamedProperty,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_PropertyManager,sipNm_BALL_getProperty);

    return NULL;
}


extern "C" {static PyObject *meth_PropertyManager_countNamedProperties(PyObject *, PyObject *);}
static PyObject *meth_PropertyManager_countNamedProperties(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        PropertyManager *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_PropertyManager,&sipCpp))
        {
            int sipRes;

            try
            {
            sipRes = sipCpp->countNamedProperties();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_PropertyManager,sipNm_BALL_countNamedProperties);

    return NULL;
}


extern "C" {static PyObject *meth_PropertyManager_getNamedProperty(PyObject *, PyObject *);}
static PyObject *meth_PropertyManager_getNamedProperty(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Position * a0;
        int a0State = 0;
        PropertyManager *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BM1",&sipSelf,sipClass_PropertyManager,&sipCpp,sipMappedType_Position,&a0,&a0State))
        {
            NamedProperty *sipRes;

            try
            {
            sipRes = &sipCpp->getNamedProperty(*a0);
            }
            catch (IndexOverflow &sipExceptionRef)
            {

            sipReleaseMappedType(a0,sipMappedType_Position,a0State);
                /* Hope that there is a valid copy ctor. */
                IndexOverflow *sipExceptionCopy = new IndexOverflow(sipExceptionRef);

                sipRaiseClassException(sipClass_IndexOverflow,sipExceptionCopy);

                return NULL;
            }

            sipReleaseMappedType(a0,sipMappedType_Position,a0State);

            return sipConvertFromInstance(sipRes,sipClass_NamedProperty,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_PropertyManager,sipNm_BALL_getNamedProperty);

    return NULL;
}


extern "C" {static PyObject *meth_PropertyManager_hasProperty(PyObject *, PyObject *);}
static PyObject *meth_PropertyManager_hasProperty(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        int a0;
        PropertyManager *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bi",&sipSelf,sipClass_PropertyManager,&sipCpp,&a0))
        {
            bool sipRes;

            try
            {
            sipRes = sipCpp->hasProperty(a0);
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
        PropertyManager *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ1",&sipSelf,sipClass_PropertyManager,&sipCpp,sipClass_String,&a0,&a0State))
        {
            bool sipRes;

            try
            {
            sipRes = sipCpp->hasProperty(*a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_PropertyManager,sipNm_BALL_hasProperty);

    return NULL;
}


extern "C" {static PyObject *meth_PropertyManager_isValid(PyObject *, PyObject *);}
static PyObject *meth_PropertyManager_isValid(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        PropertyManager *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_PropertyManager,&sipCpp))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_PropertyManager,sipNm_BALL_isValid);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_PropertyManager(void *, sipWrapperType *);}
static void *cast_PropertyManager(void *ptr,sipWrapperType *targetClass)
{
    if (targetClass == sipClass_PropertyManager)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_PropertyManager(void *, int);}
static void release_PropertyManager(void *ptr,int)
{
    delete reinterpret_cast<PropertyManager *>(ptr);
}


extern "C" {static void dealloc_PropertyManager(sipWrapper *);}
static void dealloc_PropertyManager(sipWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_PropertyManager(sipSelf->u.cppPtr,0);
    }
}


extern "C" {static void *init_PropertyManager(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_PropertyManager(sipWrapper *,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    PropertyManager *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            try
            {
            sipCpp = new PropertyManager();
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
        const PropertyManager * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_PropertyManager,&a0))
        {
            try
            {
            sipCpp = new PropertyManager(*a0);
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


extern "C" {static void *forceConvertTo_PropertyManager(PyObject *, int *);}
static void *forceConvertTo_PropertyManager(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_PropertyManager))
        return sipConvertToCpp(valobj,sipClass_PropertyManager,iserrp);

    sipBadClass(sipNm_BALL_PropertyManager);

    *iserrp = 1;

    return NULL;
}


static PyMethodDef methods_PropertyManager[] = {
    {sipNm_BALL_clear, meth_PropertyManager_clear, METH_VARARGS, NULL},
    {sipNm_BALL_clearProperty, meth_PropertyManager_clearProperty, METH_VARARGS, NULL},
    {sipNm_BALL_countNamedProperties, meth_PropertyManager_countNamedProperties, METH_VARARGS, NULL},
    {sipNm_BALL_countProperties, meth_PropertyManager_countProperties, METH_VARARGS, NULL},
    {sipNm_BALL_destroy, meth_PropertyManager_destroy, METH_VARARGS, NULL},
    {sipNm_BALL_get, meth_PropertyManager_get, METH_VARARGS, NULL},
    {sipNm_BALL_getNamedProperty, meth_PropertyManager_getNamedProperty, METH_VARARGS, NULL},
    {sipNm_BALL_getProperty, meth_PropertyManager_getProperty, METH_VARARGS, NULL},
    {sipNm_BALL_hasProperty, meth_PropertyManager_hasProperty, METH_VARARGS, NULL},
    {sipNm_BALL_isValid, meth_PropertyManager_isValid, METH_VARARGS, NULL},
    {sipNm_BALL_set, meth_PropertyManager_set, METH_VARARGS, NULL},
    {sipNm_BALL_setProperty, meth_PropertyManager_setProperty, METH_VARARGS, NULL},
    {sipNm_BALL_swap, meth_PropertyManager_swap, METH_VARARGS, NULL},
    {sipNm_BALL_toggleProperty, meth_PropertyManager_toggleProperty, METH_VARARGS, NULL}
};


sipTypeDef sipType_BALL_PropertyManager = {
    0,
    0,
    "BALL.PropertyManager",
    0,
    {0, 0, 1},
    0,
    0,
    14, methods_PropertyManager,
    0, 0,
    0,
    init_PropertyManager,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_PropertyManager,
    cast_PropertyManager,
    release_PropertyManager,
    forceConvertTo_PropertyManager,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
