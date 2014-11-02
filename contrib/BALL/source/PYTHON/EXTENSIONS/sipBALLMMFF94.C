/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLMMFF94.h"

#include "sipBALLForceField.h"
#include "sipBALLTooManyErrors.h"
#include "sipBALLSystem.h"
#include "sipBALLOptions.h"
#include "sipBALLMMFF94.h"
#include "sipBALLAtom.h"
#include "sipBALLBond.h"
#include "sipBALLString.h"
#include "sipBALLForceFieldComponent.h"
#include "sipBALLAtomVector.h"


sipMMFF94::sipMMFF94(): MMFF94(), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,2);
}

sipMMFF94::sipMMFF94(System& a0): MMFF94(a0), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,2);
}

sipMMFF94::sipMMFF94(System& a0,Options& a1): MMFF94(a0,a1), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,2);
}

sipMMFF94::sipMMFF94(MMFF94& a0): MMFF94(a0), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,2);
}

sipMMFF94::~sipMMFF94()
{
    sipCommonDtor(sipPySelf);
}

String sipMMFF94::getResults() const throw()
{
    extern String sipVH_BALL_39(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<sipMethodCache *>(&sipPyMethods[0]),sipPySelf,NULL,sipNm_BALL_getResults);

    if (!meth)
        return MMFF94::getResults();

    return sipVH_BALL_39(sipGILState,meth);
}

bool sipMMFF94::specificSetup() throw(TooManyErrors)
{
    extern bool sipVH_BALL_4(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,NULL,sipNm_BALL_specificSetup);

    if (!meth)
        return MMFF94::specificSetup();

    return sipVH_BALL_4(sipGILState,meth);
}


extern "C" {static PyObject *meth_MMFF94_specificSetup(PyObject *, PyObject *);}
static PyObject *meth_MMFF94_specificSetup(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        MMFF94 *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_MMFF94,&sipCpp))
        {
            bool sipRes;

            try
            {
            sipRes = (sipSelfWasArg ? sipCpp->MMFF94::specificSetup() : sipCpp->specificSetup());
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_MMFF94,sipNm_BALL_specificSetup);

    return NULL;
}


extern "C" {static PyObject *meth_MMFF94_getStretchEnergy(PyObject *, PyObject *);}
static PyObject *meth_MMFF94_getStretchEnergy(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        MMFF94 *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_MMFF94,&sipCpp))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_MMFF94,sipNm_BALL_getStretchEnergy);

    return NULL;
}


extern "C" {static PyObject *meth_MMFF94_getBendEnergy(PyObject *, PyObject *);}
static PyObject *meth_MMFF94_getBendEnergy(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        MMFF94 *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_MMFF94,&sipCpp))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_MMFF94,sipNm_BALL_getBendEnergy);

    return NULL;
}


extern "C" {static PyObject *meth_MMFF94_getStretchBendEnergy(PyObject *, PyObject *);}
static PyObject *meth_MMFF94_getStretchBendEnergy(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        MMFF94 *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_MMFF94,&sipCpp))
        {
            double sipRes;

            try
            {
            sipRes = sipCpp->getStretchBendEnergy();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_MMFF94,sipNm_BALL_getStretchBendEnergy);

    return NULL;
}


extern "C" {static PyObject *meth_MMFF94_getTorsionEnergy(PyObject *, PyObject *);}
static PyObject *meth_MMFF94_getTorsionEnergy(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        MMFF94 *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_MMFF94,&sipCpp))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_MMFF94,sipNm_BALL_getTorsionEnergy);

    return NULL;
}


extern "C" {static PyObject *meth_MMFF94_getNonbondedEnergy(PyObject *, PyObject *);}
static PyObject *meth_MMFF94_getNonbondedEnergy(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        MMFF94 *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_MMFF94,&sipCpp))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_MMFF94,sipNm_BALL_getNonbondedEnergy);

    return NULL;
}


extern "C" {static PyObject *meth_MMFF94_getESEnergy(PyObject *, PyObject *);}
static PyObject *meth_MMFF94_getESEnergy(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        MMFF94 *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_MMFF94,&sipCpp))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_MMFF94,sipNm_BALL_getESEnergy);

    return NULL;
}


extern "C" {static PyObject *meth_MMFF94_getVdWEnergy(PyObject *, PyObject *);}
static PyObject *meth_MMFF94_getVdWEnergy(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        MMFF94 *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_MMFF94,&sipCpp))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_MMFF94,sipNm_BALL_getVdWEnergy);

    return NULL;
}


extern "C" {static PyObject *meth_MMFF94_getPlaneEnergy(PyObject *, PyObject *);}
static PyObject *meth_MMFF94_getPlaneEnergy(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        MMFF94 *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_MMFF94,&sipCpp))
        {
            double sipRes;

            try
            {
            sipRes = sipCpp->getPlaneEnergy();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_MMFF94,sipNm_BALL_getPlaneEnergy);

    return NULL;
}


extern "C" {static PyObject *meth_MMFF94_hasInitializedParameters(PyObject *, PyObject *);}
static PyObject *meth_MMFF94_hasInitializedParameters(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        MMFF94 *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_MMFF94,&sipCpp))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_MMFF94,sipNm_BALL_hasInitializedParameters);

    return NULL;
}


extern "C" {static PyObject *meth_MMFF94_getUpdateFrequency(PyObject *, PyObject *);}
static PyObject *meth_MMFF94_getUpdateFrequency(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        MMFF94 *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_MMFF94,&sipCpp))
        {
            int sipRes;

            try
            {
            sipRes = sipCpp->getUpdateFrequency();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_MMFF94,sipNm_BALL_getUpdateFrequency);

    return NULL;
}


extern "C" {static PyObject *meth_MMFF94_getResults(PyObject *, PyObject *);}
static PyObject *meth_MMFF94_getResults(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        MMFF94 *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_MMFF94,&sipCpp))
        {
            String *sipRes;

            sipRes = new String((sipSelfWasArg ? sipCpp->MMFF94::getResults() : sipCpp->getResults()));

            return sipConvertFromNewInstance(sipRes,sipClass_String,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_MMFF94,sipNm_BALL_getResults);

    return NULL;
}


extern "C" {static PyObject *meth_MMFF94_isInOneAromaticRing(PyObject *, PyObject *);}
static PyObject *meth_MMFF94_isInOneAromaticRing(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const Bond * a0;
        MMFF94 *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_MMFF94,&sipCpp,sipClass_Bond,&a0))
        {
            bool sipRes;

            try
            {
            sipRes = sipCpp->isInOneAromaticRing(*a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_MMFF94,sipNm_BALL_isInOneAromaticRing);

    return NULL;
}


extern "C" {static PyObject *meth_MMFF94_checkAtomType(PyObject *, PyObject *);}
static PyObject *meth_MMFF94_checkAtomType(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Atom * a0;
        MMFF94 *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_MMFF94,&sipCpp,sipClass_Atom,&a0))
        {
            bool sipRes;

            try
            {
            sipRes = sipCpp->checkAtomType(*a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_MMFF94,sipNm_BALL_checkAtomType);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_MMFF94(void *, sipWrapperType *);}
static void *cast_MMFF94(void *ptr,sipWrapperType *targetClass)
{
    void *res;

    if (targetClass == sipClass_MMFF94)
        return ptr;

    if ((res = sipCast_ForceField((ForceField *)(MMFF94 *)ptr,targetClass)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_MMFF94(void *, int);}
static void release_MMFF94(void *ptr,int state)
{
    if (state & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipMMFF94 *>(ptr);
    else
        delete reinterpret_cast<MMFF94 *>(ptr);
}


extern "C" {static void dealloc_MMFF94(sipWrapper *);}
static void dealloc_MMFF94(sipWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipMMFF94 *>(sipSelf->u.cppPtr)->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_MMFF94(sipSelf->u.cppPtr,sipSelf->flags);
    }
}


extern "C" {static void *init_MMFF94(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_MMFF94(sipWrapper *sipSelf,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    sipMMFF94 *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            try
            {
            sipCpp = new sipMMFF94();
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
            sipCpp = new sipMMFF94(*a0);
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
            sipCpp = new sipMMFF94(*a0,*a1);
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
        MMFF94 * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_MMFF94,&a0))
        {
            try
            {
            sipCpp = new sipMMFF94(*a0);
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


extern "C" {static void *forceConvertTo_MMFF94(PyObject *, int *);}
static void *forceConvertTo_MMFF94(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_MMFF94))
        return sipConvertToCpp(valobj,sipClass_MMFF94,iserrp);

    sipBadClass(sipNm_BALL_MMFF94);

    *iserrp = 1;

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedClassDef supers_MMFF94[] = {{131, 255, 1}};


static PyMethodDef methods_MMFF94[] = {
    {sipNm_BALL_checkAtomType, meth_MMFF94_checkAtomType, METH_VARARGS, NULL},
    {sipNm_BALL_getBendEnergy, meth_MMFF94_getBendEnergy, METH_VARARGS, NULL},
    {sipNm_BALL_getESEnergy, meth_MMFF94_getESEnergy, METH_VARARGS, NULL},
    {sipNm_BALL_getNonbondedEnergy, meth_MMFF94_getNonbondedEnergy, METH_VARARGS, NULL},
    {sipNm_BALL_getPlaneEnergy, meth_MMFF94_getPlaneEnergy, METH_VARARGS, NULL},
    {sipNm_BALL_getResults, meth_MMFF94_getResults, METH_VARARGS, NULL},
    {sipNm_BALL_getStretchBendEnergy, meth_MMFF94_getStretchBendEnergy, METH_VARARGS, NULL},
    {sipNm_BALL_getStretchEnergy, meth_MMFF94_getStretchEnergy, METH_VARARGS, NULL},
    {sipNm_BALL_getTorsionEnergy, meth_MMFF94_getTorsionEnergy, METH_VARARGS, NULL},
    {sipNm_BALL_getUpdateFrequency, meth_MMFF94_getUpdateFrequency, METH_VARARGS, NULL},
    {sipNm_BALL_getVdWEnergy, meth_MMFF94_getVdWEnergy, METH_VARARGS, NULL},
    {sipNm_BALL_hasInitializedParameters, meth_MMFF94_hasInitializedParameters, METH_VARARGS, NULL},
    {sipNm_BALL_isInOneAromaticRing, meth_MMFF94_isInOneAromaticRing, METH_VARARGS, NULL},
    {sipNm_BALL_specificSetup, meth_MMFF94_specificSetup, METH_VARARGS, NULL}
};


sipTypeDef sipType_BALL_MMFF94 = {
    0,
    0,
    "BALL.MMFF94",
    0,
    {0, 0, 1},
    supers_MMFF94,
    0,
    14, methods_MMFF94,
    0, 0,
    0,
    init_MMFF94,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_MMFF94,
    cast_MMFF94,
    release_MMFF94,
    forceConvertTo_MMFF94,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
