/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLForceModel.h"

#include "sipBALLModelProcessor.h"
#include "sipBALLForceModel.h"
#include "sipBALLProcessor.h"
#include "sipBALLComposite.h"
#include "sipBALLIndex.h"
#include "sipBALLGeometricObjectList.h"


sipForceModel::sipForceModel() throw(): ForceModel(), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,4);
}

sipForceModel::sipForceModel(const ForceModel& a0) throw(): ForceModel(a0), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,4);
}

sipForceModel::~sipForceModel() throw()
{
    sipCommonDtor(sipPySelf);
}

void sipForceModel::clear() throw()
{
    extern void sipVH_BALL_0(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipNm_BALL_clear);

    if (!meth)
    {
        ModelProcessor::clear();
        return;
    }

    sipVH_BALL_0(sipGILState,meth);
}

bool sipForceModel::isValid() const throw()
{
    extern bool sipVH_BALL_4(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<sipMethodCache *>(&sipPyMethods[1]),sipPySelf,NULL,sipNm_BALL_isValid);

    if (!meth)
        return ModelProcessor::isValid();

    return sipVH_BALL_4(sipGILState,meth);
}

void sipForceModel::clearComposites() throw()
{
    extern void sipVH_BALL_0(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[2],sipPySelf,NULL,sipNm_BALL_clearComposites);

    if (!meth)
    {
        ModelProcessor::clearComposites();
        return;
    }

    sipVH_BALL_0(sipGILState,meth);
}

bool sipForceModel::createGeometricObjects() throw()
{
    extern bool sipVH_BALL_4(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[3],sipPySelf,NULL,sipNm_BALL_createGeometricObjects);

    if (!meth)
        return ModelProcessor::createGeometricObjects();

    return sipVH_BALL_4(sipGILState,meth);
}


extern "C" {static PyObject *meth_ForceModel_setScaling(PyObject *, PyObject *);}
static PyObject *meth_ForceModel_setScaling(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        float a0;
        ForceModel *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bf",&sipSelf,sipClass_ForceModel,&sipCpp,&a0))
        {
            sipCpp->setScaling(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_ForceModel,sipNm_BALL_setScaling);

    return NULL;
}


extern "C" {static PyObject *meth_ForceModel_setMaxLength(PyObject *, PyObject *);}
static PyObject *meth_ForceModel_setMaxLength(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        float a0;
        ForceModel *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bf",&sipSelf,sipClass_ForceModel,&sipCpp,&a0))
        {
            sipCpp->setMaxLength(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_ForceModel,sipNm_BALL_setMaxLength);

    return NULL;
}


extern "C" {static PyObject *meth_ForceModel_getScaling(PyObject *, PyObject *);}
static PyObject *meth_ForceModel_getScaling(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        ForceModel *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_ForceModel,&sipCpp))
        {
            float sipRes;

            sipRes = sipCpp->getScaling();

            return PyFloat_FromDouble((double)sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_ForceModel,sipNm_BALL_getScaling);

    return NULL;
}


extern "C" {static PyObject *meth_ForceModel_getMaxLength(PyObject *, PyObject *);}
static PyObject *meth_ForceModel_getMaxLength(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        ForceModel *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_ForceModel,&sipCpp))
        {
            float sipRes;

            sipRes = sipCpp->getMaxLength();

            return PyFloat_FromDouble((double)sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_ForceModel,sipNm_BALL_getMaxLength);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_ForceModel(void *, sipWrapperType *);}
static void *cast_ForceModel(void *ptr,sipWrapperType *targetClass)
{
    void *res;

    if (targetClass == sipClass_ForceModel)
        return ptr;

    if ((res = sipCast_ModelProcessor((ModelProcessor *)(ForceModel *)ptr,targetClass)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_ForceModel(void *, int);}
static void release_ForceModel(void *ptr,int state)
{
    if (state & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipForceModel *>(ptr);
    else
        delete reinterpret_cast<ForceModel *>(ptr);
}


extern "C" {static void dealloc_ForceModel(sipWrapper *);}
static void dealloc_ForceModel(sipWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipForceModel *>(sipSelf->u.cppPtr)->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_ForceModel(sipSelf->u.cppPtr,sipSelf->flags);
    }
}


extern "C" {static void *init_ForceModel(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_ForceModel(sipWrapper *sipSelf,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    sipForceModel *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            sipCpp = new sipForceModel();
        }
    }

    if (!sipCpp)
    {
        const ForceModel * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_ForceModel,&a0))
        {
            sipCpp = new sipForceModel(*a0);
        }
    }

    if (sipCpp)
        sipCpp->sipPySelf = sipSelf;

    return sipCpp;
}


extern "C" {static void *forceConvertTo_ForceModel(PyObject *, int *);}
static void *forceConvertTo_ForceModel(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_ForceModel))
        return sipConvertToCpp(valobj,sipClass_ForceModel,iserrp);

    sipBadClass(sipNm_BALL_ForceModel);

    *iserrp = 1;

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedClassDef supers_ForceModel[] = {{4, 255, 1}};


static PyMethodDef methods_ForceModel[] = {
    {sipNm_BALL_getMaxLength, meth_ForceModel_getMaxLength, METH_VARARGS, NULL},
    {sipNm_BALL_getScaling, meth_ForceModel_getScaling, METH_VARARGS, NULL},
    {sipNm_BALL_setMaxLength, meth_ForceModel_setMaxLength, METH_VARARGS, NULL},
    {sipNm_BALL_setScaling, meth_ForceModel_setScaling, METH_VARARGS, NULL}
};


sipTypeDef sipType_BALL_ForceModel = {
    0,
    0,
    "BALL.ForceModel",
    0,
    {0, 0, 1},
    supers_ForceModel,
    0,
    4, methods_ForceModel,
    0, 0,
    0,
    init_ForceModel,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_ForceModel,
    cast_ForceModel,
    release_ForceModel,
    forceConvertTo_ForceModel,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
