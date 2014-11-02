/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLAmberStretch.h"

#include "sipBALLForceFieldComponent.h"
#include "sipBALLTooManyErrors.h"
#include "sipBALLForceField.h"
#include "sipBALLAmberStretch.h"
#include "sipBALLString.h"


sipAmberStretch::sipAmberStretch(): AmberStretch(), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,4);
}

sipAmberStretch::sipAmberStretch(ForceField& a0): AmberStretch(a0), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,4);
}

sipAmberStretch::sipAmberStretch(const AmberStretch& a0): AmberStretch(a0), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,4);
}

sipAmberStretch::~sipAmberStretch()
{
    sipCommonDtor(sipPySelf);
}

bool sipAmberStretch::setup() throw(TooManyErrors)
{
    extern bool sipVH_BALL_4(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipNm_BALL_setup);

    if (!meth)
        return AmberStretch::setup();

    return sipVH_BALL_4(sipGILState,meth);
}

double sipAmberStretch::updateEnergy()
{
    extern double sipVH_BALL_30(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,NULL,sipNm_BALL_updateEnergy);

    if (!meth)
        return AmberStretch::updateEnergy();

    return sipVH_BALL_30(sipGILState,meth);
}

void sipAmberStretch::updateForces()
{
    extern void sipVH_BALL_0(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[2],sipPySelf,NULL,sipNm_BALL_updateForces);

    if (!meth)
    {
        AmberStretch::updateForces();
        return;
    }

    sipVH_BALL_0(sipGILState,meth);
}

double sipAmberStretch::getEnergy() const
{
    extern double sipVH_BALL_30(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<sipMethodCache *>(&sipPyMethods[3]),sipPySelf,NULL,sipNm_BALL_getEnergy);

    if (!meth)
        return ForceFieldComponent::getEnergy();

    return sipVH_BALL_30(sipGILState,meth);
}


extern "C" {static PyObject *meth_AmberStretch_setup(PyObject *, PyObject *);}
static PyObject *meth_AmberStretch_setup(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        AmberStretch *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_AmberStretch,&sipCpp))
        {
            bool sipRes;

            try
            {
            sipRes = (sipSelfWasArg ? sipCpp->AmberStretch::setup() : sipCpp->setup());
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_AmberStretch,sipNm_BALL_setup);

    return NULL;
}


extern "C" {static PyObject *meth_AmberStretch_updateEnergy(PyObject *, PyObject *);}
static PyObject *meth_AmberStretch_updateEnergy(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        AmberStretch *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_AmberStretch,&sipCpp))
        {
            double sipRes;

            try
            {
            sipRes = (sipSelfWasArg ? sipCpp->AmberStretch::updateEnergy() : sipCpp->updateEnergy());
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_AmberStretch,sipNm_BALL_updateEnergy);

    return NULL;
}


extern "C" {static PyObject *meth_AmberStretch_updateForces(PyObject *, PyObject *);}
static PyObject *meth_AmberStretch_updateForces(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        AmberStretch *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_AmberStretch,&sipCpp))
        {
            try
            {
            (sipSelfWasArg ? sipCpp->AmberStretch::updateForces() : sipCpp->updateForces());
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_AmberStretch,sipNm_BALL_updateForces);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_AmberStretch(void *, sipWrapperType *);}
static void *cast_AmberStretch(void *ptr,sipWrapperType *targetClass)
{
    void *res;

    if (targetClass == sipClass_AmberStretch)
        return ptr;

    if ((res = sipCast_ForceFieldComponent((ForceFieldComponent *)(AmberStretch *)ptr,targetClass)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_AmberStretch(void *, int);}
static void release_AmberStretch(void *ptr,int state)
{
    if (state & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipAmberStretch *>(ptr);
    else
        delete reinterpret_cast<AmberStretch *>(ptr);
}


extern "C" {static void dealloc_AmberStretch(sipWrapper *);}
static void dealloc_AmberStretch(sipWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipAmberStretch *>(sipSelf->u.cppPtr)->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_AmberStretch(sipSelf->u.cppPtr,sipSelf->flags);
    }
}


extern "C" {static void *init_AmberStretch(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_AmberStretch(sipWrapper *sipSelf,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    sipAmberStretch *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            try
            {
            sipCpp = new sipAmberStretch();
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
            sipCpp = new sipAmberStretch(*a0);
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
        const AmberStretch * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_AmberStretch,&a0))
        {
            try
            {
            sipCpp = new sipAmberStretch(*a0);
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


extern "C" {static void *forceConvertTo_AmberStretch(PyObject *, int *);}
static void *forceConvertTo_AmberStretch(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_AmberStretch))
        return sipConvertToCpp(valobj,sipClass_AmberStretch,iserrp);

    sipBadClass(sipNm_BALL_AmberStretch);

    *iserrp = 1;

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedClassDef supers_AmberStretch[] = {{121, 255, 1}};


static PyMethodDef methods_AmberStretch[] = {
    {sipNm_BALL_setup, meth_AmberStretch_setup, METH_VARARGS, NULL},
    {sipNm_BALL_updateEnergy, meth_AmberStretch_updateEnergy, METH_VARARGS, NULL},
    {sipNm_BALL_updateForces, meth_AmberStretch_updateForces, METH_VARARGS, NULL}
};


sipTypeDef sipType_BALL_AmberStretch = {
    0,
    0,
    "BALL.AmberStretch",
    0,
    {0, 0, 1},
    supers_AmberStretch,
    0,
    3, methods_AmberStretch,
    0, 0,
    0,
    init_AmberStretch,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_AmberStretch,
    cast_AmberStretch,
    release_AmberStretch,
    forceConvertTo_AmberStretch,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
