/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLDatasetControl.h"

#include "sipBALLDockWidget.h"
#include "sipBALLDatasetControl.h"
#include "sipBALLDatasetController.h"
#include "sipBALLString.h"
#include "sipBALLPyDatasetVector.h"
#include "sipBALLPosition.h"
#include "sipBALLModularWidget.h"
#include "sipBALLFragmentDB.h"
#include "sipBALLMainControl.h"
#include "sipBALLINIFile.h"
#include "sipBALLEmbeddable.h"


sipDatasetControl::sipDatasetControl() throw(): DatasetControl(), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,11);
}

sipDatasetControl::sipDatasetControl(const DatasetControl& a0): DatasetControl(a0), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,11);
}

sipDatasetControl::~sipDatasetControl() throw()
{
    sipCommonDtor(sipPySelf);
}

void sipDatasetControl::destroy() throw()
{
    extern void sipVH_BALL_0(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipNm_BALL_destroy);

    if (!meth)
    {
        ModularWidget::destroy();
        return;
    }

    sipVH_BALL_0(sipGILState,meth);
}

void sipDatasetControl::clear() throw()
{
    extern void sipVH_BALL_0(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,NULL,sipNm_BALL_clear);

    if (!meth)
    {
        ModularWidget::clear();
        return;
    }

    sipVH_BALL_0(sipGILState,meth);
}

void sipDatasetControl::checkMenu(MainControl& a0) throw()
{
    extern void sipVH_BALL_1(sip_gilstate_t,PyObject *,MainControl&);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[2],sipPySelf,NULL,sipNm_BALL_checkMenu);

    if (!meth)
    {
        ModularWidget::checkMenu(a0);
        return;
    }

    sipVH_BALL_1(sipGILState,meth,a0);
}

void sipDatasetControl::applyPreferences() throw()
{
    extern void sipVH_BALL_0(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[3],sipPySelf,NULL,sipNm_BALL_applyPreferences);

    if (!meth)
    {
        DockWidget::applyPreferences();
        return;
    }

    sipVH_BALL_0(sipGILState,meth);
}

void sipDatasetControl::fetchPreferences(INIFile& a0) throw()
{
    extern void sipVH_BALL_5(sip_gilstate_t,PyObject *,INIFile&);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[4],sipPySelf,NULL,sipNm_BALL_fetchPreferences);

    if (!meth)
    {
        ModularWidget::fetchPreferences(a0);
        return;
    }

    sipVH_BALL_5(sipGILState,meth,a0);
}

void sipDatasetControl::writePreferences(INIFile& a0) throw()
{
    extern void sipVH_BALL_5(sip_gilstate_t,PyObject *,INIFile&);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[5],sipPySelf,NULL,sipNm_BALL_writePreferences);

    if (!meth)
    {
        ModularWidget::writePreferences(a0);
        return;
    }

    sipVH_BALL_5(sipGILState,meth,a0);
}

void sipDatasetControl::setStatusbarText(String a0,bool a1) throw()
{
    extern void sipVH_BALL_10(sip_gilstate_t,PyObject *,String,bool);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[6],sipPySelf,NULL,sipNm_BALL_setStatusbarText);

    if (!meth)
    {
        ModularWidget::setStatusbarText(a0,a1);
        return;
    }

    sipVH_BALL_10(sipGILState,meth,a0,a1);
}

void sipDatasetControl::showHelp(const String& a0)
{
    extern void sipVH_BALL_9(sip_gilstate_t,PyObject *,const String&);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[7],sipPySelf,NULL,sipNm_BALL_showHelp);

    if (!meth)
    {
        ModularWidget::showHelp(a0);
        return;
    }

    sipVH_BALL_9(sipGILState,meth,a0);
}

bool sipDatasetControl::canHandle(const String& a0) const
{
    extern bool sipVH_BALL_8(sip_gilstate_t,PyObject *,const String&);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<sipMethodCache *>(&sipPyMethods[8]),sipPySelf,NULL,sipNm_BALL_canHandle);

    if (!meth)
        return ModularWidget::canHandle(a0);

    return sipVH_BALL_8(sipGILState,meth,a0);
}

bool sipDatasetControl::openFile(const String& a0)
{
    extern bool sipVH_BALL_8(sip_gilstate_t,PyObject *,const String&);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[9],sipPySelf,NULL,sipNm_BALL_openFile);

    if (!meth)
        return ModularWidget::openFile(a0);

    return sipVH_BALL_8(sipGILState,meth,a0);
}

void sipDatasetControl::registerThis() throw()
{
    extern void sipVH_BALL_0(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[10],sipPySelf,NULL,sipNm_BALL_registerThis);

    if (!meth)
    {
        Embeddable::registerThis();
        return;
    }

    sipVH_BALL_0(sipGILState,meth);
}


extern "C" {static PyObject *meth_DatasetControl_countInstances(PyObject *, PyObject *);}
static PyObject *meth_DatasetControl_countInstances(PyObject *,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        if (sipParseArgs(&sipArgsParsed,sipArgs,""))
        {
            int sipRes;

            try
            {
            sipRes = DatasetControl::countInstances();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_DatasetControl,sipNm_BALL_countInstances);

    return NULL;
}


extern "C" {static PyObject *meth_DatasetControl_getInstance(PyObject *, PyObject *);}
static PyObject *meth_DatasetControl_getInstance(PyObject *,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Position * a0;
        int a0State = 0;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"M1",sipMappedType_Position,&a0,&a0State))
        {
            DatasetControl *sipRes;

            try
            {
            sipRes = DatasetControl::getInstance(*a0);
            }
            catch (...)
            {

            sipReleaseMappedType(a0,sipMappedType_Position,a0State);
                sipRaiseUnknownException();
                return NULL;
            }

            sipReleaseMappedType(a0,sipMappedType_Position,a0State);

            return sipConvertFromInstance(sipRes,sipClass_DatasetControl,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_DatasetControl,sipNm_BALL_getInstance);

    return NULL;
}


extern "C" {static PyObject *meth_DatasetControl_getSelectionSize(PyObject *, PyObject *);}
static PyObject *meth_DatasetControl_getSelectionSize(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        DatasetControl *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_DatasetControl,&sipCpp))
        {
            int sipRes;

            try
            {
            sipRes = sipCpp->getSelectionSize();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_DatasetControl,sipNm_BALL_getSelectionSize);

    return NULL;
}


extern "C" {static PyObject *meth_DatasetControl_getDatasets(PyObject *, PyObject *);}
static PyObject *meth_DatasetControl_getDatasets(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const String * a0;
        int a0State = 0;
        DatasetControl *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ1",&sipSelf,sipClass_DatasetControl,&sipCpp,sipClass_String,&a0,&a0State))
        {
            PyDatasetVector *sipRes;

            try
            {
            sipRes = new PyDatasetVector(sipCpp->getDatasets(*a0));
            }
            catch (...)
            {

            sipReleaseInstance(const_cast<String *>(a0),sipClass_String,a0State);
                sipRaiseUnknownException();
                return NULL;
            }

            sipReleaseInstance(const_cast<String *>(a0),sipClass_String,a0State);

            PyObject *sipResObj = sipConvertFromMappedType(sipRes,sipMappedType_PyDatasetVector,NULL);
            delete sipRes;

            return sipResObj;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_DatasetControl,sipNm_BALL_getDatasets);

    return NULL;
}


extern "C" {static PyObject *meth_DatasetControl_getController(PyObject *, PyObject *);}
static PyObject *meth_DatasetControl_getController(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const String * a0;
        int a0State = 0;
        DatasetControl *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ1",&sipSelf,sipClass_DatasetControl,&sipCpp,sipClass_String,&a0,&a0State))
        {
            DatasetController *sipRes;

            try
            {
            sipRes = sipCpp->getController(*a0);
            }
            catch (...)
            {

            sipReleaseInstance(const_cast<String *>(a0),sipClass_String,a0State);
                sipRaiseUnknownException();
                return NULL;
            }

            sipReleaseInstance(const_cast<String *>(a0),sipClass_String,a0State);

            return sipConvertFromInstance(sipRes,sipClass_DatasetController,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_DatasetControl,sipNm_BALL_getController);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_DatasetControl(void *, sipWrapperType *);}
static void *cast_DatasetControl(void *ptr,sipWrapperType *targetClass)
{
    void *res;

    if (targetClass == sipClass_DatasetControl)
        return ptr;

    if ((res = sipCast_DockWidget((DockWidget *)(DatasetControl *)ptr,targetClass)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_DatasetControl(void *, int);}
static void release_DatasetControl(void *ptr,int state)
{
    if (state & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipDatasetControl *>(ptr);
    else
        delete reinterpret_cast<DatasetControl *>(ptr);
}


extern "C" {static void dealloc_DatasetControl(sipWrapper *);}
static void dealloc_DatasetControl(sipWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipDatasetControl *>(sipSelf->u.cppPtr)->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_DatasetControl(sipSelf->u.cppPtr,sipSelf->flags);
    }
}


extern "C" {static void *init_DatasetControl(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_DatasetControl(sipWrapper *sipSelf,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    sipDatasetControl *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            sipCpp = new sipDatasetControl();
        }
    }

    if (!sipCpp)
    {
        const DatasetControl * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_DatasetControl,&a0))
        {
            try
            {
            sipCpp = new sipDatasetControl(*a0);
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


extern "C" {static void *forceConvertTo_DatasetControl(PyObject *, int *);}
static void *forceConvertTo_DatasetControl(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_DatasetControl))
        return sipConvertToCpp(valobj,sipClass_DatasetControl,iserrp);

    sipBadClass(sipNm_BALL_DatasetControl);

    *iserrp = 1;

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedClassDef supers_DatasetControl[] = {{208, 255, 1}};


static PyMethodDef methods_DatasetControl[] = {
    {sipNm_BALL_countInstances, meth_DatasetControl_countInstances, METH_VARARGS, NULL},
    {sipNm_BALL_getController, meth_DatasetControl_getController, METH_VARARGS, NULL},
    {sipNm_BALL_getDatasets, meth_DatasetControl_getDatasets, METH_VARARGS, NULL},
    {sipNm_BALL_getInstance, meth_DatasetControl_getInstance, METH_VARARGS, NULL},
    {sipNm_BALL_getSelectionSize, meth_DatasetControl_getSelectionSize, METH_VARARGS, NULL}
};


sipTypeDef sipType_BALL_DatasetControl = {
    0,
    0,
    "BALL.DatasetControl",
    0,
    {0, 0, 1},
    supers_DatasetControl,
    0,
    5, methods_DatasetControl,
    0, 0,
    0,
    init_DatasetControl,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_DatasetControl,
    cast_DatasetControl,
    release_DatasetControl,
    forceConvertTo_DatasetControl,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
