/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLCharmmFF.h"

#include "sipBALLForceField.h"
#include "sipBALLTooManyErrors.h"
#include "sipBALLSystem.h"
#include "sipBALLOptions.h"
#include "sipBALLCharmmFF.h"
#include "sipBALLForceFieldComponent.h"
#include "sipBALLString.h"
#include "sipBALLAtomVector.h"


sipCharmmFF::sipCharmmFF(): CharmmFF(), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,1);
}

sipCharmmFF::sipCharmmFF(System& a0): CharmmFF(a0), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,1);
}

sipCharmmFF::sipCharmmFF(System& a0,const Options& a1): CharmmFF(a0,a1), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,1);
}

sipCharmmFF::sipCharmmFF(const CharmmFF& a0): CharmmFF(a0), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,1);
}

sipCharmmFF::~sipCharmmFF()
{
    sipCommonDtor(sipPySelf);
}

bool sipCharmmFF::specificSetup() throw(TooManyErrors)
{
    extern bool sipVH_BALL_4(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipNm_BALL_specificSetup);

    if (!meth)
        return CharmmFF::specificSetup();

    return sipVH_BALL_4(sipGILState,meth);
}


extern "C" {static PyObject *meth_CharmmFF_specificSetup(PyObject *, PyObject *);}
static PyObject *meth_CharmmFF_specificSetup(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        CharmmFF *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_CharmmFF,&sipCpp))
        {
            bool sipRes;

            try
            {
            sipRes = (sipSelfWasArg ? sipCpp->CharmmFF::specificSetup() : sipCpp->specificSetup());
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_CharmmFF,sipNm_BALL_specificSetup);

    return NULL;
}


extern "C" {static PyObject *meth_CharmmFF_getStretchEnergy(PyObject *, PyObject *);}
static PyObject *meth_CharmmFF_getStretchEnergy(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        CharmmFF *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_CharmmFF,&sipCpp))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_CharmmFF,sipNm_BALL_getStretchEnergy);

    return NULL;
}


extern "C" {static PyObject *meth_CharmmFF_getBendEnergy(PyObject *, PyObject *);}
static PyObject *meth_CharmmFF_getBendEnergy(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        CharmmFF *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_CharmmFF,&sipCpp))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_CharmmFF,sipNm_BALL_getBendEnergy);

    return NULL;
}


extern "C" {static PyObject *meth_CharmmFF_getTorsionEnergy(PyObject *, PyObject *);}
static PyObject *meth_CharmmFF_getTorsionEnergy(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        CharmmFF *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_CharmmFF,&sipCpp))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_CharmmFF,sipNm_BALL_getTorsionEnergy);

    return NULL;
}


extern "C" {static PyObject *meth_CharmmFF_getImproperTorsionEnergy(PyObject *, PyObject *);}
static PyObject *meth_CharmmFF_getImproperTorsionEnergy(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        CharmmFF *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_CharmmFF,&sipCpp))
        {
            double sipRes;

            try
            {
            sipRes = sipCpp->getImproperTorsionEnergy();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_CharmmFF,sipNm_BALL_getImproperTorsionEnergy);

    return NULL;
}


extern "C" {static PyObject *meth_CharmmFF_getProperTorsionEnergy(PyObject *, PyObject *);}
static PyObject *meth_CharmmFF_getProperTorsionEnergy(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        CharmmFF *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_CharmmFF,&sipCpp))
        {
            double sipRes;

            try
            {
            sipRes = sipCpp->getProperTorsionEnergy();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_CharmmFF,sipNm_BALL_getProperTorsionEnergy);

    return NULL;
}


extern "C" {static PyObject *meth_CharmmFF_getNonbondedEnergy(PyObject *, PyObject *);}
static PyObject *meth_CharmmFF_getNonbondedEnergy(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        CharmmFF *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_CharmmFF,&sipCpp))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_CharmmFF,sipNm_BALL_getNonbondedEnergy);

    return NULL;
}


extern "C" {static PyObject *meth_CharmmFF_getVdWEnergy(PyObject *, PyObject *);}
static PyObject *meth_CharmmFF_getVdWEnergy(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        CharmmFF *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_CharmmFF,&sipCpp))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_CharmmFF,sipNm_BALL_getVdWEnergy);

    return NULL;
}


extern "C" {static PyObject *meth_CharmmFF_getESEnergy(PyObject *, PyObject *);}
static PyObject *meth_CharmmFF_getESEnergy(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        CharmmFF *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_CharmmFF,&sipCpp))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_CharmmFF,sipNm_BALL_getESEnergy);

    return NULL;
}


extern "C" {static PyObject *meth_CharmmFF_getSolvationEnergy(PyObject *, PyObject *);}
static PyObject *meth_CharmmFF_getSolvationEnergy(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        CharmmFF *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_CharmmFF,&sipCpp))
        {
            double sipRes;

            try
            {
            sipRes = sipCpp->getSolvationEnergy();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_CharmmFF,sipNm_BALL_getSolvationEnergy);

    return NULL;
}


extern "C" {static PyObject *meth_CharmmFF_hasInitializedParameters(PyObject *, PyObject *);}
static PyObject *meth_CharmmFF_hasInitializedParameters(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        CharmmFF *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_CharmmFF,&sipCpp))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_CharmmFF,sipNm_BALL_hasInitializedParameters);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_CharmmFF(void *, sipWrapperType *);}
static void *cast_CharmmFF(void *ptr,sipWrapperType *targetClass)
{
    void *res;

    if (targetClass == sipClass_CharmmFF)
        return ptr;

    if ((res = sipCast_ForceField((ForceField *)(CharmmFF *)ptr,targetClass)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_CharmmFF(void *, int);}
static void release_CharmmFF(void *ptr,int state)
{
    if (state & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipCharmmFF *>(ptr);
    else
        delete reinterpret_cast<CharmmFF *>(ptr);
}


extern "C" {static void dealloc_CharmmFF(sipWrapper *);}
static void dealloc_CharmmFF(sipWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipCharmmFF *>(sipSelf->u.cppPtr)->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_CharmmFF(sipSelf->u.cppPtr,sipSelf->flags);
    }
}


extern "C" {static void *init_CharmmFF(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_CharmmFF(sipWrapper *sipSelf,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    sipCharmmFF *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            try
            {
            sipCpp = new sipCharmmFF();
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
            sipCpp = new sipCharmmFF(*a0);
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
        const Options * a1;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JAJA",sipClass_System,&a0,sipClass_Options,&a1))
        {
            try
            {
            sipCpp = new sipCharmmFF(*a0,*a1);
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
        const CharmmFF * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_CharmmFF,&a0))
        {
            try
            {
            sipCpp = new sipCharmmFF(*a0);
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


extern "C" {static void *forceConvertTo_CharmmFF(PyObject *, int *);}
static void *forceConvertTo_CharmmFF(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_CharmmFF))
        return sipConvertToCpp(valobj,sipClass_CharmmFF,iserrp);

    sipBadClass(sipNm_BALL_CharmmFF);

    *iserrp = 1;

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedClassDef supers_CharmmFF[] = {{131, 255, 1}};


static PyMethodDef methods_CharmmFF[] = {
    {sipNm_BALL_getBendEnergy, meth_CharmmFF_getBendEnergy, METH_VARARGS, NULL},
    {sipNm_BALL_getESEnergy, meth_CharmmFF_getESEnergy, METH_VARARGS, NULL},
    {sipNm_BALL_getImproperTorsionEnergy, meth_CharmmFF_getImproperTorsionEnergy, METH_VARARGS, NULL},
    {sipNm_BALL_getNonbondedEnergy, meth_CharmmFF_getNonbondedEnergy, METH_VARARGS, NULL},
    {sipNm_BALL_getProperTorsionEnergy, meth_CharmmFF_getProperTorsionEnergy, METH_VARARGS, NULL},
    {sipNm_BALL_getSolvationEnergy, meth_CharmmFF_getSolvationEnergy, METH_VARARGS, NULL},
    {sipNm_BALL_getStretchEnergy, meth_CharmmFF_getStretchEnergy, METH_VARARGS, NULL},
    {sipNm_BALL_getTorsionEnergy, meth_CharmmFF_getTorsionEnergy, METH_VARARGS, NULL},
    {sipNm_BALL_getVdWEnergy, meth_CharmmFF_getVdWEnergy, METH_VARARGS, NULL},
    {sipNm_BALL_hasInitializedParameters, meth_CharmmFF_hasInitializedParameters, METH_VARARGS, NULL},
    {sipNm_BALL_specificSetup, meth_CharmmFF_specificSetup, METH_VARARGS, NULL}
};


sipTypeDef sipType_BALL_CharmmFF = {
    0,
    0,
    "BALL.CharmmFF",
    0,
    {0, 0, 1},
    supers_CharmmFF,
    0,
    11, methods_CharmmFF,
    0, 0,
    0,
    init_CharmmFF,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_CharmmFF,
    cast_CharmmFF,
    release_CharmmFF,
    forceConvertTo_CharmmFF,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
