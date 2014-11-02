/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLCharmmTorsion.h"

#include "sipBALLForceFieldComponent.h"
#include "sipBALLTooManyErrors.h"
#include "sipBALLForceField.h"
#include "sipBALLCharmmTorsion.h"
#include "sipBALLString.h"


sipCharmmTorsion::sipCharmmTorsion(): CharmmTorsion(), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,4);
}

sipCharmmTorsion::sipCharmmTorsion(ForceField& a0): CharmmTorsion(a0), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,4);
}

sipCharmmTorsion::sipCharmmTorsion(const CharmmTorsion& a0): CharmmTorsion(a0), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,4);
}

sipCharmmTorsion::~sipCharmmTorsion()
{
    sipCommonDtor(sipPySelf);
}

bool sipCharmmTorsion::setup() throw(TooManyErrors)
{
    extern bool sipVH_BALL_4(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipNm_BALL_setup);

    if (!meth)
        return CharmmTorsion::setup();

    return sipVH_BALL_4(sipGILState,meth);
}

double sipCharmmTorsion::updateEnergy()
{
    extern double sipVH_BALL_30(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,NULL,sipNm_BALL_updateEnergy);

    if (!meth)
        return CharmmTorsion::updateEnergy();

    return sipVH_BALL_30(sipGILState,meth);
}

void sipCharmmTorsion::updateForces()
{
    extern void sipVH_BALL_0(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[2],sipPySelf,NULL,sipNm_BALL_updateForces);

    if (!meth)
    {
        CharmmTorsion::updateForces();
        return;
    }

    sipVH_BALL_0(sipGILState,meth);
}

double sipCharmmTorsion::getEnergy() const
{
    extern double sipVH_BALL_30(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<sipMethodCache *>(&sipPyMethods[3]),sipPySelf,NULL,sipNm_BALL_getEnergy);

    if (!meth)
        return ForceFieldComponent::getEnergy();

    return sipVH_BALL_30(sipGILState,meth);
}


extern "C" {static PyObject *meth_CharmmTorsion_setup(PyObject *, PyObject *);}
static PyObject *meth_CharmmTorsion_setup(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        CharmmTorsion *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_CharmmTorsion,&sipCpp))
        {
            bool sipRes;

            try
            {
            sipRes = (sipSelfWasArg ? sipCpp->CharmmTorsion::setup() : sipCpp->setup());
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_CharmmTorsion,sipNm_BALL_setup);

    return NULL;
}


extern "C" {static PyObject *meth_CharmmTorsion_updateEnergy(PyObject *, PyObject *);}
static PyObject *meth_CharmmTorsion_updateEnergy(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        CharmmTorsion *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_CharmmTorsion,&sipCpp))
        {
            double sipRes;

            try
            {
            sipRes = (sipSelfWasArg ? sipCpp->CharmmTorsion::updateEnergy() : sipCpp->updateEnergy());
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_CharmmTorsion,sipNm_BALL_updateEnergy);

    return NULL;
}


extern "C" {static PyObject *meth_CharmmTorsion_updateForces(PyObject *, PyObject *);}
static PyObject *meth_CharmmTorsion_updateForces(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        CharmmTorsion *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_CharmmTorsion,&sipCpp))
        {
            try
            {
            (sipSelfWasArg ? sipCpp->CharmmTorsion::updateForces() : sipCpp->updateForces());
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_CharmmTorsion,sipNm_BALL_updateForces);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_CharmmTorsion(void *, sipWrapperType *);}
static void *cast_CharmmTorsion(void *ptr,sipWrapperType *targetClass)
{
    void *res;

    if (targetClass == sipClass_CharmmTorsion)
        return ptr;

    if ((res = sipCast_ForceFieldComponent((ForceFieldComponent *)(CharmmTorsion *)ptr,targetClass)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_CharmmTorsion(void *, int);}
static void release_CharmmTorsion(void *ptr,int state)
{
    if (state & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipCharmmTorsion *>(ptr);
    else
        delete reinterpret_cast<CharmmTorsion *>(ptr);
}


extern "C" {static void dealloc_CharmmTorsion(sipWrapper *);}
static void dealloc_CharmmTorsion(sipWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipCharmmTorsion *>(sipSelf->u.cppPtr)->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_CharmmTorsion(sipSelf->u.cppPtr,sipSelf->flags);
    }
}


extern "C" {static void *init_CharmmTorsion(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_CharmmTorsion(sipWrapper *sipSelf,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    sipCharmmTorsion *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            try
            {
            sipCpp = new sipCharmmTorsion();
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
            sipCpp = new sipCharmmTorsion(*a0);
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
        const CharmmTorsion * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_CharmmTorsion,&a0))
        {
            try
            {
            sipCpp = new sipCharmmTorsion(*a0);
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


extern "C" {static void *forceConvertTo_CharmmTorsion(PyObject *, int *);}
static void *forceConvertTo_CharmmTorsion(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_CharmmTorsion))
        return sipConvertToCpp(valobj,sipClass_CharmmTorsion,iserrp);

    sipBadClass(sipNm_BALL_CharmmTorsion);

    *iserrp = 1;

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedClassDef supers_CharmmTorsion[] = {{121, 255, 1}};


static PyMethodDef methods_CharmmTorsion[] = {
    {sipNm_BALL_setup, meth_CharmmTorsion_setup, METH_VARARGS, NULL},
    {sipNm_BALL_updateEnergy, meth_CharmmTorsion_updateEnergy, METH_VARARGS, NULL},
    {sipNm_BALL_updateForces, meth_CharmmTorsion_updateForces, METH_VARARGS, NULL}
};


sipTypeDef sipType_BALL_CharmmTorsion = {
    0,
    0,
    "BALL.CharmmTorsion",
    0,
    {0, 0, 1},
    supers_CharmmTorsion,
    0,
    3, methods_CharmmTorsion,
    0, 0,
    0,
    init_CharmmTorsion,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_CharmmTorsion,
    cast_CharmmTorsion,
    release_CharmmTorsion,
    forceConvertTo_CharmmTorsion,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
