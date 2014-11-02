/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLCharmmStretch.h"

#include "sipBALLForceFieldComponent.h"
#include "sipBALLTooManyErrors.h"
#include "sipBALLForceField.h"
#include "sipBALLCharmmStretch.h"
#include "sipBALLString.h"


sipCharmmStretch::sipCharmmStretch(): CharmmStretch(), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,4);
}

sipCharmmStretch::sipCharmmStretch(ForceField& a0): CharmmStretch(a0), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,4);
}

sipCharmmStretch::sipCharmmStretch(const CharmmStretch& a0): CharmmStretch(a0), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,4);
}

sipCharmmStretch::~sipCharmmStretch()
{
    sipCommonDtor(sipPySelf);
}

bool sipCharmmStretch::setup() throw(TooManyErrors)
{
    extern bool sipVH_BALL_4(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipNm_BALL_setup);

    if (!meth)
        return CharmmStretch::setup();

    return sipVH_BALL_4(sipGILState,meth);
}

double sipCharmmStretch::updateEnergy()
{
    extern double sipVH_BALL_30(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,NULL,sipNm_BALL_updateEnergy);

    if (!meth)
        return CharmmStretch::updateEnergy();

    return sipVH_BALL_30(sipGILState,meth);
}

void sipCharmmStretch::updateForces()
{
    extern void sipVH_BALL_0(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[2],sipPySelf,NULL,sipNm_BALL_updateForces);

    if (!meth)
    {
        CharmmStretch::updateForces();
        return;
    }

    sipVH_BALL_0(sipGILState,meth);
}

double sipCharmmStretch::getEnergy() const
{
    extern double sipVH_BALL_30(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<sipMethodCache *>(&sipPyMethods[3]),sipPySelf,NULL,sipNm_BALL_getEnergy);

    if (!meth)
        return ForceFieldComponent::getEnergy();

    return sipVH_BALL_30(sipGILState,meth);
}


extern "C" {static PyObject *meth_CharmmStretch_setup(PyObject *, PyObject *);}
static PyObject *meth_CharmmStretch_setup(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        CharmmStretch *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_CharmmStretch,&sipCpp))
        {
            bool sipRes;

            try
            {
            sipRes = (sipSelfWasArg ? sipCpp->CharmmStretch::setup() : sipCpp->setup());
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_CharmmStretch,sipNm_BALL_setup);

    return NULL;
}


extern "C" {static PyObject *meth_CharmmStretch_updateEnergy(PyObject *, PyObject *);}
static PyObject *meth_CharmmStretch_updateEnergy(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        CharmmStretch *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_CharmmStretch,&sipCpp))
        {
            double sipRes;

            try
            {
            sipRes = (sipSelfWasArg ? sipCpp->CharmmStretch::updateEnergy() : sipCpp->updateEnergy());
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_CharmmStretch,sipNm_BALL_updateEnergy);

    return NULL;
}


extern "C" {static PyObject *meth_CharmmStretch_updateForces(PyObject *, PyObject *);}
static PyObject *meth_CharmmStretch_updateForces(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        CharmmStretch *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_CharmmStretch,&sipCpp))
        {
            try
            {
            (sipSelfWasArg ? sipCpp->CharmmStretch::updateForces() : sipCpp->updateForces());
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_CharmmStretch,sipNm_BALL_updateForces);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_CharmmStretch(void *, sipWrapperType *);}
static void *cast_CharmmStretch(void *ptr,sipWrapperType *targetClass)
{
    void *res;

    if (targetClass == sipClass_CharmmStretch)
        return ptr;

    if ((res = sipCast_ForceFieldComponent((ForceFieldComponent *)(CharmmStretch *)ptr,targetClass)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_CharmmStretch(void *, int);}
static void release_CharmmStretch(void *ptr,int state)
{
    if (state & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipCharmmStretch *>(ptr);
    else
        delete reinterpret_cast<CharmmStretch *>(ptr);
}


extern "C" {static void dealloc_CharmmStretch(sipWrapper *);}
static void dealloc_CharmmStretch(sipWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipCharmmStretch *>(sipSelf->u.cppPtr)->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_CharmmStretch(sipSelf->u.cppPtr,sipSelf->flags);
    }
}


extern "C" {static void *init_CharmmStretch(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_CharmmStretch(sipWrapper *sipSelf,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    sipCharmmStretch *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            try
            {
            sipCpp = new sipCharmmStretch();
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
            sipCpp = new sipCharmmStretch(*a0);
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
        const CharmmStretch * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_CharmmStretch,&a0))
        {
            try
            {
            sipCpp = new sipCharmmStretch(*a0);
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


extern "C" {static void *forceConvertTo_CharmmStretch(PyObject *, int *);}
static void *forceConvertTo_CharmmStretch(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_CharmmStretch))
        return sipConvertToCpp(valobj,sipClass_CharmmStretch,iserrp);

    sipBadClass(sipNm_BALL_CharmmStretch);

    *iserrp = 1;

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedClassDef supers_CharmmStretch[] = {{121, 255, 1}};


static PyMethodDef methods_CharmmStretch[] = {
    {sipNm_BALL_setup, meth_CharmmStretch_setup, METH_VARARGS, NULL},
    {sipNm_BALL_updateEnergy, meth_CharmmStretch_updateEnergy, METH_VARARGS, NULL},
    {sipNm_BALL_updateForces, meth_CharmmStretch_updateForces, METH_VARARGS, NULL}
};


sipTypeDef sipType_BALL_CharmmStretch = {
    0,
    0,
    "BALL.CharmmStretch",
    0,
    {0, 0, 1},
    supers_CharmmStretch,
    0,
    3, methods_CharmmStretch,
    0, 0,
    0,
    init_CharmmStretch,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_CharmmStretch,
    cast_CharmmStretch,
    release_CharmmStretch,
    forceConvertTo_CharmmStretch,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
