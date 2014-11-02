/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLAddLineModel.h"

#include "sipBALLAtomBondModelBaseProcessor.h"
#include "sipBALLModelProcessor.h"
#include "sipBALLProcessor.h"
#include "sipBALLComposite.h"
#include "sipBALLIndex.h"
#include "sipBALLGeometricObjectList.h"


sipAddLineModel::sipAddLineModel() throw(): AddLineModel(), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,4);
}

sipAddLineModel::sipAddLineModel(const AddLineModel& a0) throw(): AddLineModel(a0), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,4);
}

sipAddLineModel::~sipAddLineModel() throw()
{
    sipCommonDtor(sipPySelf);
}

void sipAddLineModel::clear() throw()
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

void sipAddLineModel::clearComposites() throw()
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

bool sipAddLineModel::createGeometricObjects() throw()
{
    extern bool sipVH_BALL_4(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[2],sipPySelf,NULL,sipNm_BALL_createGeometricObjects);

    if (!meth)
        return AtomBondModelBaseProcessor::createGeometricObjects();

    return sipVH_BALL_4(sipGILState,meth);
}

bool sipAddLineModel::isValid() const throw()
{
    extern bool sipVH_BALL_4(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<sipMethodCache *>(&sipPyMethods[3]),sipPySelf,NULL,sipNm_BALL_isValid);

    if (!meth)
        return ModelProcessor::isValid();

    return sipVH_BALL_4(sipGILState,meth);
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_AddLineModel(void *, sipWrapperType *);}
static void *cast_AddLineModel(void *ptr,sipWrapperType *targetClass)
{
    void *res;

    if (targetClass == sipClass_AddLineModel)
        return ptr;

    if ((res = sipCast_AtomBondModelBaseProcessor((AtomBondModelBaseProcessor *)(AddLineModel *)ptr,targetClass)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_AddLineModel(void *, int);}
static void release_AddLineModel(void *ptr,int state)
{
    if (state & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipAddLineModel *>(ptr);
    else
        delete reinterpret_cast<AddLineModel *>(ptr);
}


extern "C" {static void dealloc_AddLineModel(sipWrapper *);}
static void dealloc_AddLineModel(sipWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipAddLineModel *>(sipSelf->u.cppPtr)->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_AddLineModel(sipSelf->u.cppPtr,sipSelf->flags);
    }
}


extern "C" {static void *init_AddLineModel(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_AddLineModel(sipWrapper *sipSelf,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    sipAddLineModel *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            sipCpp = new sipAddLineModel();
        }
    }

    if (!sipCpp)
    {
        const AddLineModel * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_AddLineModel,&a0))
        {
            sipCpp = new sipAddLineModel(*a0);
        }
    }

    if (sipCpp)
        sipCpp->sipPySelf = sipSelf;

    return sipCpp;
}


extern "C" {static void *forceConvertTo_AddLineModel(PyObject *, int *);}
static void *forceConvertTo_AddLineModel(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_AddLineModel))
        return sipConvertToCpp(valobj,sipClass_AddLineModel,iserrp);

    sipBadClass(sipNm_BALL_AddLineModel);

    *iserrp = 1;

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedClassDef supers_AddLineModel[] = {{10, 255, 1}};


sipTypeDef sipType_BALL_AddLineModel = {
    0,
    0,
    "BALL.AddLineModel",
    0,
    {0, 0, 1},
    supers_AddLineModel,
    0,
    0, 0,
    0, 0,
    0,
    init_AddLineModel,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_AddLineModel,
    cast_AddLineModel,
    release_AddLineModel,
    forceConvertTo_AddLineModel,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
