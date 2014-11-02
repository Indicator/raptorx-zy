/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLAddVanDerWaalsModel.h"

#include "sipBALLAtomBondModelBaseProcessor.h"
#include "sipBALLAddVanDerWaalsModel.h"
#include "sipBALLModelProcessor.h"
#include "sipBALLProcessor.h"
#include "sipBALLComposite.h"
#include "sipBALLIndex.h"
#include "sipBALLGeometricObjectList.h"


sipAddVanDerWaalsModel::sipAddVanDerWaalsModel() throw(): AddVanDerWaalsModel(), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,4);
}

sipAddVanDerWaalsModel::sipAddVanDerWaalsModel(const AddVanDerWaalsModel& a0) throw(): AddVanDerWaalsModel(a0), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,4);
}

sipAddVanDerWaalsModel::~sipAddVanDerWaalsModel() throw()
{
    sipCommonDtor(sipPySelf);
}

void sipAddVanDerWaalsModel::clear() throw()
{
    extern void sipVH_BALL_0(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipNm_BALL_clear);

    if (!meth)
    {
        AtomBondModelBaseProcessor::clear();
        return;
    }

    sipVH_BALL_0(sipGILState,meth);
}

void sipAddVanDerWaalsModel::clearComposites() throw()
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

bool sipAddVanDerWaalsModel::createGeometricObjects() throw()
{
    extern bool sipVH_BALL_4(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[2],sipPySelf,NULL,sipNm_BALL_createGeometricObjects);

    if (!meth)
        return AtomBondModelBaseProcessor::createGeometricObjects();

    return sipVH_BALL_4(sipGILState,meth);
}

bool sipAddVanDerWaalsModel::isValid() const throw()
{
    extern bool sipVH_BALL_4(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<sipMethodCache *>(&sipPyMethods[3]),sipPySelf,NULL,sipNm_BALL_isValid);

    if (!meth)
        return ModelProcessor::isValid();

    return sipVH_BALL_4(sipGILState,meth);
}


extern "C" {static PyObject *meth_AddVanDerWaalsModel_setVDWRadiusFactor(PyObject *, PyObject *);}
static PyObject *meth_AddVanDerWaalsModel_setVDWRadiusFactor(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        float a0;
        AddVanDerWaalsModel *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bf",&sipSelf,sipClass_AddVanDerWaalsModel,&sipCpp,&a0))
        {
            sipCpp->setVDWRadiusFactor(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_AddVanDerWaalsModel,sipNm_BALL_setVDWRadiusFactor);

    return NULL;
}


extern "C" {static PyObject *meth_AddVanDerWaalsModel_getVDWRadiusFactor(PyObject *, PyObject *);}
static PyObject *meth_AddVanDerWaalsModel_getVDWRadiusFactor(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        AddVanDerWaalsModel *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_AddVanDerWaalsModel,&sipCpp))
        {
            float sipRes;

            sipRes = sipCpp->getVDWRadiusFactor();

            return PyFloat_FromDouble((double)sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_AddVanDerWaalsModel,sipNm_BALL_getVDWRadiusFactor);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_AddVanDerWaalsModel(void *, sipWrapperType *);}
static void *cast_AddVanDerWaalsModel(void *ptr,sipWrapperType *targetClass)
{
    void *res;

    if (targetClass == sipClass_AddVanDerWaalsModel)
        return ptr;

    if ((res = sipCast_AtomBondModelBaseProcessor((AtomBondModelBaseProcessor *)(AddVanDerWaalsModel *)ptr,targetClass)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_AddVanDerWaalsModel(void *, int);}
static void release_AddVanDerWaalsModel(void *ptr,int state)
{
    if (state & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipAddVanDerWaalsModel *>(ptr);
    else
        delete reinterpret_cast<AddVanDerWaalsModel *>(ptr);
}


extern "C" {static void dealloc_AddVanDerWaalsModel(sipWrapper *);}
static void dealloc_AddVanDerWaalsModel(sipWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipAddVanDerWaalsModel *>(sipSelf->u.cppPtr)->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_AddVanDerWaalsModel(sipSelf->u.cppPtr,sipSelf->flags);
    }
}


extern "C" {static void *init_AddVanDerWaalsModel(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_AddVanDerWaalsModel(sipWrapper *sipSelf,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    sipAddVanDerWaalsModel *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            sipCpp = new sipAddVanDerWaalsModel();
        }
    }

    if (!sipCpp)
    {
        const AddVanDerWaalsModel * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_AddVanDerWaalsModel,&a0))
        {
            sipCpp = new sipAddVanDerWaalsModel(*a0);
        }
    }

    if (sipCpp)
        sipCpp->sipPySelf = sipSelf;

    return sipCpp;
}


extern "C" {static void *forceConvertTo_AddVanDerWaalsModel(PyObject *, int *);}
static void *forceConvertTo_AddVanDerWaalsModel(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_AddVanDerWaalsModel))
        return sipConvertToCpp(valobj,sipClass_AddVanDerWaalsModel,iserrp);

    sipBadClass(sipNm_BALL_AddVanDerWaalsModel);

    *iserrp = 1;

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedClassDef supers_AddVanDerWaalsModel[] = {{10, 255, 1}};


static PyMethodDef methods_AddVanDerWaalsModel[] = {
    {sipNm_BALL_getVDWRadiusFactor, meth_AddVanDerWaalsModel_getVDWRadiusFactor, METH_VARARGS, NULL},
    {sipNm_BALL_setVDWRadiusFactor, meth_AddVanDerWaalsModel_setVDWRadiusFactor, METH_VARARGS, NULL}
};


sipTypeDef sipType_BALL_AddVanDerWaalsModel = {
    0,
    0,
    "BALL.AddVanDerWaalsModel",
    0,
    {0, 0, 1},
    supers_AddVanDerWaalsModel,
    0,
    2, methods_AddVanDerWaalsModel,
    0, 0,
    0,
    init_AddVanDerWaalsModel,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_AddVanDerWaalsModel,
    cast_AddVanDerWaalsModel,
    release_AddVanDerWaalsModel,
    forceConvertTo_AddVanDerWaalsModel,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
