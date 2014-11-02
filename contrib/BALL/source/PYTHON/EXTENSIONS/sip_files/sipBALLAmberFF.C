/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLAmberFF.h"

#include "sipBALLForceField.h"
#include "sipBALLTooManyErrors.h"
#include "sipBALLSystem.h"
#include "sipBALLOptions.h"
#include "sipBALLAmberFF.h"
#include "sipBALLForceFieldComponent.h"
#include "sipBALLString.h"
#include "sipBALLAtomVector.h"


sipAmberFF::sipAmberFF(): AmberFF(), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,1);
}

sipAmberFF::sipAmberFF(System& a0): AmberFF(a0), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,1);
}

sipAmberFF::sipAmberFF(System& a0,Options& a1): AmberFF(a0,a1), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,1);
}

sipAmberFF::sipAmberFF(AmberFF& a0): AmberFF(a0), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,1);
}

sipAmberFF::~sipAmberFF()
{
    sipCommonDtor(sipPySelf);
}

bool sipAmberFF::specificSetup() throw(TooManyErrors)
{
    extern bool sipVH_BALL_4(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipNm_BALL_specificSetup);

    if (!meth)
        return AmberFF::specificSetup();

    return sipVH_BALL_4(sipGILState,meth);
}


extern "C" {static PyObject *meth_AmberFF_specificSetup(PyObject *, PyObject *);}
static PyObject *meth_AmberFF_specificSetup(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        AmberFF *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_AmberFF,&sipCpp))
        {
            bool sipRes;

            try
            {
            sipRes = (sipSelfWasArg ? sipCpp->AmberFF::specificSetup() : sipCpp->specificSetup());
            }
            catch (TooManyErrors &sipExceptionRef)
            {
                /* Hope that there is a valid copy ctor. */
                TooManyErrors *sipExceptionCopy = new TooManyErrors(sipExceptionRef);

                sipRaiseClassException(sipClass_TooManyErrors,sipExceptionCopy);

                return NULL;
            }

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_AmberFF,sipNm_BALL_specificSetup);

    return NULL;
}


extern "C" {static PyObject *meth_AmberFF_getStretchEnergy(PyObject *, PyObject *);}
static PyObject *meth_AmberFF_getStretchEnergy(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        AmberFF *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_AmberFF,&sipCpp))
        {
            double sipRes;

            try
            {
            sipRes = sipCpp->getStretchEnergy();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_AmberFF,sipNm_BALL_getStretchEnergy);

    return NULL;
}


extern "C" {static PyObject *meth_AmberFF_getBendEnergy(PyObject *, PyObject *);}
static PyObject *meth_AmberFF_getBendEnergy(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        AmberFF *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_AmberFF,&sipCpp))
        {
            double sipRes;

            try
            {
            sipRes = sipCpp->getBendEnergy();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_AmberFF,sipNm_BALL_getBendEnergy);

    return NULL;
}


extern "C" {static PyObject *meth_AmberFF_getTorsionEnergy(PyObject *, PyObject *);}
static PyObject *meth_AmberFF_getTorsionEnergy(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        AmberFF *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_AmberFF,&sipCpp))
        {
            double sipRes;

            try
            {
            sipRes = sipCpp->getTorsionEnergy();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_AmberFF,sipNm_BALL_getTorsionEnergy);

    return NULL;
}


extern "C" {static PyObject *meth_AmberFF_getNonbondedEnergy(PyObject *, PyObject *);}
static PyObject *meth_AmberFF_getNonbondedEnergy(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        AmberFF *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_AmberFF,&sipCpp))
        {
            double sipRes;

            try
            {
            sipRes = sipCpp->getNonbondedEnergy();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_AmberFF,sipNm_BALL_getNonbondedEnergy);

    return NULL;
}


extern "C" {static PyObject *meth_AmberFF_getESEnergy(PyObject *, PyObject *);}
static PyObject *meth_AmberFF_getESEnergy(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        AmberFF *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_AmberFF,&sipCpp))
        {
            double sipRes;

            try
            {
            sipRes = sipCpp->getESEnergy();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_AmberFF,sipNm_BALL_getESEnergy);

    return NULL;
}


extern "C" {static PyObject *meth_AmberFF_getVdWEnergy(PyObject *, PyObject *);}
static PyObject *meth_AmberFF_getVdWEnergy(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        AmberFF *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_AmberFF,&sipCpp))
        {
            double sipRes;

            try
            {
            sipRes = sipCpp->getVdWEnergy();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_AmberFF,sipNm_BALL_getVdWEnergy);

    return NULL;
}


extern "C" {static PyObject *meth_AmberFF_hasInitializedParameters(PyObject *, PyObject *);}
static PyObject *meth_AmberFF_hasInitializedParameters(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        AmberFF *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_AmberFF,&sipCpp))
        {
            bool sipRes;

            try
            {
            sipRes = sipCpp->hasInitializedParameters();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_AmberFF,sipNm_BALL_hasInitializedParameters);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_AmberFF(void *, sipWrapperType *);}
static void *cast_AmberFF(void *ptr,sipWrapperType *targetClass)
{
    void *res;

    if (targetClass == sipClass_AmberFF)
        return ptr;

    if ((res = sipCast_ForceField((ForceField *)(AmberFF *)ptr,targetClass)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_AmberFF(void *, int);}
static void release_AmberFF(void *ptr,int state)
{
    if (state & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipAmberFF *>(ptr);
    else
        delete reinterpret_cast<AmberFF *>(ptr);
}


extern "C" {static void dealloc_AmberFF(sipWrapper *);}
static void dealloc_AmberFF(sipWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipAmberFF *>(sipSelf->u.cppPtr)->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_AmberFF(sipSelf->u.cppPtr,sipSelf->flags);
    }
}


extern "C" {static void *init_AmberFF(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_AmberFF(sipWrapper *sipSelf,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    sipAmberFF *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            try
            {
            sipCpp = new sipAmberFF();
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
        System * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_System,&a0))
        {
            try
            {
            sipCpp = new sipAmberFF(*a0);
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
        System * a0;
        Options * a1;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JAJA",sipClass_System,&a0,sipClass_Options,&a1))
        {
            try
            {
            sipCpp = new sipAmberFF(*a0,*a1);
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
        AmberFF * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_AmberFF,&a0))
        {
            try
            {
            sipCpp = new sipAmberFF(*a0);
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }
        }
    }

    if (sipCpp)
        sipCpp->sipPySelf = sipSelf;

    return sipCpp;
}


extern "C" {static void *forceConvertTo_AmberFF(PyObject *, int *);}
static void *forceConvertTo_AmberFF(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_AmberFF))
        return sipConvertToCpp(valobj,sipClass_AmberFF,iserrp);

    sipBadClass(sipNm_BALL_AmberFF);

    *iserrp = 1;

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedClassDef supers_AmberFF[] = {{131, 255, 1}};


static PyMethodDef methods_AmberFF[] = {
    {sipNm_BALL_getBendEnergy, meth_AmberFF_getBendEnergy, METH_VARARGS, NULL},
    {sipNm_BALL_getESEnergy, meth_AmberFF_getESEnergy, METH_VARARGS, NULL},
    {sipNm_BALL_getNonbondedEnergy, meth_AmberFF_getNonbondedEnergy, METH_VARARGS, NULL},
    {sipNm_BALL_getStretchEnergy, meth_AmberFF_getStretchEnergy, METH_VARARGS, NULL},
    {sipNm_BALL_getTorsionEnergy, meth_AmberFF_getTorsionEnergy, METH_VARARGS, NULL},
    {sipNm_BALL_getVdWEnergy, meth_AmberFF_getVdWEnergy, METH_VARARGS, NULL},
    {sipNm_BALL_hasInitializedParameters, meth_AmberFF_hasInitializedParameters, METH_VARARGS, NULL},
    {sipNm_BALL_specificSetup, meth_AmberFF_specificSetup, METH_VARARGS, NULL}
};


sipTypeDef sipType_BALL_AmberFF = {
    0,
    0,
    "BALL.AmberFF",
    0,
    {0, 0, 1},
    supers_AmberFF,
    0,
    8, methods_AmberFF,
    0, 0,
    0,
    init_AmberFF,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_AmberFF,
    cast_AmberFF,
    release_AmberFF,
    forceConvertTo_AmberFF,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
