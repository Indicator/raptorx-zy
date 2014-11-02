/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLDatasetController.h"

#include "sipBALLEmbeddable.h"
#include "sipBALLDatasetController.h"
#include "sipBALLMainControl.h"
#include "sipBALLString.h"
#include "sipBALLDataset.h"
#include "sipBALLPyDatasetVector.h"
#include "sipBALLDatasetControl.h"
#include "sipBALLPosition.h"


sipDatasetController::sipDatasetController(): DatasetController(), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,9);
}

sipDatasetController::sipDatasetController(DatasetController& a0): DatasetController(a0), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,9);
}

sipDatasetController::~sipDatasetController() throw()
{
    sipCommonDtor(sipPySelf);
}

bool sipDatasetController::insertDataset(Dataset *a0)
{
    extern bool sipVH_BALL_20(sip_gilstate_t,PyObject *,Dataset *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipNm_BALL_insertDataset);

    if (!meth)
        return DatasetController::insertDataset(a0);

    return sipVH_BALL_20(sipGILState,meth,a0);
}

bool sipDatasetController::deleteDataset(Dataset *a0)
{
    extern bool sipVH_BALL_20(sip_gilstate_t,PyObject *,Dataset *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,NULL,sipNm_BALL_deleteDataset);

    if (!meth)
        return DatasetController::deleteDataset(a0);

    return sipVH_BALL_20(sipGILState,meth,a0);
}

bool sipDatasetController::createMenuEntries()
{
    extern bool sipVH_BALL_4(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[2],sipPySelf,NULL,sipNm_BALL_createMenuEntries);

    if (!meth)
        return DatasetController::createMenuEntries();

    return sipVH_BALL_4(sipGILState,meth);
}

void sipDatasetController::checkMenu(MainControl& a0)
{
    extern void sipVH_BALL_1(sip_gilstate_t,PyObject *,MainControl&);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[3],sipPySelf,NULL,sipNm_BALL_checkMenu);

    if (!meth)
    {
        DatasetController::checkMenu(a0);
        return;
    }

    sipVH_BALL_1(sipGILState,meth,a0);
}

bool sipDatasetController::write()
{
    extern bool sipVH_BALL_4(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[4],sipPySelf,NULL,sipNm_BALL_write);

    if (!meth)
        return DatasetController::write();

    return sipVH_BALL_4(sipGILState,meth);
}

bool sipDatasetController::open()
{
    extern bool sipVH_BALL_4(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[5],sipPySelf,NULL,sipNm_BALL_open);

    if (!meth)
        return DatasetController::open();

    return sipVH_BALL_4(sipGILState,meth);
}

bool sipDatasetController::deleteDatasets()
{
    extern bool sipVH_BALL_4(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[6],sipPySelf,NULL,sipNm_BALL_deleteDatasets);

    if (!meth)
        return DatasetController::deleteDatasets();

    return sipVH_BALL_4(sipGILState,meth);
}

bool sipDatasetController::deleteDataset()
{
    extern bool sipVH_BALL_4(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[7],sipPySelf,NULL,sipNm_BALL_deleteDataset);

    if (!meth)
        return DatasetController::deleteDataset();

    return sipVH_BALL_4(sipGILState,meth);
}

void sipDatasetController::registerThis() throw()
{
    extern void sipVH_BALL_0(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[8],sipPySelf,NULL,sipNm_BALL_registerThis);

    if (!meth)
    {
        Embeddable::registerThis();
        return;
    }

    sipVH_BALL_0(sipGILState,meth);
}


extern "C" {static PyObject *meth_DatasetController_countInstances(PyObject *, PyObject *);}
static PyObject *meth_DatasetController_countInstances(PyObject *,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        if (sipParseArgs(&sipArgsParsed,sipArgs,""))
        {
            int sipRes;

            try
            {
            sipRes = DatasetController::countInstances();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_DatasetController,sipNm_BALL_countInstances);

    return NULL;
}


extern "C" {static PyObject *meth_DatasetController_getInstance(PyObject *, PyObject *);}
static PyObject *meth_DatasetController_getInstance(PyObject *,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Position * a0;
        int a0State = 0;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"M1",sipMappedType_Position,&a0,&a0State))
        {
            DatasetController *sipRes;

            try
            {
            sipRes = DatasetController::getInstance(*a0);
            }
            catch (...)
            {

            sipReleaseMappedType(a0,sipMappedType_Position,a0State);
                sipRaiseUnknownException();
                return NULL;
            }

            sipReleaseMappedType(a0,sipMappedType_Position,a0State);

            return sipConvertFromInstance(sipRes,sipClass_DatasetController,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_DatasetController,sipNm_BALL_getInstance);

    return NULL;
}


extern "C" {static PyObject *meth_DatasetController_setDatasetControl(PyObject *, PyObject *);}
static PyObject *meth_DatasetController_setDatasetControl(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        DatasetControl * a0;
        DatasetController *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ@",&sipSelf,sipClass_DatasetController,&sipCpp,sipClass_DatasetControl,&a0))
        {
            try
            {
            sipCpp->setDatasetControl(a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_DatasetController,sipNm_BALL_setDatasetControl);

    return NULL;
}


extern "C" {static PyObject *meth_DatasetController_getDatasetControl(PyObject *, PyObject *);}
static PyObject *meth_DatasetController_getDatasetControl(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        DatasetController *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_DatasetController,&sipCpp))
        {
            DatasetControl *sipRes;

            try
            {
            sipRes = sipCpp->getDatasetControl();
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return sipConvertFromInstance(sipRes,sipClass_DatasetControl,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_DatasetController,sipNm_BALL_getDatasetControl);

    return NULL;
}


extern "C" {static PyObject *meth_DatasetController_insertDataset(PyObject *, PyObject *);}
static PyObject *meth_DatasetController_insertDataset(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        Dataset * a0;
        DatasetController *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJB",&sipSelf,sipClass_DatasetController,&sipCpp,sipClass_Dataset,&a0))
        {
            bool sipRes;

            try
            {
            sipRes = (sipSelfWasArg ? sipCpp->DatasetController::insertDataset(a0) : sipCpp->insertDataset(a0));
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_DatasetController,sipNm_BALL_insertDataset);

    return NULL;
}


extern "C" {static PyObject *meth_DatasetController_deleteDataset(PyObject *, PyObject *);}
static PyObject *meth_DatasetController_deleteDataset(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        Dataset * a0;
        DatasetController *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ@",&sipSelf,sipClass_DatasetController,&sipCpp,sipClass_Dataset,&a0))
        {
            bool sipRes;

            try
            {
            sipRes = (sipSelfWasArg ? sipCpp->DatasetController::deleteDataset(a0) : sipCpp->deleteDataset(a0));
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return PyBool_FromLong(sipRes);
        }
    }

    {
        DatasetController *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_DatasetController,&sipCpp))
        {
            bool sipRes;

            try
            {
            sipRes = (sipSelfWasArg ? sipCpp->DatasetController::deleteDataset() : sipCpp->deleteDataset());
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_DatasetController,sipNm_BALL_deleteDataset);

    return NULL;
}


extern "C" {static PyObject *meth_DatasetController_createMenuEntries(PyObject *, PyObject *);}
static PyObject *meth_DatasetController_createMenuEntries(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        DatasetController *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_DatasetController,&sipCpp))
        {
            bool sipRes;

            try
            {
            sipRes = (sipSelfWasArg ? sipCpp->DatasetController::createMenuEntries() : sipCpp->createMenuEntries());
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_DatasetController,sipNm_BALL_createMenuEntries);

    return NULL;
}


extern "C" {static PyObject *meth_DatasetController_getDatasets(PyObject *, PyObject *);}
static PyObject *meth_DatasetController_getDatasets(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        DatasetController *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_DatasetController,&sipCpp))
        {
            PyDatasetVector *sipRes;

            try
            {
            sipRes = new PyDatasetVector(sipCpp->getDatasets());
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            PyObject *sipResObj = sipConvertFromMappedType(sipRes,sipMappedType_PyDatasetVector,NULL);
            delete sipRes;

            return sipResObj;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_DatasetController,sipNm_BALL_getDatasets);

    return NULL;
}


extern "C" {static PyObject *meth_DatasetController_getSelectedDatasets(PyObject *, PyObject *);}
static PyObject *meth_DatasetController_getSelectedDatasets(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        DatasetController *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_DatasetController,&sipCpp))
        {
            PyDatasetVector *sipRes;

            try
            {
            sipRes = new PyDatasetVector(sipCpp->getSelectedDatasets());
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            PyObject *sipResObj = sipConvertFromMappedType(sipRes,sipMappedType_PyDatasetVector,NULL);
            delete sipRes;

            return sipResObj;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_DatasetController,sipNm_BALL_getSelectedDatasets);

    return NULL;
}


extern "C" {static PyObject *meth_DatasetController_getSelectedDataset(PyObject *, PyObject *);}
static PyObject *meth_DatasetController_getSelectedDataset(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        DatasetController *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_DatasetController,&sipCpp))
        {
            Dataset *sipRes;

            try
            {
            sipRes = sipCpp->getSelectedDataset();
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return sipConvertFromInstance(sipRes,sipClass_Dataset,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_DatasetController,sipNm_BALL_getSelectedDataset);

    return NULL;
}


extern "C" {static PyObject *meth_DatasetController_hasDataset(PyObject *, PyObject *);}
static PyObject *meth_DatasetController_hasDataset(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Dataset * a0;
        DatasetController *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ@",&sipSelf,sipClass_DatasetController,&sipCpp,sipClass_Dataset,&a0))
        {
            bool sipRes;

            try
            {
            sipRes = sipCpp->hasDataset(a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_DatasetController,sipNm_BALL_hasDataset);

    return NULL;
}


extern "C" {static PyObject *meth_DatasetController_getType(PyObject *, PyObject *);}
static PyObject *meth_DatasetController_getType(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        DatasetController *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_DatasetController,&sipCpp))
        {
            String *sipRes;

            try
            {
            sipRes = new String(sipCpp->getType());
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return sipConvertFromNewInstance(sipRes,sipClass_String,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_DatasetController,sipNm_BALL_getType);

    return NULL;
}


extern "C" {static PyObject *meth_DatasetController_checkMenu(PyObject *, PyObject *);}
static PyObject *meth_DatasetController_checkMenu(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        MainControl * a0;
        DatasetController *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_DatasetController,&sipCpp,sipClass_MainControl,&a0))
        {
            try
            {
            (sipSelfWasArg ? sipCpp->DatasetController::checkMenu(*a0) : sipCpp->checkMenu(*a0));
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_DatasetController,sipNm_BALL_checkMenu);

    return NULL;
}


extern "C" {static PyObject *meth_DatasetController_write(PyObject *, PyObject *);}
static PyObject *meth_DatasetController_write(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        DatasetController *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_DatasetController,&sipCpp))
        {
            bool sipRes;

            try
            {
            sipRes = (sipSelfWasArg ? sipCpp->DatasetController::write() : sipCpp->write());
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_DatasetController,sipNm_BALL_write);

    return NULL;
}


extern "C" {static PyObject *meth_DatasetController_open(PyObject *, PyObject *);}
static PyObject *meth_DatasetController_open(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        DatasetController *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_DatasetController,&sipCpp))
        {
            bool sipRes;

            try
            {
            sipRes = (sipSelfWasArg ? sipCpp->DatasetController::open() : sipCpp->open());
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_DatasetController,sipNm_BALL_open);

    return NULL;
}


extern "C" {static PyObject *meth_DatasetController_deleteDatasets(PyObject *, PyObject *);}
static PyObject *meth_DatasetController_deleteDatasets(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        DatasetController *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_DatasetController,&sipCpp))
        {
            bool sipRes;

            try
            {
            sipRes = (sipSelfWasArg ? sipCpp->DatasetController::deleteDatasets() : sipCpp->deleteDatasets());
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_DatasetController,sipNm_BALL_deleteDatasets);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_DatasetController(void *, sipWrapperType *);}
static void *cast_DatasetController(void *ptr,sipWrapperType *targetClass)
{
    void *res;

    if (targetClass == sipClass_DatasetController)
        return ptr;

    if ((res = sipCast_Embeddable((Embeddable *)(DatasetController *)ptr,targetClass)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_DatasetController(void *, int);}
static void release_DatasetController(void *ptr,int state)
{
    if (state & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipDatasetController *>(ptr);
    else
        delete reinterpret_cast<DatasetController *>(ptr);
}


extern "C" {static void dealloc_DatasetController(sipWrapper *);}
static void dealloc_DatasetController(sipWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipDatasetController *>(sipSelf->u.cppPtr)->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_DatasetController(sipSelf->u.cppPtr,sipSelf->flags);
    }
}


extern "C" {static void *init_DatasetController(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_DatasetController(sipWrapper *sipSelf,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    sipDatasetController *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            try
            {
            sipCpp = new sipDatasetController();
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
        DatasetController * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_DatasetController,&a0))
        {
            try
            {
            sipCpp = new sipDatasetController(*a0);
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


extern "C" {static void *forceConvertTo_DatasetController(PyObject *, int *);}
static void *forceConvertTo_DatasetController(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_DatasetController))
        return sipConvertToCpp(valobj,sipClass_DatasetController,iserrp);

    sipBadClass(sipNm_BALL_DatasetController);

    *iserrp = 1;

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedClassDef supers_DatasetController[] = {{200, 255, 1}};


static PyMethodDef methods_DatasetController[] = {
    {sipNm_BALL_checkMenu, meth_DatasetController_checkMenu, METH_VARARGS, NULL},
    {sipNm_BALL_countInstances, meth_DatasetController_countInstances, METH_VARARGS, NULL},
    {sipNm_BALL_createMenuEntries, meth_DatasetController_createMenuEntries, METH_VARARGS, NULL},
    {sipNm_BALL_deleteDataset, meth_DatasetController_deleteDataset, METH_VARARGS, NULL},
    {sipNm_BALL_deleteDatasets, meth_DatasetController_deleteDatasets, METH_VARARGS, NULL},
    {sipNm_BALL_getDatasetControl, meth_DatasetController_getDatasetControl, METH_VARARGS, NULL},
    {sipNm_BALL_getDatasets, meth_DatasetController_getDatasets, METH_VARARGS, NULL},
    {sipNm_BALL_getInstance, meth_DatasetController_getInstance, METH_VARARGS, NULL},
    {sipNm_BALL_getSelectedDataset, meth_DatasetController_getSelectedDataset, METH_VARARGS, NULL},
    {sipNm_BALL_getSelectedDatasets, meth_DatasetController_getSelectedDatasets, METH_VARARGS, NULL},
    {sipNm_BALL_getType, meth_DatasetController_getType, METH_VARARGS, NULL},
    {sipNm_BALL_hasDataset, meth_DatasetController_hasDataset, METH_VARARGS, NULL},
    {sipNm_BALL_insertDataset, meth_DatasetController_insertDataset, METH_VARARGS, NULL},
    {sipNm_BALL_open, meth_DatasetController_open, METH_VARARGS, NULL},
    {sipNm_BALL_setDatasetControl, meth_DatasetController_setDatasetControl, METH_VARARGS, NULL},
    {sipNm_BALL_write, meth_DatasetController_write, METH_VARARGS, NULL}
};


sipTypeDef sipType_BALL_DatasetController = {
    0,
    0,
    "BALL.DatasetController",
    0,
    {0, 0, 1},
    supers_DatasetController,
    0,
    16, methods_DatasetController,
    0, 0,
    0,
    init_DatasetController,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_DatasetController,
    cast_DatasetController,
    release_DatasetController,
    forceConvertTo_DatasetController,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
