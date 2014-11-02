/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLAmberTorsion.h"

#include "sipBALLForceFieldComponent.h"
#include "sipBALLTooManyErrors.h"
#include "sipBALLForceField.h"
#include "sipBALLAmberTorsion.h"
#include "sipBALLString.h"


sipAmberTorsion::sipAmberTorsion(): AmberTorsion(), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,4);
}

sipAmberTorsion::sipAmberTorsion(ForceField& a0): AmberTorsion(a0), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,4);
}

sipAmberTorsion::sipAmberTorsion(const AmberTorsion& a0): AmberTorsion(a0), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,4);
}

sipAmberTorsion::~sipAmberTorsion()
{
    sipCommonDtor(sipPySelf);
}

bool sipAmberTorsion::setup() throw(TooManyErrors)
{
    extern bool sipVH_BALL_4(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipNm_BALL_setup);

    if (!meth)
        return AmberTorsion::setup();

    return sipVH_BALL_4(sipGILState,meth);
}

double sipAmberTorsion::updateEnergy()
{
    extern double sipVH_BALL_30(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,NULL,sipNm_BALL_updateEnergy);

    if (!meth)
        return AmberTorsion::updateEnergy();

    return sipVH_BALL_30(sipGILState,meth);
}

void sipAmberTorsion::updateForces()
{
    extern void sipVH_BALL_0(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[2],sipPySelf,NULL,sipNm_BALL_updateForces);

    if (!meth)
    {
        AmberTorsion::updateForces();
        return;
    }

    sipVH_BALL_0(sipGILState,meth);
}

double sipAmberTorsion::getEnergy() const
{
    extern double sipVH_BALL_30(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<sipMethodCache *>(&sipPyMethods[3]),sipPySelf,NULL,sipNm_BALL_getEnergy);

    if (!meth)
        return ForceFieldComponent::getEnergy();

    return sipVH_BALL_30(sipGILState,meth);
}


extern "C" {static PyObject *meth_AmberTorsion_setup(PyObject *, PyObject *);}
static PyObject *meth_AmberTorsion_setup(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        AmberTorsion *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_AmberTorsion,&sipCpp))
        {
            bool sipRes;

            try
            {
            sipRes = (sipSelfWasArg ? sipCpp->AmberTorsion::setup() : sipCpp->setup());
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_AmberTorsion,sipNm_BALL_setup);

    return NULL;
}


extern "C" {static PyObject *meth_AmberTorsion_updateEnergy(PyObject *, PyObject *);}
static PyObject *meth_AmberTorsion_updateEnergy(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        AmberTorsion *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_AmberTorsion,&sipCpp))
        {
            double sipRes;

            try
            {
            sipRes = (sipSelfWasArg ? sipCpp->AmberTorsion::updateEnergy() : sipCpp->updateEnergy());
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_AmberTorsion,sipNm_BALL_updateEnergy);

    return NULL;
}


extern "C" {static PyObject *meth_AmberTorsion_updateForces(PyObject *, PyObject *);}
static PyObject *meth_AmberTorsion_updateForces(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        AmberTorsion *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_AmberTorsion,&sipCpp))
        {
            try
            {
            (sipSelfWasArg ? sipCpp->AmberTorsion::updateForces() : sipCpp->updateForces());
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_AmberTorsion,sipNm_BALL_updateForces);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_AmberTorsion(void *, sipWrapperType *);}
static void *cast_AmberTorsion(void *ptr,sipWrapperType *targetClass)
{
    void *res;

    if (targetClass == sipClass_AmberTorsion)
        return ptr;

    if ((res = sipCast_ForceFieldComponent((ForceFieldComponent *)(AmberTorsion *)ptr,targetClass)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_AmberTorsion(void *, int);}
static void release_AmberTorsion(void *ptr,int state)
{
    if (state & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipAmberTorsion *>(ptr);
    else
        delete reinterpret_cast<AmberTorsion *>(ptr);
}


extern "C" {static void dealloc_AmberTorsion(sipWrapper *);}
static void dealloc_AmberTorsion(sipWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipAmberTorsion *>(sipSelf->u.cppPtr)->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_AmberTorsion(sipSelf->u.cppPtr,sipSelf->flags);
    }
}


extern "C" {static void *init_AmberTorsion(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_AmberTorsion(sipWrapper *sipSelf,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    sipAmberTorsion *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            try
            {
            sipCpp = new sipAmberTorsion();
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
            sipCpp = new sipAmberTorsion(*a0);
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
        const AmberTorsion * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_AmberTorsion,&a0))
        {
            try
            {
            sipCpp = new sipAmberTorsion(*a0);
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


extern "C" {static void *forceConvertTo_AmberTorsion(PyObject *, int *);}
static void *forceConvertTo_AmberTorsion(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_AmberTorsion))
        return sipConvertToCpp(valobj,sipClass_AmberTorsion,iserrp);

    sipBadClass(sipNm_BALL_AmberTorsion);

    *iserrp = 1;

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedClassDef supers_AmberTorsion[] = {{121, 255, 1}};


static PyMethodDef methods_AmberTorsion[] = {
    {sipNm_BALL_setup, meth_AmberTorsion_setup, METH_VARARGS, NULL},
    {sipNm_BALL_updateEnergy, meth_AmberTorsion_updateEnergy, METH_VARARGS, NULL},
    {sipNm_BALL_updateForces, meth_AmberTorsion_updateForces, METH_VARARGS, NULL}
};


sipTypeDef sipType_BALL_AmberTorsion = {
    0,
    0,
    "BALL.AmberTorsion",
    0,
    {0, 0, 1},
    supers_AmberTorsion,
    0,
    3, methods_AmberTorsion,
    0, 0,
    0,
    init_AmberTorsion,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_AmberTorsion,
    cast_AmberTorsion,
    release_AmberTorsion,
    forceConvertTo_AmberTorsion,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
