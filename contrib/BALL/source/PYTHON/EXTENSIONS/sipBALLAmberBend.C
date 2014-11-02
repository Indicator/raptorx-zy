/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLAmberBend.h"

#include "sipBALLForceFieldComponent.h"
#include "sipBALLTooManyErrors.h"
#include "sipBALLForceField.h"
#include "sipBALLAmberBend.h"
#include "sipBALLString.h"


sipAmberBend::sipAmberBend(): AmberBend(), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,4);
}

sipAmberBend::sipAmberBend(ForceField& a0): AmberBend(a0), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,4);
}

sipAmberBend::sipAmberBend(const AmberBend& a0): AmberBend(a0), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,4);
}

sipAmberBend::~sipAmberBend()
{
    sipCommonDtor(sipPySelf);
}

bool sipAmberBend::setup() throw(TooManyErrors)
{
    extern bool sipVH_BALL_4(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipNm_BALL_setup);

    if (!meth)
        return AmberBend::setup();

    return sipVH_BALL_4(sipGILState,meth);
}

double sipAmberBend::updateEnergy()
{
    extern double sipVH_BALL_30(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,NULL,sipNm_BALL_updateEnergy);

    if (!meth)
        return AmberBend::updateEnergy();

    return sipVH_BALL_30(sipGILState,meth);
}

void sipAmberBend::updateForces()
{
    extern void sipVH_BALL_0(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[2],sipPySelf,NULL,sipNm_BALL_updateForces);

    if (!meth)
    {
        AmberBend::updateForces();
        return;
    }

    sipVH_BALL_0(sipGILState,meth);
}

double sipAmberBend::getEnergy() const
{
    extern double sipVH_BALL_30(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<sipMethodCache *>(&sipPyMethods[3]),sipPySelf,NULL,sipNm_BALL_getEnergy);

    if (!meth)
        return ForceFieldComponent::getEnergy();

    return sipVH_BALL_30(sipGILState,meth);
}


extern "C" {static PyObject *meth_AmberBend_setup(PyObject *, PyObject *);}
static PyObject *meth_AmberBend_setup(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        AmberBend *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_AmberBend,&sipCpp))
        {
            bool sipRes;

            try
            {
            sipRes = (sipSelfWasArg ? sipCpp->AmberBend::setup() : sipCpp->setup());
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_AmberBend,sipNm_BALL_setup);

    return NULL;
}


extern "C" {static PyObject *meth_AmberBend_updateEnergy(PyObject *, PyObject *);}
static PyObject *meth_AmberBend_updateEnergy(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        AmberBend *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_AmberBend,&sipCpp))
        {
            double sipRes;

            try
            {
            sipRes = (sipSelfWasArg ? sipCpp->AmberBend::updateEnergy() : sipCpp->updateEnergy());
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_AmberBend,sipNm_BALL_updateEnergy);

    return NULL;
}


extern "C" {static PyObject *meth_AmberBend_updateForces(PyObject *, PyObject *);}
static PyObject *meth_AmberBend_updateForces(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        AmberBend *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_AmberBend,&sipCpp))
        {
            try
            {
            (sipSelfWasArg ? sipCpp->AmberBend::updateForces() : sipCpp->updateForces());
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_AmberBend,sipNm_BALL_updateForces);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_AmberBend(void *, sipWrapperType *);}
static void *cast_AmberBend(void *ptr,sipWrapperType *targetClass)
{
    void *res;

    if (targetClass == sipClass_AmberBend)
        return ptr;

    if ((res = sipCast_ForceFieldComponent((ForceFieldComponent *)(AmberBend *)ptr,targetClass)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_AmberBend(void *, int);}
static void release_AmberBend(void *ptr,int state)
{
    if (state & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipAmberBend *>(ptr);
    else
        delete reinterpret_cast<AmberBend *>(ptr);
}


extern "C" {static void dealloc_AmberBend(sipWrapper *);}
static void dealloc_AmberBend(sipWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipAmberBend *>(sipSelf->u.cppPtr)->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_AmberBend(sipSelf->u.cppPtr,sipSelf->flags);
    }
}


extern "C" {static void *init_AmberBend(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_AmberBend(sipWrapper *sipSelf,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    sipAmberBend *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            try
            {
            sipCpp = new sipAmberBend();
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
            sipCpp = new sipAmberBend(*a0);
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
        const AmberBend * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_AmberBend,&a0))
        {
            try
            {
            sipCpp = new sipAmberBend(*a0);
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


extern "C" {static void *forceConvertTo_AmberBend(PyObject *, int *);}
static void *forceConvertTo_AmberBend(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_AmberBend))
        return sipConvertToCpp(valobj,sipClass_AmberBend,iserrp);

    sipBadClass(sipNm_BALL_AmberBend);

    *iserrp = 1;

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedClassDef supers_AmberBend[] = {{121, 255, 1}};


static PyMethodDef methods_AmberBend[] = {
    {sipNm_BALL_setup, meth_AmberBend_setup, METH_VARARGS, NULL},
    {sipNm_BALL_updateEnergy, meth_AmberBend_updateEnergy, METH_VARARGS, NULL},
    {sipNm_BALL_updateForces, meth_AmberBend_updateForces, METH_VARARGS, NULL}
};


sipTypeDef sipType_BALL_AmberBend = {
    0,
    0,
    "BALL.AmberBend",
    0,
    {0, 0, 1},
    supers_AmberBend,
    0,
    3, methods_AmberBend,
    0, 0,
    0,
    init_AmberBend,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_AmberBend,
    cast_AmberBend,
    release_AmberBend,
    forceConvertTo_AmberBend,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
