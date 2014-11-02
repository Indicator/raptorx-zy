/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLCharmmBend.h"

#include "sipBALLForceFieldComponent.h"
#include "sipBALLTooManyErrors.h"
#include "sipBALLForceField.h"
#include "sipBALLCharmmBend.h"
#include "sipBALLString.h"


sipCharmmBend::sipCharmmBend(): CharmmBend(), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,4);
}

sipCharmmBend::sipCharmmBend(ForceField& a0): CharmmBend(a0), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,4);
}

sipCharmmBend::sipCharmmBend(const CharmmBend& a0): CharmmBend(a0), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,4);
}

sipCharmmBend::~sipCharmmBend()
{
    sipCommonDtor(sipPySelf);
}

bool sipCharmmBend::setup() throw(TooManyErrors)
{
    extern bool sipVH_BALL_4(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipNm_BALL_setup);

    if (!meth)
        return CharmmBend::setup();

    return sipVH_BALL_4(sipGILState,meth);
}

double sipCharmmBend::updateEnergy()
{
    extern double sipVH_BALL_30(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,NULL,sipNm_BALL_updateEnergy);

    if (!meth)
        return CharmmBend::updateEnergy();

    return sipVH_BALL_30(sipGILState,meth);
}

void sipCharmmBend::updateForces()
{
    extern void sipVH_BALL_0(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[2],sipPySelf,NULL,sipNm_BALL_updateForces);

    if (!meth)
    {
        CharmmBend::updateForces();
        return;
    }

    sipVH_BALL_0(sipGILState,meth);
}

double sipCharmmBend::getEnergy() const
{
    extern double sipVH_BALL_30(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<sipMethodCache *>(&sipPyMethods[3]),sipPySelf,NULL,sipNm_BALL_getEnergy);

    if (!meth)
        return ForceFieldComponent::getEnergy();

    return sipVH_BALL_30(sipGILState,meth);
}


extern "C" {static PyObject *meth_CharmmBend_setup(PyObject *, PyObject *);}
static PyObject *meth_CharmmBend_setup(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        CharmmBend *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_CharmmBend,&sipCpp))
        {
            bool sipRes;

            try
            {
            sipRes = (sipSelfWasArg ? sipCpp->CharmmBend::setup() : sipCpp->setup());
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_CharmmBend,sipNm_BALL_setup);

    return NULL;
}


extern "C" {static PyObject *meth_CharmmBend_updateEnergy(PyObject *, PyObject *);}
static PyObject *meth_CharmmBend_updateEnergy(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        CharmmBend *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_CharmmBend,&sipCpp))
        {
            double sipRes;

            try
            {
            sipRes = (sipSelfWasArg ? sipCpp->CharmmBend::updateEnergy() : sipCpp->updateEnergy());
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_CharmmBend,sipNm_BALL_updateEnergy);

    return NULL;
}


extern "C" {static PyObject *meth_CharmmBend_updateForces(PyObject *, PyObject *);}
static PyObject *meth_CharmmBend_updateForces(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        CharmmBend *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_CharmmBend,&sipCpp))
        {
            try
            {
            (sipSelfWasArg ? sipCpp->CharmmBend::updateForces() : sipCpp->updateForces());
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_CharmmBend,sipNm_BALL_updateForces);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_CharmmBend(void *, sipWrapperType *);}
static void *cast_CharmmBend(void *ptr,sipWrapperType *targetClass)
{
    void *res;

    if (targetClass == sipClass_CharmmBend)
        return ptr;

    if ((res = sipCast_ForceFieldComponent((ForceFieldComponent *)(CharmmBend *)ptr,targetClass)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_CharmmBend(void *, int);}
static void release_CharmmBend(void *ptr,int state)
{
    if (state & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipCharmmBend *>(ptr);
    else
        delete reinterpret_cast<CharmmBend *>(ptr);
}


extern "C" {static void dealloc_CharmmBend(sipWrapper *);}
static void dealloc_CharmmBend(sipWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipCharmmBend *>(sipSelf->u.cppPtr)->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_CharmmBend(sipSelf->u.cppPtr,sipSelf->flags);
    }
}


extern "C" {static void *init_CharmmBend(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_CharmmBend(sipWrapper *sipSelf,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    sipCharmmBend *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            try
            {
            sipCpp = new sipCharmmBend();
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
            sipCpp = new sipCharmmBend(*a0);
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
        const CharmmBend * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_CharmmBend,&a0))
        {
            try
            {
            sipCpp = new sipCharmmBend(*a0);
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


extern "C" {static void *forceConvertTo_CharmmBend(PyObject *, int *);}
static void *forceConvertTo_CharmmBend(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_CharmmBend))
        return sipConvertToCpp(valobj,sipClass_CharmmBend,iserrp);

    sipBadClass(sipNm_BALL_CharmmBend);

    *iserrp = 1;

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedClassDef supers_CharmmBend[] = {{121, 255, 1}};


static PyMethodDef methods_CharmmBend[] = {
    {sipNm_BALL_setup, meth_CharmmBend_setup, METH_VARARGS, NULL},
    {sipNm_BALL_updateEnergy, meth_CharmmBend_updateEnergy, METH_VARARGS, NULL},
    {sipNm_BALL_updateForces, meth_CharmmBend_updateForces, METH_VARARGS, NULL}
};


sipTypeDef sipType_BALL_CharmmBend = {
    0,
    0,
    "BALL.CharmmBend",
    0,
    {0, 0, 1},
    supers_CharmmBend,
    0,
    3, methods_CharmmBend,
    0, 0,
    0,
    init_CharmmBend,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_CharmmBend,
    cast_CharmmBend,
    release_CharmmBend,
    forceConvertTo_CharmmBend,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
