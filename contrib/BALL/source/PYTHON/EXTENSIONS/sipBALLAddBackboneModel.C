/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLAddBackboneModel.h"

#include "sipBALLModelProcessor.h"
#include "sipBALLAddBackboneModel.h"
#include "sipBALLProcessor.h"
#include "sipBALLComposite.h"
#include "sipBALLIndex.h"
#include "sipBALLGeometricObjectList.h"


sipAddBackboneModel::sipAddBackboneModel() throw(): AddBackboneModel(), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,4);
}

sipAddBackboneModel::sipAddBackboneModel(const AddBackboneModel& a0) throw(): AddBackboneModel(a0), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,4);
}

sipAddBackboneModel::~sipAddBackboneModel() throw()
{
    sipCommonDtor(sipPySelf);
}

void sipAddBackboneModel::clear() throw()
{
    extern void sipVH_BALL_0(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipNm_BALL_clear);

    if (!meth)
    {
        AddBackboneModel::clear();
        return;
    }

    sipVH_BALL_0(sipGILState,meth);
}

bool sipAddBackboneModel::createGeometricObjects() throw()
{
    extern bool sipVH_BALL_4(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,NULL,sipNm_BALL_createGeometricObjects);

    if (!meth)
        return AddBackboneModel::createGeometricObjects();

    return sipVH_BALL_4(sipGILState,meth);
}

bool sipAddBackboneModel::isValid() const throw()
{
    extern bool sipVH_BALL_4(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<sipMethodCache *>(&sipPyMethods[2]),sipPySelf,NULL,sipNm_BALL_isValid);

    if (!meth)
        return ModelProcessor::isValid();

    return sipVH_BALL_4(sipGILState,meth);
}

void sipAddBackboneModel::clearComposites() throw()
{
    extern void sipVH_BALL_0(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[3],sipPySelf,NULL,sipNm_BALL_clearComposites);

    if (!meth)
    {
        ModelProcessor::clearComposites();
        return;
    }

    sipVH_BALL_0(sipGILState,meth);
}


extern "C" {static PyObject *meth_AddBackboneModel_clear(PyObject *, PyObject *);}
static PyObject *meth_AddBackboneModel_clear(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        AddBackboneModel *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_AddBackboneModel,&sipCpp))
        {
            (sipSelfWasArg ? sipCpp->AddBackboneModel::clear() : sipCpp->clear());

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_AddBackboneModel,sipNm_BALL_clear);

    return NULL;
}


extern "C" {static PyObject *meth_AddBackboneModel_setTubeRadius(PyObject *, PyObject *);}
static PyObject *meth_AddBackboneModel_setTubeRadius(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        float a0;
        AddBackboneModel *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bf",&sipSelf,sipClass_AddBackboneModel,&sipCpp,&a0))
        {
            sipCpp->setTubeRadius(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_AddBackboneModel,sipNm_BALL_setTubeRadius);

    return NULL;
}


extern "C" {static PyObject *meth_AddBackboneModel_getTubeRadius(PyObject *, PyObject *);}
static PyObject *meth_AddBackboneModel_getTubeRadius(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        AddBackboneModel *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_AddBackboneModel,&sipCpp))
        {
            float sipRes;

            sipRes = sipCpp->getTubeRadius();

            return PyFloat_FromDouble((double)sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_AddBackboneModel,sipNm_BALL_getTubeRadius);

    return NULL;
}


extern "C" {static PyObject *meth_AddBackboneModel_createGeometricObjects(PyObject *, PyObject *);}
static PyObject *meth_AddBackboneModel_createGeometricObjects(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        AddBackboneModel *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_AddBackboneModel,&sipCpp))
        {
            bool sipRes;

            sipRes = (sipSelfWasArg ? sipCpp->AddBackboneModel::createGeometricObjects() : sipCpp->createGeometricObjects());

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_AddBackboneModel,sipNm_BALL_createGeometricObjects);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_AddBackboneModel(void *, sipWrapperType *);}
static void *cast_AddBackboneModel(void *ptr,sipWrapperType *targetClass)
{
    void *res;

    if (targetClass == sipClass_AddBackboneModel)
        return ptr;

    if ((res = sipCast_ModelProcessor((ModelProcessor *)(AddBackboneModel *)ptr,targetClass)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_AddBackboneModel(void *, int);}
static void release_AddBackboneModel(void *ptr,int state)
{
    if (state & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipAddBackboneModel *>(ptr);
    else
        delete reinterpret_cast<AddBackboneModel *>(ptr);
}


extern "C" {static void dealloc_AddBackboneModel(sipWrapper *);}
static void dealloc_AddBackboneModel(sipWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipAddBackboneModel *>(sipSelf->u.cppPtr)->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_AddBackboneModel(sipSelf->u.cppPtr,sipSelf->flags);
    }
}


extern "C" {static void *init_AddBackboneModel(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_AddBackboneModel(sipWrapper *sipSelf,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    sipAddBackboneModel *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            sipCpp = new sipAddBackboneModel();
        }
    }

    if (!sipCpp)
    {
        const AddBackboneModel * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_AddBackboneModel,&a0))
        {
            sipCpp = new sipAddBackboneModel(*a0);
        }
    }

    if (sipCpp)
        sipCpp->sipPySelf = sipSelf;

    return sipCpp;
}


extern "C" {static void *forceConvertTo_AddBackboneModel(PyObject *, int *);}
static void *forceConvertTo_AddBackboneModel(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_AddBackboneModel))
        return sipConvertToCpp(valobj,sipClass_AddBackboneModel,iserrp);

    sipBadClass(sipNm_BALL_AddBackboneModel);

    *iserrp = 1;

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedClassDef supers_AddBackboneModel[] = {{4, 255, 1}};


static PyMethodDef methods_AddBackboneModel[] = {
    {sipNm_BALL_clear, meth_AddBackboneModel_clear, METH_VARARGS, NULL},
    {sipNm_BALL_createGeometricObjects, meth_AddBackboneModel_createGeometricObjects, METH_VARARGS, NULL},
    {sipNm_BALL_getTubeRadius, meth_AddBackboneModel_getTubeRadius, METH_VARARGS, NULL},
    {sipNm_BALL_setTubeRadius, meth_AddBackboneModel_setTubeRadius, METH_VARARGS, NULL}
};


sipTypeDef sipType_BALL_AddBackboneModel = {
    0,
    0,
    "BALL.AddBackboneModel",
    0,
    {0, 0, 1},
    supers_AddBackboneModel,
    0,
    4, methods_AddBackboneModel,
    0, 0,
    0,
    init_AddBackboneModel,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_AddBackboneModel,
    cast_AddBackboneModel,
    release_AddBackboneModel,
    forceConvertTo_AddBackboneModel,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
