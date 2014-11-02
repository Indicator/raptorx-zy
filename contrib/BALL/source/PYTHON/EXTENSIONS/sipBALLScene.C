/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLScene.h"

#include "sipBALLEmbeddable.h"
#include "sipBALLScene.h"
#include "sipBALLString.h"
#include "sipBALLVector3.h"
#include "sipBALLPyCompositeList.h"
#include "sipBALLPreferences.h"
#include "sipBALLCamera.h"
#include "sipBALLStage.h"
#include "sipBALLMainControl.h"
#include "sipBALLINIFile.h"
#include "sipBALLRenderer.h"
#include "sipBALLMessage.h"
#include "sipBALLPosition.h"


sipScene::sipScene() throw(): Scene(), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,11);
}

sipScene::sipScene(const Scene& a0): Scene(a0), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,11);
}

sipScene::~sipScene() throw()
{
    sipCommonDtor(sipPySelf);
}

void sipScene::onNotify(Message *a0) throw()
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

bool sipScene::exportScene(Renderer& a0) const throw()
{
    extern bool sipVH_BALL_6(sip_gilstate_t,PyObject *,Renderer&);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<sipMethodCache *>(&sipPyMethods[1]),sipPySelf,NULL,sipNm_BALL_exportScene);

    if (!meth)
        return Scene::exportScene(a0);

    return sipVH_BALL_6(sipGILState,meth,a0);
}

void sipScene::initializeWidget(MainControl& a0) throw()
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

void sipScene::fetchPreferences(INIFile& a0) throw()
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

void sipScene::writePreferences(INIFile& a0) throw()
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

void sipScene::checkMenu(MainControl& a0) throw()
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

bool sipScene::isValid() const throw()
{
    extern bool sipVH_BALL_4(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<sipMethodCache *>(&sipPyMethods[6]),sipPySelf,NULL,sipNm_BALL_isValid);

    if (!meth)
        return Scene::isValid();

    return sipVH_BALL_4(sipGILState,meth);
}

void sipScene::applyPreferences() throw()
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

void sipScene::setWidgetVisible(bool a0)
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

void sipScene::switchShowWidget() throw()
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

void sipScene::registerThis() throw()
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


extern "C" {static PyObject *meth_Scene_countInstances(PyObject *, PyObject *);}
static PyObject *meth_Scene_countInstances(PyObject *,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        if (sipParseArgs(&sipArgsParsed,sipArgs,""))
        {
            int sipRes;

            try
            {
            sipRes = Scene::countInstances();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Scene,sipNm_BALL_countInstances);

    return NULL;
}


extern "C" {static PyObject *meth_Scene_getInstance(PyObject *, PyObject *);}
static PyObject *meth_Scene_getInstance(PyObject *,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Position * a0;
        int a0State = 0;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"M1",sipMappedType_Position,&a0,&a0State))
        {
            Scene *sipRes;

            try
            {
            sipRes = Scene::getInstance(*a0);
            }
            catch (...)
            {

            sipReleaseMappedType(a0,sipMappedType_Position,a0State);
                sipRaiseUnknownException();
                return NULL;
            }

            sipReleaseMappedType(a0,sipMappedType_Position,a0State);

            return sipConvertFromInstance(sipRes,sipClass_Scene,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Scene,sipNm_BALL_getInstance);

    return NULL;
}


extern "C" {static PyObject *meth_Scene_update(PyObject *, PyObject *);}
static PyObject *meth_Scene_update(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        bool a0 = 0;
        Scene *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B|b",&sipSelf,sipClass_Scene,&sipCpp,&a0))
        {
            sipCpp->update(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Scene,sipNm_BALL_update);

    return NULL;
}


extern "C" {static PyObject *meth_Scene_onNotify(PyObject *, PyObject *);}
static PyObject *meth_Scene_onNotify(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        Message * a0;
        Scene *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ@",&sipSelf,sipClass_Scene,&sipCpp,sipClass_Message,&a0))
        {
            (sipSelfWasArg ? sipCpp->Scene::onNotify(a0) : sipCpp->onNotify(a0));

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Scene,sipNm_BALL_onNotify);

    return NULL;
}


extern "C" {static PyObject *meth_Scene_exportScene(PyObject *, PyObject *);}
static PyObject *meth_Scene_exportScene(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        Renderer * a0;
        Scene *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_Scene,&sipCpp,sipClass_Renderer,&a0))
        {
            bool sipRes;

            sipRes = (sipSelfWasArg ? sipCpp->Scene::exportScene(*a0) : sipCpp->exportScene(*a0));

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Scene,sipNm_BALL_exportScene);

    return NULL;
}


extern "C" {static PyObject *meth_Scene_initializeWidget(PyObject *, PyObject *);}
static PyObject *meth_Scene_initializeWidget(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        MainControl * a0;
        Scene *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_Scene,&sipCpp,sipClass_MainControl,&a0))
        {
            (sipSelfWasArg ? sipCpp->Scene::initializeWidget(*a0) : sipCpp->initializeWidget(*a0));

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Scene,sipNm_BALL_initializeWidget);

    return NULL;
}


extern "C" {static PyObject *meth_Scene_fetchPreferences(PyObject *, PyObject *);}
static PyObject *meth_Scene_fetchPreferences(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        INIFile * a0;
        Scene *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_Scene,&sipCpp,sipClass_INIFile,&a0))
        {
            (sipSelfWasArg ? sipCpp->Scene::fetchPreferences(*a0) : sipCpp->fetchPreferences(*a0));

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Scene,sipNm_BALL_fetchPreferences);

    return NULL;
}


extern "C" {static PyObject *meth_Scene_writePreferences(PyObject *, PyObject *);}
static PyObject *meth_Scene_writePreferences(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        INIFile * a0;
        Scene *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_Scene,&sipCpp,sipClass_INIFile,&a0))
        {
            (sipSelfWasArg ? sipCpp->Scene::writePreferences(*a0) : sipCpp->writePreferences(*a0));

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Scene,sipNm_BALL_writePreferences);

    return NULL;
}


extern "C" {static PyObject *meth_Scene_checkMenu(PyObject *, PyObject *);}
static PyObject *meth_Scene_checkMenu(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        MainControl * a0;
        Scene *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_Scene,&sipCpp,sipClass_MainControl,&a0))
        {
            (sipSelfWasArg ? sipCpp->Scene::checkMenu(*a0) : sipCpp->checkMenu(*a0));

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Scene,sipNm_BALL_checkMenu);

    return NULL;
}


extern "C" {static PyObject *meth_Scene_isValid(PyObject *, PyObject *);}
static PyObject *meth_Scene_isValid(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        Scene *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Scene,&sipCpp))
        {
            bool sipRes;

            sipRes = (sipSelfWasArg ? sipCpp->Scene::isValid() : sipCpp->isValid());

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Scene,sipNm_BALL_isValid);

    return NULL;
}


extern "C" {static PyObject *meth_Scene_getStage(PyObject *, PyObject *);}
static PyObject *meth_Scene_getStage(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Scene *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Scene,&sipCpp))
        {
            Stage *sipRes;

            sipRes = sipCpp->getStage();

            return sipConvertFromInstance(sipRes,sipClass_Stage,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Scene,sipNm_BALL_getStage);

    return NULL;
}


extern "C" {static PyObject *meth_Scene_setCamera(PyObject *, PyObject *);}
static PyObject *meth_Scene_setCamera(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const Camera * a0;
        Scene *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_Scene,&sipCpp,sipClass_Camera,&a0))
        {
            sipCpp->setCamera(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Scene,sipNm_BALL_setCamera);

    return NULL;
}


extern "C" {static PyObject *meth_Scene_setAnimationSmoothness(PyObject *, PyObject *);}
static PyObject *meth_Scene_setAnimationSmoothness(PyObject *,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        float a0;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"f",&a0))
        {
            Scene::setAnimationSmoothness(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Scene,sipNm_BALL_setAnimationSmoothness);

    return NULL;
}


extern "C" {static PyObject *meth_Scene_getAnimationSmoothness(PyObject *, PyObject *);}
static PyObject *meth_Scene_getAnimationSmoothness(PyObject *,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        if (sipParseArgs(&sipArgsParsed,sipArgs,""))
        {
            float sipRes;

            sipRes = Scene::getAnimationSmoothness();

            return PyFloat_FromDouble((double)sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Scene,sipNm_BALL_getAnimationSmoothness);

    return NULL;
}


extern "C" {static PyObject *meth_Scene_setDefaultLighting(PyObject *, PyObject *);}
static PyObject *meth_Scene_setDefaultLighting(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        bool a0 = 1;
        Scene *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B|b",&sipSelf,sipClass_Scene,&sipCpp,&a0))
        {
            sipCpp->setDefaultLighting(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Scene,sipNm_BALL_setDefaultLighting);

    return NULL;
}


extern "C" {static PyObject *meth_Scene_initializePreferencesTab(PyObject *, PyObject *);}
static PyObject *meth_Scene_initializePreferencesTab(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Preferences * a0;
        Scene *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_Scene,&sipCpp,sipClass_Preferences,&a0))
        {
            sipCpp->initializePreferencesTab(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Scene,sipNm_BALL_initializePreferencesTab);

    return NULL;
}


extern "C" {static PyObject *meth_Scene_finalizePreferencesTab(PyObject *, PyObject *);}
static PyObject *meth_Scene_finalizePreferencesTab(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Preferences * a0;
        Scene *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_Scene,&sipCpp,sipClass_Preferences,&a0))
        {
            sipCpp->finalizePreferencesTab(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Scene,sipNm_BALL_finalizePreferencesTab);

    return NULL;
}


extern "C" {static PyObject *meth_Scene_applyPreferences(PyObject *, PyObject *);}
static PyObject *meth_Scene_applyPreferences(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        Scene *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Scene,&sipCpp))
        {
            (sipSelfWasArg ? sipCpp->Scene::applyPreferences() : sipCpp->applyPreferences());

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Scene,sipNm_BALL_applyPreferences);

    return NULL;
}


extern "C" {static PyObject *meth_Scene_getMousePositionX(PyObject *, PyObject *);}
static PyObject *meth_Scene_getMousePositionX(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Scene *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Scene,&sipCpp))
        {
            float sipRes;

            try
            {
            sipRes = sipCpp->getMousePositionX();
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return PyFloat_FromDouble((double)sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Scene,sipNm_BALL_getMousePositionX);

    return NULL;
}


extern "C" {static PyObject *meth_Scene_getMousePositionY(PyObject *, PyObject *);}
static PyObject *meth_Scene_getMousePositionY(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Scene *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Scene,&sipCpp))
        {
            float sipRes;

            try
            {
            sipRes = sipCpp->getMousePositionY();
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return PyFloat_FromDouble((double)sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Scene,sipNm_BALL_getMousePositionY);

    return NULL;
}


extern "C" {static PyObject *meth_Scene_exportPNG(PyObject *, PyObject *);}
static PyObject *meth_Scene_exportPNG(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const String * a0;
        int a0State = 0;
        Scene *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ1",&sipSelf,sipClass_Scene,&sipCpp,sipClass_String,&a0,&a0State))
        {
            bool sipRes;

            try
            {
            sipRes = sipCpp->exportPNG(*a0);
            }
            catch (...)
            {

            sipReleaseInstance(const_cast<String *>(a0),sipClass_String,a0State);
                sipRaiseUnknownException();
                return NULL;
            }

            sipReleaseInstance(const_cast<String *>(a0),sipClass_String,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    {
        Scene *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Scene,&sipCpp))
        {
            String *sipRes;

            try
            {
            sipRes = new String(sipCpp->exportPNG());
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Scene,sipNm_BALL_exportPNG);

    return NULL;
}


extern "C" {static PyObject *meth_Scene_setWidgetVisible(PyObject *, PyObject *);}
static PyObject *meth_Scene_setWidgetVisible(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        bool a0;
        Scene *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bb",&sipSelf,sipClass_Scene,&sipCpp,&a0))
        {
            try
            {
            (sipSelfWasArg ? sipCpp->Scene::setWidgetVisible(a0) : sipCpp->setWidgetVisible(a0));
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Scene,sipNm_BALL_setWidgetVisible);

    return NULL;
}


extern "C" {static PyObject *meth_Scene_setOffScreenRendering(PyObject *, PyObject *);}
static PyObject *meth_Scene_setOffScreenRendering(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        bool a0;
        int a1;
        Scene *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bbi",&sipSelf,sipClass_Scene,&sipCpp,&a0,&a1))
        {
            try
            {
            sipCpp->setOffScreenRendering(a0,a1);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Scene,sipNm_BALL_setOffScreenRendering);

    return NULL;
}


extern "C" {static PyObject *meth_Scene_rotate(PyObject *, PyObject *);}
static PyObject *meth_Scene_rotate(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        float a0;
        float a1;
        Scene *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bff",&sipSelf,sipClass_Scene,&sipCpp,&a0,&a1))
        {
            try
            {
            sipCpp->rotate(a0,a1);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Scene,sipNm_BALL_rotate);

    return NULL;
}


extern "C" {static PyObject *meth_Scene_rotateClockwise(PyObject *, PyObject *);}
static PyObject *meth_Scene_rotateClockwise(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        float a0;
        Scene *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bf",&sipSelf,sipClass_Scene,&sipCpp,&a0))
        {
            try
            {
            sipCpp->rotateClockwise(a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Scene,sipNm_BALL_rotateClockwise);

    return NULL;
}


extern "C" {static PyObject *meth_Scene_move(PyObject *, PyObject *);}
static PyObject *meth_Scene_move(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Vector3 * a0;
        Scene *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_Scene,&sipCpp,sipClass_Vector3,&a0))
        {
            try
            {
            sipCpp->move(*a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Scene,sipNm_BALL_move);

    return NULL;
}


extern "C" {static PyObject *meth_Scene_moveComposites(PyObject *, PyObject *);}
static PyObject *meth_Scene_moveComposites(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        PyCompositeList * a0;
        int a0State = 0;
        Vector3 * a1;
        Scene *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BM1JA",&sipSelf,sipClass_Scene,&sipCpp,sipMappedType_PyCompositeList,&a0,&a0State,sipClass_Vector3,&a1))
        {
            try
            {
            sipCpp->moveComposites(*a0,*a1);
            }
            catch (...)
            {

            sipReleaseMappedType(a0,sipMappedType_PyCompositeList,a0State);
                sipRaiseUnknownException();
                return NULL;
            }

            sipReleaseMappedType(a0,sipMappedType_PyCompositeList,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Scene,sipNm_BALL_moveComposites);

    return NULL;
}


extern "C" {static PyObject *meth_Scene_rotateComposites(PyObject *, PyObject *);}
static PyObject *meth_Scene_rotateComposites(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        PyCompositeList * a0;
        int a0State = 0;
        float a1;
        float a2;
        float a3 = 0;
        Scene *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BM1ff|f",&sipSelf,sipClass_Scene,&sipCpp,sipMappedType_PyCompositeList,&a0,&a0State,&a1,&a2,&a3))
        {
            try
            {
            sipCpp->rotateComposites(*a0,a1,a2,a3);
            }
            catch (...)
            {

            sipReleaseMappedType(a0,sipMappedType_PyCompositeList,a0State);
                sipRaiseUnknownException();
                return NULL;
            }

            sipReleaseMappedType(a0,sipMappedType_PyCompositeList,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Scene,sipNm_BALL_rotateComposites);

    return NULL;
}


extern "C" {static PyObject *meth_Scene_isAnimationRunning(PyObject *, PyObject *);}
static PyObject *meth_Scene_isAnimationRunning(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Scene *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Scene,&sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isAnimationRunning();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Scene,sipNm_BALL_isAnimationRunning);

    return NULL;
}


extern "C" {static PyObject *meth_Scene_setTurnPoint(PyObject *, PyObject *);}
static PyObject *meth_Scene_setTurnPoint(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const Vector3 * a0;
        Scene *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_Scene,&sipCpp,sipClass_Vector3,&a0))
        {
            try
            {
            sipCpp->setTurnPoint(*a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Scene,sipNm_BALL_setTurnPoint);

    return NULL;
}


extern "C" {static PyObject *meth_Scene_getTurnPoint(PyObject *, PyObject *);}
static PyObject *meth_Scene_getTurnPoint(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Scene *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Scene,&sipCpp))
        {
            const Vector3 *sipRes;

            try
            {
            sipRes = &sipCpp->getTurnPoint();
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return sipConvertFromInstance(const_cast<Vector3 *>(sipRes),sipClass_Vector3,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Scene,sipNm_BALL_getTurnPoint);

    return NULL;
}


extern "C" {static PyObject *meth_Scene_setFullScreen(PyObject *, PyObject *);}
static PyObject *meth_Scene_setFullScreen(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        bool a0;
        Scene *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bb",&sipSelf,sipClass_Scene,&sipCpp,&a0))
        {
            try
            {
            sipCpp->setFullScreen(a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Scene,sipNm_BALL_setFullScreen);

    return NULL;
}


extern "C" {static PyObject *meth_Scene_setFPSEnabled(PyObject *, PyObject *);}
static PyObject *meth_Scene_setFPSEnabled(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        bool a0;
        Scene *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bb",&sipSelf,sipClass_Scene,&sipCpp,&a0))
        {
            try
            {
            sipCpp->setFPSEnabled(a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Scene,sipNm_BALL_setFPSEnabled);

    return NULL;
}


extern "C" {static PyObject *meth_Scene_showText(PyObject *, PyObject *);}
static PyObject *meth_Scene_showText(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const String * a0;
        int a0State = 0;
        int a1 = 20;
        Scene *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ1|i",&sipSelf,sipClass_Scene,&sipCpp,sipClass_String,&a0,&a0State,&a1))
        {
            try
            {
            sipCpp->showText(*a0,a1);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Scene,sipNm_BALL_showText);

    return NULL;
}


extern "C" {static PyObject *meth_Scene_createCoordinateSystem(PyObject *, PyObject *);}
static PyObject *meth_Scene_createCoordinateSystem(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Scene *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Scene,&sipCpp))
        {
            sipCpp->createCoordinateSystem();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Scene,sipNm_BALL_createCoordinateSystem);

    return NULL;
}


extern "C" {static PyObject *meth_Scene_createCoordinateSystemAtOrigin(PyObject *, PyObject *);}
static PyObject *meth_Scene_createCoordinateSystemAtOrigin(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Scene *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Scene,&sipCpp))
        {
            sipCpp->createCoordinateSystemAtOrigin();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Scene,sipNm_BALL_createCoordinateSystemAtOrigin);

    return NULL;
}


extern "C" {static PyObject *meth_Scene_exportPOVRay(PyObject *, PyObject *);}
static PyObject *meth_Scene_exportPOVRay(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Scene *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Scene,&sipCpp))
        {
            try
            {
            sipCpp->exportPOVRay();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Scene,sipNm_BALL_exportPOVRay);

    return NULL;
}


extern "C" {static PyObject *meth_Scene_exportNextPOVRay(PyObject *, PyObject *);}
static PyObject *meth_Scene_exportNextPOVRay(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Scene *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Scene,&sipCpp))
        {
            try
            {
            sipCpp->exportNextPOVRay();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Scene,sipNm_BALL_exportNextPOVRay);

    return NULL;
}


extern "C" {static PyObject *meth_Scene_printScene(PyObject *, PyObject *);}
static PyObject *meth_Scene_printScene(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Scene *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Scene,&sipCpp))
        {
            try
            {
            sipCpp->printScene();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Scene,sipNm_BALL_printScene);

    return NULL;
}


extern "C" {static PyObject *meth_Scene_showExportPNGDialog(PyObject *, PyObject *);}
static PyObject *meth_Scene_showExportPNGDialog(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Scene *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Scene,&sipCpp))
        {
            try
            {
            sipCpp->showExportPNGDialog();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Scene,sipNm_BALL_showExportPNGDialog);

    return NULL;
}


extern "C" {static PyObject *meth_Scene_showExportVRMLDialog(PyObject *, PyObject *);}
static PyObject *meth_Scene_showExportVRMLDialog(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Scene *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Scene,&sipCpp))
        {
            try
            {
            sipCpp->showExportVRMLDialog();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Scene,sipNm_BALL_showExportVRMLDialog);

    return NULL;
}


extern "C" {static PyObject *meth_Scene_switchShowWidget(PyObject *, PyObject *);}
static PyObject *meth_Scene_switchShowWidget(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        Scene *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Scene,&sipCpp))
        {
            (sipSelfWasArg ? sipCpp->Scene::switchShowWidget() : sipCpp->switchShowWidget());

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Scene,sipNm_BALL_switchShowWidget);

    return NULL;
}


extern "C" {static PyObject *meth_Scene_exitStereo(PyObject *, PyObject *);}
static PyObject *meth_Scene_exitStereo(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Scene *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Scene,&sipCpp))
        {
            sipCpp->exitStereo();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Scene,sipNm_BALL_exitStereo);

    return NULL;
}


extern "C" {static PyObject *meth_Scene_enterActiveStereo(PyObject *, PyObject *);}
static PyObject *meth_Scene_enterActiveStereo(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Scene *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Scene,&sipCpp))
        {
            sipCpp->enterActiveStereo();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Scene,sipNm_BALL_enterActiveStereo);

    return NULL;
}


extern "C" {static PyObject *meth_Scene_enterDualStereo(PyObject *, PyObject *);}
static PyObject *meth_Scene_enterDualStereo(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Scene *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Scene,&sipCpp))
        {
            sipCpp->enterDualStereo();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Scene,sipNm_BALL_enterDualStereo);

    return NULL;
}


extern "C" {static PyObject *meth_Scene_clearRecordedAnimation(PyObject *, PyObject *);}
static PyObject *meth_Scene_clearRecordedAnimation(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Scene *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Scene,&sipCpp))
        {
            sipCpp->clearRecordedAnimation();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Scene,sipNm_BALL_clearRecordedAnimation);

    return NULL;
}


extern "C" {static PyObject *meth_Scene_startAnimation(PyObject *, PyObject *);}
static PyObject *meth_Scene_startAnimation(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Scene *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Scene,&sipCpp))
        {
            sipCpp->startAnimation();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Scene,sipNm_BALL_startAnimation);

    return NULL;
}


extern "C" {static PyObject *meth_Scene_stopAnimation(PyObject *, PyObject *);}
static PyObject *meth_Scene_stopAnimation(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Scene *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Scene,&sipCpp))
        {
            sipCpp->stopAnimation();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Scene,sipNm_BALL_stopAnimation);

    return NULL;
}


extern "C" {static PyObject *meth_Scene_switchToLastMode(PyObject *, PyObject *);}
static PyObject *meth_Scene_switchToLastMode(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Scene *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Scene,&sipCpp))
        {
            sipCpp->switchToLastMode();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Scene,sipNm_BALL_switchToLastMode);

    return NULL;
}


extern "C" {static PyObject *meth_Scene_switchShowGrid(PyObject *, PyObject *);}
static PyObject *meth_Scene_switchShowGrid(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Scene *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Scene,&sipCpp))
        {
            try
            {
            sipCpp->switchShowGrid();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Scene,sipNm_BALL_switchShowGrid);

    return NULL;
}


extern "C" {static PyObject *meth_Scene_showInfos(PyObject *, PyObject *);}
static PyObject *meth_Scene_showInfos(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Scene *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Scene,&sipCpp))
        {
            try
            {
            sipCpp->showInfos();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Scene,sipNm_BALL_showInfos);

    return NULL;
}


extern "C" {static PyObject *meth_Scene_setupViewVolume(PyObject *, PyObject *);}
static PyObject *meth_Scene_setupViewVolume(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Scene *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Scene,&sipCpp))
        {
            try
            {
            sipCpp->setupViewVolume();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Scene,sipNm_BALL_setupViewVolume);

    return NULL;
}


extern "C" {static PyObject *meth_Scene_disableViewVolumeRestriction(PyObject *, PyObject *);}
static PyObject *meth_Scene_disableViewVolumeRestriction(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Scene *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Scene,&sipCpp))
        {
            try
            {
            sipCpp->disableViewVolumeRestriction();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Scene,sipNm_BALL_disableViewVolumeRestriction);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_Scene(void *, sipWrapperType *);}
static void *cast_Scene(void *ptr,sipWrapperType *targetClass)
{
    void *res;

    if (targetClass == sipClass_Scene)
        return ptr;

    if ((res = sipCast_Embeddable((Embeddable *)(Scene *)ptr,targetClass)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_Scene(void *, int);}
static void release_Scene(void *ptr,int state)
{
    if (state & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipScene *>(ptr);
    else
        delete reinterpret_cast<Scene *>(ptr);
}


extern "C" {static void dealloc_Scene(sipWrapper *);}
static void dealloc_Scene(sipWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipScene *>(sipSelf->u.cppPtr)->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_Scene(sipSelf->u.cppPtr,sipSelf->flags);
    }
}


extern "C" {static void *init_Scene(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_Scene(sipWrapper *sipSelf,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    sipScene *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            sipCpp = new sipScene();
        }
    }

    if (!sipCpp)
    {
        const Scene * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_Scene,&a0))
        {
            try
            {
            sipCpp = new sipScene(*a0);
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


extern "C" {static void *forceConvertTo_Scene(PyObject *, int *);}
static void *forceConvertTo_Scene(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_Scene))
        return sipConvertToCpp(valobj,sipClass_Scene,iserrp);

    sipBadClass(sipNm_BALL_Scene);

    *iserrp = 1;

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedClassDef supers_Scene[] = {{200, 255, 1}};


static PyMethodDef methods_Scene[] = {
    {sipNm_BALL_applyPreferences, meth_Scene_applyPreferences, METH_VARARGS, NULL},
    {sipNm_BALL_checkMenu, meth_Scene_checkMenu, METH_VARARGS, NULL},
    {sipNm_BALL_clearRecordedAnimation, meth_Scene_clearRecordedAnimation, METH_VARARGS, NULL},
    {sipNm_BALL_countInstances, meth_Scene_countInstances, METH_VARARGS, NULL},
    {sipNm_BALL_createCoordinateSystem, meth_Scene_createCoordinateSystem, METH_VARARGS, NULL},
    {sipNm_BALL_createCoordinateSystemAtOrigin, meth_Scene_createCoordinateSystemAtOrigin, METH_VARARGS, NULL},
    {sipNm_BALL_disableViewVolumeRestriction, meth_Scene_disableViewVolumeRestriction, METH_VARARGS, NULL},
    {sipNm_BALL_enterActiveStereo, meth_Scene_enterActiveStereo, METH_VARARGS, NULL},
    {sipNm_BALL_enterDualStereo, meth_Scene_enterDualStereo, METH_VARARGS, NULL},
    {sipNm_BALL_exitStereo, meth_Scene_exitStereo, METH_VARARGS, NULL},
    {sipNm_BALL_exportNextPOVRay, meth_Scene_exportNextPOVRay, METH_VARARGS, NULL},
    {sipNm_BALL_exportPNG, meth_Scene_exportPNG, METH_VARARGS, NULL},
    {sipNm_BALL_exportPOVRay, meth_Scene_exportPOVRay, METH_VARARGS, NULL},
    {sipNm_BALL_exportScene, meth_Scene_exportScene, METH_VARARGS, NULL},
    {sipNm_BALL_fetchPreferences, meth_Scene_fetchPreferences, METH_VARARGS, NULL},
    {sipNm_BALL_finalizePreferencesTab, meth_Scene_finalizePreferencesTab, METH_VARARGS, NULL},
    {sipNm_BALL_getAnimationSmoothness, meth_Scene_getAnimationSmoothness, METH_VARARGS, NULL},
    {sipNm_BALL_getInstance, meth_Scene_getInstance, METH_VARARGS, NULL},
    {sipNm_BALL_getMousePositionX, meth_Scene_getMousePositionX, METH_VARARGS, NULL},
    {sipNm_BALL_getMousePositionY, meth_Scene_getMousePositionY, METH_VARARGS, NULL},
    {sipNm_BALL_getStage, meth_Scene_getStage, METH_VARARGS, NULL},
    {sipNm_BALL_getTurnPoint, meth_Scene_getTurnPoint, METH_VARARGS, NULL},
    {sipNm_BALL_initializePreferencesTab, meth_Scene_initializePreferencesTab, METH_VARARGS, NULL},
    {sipNm_BALL_initializeWidget, meth_Scene_initializeWidget, METH_VARARGS, NULL},
    {sipNm_BALL_isAnimationRunning, meth_Scene_isAnimationRunning, METH_VARARGS, NULL},
    {sipNm_BALL_isValid, meth_Scene_isValid, METH_VARARGS, NULL},
    {sipNm_BALL_move, meth_Scene_move, METH_VARARGS, NULL},
    {sipNm_BALL_moveComposites, meth_Scene_moveComposites, METH_VARARGS, NULL},
    {sipNm_BALL_onNotify, meth_Scene_onNotify, METH_VARARGS, NULL},
    {sipNm_BALL_printScene, meth_Scene_printScene, METH_VARARGS, NULL},
    {sipNm_BALL_rotate, meth_Scene_rotate, METH_VARARGS, NULL},
    {sipNm_BALL_rotateClockwise, meth_Scene_rotateClockwise, METH_VARARGS, NULL},
    {sipNm_BALL_rotateComposites, meth_Scene_rotateComposites, METH_VARARGS, NULL},
    {sipNm_BALL_setAnimationSmoothness, meth_Scene_setAnimationSmoothness, METH_VARARGS, NULL},
    {sipNm_BALL_setCamera, meth_Scene_setCamera, METH_VARARGS, NULL},
    {sipNm_BALL_setDefaultLighting, meth_Scene_setDefaultLighting, METH_VARARGS, NULL},
    {sipNm_BALL_setFPSEnabled, meth_Scene_setFPSEnabled, METH_VARARGS, NULL},
    {sipNm_BALL_setFullScreen, meth_Scene_setFullScreen, METH_VARARGS, NULL},
    {sipNm_BALL_setOffScreenRendering, meth_Scene_setOffScreenRendering, METH_VARARGS, NULL},
    {sipNm_BALL_setTurnPoint, meth_Scene_setTurnPoint, METH_VARARGS, NULL},
    {sipNm_BALL_setWidgetVisible, meth_Scene_setWidgetVisible, METH_VARARGS, NULL},
    {sipNm_BALL_setupViewVolume, meth_Scene_setupViewVolume, METH_VARARGS, NULL},
    {sipNm_BALL_showExportPNGDialog, meth_Scene_showExportPNGDialog, METH_VARARGS, NULL},
    {sipNm_BALL_showExportVRMLDialog, meth_Scene_showExportVRMLDialog, METH_VARARGS, NULL},
    {sipNm_BALL_showInfos, meth_Scene_showInfos, METH_VARARGS, NULL},
    {sipNm_BALL_showText, meth_Scene_showText, METH_VARARGS, NULL},
    {sipNm_BALL_startAnimation, meth_Scene_startAnimation, METH_VARARGS, NULL},
    {sipNm_BALL_stopAnimation, meth_Scene_stopAnimation, METH_VARARGS, NULL},
    {sipNm_BALL_switchShowGrid, meth_Scene_switchShowGrid, METH_VARARGS, NULL},
    {sipNm_BALL_switchShowWidget, meth_Scene_switchShowWidget, METH_VARARGS, NULL},
    {sipNm_BALL_switchToLastMode, meth_Scene_switchToLastMode, METH_VARARGS, NULL},
    {sipNm_BALL_update, meth_Scene_update, METH_VARARGS, NULL},
    {sipNm_BALL_writePreferences, meth_Scene_writePreferences, METH_VARARGS, NULL}
};


sipTypeDef sipType_BALL_Scene = {
    0,
    0,
    "BALL.Scene",
    0,
    {0, 0, 1},
    supers_Scene,
    0,
    53, methods_Scene,
    0, 0,
    0,
    init_Scene,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_Scene,
    cast_Scene,
    release_Scene,
    forceConvertTo_Scene,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
