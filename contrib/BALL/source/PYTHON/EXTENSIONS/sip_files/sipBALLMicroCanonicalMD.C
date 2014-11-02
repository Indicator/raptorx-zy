/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLMicroCanonicalMD.h"

#include "sipBALLMolecularDynamics.h"
#include "sipBALLForceField.h"
#include "sipBALLSnapShotManager.h"
#include "sipBALLOptions.h"
#include "sipBALLMicroCanonicalMD.h"


sipMicroCanonicalMD::sipMicroCanonicalMD(): MicroCanonicalMD(), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,7);
}

sipMicroCanonicalMD::sipMicroCanonicalMD(ForceField& a0): MicroCanonicalMD(a0), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,7);
}

sipMicroCanonicalMD::sipMicroCanonicalMD(ForceField& a0,SnapShotManager *a1): MicroCanonicalMD(a0,a1), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,7);
}

sipMicroCanonicalMD::sipMicroCanonicalMD(ForceField& a0,SnapShotManager *a1,const Options& a2): MicroCanonicalMD(a0,a1,a2), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,7);
}

sipMicroCanonicalMD::sipMicroCanonicalMD(const MicroCanonicalMD& a0): MicroCanonicalMD(a0), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,7);
}

sipMicroCanonicalMD::~sipMicroCanonicalMD()
{
    sipCommonDtor(sipPySelf);
}

bool sipMicroCanonicalMD::setup(ForceField& a0,SnapShotManager *a1)
{
    extern bool sipVH_BALL_37(sip_gilstate_t,PyObject *,ForceField&,SnapShotManager *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipNm_BALL_setup);

    if (!meth)
        return MicroCanonicalMD::setup(a0,a1);

    return sipVH_BALL_37(sipGILState,meth,a0,a1);
}

bool sipMicroCanonicalMD::setup(ForceField& a0,SnapShotManager *a1,const Options& a2)
{
    extern bool sipVH_BALL_36(sip_gilstate_t,PyObject *,ForceField&,SnapShotManager *,const Options&);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,NULL,sipNm_BALL_setup);

    if (!meth)
        return MicroCanonicalMD::setup(a0,a1,a2);

    return sipVH_BALL_36(sipGILState,meth,a0,a1,a2);
}

bool sipMicroCanonicalMD::specificSetup()
{
    extern bool sipVH_BALL_4(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[2],sipPySelf,NULL,sipNm_BALL_specificSetup);

    if (!meth)
        return MicroCanonicalMD::specificSetup();

    return sipVH_BALL_4(sipGILState,meth);
}

void sipMicroCanonicalMD::setTimeStep(double a0)
{
    extern void sipVH_BALL_35(sip_gilstate_t,PyObject *,double);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[3],sipPySelf,NULL,sipNm_BALL_setTimeStep);

    if (!meth)
    {
        MicroCanonicalMD::setTimeStep(a0);
        return;
    }

    sipVH_BALL_35(sipGILState,meth,a0);
}

bool sipMicroCanonicalMD::simulate(bool a0)
{
    extern bool sipVH_BALL_34(sip_gilstate_t,PyObject *,bool);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[4],sipPySelf,NULL,sipNm_BALL_simulate);

    if (!meth)
        return MicroCanonicalMD::simulate(a0);

    return sipVH_BALL_34(sipGILState,meth,a0);
}

bool sipMicroCanonicalMD::simulateIterations(int a0,bool a1)
{
    extern bool sipVH_BALL_29(sip_gilstate_t,PyObject *,int,bool);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[5],sipPySelf,NULL,sipNm_BALL_simulateIterations);

    if (!meth)
        return MicroCanonicalMD::simulateIterations(a0,a1);

    return sipVH_BALL_29(sipGILState,meth,a0,a1);
}

bool sipMicroCanonicalMD::simulateTime(double a0,bool a1)
{
    extern bool sipVH_BALL_33(sip_gilstate_t,PyObject *,double,bool);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[6],sipPySelf,NULL,sipNm_BALL_simulateTime);

    if (!meth)
        return MicroCanonicalMD::simulateTime(a0,a1);

    return sipVH_BALL_33(sipGILState,meth,a0,a1);
}


extern "C" {static PyObject *meth_MicroCanonicalMD_setup(PyObject *, PyObject *);}
static PyObject *meth_MicroCanonicalMD_setup(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        ForceField * a0;
        SnapShotManager * a1;
        MicroCanonicalMD *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJAJ@",&sipSelf,sipClass_MicroCanonicalMD,&sipCpp,sipClass_ForceField,&a0,sipClass_SnapShotManager,&a1))
        {
            bool sipRes;

            try
            {
            sipRes = (sipSelfWasArg ? sipCpp->MicroCanonicalMD::setup(*a0,a1) : sipCpp->setup(*a0,a1));
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return PyBool_FromLong(sipRes);
        }
    }

    {
        ForceField * a0;
        SnapShotManager * a1;
        const Options * a2;
        MicroCanonicalMD *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJAJ@JA",&sipSelf,sipClass_MicroCanonicalMD,&sipCpp,sipClass_ForceField,&a0,sipClass_SnapShotManager,&a1,sipClass_Options,&a2))
        {
            bool sipRes;

            try
            {
            sipRes = (sipSelfWasArg ? sipCpp->MicroCanonicalMD::setup(*a0,a1,*a2) : sipCpp->setup(*a0,a1,*a2));
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_MicroCanonicalMD,sipNm_BALL_setup);

    return NULL;
}


extern "C" {static PyObject *meth_MicroCanonicalMD_specificSetup(PyObject *, PyObject *);}
static PyObject *meth_MicroCanonicalMD_specificSetup(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        MicroCanonicalMD *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_MicroCanonicalMD,&sipCpp))
        {
            bool sipRes;

            try
            {
            sipRes = (sipSelfWasArg ? sipCpp->MicroCanonicalMD::specificSetup() : sipCpp->specificSetup());
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_MicroCanonicalMD,sipNm_BALL_specificSetup);

    return NULL;
}


extern "C" {static PyObject *meth_MicroCanonicalMD_setTimeStep(PyObject *, PyObject *);}
static PyObject *meth_MicroCanonicalMD_setTimeStep(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        double a0;
        MicroCanonicalMD *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bd",&sipSelf,sipClass_MicroCanonicalMD,&sipCpp,&a0))
        {
            try
            {
            (sipSelfWasArg ? sipCpp->MicroCanonicalMD::setTimeStep(a0) : sipCpp->setTimeStep(a0));
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_MicroCanonicalMD,sipNm_BALL_setTimeStep);

    return NULL;
}


extern "C" {static PyObject *meth_MicroCanonicalMD_simulate(PyObject *, PyObject *);}
static PyObject *meth_MicroCanonicalMD_simulate(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        bool a0 = 0;
        MicroCanonicalMD *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B|b",&sipSelf,sipClass_MicroCanonicalMD,&sipCpp,&a0))
        {
            bool sipRes;

            try
            {
            sipRes = (sipSelfWasArg ? sipCpp->MicroCanonicalMD::simulate(a0) : sipCpp->simulate(a0));
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_MicroCanonicalMD,sipNm_BALL_simulate);

    return NULL;
}


extern "C" {static PyObject *meth_MicroCanonicalMD_simulateIterations(PyObject *, PyObject *);}
static PyObject *meth_MicroCanonicalMD_simulateIterations(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        int a0;
        bool a1 = 0;
        MicroCanonicalMD *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bi|b",&sipSelf,sipClass_MicroCanonicalMD,&sipCpp,&a0,&a1))
        {
            bool sipRes;

            try
            {
            sipRes = (sipSelfWasArg ? sipCpp->MicroCanonicalMD::simulateIterations(a0,a1) : sipCpp->simulateIterations(a0,a1));
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_MicroCanonicalMD,sipNm_BALL_simulateIterations);

    return NULL;
}


extern "C" {static PyObject *meth_MicroCanonicalMD_simulateTime(PyObject *, PyObject *);}
static PyObject *meth_MicroCanonicalMD_simulateTime(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        double a0;
        bool a1 = 0;
        MicroCanonicalMD *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bd|b",&sipSelf,sipClass_MicroCanonicalMD,&sipCpp,&a0,&a1))
        {
            bool sipRes;

            try
            {
            sipRes = (sipSelfWasArg ? sipCpp->MicroCanonicalMD::simulateTime(a0,a1) : sipCpp->simulateTime(a0,a1));
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_MicroCanonicalMD,sipNm_BALL_simulateTime);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_MicroCanonicalMD(void *, sipWrapperType *);}
static void *cast_MicroCanonicalMD(void *ptr,sipWrapperType *targetClass)
{
    void *res;

    if (targetClass == sipClass_MicroCanonicalMD)
        return ptr;

    if ((res = sipCast_MolecularDynamics((MolecularDynamics *)(MicroCanonicalMD *)ptr,targetClass)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_MicroCanonicalMD(void *, int);}
static void release_MicroCanonicalMD(void *ptr,int state)
{
    if (state & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipMicroCanonicalMD *>(ptr);
    else
        delete reinterpret_cast<MicroCanonicalMD *>(ptr);
}


extern "C" {static void dealloc_MicroCanonicalMD(sipWrapper *);}
static void dealloc_MicroCanonicalMD(sipWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipMicroCanonicalMD *>(sipSelf->u.cppPtr)->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_MicroCanonicalMD(sipSelf->u.cppPtr,sipSelf->flags);
    }
}


extern "C" {static void *init_MicroCanonicalMD(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_MicroCanonicalMD(sipWrapper *sipSelf,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    sipMicroCanonicalMD *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            try
            {
            sipCpp = new sipMicroCanonicalMD();
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
            sipCpp = new sipMicroCanonicalMD(*a0);
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
            sipCpp = new sipMicroCanonicalMD(*a0,a1);
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
            sipCpp = new sipMicroCanonicalMD(*a0,a1,*a2);
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
        const MicroCanonicalMD * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_MicroCanonicalMD,&a0))
        {
            try
            {
            sipCpp = new sipMicroCanonicalMD(*a0);
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


extern "C" {static void *forceConvertTo_MicroCanonicalMD(PyObject *, int *);}
static void *forceConvertTo_MicroCanonicalMD(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_MicroCanonicalMD))
        return sipConvertToCpp(valobj,sipClass_MicroCanonicalMD,iserrp);

    sipBadClass(sipNm_BALL_MicroCanonicalMD);

    *iserrp = 1;

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedClassDef supers_MicroCanonicalMD[] = {{97, 255, 1}};


static PyMethodDef methods_MicroCanonicalMD[] = {
    {sipNm_BALL_setTimeStep, meth_MicroCanonicalMD_setTimeStep, METH_VARARGS, NULL},
    {sipNm_BALL_setup, meth_MicroCanonicalMD_setup, METH_VARARGS, NULL},
    {sipNm_BALL_simulate, meth_MicroCanonicalMD_simulate, METH_VARARGS, NULL},
    {sipNm_BALL_simulateIterations, meth_MicroCanonicalMD_simulateIterations, METH_VARARGS, NULL},
    {sipNm_BALL_simulateTime, meth_MicroCanonicalMD_simulateTime, METH_VARARGS, NULL},
    {sipNm_BALL_specificSetup, meth_MicroCanonicalMD_specificSetup, METH_VARARGS, NULL}
};


sipTypeDef sipType_BALL_MicroCanonicalMD = {
    0,
    0,
    "BALL.MicroCanonicalMD",
    0,
    {0, 0, 1},
    supers_MicroCanonicalMD,
    0,
    6, methods_MicroCanonicalMD,
    0, 0,
    0,
    init_MicroCanonicalMD,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_MicroCanonicalMD,
    cast_MicroCanonicalMD,
    release_MicroCanonicalMD,
    forceConvertTo_MicroCanonicalMD,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
