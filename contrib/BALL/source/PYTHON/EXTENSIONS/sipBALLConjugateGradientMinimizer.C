/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLConjugateGradientMinimizer.h"

#include "sipBALLEnergyMinimizer.h"
#include "sipBALLForceField.h"
#include "sipBALLSnapShotManager.h"
#include "sipBALLOptions.h"
#include "sipBALLConjugateGradientMinimizer.h"
#include "sipBALLGradient.h"


sipConjugateGradientMinimizer::sipConjugateGradientMinimizer(): ConjugateGradientMinimizer(), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,10);
}

sipConjugateGradientMinimizer::sipConjugateGradientMinimizer(ForceField& a0): ConjugateGradientMinimizer(a0), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,10);
}

sipConjugateGradientMinimizer::sipConjugateGradientMinimizer(ForceField& a0,SnapShotManager *a1): ConjugateGradientMinimizer(a0,a1), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,10);
}

sipConjugateGradientMinimizer::sipConjugateGradientMinimizer(ForceField& a0,SnapShotManager *a1,const Options& a2): ConjugateGradientMinimizer(a0,a1,a2), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,10);
}

sipConjugateGradientMinimizer::sipConjugateGradientMinimizer(ForceField& a0,const Options& a1): ConjugateGradientMinimizer(a0,a1), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,10);
}

sipConjugateGradientMinimizer::sipConjugateGradientMinimizer(const ConjugateGradientMinimizer& a0): ConjugateGradientMinimizer(a0), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,10);
}

sipConjugateGradientMinimizer::~sipConjugateGradientMinimizer()
{
    sipCommonDtor(sipPySelf);
}

bool sipConjugateGradientMinimizer::specificSetup()
{
    extern bool sipVH_BALL_4(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipNm_BALL_specificSetup);

    if (!meth)
        return ConjugateGradientMinimizer::specificSetup();

    return sipVH_BALL_4(sipGILState,meth);
}

double sipConjugateGradientMinimizer::findStep()
{
    extern double sipVH_BALL_30(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,NULL,sipNm_BALL_findStep);

    if (!meth)
        return ConjugateGradientMinimizer::findStep();

    return sipVH_BALL_30(sipGILState,meth);
}

void sipConjugateGradientMinimizer::updateDirection()
{
    extern void sipVH_BALL_0(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[2],sipPySelf,NULL,sipNm_BALL_updateDirection);

    if (!meth)
    {
        ConjugateGradientMinimizer::updateDirection();
        return;
    }

    sipVH_BALL_0(sipGILState,meth);
}

bool sipConjugateGradientMinimizer::minimize(int a0,bool a1)
{
    extern bool sipVH_BALL_29(sip_gilstate_t,PyObject *,int,bool);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[3],sipPySelf,NULL,sipNm_BALL_minimize);

    if (!meth)
        return ConjugateGradientMinimizer::minimize(a0,a1);

    return sipVH_BALL_29(sipGILState,meth,a0,a1);
}

bool sipConjugateGradientMinimizer::isConverged() const
{
    extern bool sipVH_BALL_4(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<sipMethodCache *>(&sipPyMethods[4]),sipPySelf,NULL,sipNm_BALL_isConverged);

    if (!meth)
        return EnergyMinimizer::isConverged();

    return sipVH_BALL_4(sipGILState,meth);
}

double sipConjugateGradientMinimizer::updateEnergy()
{
    extern double sipVH_BALL_30(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[5],sipPySelf,NULL,sipNm_BALL_updateEnergy);

    if (!meth)
        return EnergyMinimizer::updateEnergy();

    return sipVH_BALL_30(sipGILState,meth);
}

void sipConjugateGradientMinimizer::updateForces()
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

void sipConjugateGradientMinimizer::printEnergy() const
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

void sipConjugateGradientMinimizer::takeSnapShot() const
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

void sipConjugateGradientMinimizer::finishIteration()
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


extern "C" {static PyObject *meth_ConjugateGradientMinimizer_specificSetup(PyObject *, PyObject *);}
static PyObject *meth_ConjugateGradientMinimizer_specificSetup(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        ConjugateGradientMinimizer *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_ConjugateGradientMinimizer,&sipCpp))
        {
            bool sipRes;

            try
            {
            sipRes = (sipSelfWasArg ? sipCpp->ConjugateGradientMinimizer::specificSetup() : sipCpp->specificSetup());
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_ConjugateGradientMinimizer,sipNm_BALL_specificSetup);

    return NULL;
}


extern "C" {static PyObject *meth_ConjugateGradientMinimizer_setUpdateMethod(PyObject *, PyObject *);}
static PyObject *meth_ConjugateGradientMinimizer_setUpdateMethod(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        ConjugateGradientMinimizer::UpdateMethod a0;
        ConjugateGradientMinimizer *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BE",&sipSelf,sipClass_ConjugateGradientMinimizer,&sipCpp,sipEnum_ConjugateGradientMinimizer_UpdateMethod,&a0))
        {
            try
            {
            sipCpp->setUpdateMethod(a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_ConjugateGradientMinimizer,sipNm_BALL_setUpdateMethod);

    return NULL;
}


extern "C" {static PyObject *meth_ConjugateGradientMinimizer_getUpdateMethod(PyObject *, PyObject *);}
static PyObject *meth_ConjugateGradientMinimizer_getUpdateMethod(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        ConjugateGradientMinimizer *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_ConjugateGradientMinimizer,&sipCpp))
        {
            ConjugateGradientMinimizer::UpdateMethod sipRes;

            try
            {
            sipRes = sipCpp->getUpdateMethod();
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return sipConvertFromNamedEnum(sipRes,sipEnum_ConjugateGradientMinimizer_UpdateMethod);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_ConjugateGradientMinimizer,sipNm_BALL_getUpdateMethod);

    return NULL;
}


extern "C" {static PyObject *meth_ConjugateGradientMinimizer_findStep(PyObject *, PyObject *);}
static PyObject *meth_ConjugateGradientMinimizer_findStep(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        ConjugateGradientMinimizer *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_ConjugateGradientMinimizer,&sipCpp))
        {
            double sipRes;

            try
            {
            sipRes = (sipSelfWasArg ? sipCpp->ConjugateGradientMinimizer::findStep() : sipCpp->findStep());
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_ConjugateGradientMinimizer,sipNm_BALL_findStep);

    return NULL;
}


extern "C" {static PyObject *meth_ConjugateGradientMinimizer_updateDirection(PyObject *, PyObject *);}
static PyObject *meth_ConjugateGradientMinimizer_updateDirection(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        ConjugateGradientMinimizer *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_ConjugateGradientMinimizer,&sipCpp))
        {
            try
            {
            (sipSelfWasArg ? sipCpp->ConjugateGradientMinimizer::updateDirection() : sipCpp->updateDirection());
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_ConjugateGradientMinimizer,sipNm_BALL_updateDirection);

    return NULL;
}


extern "C" {static PyObject *meth_ConjugateGradientMinimizer_minimize(PyObject *, PyObject *);}
static PyObject *meth_ConjugateGradientMinimizer_minimize(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        int a0 = 0;
        bool a1 = 0;
        ConjugateGradientMinimizer *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B|ib",&sipSelf,sipClass_ConjugateGradientMinimizer,&sipCpp,&a0,&a1))
        {
            bool sipRes;

            try
            {
            sipRes = (sipSelfWasArg ? sipCpp->ConjugateGradientMinimizer::minimize(a0,a1) : sipCpp->minimize(a0,a1));
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_ConjugateGradientMinimizer,sipNm_BALL_minimize);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_ConjugateGradientMinimizer(void *, sipWrapperType *);}
static void *cast_ConjugateGradientMinimizer(void *ptr,sipWrapperType *targetClass)
{
    void *res;

    if (targetClass == sipClass_ConjugateGradientMinimizer)
        return ptr;

    if ((res = sipCast_EnergyMinimizer((EnergyMinimizer *)(ConjugateGradientMinimizer *)ptr,targetClass)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_ConjugateGradientMinimizer(void *, int);}
static void release_ConjugateGradientMinimizer(void *ptr,int state)
{
    if (state & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipConjugateGradientMinimizer *>(ptr);
    else
        delete reinterpret_cast<ConjugateGradientMinimizer *>(ptr);
}


extern "C" {static void dealloc_ConjugateGradientMinimizer(sipWrapper *);}
static void dealloc_ConjugateGradientMinimizer(sipWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipConjugateGradientMinimizer *>(sipSelf->u.cppPtr)->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_ConjugateGradientMinimizer(sipSelf->u.cppPtr,sipSelf->flags);
    }
}


extern "C" {static void *init_ConjugateGradientMinimizer(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_ConjugateGradientMinimizer(sipWrapper *sipSelf,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    sipConjugateGradientMinimizer *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            try
            {
            sipCpp = new sipConjugateGradientMinimizer();
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
            sipCpp = new sipConjugateGradientMinimizer(*a0);
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
            sipCpp = new sipConjugateGradientMinimizer(*a0,a1);
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
            sipCpp = new sipConjugateGradientMinimizer(*a0,a1,*a2);
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
            sipCpp = new sipConjugateGradientMinimizer(*a0,*a1);
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
        const ConjugateGradientMinimizer * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_ConjugateGradientMinimizer,&a0))
        {
            try
            {
            sipCpp = new sipConjugateGradientMinimizer(*a0);
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


extern "C" {static void *forceConvertTo_ConjugateGradientMinimizer(PyObject *, int *);}
static void *forceConvertTo_ConjugateGradientMinimizer(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_ConjugateGradientMinimizer))
        return sipConvertToCpp(valobj,sipClass_ConjugateGradientMinimizer,iserrp);

    sipBadClass(sipNm_BALL_ConjugateGradientMinimizer);

    *iserrp = 1;

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedClassDef supers_ConjugateGradientMinimizer[] = {{92, 255, 1}};


static PyMethodDef methods_ConjugateGradientMinimizer[] = {
    {sipNm_BALL_findStep, meth_ConjugateGradientMinimizer_findStep, METH_VARARGS, NULL},
    {sipNm_BALL_getUpdateMethod, meth_ConjugateGradientMinimizer_getUpdateMethod, METH_VARARGS, NULL},
    {sipNm_BALL_minimize, meth_ConjugateGradientMinimizer_minimize, METH_VARARGS, NULL},
    {sipNm_BALL_setUpdateMethod, meth_ConjugateGradientMinimizer_setUpdateMethod, METH_VARARGS, NULL},
    {sipNm_BALL_specificSetup, meth_ConjugateGradientMinimizer_specificSetup, METH_VARARGS, NULL},
    {sipNm_BALL_updateDirection, meth_ConjugateGradientMinimizer_updateDirection, METH_VARARGS, NULL}
};

static sipEnumMemberDef enummembers_ConjugateGradientMinimizer[] = {
    {sipNm_BALL_FLETCHER_REEVES, ConjugateGradientMinimizer::FLETCHER_REEVES, 19},
    {sipNm_BALL_POLAK_RIBIERE, ConjugateGradientMinimizer::POLAK_RIBIERE, 19},
    {sipNm_BALL_SHANNO, ConjugateGradientMinimizer::SHANNO, 19},
};


sipTypeDef sipType_BALL_ConjugateGradientMinimizer = {
    0,
    0,
    "BALL.ConjugateGradientMinimizer",
    0,
    {0, 0, 1},
    supers_ConjugateGradientMinimizer,
    0,
    6, methods_ConjugateGradientMinimizer,
    3, enummembers_ConjugateGradientMinimizer,
    0,
    init_ConjugateGradientMinimizer,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_ConjugateGradientMinimizer,
    cast_ConjugateGradientMinimizer,
    release_ConjugateGradientMinimizer,
    forceConvertTo_ConjugateGradientMinimizer,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
