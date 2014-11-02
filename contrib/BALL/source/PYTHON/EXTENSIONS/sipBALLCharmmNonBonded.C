/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLCharmmNonBonded.h"

#include "sipBALLForceFieldComponent.h"
#include "sipBALLTooManyErrors.h"
#include "sipBALLForceField.h"
#include "sipBALLCharmmNonBonded.h"
#include "sipBALLString.h"


sipCharmmNonBonded::sipCharmmNonBonded(): CharmmNonBonded(), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,7);
}

sipCharmmNonBonded::sipCharmmNonBonded(ForceField& a0): CharmmNonBonded(a0), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,7);
}

sipCharmmNonBonded::sipCharmmNonBonded(const CharmmNonBonded& a0): CharmmNonBonded(a0), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,7);
}

sipCharmmNonBonded::~sipCharmmNonBonded() throw()
{
    sipCommonDtor(sipPySelf);
}

bool sipCharmmNonBonded::setup() throw(TooManyErrors)
{
    extern bool sipVH_BALL_4(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipNm_BALL_setup);

    if (!meth)
        return CharmmNonBonded::setup();

    return sipVH_BALL_4(sipGILState,meth);
}

double sipCharmmNonBonded::updateEnergy() throw()
{
    extern double sipVH_BALL_30(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,NULL,sipNm_BALL_updateEnergy);

    if (!meth)
        return CharmmNonBonded::updateEnergy();

    return sipVH_BALL_30(sipGILState,meth);
}

void sipCharmmNonBonded::updateForces() throw()
{
    extern void sipVH_BALL_0(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[2],sipPySelf,NULL,sipNm_BALL_updateForces);

    if (!meth)
    {
        CharmmNonBonded::updateForces();
        return;
    }

    sipVH_BALL_0(sipGILState,meth);
}

double sipCharmmNonBonded::getElectrostaticEnergy() const throw()
{
    extern double sipVH_BALL_30(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<sipMethodCache *>(&sipPyMethods[3]),sipPySelf,NULL,sipNm_BALL_getElectrostaticEnergy);

    if (!meth)
        return CharmmNonBonded::getElectrostaticEnergy();

    return sipVH_BALL_30(sipGILState,meth);
}

double sipCharmmNonBonded::getVdwEnergy() const throw()
{
    extern double sipVH_BALL_30(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<sipMethodCache *>(&sipPyMethods[4]),sipPySelf,NULL,sipNm_BALL_getVdwEnergy);

    if (!meth)
        return CharmmNonBonded::getVdwEnergy();

    return sipVH_BALL_30(sipGILState,meth);
}

double sipCharmmNonBonded::getSolvationEnergy() const throw()
{
    extern double sipVH_BALL_30(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<sipMethodCache *>(&sipPyMethods[5]),sipPySelf,NULL,sipNm_BALL_getSolvationEnergy);

    if (!meth)
        return CharmmNonBonded::getSolvationEnergy();

    return sipVH_BALL_30(sipGILState,meth);
}

double sipCharmmNonBonded::getEnergy() const
{
    extern double sipVH_BALL_30(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<sipMethodCache *>(&sipPyMethods[6]),sipPySelf,NULL,sipNm_BALL_getEnergy);

    if (!meth)
        return ForceFieldComponent::getEnergy();

    return sipVH_BALL_30(sipGILState,meth);
}


extern "C" {static PyObject *meth_CharmmNonBonded_setup(PyObject *, PyObject *);}
static PyObject *meth_CharmmNonBonded_setup(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        CharmmNonBonded *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_CharmmNonBonded,&sipCpp))
        {
            bool sipRes;

            try
            {
            sipRes = (sipSelfWasArg ? sipCpp->CharmmNonBonded::setup() : sipCpp->setup());
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_CharmmNonBonded,sipNm_BALL_setup);

    return NULL;
}


extern "C" {static PyObject *meth_CharmmNonBonded_updateEnergy(PyObject *, PyObject *);}
static PyObject *meth_CharmmNonBonded_updateEnergy(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        CharmmNonBonded *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_CharmmNonBonded,&sipCpp))
        {
            double sipRes;

            sipRes = (sipSelfWasArg ? sipCpp->CharmmNonBonded::updateEnergy() : sipCpp->updateEnergy());

            return PyFloat_FromDouble(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_CharmmNonBonded,sipNm_BALL_updateEnergy);

    return NULL;
}


extern "C" {static PyObject *meth_CharmmNonBonded_updateForces(PyObject *, PyObject *);}
static PyObject *meth_CharmmNonBonded_updateForces(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        CharmmNonBonded *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_CharmmNonBonded,&sipCpp))
        {
            (sipSelfWasArg ? sipCpp->CharmmNonBonded::updateForces() : sipCpp->updateForces());

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_CharmmNonBonded,sipNm_BALL_updateForces);

    return NULL;
}


extern "C" {static PyObject *meth_CharmmNonBonded_getElectrostaticEnergy(PyObject *, PyObject *);}
static PyObject *meth_CharmmNonBonded_getElectrostaticEnergy(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        CharmmNonBonded *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_CharmmNonBonded,&sipCpp))
        {
            double sipRes;

            sipRes = (sipSelfWasArg ? sipCpp->CharmmNonBonded::getElectrostaticEnergy() : sipCpp->getElectrostaticEnergy());

            return PyFloat_FromDouble(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_CharmmNonBonded,sipNm_BALL_getElectrostaticEnergy);

    return NULL;
}


extern "C" {static PyObject *meth_CharmmNonBonded_getVdwEnergy(PyObject *, PyObject *);}
static PyObject *meth_CharmmNonBonded_getVdwEnergy(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        CharmmNonBonded *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_CharmmNonBonded,&sipCpp))
        {
            double sipRes;

            sipRes = (sipSelfWasArg ? sipCpp->CharmmNonBonded::getVdwEnergy() : sipCpp->getVdwEnergy());

            return PyFloat_FromDouble(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_CharmmNonBonded,sipNm_BALL_getVdwEnergy);

    return NULL;
}


extern "C" {static PyObject *meth_CharmmNonBonded_getSolvationEnergy(PyObject *, PyObject *);}
static PyObject *meth_CharmmNonBonded_getSolvationEnergy(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        CharmmNonBonded *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_CharmmNonBonded,&sipCpp))
        {
            double sipRes;

            sipRes = (sipSelfWasArg ? sipCpp->CharmmNonBonded::getSolvationEnergy() : sipCpp->getSolvationEnergy());

            return PyFloat_FromDouble(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_CharmmNonBonded,sipNm_BALL_getSolvationEnergy);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_CharmmNonBonded(void *, sipWrapperType *);}
static void *cast_CharmmNonBonded(void *ptr,sipWrapperType *targetClass)
{
    void *res;

    if (targetClass == sipClass_CharmmNonBonded)
        return ptr;

    if ((res = sipCast_ForceFieldComponent((ForceFieldComponent *)(CharmmNonBonded *)ptr,targetClass)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_CharmmNonBonded(void *, int);}
static void release_CharmmNonBonded(void *ptr,int state)
{
    if (state & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipCharmmNonBonded *>(ptr);
    else
        delete reinterpret_cast<CharmmNonBonded *>(ptr);
}


extern "C" {static void dealloc_CharmmNonBonded(sipWrapper *);}
static void dealloc_CharmmNonBonded(sipWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipCharmmNonBonded *>(sipSelf->u.cppPtr)->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_CharmmNonBonded(sipSelf->u.cppPtr,sipSelf->flags);
    }
}


extern "C" {static void *init_CharmmNonBonded(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_CharmmNonBonded(sipWrapper *sipSelf,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    sipCharmmNonBonded *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            try
            {
            sipCpp = new sipCharmmNonBonded();
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
            sipCpp = new sipCharmmNonBonded(*a0);
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
        const CharmmNonBonded * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_CharmmNonBonded,&a0))
        {
            try
            {
            sipCpp = new sipCharmmNonBonded(*a0);
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


extern "C" {static void *forceConvertTo_CharmmNonBonded(PyObject *, int *);}
static void *forceConvertTo_CharmmNonBonded(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_CharmmNonBonded))
        return sipConvertToCpp(valobj,sipClass_CharmmNonBonded,iserrp);

    sipBadClass(sipNm_BALL_CharmmNonBonded);

    *iserrp = 1;

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedClassDef supers_CharmmNonBonded[] = {{121, 255, 1}};


static PyMethodDef methods_CharmmNonBonded[] = {
    {sipNm_BALL_getElectrostaticEnergy, meth_CharmmNonBonded_getElectrostaticEnergy, METH_VARARGS, NULL},
    {sipNm_BALL_getSolvationEnergy, meth_CharmmNonBonded_getSolvationEnergy, METH_VARARGS, NULL},
    {sipNm_BALL_getVdwEnergy, meth_CharmmNonBonded_getVdwEnergy, METH_VARARGS, NULL},
    {sipNm_BALL_setup, meth_CharmmNonBonded_setup, METH_VARARGS, NULL},
    {sipNm_BALL_updateEnergy, meth_CharmmNonBonded_updateEnergy, METH_VARARGS, NULL},
    {sipNm_BALL_updateForces, meth_CharmmNonBonded_updateForces, METH_VARARGS, NULL}
};


sipTypeDef sipType_BALL_CharmmNonBonded = {
    0,
    0,
    "BALL.CharmmNonBonded",
    0,
    {0, 0, 1},
    supers_CharmmNonBonded,
    0,
    6, methods_CharmmNonBonded,
    0, 0,
    0,
    init_CharmmNonBonded,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_CharmmNonBonded,
    cast_CharmmNonBonded,
    release_CharmmNonBonded,
    forceConvertTo_CharmmNonBonded,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
