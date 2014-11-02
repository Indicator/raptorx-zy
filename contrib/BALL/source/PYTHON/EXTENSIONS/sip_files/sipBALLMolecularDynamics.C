/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLMolecularDynamics.h"

#include "sipBALLOptions.h"
#include "sipBALLForceField.h"
#include "sipBALLMolecularDynamics.h"
#include "sipBALLSnapShotManager.h"


sipMolecularDynamics::sipMolecularDynamics(): MolecularDynamics(), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,7);
}

sipMolecularDynamics::sipMolecularDynamics(ForceField& a0): MolecularDynamics(a0), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,7);
}

sipMolecularDynamics::sipMolecularDynamics(const MolecularDynamics& a0): MolecularDynamics(a0), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,7);
}

sipMolecularDynamics::~sipMolecularDynamics()
{
    sipCommonDtor(sipPySelf);
}

bool sipMolecularDynamics::setup(ForceField& a0,SnapShotManager *a1)
{
    extern bool sipVH_BALL_37(sip_gilstate_t,PyObject *,ForceField&,SnapShotManager *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipNm_BALL_setup);

    if (!meth)
        return MolecularDynamics::setup(a0,a1);

    return sipVH_BALL_37(sipGILState,meth,a0,a1);
}

bool sipMolecularDynamics::setup(ForceField& a0,SnapShotManager *a1,const Options& a2)
{
    extern bool sipVH_BALL_36(sip_gilstate_t,PyObject *,ForceField&,SnapShotManager *,const Options&);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,NULL,sipNm_BALL_setup);

    if (!meth)
        return MolecularDynamics::setup(a0,a1,a2);

    return sipVH_BALL_36(sipGILState,meth,a0,a1,a2);
}

bool sipMolecularDynamics::specificSetup()
{
    extern bool sipVH_BALL_4(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[2],sipPySelf,NULL,sipNm_BALL_specificSetup);

    if (!meth)
        return MolecularDynamics::specificSetup();

    return sipVH_BALL_4(sipGILState,meth);
}

void sipMolecularDynamics::setTimeStep(double a0)
{
    extern void sipVH_BALL_35(sip_gilstate_t,PyObject *,double);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[3],sipPySelf,NULL,sipNm_BALL_setTimeStep);

    if (!meth)
    {
        MolecularDynamics::setTimeStep(a0);
        return;
    }

    sipVH_BALL_35(sipGILState,meth,a0);
}

bool sipMolecularDynamics::simulate(bool a0)
{
    extern bool sipVH_BALL_34(sip_gilstate_t,PyObject *,bool);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[4],sipPySelf,NULL,sipNm_BALL_simulate);

    if (!meth)
        return MolecularDynamics::simulate(a0);

    return sipVH_BALL_34(sipGILState,meth,a0);
}

bool sipMolecularDynamics::simulateIterations(int a0,bool a1)
{
    extern bool sipVH_BALL_29(sip_gilstate_t,PyObject *,int,bool);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[5],sipPySelf,NULL,sipNm_BALL_simulateIterations);

    if (!meth)
        return MolecularDynamics::simulateIterations(a0,a1);

    return sipVH_BALL_29(sipGILState,meth,a0,a1);
}

bool sipMolecularDynamics::simulateTime(double a0,bool a1)
{
    extern bool sipVH_BALL_33(sip_gilstate_t,PyObject *,double,bool);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[6],sipPySelf,NULL,sipNm_BALL_simulateTime);

    if (!meth)
        return MolecularDynamics::simulateTime(a0,a1);

    return sipVH_BALL_33(sipGILState,meth,a0,a1);
}


extern "C" {static PyObject *meth_MolecularDynamics_set(PyObject *, PyObject *);}
static PyObject *meth_MolecularDynamics_set(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const MolecularDynamics * a0;
        MolecularDynamics *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_MolecularDynamics,&sipCpp,sipClass_MolecularDynamics,&a0))
        {
            try
            {
            sipCpp->set(*a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_MolecularDynamics,sipNm_BALL_set);

    return NULL;
}


extern "C" {static PyObject *meth_MolecularDynamics_isValid(PyObject *, PyObject *);}
static PyObject *meth_MolecularDynamics_isValid(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        MolecularDynamics *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_MolecularDynamics,&sipCpp))
        {
            bool sipRes;

            try
            {
            sipRes = sipCpp->isValid();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_MolecularDynamics,sipNm_BALL_isValid);

    return NULL;
}


extern "C" {static PyObject *meth_MolecularDynamics_setup(PyObject *, PyObject *);}
static PyObject *meth_MolecularDynamics_setup(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        ForceField * a0;
        SnapShotManager * a1;
        MolecularDynamics *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJAJ@",&sipSelf,sipClass_MolecularDynamics,&sipCpp,sipClass_ForceField,&a0,sipClass_SnapShotManager,&a1))
        {
            bool sipRes;

            try
            {
            sipRes = (sipSelfWasArg ? sipCpp->MolecularDynamics::setup(*a0,a1) : sipCpp->setup(*a0,a1));
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
        MolecularDynamics *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJAJ@JA",&sipSelf,sipClass_MolecularDynamics,&sipCpp,sipClass_ForceField,&a0,sipClass_SnapShotManager,&a1,sipClass_Options,&a2))
        {
            bool sipRes;

            try
            {
            sipRes = (sipSelfWasArg ? sipCpp->MolecularDynamics::setup(*a0,a1,*a2) : sipCpp->setup(*a0,a1,*a2));
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_MolecularDynamics,sipNm_BALL_setup);

    return NULL;
}


extern "C" {static PyObject *meth_MolecularDynamics_specificSetup(PyObject *, PyObject *);}
static PyObject *meth_MolecularDynamics_specificSetup(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        MolecularDynamics *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_MolecularDynamics,&sipCpp))
        {
            bool sipRes;

            try
            {
            sipRes = (sipSelfWasArg ? sipCpp->MolecularDynamics::specificSetup() : sipCpp->specificSetup());
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_MolecularDynamics,sipNm_BALL_specificSetup);

    return NULL;
}


extern "C" {static PyObject *meth_MolecularDynamics_setNumberOfIteration(PyObject *, PyObject *);}
static PyObject *meth_MolecularDynamics_setNumberOfIteration(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        int a0;
        MolecularDynamics *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bi",&sipSelf,sipClass_MolecularDynamics,&sipCpp,&a0))
        {
            try
            {
            sipCpp->setNumberOfIteration(a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_MolecularDynamics,sipNm_BALL_setNumberOfIteration);

    return NULL;
}


extern "C" {static PyObject *meth_MolecularDynamics_setMaximalNumberOfIterations(PyObject *, PyObject *);}
static PyObject *meth_MolecularDynamics_setMaximalNumberOfIterations(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        int a0;
        MolecularDynamics *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bi",&sipSelf,sipClass_MolecularDynamics,&sipCpp,&a0))
        {
            try
            {
            sipCpp->setMaximalNumberOfIterations(a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_MolecularDynamics,sipNm_BALL_setMaximalNumberOfIterations);

    return NULL;
}


extern "C" {static PyObject *meth_MolecularDynamics_setMaximalSimulationTime(PyObject *, PyObject *);}
static PyObject *meth_MolecularDynamics_setMaximalSimulationTime(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        double a0;
        MolecularDynamics *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bd",&sipSelf,sipClass_MolecularDynamics,&sipCpp,&a0))
        {
            try
            {
            sipCpp->setMaximalSimulationTime(a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_MolecularDynamics,sipNm_BALL_setMaximalSimulationTime);

    return NULL;
}


extern "C" {static PyObject *meth_MolecularDynamics_setTimeStep(PyObject *, PyObject *);}
static PyObject *meth_MolecularDynamics_setTimeStep(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        double a0;
        MolecularDynamics *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bd",&sipSelf,sipClass_MolecularDynamics,&sipCpp,&a0))
        {
            try
            {
            (sipSelfWasArg ? sipCpp->MolecularDynamics::setTimeStep(a0) : sipCpp->setTimeStep(a0));
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_MolecularDynamics,sipNm_BALL_setTimeStep);

    return NULL;
}


extern "C" {static PyObject *meth_MolecularDynamics_setReferenceTemperature(PyObject *, PyObject *);}
static PyObject *meth_MolecularDynamics_setReferenceTemperature(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        double a0;
        MolecularDynamics *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bd",&sipSelf,sipClass_MolecularDynamics,&sipCpp,&a0))
        {
            try
            {
            sipCpp->setReferenceTemperature(a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_MolecularDynamics,sipNm_BALL_setReferenceTemperature);

    return NULL;
}


extern "C" {static PyObject *meth_MolecularDynamics_setCurrentTime(PyObject *, PyObject *);}
static PyObject *meth_MolecularDynamics_setCurrentTime(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        double a0;
        MolecularDynamics *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bd",&sipSelf,sipClass_MolecularDynamics,&sipCpp,&a0))
        {
            try
            {
            sipCpp->setCurrentTime(a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_MolecularDynamics,sipNm_BALL_setCurrentTime);

    return NULL;
}


extern "C" {static PyObject *meth_MolecularDynamics_setEnergyOutputFrequency(PyObject *, PyObject *);}
static PyObject *meth_MolecularDynamics_setEnergyOutputFrequency(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        int a0;
        MolecularDynamics *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bi",&sipSelf,sipClass_MolecularDynamics,&sipCpp,&a0))
        {
            try
            {
            sipCpp->setEnergyOutputFrequency(a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_MolecularDynamics,sipNm_BALL_setEnergyOutputFrequency);

    return NULL;
}


extern "C" {static PyObject *meth_MolecularDynamics_setSnapShotFrequency(PyObject *, PyObject *);}
static PyObject *meth_MolecularDynamics_setSnapShotFrequency(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        int a0;
        MolecularDynamics *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bi",&sipSelf,sipClass_MolecularDynamics,&sipCpp,&a0))
        {
            try
            {
            sipCpp->setSnapShotFrequency(a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_MolecularDynamics,sipNm_BALL_setSnapShotFrequency);

    return NULL;
}


extern "C" {static PyObject *meth_MolecularDynamics_getEnergyOutputFrequency(PyObject *, PyObject *);}
static PyObject *meth_MolecularDynamics_getEnergyOutputFrequency(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        MolecularDynamics *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_MolecularDynamics,&sipCpp))
        {
            int sipRes;

            try
            {
            sipRes = sipCpp->getEnergyOutputFrequency();
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return PyInt_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_MolecularDynamics,sipNm_BALL_getEnergyOutputFrequency);

    return NULL;
}


extern "C" {static PyObject *meth_MolecularDynamics_getNumberOfIterations(PyObject *, PyObject *);}
static PyObject *meth_MolecularDynamics_getNumberOfIterations(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        MolecularDynamics *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_MolecularDynamics,&sipCpp))
        {
            int sipRes;

            try
            {
            sipRes = sipCpp->getNumberOfIterations();
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return PyInt_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_MolecularDynamics,sipNm_BALL_getNumberOfIterations);

    return NULL;
}


extern "C" {static PyObject *meth_MolecularDynamics_getMaximalNumberOfIterations(PyObject *, PyObject *);}
static PyObject *meth_MolecularDynamics_getMaximalNumberOfIterations(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        MolecularDynamics *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_MolecularDynamics,&sipCpp))
        {
            int sipRes;

            try
            {
            sipRes = sipCpp->getMaximalNumberOfIterations();
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return PyInt_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_MolecularDynamics,sipNm_BALL_getMaximalNumberOfIterations);

    return NULL;
}


extern "C" {static PyObject *meth_MolecularDynamics_getMaximalSimulationTime(PyObject *, PyObject *);}
static PyObject *meth_MolecularDynamics_getMaximalSimulationTime(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        MolecularDynamics *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_MolecularDynamics,&sipCpp))
        {
            double sipRes;

            try
            {
            sipRes = sipCpp->getMaximalSimulationTime();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_MolecularDynamics,sipNm_BALL_getMaximalSimulationTime);

    return NULL;
}


extern "C" {static PyObject *meth_MolecularDynamics_getTimeStep(PyObject *, PyObject *);}
static PyObject *meth_MolecularDynamics_getTimeStep(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        MolecularDynamics *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_MolecularDynamics,&sipCpp))
        {
            double sipRes;

            try
            {
            sipRes = sipCpp->getTimeStep();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_MolecularDynamics,sipNm_BALL_getTimeStep);

    return NULL;
}


extern "C" {static PyObject *meth_MolecularDynamics_getSnapShotFrequency(PyObject *, PyObject *);}
static PyObject *meth_MolecularDynamics_getSnapShotFrequency(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        MolecularDynamics *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_MolecularDynamics,&sipCpp))
        {
            int sipRes;

            try
            {
            sipRes = sipCpp->getSnapShotFrequency();
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return PyInt_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_MolecularDynamics,sipNm_BALL_getSnapShotFrequency);

    return NULL;
}


extern "C" {static PyObject *meth_MolecularDynamics_getTemperature(PyObject *, PyObject *);}
static PyObject *meth_MolecularDynamics_getTemperature(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        MolecularDynamics *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_MolecularDynamics,&sipCpp))
        {
            double sipRes;

            try
            {
            sipRes = sipCpp->getTemperature();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_MolecularDynamics,sipNm_BALL_getTemperature);

    return NULL;
}


extern "C" {static PyObject *meth_MolecularDynamics_getTime(PyObject *, PyObject *);}
static PyObject *meth_MolecularDynamics_getTime(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        MolecularDynamics *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_MolecularDynamics,&sipCpp))
        {
            double sipRes;

            try
            {
            sipRes = sipCpp->getTime();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_MolecularDynamics,sipNm_BALL_getTime);

    return NULL;
}


extern "C" {static PyObject *meth_MolecularDynamics_getTotalEnergy(PyObject *, PyObject *);}
static PyObject *meth_MolecularDynamics_getTotalEnergy(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        MolecularDynamics *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_MolecularDynamics,&sipCpp))
        {
            double sipRes;

            try
            {
            sipRes = sipCpp->getTotalEnergy();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_MolecularDynamics,sipNm_BALL_getTotalEnergy);

    return NULL;
}


extern "C" {static PyObject *meth_MolecularDynamics_getPotentialEnergy(PyObject *, PyObject *);}
static PyObject *meth_MolecularDynamics_getPotentialEnergy(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        MolecularDynamics *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_MolecularDynamics,&sipCpp))
        {
            double sipRes;

            try
            {
            sipRes = sipCpp->getPotentialEnergy();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_MolecularDynamics,sipNm_BALL_getPotentialEnergy);

    return NULL;
}


extern "C" {static PyObject *meth_MolecularDynamics_getKineticEnergy(PyObject *, PyObject *);}
static PyObject *meth_MolecularDynamics_getKineticEnergy(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        MolecularDynamics *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_MolecularDynamics,&sipCpp))
        {
            double sipRes;

            try
            {
            sipRes = sipCpp->getKineticEnergy();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_MolecularDynamics,sipNm_BALL_getKineticEnergy);

    return NULL;
}


extern "C" {static PyObject *meth_MolecularDynamics_getForceField(PyObject *, PyObject *);}
static PyObject *meth_MolecularDynamics_getForceField(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        MolecularDynamics *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_MolecularDynamics,&sipCpp))
        {
            ForceField *sipRes;

            try
            {
            sipRes = sipCpp->getForceField();
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return sipConvertFromInstance(sipRes,sipClass_ForceField,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_MolecularDynamics,sipNm_BALL_getForceField);

    return NULL;
}


extern "C" {static PyObject *meth_MolecularDynamics_simulate(PyObject *, PyObject *);}
static PyObject *meth_MolecularDynamics_simulate(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        bool a0 = 0;
        MolecularDynamics *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B|b",&sipSelf,sipClass_MolecularDynamics,&sipCpp,&a0))
        {
            bool sipRes;

            try
            {
            sipRes = (sipSelfWasArg ? sipCpp->MolecularDynamics::simulate(a0) : sipCpp->simulate(a0));
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_MolecularDynamics,sipNm_BALL_simulate);

    return NULL;
}


extern "C" {static PyObject *meth_MolecularDynamics_simulateIterations(PyObject *, PyObject *);}
static PyObject *meth_MolecularDynamics_simulateIterations(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        int a0;
        bool a1 = 0;
        MolecularDynamics *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bi|b",&sipSelf,sipClass_MolecularDynamics,&sipCpp,&a0,&a1))
        {
            bool sipRes;

            try
            {
            sipRes = (sipSelfWasArg ? sipCpp->MolecularDynamics::simulateIterations(a0,a1) : sipCpp->simulateIterations(a0,a1));
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_MolecularDynamics,sipNm_BALL_simulateIterations);

    return NULL;
}


extern "C" {static PyObject *meth_MolecularDynamics_simulateTime(PyObject *, PyObject *);}
static PyObject *meth_MolecularDynamics_simulateTime(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        double a0;
        bool a1 = 0;
        MolecularDynamics *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bd|b",&sipSelf,sipClass_MolecularDynamics,&sipCpp,&a0,&a1))
        {
            bool sipRes;

            try
            {
            sipRes = (sipSelfWasArg ? sipCpp->MolecularDynamics::simulateTime(a0,a1) : sipCpp->simulateTime(a0,a1));
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_MolecularDynamics,sipNm_BALL_simulateTime);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_MolecularDynamics(void *, sipWrapperType *);}
static void *cast_MolecularDynamics(void *ptr,sipWrapperType *targetClass)
{
    if (targetClass == sipClass_MolecularDynamics)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_MolecularDynamics(void *, int);}
static void release_MolecularDynamics(void *ptr,int state)
{
    if (state & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipMolecularDynamics *>(ptr);
    else
        delete reinterpret_cast<MolecularDynamics *>(ptr);
}


extern "C" {static void dealloc_MolecularDynamics(sipWrapper *);}
static void dealloc_MolecularDynamics(sipWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipMolecularDynamics *>(sipSelf->u.cppPtr)->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_MolecularDynamics(sipSelf->u.cppPtr,sipSelf->flags);
    }
}


extern "C" {static void *init_MolecularDynamics(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_MolecularDynamics(sipWrapper *sipSelf,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    sipMolecularDynamics *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            try
            {
            sipCpp = new sipMolecularDynamics();
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
            sipCpp = new sipMolecularDynamics(*a0);
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
        const MolecularDynamics * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_MolecularDynamics,&a0))
        {
            try
            {
            sipCpp = new sipMolecularDynamics(*a0);
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


extern "C" {static PyObject *var_MolecularDynamics_options(PyObject *, PyObject *);}
static PyObject *var_MolecularDynamics_options(PyObject *sipSelf,PyObject *sipPy)
{
    int sipIsErr = 0;
   Options *sipVal;
    MolecularDynamics *sipCpp = reinterpret_cast<MolecularDynamics *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_MolecularDynamics));

    if (!sipCpp)
        return NULL;

    if (sipPy == NULL)
    {
        sipVal = &sipCpp->options;

        sipPy = sipConvertFromInstance(sipVal,sipClass_Options,NULL);

        return sipPy;
    }

    sipVal = reinterpret_cast<Options *>(sipForceConvertToInstance(sipPy,sipClass_Options,NULL,SIP_NOT_NONE,NULL,&sipIsErr));

    if (sipIsErr)
        return NULL;

    sipCpp->options = *sipVal;

    Py_INCREF(Py_None);
    return Py_None;
}

PyMethodDef variables_MolecularDynamics[] = {
    {sipNm_BALL_options, var_MolecularDynamics_options, 0, NULL},
    {0, 0, 0, 0}
};


extern "C" {static void *forceConvertTo_MolecularDynamics(PyObject *, int *);}
static void *forceConvertTo_MolecularDynamics(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_MolecularDynamics))
        return sipConvertToCpp(valobj,sipClass_MolecularDynamics,iserrp);

    sipBadClass(sipNm_BALL_MolecularDynamics);

    *iserrp = 1;

    return NULL;
}


static PyMethodDef methods_MolecularDynamics[] = {
    {sipNm_BALL_getEnergyOutputFrequency, meth_MolecularDynamics_getEnergyOutputFrequency, METH_VARARGS, NULL},
    {sipNm_BALL_getForceField, meth_MolecularDynamics_getForceField, METH_VARARGS, NULL},
    {sipNm_BALL_getKineticEnergy, meth_MolecularDynamics_getKineticEnergy, METH_VARARGS, NULL},
    {sipNm_BALL_getMaximalNumberOfIterations, meth_MolecularDynamics_getMaximalNumberOfIterations, METH_VARARGS, NULL},
    {sipNm_BALL_getMaximalSimulationTime, meth_MolecularDynamics_getMaximalSimulationTime, METH_VARARGS, NULL},
    {sipNm_BALL_getNumberOfIterations, meth_MolecularDynamics_getNumberOfIterations, METH_VARARGS, NULL},
    {sipNm_BALL_getPotentialEnergy, meth_MolecularDynamics_getPotentialEnergy, METH_VARARGS, NULL},
    {sipNm_BALL_getSnapShotFrequency, meth_MolecularDynamics_getSnapShotFrequency, METH_VARARGS, NULL},
    {sipNm_BALL_getTemperature, meth_MolecularDynamics_getTemperature, METH_VARARGS, NULL},
    {sipNm_BALL_getTime, meth_MolecularDynamics_getTime, METH_VARARGS, NULL},
    {sipNm_BALL_getTimeStep, meth_MolecularDynamics_getTimeStep, METH_VARARGS, NULL},
    {sipNm_BALL_getTotalEnergy, meth_MolecularDynamics_getTotalEnergy, METH_VARARGS, NULL},
    {sipNm_BALL_isValid, meth_MolecularDynamics_isValid, METH_VARARGS, NULL},
    {sipNm_BALL_set, meth_MolecularDynamics_set, METH_VARARGS, NULL},
    {sipNm_BALL_setCurrentTime, meth_MolecularDynamics_setCurrentTime, METH_VARARGS, NULL},
    {sipNm_BALL_setEnergyOutputFrequency, meth_MolecularDynamics_setEnergyOutputFrequency, METH_VARARGS, NULL},
    {sipNm_BALL_setMaximalNumberOfIterations, meth_MolecularDynamics_setMaximalNumberOfIterations, METH_VARARGS, NULL},
    {sipNm_BALL_setMaximalSimulationTime, meth_MolecularDynamics_setMaximalSimulationTime, METH_VARARGS, NULL},
    {sipNm_BALL_setNumberOfIteration, meth_MolecularDynamics_setNumberOfIteration, METH_VARARGS, NULL},
    {sipNm_BALL_setReferenceTemperature, meth_MolecularDynamics_setReferenceTemperature, METH_VARARGS, NULL},
    {sipNm_BALL_setSnapShotFrequency, meth_MolecularDynamics_setSnapShotFrequency, METH_VARARGS, NULL},
    {sipNm_BALL_setTimeStep, meth_MolecularDynamics_setTimeStep, METH_VARARGS, NULL},
    {sipNm_BALL_setup, meth_MolecularDynamics_setup, METH_VARARGS, NULL},
    {sipNm_BALL_simulate, meth_MolecularDynamics_simulate, METH_VARARGS, NULL},
    {sipNm_BALL_simulateIterations, meth_MolecularDynamics_simulateIterations, METH_VARARGS, NULL},
    {sipNm_BALL_simulateTime, meth_MolecularDynamics_simulateTime, METH_VARARGS, NULL},
    {sipNm_BALL_specificSetup, meth_MolecularDynamics_specificSetup, METH_VARARGS, NULL}
};


sipTypeDef sipType_BALL_MolecularDynamics = {
    0,
    0,
    "BALL.MolecularDynamics",
    0,
    {0, 0, 1},
    0,
    0,
    27, methods_MolecularDynamics,
    0, 0,
    variables_MolecularDynamics,
    init_MolecularDynamics,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_MolecularDynamics,
    cast_MolecularDynamics,
    release_MolecularDynamics,
    forceConvertTo_MolecularDynamics,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
