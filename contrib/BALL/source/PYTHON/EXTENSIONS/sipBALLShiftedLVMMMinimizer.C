/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLShiftedLVMMMinimizer.h"

#include "sipBALLEnergyMinimizer.h"
#include "sipBALLForceField.h"
#include "sipBALLSnapShotManager.h"
#include "sipBALLOptions.h"
#include "sipBALLShiftedLVMMMinimizer.h"
#include "sipBALLGradient.h"


sipShiftedLVMMMinimizer::sipShiftedLVMMMinimizer(): ShiftedLVMMMinimizer(), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,10);
}

sipShiftedLVMMMinimizer::sipShiftedLVMMMinimizer(ForceField& a0): ShiftedLVMMMinimizer(a0), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,10);
}

sipShiftedLVMMMinimizer::sipShiftedLVMMMinimizer(ForceField& a0,SnapShotManager *a1): ShiftedLVMMMinimizer(a0,a1), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,10);
}

sipShiftedLVMMMinimizer::sipShiftedLVMMMinimizer(ForceField& a0,SnapShotManager *a1,const Options& a2): ShiftedLVMMMinimizer(a0,a1,a2), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,10);
}

sipShiftedLVMMMinimizer::sipShiftedLVMMMinimizer(ForceField& a0,const Options& a1): ShiftedLVMMMinimizer(a0,a1), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,10);
}

sipShiftedLVMMMinimizer::sipShiftedLVMMMinimizer(const ShiftedLVMMMinimizer& a0): ShiftedLVMMMinimizer(a0), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,10);
}

sipShiftedLVMMMinimizer::~sipShiftedLVMMMinimizer()
{
    sipCommonDtor(sipPySelf);
}

bool sipShiftedLVMMMinimizer::specificSetup()
{
    extern bool sipVH_BALL_4(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipNm_BALL_specificSetup);

    if (!meth)
        return ShiftedLVMMMinimizer::specificSetup();

    return sipVH_BALL_4(sipGILState,meth);
}

double sipShiftedLVMMMinimizer::findStep()
{
    extern double sipVH_BALL_30(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,NULL,sipNm_BALL_findStep);

    if (!meth)
        return ShiftedLVMMMinimizer::findStep();

    return sipVH_BALL_30(sipGILState,meth);
}

void sipShiftedLVMMMinimizer::updateDirection()
{
    extern void sipVH_BALL_0(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[2],sipPySelf,NULL,sipNm_BALL_updateDirection);

    if (!meth)
    {
        ShiftedLVMMMinimizer::updateDirection();
        return;
    }

    sipVH_BALL_0(sipGILState,meth);
}

bool sipShiftedLVMMMinimizer::minimize(int a0,bool a1)
{
    extern bool sipVH_BALL_29(sip_gilstate_t,PyObject *,int,bool);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[3],sipPySelf,NULL,sipNm_BALL_minimize);

    if (!meth)
        return ShiftedLVMMMinimizer::minimize(a0,a1);

    return sipVH_BALL_29(sipGILState,meth,a0,a1);
}

bool sipShiftedLVMMMinimizer::isConverged() const
{
    extern bool sipVH_BALL_4(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<sipMethodCache *>(&sipPyMethods[4]),sipPySelf,NULL,sipNm_BALL_isConverged);

    if (!meth)
        return EnergyMinimizer::isConverged();

    return sipVH_BALL_4(sipGILState,meth);
}

double sipShiftedLVMMMinimizer::updateEnergy()
{
    extern double sipVH_BALL_30(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[5],sipPySelf,NULL,sipNm_BALL_updateEnergy);

    if (!meth)
        return EnergyMinimizer::updateEnergy();

    return sipVH_BALL_30(sipGILState,meth);
}

void sipShiftedLVMMMinimizer::updateForces()
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

void sipShiftedLVMMMinimizer::printEnergy() const
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

void sipShiftedLVMMMinimizer::takeSnapShot() const
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

void sipShiftedLVMMMinimizer::finishIteration()
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


extern "C" {static PyObject *meth_ShiftedLVMMMinimizer_specificSetup(PyObject *, PyObject *);}
static PyObject *meth_ShiftedLVMMMinimizer_specificSetup(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        ShiftedLVMMMinimizer *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_ShiftedLVMMMinimizer,&sipCpp))
        {
            bool sipRes;

            try
            {
            sipRes = (sipSelfWasArg ? sipCpp->ShiftedLVMMMinimizer::specificSetup() : sipCpp->specificSetup());
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_ShiftedLVMMMinimizer,sipNm_BALL_specificSetup);

    return NULL;
}


extern "C" {static PyObject *meth_ShiftedLVMMMinimizer_setUpdateMethod(PyObject *, PyObject *);}
static PyObject *meth_ShiftedLVMMMinimizer_setUpdateMethod(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        ShiftedLVMMMinimizer::UpdateMethod a0;
        ShiftedLVMMMinimizer *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BE",&sipSelf,sipClass_ShiftedLVMMMinimizer,&sipCpp,sipEnum_ShiftedLVMMMinimizer_UpdateMethod,&a0))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_ShiftedLVMMMinimizer,sipNm_BALL_setUpdateMethod);

    return NULL;
}


extern "C" {static PyObject *meth_ShiftedLVMMMinimizer_getUpdateMethod(PyObject *, PyObject *);}
static PyObject *meth_ShiftedLVMMMinimizer_getUpdateMethod(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        ShiftedLVMMMinimizer *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_ShiftedLVMMMinimizer,&sipCpp))
        {
            ShiftedLVMMMinimizer::UpdateMethod sipRes;

            try
            {
            sipRes = sipCpp->getUpdateMethod();
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return sipConvertFromNamedEnum(sipRes,sipEnum_ShiftedLVMMMinimizer_UpdateMethod);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_ShiftedLVMMMinimizer,sipNm_BALL_getUpdateMethod);

    return NULL;
}


extern "C" {static PyObject *meth_ShiftedLVMMMinimizer_setCorrectionParameter(PyObject *, PyObject *);}
static PyObject *meth_ShiftedLVMMMinimizer_setCorrectionParameter(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        ShiftedLVMMMinimizer::CorrectionParameter a0;
        ShiftedLVMMMinimizer *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BE",&sipSelf,sipClass_ShiftedLVMMMinimizer,&sipCpp,sipEnum_ShiftedLVMMMinimizer_CorrectionParameter,&a0))
        {
            try
            {
            sipCpp->setCorrectionParameter(a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_ShiftedLVMMMinimizer,sipNm_BALL_setCorrectionParameter);

    return NULL;
}


extern "C" {static PyObject *meth_ShiftedLVMMMinimizer_getCorrectionParameter(PyObject *, PyObject *);}
static PyObject *meth_ShiftedLVMMMinimizer_getCorrectionParameter(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        ShiftedLVMMMinimizer *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_ShiftedLVMMMinimizer,&sipCpp))
        {
            ShiftedLVMMMinimizer::CorrectionParameter sipRes;

            try
            {
            sipRes = sipCpp->getCorrectionParameter();
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return sipConvertFromNamedEnum(sipRes,sipEnum_ShiftedLVMMMinimizer_CorrectionParameter);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_ShiftedLVMMMinimizer,sipNm_BALL_getCorrectionParameter);

    return NULL;
}


extern "C" {static PyObject *meth_ShiftedLVMMMinimizer_setMaxNumOfColumns(PyObject *, PyObject *);}
static PyObject *meth_ShiftedLVMMMinimizer_setMaxNumOfColumns(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        int a0;
        ShiftedLVMMMinimizer *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bi",&sipSelf,sipClass_ShiftedLVMMMinimizer,&sipCpp,&a0))
        {
            try
            {
            sipCpp->setMaxNumOfColumns(a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_ShiftedLVMMMinimizer,sipNm_BALL_setMaxNumOfColumns);

    return NULL;
}


extern "C" {static PyObject *meth_ShiftedLVMMMinimizer_getMaxNumOfColumns(PyObject *, PyObject *);}
static PyObject *meth_ShiftedLVMMMinimizer_getMaxNumOfColumns(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        ShiftedLVMMMinimizer *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_ShiftedLVMMMinimizer,&sipCpp))
        {
            int sipRes;

            try
            {
            sipRes = sipCpp->getMaxNumOfColumns();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_ShiftedLVMMMinimizer,sipNm_BALL_getMaxNumOfColumns);

    return NULL;
}


extern "C" {static PyObject *meth_ShiftedLVMMMinimizer_findStep(PyObject *, PyObject *);}
static PyObject *meth_ShiftedLVMMMinimizer_findStep(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        ShiftedLVMMMinimizer *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_ShiftedLVMMMinimizer,&sipCpp))
        {
            double sipRes;

            try
            {
            sipRes = (sipSelfWasArg ? sipCpp->ShiftedLVMMMinimizer::findStep() : sipCpp->findStep());
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_ShiftedLVMMMinimizer,sipNm_BALL_findStep);

    return NULL;
}


extern "C" {static PyObject *meth_ShiftedLVMMMinimizer_updateDirection(PyObject *, PyObject *);}
static PyObject *meth_ShiftedLVMMMinimizer_updateDirection(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        ShiftedLVMMMinimizer *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_ShiftedLVMMMinimizer,&sipCpp))
        {
            try
            {
            (sipSelfWasArg ? sipCpp->ShiftedLVMMMinimizer::updateDirection() : sipCpp->updateDirection());
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_ShiftedLVMMMinimizer,sipNm_BALL_updateDirection);

    return NULL;
}


extern "C" {static PyObject *meth_ShiftedLVMMMinimizer_minimize(PyObject *, PyObject *);}
static PyObject *meth_ShiftedLVMMMinimizer_minimize(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        int a0 = 0;
        bool a1 = 0;
        ShiftedLVMMMinimizer *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B|ib",&sipSelf,sipClass_ShiftedLVMMMinimizer,&sipCpp,&a0,&a1))
        {
            bool sipRes;

            try
            {
            sipRes = (sipSelfWasArg ? sipCpp->ShiftedLVMMMinimizer::minimize(a0,a1) : sipCpp->minimize(a0,a1));
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_ShiftedLVMMMinimizer,sipNm_BALL_minimize);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_ShiftedLVMMMinimizer(void *, sipWrapperType *);}
static void *cast_ShiftedLVMMMinimizer(void *ptr,sipWrapperType *targetClass)
{
    void *res;

    if (targetClass == sipClass_ShiftedLVMMMinimizer)
        return ptr;

    if ((res = sipCast_EnergyMinimizer((EnergyMinimizer *)(ShiftedLVMMMinimizer *)ptr,targetClass)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_ShiftedLVMMMinimizer(void *, int);}
static void release_ShiftedLVMMMinimizer(void *ptr,int state)
{
    if (state & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipShiftedLVMMMinimizer *>(ptr);
    else
        delete reinterpret_cast<ShiftedLVMMMinimizer *>(ptr);
}


extern "C" {static void dealloc_ShiftedLVMMMinimizer(sipWrapper *);}
static void dealloc_ShiftedLVMMMinimizer(sipWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipShiftedLVMMMinimizer *>(sipSelf->u.cppPtr)->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_ShiftedLVMMMinimizer(sipSelf->u.cppPtr,sipSelf->flags);
    }
}


extern "C" {static void *init_ShiftedLVMMMinimizer(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_ShiftedLVMMMinimizer(sipWrapper *sipSelf,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    sipShiftedLVMMMinimizer *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            try
            {
            sipCpp = new sipShiftedLVMMMinimizer();
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
            sipCpp = new sipShiftedLVMMMinimizer(*a0);
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
            sipCpp = new sipShiftedLVMMMinimizer(*a0,a1);
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
            sipCpp = new sipShiftedLVMMMinimizer(*a0,a1,*a2);
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
            sipCpp = new sipShiftedLVMMMinimizer(*a0,*a1);
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
        const ShiftedLVMMMinimizer * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_ShiftedLVMMMinimizer,&a0))
        {
            try
            {
            sipCpp = new sipShiftedLVMMMinimizer(*a0);
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


extern "C" {static void *forceConvertTo_ShiftedLVMMMinimizer(PyObject *, int *);}
static void *forceConvertTo_ShiftedLVMMMinimizer(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_ShiftedLVMMMinimizer))
        return sipConvertToCpp(valobj,sipClass_ShiftedLVMMMinimizer,iserrp);

    sipBadClass(sipNm_BALL_ShiftedLVMMMinimizer);

    *iserrp = 1;

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedClassDef supers_ShiftedLVMMMinimizer[] = {{92, 255, 1}};


static PyMethodDef methods_ShiftedLVMMMinimizer[] = {
    {sipNm_BALL_findStep, meth_ShiftedLVMMMinimizer_findStep, METH_VARARGS, NULL},
    {sipNm_BALL_getCorrectionParameter, meth_ShiftedLVMMMinimizer_getCorrectionParameter, METH_VARARGS, NULL},
    {sipNm_BALL_getMaxNumOfColumns, meth_ShiftedLVMMMinimizer_getMaxNumOfColumns, METH_VARARGS, NULL},
    {sipNm_BALL_getUpdateMethod, meth_ShiftedLVMMMinimizer_getUpdateMethod, METH_VARARGS, NULL},
    {sipNm_BALL_minimize, meth_ShiftedLVMMMinimizer_minimize, METH_VARARGS, NULL},
    {sipNm_BALL_setCorrectionParameter, meth_ShiftedLVMMMinimizer_setCorrectionParameter, METH_VARARGS, NULL},
    {sipNm_BALL_setMaxNumOfColumns, meth_ShiftedLVMMMinimizer_setMaxNumOfColumns, METH_VARARGS, NULL},
    {sipNm_BALL_setUpdateMethod, meth_ShiftedLVMMMinimizer_setUpdateMethod, METH_VARARGS, NULL},
    {sipNm_BALL_specificSetup, meth_ShiftedLVMMMinimizer_specificSetup, METH_VARARGS, NULL},
    {sipNm_BALL_updateDirection, meth_ShiftedLVMMMinimizer_updateDirection, METH_VARARGS, NULL}
};

static sipEnumMemberDef enummembers_ShiftedLVMMMinimizer[] = {
    {sipNm_BALL_BALANCING_VALUE, ShiftedLVMMMinimizer::BALANCING_VALUE, 17},
    {sipNm_BALL_GEOMETRIC_MEAN, ShiftedLVMMMinimizer::GEOMETRIC_MEAN, 17},
    {sipNm_BALL_RANK_1, ShiftedLVMMMinimizer::RANK_1, 18},
    {sipNm_BALL_RANK_2, ShiftedLVMMMinimizer::RANK_2, 18},
    {sipNm_BALL_RATIO_OF_SHIFT_PARAMS, ShiftedLVMMMinimizer::RATIO_OF_SHIFT_PARAMS, 17},
    {sipNm_BALL_SQUARE_ROOT, ShiftedLVMMMinimizer::SQUARE_ROOT, 17},
    {sipNm_BALL_UNIT_VALUE, ShiftedLVMMMinimizer::UNIT_VALUE, 17},
};


sipTypeDef sipType_BALL_ShiftedLVMMMinimizer = {
    0,
    0,
    "BALL.ShiftedLVMMMinimizer",
    0,
    {0, 0, 1},
    supers_ShiftedLVMMMinimizer,
    0,
    10, methods_ShiftedLVMMMinimizer,
    7, enummembers_ShiftedLVMMMinimizer,
    0,
    init_ShiftedLVMMMinimizer,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_ShiftedLVMMMinimizer,
    cast_ShiftedLVMMMinimizer,
    release_ShiftedLVMMMinimizer,
    forceConvertTo_ShiftedLVMMMinimizer,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
