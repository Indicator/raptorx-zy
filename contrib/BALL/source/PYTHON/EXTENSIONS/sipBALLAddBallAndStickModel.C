/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLAddBallAndStickModel.h"

#include "sipBALLAtomBondModelBaseProcessor.h"
#include "sipBALLAddBallAndStickModel.h"
#include "sipBALLModelProcessor.h"
#include "sipBALLProcessor.h"
#include "sipBALLComposite.h"
#include "sipBALLIndex.h"
#include "sipBALLGeometricObjectList.h"


sipAddBallAndStickModel::sipAddBallAndStickModel() throw(): AddBallAndStickModel(), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,4);
}

sipAddBallAndStickModel::sipAddBallAndStickModel(const AddBallAndStickModel& a0) throw(): AddBallAndStickModel(a0), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,4);
}

sipAddBallAndStickModel::~sipAddBallAndStickModel() throw()
{
    sipCommonDtor(sipPySelf);
}

void sipAddBallAndStickModel::clear() throw()
{
    extern void sipVH_BALL_0(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipNm_BALL_clear);

    if (!meth)
    {
        AddBallAndStickModel::clear();
        return;
    }

    sipVH_BALL_0(sipGILState,meth);
}

void sipAddBallAndStickModel::clearComposites() throw()
{
    extern void sipVH_BALL_0(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,NULL,sipNm_BALL_clearComposites);

    if (!meth)
    {
        AtomBondModelBaseProcessor::clearComposites();
        return;
    }

    sipVH_BALL_0(sipGILState,meth);
}

bool sipAddBallAndStickModel::createGeometricObjects() throw()
{
    extern bool sipVH_BALL_4(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[2],sipPySelf,NULL,sipNm_BALL_createGeometricObjects);

    if (!meth)
        return AtomBondModelBaseProcessor::createGeometricObjects();

    return sipVH_BALL_4(sipGILState,meth);
}

bool sipAddBallAndStickModel::isValid() const throw()
{
    extern bool sipVH_BALL_4(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<sipMethodCache *>(&sipPyMethods[3]),sipPySelf,NULL,sipNm_BALL_isValid);

    if (!meth)
        return ModelProcessor::isValid();

    return sipVH_BALL_4(sipGILState,meth);
}


extern "C" {static PyObject *meth_AddBallAndStickModel_clear(PyObject *, PyObject *);}
static PyObject *meth_AddBallAndStickModel_clear(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        AddBallAndStickModel *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_AddBallAndStickModel,&sipCpp))
        {
            (sipSelfWasArg ? sipCpp->AddBallAndStickModel::clear() : sipCpp->clear());

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_AddBallAndStickModel,sipNm_BALL_clear);

    return NULL;
}


extern "C" {static PyObject *meth_AddBallAndStickModel_set(PyObject *, PyObject *);}
static PyObject *meth_AddBallAndStickModel_set(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const AddBallAndStickModel * a0;
        AddBallAndStickModel *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_AddBallAndStickModel,&sipCpp,sipClass_AddBallAndStickModel,&a0))
        {
            sipCpp->set(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_AddBallAndStickModel,sipNm_BALL_set);

    return NULL;
}


extern "C" {static PyObject *meth_AddBallAndStickModel_setBallRadius(PyObject *, PyObject *);}
static PyObject *meth_AddBallAndStickModel_setBallRadius(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        float a0;
        AddBallAndStickModel *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bf",&sipSelf,sipClass_AddBallAndStickModel,&sipCpp,&a0))
        {
            try
            {
            sipCpp->setBallRadius(a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_AddBallAndStickModel,sipNm_BALL_setBallRadius);

    return NULL;
}


extern "C" {static PyObject *meth_AddBallAndStickModel_getBallRadius(PyObject *, PyObject *);}
static PyObject *meth_AddBallAndStickModel_getBallRadius(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        AddBallAndStickModel *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_AddBallAndStickModel,&sipCpp))
        {
            float sipRes;

            sipRes = sipCpp->getBallRadius();

            return PyFloat_FromDouble((double)sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_AddBallAndStickModel,sipNm_BALL_getBallRadius);

    return NULL;
}


extern "C" {static PyObject *meth_AddBallAndStickModel_setStickRadius(PyObject *, PyObject *);}
static PyObject *meth_AddBallAndStickModel_setStickRadius(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        float a0;
        AddBallAndStickModel *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bf",&sipSelf,sipClass_AddBallAndStickModel,&sipCpp,&a0))
        {
            try
            {
            sipCpp->setStickRadius(a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_AddBallAndStickModel,sipNm_BALL_setStickRadius);

    return NULL;
}


extern "C" {static PyObject *meth_AddBallAndStickModel_getStickRadius(PyObject *, PyObject *);}
static PyObject *meth_AddBallAndStickModel_getStickRadius(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        AddBallAndStickModel *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_AddBallAndStickModel,&sipCpp))
        {
            float sipRes;

            sipRes = sipCpp->getStickRadius();

            return PyFloat_FromDouble((double)sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_AddBallAndStickModel,sipNm_BALL_getStickRadius);

    return NULL;
}


extern "C" {static PyObject *meth_AddBallAndStickModel_enableBallAndStickModel(PyObject *, PyObject *);}
static PyObject *meth_AddBallAndStickModel_enableBallAndStickModel(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        AddBallAndStickModel *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_AddBallAndStickModel,&sipCpp))
        {
            sipCpp->enableBallAndStickModel();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_AddBallAndStickModel,sipNm_BALL_enableBallAndStickModel);

    return NULL;
}


extern "C" {static PyObject *meth_AddBallAndStickModel_enableStickModel(PyObject *, PyObject *);}
static PyObject *meth_AddBallAndStickModel_enableStickModel(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        AddBallAndStickModel *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_AddBallAndStickModel,&sipCpp))
        {
            sipCpp->enableStickModel();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_AddBallAndStickModel,sipNm_BALL_enableStickModel);

    return NULL;
}


extern "C" {static PyObject *meth_AddBallAndStickModel_isBallAndStickModel(PyObject *, PyObject *);}
static PyObject *meth_AddBallAndStickModel_isBallAndStickModel(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        AddBallAndStickModel *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_AddBallAndStickModel,&sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isBallAndStickModel();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_AddBallAndStickModel,sipNm_BALL_isBallAndStickModel);

    return NULL;
}


extern "C" {static PyObject *meth_AddBallAndStickModel_isStickModel(PyObject *, PyObject *);}
static PyObject *meth_AddBallAndStickModel_isStickModel(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        AddBallAndStickModel *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_AddBallAndStickModel,&sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isStickModel();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_AddBallAndStickModel,sipNm_BALL_isStickModel);

    return NULL;
}


extern "C" {static PyObject *meth_AddBallAndStickModel_dashedBondsEnabled(PyObject *, PyObject *);}
static PyObject *meth_AddBallAndStickModel_dashedBondsEnabled(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        AddBallAndStickModel *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_AddBallAndStickModel,&sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->dashedBondsEnabled();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_AddBallAndStickModel,sipNm_BALL_dashedBondsEnabled);

    return NULL;
}


extern "C" {static PyObject *meth_AddBallAndStickModel_enableDashedBonds(PyObject *, PyObject *);}
static PyObject *meth_AddBallAndStickModel_enableDashedBonds(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        bool a0;
        AddBallAndStickModel *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bb",&sipSelf,sipClass_AddBallAndStickModel,&sipCpp,&a0))
        {
            sipCpp->enableDashedBonds(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_AddBallAndStickModel,sipNm_BALL_enableDashedBonds);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_AddBallAndStickModel(void *, sipWrapperType *);}
static void *cast_AddBallAndStickModel(void *ptr,sipWrapperType *targetClass)
{
    void *res;

    if (targetClass == sipClass_AddBallAndStickModel)
        return ptr;

    if ((res = sipCast_AtomBondModelBaseProcessor((AtomBondModelBaseProcessor *)(AddBallAndStickModel *)ptr,targetClass)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_AddBallAndStickModel(void *, int);}
static void release_AddBallAndStickModel(void *ptr,int state)
{
    if (state & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipAddBallAndStickModel *>(ptr);
    else
        delete reinterpret_cast<AddBallAndStickModel *>(ptr);
}


extern "C" {static void dealloc_AddBallAndStickModel(sipWrapper *);}
static void dealloc_AddBallAndStickModel(sipWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipAddBallAndStickModel *>(sipSelf->u.cppPtr)->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_AddBallAndStickModel(sipSelf->u.cppPtr,sipSelf->flags);
    }
}


extern "C" {static void *init_AddBallAndStickModel(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_AddBallAndStickModel(sipWrapper *sipSelf,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    sipAddBallAndStickModel *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            sipCpp = new sipAddBallAndStickModel();
        }
    }

    if (!sipCpp)
    {
        const AddBallAndStickModel * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_AddBallAndStickModel,&a0))
        {
            sipCpp = new sipAddBallAndStickModel(*a0);
        }
    }

    if (sipCpp)
        sipCpp->sipPySelf = sipSelf;

    return sipCpp;
}


extern "C" {static void *forceConvertTo_AddBallAndStickModel(PyObject *, int *);}
static void *forceConvertTo_AddBallAndStickModel(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_AddBallAndStickModel))
        return sipConvertToCpp(valobj,sipClass_AddBallAndStickModel,iserrp);

    sipBadClass(sipNm_BALL_AddBallAndStickModel);

    *iserrp = 1;

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedClassDef supers_AddBallAndStickModel[] = {{10, 255, 1}};


static PyMethodDef methods_AddBallAndStickModel[] = {
    {sipNm_BALL_clear, meth_AddBallAndStickModel_clear, METH_VARARGS, NULL},
    {sipNm_BALL_dashedBondsEnabled, meth_AddBallAndStickModel_dashedBondsEnabled, METH_VARARGS, NULL},
    {sipNm_BALL_enableBallAndStickModel, meth_AddBallAndStickModel_enableBallAndStickModel, METH_VARARGS, NULL},
    {sipNm_BALL_enableDashedBonds, meth_AddBallAndStickModel_enableDashedBonds, METH_VARARGS, NULL},
    {sipNm_BALL_enableStickModel, meth_AddBallAndStickModel_enableStickModel, METH_VARARGS, NULL},
    {sipNm_BALL_getBallRadius, meth_AddBallAndStickModel_getBallRadius, METH_VARARGS, NULL},
    {sipNm_BALL_getStickRadius, meth_AddBallAndStickModel_getStickRadius, METH_VARARGS, NULL},
    {sipNm_BALL_isBallAndStickModel, meth_AddBallAndStickModel_isBallAndStickModel, METH_VARARGS, NULL},
    {sipNm_BALL_isStickModel, meth_AddBallAndStickModel_isStickModel, METH_VARARGS, NULL},
    {sipNm_BALL_set, meth_AddBallAndStickModel_set, METH_VARARGS, NULL},
    {sipNm_BALL_setBallRadius, meth_AddBallAndStickModel_setBallRadius, METH_VARARGS, NULL},
    {sipNm_BALL_setStickRadius, meth_AddBallAndStickModel_setStickRadius, METH_VARARGS, NULL}
};


sipTypeDef sipType_BALL_AddBallAndStickModel = {
    0,
    0,
    "BALL.AddBallAndStickModel",
    0,
    {0, 0, 1},
    supers_AddBallAndStickModel,
    0,
    12, methods_AddBallAndStickModel,
    0, 0,
    0,
    init_AddBallAndStickModel,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_AddBallAndStickModel,
    cast_AddBallAndStickModel,
    release_AddBallAndStickModel,
    forceConvertTo_AddBallAndStickModel,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
