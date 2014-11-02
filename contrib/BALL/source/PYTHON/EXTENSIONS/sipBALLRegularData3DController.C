/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLRegularData3DController.h"

#include "sipBALLDatasetController.h"
#include "sipBALLRegularData3DController.h"
#include "sipBALLRegularData3D.h"
#include "sipBALLDataset.h"
#include "sipBALLColorRGBA.h"
#include "sipBALLString.h"
#include "sipBALLPosition.h"
#include "sipBALLMainControl.h"
#include "sipBALLPyDatasetVector.h"
#include "sipBALLDatasetControl.h"
#include "sipBALLEmbeddable.h"


sipRegularData3DController::sipRegularData3DController(): RegularData3DController(), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,11);
}

sipRegularData3DController::sipRegularData3DController(RegularData3DController& a0): RegularData3DController(a0), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,11);
}

sipRegularData3DController::~sipRegularData3DController() throw()
{
    sipCommonDtor(sipPySelf);
}

bool sipRegularData3DController::write(Dataset *a0,String a1,String a2)
{
    extern bool sipVH_BALL_19(sip_gilstate_t,PyObject *,Dataset *,String,String);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipNm_BALL_write);

    if (!meth)
        return RegularData3DController::write(a0,a1,a2);

    return sipVH_BALL_19(sipGILState,meth,a0,a1,a2);
}

Dataset * sipRegularData3DController::open(String a0,String a1)
{
    extern Dataset * sipVH_BALL_18(sip_gilstate_t,PyObject *,String,String);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,NULL,sipNm_BALL_open);

    if (!meth)
        return RegularData3DController::open(a0,a1);

    return sipVH_BALL_18(sipGILState,meth,a0,a1);
}

bool sipRegularData3DController::insertDataset(Dataset *a0)
{
    extern bool sipVH_BALL_20(sip_gilstate_t,PyObject *,Dataset *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[2],sipPySelf,NULL,sipNm_BALL_insertDataset);

    if (!meth)
        return DatasetController::insertDataset(a0);

    return sipVH_BALL_20(sipGILState,meth,a0);
}

bool sipRegularData3DController::deleteDataset(Dataset *a0)
{
    extern bool sipVH_BALL_20(sip_gilstate_t,PyObject *,Dataset *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[3],sipPySelf,NULL,sipNm_BALL_deleteDataset);

    if (!meth)
        return DatasetController::deleteDataset(a0);

    return sipVH_BALL_20(sipGILState,meth,a0);
}

bool sipRegularData3DController::createMenuEntries()
{
    extern bool sipVH_BALL_4(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[4],sipPySelf,NULL,sipNm_BALL_createMenuEntries);

    if (!meth)
        return DatasetController::createMenuEntries();

    return sipVH_BALL_4(sipGILState,meth);
}

void sipRegularData3DController::checkMenu(MainControl& a0)
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

bool sipRegularData3DController::write()
{
    extern bool sipVH_BALL_4(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[6],sipPySelf,NULL,sipNm_BALL_write);

    if (!meth)
        return DatasetController::write();

    return sipVH_BALL_4(sipGILState,meth);
}

bool sipRegularData3DController::open()
{
    extern bool sipVH_BALL_4(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[7],sipPySelf,NULL,sipNm_BALL_open);

    if (!meth)
        return DatasetController::open();

    return sipVH_BALL_4(sipGILState,meth);
}

bool sipRegularData3DController::deleteDatasets()
{
    extern bool sipVH_BALL_4(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[8],sipPySelf,NULL,sipNm_BALL_deleteDatasets);

    if (!meth)
        return DatasetController::deleteDatasets();

    return sipVH_BALL_4(sipGILState,meth);
}

bool sipRegularData3DController::deleteDataset()
{
    extern bool sipVH_BALL_4(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[9],sipPySelf,NULL,sipNm_BALL_deleteDataset);

    if (!meth)
        return DatasetController::deleteDataset();

    return sipVH_BALL_4(sipGILState,meth);
}

void sipRegularData3DController::registerThis() throw()
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


extern "C" {static PyObject *meth_RegularData3DController_countInstances(PyObject *, PyObject *);}
static PyObject *meth_RegularData3DController_countInstances(PyObject *,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        if (sipParseArgs(&sipArgsParsed,sipArgs,""))
        {
            int sipRes;

            try
            {
            sipRes = RegularData3DController::countInstances();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_RegularData3DController,sipNm_BALL_countInstances);

    return NULL;
}


extern "C" {static PyObject *meth_RegularData3DController_getInstance(PyObject *, PyObject *);}
static PyObject *meth_RegularData3DController_getInstance(PyObject *,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Position * a0;
        int a0State = 0;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"M1",sipMappedType_Position,&a0,&a0State))
        {
            RegularData3DController *sipRes;

            try
            {
            sipRes = RegularData3DController::getInstance(*a0);
            }
            catch (...)
            {

            sipReleaseMappedType(a0,sipMappedType_Position,a0State);
                sipRaiseUnknownException();
                return NULL;
            }

            sipReleaseMappedType(a0,sipMappedType_Position,a0State);

            return sipConvertFromInstance(sipRes,sipClass_RegularData3DController,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_RegularData3DController,sipNm_BALL_getInstance);

    return NULL;
}


extern "C" {static PyObject *meth_RegularData3DController_write(PyObject *, PyObject *);}
static PyObject *meth_RegularData3DController_write(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        Dataset * a0;
        String * a1;
        int a1State = 0;
        String * a2;
        int a2State = 0;
        RegularData3DController *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ@J1J1",&sipSelf,sipClass_RegularData3DController,&sipCpp,sipClass_Dataset,&a0,sipClass_String,&a1,&a1State,sipClass_String,&a2,&a2State))
        {
            bool sipRes;

            try
            {
            sipRes = (sipSelfWasArg ? sipCpp->RegularData3DController::write(a0,*a1,*a2) : sipCpp->write(a0,*a1,*a2));
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_RegularData3DController,sipNm_BALL_write);

    return NULL;
}


extern "C" {static PyObject *meth_RegularData3DController_open(PyObject *, PyObject *);}
static PyObject *meth_RegularData3DController_open(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        String * a0;
        int a0State = 0;
        String * a1;
        int a1State = 0;
        RegularData3DController *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ1J1",&sipSelf,sipClass_RegularData3DController,&sipCpp,sipClass_String,&a0,&a0State,sipClass_String,&a1,&a1State))
        {
            Dataset *sipRes;

            try
            {
            sipRes = (sipSelfWasArg ? sipCpp->RegularData3DController::open(*a0,*a1) : sipCpp->open(*a0,*a1));
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_RegularData3DController,sipNm_BALL_open);

    return NULL;
}


extern "C" {static PyObject *meth_RegularData3DController_computeIsoContourSurface(PyObject *, PyObject *);}
static PyObject *meth_RegularData3DController_computeIsoContourSurface(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Dataset * a0;
        const ColorRGBA * a1;
        float a2;
        RegularData3DController *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJAJAf",&sipSelf,sipClass_RegularData3DController,&sipCpp,sipClass_Dataset,&a0,sipClass_ColorRGBA,&a1,&a2))
        {
            bool sipRes;

            try
            {
            sipRes = sipCpp->computeIsoContourSurface(*a0,*a1,a2);
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
        RegularData3DController *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_RegularData3DController,&sipCpp))
        {
            try
            {
            sipCpp->computeIsoContourSurface();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_RegularData3DController,sipNm_BALL_computeIsoContourSurface);

    return NULL;
}


extern "C" {static PyObject *meth_RegularData3DController_isGridSizePowerOfTwo(PyObject *, PyObject *);}
static PyObject *meth_RegularData3DController_isGridSizePowerOfTwo(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const RegularData3D * a0;
        RegularData3DController *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_RegularData3DController,&sipCpp,sipClass_RegularData3D,&a0))
        {
            bool sipRes;

            try
            {
            sipRes = sipCpp->isGridSizePowerOfTwo(*a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_RegularData3DController,sipNm_BALL_isGridSizePowerOfTwo);

    return NULL;
}


extern "C" {static PyObject *meth_RegularData3DController_resizeGrid(PyObject *, PyObject *);}
static PyObject *meth_RegularData3DController_resizeGrid(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const RegularData3D * a0;
        RegularData3DController *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_RegularData3DController,&sipCpp,sipClass_RegularData3D,&a0))
        {
            RegularData3D *sipRes;

            try
            {
            sipRes = sipCpp->resizeGrid(*a0);
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return sipConvertFromInstance(sipRes,sipClass_RegularData3D,NULL);
        }
    }

    {
        RegularData3DController *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_RegularData3DController,&sipCpp))
        {
            try
            {
            sipCpp->resizeGrid();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_RegularData3DController,sipNm_BALL_resizeGrid);

    return NULL;
}


extern "C" {static PyObject *meth_RegularData3DController_createHistogramGrid(PyObject *, PyObject *);}
static PyObject *meth_RegularData3DController_createHistogramGrid(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const RegularData3D * a0;
        RegularData3DController *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_RegularData3DController,&sipCpp,sipClass_RegularData3D,&a0))
        {
            RegularData3D *sipRes;

            try
            {
            sipRes = sipCpp->createHistogramGrid(*a0);
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return sipConvertFromInstance(sipRes,sipClass_RegularData3D,NULL);
        }
    }

    {
        RegularData3DController *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_RegularData3DController,&sipCpp))
        {
            try
            {
            sipCpp->createHistogramGrid();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_RegularData3DController,sipNm_BALL_createHistogramGrid);

    return NULL;
}


extern "C" {static PyObject *meth_RegularData3DController_getData(PyObject *, PyObject *);}
static PyObject *meth_RegularData3DController_getData(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Dataset * a0;
        RegularData3DController *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ@",&sipSelf,sipClass_RegularData3DController,&sipCpp,sipClass_Dataset,&a0))
        {
            RegularData3D *sipRes;

            try
            {
            sipRes = sipCpp->getData(a0);
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return sipConvertFromInstance(sipRes,sipClass_RegularData3D,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_RegularData3DController,sipNm_BALL_getData);

    return NULL;
}


extern "C" {static PyObject *meth_RegularData3DController_createVectorGrid(PyObject *, PyObject *);}
static PyObject *meth_RegularData3DController_createVectorGrid(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        RegularData3DController *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_RegularData3DController,&sipCpp))
        {
            bool sipRes;

            try
            {
            sipRes = sipCpp->createVectorGrid();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_RegularData3DController,sipNm_BALL_createVectorGrid);

    return NULL;
}


extern "C" {static PyObject *meth_RegularData3DController_visualizeGrid(PyObject *, PyObject *);}
static PyObject *meth_RegularData3DController_visualizeGrid(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        RegularData3DController *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_RegularData3DController,&sipCpp))
        {
            try
            {
            sipCpp->visualizeGrid();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_RegularData3DController,sipNm_BALL_visualizeGrid);

    return NULL;
}


extern "C" {static PyObject *meth_RegularData3DController_createSphere(PyObject *, PyObject *);}
static PyObject *meth_RegularData3DController_createSphere(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        RegularData3DController *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_RegularData3DController,&sipCpp))
        {
            try
            {
            sipCpp->createSphere();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_RegularData3DController,sipNm_BALL_createSphere);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_RegularData3DController(void *, sipWrapperType *);}
static void *cast_RegularData3DController(void *ptr,sipWrapperType *targetClass)
{
    void *res;

    if (targetClass == sipClass_RegularData3DController)
        return ptr;

    if ((res = sipCast_DatasetController((DatasetController *)(RegularData3DController *)ptr,targetClass)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_RegularData3DController(void *, int);}
static void release_RegularData3DController(void *ptr,int state)
{
    if (state & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipRegularData3DController *>(ptr);
    else
        delete reinterpret_cast<RegularData3DController *>(ptr);
}


extern "C" {static void dealloc_RegularData3DController(sipWrapper *);}
static void dealloc_RegularData3DController(sipWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipRegularData3DController *>(sipSelf->u.cppPtr)->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_RegularData3DController(sipSelf->u.cppPtr,sipSelf->flags);
    }
}


extern "C" {static void *init_RegularData3DController(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_RegularData3DController(sipWrapper *sipSelf,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    sipRegularData3DController *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            try
            {
            sipCpp = new sipRegularData3DController();
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
        RegularData3DController * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_RegularData3DController,&a0))
        {
            try
            {
            sipCpp = new sipRegularData3DController(*a0);
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


extern "C" {static void *forceConvertTo_RegularData3DController(PyObject *, int *);}
static void *forceConvertTo_RegularData3DController(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_RegularData3DController))
        return sipConvertToCpp(valobj,sipClass_RegularData3DController,iserrp);

    sipBadClass(sipNm_BALL_RegularData3DController);

    *iserrp = 1;

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedClassDef supers_RegularData3DController[] = {{203, 255, 1}};


static PyMethodDef methods_RegularData3DController[] = {
    {sipNm_BALL_computeIsoContourSurface, meth_RegularData3DController_computeIsoContourSurface, METH_VARARGS, NULL},
    {sipNm_BALL_countInstances, meth_RegularData3DController_countInstances, METH_VARARGS, NULL},
    {sipNm_BALL_createHistogramGrid, meth_RegularData3DController_createHistogramGrid, METH_VARARGS, NULL},
    {sipNm_BALL_createSphere, meth_RegularData3DController_createSphere, METH_VARARGS, NULL},
    {sipNm_BALL_createVectorGrid, meth_RegularData3DController_createVectorGrid, METH_VARARGS, NULL},
    {sipNm_BALL_getData, meth_RegularData3DController_getData, METH_VARARGS, NULL},
    {sipNm_BALL_getInstance, meth_RegularData3DController_getInstance, METH_VARARGS, NULL},
    {sipNm_BALL_isGridSizePowerOfTwo, meth_RegularData3DController_isGridSizePowerOfTwo, METH_VARARGS, NULL},
    {sipNm_BALL_open, meth_RegularData3DController_open, METH_VARARGS, NULL},
    {sipNm_BALL_resizeGrid, meth_RegularData3DController_resizeGrid, METH_VARARGS, NULL},
    {sipNm_BALL_visualizeGrid, meth_RegularData3DController_visualizeGrid, METH_VARARGS, NULL},
    {sipNm_BALL_write, meth_RegularData3DController_write, METH_VARARGS, NULL}
};


sipTypeDef sipType_BALL_RegularData3DController = {
    0,
    0,
    "BALL.RegularData3DController",
    0,
    {0, 0, 1},
    supers_RegularData3DController,
    0,
    12, methods_RegularData3DController,
    0, 0,
    0,
    init_RegularData3DController,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_RegularData3DController,
    cast_RegularData3DController,
    release_RegularData3DController,
    forceConvertTo_RegularData3DController,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
