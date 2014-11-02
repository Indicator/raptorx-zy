/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLEnergyMinimizer.h"

#include "sipBALLOptions.h"
#include "sipBALLForceField.h"
#include "sipBALLEnergyMinimizer.h"
#include "sipBALLGradient.h"
#include "sipBALLSnapShotManager.h"


sipEnergyMinimizer::sipEnergyMinimizer(): EnergyMinimizer(), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,10);
}

sipEnergyMinimizer::sipEnergyMinimizer(ForceField& a0): EnergyMinimizer(a0), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,10);
}

sipEnergyMinimizer::sipEnergyMinimizer(ForceField& a0,Options& a1): EnergyMinimizer(a0,a1), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,10);
}

sipEnergyMinimizer::sipEnergyMinimizer(const EnergyMinimizer& a0): EnergyMinimizer(a0), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,10);
}

sipEnergyMinimizer::~sipEnergyMinimizer()
{
    sipCommonDtor(sipPySelf);
}

bool sipEnergyMinimizer::specificSetup()
{
    extern bool sipVH_BALL_4(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipNm_BALL_specificSetup);

    if (!meth)
        return EnergyMinimizer::specificSetup();

    return sipVH_BALL_4(sipGILState,meth);
}

bool sipEnergyMinimizer::isConverged() const
{
    extern bool sipVH_BALL_4(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<sipMethodCache *>(&sipPyMethods[1]),sipPySelf,NULL,sipNm_BALL_isConverged);

    if (!meth)
        return EnergyMinimizer::isConverged();

    return sipVH_BALL_4(sipGILState,meth);
}

double sipEnergyMinimizer::findStep()
{
    extern double sipVH_BALL_30(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[2],sipPySelf,NULL,sipNm_BALL_findStep);

    if (!meth)
        return EnergyMinimizer::findStep();

    return sipVH_BALL_30(sipGILState,meth);
}

void sipEnergyMinimizer::updateDirection()
{
    extern void sipVH_BALL_0(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[3],sipPySelf,NULL,sipNm_BALL_updateDirection);

    if (!meth)
    {
        EnergyMinimizer::updateDirection();
        return;
    }

    sipVH_BALL_0(sipGILState,meth);
}

double sipEnergyMinimizer::updateEnergy()
{
    extern double sipVH_BALL_30(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[4],sipPySelf,NULL,sipNm_BALL_updateEnergy);

    if (!meth)
        return EnergyMinimizer::updateEnergy();

    return sipVH_BALL_30(sipGILState,meth);
}

void sipEnergyMinimizer::updateForces()
{
    extern void sipVH_BALL_0(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[5],sipPySelf,NULL,sipNm_BALL_updateForces);

    if (!meth)
    {
        EnergyMinimizer::updateForces();
        return;
    }

    sipVH_BALL_0(sipGILState,meth);
}

void sipEnergyMinimizer::printEnergy() const
{
    extern void sipVH_BALL_0(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<sipMethodCache *>(&sipPyMethods[6]),sipPySelf,NULL,sipNm_BALL_printEnergy);

    if (!meth)
    {
        EnergyMinimizer::printEnergy();
        return;
    }

    sipVH_BALL_0(sipGILState,meth);
}

void sipEnergyMinimizer::takeSnapShot() const
{
    extern void sipVH_BALL_0(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<sipMethodCache *>(&sipPyMethods[7]),sipPySelf,NULL,sipNm_BALL_takeSnapShot);

    if (!meth)
    {
        EnergyMinimizer::takeSnapShot();
        return;
    }

    sipVH_BALL_0(sipGILState,meth);
}

void sipEnergyMinimizer::finishIteration()
{
    extern void sipVH_BALL_0(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[8],sipPySelf,NULL,sipNm_BALL_finishIteration);

    if (!meth)
    {
        EnergyMinimizer::finishIteration();
        return;
    }

    sipVH_BALL_0(sipGILState,meth);
}

bool sipEnergyMinimizer::minimize(int a0,bool a1)
{
    extern bool sipVH_BALL_29(sip_gilstate_t,PyObject *,int,bool);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[9],sipPySelf,NULL,sipNm_BALL_minimize);

    if (!meth)
        return EnergyMinimizer::minimize(a0,a1);

    return sipVH_BALL_29(sipGILState,meth,a0,a1);
}


extern "C" {static PyObject *meth_EnergyMinimizer_isValid(PyObject *, PyObject *);}
static PyObject *meth_EnergyMinimizer_isValid(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        EnergyMinimizer *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_EnergyMinimizer,&sipCpp))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_EnergyMinimizer,sipNm_BALL_isValid);

    return NULL;
}


extern "C" {static PyObject *meth_EnergyMinimizer_setup(PyObject *, PyObject *);}
static PyObject *meth_EnergyMinimizer_setup(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        ForceField * a0;
        EnergyMinimizer *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_EnergyMinimizer,&sipCpp,sipClass_ForceField,&a0))
        {
            bool sipRes;

            try
            {
            sipRes = sipCpp->setup(*a0);
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
        EnergyMinimizer *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJAJ@",&sipSelf,sipClass_EnergyMinimizer,&sipCpp,sipClass_ForceField,&a0,sipClass_SnapShotManager,&a1))
        {
            bool sipRes;

            try
            {
            sipRes = sipCpp->setup(*a0,a1);
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
        Options * a2;
        EnergyMinimizer *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJAJ@JA",&sipSelf,sipClass_EnergyMinimizer,&sipCpp,sipClass_ForceField,&a0,sipClass_SnapShotManager,&a1,sipClass_Options,&a2))
        {
            bool sipRes;

            try
            {
            sipRes = sipCpp->setup(*a0,a1,*a2);
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
        Options * a1;
        EnergyMinimizer *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJAJA",&sipSelf,sipClass_EnergyMinimizer,&sipCpp,sipClass_ForceField,&a0,sipClass_Options,&a1))
        {
            bool sipRes;

            try
            {
            sipRes = sipCpp->setup(*a0,*a1);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_EnergyMinimizer,sipNm_BALL_setup);

    return NULL;
}


extern "C" {static PyObject *meth_EnergyMinimizer_specificSetup(PyObject *, PyObject *);}
static PyObject *meth_EnergyMinimizer_specificSetup(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        EnergyMinimizer *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_EnergyMinimizer,&sipCpp))
        {
            bool sipRes;

            try
            {
            sipRes = (sipSelfWasArg ? sipCpp->EnergyMinimizer::specificSetup() : sipCpp->specificSetup());
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_EnergyMinimizer,sipNm_BALL_specificSetup);

    return NULL;
}


extern "C" {static PyObject *meth_EnergyMinimizer_isConverged(PyObject *, PyObject *);}
static PyObject *meth_EnergyMinimizer_isConverged(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        EnergyMinimizer *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_EnergyMinimizer,&sipCpp))
        {
            bool sipRes;

            try
            {
            sipRes = (sipSelfWasArg ? sipCpp->EnergyMinimizer::isConverged() : sipCpp->isConverged());
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_EnergyMinimizer,sipNm_BALL_isConverged);

    return NULL;
}


extern "C" {static PyObject *meth_EnergyMinimizer_findStep(PyObject *, PyObject *);}
static PyObject *meth_EnergyMinimizer_findStep(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        EnergyMinimizer *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_EnergyMinimizer,&sipCpp))
        {
            double sipRes;

            try
            {
            sipRes = (sipSelfWasArg ? sipCpp->EnergyMinimizer::findStep() : sipCpp->findStep());
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_EnergyMinimizer,sipNm_BALL_findStep);

    return NULL;
}


extern "C" {static PyObject *meth_EnergyMinimizer_updateDirection(PyObject *, PyObject *);}
static PyObject *meth_EnergyMinimizer_updateDirection(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        EnergyMinimizer *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_EnergyMinimizer,&sipCpp))
        {
            try
            {
            (sipSelfWasArg ? sipCpp->EnergyMinimizer::updateDirection() : sipCpp->updateDirection());
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_EnergyMinimizer,sipNm_BALL_updateDirection);

    return NULL;
}


extern "C" {static PyObject *meth_EnergyMinimizer_updateEnergy(PyObject *, PyObject *);}
static PyObject *meth_EnergyMinimizer_updateEnergy(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        EnergyMinimizer *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_EnergyMinimizer,&sipCpp))
        {
            double sipRes;

            try
            {
            sipRes = (sipSelfWasArg ? sipCpp->EnergyMinimizer::updateEnergy() : sipCpp->updateEnergy());
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_EnergyMinimizer,sipNm_BALL_updateEnergy);

    return NULL;
}


extern "C" {static PyObject *meth_EnergyMinimizer_updateForces(PyObject *, PyObject *);}
static PyObject *meth_EnergyMinimizer_updateForces(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        EnergyMinimizer *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_EnergyMinimizer,&sipCpp))
        {
            try
            {
            (sipSelfWasArg ? sipCpp->EnergyMinimizer::updateForces() : sipCpp->updateForces());
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_EnergyMinimizer,sipNm_BALL_updateForces);

    return NULL;
}


extern "C" {static PyObject *meth_EnergyMinimizer_printEnergy(PyObject *, PyObject *);}
static PyObject *meth_EnergyMinimizer_printEnergy(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        EnergyMinimizer *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_EnergyMinimizer,&sipCpp))
        {
            try
            {
            (sipSelfWasArg ? sipCpp->EnergyMinimizer::printEnergy() : sipCpp->printEnergy());
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_EnergyMinimizer,sipNm_BALL_printEnergy);

    return NULL;
}


extern "C" {static PyObject *meth_EnergyMinimizer_takeSnapShot(PyObject *, PyObject *);}
static PyObject *meth_EnergyMinimizer_takeSnapShot(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        EnergyMinimizer *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_EnergyMinimizer,&sipCpp))
        {
            try
            {
            (sipSelfWasArg ? sipCpp->EnergyMinimizer::takeSnapShot() : sipCpp->takeSnapShot());
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_EnergyMinimizer,sipNm_BALL_takeSnapShot);

    return NULL;
}


extern "C" {static PyObject *meth_EnergyMinimizer_finishIteration(PyObject *, PyObject *);}
static PyObject *meth_EnergyMinimizer_finishIteration(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        EnergyMinimizer *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_EnergyMinimizer,&sipCpp))
        {
            try
            {
            (sipSelfWasArg ? sipCpp->EnergyMinimizer::finishIteration() : sipCpp->finishIteration());
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_EnergyMinimizer,sipNm_BALL_finishIteration);

    return NULL;
}


extern "C" {static PyObject *meth_EnergyMinimizer_getNumberOfIterations(PyObject *, PyObject *);}
static PyObject *meth_EnergyMinimizer_getNumberOfIterations(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        EnergyMinimizer *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_EnergyMinimizer,&sipCpp))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_EnergyMinimizer,sipNm_BALL_getNumberOfIterations);

    return NULL;
}


extern "C" {static PyObject *meth_EnergyMinimizer_getDirection(PyObject *, PyObject *);}
static PyObject *meth_EnergyMinimizer_getDirection(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        EnergyMinimizer *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_EnergyMinimizer,&sipCpp))
        {
            Gradient *sipRes;

            try
            {
            sipRes = &sipCpp->getDirection();
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return sipConvertFromInstance(sipRes,sipClass_Gradient,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_EnergyMinimizer,sipNm_BALL_getDirection);

    return NULL;
}


extern "C" {static PyObject *meth_EnergyMinimizer_getGradient(PyObject *, PyObject *);}
static PyObject *meth_EnergyMinimizer_getGradient(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        EnergyMinimizer *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_EnergyMinimizer,&sipCpp))
        {
            Gradient *sipRes;

            try
            {
            sipRes = &sipCpp->getGradient();
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return sipConvertFromInstance(sipRes,sipClass_Gradient,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_EnergyMinimizer,sipNm_BALL_getGradient);

    return NULL;
}


extern "C" {static PyObject *meth_EnergyMinimizer_getInitialGradient(PyObject *, PyObject *);}
static PyObject *meth_EnergyMinimizer_getInitialGradient(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        EnergyMinimizer *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_EnergyMinimizer,&sipCpp))
        {
            Gradient *sipRes;

            try
            {
            sipRes = &sipCpp->getInitialGradient();
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return sipConvertFromInstance(sipRes,sipClass_Gradient,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_EnergyMinimizer,sipNm_BALL_getInitialGradient);

    return NULL;
}


extern "C" {static PyObject *meth_EnergyMinimizer_getEnergy(PyObject *, PyObject *);}
static PyObject *meth_EnergyMinimizer_getEnergy(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        EnergyMinimizer *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_EnergyMinimizer,&sipCpp))
        {
            double sipRes;

            try
            {
            sipRes = sipCpp->getEnergy();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_EnergyMinimizer,sipNm_BALL_getEnergy);

    return NULL;
}


extern "C" {static PyObject *meth_EnergyMinimizer_getInitialEnergy(PyObject *, PyObject *);}
static PyObject *meth_EnergyMinimizer_getInitialEnergy(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        EnergyMinimizer *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_EnergyMinimizer,&sipCpp))
        {
            double sipRes;

            try
            {
            sipRes = sipCpp->getInitialEnergy();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_EnergyMinimizer,sipNm_BALL_getInitialEnergy);

    return NULL;
}


extern "C" {static PyObject *meth_EnergyMinimizer_setNumberOfIterations(PyObject *, PyObject *);}
static PyObject *meth_EnergyMinimizer_setNumberOfIterations(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        int a0;
        EnergyMinimizer *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bi",&sipSelf,sipClass_EnergyMinimizer,&sipCpp,&a0))
        {
            try
            {
            sipCpp->setNumberOfIterations(a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_EnergyMinimizer,sipNm_BALL_setNumberOfIterations);

    return NULL;
}


extern "C" {static PyObject *meth_EnergyMinimizer_getMaxNumberOfIterations(PyObject *, PyObject *);}
static PyObject *meth_EnergyMinimizer_getMaxNumberOfIterations(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        EnergyMinimizer *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_EnergyMinimizer,&sipCpp))
        {
            int sipRes;

            try
            {
            sipRes = sipCpp->getMaxNumberOfIterations();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_EnergyMinimizer,sipNm_BALL_getMaxNumberOfIterations);

    return NULL;
}


extern "C" {static PyObject *meth_EnergyMinimizer_setMaxNumberOfIterations(PyObject *, PyObject *);}
static PyObject *meth_EnergyMinimizer_setMaxNumberOfIterations(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        int a0;
        EnergyMinimizer *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bi",&sipSelf,sipClass_EnergyMinimizer,&sipCpp,&a0))
        {
            try
            {
            sipCpp->setMaxNumberOfIterations(a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_EnergyMinimizer,sipNm_BALL_setMaxNumberOfIterations);

    return NULL;
}


extern "C" {static PyObject *meth_EnergyMinimizer_setMaxSameEnergy(PyObject *, PyObject *);}
static PyObject *meth_EnergyMinimizer_setMaxSameEnergy(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        int a0;
        EnergyMinimizer *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bi",&sipSelf,sipClass_EnergyMinimizer,&sipCpp,&a0))
        {
            try
            {
            sipCpp->setMaxSameEnergy(a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_EnergyMinimizer,sipNm_BALL_setMaxSameEnergy);

    return NULL;
}


extern "C" {static PyObject *meth_EnergyMinimizer_getMaxSameEnergy(PyObject *, PyObject *);}
static PyObject *meth_EnergyMinimizer_getMaxSameEnergy(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        EnergyMinimizer *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_EnergyMinimizer,&sipCpp))
        {
            int sipRes;

            try
            {
            sipRes = sipCpp->getMaxSameEnergy();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_EnergyMinimizer,sipNm_BALL_getMaxSameEnergy);

    return NULL;
}


extern "C" {static PyObject *meth_EnergyMinimizer_setEnergyOutputFrequency(PyObject *, PyObject *);}
static PyObject *meth_EnergyMinimizer_setEnergyOutputFrequency(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        int a0;
        EnergyMinimizer *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bi",&sipSelf,sipClass_EnergyMinimizer,&sipCpp,&a0))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_EnergyMinimizer,sipNm_BALL_setEnergyOutputFrequency);

    return NULL;
}


extern "C" {static PyObject *meth_EnergyMinimizer_getEnergyOutputFrequency(PyObject *, PyObject *);}
static PyObject *meth_EnergyMinimizer_getEnergyOutputFrequency(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        EnergyMinimizer *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_EnergyMinimizer,&sipCpp))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_EnergyMinimizer,sipNm_BALL_getEnergyOutputFrequency);

    return NULL;
}


extern "C" {static PyObject *meth_EnergyMinimizer_setEnergyDifferenceBound(PyObject *, PyObject *);}
static PyObject *meth_EnergyMinimizer_setEnergyDifferenceBound(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        float a0;
        EnergyMinimizer *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bf",&sipSelf,sipClass_EnergyMinimizer,&sipCpp,&a0))
        {
            try
            {
            sipCpp->setEnergyDifferenceBound(a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_EnergyMinimizer,sipNm_BALL_setEnergyDifferenceBound);

    return NULL;
}


extern "C" {static PyObject *meth_EnergyMinimizer_getEnergyDifferenceBound(PyObject *, PyObject *);}
static PyObject *meth_EnergyMinimizer_getEnergyDifferenceBound(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        EnergyMinimizer *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_EnergyMinimizer,&sipCpp))
        {
            float sipRes;

            try
            {
            sipRes = sipCpp->getEnergyDifferenceBound();
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return PyFloat_FromDouble((double)sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_EnergyMinimizer,sipNm_BALL_getEnergyDifferenceBound);

    return NULL;
}


extern "C" {static PyObject *meth_EnergyMinimizer_setMaxGradient(PyObject *, PyObject *);}
static PyObject *meth_EnergyMinimizer_setMaxGradient(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        float a0;
        EnergyMinimizer *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bf",&sipSelf,sipClass_EnergyMinimizer,&sipCpp,&a0))
        {
            try
            {
            sipCpp->setMaxGradient(a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_EnergyMinimizer,sipNm_BALL_setMaxGradient);

    return NULL;
}


extern "C" {static PyObject *meth_EnergyMinimizer_getMaxGradient(PyObject *, PyObject *);}
static PyObject *meth_EnergyMinimizer_getMaxGradient(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        EnergyMinimizer *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_EnergyMinimizer,&sipCpp))
        {
            float sipRes;

            try
            {
            sipRes = sipCpp->getMaxGradient();
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return PyFloat_FromDouble((double)sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_EnergyMinimizer,sipNm_BALL_getMaxGradient);

    return NULL;
}


extern "C" {static PyObject *meth_EnergyMinimizer_setMaximumDisplacement(PyObject *, PyObject *);}
static PyObject *meth_EnergyMinimizer_setMaximumDisplacement(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        float a0;
        EnergyMinimizer *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bf",&sipSelf,sipClass_EnergyMinimizer,&sipCpp,&a0))
        {
            try
            {
            sipCpp->setMaximumDisplacement(a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_EnergyMinimizer,sipNm_BALL_setMaximumDisplacement);

    return NULL;
}


extern "C" {static PyObject *meth_EnergyMinimizer_getMaximumDisplacement(PyObject *, PyObject *);}
static PyObject *meth_EnergyMinimizer_getMaximumDisplacement(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        EnergyMinimizer *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_EnergyMinimizer,&sipCpp))
        {
            float sipRes;

            try
            {
            sipRes = sipCpp->getMaximumDisplacement();
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return PyFloat_FromDouble((double)sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_EnergyMinimizer,sipNm_BALL_getMaximumDisplacement);

    return NULL;
}


extern "C" {static PyObject *meth_EnergyMinimizer_setSnapShotFrequency(PyObject *, PyObject *);}
static PyObject *meth_EnergyMinimizer_setSnapShotFrequency(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        int a0;
        EnergyMinimizer *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bi",&sipSelf,sipClass_EnergyMinimizer,&sipCpp,&a0))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_EnergyMinimizer,sipNm_BALL_setSnapShotFrequency);

    return NULL;
}


extern "C" {static PyObject *meth_EnergyMinimizer_getSnapShotFrequency(PyObject *, PyObject *);}
static PyObject *meth_EnergyMinimizer_getSnapShotFrequency(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        EnergyMinimizer *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_EnergyMinimizer,&sipCpp))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_EnergyMinimizer,sipNm_BALL_getSnapShotFrequency);

    return NULL;
}


extern "C" {static PyObject *meth_EnergyMinimizer_getForceField(PyObject *, PyObject *);}
static PyObject *meth_EnergyMinimizer_getForceField(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        EnergyMinimizer *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_EnergyMinimizer,&sipCpp))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_EnergyMinimizer,sipNm_BALL_getForceField);

    return NULL;
}


extern "C" {static PyObject *meth_EnergyMinimizer_minimize(PyObject *, PyObject *);}
static PyObject *meth_EnergyMinimizer_minimize(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        int a0;
        bool a1;
        EnergyMinimizer *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bib",&sipSelf,sipClass_EnergyMinimizer,&sipCpp,&a0,&a1))
        {
            bool sipRes;

            try
            {
            sipRes = (sipSelfWasArg ? sipCpp->EnergyMinimizer::minimize(a0,a1) : sipCpp->minimize(a0,a1));
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_EnergyMinimizer,sipNm_BALL_minimize);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_EnergyMinimizer(void *, sipWrapperType *);}
static void *cast_EnergyMinimizer(void *ptr,sipWrapperType *targetClass)
{
    if (targetClass == sipClass_EnergyMinimizer)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_EnergyMinimizer(void *, int);}
static void release_EnergyMinimizer(void *ptr,int state)
{
    if (state & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipEnergyMinimizer *>(ptr);
    else
        delete reinterpret_cast<EnergyMinimizer *>(ptr);
}


extern "C" {static void dealloc_EnergyMinimizer(sipWrapper *);}
static void dealloc_EnergyMinimizer(sipWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipEnergyMinimizer *>(sipSelf->u.cppPtr)->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_EnergyMinimizer(sipSelf->u.cppPtr,sipSelf->flags);
    }
}


extern "C" {static void *init_EnergyMinimizer(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_EnergyMinimizer(sipWrapper *sipSelf,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    sipEnergyMinimizer *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            try
            {
            sipCpp = new sipEnergyMinimizer();
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
            sipCpp = new sipEnergyMinimizer(*a0);
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
        Options * a1;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JAJA",sipClass_ForceField,&a0,sipClass_Options,&a1))
        {
            try
            {
            sipCpp = new sipEnergyMinimizer(*a0,*a1);
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
        const EnergyMinimizer * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_EnergyMinimizer,&a0))
        {
            try
            {
            sipCpp = new sipEnergyMinimizer(*a0);
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


extern "C" {static PyObject *var_EnergyMinimizer_options(PyObject *, PyObject *);}
static PyObject *var_EnergyMinimizer_options(PyObject *sipSelf,PyObject *sipPy)
{
    int sipIsErr = 0;
   Options *sipVal;
    EnergyMinimizer *sipCpp = reinterpret_cast<EnergyMinimizer *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_EnergyMinimizer));

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

PyMethodDef variables_EnergyMinimizer[] = {
    {sipNm_BALL_options, var_EnergyMinimizer_options, 0, NULL},
    {0, 0, 0, 0}
};


extern "C" {static void *forceConvertTo_EnergyMinimizer(PyObject *, int *);}
static void *forceConvertTo_EnergyMinimizer(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_EnergyMinimizer))
        return sipConvertToCpp(valobj,sipClass_EnergyMinimizer,iserrp);

    sipBadClass(sipNm_BALL_EnergyMinimizer);

    *iserrp = 1;

    return NULL;
}


static PyMethodDef methods_EnergyMinimizer[] = {
    {sipNm_BALL_findStep, meth_EnergyMinimizer_findStep, METH_VARARGS, NULL},
    {sipNm_BALL_finishIteration, meth_EnergyMinimizer_finishIteration, METH_VARARGS, NULL},
    {sipNm_BALL_getDirection, meth_EnergyMinimizer_getDirection, METH_VARARGS, NULL},
    {sipNm_BALL_getEnergy, meth_EnergyMinimizer_getEnergy, METH_VARARGS, NULL},
    {sipNm_BALL_getEnergyDifferenceBound, meth_EnergyMinimizer_getEnergyDifferenceBound, METH_VARARGS, NULL},
    {sipNm_BALL_getEnergyOutputFrequency, meth_EnergyMinimizer_getEnergyOutputFrequency, METH_VARARGS, NULL},
    {sipNm_BALL_getForceField, meth_EnergyMinimizer_getForceField, METH_VARARGS, NULL},
    {sipNm_BALL_getGradient, meth_EnergyMinimizer_getGradient, METH_VARARGS, NULL},
    {sipNm_BALL_getInitialEnergy, meth_EnergyMinimizer_getInitialEnergy, METH_VARARGS, NULL},
    {sipNm_BALL_getInitialGradient, meth_EnergyMinimizer_getInitialGradient, METH_VARARGS, NULL},
    {sipNm_BALL_getMaxGradient, meth_EnergyMinimizer_getMaxGradient, METH_VARARGS, NULL},
    {sipNm_BALL_getMaxNumberOfIterations, meth_EnergyMinimizer_getMaxNumberOfIterations, METH_VARARGS, NULL},
    {sipNm_BALL_getMaxSameEnergy, meth_EnergyMinimizer_getMaxSameEnergy, METH_VARARGS, NULL},
    {sipNm_BALL_getMaximumDisplacement, meth_EnergyMinimizer_getMaximumDisplacement, METH_VARARGS, NULL},
    {sipNm_BALL_getNumberOfIterations, meth_EnergyMinimizer_getNumberOfIterations, METH_VARARGS, NULL},
    {sipNm_BALL_getSnapShotFrequency, meth_EnergyMinimizer_getSnapShotFrequency, METH_VARARGS, NULL},
    {sipNm_BALL_isConverged, meth_EnergyMinimizer_isConverged, METH_VARARGS, NULL},
    {sipNm_BALL_isValid, meth_EnergyMinimizer_isValid, METH_VARARGS, NULL},
    {sipNm_BALL_minimize, meth_EnergyMinimizer_minimize, METH_VARARGS, NULL},
    {sipNm_BALL_printEnergy, meth_EnergyMinimizer_printEnergy, METH_VARARGS, NULL},
    {sipNm_BALL_setEnergyDifferenceBound, meth_EnergyMinimizer_setEnergyDifferenceBound, METH_VARARGS, NULL},
    {sipNm_BALL_setEnergyOutputFrequency, meth_EnergyMinimizer_setEnergyOutputFrequency, METH_VARARGS, NULL},
    {sipNm_BALL_setMaxGradient, meth_EnergyMinimizer_setMaxGradient, METH_VARARGS, NULL},
    {sipNm_BALL_setMaxNumberOfIterations, meth_EnergyMinimizer_setMaxNumberOfIterations, METH_VARARGS, NULL},
    {sipNm_BALL_setMaxSameEnergy, meth_EnergyMinimizer_setMaxSameEnergy, METH_VARARGS, NULL},
    {sipNm_BALL_setMaximumDisplacement, meth_EnergyMinimizer_setMaximumDisplacement, METH_VARARGS, NULL},
    {sipNm_BALL_setNumberOfIterations, meth_EnergyMinimizer_setNumberOfIterations, METH_VARARGS, NULL},
    {sipNm_BALL_setSnapShotFrequency, meth_EnergyMinimizer_setSnapShotFrequency, METH_VARARGS, NULL},
    {sipNm_BALL_setup, meth_EnergyMinimizer_setup, METH_VARARGS, NULL},
    {sipNm_BALL_specificSetup, meth_EnergyMinimizer_specificSetup, METH_VARARGS, NULL},
    {sipNm_BALL_takeSnapShot, meth_EnergyMinimizer_takeSnapShot, METH_VARARGS, NULL},
    {sipNm_BALL_updateDirection, meth_EnergyMinimizer_updateDirection, METH_VARARGS, NULL},
    {sipNm_BALL_updateEnergy, meth_EnergyMinimizer_updateEnergy, METH_VARARGS, NULL},
    {sipNm_BALL_updateForces, meth_EnergyMinimizer_updateForces, METH_VARARGS, NULL}
};


sipTypeDef sipType_BALL_EnergyMinimizer = {
    0,
    0,
    "BALL.EnergyMinimizer",
    0,
    {0, 0, 1},
    0,
    0,
    34, methods_EnergyMinimizer,
    0, 0,
    variables_EnergyMinimizer,
    init_EnergyMinimizer,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_EnergyMinimizer,
    cast_EnergyMinimizer,
    release_EnergyMinimizer,
    forceConvertTo_EnergyMinimizer,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
