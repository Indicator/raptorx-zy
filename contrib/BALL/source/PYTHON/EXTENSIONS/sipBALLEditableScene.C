/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLEditableScene.h"

#include "sipBALLScene.h"
#include "sipBALLEditableScene.h"
#include "sipBALLString.h"
#include "sipBALLPosition.h"
#include "sipBALLVector3.h"
#include "sipBALLPyCompositeList.h"
#include "sipBALLPreferences.h"
#include "sipBALLCamera.h"
#include "sipBALLStage.h"
#include "sipBALLMainControl.h"
#include "sipBALLINIFile.h"
#include "sipBALLRenderer.h"
#include "sipBALLMessage.h"
#include "sipBALLEmbeddable.h"


sipEditableScene::sipEditableScene() throw(): EditableScene(), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,11);
}

sipEditableScene::sipEditableScene(const EditableScene& a0): EditableScene(a0), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,11);
}

sipEditableScene::~sipEditableScene() throw()
{
    sipCommonDtor(sipPySelf);
}

void sipEditableScene::onNotify(Message *a0) throw()
{
    extern void sipVH_BALL_7(sip_gilstate_t,PyObject *,Message *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipNm_BALL_onNotify);

    if (!meth)
    {
        Scene::onNotify(a0);
        return;
    }

    sipVH_BALL_7(sipGILState,meth,a0);
}

bool sipEditableScene::exportScene(Renderer& a0) const throw()
{
    extern bool sipVH_BALL_6(sip_gilstate_t,PyObject *,Renderer&);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<sipMethodCache *>(&sipPyMethods[1]),sipPySelf,NULL,sipNm_BALL_exportScene);

    if (!meth)
        return Scene::exportScene(a0);

    return sipVH_BALL_6(sipGILState,meth,a0);
}

void sipEditableScene::initializeWidget(MainControl& a0) throw()
{
    extern void sipVH_BALL_1(sip_gilstate_t,PyObject *,MainControl&);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[2],sipPySelf,NULL,sipNm_BALL_initializeWidget);

    if (!meth)
    {
        Scene::initializeWidget(a0);
        return;
    }

    sipVH_BALL_1(sipGILState,meth,a0);
}

void sipEditableScene::fetchPreferences(INIFile& a0) throw()
{
    extern void sipVH_BALL_5(sip_gilstate_t,PyObject *,INIFile&);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[3],sipPySelf,NULL,sipNm_BALL_fetchPreferences);

    if (!meth)
    {
        Scene::fetchPreferences(a0);
        return;
    }

    sipVH_BALL_5(sipGILState,meth,a0);
}

void sipEditableScene::writePreferences(INIFile& a0) throw()
{
    extern void sipVH_BALL_5(sip_gilstate_t,PyObject *,INIFile&);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[4],sipPySelf,NULL,sipNm_BALL_writePreferences);

    if (!meth)
    {
        Scene::writePreferences(a0);
        return;
    }

    sipVH_BALL_5(sipGILState,meth,a0);
}

void sipEditableScene::checkMenu(MainControl& a0) throw()
{
    extern void sipVH_BALL_1(sip_gilstate_t,PyObject *,MainControl&);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[5],sipPySelf,NULL,sipNm_BALL_checkMenu);

    if (!meth)
    {
        Scene::checkMenu(a0);
        return;
    }

    sipVH_BALL_1(sipGILState,meth,a0);
}

bool sipEditableScene::isValid() const throw()
{
    extern bool sipVH_BALL_4(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<sipMethodCache *>(&sipPyMethods[6]),sipPySelf,NULL,sipNm_BALL_isValid);

    if (!meth)
        return Scene::isValid();

    return sipVH_BALL_4(sipGILState,meth);
}

void sipEditableScene::applyPreferences() throw()
{
    extern void sipVH_BALL_0(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[7],sipPySelf,NULL,sipNm_BALL_applyPreferences);

    if (!meth)
    {
        Scene::applyPreferences();
        return;
    }

    sipVH_BALL_0(sipGILState,meth);
}

void sipEditableScene::setWidgetVisible(bool a0)
{
    extern void sipVH_BALL_3(sip_gilstate_t,PyObject *,bool);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[8],sipPySelf,NULL,sipNm_BALL_setWidgetVisible);

    if (!meth)
    {
        Scene::setWidgetVisible(a0);
        return;
    }

    sipVH_BALL_3(sipGILState,meth,a0);
}

void sipEditableScene::switchShowWidget() throw()
{
    extern void sipVH_BALL_0(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[9],sipPySelf,NULL,sipNm_BALL_switchShowWidget);

    if (!meth)
    {
        Scene::switchShowWidget();
        return;
    }

    sipVH_BALL_0(sipGILState,meth);
}

void sipEditableScene::registerThis() throw()
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


extern "C" {static PyObject *meth_EditableScene_countInstances(PyObject *, PyObject *);}
static PyObject *meth_EditableScene_countInstances(PyObject *,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        if (sipParseArgs(&sipArgsParsed,sipArgs,""))
        {
            int sipRes;

            try
            {
            sipRes = EditableScene::countInstances();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_EditableScene,sipNm_BALL_countInstances);

    return NULL;
}


extern "C" {static PyObject *meth_EditableScene_getInstance(PyObject *, PyObject *);}
static PyObject *meth_EditableScene_getInstance(PyObject *,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Position * a0;
        int a0State = 0;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"M1",sipMappedType_Position,&a0,&a0State))
        {
            EditableScene *sipRes;

            try
            {
            sipRes = EditableScene::getInstance(*a0);
            }
            catch (...)
            {

            sipReleaseMappedType(a0,sipMappedType_Position,a0State);
                sipRaiseUnknownException();
                return NULL;
            }

            sipReleaseMappedType(a0,sipMappedType_Position,a0State);

            return sipConvertFromInstance(sipRes,sipClass_EditableScene,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_EditableScene,sipNm_BALL_getInstance);

    return NULL;
}


extern "C" {static PyObject *meth_EditableScene_addStructure(PyObject *, PyObject *);}
static PyObject *meth_EditableScene_addStructure(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        String * a0;
        int a0State = 0;
        EditableScene *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ1",&sipSelf,sipClass_EditableScene,&sipCpp,sipClass_String,&a0,&a0State))
        {
            try
            {
            sipCpp->addStructure(*a0);
            }
            catch (...)
            {

            sipReleaseInstance(a0,sipClass_String,a0State);
                sipRaiseUnknownException();
                return NULL;
            }

            sipReleaseInstance(a0,sipClass_String,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_EditableScene,sipNm_BALL_addStructure);

    return NULL;
}


extern "C" {static PyObject *meth_EditableScene_setCursor(PyObject *, PyObject *);}
static PyObject *meth_EditableScene_setCursor(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        String * a0;
        int a0State = 0;
        EditableScene *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ1",&sipSelf,sipClass_EditableScene,&sipCpp,sipClass_String,&a0,&a0State))
        {
            try
            {
            sipCpp->setCursor(*a0);
            }
            catch (...)
            {

            sipReleaseInstance(a0,sipClass_String,a0State);
                sipRaiseUnknownException();
                return NULL;
            }

            sipReleaseInstance(a0,sipClass_String,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_EditableScene,sipNm_BALL_setCursor);

    return NULL;
}


extern "C" {static PyObject *meth_EditableScene_setElementCursor(PyObject *, PyObject *);}
static PyObject *meth_EditableScene_setElementCursor(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        EditableScene *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_EditableScene,&sipCpp))
        {
            try
            {
            sipCpp->setElementCursor();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_EditableScene,sipNm_BALL_setElementCursor);

    return NULL;
}


extern "C" {static PyObject *meth_EditableScene_createNewMolecule(PyObject *, PyObject *);}
static PyObject *meth_EditableScene_createNewMolecule(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        EditableScene *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_EditableScene,&sipCpp))
        {
            try
            {
            sipCpp->createNewMolecule();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_EditableScene,sipNm_BALL_createNewMolecule);

    return NULL;
}


extern "C" {static PyObject *meth_EditableScene_saturateWithHydrogens(PyObject *, PyObject *);}
static PyObject *meth_EditableScene_saturateWithHydrogens(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        EditableScene *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_EditableScene,&sipCpp))
        {
            try
            {
            sipCpp->saturateWithHydrogens();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_EditableScene,sipNm_BALL_saturateWithHydrogens);

    return NULL;
}


extern "C" {static PyObject *meth_EditableScene_optimizeStructure(PyObject *, PyObject *);}
static PyObject *meth_EditableScene_optimizeStructure(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        EditableScene *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_EditableScene,&sipCpp))
        {
            try
            {
            sipCpp->optimizeStructure();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_EditableScene,sipNm_BALL_optimizeStructure);

    return NULL;
}


extern "C" {static PyObject *meth_EditableScene_setEditElementType(PyObject *, PyObject *);}
static PyObject *meth_EditableScene_setEditElementType(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        int a0;
        EditableScene *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bi",&sipSelf,sipClass_EditableScene,&sipCpp,&a0))
        {
            try
            {
            sipCpp->setEditElementType(a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_EditableScene,sipNm_BALL_setEditElementType);

    return NULL;
}


extern "C" {static PyObject *meth_EditableScene_getEditElementType(PyObject *, PyObject *);}
static PyObject *meth_EditableScene_getEditElementType(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        EditableScene *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_EditableScene,&sipCpp))
        {
            int sipRes;

            try
            {
            sipRes = sipCpp->getEditElementType();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_EditableScene,sipNm_BALL_getEditElementType);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_EditableScene(void *, sipWrapperType *);}
static void *cast_EditableScene(void *ptr,sipWrapperType *targetClass)
{
    void *res;

    if (targetClass == sipClass_EditableScene)
        return ptr;

    if ((res = sipCast_Scene((Scene *)(EditableScene *)ptr,targetClass)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_EditableScene(void *, int);}
static void release_EditableScene(void *ptr,int state)
{
    if (state & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipEditableScene *>(ptr);
    else
        delete reinterpret_cast<EditableScene *>(ptr);
}


extern "C" {static void dealloc_EditableScene(sipWrapper *);}
static void dealloc_EditableScene(sipWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipEditableScene *>(sipSelf->u.cppPtr)->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_EditableScene(sipSelf->u.cppPtr,sipSelf->flags);
    }
}


extern "C" {static void *init_EditableScene(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_EditableScene(sipWrapper *sipSelf,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    sipEditableScene *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            sipCpp = new sipEditableScene();
        }
    }

    if (!sipCpp)
    {
        const EditableScene * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_EditableScene,&a0))
        {
            try
            {
            sipCpp = new sipEditableScene(*a0);
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


extern "C" {static void *forceConvertTo_EditableScene(PyObject *, int *);}
static void *forceConvertTo_EditableScene(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_EditableScene))
        return sipConvertToCpp(valobj,sipClass_EditableScene,iserrp);

    sipBadClass(sipNm_BALL_EditableScene);

    *iserrp = 1;

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedClassDef supers_EditableScene[] = {{201, 255, 1}};


static PyMethodDef methods_EditableScene[] = {
    {sipNm_BALL_addStructure, meth_EditableScene_addStructure, METH_VARARGS, NULL},
    {sipNm_BALL_countInstances, meth_EditableScene_countInstances, METH_VARARGS, NULL},
    {sipNm_BALL_createNewMolecule, meth_EditableScene_createNewMolecule, METH_VARARGS, NULL},
    {sipNm_BALL_getEditElementType, meth_EditableScene_getEditElementType, METH_VARARGS, NULL},
    {sipNm_BALL_getInstance, meth_EditableScene_getInstance, METH_VARARGS, NULL},
    {sipNm_BALL_optimizeStructure, meth_EditableScene_optimizeStructure, METH_VARARGS, NULL},
    {sipNm_BALL_saturateWithHydrogens, meth_EditableScene_saturateWithHydrogens, METH_VARARGS, NULL},
    {sipNm_BALL_setCursor, meth_EditableScene_setCursor, METH_VARARGS, NULL},
    {sipNm_BALL_setEditElementType, meth_EditableScene_setEditElementType, METH_VARARGS, NULL},
    {sipNm_BALL_setElementCursor, meth_EditableScene_setElementCursor, METH_VARARGS, NULL}
};


sipTypeDef sipType_BALL_EditableScene = {
    0,
    0,
    "BALL.EditableScene",
    0,
    {0, 0, 1},
    supers_EditableScene,
    0,
    10, methods_EditableScene,
    0, 0,
    0,
    init_EditableScene,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_EditableScene,
    cast_EditableScene,
    release_EditableScene,
    forceConvertTo_EditableScene,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
