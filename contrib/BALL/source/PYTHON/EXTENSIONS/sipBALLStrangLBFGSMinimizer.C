/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLStrangLBFGSMinimizer.h"

#include "sipBALLEnergyMinimizer.h"
#include "sipBALLOptions.h"
#include "sipBALLForceField.h"
#include "sipBALLSnapShotManager.h"
#include "sipBALLStrangLBFGSMinimizer.h"
#include "sipBALLGradient.h"


sipStrangLBFGSMinimizer::sipStrangLBFGSMinimizer(): StrangLBFGSMinimizer(), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,10);
}

sipStrangLBFGSMinimizer::sipStrangLBFGSMinimizer(ForceField& a0): StrangLBFGSMinimizer(a0), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,10);
}

sipStrangLBFGSMinimizer::sipStrangLBFGSMinimizer(ForceField& a0,SnapShotManager *a1): StrangLBFGSMinimizer(a0,a1), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,10);
}

sipStrangLBFGSMinimizer::sipStrangLBFGSMinimizer(ForceField& a0,SnapShotManager *a1,const Options& a2): StrangLBFGSMinimizer(a0,a1,a2), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,10);
}

sipStrangLBFGSMinimizer::sipStrangLBFGSMinimizer(ForceField& a0,const Options& a1): StrangLBFGSMinimizer(a0,a1), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,10);
}

sipStrangLBFGSMinimizer::sipStrangLBFGSMinimizer(const StrangLBFGSMinimizer& a0): StrangLBFGSMinimizer(a0), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,10);
}

sipStrangLBFGSMinimizer::~sipStrangLBFGSMinimizer()
{
    sipCommonDtor(sipPySelf);
}

bool sipStrangLBFGSMinimizer::specificSetup()
{
    extern bool sipVH_BALL_4(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipNm_BALL_specificSetup);

    if (!meth)
        return StrangLBFGSMinimizer::specificSetup();

    return sipVH_BALL_4(sipGILState,meth);
}

double sipStrangLBFGSMinimizer::findStep()
{
    extern double sipVH_BALL_30(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,NULL,sipNm_BALL_findStep);

    if (!meth)
        return StrangLBFGSMinimizer::findStep();

    return sipVH_BALL_30(sipGILState,meth);
}

void sipStrangLBFGSMinimizer::updateDirection()
{
    extern void sipVH_BALL_0(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[2],sipPySelf,NULL,sipNm_BALL_updateDirection);

    if (!meth)
    {
        StrangLBFGSMinimizer::updateDirection();
        return;
    }

    sipVH_BALL_0(sipGILState,meth);
}

bool sipStrangLBFGSMinimizer::minimize(int a0,bool a1)
{
    extern bool sipVH_BALL_29(sip_gilstate_t,PyObject *,int,bool);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[3],sipPySelf,NULL,sipNm_BALL_minimize);

    if (!meth)
        return StrangLBFGSMinimizer::minimize(a0,a1);

    return sipVH_BALL_29(sipGILState,meth,a0,a1);
}

bool sipStrangLBFGSMinimizer::isConverged() const
{
    extern bool sipVH_BALL_4(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<sipMethodCache *>(&sipPyMethods[4]),sipPySelf,NULL,sipNm_BALL_isConverged);

    if (!meth)
        return EnergyMinimizer::isConverged();

    return sipVH_BALL_4(sipGILState,meth);
}

double sipStrangLBFGSMinimizer::updateEnergy()
{
    extern double sipVH_BALL_30(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[5],sipPySelf,NULL,sipNm_BALL_updateEnergy);

    if (!meth)
        return EnergyMinimizer::updateEnergy();

    return sipVH_BALL_30(sipGILState,meth);
}

void sipStrangLBFGSMinimizer::updateForces()
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

void sipStrangLBFGSMinimizer::printEnergy() const
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

void sipStrangLBFGSMinimizer::takeSnapShot() const
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

void sipStrangLBFGSMinimizer::finishIteration()
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


extern "C" {static PyObject *meth_StrangLBFGSMinimizer_specificSetup(PyObject *, PyObject *);}
static PyObject *meth_StrangLBFGSMinimizer_specificSetup(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        StrangLBFGSMinimizer *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_StrangLBFGSMinimizer,&sipCpp))
        {
            bool sipRes;

            try
            {
            sipRes = (sipSelfWasArg ? sipCpp->StrangLBFGSMinimizer::specificSetup() : sipCpp->specificSetup());
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_StrangLBFGSMinimizer,sipNm_BALL_specificSetup);

    return NULL;
}


extern "C" {static PyObject *meth_StrangLBFGSMinimizer_setMaxNumOfStoredVectPairs(PyObject *, PyObject *);}
static PyObject *meth_StrangLBFGSMinimizer_setMaxNumOfStoredVectPairs(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        int a0;
        StrangLBFGSMinimizer *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bi",&sipSelf,sipClass_StrangLBFGSMinimizer,&sipCpp,&a0))
        {
            try
            {
            sipCpp->setMaxNumOfStoredVectPairs(a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_StrangLBFGSMinimizer,sipNm_BALL_setMaxNumOfStoredVectPairs);

    return NULL;
}


extern "C" {static PyObject *meth_StrangLBFGSMinimizer_getMaxNumOfStoredVectPairs(PyObject *, PyObject *);}
static PyObject *meth_StrangLBFGSMinimizer_getMaxNumOfStoredVectPairs(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        StrangLBFGSMinimizer *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_StrangLBFGSMinimizer,&sipCpp))
        {
            int sipRes;

            try
            {
            sipRes = sipCpp->getMaxNumOfStoredVectPairs();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_StrangLBFGSMinimizer,sipNm_BALL_getMaxNumOfStoredVectPairs);

    return NULL;
}


extern "C" {static PyObject *meth_StrangLBFGSMinimizer_setImprovedFlag(PyObject *, PyObject *);}
static PyObject *meth_StrangLBFGSMinimizer_setImprovedFlag(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        bool a0;
        StrangLBFGSMinimizer *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bb",&sipSelf,sipClass_StrangLBFGSMinimizer,&sipCpp,&a0))
        {
            try
            {
            sipCpp->setImprovedFlag(a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_StrangLBFGSMinimizer,sipNm_BALL_setImprovedFlag);

    return NULL;
}


extern "C" {static PyObject *meth_StrangLBFGSMinimizer_getImprovedFlag(PyObject *, PyObject *);}
static PyObject *meth_StrangLBFGSMinimizer_getImprovedFlag(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        StrangLBFGSMinimizer *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_StrangLBFGSMinimizer,&sipCpp))
        {
            bool sipRes;

            try
            {
            sipRes = sipCpp->getImprovedFlag();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_StrangLBFGSMinimizer,sipNm_BALL_getImprovedFlag);

    return NULL;
}


extern "C" {static PyObject *meth_StrangLBFGSMinimizer_findStep(PyObject *, PyObject *);}
static PyObject *meth_StrangLBFGSMinimizer_findStep(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        StrangLBFGSMinimizer *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_StrangLBFGSMinimizer,&sipCpp))
        {
            double sipRes;

            try
            {
            sipRes = (sipSelfWasArg ? sipCpp->StrangLBFGSMinimizer::findStep() : sipCpp->findStep());
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_StrangLBFGSMinimizer,sipNm_BALL_findStep);

    return NULL;
}


extern "C" {static PyObject *meth_StrangLBFGSMinimizer_updateDirection(PyObject *, PyObject *);}
static PyObject *meth_StrangLBFGSMinimizer_updateDirection(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        StrangLBFGSMinimizer *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_StrangLBFGSMinimizer,&sipCpp))
        {
            try
            {
            (sipSelfWasArg ? sipCpp->StrangLBFGSMinimizer::updateDirection() : sipCpp->updateDirection());
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_StrangLBFGSMinimizer,sipNm_BALL_updateDirection);

    return NULL;
}


extern "C" {static PyObject *meth_StrangLBFGSMinimizer_minimize(PyObject *, PyObject *);}
static PyObject *meth_StrangLBFGSMinimizer_minimize(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        int a0 = 0;
        bool a1 = 0;
        StrangLBFGSMinimizer *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B|ib",&sipSelf,sipClass_StrangLBFGSMinimizer,&sipCpp,&a0,&a1))
        {
            bool sipRes;

            try
            {
            sipRes = (sipSelfWasArg ? sipCpp->StrangLBFGSMinimizer::minimize(a0,a1) : sipCpp->minimize(a0,a1));
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_StrangLBFGSMinimizer,sipNm_BALL_minimize);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_StrangLBFGSMinimizer(void *, sipWrapperType *);}
static void *cast_StrangLBFGSMinimizer(void *ptr,sipWrapperType *targetClass)
{
    void *res;

    if (targetClass == sipClass_StrangLBFGSMinimizer)
        return ptr;

    if ((res = sipCast_EnergyMinimizer((EnergyMinimizer *)(StrangLBFGSMinimizer *)ptr,targetClass)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_StrangLBFGSMinimizer(void *, int);}
static void release_StrangLBFGSMinimizer(void *ptr,int state)
{
    if (state & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipStrangLBFGSMinimizer *>(ptr);
    else
        delete reinterpret_cast<StrangLBFGSMinimizer *>(ptr);
}


extern "C" {static void dealloc_StrangLBFGSMinimizer(sipWrapper *);}
static void dealloc_StrangLBFGSMinimizer(sipWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipStrangLBFGSMinimizer *>(sipSelf->u.cppPtr)->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_StrangLBFGSMinimizer(sipSelf->u.cppPtr,sipSelf->flags);
    }
}


extern "C" {static void *init_StrangLBFGSMinimizer(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_StrangLBFGSMinimizer(sipWrapper *sipSelf,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    sipStrangLBFGSMinimizer *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            try
            {
            sipCpp = new sipStrangLBFGSMinimizer();
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
            sipCpp = new sipStrangLBFGSMinimizer(*a0);
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
            sipCpp = new sipStrangLBFGSMinimizer(*a0,a1);
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
            sipCpp = new sipStrangLBFGSMinimizer(*a0,a1,*a2);
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
            sipCpp = new sipStrangLBFGSMinimizer(*a0,*a1);
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
        const StrangLBFGSMinimizer * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_StrangLBFGSMinimizer,&a0))
        {
            try
            {
            sipCpp = new sipStrangLBFGSMinimizer(*a0);
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


extern "C" {static PyObject *var_StrangLBFGSMinimizer_options(PyObject *, PyObject *);}
static PyObject *var_StrangLBFGSMinimizer_options(PyObject *sipSelf,PyObject *sipPy)
{
    int sipIsErr = 0;
   Options *sipVal;
    StrangLBFGSMinimizer *sipCpp = reinterpret_cast<StrangLBFGSMinimizer *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_StrangLBFGSMinimizer));

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

PyMethodDef variables_StrangLBFGSMinimizer[] = {
    {sipNm_BALL_options, var_StrangLBFGSMinimizer_options, 0, NULL},
    {0, 0, 0, 0}
};


extern "C" {static void *forceConvertTo_StrangLBFGSMinimizer(PyObject *, int *);}
static void *forceConvertTo_StrangLBFGSMinimizer(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_StrangLBFGSMinimizer))
        return sipConvertToCpp(valobj,sipClass_StrangLBFGSMinimizer,iserrp);

    sipBadClass(sipNm_BALL_StrangLBFGSMinimizer);

    *iserrp = 1;

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedClassDef supers_StrangLBFGSMinimizer[] = {{92, 255, 1}};


static PyMethodDef methods_StrangLBFGSMinimizer[] = {
    {sipNm_BALL_findStep, meth_StrangLBFGSMinimizer_findStep, METH_VARARGS, NULL},
    {sipNm_BALL_getImprovedFlag, meth_StrangLBFGSMinimizer_getImprovedFlag, METH_VARARGS, NULL},
    {sipNm_BALL_getMaxNumOfStoredVectPairs, meth_StrangLBFGSMinimizer_getMaxNumOfStoredVectPairs, METH_VARARGS, NULL},
    {sipNm_BALL_minimize, meth_StrangLBFGSMinimizer_minimize, METH_VARARGS, NULL},
    {sipNm_BALL_setImprovedFlag, meth_StrangLBFGSMinimizer_setImprovedFlag, METH_VARARGS, NULL},
    {sipNm_BALL_setMaxNumOfStoredVectPairs, meth_StrangLBFGSMinimizer_setMaxNumOfStoredVectPairs, METH_VARARGS, NULL},
    {sipNm_BALL_specificSetup, meth_StrangLBFGSMinimizer_specificSetup, METH_VARARGS, NULL},
    {sipNm_BALL_updateDirection, meth_StrangLBFGSMinimizer_updateDirection, METH_VARARGS, NULL}
};


sipTypeDef sipType_BALL_StrangLBFGSMinimizer = {
    0,
    0,
    "BALL.StrangLBFGSMinimizer",
    0,
    {0, 0, 1},
    supers_StrangLBFGSMinimizer,
    0,
    8, methods_StrangLBFGSMinimizer,
    0, 0,
    variables_StrangLBFGSMinimizer,
    init_StrangLBFGSMinimizer,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_StrangLBFGSMinimizer,
    cast_StrangLBFGSMinimizer,
    release_StrangLBFGSMinimizer,
    forceConvertTo_StrangLBFGSMinimizer,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
