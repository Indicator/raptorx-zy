/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLSteepestDescentMinimizer.h"

#include "sipBALLEnergyMinimizer.h"
#include "sipBALLForceField.h"
#include "sipBALLSnapShotManager.h"
#include "sipBALLOptions.h"
#include "sipBALLSteepestDescentMinimizer.h"
#include "sipBALLGradient.h"


sipSteepestDescentMinimizer::sipSteepestDescentMinimizer(): SteepestDescentMinimizer(), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,10);
}

sipSteepestDescentMinimizer::sipSteepestDescentMinimizer(ForceField& a0): SteepestDescentMinimizer(a0), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,10);
}

sipSteepestDescentMinimizer::sipSteepestDescentMinimizer(ForceField& a0,SnapShotManager *a1): SteepestDescentMinimizer(a0,a1), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,10);
}

sipSteepestDescentMinimizer::sipSteepestDescentMinimizer(ForceField& a0,SnapShotManager *a1,const Options& a2): SteepestDescentMinimizer(a0,a1,a2), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,10);
}

sipSteepestDescentMinimizer::sipSteepestDescentMinimizer(ForceField& a0,const Options& a1): SteepestDescentMinimizer(a0,a1), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,10);
}

sipSteepestDescentMinimizer::sipSteepestDescentMinimizer(const SteepestDescentMinimizer& a0): SteepestDescentMinimizer(a0), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,10);
}

sipSteepestDescentMinimizer::~sipSteepestDescentMinimizer()
{
    sipCommonDtor(sipPySelf);
}

bool sipSteepestDescentMinimizer::specificSetup()
{
    extern bool sipVH_BALL_4(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipNm_BALL_specificSetup);

    if (!meth)
        return SteepestDescentMinimizer::specificSetup();

    return sipVH_BALL_4(sipGILState,meth);
}

double sipSteepestDescentMinimizer::findStep()
{
    extern double sipVH_BALL_30(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,NULL,sipNm_BALL_findStep);

    if (!meth)
        return SteepestDescentMinimizer::findStep();

    return sipVH_BALL_30(sipGILState,meth);
}

void sipSteepestDescentMinimizer::updateDirection()
{
    extern void sipVH_BALL_0(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[2],sipPySelf,NULL,sipNm_BALL_updateDirection);

    if (!meth)
    {
        SteepestDescentMinimizer::updateDirection();
        return;
    }

    sipVH_BALL_0(sipGILState,meth);
}

bool sipSteepestDescentMinimizer::minimize(int a0,bool a1)
{
    extern bool sipVH_BALL_29(sip_gilstate_t,PyObject *,int,bool);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[3],sipPySelf,NULL,sipNm_BALL_minimize);

    if (!meth)
        return SteepestDescentMinimizer::minimize(a0,a1);

    return sipVH_BALL_29(sipGILState,meth,a0,a1);
}

bool sipSteepestDescentMinimizer::isConverged() const
{
    extern bool sipVH_BALL_4(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<sipMethodCache *>(&sipPyMethods[4]),sipPySelf,NULL,sipNm_BALL_isConverged);

    if (!meth)
        return EnergyMinimizer::isConverged();

    return sipVH_BALL_4(sipGILState,meth);
}

double sipSteepestDescentMinimizer::updateEnergy()
{
    extern double sipVH_BALL_30(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[5],sipPySelf,NULL,sipNm_BALL_updateEnergy);

    if (!meth)
        return EnergyMinimizer::updateEnergy();

    return sipVH_BALL_30(sipGILState,meth);
}

void sipSteepestDescentMinimizer::updateForces()
{
    extern void sipVH_BALL_0(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[6],sipPySelf,NULL,sipNm_BALL_updateForces);

    if (!meth)
    {
        EnergyMinimizer::updateForces();
        return;
    }

    sipVH_BALL_0(sipGILState,meth);
}

void sipSteepestDescentMinimizer::printEnergy() const
{
    extern void sipVH_BALL_0(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<sipMethodCache *>(&sipPyMethods[7]),sipPySelf,NULL,sipNm_BALL_printEnergy);

    if (!meth)
    {
        EnergyMinimizer::printEnergy();
        return;
    }

    sipVH_BALL_0(sipGILState,meth);
}

void sipSteepestDescentMinimizer::takeSnapShot() const
{
    extern void sipVH_BALL_0(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<sipMethodCache *>(&sipPyMethods[8]),sipPySelf,NULL,sipNm_BALL_takeSnapShot);

    if (!meth)
    {
        EnergyMinimizer::takeSnapShot();
        return;
    }

    sipVH_BALL_0(sipGILState,meth);
}

void sipSteepestDescentMinimizer::finishIteration()
{
    extern void sipVH_BALL_0(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[9],sipPySelf,NULL,sipNm_BALL_finishIteration);

    if (!meth)
    {
        EnergyMinimizer::finishIteration();
        return;
    }

    sipVH_BALL_0(sipGILState,meth);
}


extern "C" {static PyObject *meth_SteepestDescentMinimizer_specificSetup(PyObject *, PyObject *);}
static PyObject *meth_SteepestDescentMinimizer_specificSetup(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        SteepestDescentMinimizer *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_SteepestDescentMinimizer,&sipCpp))
        {
            bool sipRes;

            try
            {
            sipRes = (sipSelfWasArg ? sipCpp->SteepestDescentMinimizer::specificSetup() : sipCpp->specificSetup());
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_SteepestDescentMinimizer,sipNm_BALL_specificSetup);

    return NULL;
}


extern "C" {static PyObject *meth_SteepestDescentMinimizer_findStep(PyObject *, PyObject *);}
static PyObject *meth_SteepestDescentMinimizer_findStep(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        SteepestDescentMinimizer *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_SteepestDescentMinimizer,&sipCpp))
        {
            double sipRes;

            try
            {
            sipRes = (sipSelfWasArg ? sipCpp->SteepestDescentMinimizer::findStep() : sipCpp->findStep());
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_SteepestDescentMinimizer,sipNm_BALL_findStep);

    return NULL;
}


extern "C" {static PyObject *meth_SteepestDescentMinimizer_updateDirection(PyObject *, PyObject *);}
static PyObject *meth_SteepestDescentMinimizer_updateDirection(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        SteepestDescentMinimizer *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_SteepestDescentMinimizer,&sipCpp))
        {
            try
            {
            (sipSelfWasArg ? sipCpp->SteepestDescentMinimizer::updateDirection() : sipCpp->updateDirection());
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_SteepestDescentMinimizer,sipNm_BALL_updateDirection);

    return NULL;
}


extern "C" {static PyObject *meth_SteepestDescentMinimizer_minimize(PyObject *, PyObject *);}
static PyObject *meth_SteepestDescentMinimizer_minimize(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        int a0 = 0;
        bool a1 = 0;
        SteepestDescentMinimizer *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B|ib",&sipSelf,sipClass_SteepestDescentMinimizer,&sipCpp,&a0,&a1))
        {
            bool sipRes;

            try
            {
            sipRes = (sipSelfWasArg ? sipCpp->SteepestDescentMinimizer::minimize(a0,a1) : sipCpp->minimize(a0,a1));
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_SteepestDescentMinimizer,sipNm_BALL_minimize);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_SteepestDescentMinimizer(void *, sipWrapperType *);}
static void *cast_SteepestDescentMinimizer(void *ptr,sipWrapperType *targetClass)
{
    void *res;

    if (targetClass == sipClass_SteepestDescentMinimizer)
        return ptr;

    if ((res = sipCast_EnergyMinimizer((EnergyMinimizer *)(SteepestDescentMinimizer *)ptr,targetClass)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_SteepestDescentMinimizer(void *, int);}
static void release_SteepestDescentMinimizer(void *ptr,int state)
{
    if (state & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipSteepestDescentMinimizer *>(ptr);
    else
        delete reinterpret_cast<SteepestDescentMinimizer *>(ptr);
}


extern "C" {static void dealloc_SteepestDescentMinimizer(sipWrapper *);}
static void dealloc_SteepestDescentMinimizer(sipWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipSteepestDescentMinimizer *>(sipSelf->u.cppPtr)->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_SteepestDescentMinimizer(sipSelf->u.cppPtr,sipSelf->flags);
    }
}


extern "C" {static void *init_SteepestDescentMinimizer(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_SteepestDescentMinimizer(sipWrapper *sipSelf,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    sipSteepestDescentMinimizer *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            try
            {
            sipCpp = new sipSteepestDescentMinimizer();
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
            sipCpp = new sipSteepestDescentMinimizer(*a0);
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
            sipCpp = new sipSteepestDescentMinimizer(*a0,a1);
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
            sipCpp = new sipSteepestDescentMinimizer(*a0,a1,*a2);
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
        const Options * a1;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JAJA",sipClass_ForceField,&a0,sipClass_Options,&a1))
        {
            try
            {
            sipCpp = new sipSteepestDescentMinimizer(*a0,*a1);
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
        const SteepestDescentMinimizer * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_SteepestDescentMinimizer,&a0))
        {
            try
            {
            sipCpp = new sipSteepestDescentMinimizer(*a0);
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


extern "C" {static void *forceConvertTo_SteepestDescentMinimizer(PyObject *, int *);}
static void *forceConvertTo_SteepestDescentMinimizer(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_SteepestDescentMinimizer))
        return sipConvertToCpp(valobj,sipClass_SteepestDescentMinimizer,iserrp);

    sipBadClass(sipNm_BALL_SteepestDescentMinimizer);

    *iserrp = 1;

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedClassDef supers_SteepestDescentMinimizer[] = {{92, 255, 1}};


static PyMethodDef methods_SteepestDescentMinimizer[] = {
    {sipNm_BALL_findStep, meth_SteepestDescentMinimizer_findStep, METH_VARARGS, NULL},
    {sipNm_BALL_minimize, meth_SteepestDescentMinimizer_minimize, METH_VARARGS, NULL},
    {sipNm_BALL_specificSetup, meth_SteepestDescentMinimizer_specificSetup, METH_VARARGS, NULL},
    {sipNm_BALL_updateDirection, meth_SteepestDescentMinimizer_updateDirection, METH_VARARGS, NULL}
};


sipTypeDef sipType_BALL_SteepestDescentMinimizer = {
    0,
    0,
    "BALL.SteepestDescentMinimizer",
    0,
    {0, 0, 1},
    supers_SteepestDescentMinimizer,
    0,
    4, methods_SteepestDescentMinimizer,
    0, 0,
    0,
    init_SteepestDescentMinimizer,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_SteepestDescentMinimizer,
    cast_SteepestDescentMinimizer,
    release_SteepestDescentMinimizer,
    forceConvertTo_SteepestDescentMinimizer,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
