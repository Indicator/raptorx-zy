/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLTrajectoryController.h"

#include "sipBALLDatasetController.h"
#include "sipBALLTrajectoryController.h"
#include "sipBALLSnapShotManager.h"
#include "sipBALLDataset.h"
#include "sipBALLString.h"
#include "sipBALLPosition.h"
#include "sipBALLMainControl.h"
#include "sipBALLPyDatasetVector.h"
#include "sipBALLDatasetControl.h"
#include "sipBALLEmbeddable.h"


sipTrajectoryController::sipTrajectoryController(): TrajectoryController(), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,11);
}

sipTrajectoryController::sipTrajectoryController(TrajectoryController& a0): TrajectoryController(a0), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,11);
}

sipTrajectoryController::~sipTrajectoryController() throw()
{
    sipCommonDtor(sipPySelf);
}

bool sipTrajectoryController::write(Dataset *a0,String a1,String a2)
{
    extern bool sipVH_BALL_19(sip_gilstate_t,PyObject *,Dataset *,String,String);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipNm_BALL_write);

    if (!meth)
        return TrajectoryController::write(a0,a1,a2);

    return sipVH_BALL_19(sipGILState,meth,a0,a1,a2);
}

Dataset * sipTrajectoryController::open(String a0,String a1)
{
    extern Dataset * sipVH_BALL_18(sip_gilstate_t,PyObject *,String,String);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,NULL,sipNm_BALL_open);

    if (!meth)
        return TrajectoryController::open(a0,a1);

    return sipVH_BALL_18(sipGILState,meth,a0,a1);
}

bool sipTrajectoryController::insertDataset(Dataset *a0)
{
    extern bool sipVH_BALL_20(sip_gilstate_t,PyObject *,Dataset *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[2],sipPySelf,NULL,sipNm_BALL_insertDataset);

    if (!meth)
        return DatasetController::insertDataset(a0);

    return sipVH_BALL_20(sipGILState,meth,a0);
}

bool sipTrajectoryController::deleteDataset(Dataset *a0)
{
    extern bool sipVH_BALL_20(sip_gilstate_t,PyObject *,Dataset *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[3],sipPySelf,NULL,sipNm_BALL_deleteDataset);

    if (!meth)
        return DatasetController::deleteDataset(a0);

    return sipVH_BALL_20(sipGILState,meth,a0);
}

bool sipTrajectoryController::createMenuEntries()
{
    extern bool sipVH_BALL_4(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[4],sipPySelf,NULL,sipNm_BALL_createMenuEntries);

    if (!meth)
        return DatasetController::createMenuEntries();

    return sipVH_BALL_4(sipGILState,meth);
}

void sipTrajectoryController::checkMenu(MainControl& a0)
{
    extern void sipVH_BALL_1(sip_gilstate_t,PyObject *,MainControl&);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[5],sipPySelf,NULL,sipNm_BALL_checkMenu);

    if (!meth)
    {
        DatasetController::checkMenu(a0);
        return;
    }

    sipVH_BALL_1(sipGILState,meth,a0);
}

bool sipTrajectoryController::write()
{
    extern bool sipVH_BALL_4(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[6],sipPySelf,NULL,sipNm_BALL_write);

    if (!meth)
        return DatasetController::write();

    return sipVH_BALL_4(sipGILState,meth);
}

bool sipTrajectoryController::open()
{
    extern bool sipVH_BALL_4(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[7],sipPySelf,NULL,sipNm_BALL_open);

    if (!meth)
        return DatasetController::open();

    return sipVH_BALL_4(sipGILState,meth);
}

bool sipTrajectoryController::deleteDatasets()
{
    extern bool sipVH_BALL_4(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[8],sipPySelf,NULL,sipNm_BALL_deleteDatasets);

    if (!meth)
        return DatasetController::deleteDatasets();

    return sipVH_BALL_4(sipGILState,meth);
}

bool sipTrajectoryController::deleteDataset()
{
    extern bool sipVH_BALL_4(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[9],sipPySelf,NULL,sipNm_BALL_deleteDataset);

    if (!meth)
        return DatasetController::deleteDataset();

    return sipVH_BALL_4(sipGILState,meth);
}

void sipTrajectoryController::registerThis() throw()
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


extern "C" {static PyObject *meth_TrajectoryController_countInstances(PyObject *, PyObject *);}
static PyObject *meth_TrajectoryController_countInstances(PyObject *,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        if (sipParseArgs(&sipArgsParsed,sipArgs,""))
        {
            int sipRes;

            try
            {
            sipRes = TrajectoryController::countInstances();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_TrajectoryController,sipNm_BALL_countInstances);

    return NULL;
}


extern "C" {static PyObject *meth_TrajectoryController_getInstance(PyObject *, PyObject *);}
static PyObject *meth_TrajectoryController_getInstance(PyObject *,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Position * a0;
        int a0State = 0;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"M1",sipMappedType_Position,&a0,&a0State))
        {
            TrajectoryController *sipRes;

            try
            {
            sipRes = TrajectoryController::getInstance(*a0);
            }
            catch (...)
            {

            sipReleaseMappedType(a0,sipMappedType_Position,a0State);
                sipRaiseUnknownException();
                return NULL;
            }

            sipReleaseMappedType(a0,sipMappedType_Position,a0State);

            return sipConvertFromInstance(sipRes,sipClass_TrajectoryController,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_TrajectoryController,sipNm_BALL_getInstance);

    return NULL;
}


extern "C" {static PyObject *meth_TrajectoryController_write(PyObject *, PyObject *);}
static PyObject *meth_TrajectoryController_write(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        Dataset * a0;
        String * a1;
        int a1State = 0;
        String * a2;
        int a2State = 0;
        TrajectoryController *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ@J1J1",&sipSelf,sipClass_TrajectoryController,&sipCpp,sipClass_Dataset,&a0,sipClass_String,&a1,&a1State,sipClass_String,&a2,&a2State))
        {
            bool sipRes;

            try
            {
            sipRes = (sipSelfWasArg ? sipCpp->TrajectoryController::write(a0,*a1,*a2) : sipCpp->write(a0,*a1,*a2));
            }
            catch (...)
            {

            sipReleaseInstance(a1,sipClass_String,a1State);
            sipReleaseInstance(a2,sipClass_String,a2State);
                sipRaiseUnknownException();
                return NULL;
            }

            sipReleaseInstance(a1,sipClass_String,a1State);
            sipReleaseInstance(a2,sipClass_String,a2State);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_TrajectoryController,sipNm_BALL_write);

    return NULL;
}


extern "C" {static PyObject *meth_TrajectoryController_open(PyObject *, PyObject *);}
static PyObject *meth_TrajectoryController_open(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        String * a0;
        int a0State = 0;
        String * a1;
        int a1State = 0;
        TrajectoryController *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ1J1",&sipSelf,sipClass_TrajectoryController,&sipCpp,sipClass_String,&a0,&a0State,sipClass_String,&a1,&a1State))
        {
            Dataset *sipRes;

            try
            {
            sipRes = (sipSelfWasArg ? sipCpp->TrajectoryController::open(*a0,*a1) : sipCpp->open(*a0,*a1));
            }
            catch (...)
            {

            sipReleaseInstance(a0,sipClass_String,a0State);
            sipReleaseInstance(a1,sipClass_String,a1State);
                sipRaiseUnknownException();
                return NULL;
            }

            sipReleaseInstance(a0,sipClass_String,a0State);
            sipReleaseInstance(a1,sipClass_String,a1State);

            return sipConvertFromInstance(sipRes,sipClass_Dataset,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_TrajectoryController,sipNm_BALL_open);

    return NULL;
}


extern "C" {static PyObject *meth_TrajectoryController_getData(PyObject *, PyObject *);}
static PyObject *meth_TrajectoryController_getData(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Dataset * a0;
        TrajectoryController *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ@",&sipSelf,sipClass_TrajectoryController,&sipCpp,sipClass_Dataset,&a0))
        {
            SnapShotManager *sipRes;

            try
            {
            sipRes = sipCpp->getData(a0);
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return sipConvertFromInstance(sipRes,sipClass_SnapShotManager,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_TrajectoryController,sipNm_BALL_getData);

    return NULL;
}


extern "C" {static PyObject *meth_TrajectoryController_visualizeTrajectory(PyObject *, PyObject *);}
static PyObject *meth_TrajectoryController_visualizeTrajectory(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        TrajectoryController *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_TrajectoryController,&sipCpp))
        {
            bool sipRes;

            try
            {
            sipRes = sipCpp->visualizeTrajectory();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_TrajectoryController,sipNm_BALL_visualizeTrajectory);

    return NULL;
}


extern "C" {static PyObject *meth_TrajectoryController_bufferTrajectory(PyObject *, PyObject *);}
static PyObject *meth_TrajectoryController_bufferTrajectory(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        TrajectoryController *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_TrajectoryController,&sipCpp))
        {
            bool sipRes;

            try
            {
            sipRes = sipCpp->bufferTrajectory();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_TrajectoryController,sipNm_BALL_bufferTrajectory);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_TrajectoryController(void *, sipWrapperType *);}
static void *cast_TrajectoryController(void *ptr,sipWrapperType *targetClass)
{
    void *res;

    if (targetClass == sipClass_TrajectoryController)
        return ptr;

    if ((res = sipCast_DatasetController((DatasetController *)(TrajectoryController *)ptr,targetClass)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_TrajectoryController(void *, int);}
static void release_TrajectoryController(void *ptr,int state)
{
    if (state & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipTrajectoryController *>(ptr);
    else
        delete reinterpret_cast<TrajectoryController *>(ptr);
}


extern "C" {static void dealloc_TrajectoryController(sipWrapper *);}
static void dealloc_TrajectoryController(sipWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipTrajectoryController *>(sipSelf->u.cppPtr)->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_TrajectoryController(sipSelf->u.cppPtr,sipSelf->flags);
    }
}


extern "C" {static void *init_TrajectoryController(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_TrajectoryController(sipWrapper *sipSelf,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    sipTrajectoryController *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            try
            {
            sipCpp = new sipTrajectoryController();
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
        TrajectoryController * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_TrajectoryController,&a0))
        {
            try
            {
            sipCpp = new sipTrajectoryController(*a0);
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


extern "C" {static void *forceConvertTo_TrajectoryController(PyObject *, int *);}
static void *forceConvertTo_TrajectoryController(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_TrajectoryController))
        return sipConvertToCpp(valobj,sipClass_TrajectoryController,iserrp);

    sipBadClass(sipNm_BALL_TrajectoryController);

    *iserrp = 1;

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedClassDef supers_TrajectoryController[] = {{203, 255, 1}};


static PyMethodDef methods_TrajectoryController[] = {
    {sipNm_BALL_bufferTrajectory, meth_TrajectoryController_bufferTrajectory, METH_VARARGS, NULL},
    {sipNm_BALL_countInstances, meth_TrajectoryController_countInstances, METH_VARARGS, NULL},
    {sipNm_BALL_getData, meth_TrajectoryController_getData, METH_VARARGS, NULL},
    {sipNm_BALL_getInstance, meth_TrajectoryController_getInstance, METH_VARARGS, NULL},
    {sipNm_BALL_open, meth_TrajectoryController_open, METH_VARARGS, NULL},
    {sipNm_BALL_visualizeTrajectory, meth_TrajectoryController_visualizeTrajectory, METH_VARARGS, NULL},
    {sipNm_BALL_write, meth_TrajectoryController_write, METH_VARARGS, NULL}
};


sipTypeDef sipType_BALL_TrajectoryController = {
    0,
    0,
    "BALL.TrajectoryController",
    0,
    {0, 0, 1},
    supers_TrajectoryController,
    0,
    7, methods_TrajectoryController,
    0, 0,
    0,
    init_TrajectoryController,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_TrajectoryController,
    cast_TrajectoryController,
    release_TrajectoryController,
    forceConvertTo_TrajectoryController,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
