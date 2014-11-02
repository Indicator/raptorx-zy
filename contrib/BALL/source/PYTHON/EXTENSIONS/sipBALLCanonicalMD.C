/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLCanonicalMD.h"

#include "sipBALLMolecularDynamics.h"
#include "sipBALLForceField.h"
#include "sipBALLSnapShotManager.h"
#include "sipBALLOptions.h"
#include "sipBALLCanonicalMD.h"


sipCanonicalMD::sipCanonicalMD(): CanonicalMD(), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,7);
}

sipCanonicalMD::sipCanonicalMD(ForceField& a0): CanonicalMD(a0), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,7);
}

sipCanonicalMD::sipCanonicalMD(ForceField& a0,SnapShotManager *a1): CanonicalMD(a0,a1), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,7);
}

sipCanonicalMD::sipCanonicalMD(ForceField& a0,SnapShotManager *a1,const Options& a2): CanonicalMD(a0,a1,a2), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,7);
}

sipCanonicalMD::sipCanonicalMD(const CanonicalMD& a0): CanonicalMD(a0), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,7);
}

sipCanonicalMD::~sipCanonicalMD() throw()
{
    sipCommonDtor(sipPySelf);
}

bool sipCanonicalMD::setup(ForceField& a0,SnapShotManager *a1) throw()
{
    extern bool sipVH_BALL_37(sip_gilstate_t,PyObject *,ForceField&,SnapShotManager *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipNm_BALL_setup);

    if (!meth)
        return CanonicalMD::setup(a0,a1);

    return sipVH_BALL_37(sipGILState,meth,a0,a1);
}

bool sipCanonicalMD::setup(ForceField& a0,SnapShotManager *a1,const Options& a2) throw()
{
    extern bool sipVH_BALL_36(sip_gilstate_t,PyObject *,ForceField&,SnapShotManager *,const Options&);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,NULL,sipNm_BALL_setup);

    if (!meth)
        return CanonicalMD::setup(a0,a1,a2);

    return sipVH_BALL_36(sipGILState,meth,a0,a1,a2);
}

bool sipCanonicalMD::specificSetup() throw()
{
    extern bool sipVH_BALL_4(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[2],sipPySelf,NULL,sipNm_BALL_specificSetup);

    if (!meth)
        return CanonicalMD::specificSetup();

    return sipVH_BALL_4(sipGILState,meth);
}

void sipCanonicalMD::setTimeStep(double a0) throw()
{
    extern void sipVH_BALL_35(sip_gilstate_t,PyObject *,double);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[3],sipPySelf,NULL,sipNm_BALL_setTimeStep);

    if (!meth)
    {
        CanonicalMD::setTimeStep(a0);
        return;
    }

    sipVH_BALL_35(sipGILState,meth,a0);
}

bool sipCanonicalMD::simulate(bool a0) throw()
{
    extern bool sipVH_BALL_34(sip_gilstate_t,PyObject *,bool);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[4],sipPySelf,NULL,sipNm_BALL_simulate);

    if (!meth)
        return CanonicalMD::simulate(a0);

    return sipVH_BALL_34(sipGILState,meth,a0);
}

bool sipCanonicalMD::simulateIterations(int a0,bool a1) throw()
{
    extern bool sipVH_BALL_29(sip_gilstate_t,PyObject *,int,bool);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[5],sipPySelf,NULL,sipNm_BALL_simulateIterations);

    if (!meth)
        return CanonicalMD::simulateIterations(a0,a1);

    return sipVH_BALL_29(sipGILState,meth,a0,a1);
}

bool sipCanonicalMD::simulateTime(double a0,bool a1) throw()
{
    extern bool sipVH_BALL_33(sip_gilstate_t,PyObject *,double,bool);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[6],sipPySelf,NULL,sipNm_BALL_simulateTime);

    if (!meth)
        return CanonicalMD::simulateTime(a0,a1);

    return sipVH_BALL_33(sipGILState,meth,a0,a1);
}


extern "C" {static PyObject *meth_CanonicalMD_setBathRelaxationTime(PyObject *, PyObject *);}
static PyObject *meth_CanonicalMD_setBathRelaxationTime(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        double a0;
        CanonicalMD *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bd",&sipSelf,sipClass_CanonicalMD,&sipCpp,&a0))
        {
            try
            {
            sipCpp->setBathRelaxationTime(a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_CanonicalMD,sipNm_BALL_setBathRelaxationTime);

    return NULL;
}


extern "C" {static PyObject *meth_CanonicalMD_getBathRelaxationTime(PyObject *, PyObject *);}
static PyObject *meth_CanonicalMD_getBathRelaxationTime(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        CanonicalMD *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_CanonicalMD,&sipCpp))
        {
            double sipRes;

            try
            {
            sipRes = sipCpp->getBathRelaxationTime();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_CanonicalMD,sipNm_BALL_getBathRelaxationTime);

    return NULL;
}


extern "C" {static PyObject *meth_CanonicalMD_setup(PyObject *, PyObject *);}
static PyObject *meth_CanonicalMD_setup(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        ForceField * a0;
        SnapShotManager * a1;
        CanonicalMD *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJAJ@",&sipSelf,sipClass_CanonicalMD,&sipCpp,sipClass_ForceField,&a0,sipClass_SnapShotManager,&a1))
        {
            bool sipRes;

            sipRes = (sipSelfWasArg ? sipCpp->CanonicalMD::setup(*a0,a1) : sipCpp->setup(*a0,a1));

            return PyBool_FromLong(sipRes);
        }
    }

    {
        ForceField * a0;
        SnapShotManager * a1;
        const Options * a2;
        CanonicalMD *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJAJ@JA",&sipSelf,sipClass_CanonicalMD,&sipCpp,sipClass_ForceField,&a0,sipClass_SnapShotManager,&a1,sipClass_Options,&a2))
        {
            bool sipRes;

            sipRes = (sipSelfWasArg ? sipCpp->CanonicalMD::setup(*a0,a1,*a2) : sipCpp->setup(*a0,a1,*a2));

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_CanonicalMD,sipNm_BALL_setup);

    return NULL;
}


extern "C" {static PyObject *meth_CanonicalMD_specificSetup(PyObject *, PyObject *);}
static PyObject *meth_CanonicalMD_specificSetup(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        CanonicalMD *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_CanonicalMD,&sipCpp))
        {
            bool sipRes;

            sipRes = (sipSelfWasArg ? sipCpp->CanonicalMD::specificSetup() : sipCpp->specificSetup());

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_CanonicalMD,sipNm_BALL_specificSetup);

    return NULL;
}


extern "C" {static PyObject *meth_CanonicalMD_setTimeStep(PyObject *, PyObject *);}
static PyObject *meth_CanonicalMD_setTimeStep(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        double a0;
        CanonicalMD *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bd",&sipSelf,sipClass_CanonicalMD,&sipCpp,&a0))
        {
            (sipSelfWasArg ? sipCpp->CanonicalMD::setTimeStep(a0) : sipCpp->setTimeStep(a0));

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_CanonicalMD,sipNm_BALL_setTimeStep);

    return NULL;
}


extern "C" {static PyObject *meth_CanonicalMD_simulate(PyObject *, PyObject *);}
static PyObject *meth_CanonicalMD_simulate(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        bool a0 = 0;
        CanonicalMD *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B|b",&sipSelf,sipClass_CanonicalMD,&sipCpp,&a0))
        {
            bool sipRes;

            sipRes = (sipSelfWasArg ? sipCpp->CanonicalMD::simulate(a0) : sipCpp->simulate(a0));

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_CanonicalMD,sipNm_BALL_simulate);

    return NULL;
}


extern "C" {static PyObject *meth_CanonicalMD_simulateIterations(PyObject *, PyObject *);}
static PyObject *meth_CanonicalMD_simulateIterations(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        int a0;
        bool a1 = 0;
        CanonicalMD *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bi|b",&sipSelf,sipClass_CanonicalMD,&sipCpp,&a0,&a1))
        {
            bool sipRes;

            sipRes = (sipSelfWasArg ? sipCpp->CanonicalMD::simulateIterations(a0,a1) : sipCpp->simulateIterations(a0,a1));

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_CanonicalMD,sipNm_BALL_simulateIterations);

    return NULL;
}


extern "C" {static PyObject *meth_CanonicalMD_simulateTime(PyObject *, PyObject *);}
static PyObject *meth_CanonicalMD_simulateTime(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        double a0;
        bool a1 = 0;
        CanonicalMD *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bd|b",&sipSelf,sipClass_CanonicalMD,&sipCpp,&a0,&a1))
        {
            bool sipRes;

            sipRes = (sipSelfWasArg ? sipCpp->CanonicalMD::simulateTime(a0,a1) : sipCpp->simulateTime(a0,a1));

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_CanonicalMD,sipNm_BALL_simulateTime);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_CanonicalMD(void *, sipWrapperType *);}
static void *cast_CanonicalMD(void *ptr,sipWrapperType *targetClass)
{
    void *res;

    if (targetClass == sipClass_CanonicalMD)
        return ptr;

    if ((res = sipCast_MolecularDynamics((MolecularDynamics *)(CanonicalMD *)ptr,targetClass)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_CanonicalMD(void *, int);}
static void release_CanonicalMD(void *ptr,int state)
{
    if (state & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipCanonicalMD *>(ptr);
    else
        delete reinterpret_cast<CanonicalMD *>(ptr);
}


extern "C" {static void dealloc_CanonicalMD(sipWrapper *);}
static void dealloc_CanonicalMD(sipWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipCanonicalMD *>(sipSelf->u.cppPtr)->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_CanonicalMD(sipSelf->u.cppPtr,sipSelf->flags);
    }
}


extern "C" {static void *init_CanonicalMD(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_CanonicalMD(sipWrapper *sipSelf,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    sipCanonicalMD *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            try
            {
            sipCpp = new sipCanonicalMD();
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
            sipCpp = new sipCanonicalMD(*a0);
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
        SnapShotManager * a1;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JAJ@",sipClass_ForceField,&a0,sipClass_SnapShotManager,&a1))
        {
            try
            {
            sipCpp = new sipCanonicalMD(*a0,a1);
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
        SnapShotManager * a1;
        const Options * a2;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JAJ@JA",sipClass_ForceField,&a0,sipClass_SnapShotManager,&a1,sipClass_Options,&a2))
        {
            try
            {
            sipCpp = new sipCanonicalMD(*a0,a1,*a2);
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
        const CanonicalMD * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_CanonicalMD,&a0))
        {
            try
            {
            sipCpp = new sipCanonicalMD(*a0);
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


extern "C" {static void *forceConvertTo_CanonicalMD(PyObject *, int *);}
static void *forceConvertTo_CanonicalMD(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_CanonicalMD))
        return sipConvertToCpp(valobj,sipClass_CanonicalMD,iserrp);

    sipBadClass(sipNm_BALL_CanonicalMD);

    *iserrp = 1;

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedClassDef supers_CanonicalMD[] = {{97, 255, 1}};


static PyMethodDef methods_CanonicalMD[] = {
    {sipNm_BALL_getBathRelaxationTime, meth_CanonicalMD_getBathRelaxationTime, METH_VARARGS, NULL},
    {sipNm_BALL_setBathRelaxationTime, meth_CanonicalMD_setBathRelaxationTime, METH_VARARGS, NULL},
    {sipNm_BALL_setTimeStep, meth_CanonicalMD_setTimeStep, METH_VARARGS, NULL},
    {sipNm_BALL_setup, meth_CanonicalMD_setup, METH_VARARGS, NULL},
    {sipNm_BALL_simulate, meth_CanonicalMD_simulate, METH_VARARGS, NULL},
    {sipNm_BALL_simulateIterations, meth_CanonicalMD_simulateIterations, METH_VARARGS, NULL},
    {sipNm_BALL_simulateTime, meth_CanonicalMD_simulateTime, METH_VARARGS, NULL},
    {sipNm_BALL_specificSetup, meth_CanonicalMD_specificSetup, METH_VARARGS, NULL}
};


sipTypeDef sipType_BALL_CanonicalMD = {
    0,
    0,
    "BALL.CanonicalMD",
    0,
    {0, 0, 1},
    supers_CanonicalMD,
    0,
    8, methods_CanonicalMD,
    0, 0,
    0,
    init_CanonicalMD,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_CanonicalMD,
    cast_CanonicalMD,
    release_CanonicalMD,
    forceConvertTo_CanonicalMD,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
