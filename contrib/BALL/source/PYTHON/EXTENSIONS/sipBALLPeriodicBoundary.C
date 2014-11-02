/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLPeriodicBoundary.h"

#include "sipBALLOptions.h"
#include "sipBALLForceField.h"
#include "sipBALLPeriodicBoundary.h"
#include "sipBALLString.h"
#include "sipBALLSimpleBox3.h"



extern "C" {static PyObject *meth_PeriodicBoundary_setup(PyObject *, PyObject *);}
static PyObject *meth_PeriodicBoundary_setup(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        PeriodicBoundary *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_PeriodicBoundary,&sipCpp))
        {
            bool sipRes;

            try
            {
            sipRes = sipCpp->setup();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_PeriodicBoundary,sipNm_BALL_setup);

    return NULL;
}


extern "C" {static PyObject *meth_PeriodicBoundary_generateMoleculesVector(PyObject *, PyObject *);}
static PyObject *meth_PeriodicBoundary_generateMoleculesVector(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        PeriodicBoundary *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_PeriodicBoundary,&sipCpp))
        {
            int sipRes;

            try
            {
            sipRes = sipCpp->generateMoleculesVector();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_PeriodicBoundary,sipNm_BALL_generateMoleculesVector);

    return NULL;
}


extern "C" {static PyObject *meth_PeriodicBoundary_enable(PyObject *, PyObject *);}
static PyObject *meth_PeriodicBoundary_enable(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        PeriodicBoundary *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_PeriodicBoundary,&sipCpp))
        {
            try
            {
            sipCpp->enable();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_PeriodicBoundary,sipNm_BALL_enable);

    return NULL;
}


extern "C" {static PyObject *meth_PeriodicBoundary_disable(PyObject *, PyObject *);}
static PyObject *meth_PeriodicBoundary_disable(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        PeriodicBoundary *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_PeriodicBoundary,&sipCpp))
        {
            try
            {
            sipCpp->disable();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_PeriodicBoundary,sipNm_BALL_disable);

    return NULL;
}


extern "C" {static PyObject *meth_PeriodicBoundary_getBox(PyObject *, PyObject *);}
static PyObject *meth_PeriodicBoundary_getBox(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        PeriodicBoundary *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_PeriodicBoundary,&sipCpp))
        {
            SimpleBox3 *sipRes;

            try
            {
            sipRes = new SimpleBox3(sipCpp->getBox());
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return sipConvertFromNewInstance(sipRes,sipClass_SimpleBox3,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_PeriodicBoundary,sipNm_BALL_getBox);

    return NULL;
}


extern "C" {static PyObject *meth_PeriodicBoundary_setBox(PyObject *, PyObject *);}
static PyObject *meth_PeriodicBoundary_setBox(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const SimpleBox3 * a0;
        PeriodicBoundary *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_PeriodicBoundary,&sipCpp,sipClass_SimpleBox3,&a0))
        {
            try
            {
            sipCpp->setBox(*a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_PeriodicBoundary,sipNm_BALL_setBox);

    return NULL;
}


extern "C" {static PyObject *meth_PeriodicBoundary_addSolvent(PyObject *, PyObject *);}
static PyObject *meth_PeriodicBoundary_addSolvent(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const String * a0;
        int a0State = 0;
        PeriodicBoundary *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ1",&sipSelf,sipClass_PeriodicBoundary,&sipCpp,sipClass_String,&a0,&a0State))
        {
            int sipRes;

            try
            {
            sipRes = sipCpp->addSolvent(*a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_PeriodicBoundary,sipNm_BALL_addSolvent);

    return NULL;
}


extern "C" {static PyObject *meth_PeriodicBoundary_removeSolvent(PyObject *, PyObject *);}
static PyObject *meth_PeriodicBoundary_removeSolvent(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        PeriodicBoundary *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_PeriodicBoundary,&sipCpp))
        {
            int sipRes;

            try
            {
            sipRes = sipCpp->removeSolvent();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_PeriodicBoundary,sipNm_BALL_removeSolvent);

    return NULL;
}


extern "C" {static PyObject *meth_PeriodicBoundary_isEnabled(PyObject *, PyObject *);}
static PyObject *meth_PeriodicBoundary_isEnabled(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        PeriodicBoundary *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_PeriodicBoundary,&sipCpp))
        {
            bool sipRes;

            try
            {
            sipRes = sipCpp->isEnabled();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_PeriodicBoundary,sipNm_BALL_isEnabled);

    return NULL;
}


extern "C" {static PyObject *meth_PeriodicBoundary_updateMolecules(PyObject *, PyObject *);}
static PyObject *meth_PeriodicBoundary_updateMolecules(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        PeriodicBoundary *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_PeriodicBoundary,&sipCpp))
        {
            try
            {
            sipCpp->updateMolecules();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_PeriodicBoundary,sipNm_BALL_updateMolecules);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_PeriodicBoundary(void *, sipWrapperType *);}
static void *cast_PeriodicBoundary(void *ptr,sipWrapperType *targetClass)
{
    if (targetClass == sipClass_PeriodicBoundary)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_PeriodicBoundary(void *, int);}
static void release_PeriodicBoundary(void *ptr,int)
{
    delete reinterpret_cast<PeriodicBoundary *>(ptr);
}


extern "C" {static void dealloc_PeriodicBoundary(sipWrapper *);}
static void dealloc_PeriodicBoundary(sipWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_PeriodicBoundary(sipSelf->u.cppPtr,0);
    }
}


extern "C" {static void *init_PeriodicBoundary(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_PeriodicBoundary(sipWrapper *,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    PeriodicBoundary *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            try
            {
            sipCpp = new PeriodicBoundary();
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
        const ForceField * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_ForceField,&a0))
        {
            try
            {
            sipCpp = new PeriodicBoundary(*a0);
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
        const PeriodicBoundary * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_PeriodicBoundary,&a0))
        {
            try
            {
            sipCpp = new PeriodicBoundary(*a0);
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


extern "C" {static PyObject *var_PeriodicBoundary_options(PyObject *, PyObject *);}
static PyObject *var_PeriodicBoundary_options(PyObject *sipSelf,PyObject *sipPy)
{
    int sipIsErr = 0;
   Options *sipVal;
    PeriodicBoundary *sipCpp = reinterpret_cast<PeriodicBoundary *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_PeriodicBoundary));

    if (!sipCpp)
        return NULL;

    if (sipPy == NULL)
    {
        sipVal = sipCpp->options;

        sipPy = sipConvertFromInstance(sipVal,sipClass_Options,NULL);

        return sipPy;
    }

    sipVal = reinterpret_cast<Options *>(sipForceConvertToInstance(sipPy,sipClass_Options,NULL,0,NULL,&sipIsErr));

    if (sipIsErr)
        return NULL;

    sipCpp->options = sipVal;

    Py_INCREF(Py_None);
    return Py_None;
}

PyMethodDef variables_PeriodicBoundary[] = {
    {sipNm_BALL_options, var_PeriodicBoundary_options, 0, NULL},
    {0, 0, 0, 0}
};


extern "C" {static void *forceConvertTo_PeriodicBoundary(PyObject *, int *);}
static void *forceConvertTo_PeriodicBoundary(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_PeriodicBoundary))
        return sipConvertToCpp(valobj,sipClass_PeriodicBoundary,iserrp);

    sipBadClass(sipNm_BALL_PeriodicBoundary);

    *iserrp = 1;

    return NULL;
}


static PyMethodDef methods_PeriodicBoundary[] = {
    {sipNm_BALL_addSolvent, meth_PeriodicBoundary_addSolvent, METH_VARARGS, NULL},
    {sipNm_BALL_disable, meth_PeriodicBoundary_disable, METH_VARARGS, NULL},
    {sipNm_BALL_enable, meth_PeriodicBoundary_enable, METH_VARARGS, NULL},
    {sipNm_BALL_generateMoleculesVector, meth_PeriodicBoundary_generateMoleculesVector, METH_VARARGS, NULL},
    {sipNm_BALL_getBox, meth_PeriodicBoundary_getBox, METH_VARARGS, NULL},
    {sipNm_BALL_isEnabled, meth_PeriodicBoundary_isEnabled, METH_VARARGS, NULL},
    {sipNm_BALL_removeSolvent, meth_PeriodicBoundary_removeSolvent, METH_VARARGS, NULL},
    {sipNm_BALL_setBox, meth_PeriodicBoundary_setBox, METH_VARARGS, NULL},
    {sipNm_BALL_setup, meth_PeriodicBoundary_setup, METH_VARARGS, NULL},
    {sipNm_BALL_updateMolecules, meth_PeriodicBoundary_updateMolecules, METH_VARARGS, NULL}
};


sipTypeDef sipType_BALL_PeriodicBoundary = {
    0,
    0,
    "BALL.PeriodicBoundary",
    0,
    {0, 0, 1},
    0,
    0,
    10, methods_PeriodicBoundary,
    0, 0,
    variables_PeriodicBoundary,
    init_PeriodicBoundary,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_PeriodicBoundary,
    cast_PeriodicBoundary,
    release_PeriodicBoundary,
    forceConvertTo_PeriodicBoundary,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
