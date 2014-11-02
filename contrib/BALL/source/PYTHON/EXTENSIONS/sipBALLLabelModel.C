/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLLabelModel.h"

#include "sipBALLModelProcessor.h"
#include "sipBALLLabelModel.h"
#include "sipBALLString.h"
#include "sipBALLColorRGBA.h"
#include "sipBALLProcessor.h"
#include "sipBALLComposite.h"
#include "sipBALLIndex.h"
#include "sipBALLGeometricObjectList.h"


sipLabelModel::sipLabelModel() throw(): LabelModel(), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,4);
}

sipLabelModel::sipLabelModel(const LabelModel& a0) throw(): LabelModel(a0), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,4);
}

sipLabelModel::~sipLabelModel() throw()
{
    sipCommonDtor(sipPySelf);
}

bool sipLabelModel::createGeometricObjects() throw()
{
    extern bool sipVH_BALL_4(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipNm_BALL_createGeometricObjects);

    if (!meth)
        return LabelModel::createGeometricObjects();

    return sipVH_BALL_4(sipGILState,meth);
}

void sipLabelModel::clear() throw()
{
    extern void sipVH_BALL_0(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,NULL,sipNm_BALL_clear);

    if (!meth)
    {
        ModelProcessor::clear();
        return;
    }

    sipVH_BALL_0(sipGILState,meth);
}

bool sipLabelModel::isValid() const throw()
{
    extern bool sipVH_BALL_4(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<sipMethodCache *>(&sipPyMethods[2]),sipPySelf,NULL,sipNm_BALL_isValid);

    if (!meth)
        return ModelProcessor::isValid();

    return sipVH_BALL_4(sipGILState,meth);
}

void sipLabelModel::clearComposites() throw()
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


extern "C" {static PyObject *meth_LabelModel_setColor(PyObject *, PyObject *);}
static PyObject *meth_LabelModel_setColor(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const ColorRGBA * a0;
        LabelModel *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_LabelModel,&sipCpp,sipClass_ColorRGBA,&a0))
        {
            sipCpp->setColor(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_LabelModel,sipNm_BALL_setColor);

    return NULL;
}


extern "C" {static PyObject *meth_LabelModel_getColor(PyObject *, PyObject *);}
static PyObject *meth_LabelModel_getColor(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        LabelModel *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_LabelModel,&sipCpp))
        {
            const ColorRGBA *sipRes;

            sipRes = &sipCpp->getColor();

            return sipConvertFromInstance(const_cast<ColorRGBA *>(sipRes),sipClass_ColorRGBA,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_LabelModel,sipNm_BALL_getColor);

    return NULL;
}


extern "C" {static PyObject *meth_LabelModel_setMode(PyObject *, PyObject *);}
static PyObject *meth_LabelModel_setMode(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        LabelModel::Mode a0;
        LabelModel *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BE",&sipSelf,sipClass_LabelModel,&sipCpp,sipEnum_LabelModel_Mode,&a0))
        {
            sipCpp->setMode(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_LabelModel,sipNm_BALL_setMode);

    return NULL;
}


extern "C" {static PyObject *meth_LabelModel_getType(PyObject *, PyObject *);}
static PyObject *meth_LabelModel_getType(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        LabelModel *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_LabelModel,&sipCpp))
        {
            LabelModel::Mode sipRes;

            sipRes = sipCpp->getType();

            return sipConvertFromNamedEnum(sipRes,sipEnum_LabelModel_Mode);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_LabelModel,sipNm_BALL_getType);

    return NULL;
}


extern "C" {static PyObject *meth_LabelModel_setText(PyObject *, PyObject *);}
static PyObject *meth_LabelModel_setText(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const String * a0;
        int a0State = 0;
        LabelModel *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ1",&sipSelf,sipClass_LabelModel,&sipCpp,sipClass_String,&a0,&a0State))
        {
            try
            {
            sipCpp->setText(*a0);
            }
            catch (...)
            {

            sipReleaseInstance(const_cast<String *>(a0),sipClass_String,a0State);
                sipRaiseUnknownException();
                return NULL;
            }

            sipReleaseInstance(const_cast<String *>(a0),sipClass_String,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_LabelModel,sipNm_BALL_setText);

    return NULL;
}


extern "C" {static PyObject *meth_LabelModel_getText(PyObject *, PyObject *);}
static PyObject *meth_LabelModel_getText(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        LabelModel *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_LabelModel,&sipCpp))
        {
            const String *sipRes;

            try
            {
            sipRes = &sipCpp->getText();
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return sipConvertFromInstance(const_cast<String *>(sipRes),sipClass_String,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_LabelModel,sipNm_BALL_getText);

    return NULL;
}


extern "C" {static PyObject *meth_LabelModel_createGeometricObjects(PyObject *, PyObject *);}
static PyObject *meth_LabelModel_createGeometricObjects(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        LabelModel *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_LabelModel,&sipCpp))
        {
            bool sipRes;

            sipRes = (sipSelfWasArg ? sipCpp->LabelModel::createGeometricObjects() : sipCpp->createGeometricObjects());

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_LabelModel,sipNm_BALL_createGeometricObjects);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_LabelModel(void *, sipWrapperType *);}
static void *cast_LabelModel(void *ptr,sipWrapperType *targetClass)
{
    void *res;

    if (targetClass == sipClass_LabelModel)
        return ptr;

    if ((res = sipCast_ModelProcessor((ModelProcessor *)(LabelModel *)ptr,targetClass)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_LabelModel(void *, int);}
static void release_LabelModel(void *ptr,int state)
{
    if (state & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipLabelModel *>(ptr);
    else
        delete reinterpret_cast<LabelModel *>(ptr);
}


extern "C" {static void dealloc_LabelModel(sipWrapper *);}
static void dealloc_LabelModel(sipWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipLabelModel *>(sipSelf->u.cppPtr)->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_LabelModel(sipSelf->u.cppPtr,sipSelf->flags);
    }
}


extern "C" {static void *init_LabelModel(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_LabelModel(sipWrapper *sipSelf,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    sipLabelModel *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            sipCpp = new sipLabelModel();
        }
    }

    if (!sipCpp)
    {
        const LabelModel * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_LabelModel,&a0))
        {
            sipCpp = new sipLabelModel(*a0);
        }
    }

    if (sipCpp)
        sipCpp->sipPySelf = sipSelf;

    return sipCpp;
}


extern "C" {static void *forceConvertTo_LabelModel(PyObject *, int *);}
static void *forceConvertTo_LabelModel(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_LabelModel))
        return sipConvertToCpp(valobj,sipClass_LabelModel,iserrp);

    sipBadClass(sipNm_BALL_LabelModel);

    *iserrp = 1;

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedClassDef supers_LabelModel[] = {{4, 255, 1}};


static PyMethodDef methods_LabelModel[] = {
    {sipNm_BALL_createGeometricObjects, meth_LabelModel_createGeometricObjects, METH_VARARGS, NULL},
    {sipNm_BALL_getColor, meth_LabelModel_getColor, METH_VARARGS, NULL},
    {sipNm_BALL_getText, meth_LabelModel_getText, METH_VARARGS, NULL},
    {sipNm_BALL_getType, meth_LabelModel_getType, METH_VARARGS, NULL},
    {sipNm_BALL_setColor, meth_LabelModel_setColor, METH_VARARGS, NULL},
    {sipNm_BALL_setMode, meth_LabelModel_setMode, METH_VARARGS, NULL},
    {sipNm_BALL_setText, meth_LabelModel_setText, METH_VARARGS, NULL}
};

static sipEnumMemberDef enummembers_LabelModel[] = {
    {sipNm_BALL_ALL_ATOMS, LabelModel::ALL_ATOMS, 0},
    {sipNm_BALL_ALL_ITEMS, LabelModel::ALL_ITEMS, 0},
    {sipNm_BALL_ALL_RESIDUES, LabelModel::ALL_RESIDUES, 0},
    {sipNm_BALL_ONE_LABEL, LabelModel::ONE_LABEL, 0},
};


sipTypeDef sipType_BALL_LabelModel = {
    0,
    0,
    "BALL.LabelModel",
    0,
    {0, 0, 1},
    supers_LabelModel,
    0,
    7, methods_LabelModel,
    4, enummembers_LabelModel,
    0,
    init_LabelModel,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_LabelModel,
    cast_LabelModel,
    release_LabelModel,
    forceConvertTo_LabelModel,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
