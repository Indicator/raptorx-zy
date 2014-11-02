/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLCharmmImproperTorsion.h"

#include "sipBALLForceFieldComponent.h"
#include "sipBALLTooManyErrors.h"
#include "sipBALLForceField.h"
#include "sipBALLCharmmImproperTorsion.h"
#include "sipBALLString.h"


sipCharmmImproperTorsion::sipCharmmImproperTorsion(): CharmmImproperTorsion(), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,4);
}

sipCharmmImproperTorsion::sipCharmmImproperTorsion(ForceField& a0): CharmmImproperTorsion(a0), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,4);
}

sipCharmmImproperTorsion::sipCharmmImproperTorsion(const CharmmImproperTorsion& a0): CharmmImproperTorsion(a0), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,4);
}

sipCharmmImproperTorsion::~sipCharmmImproperTorsion()
{
    sipCommonDtor(sipPySelf);
}

bool sipCharmmImproperTorsion::setup() throw(TooManyErrors)
{
    extern bool sipVH_BALL_4(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipNm_BALL_setup);

    if (!meth)
        return CharmmImproperTorsion::setup();

    return sipVH_BALL_4(sipGILState,meth);
}

double sipCharmmImproperTorsion::updateEnergy()
{
    extern double sipVH_BALL_30(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,NULL,sipNm_BALL_updateEnergy);

    if (!meth)
        return CharmmImproperTorsion::updateEnergy();

    return sipVH_BALL_30(sipGILState,meth);
}

void sipCharmmImproperTorsion::updateForces()
{
    extern void sipVH_BALL_0(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[2],sipPySelf,NULL,sipNm_BALL_updateForces);

    if (!meth)
    {
        CharmmImproperTorsion::updateForces();
        return;
    }

    sipVH_BALL_0(sipGILState,meth);
}

double sipCharmmImproperTorsion::getEnergy() const
{
    extern double sipVH_BALL_30(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<sipMethodCache *>(&sipPyMethods[3]),sipPySelf,NULL,sipNm_BALL_getEnergy);

    if (!meth)
        return ForceFieldComponent::getEnergy();

    return sipVH_BALL_30(sipGILState,meth);
}


extern "C" {static PyObject *meth_CharmmImproperTorsion_setup(PyObject *, PyObject *);}
static PyObject *meth_CharmmImproperTorsion_setup(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        CharmmImproperTorsion *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_CharmmImproperTorsion,&sipCpp))
        {
            bool sipRes;

            try
            {
            sipRes = (sipSelfWasArg ? sipCpp->CharmmImproperTorsion::setup() : sipCpp->setup());
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_CharmmImproperTorsion,sipNm_BALL_setup);

    return NULL;
}


extern "C" {static PyObject *meth_CharmmImproperTorsion_updateEnergy(PyObject *, PyObject *);}
static PyObject *meth_CharmmImproperTorsion_updateEnergy(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        CharmmImproperTorsion *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_CharmmImproperTorsion,&sipCpp))
        {
            double sipRes;

            try
            {
            sipRes = (sipSelfWasArg ? sipCpp->CharmmImproperTorsion::updateEnergy() : sipCpp->updateEnergy());
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_CharmmImproperTorsion,sipNm_BALL_updateEnergy);

    return NULL;
}


extern "C" {static PyObject *meth_CharmmImproperTorsion_updateForces(PyObject *, PyObject *);}
static PyObject *meth_CharmmImproperTorsion_updateForces(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        CharmmImproperTorsion *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_CharmmImproperTorsion,&sipCpp))
        {
            try
            {
            (sipSelfWasArg ? sipCpp->CharmmImproperTorsion::updateForces() : sipCpp->updateForces());
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_CharmmImproperTorsion,sipNm_BALL_updateForces);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_CharmmImproperTorsion(void *, sipWrapperType *);}
static void *cast_CharmmImproperTorsion(void *ptr,sipWrapperType *targetClass)
{
    void *res;

    if (targetClass == sipClass_CharmmImproperTorsion)
        return ptr;

    if ((res = sipCast_ForceFieldComponent((ForceFieldComponent *)(CharmmImproperTorsion *)ptr,targetClass)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_CharmmImproperTorsion(void *, int);}
static void release_CharmmImproperTorsion(void *ptr,int state)
{
    if (state & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipCharmmImproperTorsion *>(ptr);
    else
        delete reinterpret_cast<CharmmImproperTorsion *>(ptr);
}


extern "C" {static void dealloc_CharmmImproperTorsion(sipWrapper *);}
static void dealloc_CharmmImproperTorsion(sipWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipCharmmImproperTorsion *>(sipSelf->u.cppPtr)->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_CharmmImproperTorsion(sipSelf->u.cppPtr,sipSelf->flags);
    }
}


extern "C" {static void *init_CharmmImproperTorsion(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_CharmmImproperTorsion(sipWrapper *sipSelf,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    sipCharmmImproperTorsion *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            try
            {
            sipCpp = new sipCharmmImproperTorsion();
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
            sipCpp = new sipCharmmImproperTorsion(*a0);
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
        const CharmmImproperTorsion * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_CharmmImproperTorsion,&a0))
        {
            try
            {
            sipCpp = new sipCharmmImproperTorsion(*a0);
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


extern "C" {static void *forceConvertTo_CharmmImproperTorsion(PyObject *, int *);}
static void *forceConvertTo_CharmmImproperTorsion(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_CharmmImproperTorsion))
        return sipConvertToCpp(valobj,sipClass_CharmmImproperTorsion,iserrp);

    sipBadClass(sipNm_BALL_CharmmImproperTorsion);

    *iserrp = 1;

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedClassDef supers_CharmmImproperTorsion[] = {{121, 255, 1}};


static PyMethodDef methods_CharmmImproperTorsion[] = {
    {sipNm_BALL_setup, meth_CharmmImproperTorsion_setup, METH_VARARGS, NULL},
    {sipNm_BALL_updateEnergy, meth_CharmmImproperTorsion_updateEnergy, METH_VARARGS, NULL},
    {sipNm_BALL_updateForces, meth_CharmmImproperTorsion_updateForces, METH_VARARGS, NULL}
};


sipTypeDef sipType_BALL_CharmmImproperTorsion = {
    0,
    0,
    "BALL.CharmmImproperTorsion",
    0,
    {0, 0, 1},
    supers_CharmmImproperTorsion,
    0,
    3, methods_CharmmImproperTorsion,
    0, 0,
    0,
    init_CharmmImproperTorsion,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_CharmmImproperTorsion,
    cast_CharmmImproperTorsion,
    release_CharmmImproperTorsion,
    forceConvertTo_CharmmImproperTorsion,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
