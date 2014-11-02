/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLAddCartoonModel.h"

#include "sipBALLAddBackboneModel.h"
#include "sipBALLAddCartoonModel.h"
#include "sipBALLModelProcessor.h"
#include "sipBALLProcessor.h"
#include "sipBALLComposite.h"
#include "sipBALLIndex.h"
#include "sipBALLGeometricObjectList.h"


sipAddCartoonModel::sipAddCartoonModel() throw(): AddCartoonModel(), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,4);
}

sipAddCartoonModel::sipAddCartoonModel(const AddCartoonModel& a0) throw(): AddCartoonModel(a0), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,4);
}

sipAddCartoonModel::~sipAddCartoonModel() throw()
{
    sipCommonDtor(sipPySelf);
}

void sipAddCartoonModel::clear() throw()
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

bool sipAddCartoonModel::createGeometricObjects() throw()
{
    extern bool sipVH_BALL_4(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,NULL,sipNm_BALL_createGeometricObjects);

    if (!meth)
        return AddBackboneModel::createGeometricObjects();

    return sipVH_BALL_4(sipGILState,meth);
}

bool sipAddCartoonModel::isValid() const throw()
{
    extern bool sipVH_BALL_4(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<sipMethodCache *>(&sipPyMethods[2]),sipPySelf,NULL,sipNm_BALL_isValid);

    if (!meth)
        return ModelProcessor::isValid();

    return sipVH_BALL_4(sipGILState,meth);
}

void sipAddCartoonModel::clearComposites() throw()
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


extern "C" {static PyObject *meth_AddCartoonModel_setHelixRadius(PyObject *, PyObject *);}
static PyObject *meth_AddCartoonModel_setHelixRadius(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        float a0;
        AddCartoonModel *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bf",&sipSelf,sipClass_AddCartoonModel,&sipCpp,&a0))
        {
            sipCpp->setHelixRadius(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_AddCartoonModel,sipNm_BALL_setHelixRadius);

    return NULL;
}


extern "C" {static PyObject *meth_AddCartoonModel_getHelixRadius(PyObject *, PyObject *);}
static PyObject *meth_AddCartoonModel_getHelixRadius(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        AddCartoonModel *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_AddCartoonModel,&sipCpp))
        {
            float sipRes;

            sipRes = sipCpp->getHelixRadius();

            return PyFloat_FromDouble((double)sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_AddCartoonModel,sipNm_BALL_getHelixRadius);

    return NULL;
}


extern "C" {static PyObject *meth_AddCartoonModel_setArrowWidth(PyObject *, PyObject *);}
static PyObject *meth_AddCartoonModel_setArrowWidth(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        float a0;
        AddCartoonModel *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bf",&sipSelf,sipClass_AddCartoonModel,&sipCpp,&a0))
        {
            sipCpp->setArrowWidth(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_AddCartoonModel,sipNm_BALL_setArrowWidth);

    return NULL;
}


extern "C" {static PyObject *meth_AddCartoonModel_getArrowWidth(PyObject *, PyObject *);}
static PyObject *meth_AddCartoonModel_getArrowWidth(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        AddCartoonModel *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_AddCartoonModel,&sipCpp))
        {
            float sipRes;

            sipRes = sipCpp->getArrowWidth();

            return PyFloat_FromDouble((double)sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_AddCartoonModel,sipNm_BALL_getArrowWidth);

    return NULL;
}


extern "C" {static PyObject *meth_AddCartoonModel_setStrandHeight(PyObject *, PyObject *);}
static PyObject *meth_AddCartoonModel_setStrandHeight(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        float a0;
        AddCartoonModel *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bf",&sipSelf,sipClass_AddCartoonModel,&sipCpp,&a0))
        {
            sipCpp->setStrandHeight(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_AddCartoonModel,sipNm_BALL_setStrandHeight);

    return NULL;
}


extern "C" {static PyObject *meth_AddCartoonModel_getStrandHeight(PyObject *, PyObject *);}
static PyObject *meth_AddCartoonModel_getStrandHeight(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        AddCartoonModel *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_AddCartoonModel,&sipCpp))
        {
            float sipRes;

            sipRes = sipCpp->getStrandHeight();

            return PyFloat_FromDouble((double)sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_AddCartoonModel,sipNm_BALL_getStrandHeight);

    return NULL;
}


extern "C" {static PyObject *meth_AddCartoonModel_setStrandWidth(PyObject *, PyObject *);}
static PyObject *meth_AddCartoonModel_setStrandWidth(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        float a0;
        AddCartoonModel *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bf",&sipSelf,sipClass_AddCartoonModel,&sipCpp,&a0))
        {
            sipCpp->setStrandWidth(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_AddCartoonModel,sipNm_BALL_setStrandWidth);

    return NULL;
}


extern "C" {static PyObject *meth_AddCartoonModel_getStrandWidth(PyObject *, PyObject *);}
static PyObject *meth_AddCartoonModel_getStrandWidth(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        AddCartoonModel *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_AddCartoonModel,&sipCpp))
        {
            float sipRes;

            sipRes = sipCpp->getStrandWidth();

            return PyFloat_FromDouble((double)sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_AddCartoonModel,sipNm_BALL_getStrandWidth);

    return NULL;
}


extern "C" {static PyObject *meth_AddCartoonModel_setDNABaseRadius(PyObject *, PyObject *);}
static PyObject *meth_AddCartoonModel_setDNABaseRadius(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        float a0;
        AddCartoonModel *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bf",&sipSelf,sipClass_AddCartoonModel,&sipCpp,&a0))
        {
            sipCpp->setDNABaseRadius(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_AddCartoonModel,sipNm_BALL_setDNABaseRadius);

    return NULL;
}


extern "C" {static PyObject *meth_AddCartoonModel_getDNABaseRadius(PyObject *, PyObject *);}
static PyObject *meth_AddCartoonModel_getDNABaseRadius(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        AddCartoonModel *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_AddCartoonModel,&sipCpp))
        {
            float sipRes;

            sipRes = sipCpp->getDNABaseRadius();

            return PyFloat_FromDouble((double)sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_AddCartoonModel,sipNm_BALL_getDNABaseRadius);

    return NULL;
}


extern "C" {static PyObject *meth_AddCartoonModel_setDNAHelixRadius(PyObject *, PyObject *);}
static PyObject *meth_AddCartoonModel_setDNAHelixRadius(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        float a0;
        AddCartoonModel *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bf",&sipSelf,sipClass_AddCartoonModel,&sipCpp,&a0))
        {
            sipCpp->setDNAHelixRadius(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_AddCartoonModel,sipNm_BALL_setDNAHelixRadius);

    return NULL;
}


extern "C" {static PyObject *meth_AddCartoonModel_getDNAHelixRadius(PyObject *, PyObject *);}
static PyObject *meth_AddCartoonModel_getDNAHelixRadius(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        AddCartoonModel *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_AddCartoonModel,&sipCpp))
        {
            float sipRes;

            sipRes = sipCpp->getDNAHelixRadius();

            return PyFloat_FromDouble((double)sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_AddCartoonModel,sipNm_BALL_getDNAHelixRadius);

    return NULL;
}


extern "C" {static PyObject *meth_AddCartoonModel_setDNALadderRadius(PyObject *, PyObject *);}
static PyObject *meth_AddCartoonModel_setDNALadderRadius(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        float a0;
        AddCartoonModel *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bf",&sipSelf,sipClass_AddCartoonModel,&sipCpp,&a0))
        {
            sipCpp->setDNALadderRadius(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_AddCartoonModel,sipNm_BALL_setDNALadderRadius);

    return NULL;
}


extern "C" {static PyObject *meth_AddCartoonModel_getDNALadderRadius(PyObject *, PyObject *);}
static PyObject *meth_AddCartoonModel_getDNALadderRadius(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        AddCartoonModel *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_AddCartoonModel,&sipCpp))
        {
            float sipRes;

            sipRes = sipCpp->getDNALadderRadius();

            return PyFloat_FromDouble((double)sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_AddCartoonModel,sipNm_BALL_getDNALadderRadius);

    return NULL;
}


extern "C" {static PyObject *meth_AddCartoonModel_setDrawDNAAsLadderModel(PyObject *, PyObject *);}
static PyObject *meth_AddCartoonModel_setDrawDNAAsLadderModel(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        bool a0;
        AddCartoonModel *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bb",&sipSelf,sipClass_AddCartoonModel,&sipCpp,&a0))
        {
            sipCpp->setDrawDNAAsLadderModel(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_AddCartoonModel,sipNm_BALL_setDrawDNAAsLadderModel);

    return NULL;
}


extern "C" {static PyObject *meth_AddCartoonModel_drawDNAAsLadderModel(PyObject *, PyObject *);}
static PyObject *meth_AddCartoonModel_drawDNAAsLadderModel(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        AddCartoonModel *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_AddCartoonModel,&sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->drawDNAAsLadderModel();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_AddCartoonModel,sipNm_BALL_drawDNAAsLadderModel);

    return NULL;
}


extern "C" {static PyObject *meth_AddCartoonModel_enableRibbons(PyObject *, PyObject *);}
static PyObject *meth_AddCartoonModel_enableRibbons(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        bool a0;
        AddCartoonModel *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bb",&sipSelf,sipClass_AddCartoonModel,&sipCpp,&a0))
        {
            sipCpp->enableRibbons(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_AddCartoonModel,sipNm_BALL_enableRibbons);

    return NULL;
}


extern "C" {static PyObject *meth_AddCartoonModel_ribbonsEnabled(PyObject *, PyObject *);}
static PyObject *meth_AddCartoonModel_ribbonsEnabled(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        AddCartoonModel *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_AddCartoonModel,&sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->ribbonsEnabled();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_AddCartoonModel,sipNm_BALL_ribbonsEnabled);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_AddCartoonModel(void *, sipWrapperType *);}
static void *cast_AddCartoonModel(void *ptr,sipWrapperType *targetClass)
{
    void *res;

    if (targetClass == sipClass_AddCartoonModel)
        return ptr;

    if ((res = sipCast_AddBackboneModel((AddBackboneModel *)(AddCartoonModel *)ptr,targetClass)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_AddCartoonModel(void *, int);}
static void release_AddCartoonModel(void *ptr,int state)
{
    if (state & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipAddCartoonModel *>(ptr);
    else
        delete reinterpret_cast<AddCartoonModel *>(ptr);
}


extern "C" {static void dealloc_AddCartoonModel(sipWrapper *);}
static void dealloc_AddCartoonModel(sipWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipAddCartoonModel *>(sipSelf->u.cppPtr)->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_AddCartoonModel(sipSelf->u.cppPtr,sipSelf->flags);
    }
}


extern "C" {static void *init_AddCartoonModel(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_AddCartoonModel(sipWrapper *sipSelf,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    sipAddCartoonModel *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            sipCpp = new sipAddCartoonModel();
        }
    }

    if (!sipCpp)
    {
        const AddCartoonModel * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_AddCartoonModel,&a0))
        {
            sipCpp = new sipAddCartoonModel(*a0);
        }
    }

    if (sipCpp)
        sipCpp->sipPySelf = sipSelf;

    return sipCpp;
}


extern "C" {static void *forceConvertTo_AddCartoonModel(PyObject *, int *);}
static void *forceConvertTo_AddCartoonModel(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_AddCartoonModel))
        return sipConvertToCpp(valobj,sipClass_AddCartoonModel,iserrp);

    sipBadClass(sipNm_BALL_AddCartoonModel);

    *iserrp = 1;

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedClassDef supers_AddCartoonModel[] = {{8, 255, 1}};


static PyMethodDef methods_AddCartoonModel[] = {
    {sipNm_BALL_drawDNAAsLadderModel, meth_AddCartoonModel_drawDNAAsLadderModel, METH_VARARGS, NULL},
    {sipNm_BALL_enableRibbons, meth_AddCartoonModel_enableRibbons, METH_VARARGS, NULL},
    {sipNm_BALL_getArrowWidth, meth_AddCartoonModel_getArrowWidth, METH_VARARGS, NULL},
    {sipNm_BALL_getDNABaseRadius, meth_AddCartoonModel_getDNABaseRadius, METH_VARARGS, NULL},
    {sipNm_BALL_getDNAHelixRadius, meth_AddCartoonModel_getDNAHelixRadius, METH_VARARGS, NULL},
    {sipNm_BALL_getDNALadderRadius, meth_AddCartoonModel_getDNALadderRadius, METH_VARARGS, NULL},
    {sipNm_BALL_getHelixRadius, meth_AddCartoonModel_getHelixRadius, METH_VARARGS, NULL},
    {sipNm_BALL_getStrandHeight, meth_AddCartoonModel_getStrandHeight, METH_VARARGS, NULL},
    {sipNm_BALL_getStrandWidth, meth_AddCartoonModel_getStrandWidth, METH_VARARGS, NULL},
    {sipNm_BALL_ribbonsEnabled, meth_AddCartoonModel_ribbonsEnabled, METH_VARARGS, NULL},
    {sipNm_BALL_setArrowWidth, meth_AddCartoonModel_setArrowWidth, METH_VARARGS, NULL},
    {sipNm_BALL_setDNABaseRadius, meth_AddCartoonModel_setDNABaseRadius, METH_VARARGS, NULL},
    {sipNm_BALL_setDNAHelixRadius, meth_AddCartoonModel_setDNAHelixRadius, METH_VARARGS, NULL},
    {sipNm_BALL_setDNALadderRadius, meth_AddCartoonModel_setDNALadderRadius, METH_VARARGS, NULL},
    {sipNm_BALL_setDrawDNAAsLadderModel, meth_AddCartoonModel_setDrawDNAAsLadderModel, METH_VARARGS, NULL},
    {sipNm_BALL_setHelixRadius, meth_AddCartoonModel_setHelixRadius, METH_VARARGS, NULL},
    {sipNm_BALL_setStrandHeight, meth_AddCartoonModel_setStrandHeight, METH_VARARGS, NULL},
    {sipNm_BALL_setStrandWidth, meth_AddCartoonModel_setStrandWidth, METH_VARARGS, NULL}
};


sipTypeDef sipType_BALL_AddCartoonModel = {
    0,
    0,
    "BALL.AddCartoonModel",
    0,
    {0, 0, 1},
    supers_AddCartoonModel,
    0,
    18, methods_AddCartoonModel,
    0, 0,
    0,
    init_AddCartoonModel,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_AddCartoonModel,
    cast_AddCartoonModel,
    release_AddCartoonModel,
    forceConvertTo_AddCartoonModel,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
