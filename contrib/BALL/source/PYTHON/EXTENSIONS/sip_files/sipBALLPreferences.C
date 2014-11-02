/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLPreferences.h"

#include "sipBALLPreferences.h"
#include "sipBALLINIFile.h"



extern "C" {static PyObject *meth_Preferences_fetchPreferences(PyObject *, PyObject *);}
static PyObject *meth_Preferences_fetchPreferences(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        INIFile * a0;
        Preferences *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_Preferences,&sipCpp,sipClass_INIFile,&a0))
        {
            sipCpp->fetchPreferences(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Preferences,sipNm_BALL_fetchPreferences);

    return NULL;
}


extern "C" {static PyObject *meth_Preferences_writePreferences(PyObject *, PyObject *);}
static PyObject *meth_Preferences_writePreferences(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        INIFile * a0;
        Preferences *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_Preferences,&sipCpp,sipClass_INIFile,&a0))
        {
            sipCpp->writePreferences(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Preferences,sipNm_BALL_writePreferences);

    return NULL;
}


extern "C" {static PyObject *meth_Preferences_show(PyObject *, PyObject *);}
static PyObject *meth_Preferences_show(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Preferences *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Preferences,&sipCpp))
        {
            try
            {
            sipCpp->show();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Preferences,sipNm_BALL_show);

    return NULL;
}


extern "C" {static PyObject *meth_Preferences_setDefaultValues(PyObject *, PyObject *);}
static PyObject *meth_Preferences_setDefaultValues(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Preferences *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Preferences,&sipCpp))
        {
            try
            {
            sipCpp->setDefaultValues();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Preferences,sipNm_BALL_setDefaultValues);

    return NULL;
}


extern "C" {static PyObject *meth_Preferences_cancelPreferences(PyObject *, PyObject *);}
static PyObject *meth_Preferences_cancelPreferences(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Preferences *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Preferences,&sipCpp))
        {
            try
            {
            sipCpp->cancelPreferences();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Preferences,sipNm_BALL_cancelPreferences);

    return NULL;
}


extern "C" {static PyObject *meth_Preferences_applyPreferences(PyObject *, PyObject *);}
static PyObject *meth_Preferences_applyPreferences(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Preferences *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Preferences,&sipCpp))
        {
            try
            {
            sipCpp->applyPreferences();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Preferences,sipNm_BALL_applyPreferences);

    return NULL;
}


extern "C" {static PyObject *meth_Preferences_showHelp(PyObject *, PyObject *);}
static PyObject *meth_Preferences_showHelp(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Preferences *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Preferences,&sipCpp))
        {
            try
            {
            sipCpp->showHelp();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Preferences,sipNm_BALL_showHelp);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_Preferences(void *, sipWrapperType *);}
static void *cast_Preferences(void *ptr,sipWrapperType *targetClass)
{
    if (targetClass == sipClass_Preferences)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_Preferences(void *, int);}
static void release_Preferences(void *ptr,int)
{
    delete reinterpret_cast<Preferences *>(ptr);
}


extern "C" {static void dealloc_Preferences(sipWrapper *);}
static void dealloc_Preferences(sipWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_Preferences(sipSelf->u.cppPtr,0);
    }
}


extern "C" {static void *init_Preferences(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_Preferences(sipWrapper *,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    Preferences *sipCpp = 0;

    if (!sipCpp)
    {
        const Preferences * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_Preferences,&a0))
        {
            sipCpp = new Preferences(*a0);
        }
    }

    return sipCpp;
}


extern "C" {static void *forceConvertTo_Preferences(PyObject *, int *);}
static void *forceConvertTo_Preferences(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_Preferences))
        return sipConvertToCpp(valobj,sipClass_Preferences,iserrp);

    sipBadClass(sipNm_BALL_Preferences);

    *iserrp = 1;

    return NULL;
}


static PyMethodDef methods_Preferences[] = {
    {sipNm_BALL_applyPreferences, meth_Preferences_applyPreferences, METH_VARARGS, NULL},
    {sipNm_BALL_cancelPreferences, meth_Preferences_cancelPreferences, METH_VARARGS, NULL},
    {sipNm_BALL_fetchPreferences, meth_Preferences_fetchPreferences, METH_VARARGS, NULL},
    {sipNm_BALL_setDefaultValues, meth_Preferences_setDefaultValues, METH_VARARGS, NULL},
    {sipNm_BALL_show, meth_Preferences_show, METH_VARARGS, NULL},
    {sipNm_BALL_showHelp, meth_Preferences_showHelp, METH_VARARGS, NULL},
    {sipNm_BALL_writePreferences, meth_Preferences_writePreferences, METH_VARARGS, NULL}
};


sipTypeDef sipType_BALL_Preferences = {
    0,
    0,
    "BALL.Preferences",
    0,
    {0, 0, 1},
    0,
    0,
    7, methods_Preferences,
    0, 0,
    0,
    init_Preferences,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_Preferences,
    cast_Preferences,
    release_Preferences,
    forceConvertTo_Preferences,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
