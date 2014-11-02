/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLAmberNonBonded.h"

#include "sipBALLForceFieldComponent.h"
#include "sipBALLTooManyErrors.h"
#include "sipBALLForceField.h"
#include "sipBALLAmberNonBonded.h"
#include "sipBALLString.h"


sipAmberNonBonded::sipAmberNonBonded(): AmberNonBonded(), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,6);
}

sipAmberNonBonded::sipAmberNonBonded(ForceField& a0): AmberNonBonded(a0), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,6);
}

sipAmberNonBonded::sipAmberNonBonded(const AmberNonBonded& a0): AmberNonBonded(a0), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,6);
}

sipAmberNonBonded::~sipAmberNonBonded() throw()
{
    sipCommonDtor(sipPySelf);
}

bool sipAmberNonBonded::setup() throw(TooManyErrors)
{
    extern bool sipVH_BALL_4(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipNm_BALL_setup);

    if (!meth)
        return AmberNonBonded::setup();

    return sipVH_BALL_4(sipGILState,meth);
}

double sipAmberNonBonded::updateEnergy() throw()
{
    extern double sipVH_BALL_30(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,NULL,sipNm_BALL_updateEnergy);

    if (!meth)
        return AmberNonBonded::updateEnergy();

    return sipVH_BALL_30(sipGILState,meth);
}

void sipAmberNonBonded::updateForces() throw()
{
    extern void sipVH_BALL_0(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[2],sipPySelf,NULL,sipNm_BALL_updateForces);

    if (!meth)
    {
        AmberNonBonded::updateForces();
        return;
    }

    sipVH_BALL_0(sipGILState,meth);
}

double sipAmberNonBonded::getElectrostaticEnergy() const throw()
{
    extern double sipVH_BALL_30(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<sipMethodCache *>(&sipPyMethods[3]),sipPySelf,NULL,sipNm_BALL_getElectrostaticEnergy);

    if (!meth)
        return AmberNonBonded::getElectrostaticEnergy();

    return sipVH_BALL_30(sipGILState,meth);
}

double sipAmberNonBonded::getVdwEnergy() const throw()
{
    extern double sipVH_BALL_30(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<sipMethodCache *>(&sipPyMethods[4]),sipPySelf,NULL,sipNm_BALL_getVdwEnergy);

    if (!meth)
        return AmberNonBonded::getVdwEnergy();

    return sipVH_BALL_30(sipGILState,meth);
}

double sipAmberNonBonded::getEnergy() const
{
    extern double sipVH_BALL_30(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<sipMethodCache *>(&sipPyMethods[5]),sipPySelf,NULL,sipNm_BALL_getEnergy);

    if (!meth)
        return ForceFieldComponent::getEnergy();

    return sipVH_BALL_30(sipGILState,meth);
}


extern "C" {static PyObject *meth_AmberNonBonded_setup(PyObject *, PyObject *);}
static PyObject *meth_AmberNonBonded_setup(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        AmberNonBonded *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_AmberNonBonded,&sipCpp))
        {
            bool sipRes;

            try
            {
            sipRes = (sipSelfWasArg ? sipCpp->AmberNonBonded::setup() : sipCpp->setup());
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_AmberNonBonded,sipNm_BALL_setup);

    return NULL;
}


extern "C" {static PyObject *meth_AmberNonBonded_updateEnergy(PyObject *, PyObject *);}
static PyObject *meth_AmberNonBonded_updateEnergy(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        AmberNonBonded *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_AmberNonBonded,&sipCpp))
        {
            double sipRes;

            sipRes = (sipSelfWasArg ? sipCpp->AmberNonBonded::updateEnergy() : sipCpp->updateEnergy());

            return PyFloat_FromDouble(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_AmberNonBonded,sipNm_BALL_updateEnergy);

    return NULL;
}


extern "C" {static PyObject *meth_AmberNonBonded_updateForces(PyObject *, PyObject *);}
static PyObject *meth_AmberNonBonded_updateForces(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        AmberNonBonded *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_AmberNonBonded,&sipCpp))
        {
            (sipSelfWasArg ? sipCpp->AmberNonBonded::updateForces() : sipCpp->updateForces());

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_AmberNonBonded,sipNm_BALL_updateForces);

    return NULL;
}


extern "C" {static PyObject *meth_AmberNonBonded_getElectrostaticEnergy(PyObject *, PyObject *);}
static PyObject *meth_AmberNonBonded_getElectrostaticEnergy(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        AmberNonBonded *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_AmberNonBonded,&sipCpp))
        {
            double sipRes;

            sipRes = (sipSelfWasArg ? sipCpp->AmberNonBonded::getElectrostaticEnergy() : sipCpp->getElectrostaticEnergy());

            return PyFloat_FromDouble(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_AmberNonBonded,sipNm_BALL_getElectrostaticEnergy);

    return NULL;
}


extern "C" {static PyObject *meth_AmberNonBonded_getVdwEnergy(PyObject *, PyObject *);}
static PyObject *meth_AmberNonBonded_getVdwEnergy(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        AmberNonBonded *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_AmberNonBonded,&sipCpp))
        {
            double sipRes;

            sipRes = (sipSelfWasArg ? sipCpp->AmberNonBonded::getVdwEnergy() : sipCpp->getVdwEnergy());

            return PyFloat_FromDouble(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_AmberNonBonded,sipNm_BALL_getVdwEnergy);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_AmberNonBonded(void *, sipWrapperType *);}
static void *cast_AmberNonBonded(void *ptr,sipWrapperType *targetClass)
{
    void *res;

    if (targetClass == sipClass_AmberNonBonded)
        return ptr;

    if ((res = sipCast_ForceFieldComponent((ForceFieldComponent *)(AmberNonBonded *)ptr,targetClass)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_AmberNonBonded(void *, int);}
static void release_AmberNonBonded(void *ptr,int state)
{
    if (state & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipAmberNonBonded *>(ptr);
    else
        delete reinterpret_cast<AmberNonBonded *>(ptr);
}


extern "C" {static void dealloc_AmberNonBonded(sipWrapper *);}
static void dealloc_AmberNonBonded(sipWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipAmberNonBonded *>(sipSelf->u.cppPtr)->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_AmberNonBonded(sipSelf->u.cppPtr,sipSelf->flags);
    }
}


extern "C" {static void *init_AmberNonBonded(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_AmberNonBonded(sipWrapper *sipSelf,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    sipAmberNonBonded *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            try
            {
            sipCpp = new sipAmberNonBonded();
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
        ForceField * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_ForceField,&a0))
        {
            try
            {
            sipCpp = new sipAmberNonBonded(*a0);
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
        const AmberNonBonded * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_AmberNonBonded,&a0))
        {
            try
            {
            sipCpp = new sipAmberNonBonded(*a0);
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


extern "C" {static void *forceConvertTo_AmberNonBonded(PyObject *, int *);}
static void *forceConvertTo_AmberNonBonded(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_AmberNonBonded))
        return sipConvertToCpp(valobj,sipClass_AmberNonBonded,iserrp);

    sipBadClass(sipNm_BALL_AmberNonBonded);

    *iserrp = 1;

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedClassDef supers_AmberNonBonded[] = {{121, 255, 1}};


static PyMethodDef methods_AmberNonBonded[] = {
    {sipNm_BALL_getElectrostaticEnergy, meth_AmberNonBonded_getElectrostaticEnergy, METH_VARARGS, NULL},
    {sipNm_BALL_getVdwEnergy, meth_AmberNonBonded_getVdwEnergy, METH_VARARGS, NULL},
    {sipNm_BALL_setup, meth_AmberNonBonded_setup, METH_VARARGS, NULL},
    {sipNm_BALL_updateEnergy, meth_AmberNonBonded_updateEnergy, METH_VARARGS, NULL},
    {sipNm_BALL_updateForces, meth_AmberNonBonded_updateForces, METH_VARARGS, NULL}
};


sipTypeDef sipType_BALL_AmberNonBonded = {
    0,
    0,
    "BALL.AmberNonBonded",
    0,
    {0, 0, 1},
    supers_AmberNonBonded,
    0,
    5, methods_AmberNonBonded,
    0, 0,
    0,
    init_AmberNonBonded,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_AmberNonBonded,
    cast_AmberNonBonded,
    release_AmberNonBonded,
    forceConvertTo_AmberNonBonded,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
