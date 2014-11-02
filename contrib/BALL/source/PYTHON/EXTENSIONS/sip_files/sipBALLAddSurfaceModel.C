/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLAddSurfaceModel.h"

#include "sipBALLModelProcessor.h"
#include "sipBALLAddSurfaceModel.h"
#include "sipBALLSurfaceProcessor.h"
#include "sipBALLProcessor.h"
#include "sipBALLComposite.h"
#include "sipBALLIndex.h"
#include "sipBALLGeometricObjectList.h"


sipAddSurfaceModel::sipAddSurfaceModel() throw(): AddSurfaceModel(), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,4);
}

sipAddSurfaceModel::sipAddSurfaceModel(const AddSurfaceModel& a0) throw(): AddSurfaceModel(a0), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,4);
}

sipAddSurfaceModel::~sipAddSurfaceModel() throw()
{
    sipCommonDtor(sipPySelf);
}

void sipAddSurfaceModel::clear() throw()
{
    extern void sipVH_BALL_0(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipNm_BALL_clear);

    if (!meth)
    {
        AddSurfaceModel::clear();
        return;
    }

    sipVH_BALL_0(sipGILState,meth);
}

void sipAddSurfaceModel::clearComposites() throw()
{
    extern void sipVH_BALL_0(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,NULL,sipNm_BALL_clearComposites);

    if (!meth)
    {
        AddSurfaceModel::clearComposites();
        return;
    }

    sipVH_BALL_0(sipGILState,meth);
}

bool sipAddSurfaceModel::createGeometricObjects() throw()
{
    extern bool sipVH_BALL_4(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[2],sipPySelf,NULL,sipNm_BALL_createGeometricObjects);

    if (!meth)
        return AddSurfaceModel::createGeometricObjects();

    return sipVH_BALL_4(sipGILState,meth);
}

bool sipAddSurfaceModel::isValid() const throw()
{
    extern bool sipVH_BALL_4(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<sipMethodCache *>(&sipPyMethods[3]),sipPySelf,NULL,sipNm_BALL_isValid);

    if (!meth)
        return ModelProcessor::isValid();

    return sipVH_BALL_4(sipGILState,meth);
}


extern "C" {static PyObject *meth_AddSurfaceModel_clear(PyObject *, PyObject *);}
static PyObject *meth_AddSurfaceModel_clear(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        AddSurfaceModel *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_AddSurfaceModel,&sipCpp))
        {
            (sipSelfWasArg ? sipCpp->AddSurfaceModel::clear() : sipCpp->clear());

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_AddSurfaceModel,sipNm_BALL_clear);

    return NULL;
}


extern "C" {static PyObject *meth_AddSurfaceModel_clearComposites(PyObject *, PyObject *);}
static PyObject *meth_AddSurfaceModel_clearComposites(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        AddSurfaceModel *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_AddSurfaceModel,&sipCpp))
        {
            (sipSelfWasArg ? sipCpp->AddSurfaceModel::clearComposites() : sipCpp->clearComposites());

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_AddSurfaceModel,sipNm_BALL_clearComposites);

    return NULL;
}


extern "C" {static PyObject *meth_AddSurfaceModel_getType(PyObject *, PyObject *);}
static PyObject *meth_AddSurfaceModel_getType(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        AddSurfaceModel *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_AddSurfaceModel,&sipCpp))
        {
            SurfaceProcessor::SurfaceType sipRes;

            try
            {
            sipRes = sipCpp->getType();
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return sipConvertFromNamedEnum(sipRes,sipEnum_SurfaceProcessor_SurfaceType);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_AddSurfaceModel,sipNm_BALL_getType);

    return NULL;
}


extern "C" {static PyObject *meth_AddSurfaceModel_setType(PyObject *, PyObject *);}
static PyObject *meth_AddSurfaceModel_setType(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        SurfaceProcessor::SurfaceType a0;
        AddSurfaceModel *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BE",&sipSelf,sipClass_AddSurfaceModel,&sipCpp,sipEnum_SurfaceProcessor_SurfaceType,&a0))
        {
            try
            {
            sipCpp->setType(a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_AddSurfaceModel,sipNm_BALL_setType);

    return NULL;
}


extern "C" {static PyObject *meth_AddSurfaceModel_setProbeRadius(PyObject *, PyObject *);}
static PyObject *meth_AddSurfaceModel_setProbeRadius(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        float a0;
        AddSurfaceModel *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bf",&sipSelf,sipClass_AddSurfaceModel,&sipCpp,&a0))
        {
            sipCpp->setProbeRadius(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_AddSurfaceModel,sipNm_BALL_setProbeRadius);

    return NULL;
}


extern "C" {static PyObject *meth_AddSurfaceModel_getProbeRadius(PyObject *, PyObject *);}
static PyObject *meth_AddSurfaceModel_getProbeRadius(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        AddSurfaceModel *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_AddSurfaceModel,&sipCpp))
        {
            float sipRes;

            sipRes = sipCpp->getProbeRadius();

            return PyFloat_FromDouble((double)sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_AddSurfaceModel,sipNm_BALL_getProbeRadius);

    return NULL;
}


extern "C" {static PyObject *meth_AddSurfaceModel_createGeometricObjects(PyObject *, PyObject *);}
static PyObject *meth_AddSurfaceModel_createGeometricObjects(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        AddSurfaceModel *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_AddSurfaceModel,&sipCpp))
        {
            bool sipRes;

            sipRes = (sipSelfWasArg ? sipCpp->AddSurfaceModel::createGeometricObjects() : sipCpp->createGeometricObjects());

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_AddSurfaceModel,sipNm_BALL_createGeometricObjects);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_AddSurfaceModel(void *, sipWrapperType *);}
static void *cast_AddSurfaceModel(void *ptr,sipWrapperType *targetClass)
{
    void *res;

    if (targetClass == sipClass_AddSurfaceModel)
        return ptr;

    if ((res = sipCast_ModelProcessor((ModelProcessor *)(AddSurfaceModel *)ptr,targetClass)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_AddSurfaceModel(void *, int);}
static void release_AddSurfaceModel(void *ptr,int state)
{
    if (state & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipAddSurfaceModel *>(ptr);
    else
        delete reinterpret_cast<AddSurfaceModel *>(ptr);
}


extern "C" {static void dealloc_AddSurfaceModel(sipWrapper *);}
static void dealloc_AddSurfaceModel(sipWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipAddSurfaceModel *>(sipSelf->u.cppPtr)->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_AddSurfaceModel(sipSelf->u.cppPtr,sipSelf->flags);
    }
}


extern "C" {static void *init_AddSurfaceModel(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_AddSurfaceModel(sipWrapper *sipSelf,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    sipAddSurfaceModel *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            sipCpp = new sipAddSurfaceModel();
        }
    }

    if (!sipCpp)
    {
        const AddSurfaceModel * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_AddSurfaceModel,&a0))
        {
            sipCpp = new sipAddSurfaceModel(*a0);
        }
    }

    if (sipCpp)
        sipCpp->sipPySelf = sipSelf;

    return sipCpp;
}


extern "C" {static void *forceConvertTo_AddSurfaceModel(PyObject *, int *);}
static void *forceConvertTo_AddSurfaceModel(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_AddSurfaceModel))
        return sipConvertToCpp(valobj,sipClass_AddSurfaceModel,iserrp);

    sipBadClass(sipNm_BALL_AddSurfaceModel);

    *iserrp = 1;

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedClassDef supers_AddSurfaceModel[] = {{4, 255, 1}};


static PyMethodDef methods_AddSurfaceModel[] = {
    {sipNm_BALL_clear, meth_AddSurfaceModel_clear, METH_VARARGS, NULL},
    {sipNm_BALL_clearComposites, meth_AddSurfaceModel_clearComposites, METH_VARARGS, NULL},
    {sipNm_BALL_createGeometricObjects, meth_AddSurfaceModel_createGeometricObjects, METH_VARARGS, NULL},
    {sipNm_BALL_getProbeRadius, meth_AddSurfaceModel_getProbeRadius, METH_VARARGS, NULL},
    {sipNm_BALL_getType, meth_AddSurfaceModel_getType, METH_VARARGS, NULL},
    {sipNm_BALL_setProbeRadius, meth_AddSurfaceModel_setProbeRadius, METH_VARARGS, NULL},
    {sipNm_BALL_setType, meth_AddSurfaceModel_setType, METH_VARARGS, NULL}
};


sipTypeDef sipType_BALL_AddSurfaceModel = {
    0,
    0,
    "BALL.AddSurfaceModel",
    0,
    {0, 0, 1},
    supers_AddSurfaceModel,
    0,
    7, methods_AddSurfaceModel,
    0, 0,
    0,
    init_AddSurfaceModel,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_AddSurfaceModel,
    cast_AddSurfaceModel,
    release_AddSurfaceModel,
    forceConvertTo_AddSurfaceModel,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
