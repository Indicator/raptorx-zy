/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLMainControl.h"

#include "sipBALLEmbeddable.h"
#include "sipBALLMainControl.h"
#include "sipBALLString.h"
#include "sipBALLPosition.h"
#include "sipBALLModularWidget.h"
#include "sipBALLFragmentDB.h"
#include "sipBALLComposite.h"
#include "sipBALLSystem.h"
#include "sipBALLPyCompositeList.h"
#include "sipBALLINIFile.h"
#include "sipBALLMessage.h"
#include "sipBALLPreferences.h"
#include "sipBALLRepresentation.h"
#include "sipBALLCompositeManager.h"
#include "sipBALLRepresentationManager.h"


sipMainControl::sipMainControl(const MainControl& a0) throw(): MainControl(a0), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,9);
}

sipMainControl::~sipMainControl() throw()
{
    sipCommonDtor(sipPySelf);
}

void sipMainControl::clear() throw()
{
    extern void sipVH_BALL_0(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipNm_BALL_clear);

    if (!meth)
    {
        MainControl::clear();
        return;
    }

    sipVH_BALL_0(sipGILState,meth);
}

void sipMainControl::show()
{
    extern void sipVH_BALL_0(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,NULL,sipNm_BALL_show);

    if (!meth)
    {
        MainControl::show();
        return;
    }

    sipVH_BALL_0(sipGILState,meth);
}

void sipMainControl::checkMenus()
{
    extern void sipVH_BALL_0(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[2],sipPySelf,NULL,sipNm_BALL_checkMenus);

    if (!meth)
    {
        MainControl::checkMenus();
        return;
    }

    sipVH_BALL_0(sipGILState,meth);
}

void sipMainControl::aboutToExit()
{
    extern void sipVH_BALL_0(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[3],sipPySelf,NULL,sipNm_BALL_aboutToExit);

    if (!meth)
    {
        MainControl::aboutToExit();
        return;
    }

    sipVH_BALL_0(sipGILState,meth);
}

void sipMainControl::quit(int a0)
{
    extern void sipVH_BALL_23(sip_gilstate_t,PyObject *,int);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[4],sipPySelf,NULL,sipNm_BALL_quit);

    if (!meth)
    {
        MainControl::quit(a0);
        return;
    }

    sipVH_BALL_23(sipGILState,meth,a0);
}

bool sipMainControl::isAboutToQuit()
{
    extern bool sipVH_BALL_4(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[5],sipPySelf,NULL,sipNm_BALL_isAboutToQuit);

    if (!meth)
        return MainControl::isAboutToQuit();

    return sipVH_BALL_4(sipGILState,meth);
}

void sipMainControl::resize(int a0,int a1)
{
    extern void sipVH_BALL_22(sip_gilstate_t,PyObject *,int,int);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[6],sipPySelf,NULL,sipNm_BALL_resize);

    if (!meth)
    {
        MainControl::resize(a0,a1);
        return;
    }

    sipVH_BALL_22(sipGILState,meth,a0,a1);
}

void sipMainControl::openFile(const String& a0) throw()
{
    extern void sipVH_BALL_9(sip_gilstate_t,PyObject *,const String&);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[7],sipPySelf,NULL,sipNm_BALL_openFile);

    if (!meth)
    {
        MainControl::openFile(a0);
        return;
    }

    sipVH_BALL_9(sipGILState,meth,a0);
}

void sipMainControl::registerThis() throw()
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


extern "C" {static PyObject *meth_MainControl_clear(PyObject *, PyObject *);}
static PyObject *meth_MainControl_clear(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        MainControl *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_MainControl,&sipCpp))
        {
            (sipSelfWasArg ? sipCpp->MainControl::clear() : sipCpp->clear());

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_MainControl,sipNm_BALL_clear);

    return NULL;
}


extern "C" {static PyObject *meth_MainControl_clearData(PyObject *, PyObject *);}
static PyObject *meth_MainControl_clearData(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        MainControl *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_MainControl,&sipCpp))
        {
            sipCpp->clearData();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_MainControl,sipNm_BALL_clearData);

    return NULL;
}


extern "C" {static PyObject *meth_MainControl_countInstances(PyObject *, PyObject *);}
static PyObject *meth_MainControl_countInstances(PyObject *,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        if (sipParseArgs(&sipArgsParsed,sipArgs,""))
        {
            int sipRes;

            try
            {
            sipRes = MainControl::countInstances();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_MainControl,sipNm_BALL_countInstances);

    return NULL;
}


extern "C" {static PyObject *meth_MainControl_getInstance(PyObject *, PyObject *);}
static PyObject *meth_MainControl_getInstance(PyObject *,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Position * a0;
        int a0State = 0;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"M1",sipMappedType_Position,&a0,&a0State))
        {
            MainControl *sipRes;

            try
            {
            sipRes = MainControl::getInstance(*a0);
            }
            catch (...)
            {

            sipReleaseMappedType(a0,sipMappedType_Position,a0State);
                sipRaiseUnknownException();
                return NULL;
            }

            sipReleaseMappedType(a0,sipMappedType_Position,a0State);

            return sipConvertFromInstance(sipRes,sipClass_MainControl,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_MainControl,sipNm_BALL_getInstance);

    return NULL;
}


extern "C" {static PyObject *meth_MainControl_getRepresentationManager(PyObject *, PyObject *);}
static PyObject *meth_MainControl_getRepresentationManager(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        MainControl *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_MainControl,&sipCpp))
        {
            RepresentationManager *sipRes;

            sipRes = &sipCpp->getRepresentationManager();

            return sipConvertFromInstance(sipRes,sipClass_RepresentationManager,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_MainControl,sipNm_BALL_getRepresentationManager);

    return NULL;
}


extern "C" {static PyObject *meth_MainControl_getCompositeManager(PyObject *, PyObject *);}
static PyObject *meth_MainControl_getCompositeManager(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        MainControl *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_MainControl,&sipCpp))
        {
            CompositeManager *sipRes;

            sipRes = &sipCpp->getCompositeManager();

            return sipConvertFromInstance(sipRes,sipClass_CompositeManager,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_MainControl,sipNm_BALL_getCompositeManager);

    return NULL;
}


extern "C" {static PyObject *meth_MainControl_updateRepresentationsOf(PyObject *, PyObject *);}
static PyObject *meth_MainControl_updateRepresentationsOf(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const Composite * a0;
        bool a1 = 1;
        bool a2 = 0;
        MainControl *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA|bb",&sipSelf,sipClass_MainControl,&sipCpp,sipClass_Composite,&a0,&a1,&a2))
        {
            bool sipRes;

            sipRes = sipCpp->updateRepresentationsOf(*a0,a1,a2);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_MainControl,sipNm_BALL_updateRepresentationsOf);

    return NULL;
}


extern "C" {static PyObject *meth_MainControl_redrawAllRepresentations(PyObject *, PyObject *);}
static PyObject *meth_MainControl_redrawAllRepresentations(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        bool a0 = 0;
        MainControl *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B|b",&sipSelf,sipClass_MainControl,&sipCpp,&a0))
        {
            sipCpp->redrawAllRepresentations(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_MainControl,sipNm_BALL_redrawAllRepresentations);

    return NULL;
}


extern "C" {static PyObject *meth_MainControl_update(PyObject *, PyObject *);}
static PyObject *meth_MainControl_update(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Composite * a0;
        bool a1 = 1;
        MainControl *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA|b",&sipSelf,sipClass_MainControl,&sipCpp,sipClass_Composite,&a0,&a1))
        {
            sipCpp->update(*a0,a1);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    {
        Representation * a0;
        MainControl *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_MainControl,&sipCpp,sipClass_Representation,&a0))
        {
            bool sipRes;

            sipRes = sipCpp->update(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_MainControl,sipNm_BALL_update);

    return NULL;
}


extern "C" {static PyObject *meth_MainControl_insert(PyObject *, PyObject *);}
static PyObject *meth_MainControl_insert(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Composite * a0;
        String * a1;
        int a1State = 0;
        MainControl *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJCJ1",&sipSelf,sipClass_MainControl,&sipCpp,sipClass_Composite,&a0,sipClass_String,&a1,&a1State))
        {
            bool sipRes;

            sipRes = sipCpp->insert(*a0,*a1);

            sipReleaseInstance(a1,sipClass_String,a1State);

            return PyBool_FromLong(sipRes);
        }
    }

    {
        Composite * a0;
        MainControl *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJC",&sipSelf,sipClass_MainControl,&sipCpp,sipClass_Composite,&a0))
        {
            bool sipRes;

            sipRes = sipCpp->insert(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    {
        Representation * a0;
        MainControl *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJC",&sipSelf,sipClass_MainControl,&sipCpp,sipClass_Representation,&a0))
        {
            bool sipRes;

            sipRes = sipCpp->insert(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_MainControl,sipNm_BALL_insert);

    return NULL;
}


extern "C" {static PyObject *meth_MainControl_remove(PyObject *, PyObject *);}
static PyObject *meth_MainControl_remove(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Composite * a0;
        bool a1 = 1;
        bool a2 = 1;
        MainControl *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA|bb",&sipSelf,sipClass_MainControl,&sipCpp,sipClass_Composite,&a0,&a1,&a2))
        {
            bool sipRes;

            sipRes = sipCpp->remove(*a0,a1,a2);

            return PyBool_FromLong(sipRes);
        }
    }

    {
        Representation * a0;
        MainControl *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_MainControl,&sipCpp,sipClass_Representation,&a0))
        {
            bool sipRes;

            sipRes = sipCpp->remove(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_MainControl,sipNm_BALL_remove);

    return NULL;
}


extern "C" {static PyObject *meth_MainControl_getPreferences(PyObject *, PyObject *);}
static PyObject *meth_MainControl_getPreferences(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        MainControl *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_MainControl,&sipCpp))
        {
            Preferences *sipRes;

            sipRes = sipCpp->getPreferences();

            return sipConvertFromInstance(sipRes,sipClass_Preferences,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_MainControl,sipNm_BALL_getPreferences);

    return NULL;
}


extern "C" {static PyObject *meth_MainControl_getINIFile(PyObject *, PyObject *);}
static PyObject *meth_MainControl_getINIFile(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        MainControl *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_MainControl,&sipCpp))
        {
            INIFile *sipRes;

            sipRes = &sipCpp->getINIFile();

            return sipConvertFromInstance(sipRes,sipClass_INIFile,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_MainControl,sipNm_BALL_getINIFile);

    return NULL;
}


extern "C" {static PyObject *meth_MainControl_sendMessage(PyObject *, PyObject *);}
static PyObject *meth_MainControl_sendMessage(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Message * a0;
        MainControl *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJC",&sipSelf,sipClass_MainControl,&sipCpp,sipClass_Message,&a0))
        {
            sipCpp->sendMessage(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_MainControl,sipNm_BALL_sendMessage);

    return NULL;
}


extern "C" {static PyObject *meth_MainControl_show(PyObject *, PyObject *);}
static PyObject *meth_MainControl_show(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        MainControl *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_MainControl,&sipCpp))
        {
            try
            {
            (sipSelfWasArg ? sipCpp->MainControl::show() : sipCpp->show());
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_MainControl,sipNm_BALL_show);

    return NULL;
}


extern "C" {static PyObject *meth_MainControl_checkMenus(PyObject *, PyObject *);}
static PyObject *meth_MainControl_checkMenus(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        MainControl *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_MainControl,&sipCpp))
        {
            try
            {
            (sipSelfWasArg ? sipCpp->MainControl::checkMenus() : sipCpp->checkMenus());
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_MainControl,sipNm_BALL_checkMenus);

    return NULL;
}


extern "C" {static PyObject *meth_MainControl_stopSimulation(PyObject *, PyObject *);}
static PyObject *meth_MainControl_stopSimulation(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        MainControl *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_MainControl,&sipCpp))
        {
            try
            {
            sipCpp->stopSimulation();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_MainControl,sipNm_BALL_stopSimulation);

    return NULL;
}


extern "C" {static PyObject *meth_MainControl_complementSelection(PyObject *, PyObject *);}
static PyObject *meth_MainControl_complementSelection(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        MainControl *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_MainControl,&sipCpp))
        {
            try
            {
            sipCpp->complementSelection();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_MainControl,sipNm_BALL_complementSelection);

    return NULL;
}


extern "C" {static PyObject *meth_MainControl_aboutToExit(PyObject *, PyObject *);}
static PyObject *meth_MainControl_aboutToExit(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        MainControl *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_MainControl,&sipCpp))
        {
            try
            {
            (sipSelfWasArg ? sipCpp->MainControl::aboutToExit() : sipCpp->aboutToExit());
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_MainControl,sipNm_BALL_aboutToExit);

    return NULL;
}


extern "C" {static PyObject *meth_MainControl_quit(PyObject *, PyObject *);}
static PyObject *meth_MainControl_quit(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        int a0 = 0;
        MainControl *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B|i",&sipSelf,sipClass_MainControl,&sipCpp,&a0))
        {
            try
            {
            (sipSelfWasArg ? sipCpp->MainControl::quit(a0) : sipCpp->quit(a0));
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_MainControl,sipNm_BALL_quit);

    return NULL;
}


extern "C" {static PyObject *meth_MainControl_isAboutToQuit(PyObject *, PyObject *);}
static PyObject *meth_MainControl_isAboutToQuit(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        MainControl *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_MainControl,&sipCpp))
        {
            bool sipRes;

            try
            {
            sipRes = (sipSelfWasArg ? sipCpp->MainControl::isAboutToQuit() : sipCpp->isAboutToQuit());
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_MainControl,sipNm_BALL_isAboutToQuit);

    return NULL;
}


extern "C" {static PyObject *meth_MainControl_resize(PyObject *, PyObject *);}
static PyObject *meth_MainControl_resize(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        int a0;
        int a1;
        MainControl *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bii",&sipSelf,sipClass_MainControl,&sipCpp,&a0,&a1))
        {
            try
            {
            (sipSelfWasArg ? sipCpp->MainControl::resize(a0,a1) : sipCpp->resize(a0,a1));
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_MainControl,sipNm_BALL_resize);

    return NULL;
}


extern "C" {static PyObject *meth_MainControl_setContentSize(PyObject *, PyObject *);}
static PyObject *meth_MainControl_setContentSize(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        int a0;
        int a1;
        MainControl *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bii",&sipSelf,sipClass_MainControl,&sipCpp,&a0,&a1))
        {
            try
            {
            sipCpp->setContentSize(a0,a1);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_MainControl,sipNm_BALL_setContentSize);

    return NULL;
}


extern "C" {static PyObject *meth_MainControl_insertPopupMenuSeparator(PyObject *, PyObject *);}
static PyObject *meth_MainControl_insertPopupMenuSeparator(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        int a0;
        MainControl *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bi",&sipSelf,sipClass_MainControl,&sipCpp,&a0))
        {
            sipCpp->insertPopupMenuSeparator(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_MainControl,sipNm_BALL_insertPopupMenuSeparator);

    return NULL;
}


extern "C" {static PyObject *meth_MainControl_applyPreferences(PyObject *, PyObject *);}
static PyObject *meth_MainControl_applyPreferences(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        MainControl *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_MainControl,&sipCpp))
        {
            sipCpp->applyPreferences();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_MainControl,sipNm_BALL_applyPreferences);

    return NULL;
}


extern "C" {static PyObject *meth_MainControl_fetchPreferences(PyObject *, PyObject *);}
static PyObject *meth_MainControl_fetchPreferences(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        INIFile * a0;
        MainControl *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_MainControl,&sipCpp,sipClass_INIFile,&a0))
        {
            sipCpp->fetchPreferences(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_MainControl,sipNm_BALL_fetchPreferences);

    return NULL;
}


extern "C" {static PyObject *meth_MainControl_writePreferences(PyObject *, PyObject *);}
static PyObject *meth_MainControl_writePreferences(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        INIFile * a0;
        MainControl *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_MainControl,&sipCpp,sipClass_INIFile,&a0))
        {
            sipCpp->writePreferences(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_MainControl,sipNm_BALL_writePreferences);

    return NULL;
}


extern "C" {static PyObject *meth_MainControl_restoreWindows(PyObject *, PyObject *);}
static PyObject *meth_MainControl_restoreWindows(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const INIFile * a0;
        MainControl *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_MainControl,&sipCpp,sipClass_INIFile,&a0))
        {
            sipCpp->restoreWindows(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_MainControl,sipNm_BALL_restoreWindows);

    return NULL;
}


extern "C" {static PyObject *meth_MainControl_addModularWidget(PyObject *, PyObject *);}
static PyObject *meth_MainControl_addModularWidget(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        ModularWidget * a0;
        MainControl *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ@",&sipSelf,sipClass_MainControl,&sipCpp,sipClass_ModularWidget,&a0))
        {
            sipCpp->addModularWidget(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_MainControl,sipNm_BALL_addModularWidget);

    return NULL;
}


extern "C" {static PyObject *meth_MainControl_removeModularWidget(PyObject *, PyObject *);}
static PyObject *meth_MainControl_removeModularWidget(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        ModularWidget * a0;
        MainControl *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ@",&sipSelf,sipClass_MainControl,&sipCpp,sipClass_ModularWidget,&a0))
        {
            sipCpp->removeModularWidget(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_MainControl,sipNm_BALL_removeModularWidget);

    return NULL;
}


extern "C" {static PyObject *meth_MainControl_getSelection(PyObject *, PyObject *);}
static PyObject *meth_MainControl_getSelection(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        MainControl *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_MainControl,&sipCpp))
        {
            PyCompositeList *sipRes;

            sipRes = new PyCompositeList(sipCpp->getSelection());

            PyObject *sipResObj = sipConvertFromMappedType(sipRes,sipMappedType_PyCompositeList,NULL);
            delete sipRes;

            return sipResObj;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_MainControl,sipNm_BALL_getSelection);

    return NULL;
}


extern "C" {static PyObject *meth_MainControl_getMolecularControlSelection(PyObject *, PyObject *);}
static PyObject *meth_MainControl_getMolecularControlSelection(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        MainControl *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_MainControl,&sipCpp))
        {
            PyCompositeList *sipRes;

            sipRes = new PyCompositeList(sipCpp->getMolecularControlSelection());

            PyObject *sipResObj = sipConvertFromMappedType(sipRes,sipMappedType_PyCompositeList,NULL);
            delete sipRes;

            return sipResObj;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_MainControl,sipNm_BALL_getMolecularControlSelection);

    return NULL;
}


extern "C" {static PyObject *meth_MainControl_getSelectedSystem(PyObject *, PyObject *);}
static PyObject *meth_MainControl_getSelectedSystem(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        MainControl *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_MainControl,&sipCpp))
        {
            System *sipRes;

            sipRes = sipCpp->getSelectedSystem();

            return sipConvertFromInstance(sipRes,sipClass_System,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_MainControl,sipNm_BALL_getSelectedSystem);

    return NULL;
}


extern "C" {static PyObject *meth_MainControl_selectCompositeRecursive(PyObject *, PyObject *);}
static PyObject *meth_MainControl_selectCompositeRecursive(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Composite * a0;
        bool a1 = 0;
        MainControl *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ@|b",&sipSelf,sipClass_MainControl,&sipCpp,sipClass_Composite,&a0,&a1))
        {
            sipCpp->selectCompositeRecursive(a0,a1);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_MainControl,sipNm_BALL_selectCompositeRecursive);

    return NULL;
}


extern "C" {static PyObject *meth_MainControl_deselectCompositeRecursive(PyObject *, PyObject *);}
static PyObject *meth_MainControl_deselectCompositeRecursive(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Composite * a0;
        bool a1 = 0;
        MainControl *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ@|b",&sipSelf,sipClass_MainControl,&sipCpp,sipClass_Composite,&a0,&a1))
        {
            sipCpp->deselectCompositeRecursive(a0,a1);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_MainControl,sipNm_BALL_deselectCompositeRecursive);

    return NULL;
}


extern "C" {static PyObject *meth_MainControl_clearSelection(PyObject *, PyObject *);}
static PyObject *meth_MainControl_clearSelection(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        MainControl *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_MainControl,&sipCpp))
        {
            sipCpp->clearSelection();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_MainControl,sipNm_BALL_clearSelection);

    return NULL;
}


extern "C" {static PyObject *meth_MainControl_printSelectionInfos(PyObject *, PyObject *);}
static PyObject *meth_MainControl_printSelectionInfos(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        MainControl *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_MainControl,&sipCpp))
        {
            sipCpp->printSelectionInfos();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_MainControl,sipNm_BALL_printSelectionInfos);

    return NULL;
}


extern "C" {static PyObject *meth_MainControl_setStatusbarText(PyObject *, PyObject *);}
static PyObject *meth_MainControl_setStatusbarText(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const String * a0;
        int a0State = 0;
        bool a1 = 0;
        bool a2 = 0;
        MainControl *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ1|bb",&sipSelf,sipClass_MainControl,&sipCpp,sipClass_String,&a0,&a0State,&a1,&a2))
        {
            try
            {
            sipCpp->setStatusbarText(*a0,a1,a2);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_MainControl,sipNm_BALL_setStatusbarText);

    return NULL;
}


extern "C" {static PyObject *meth_MainControl_getStatusbarText(PyObject *, PyObject *);}
static PyObject *meth_MainControl_getStatusbarText(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        MainControl *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_MainControl,&sipCpp))
        {
            String *sipRes;

            sipRes = new String(sipCpp->getStatusbarText());

            return sipConvertFromNewInstance(sipRes,sipClass_String,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_MainControl,sipNm_BALL_getStatusbarText);

    return NULL;
}


extern "C" {static PyObject *meth_MainControl_getFragmentDB(PyObject *, PyObject *);}
static PyObject *meth_MainControl_getFragmentDB(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        MainControl *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_MainControl,&sipCpp))
        {
            const FragmentDB *sipRes;

            sipRes = &sipCpp->getFragmentDB();

            return sipConvertFromInstance(const_cast<FragmentDB *>(sipRes),sipClass_FragmentDB,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_MainControl,sipNm_BALL_getFragmentDB);

    return NULL;
}


extern "C" {static PyObject *meth_MainControl_compositesAreLocked(PyObject *, PyObject *);}
static PyObject *meth_MainControl_compositesAreLocked(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        MainControl *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_MainControl,&sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->compositesAreLocked();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_MainControl,sipNm_BALL_compositesAreLocked);

    return NULL;
}


extern "C" {static PyObject *meth_MainControl_lockCompositesFor(PyObject *, PyObject *);}
static PyObject *meth_MainControl_lockCompositesFor(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        ModularWidget * a0;
        MainControl *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ@",&sipSelf,sipClass_MainControl,&sipCpp,sipClass_ModularWidget,&a0))
        {
            bool sipRes;

            sipRes = sipCpp->lockCompositesFor(a0);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_MainControl,sipNm_BALL_lockCompositesFor);

    return NULL;
}


extern "C" {static PyObject *meth_MainControl_unlockCompositesFor(PyObject *, PyObject *);}
static PyObject *meth_MainControl_unlockCompositesFor(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        ModularWidget * a0;
        MainControl *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ@",&sipSelf,sipClass_MainControl,&sipCpp,sipClass_ModularWidget,&a0))
        {
            bool sipRes;

            sipRes = sipCpp->unlockCompositesFor(a0);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_MainControl,sipNm_BALL_unlockCompositesFor);

    return NULL;
}


extern "C" {static PyObject *meth_MainControl_getLockingWidget(PyObject *, PyObject *);}
static PyObject *meth_MainControl_getLockingWidget(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        MainControl *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_MainControl,&sipCpp))
        {
            ModularWidget *sipRes;

            sipRes = sipCpp->getLockingWidget();

            return sipConvertFromInstance(sipRes,sipClass_ModularWidget,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_MainControl,sipNm_BALL_getLockingWidget);

    return NULL;
}


extern "C" {static PyObject *meth_MainControl_updateOfRepresentationRunning(PyObject *, PyObject *);}
static PyObject *meth_MainControl_updateOfRepresentationRunning(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        MainControl *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_MainControl,&sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->updateOfRepresentationRunning();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_MainControl,sipNm_BALL_updateOfRepresentationRunning);

    return NULL;
}


extern "C" {static PyObject *meth_MainControl_stopedSimulation(PyObject *, PyObject *);}
static PyObject *meth_MainControl_stopedSimulation(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        MainControl *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_MainControl,&sipCpp))
        {
            bool sipRes;

            try
            {
            sipRes = sipCpp->stopedSimulation();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_MainControl,sipNm_BALL_stopedSimulation);

    return NULL;
}


extern "C" {static PyObject *meth_MainControl_isBusy(PyObject *, PyObject *);}
static PyObject *meth_MainControl_isBusy(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        MainControl *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_MainControl,&sipCpp))
        {
            bool sipRes;

            try
            {
            sipRes = sipCpp->isBusy();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_MainControl,sipNm_BALL_isBusy);

    return NULL;
}


extern "C" {static PyObject *meth_MainControl_wait(PyObject *, PyObject *);}
static PyObject *meth_MainControl_wait(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        MainControl *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_MainControl,&sipCpp))
        {
            try
            {
            sipCpp->wait();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_MainControl,sipNm_BALL_wait);

    return NULL;
}


extern "C" {static PyObject *meth_MainControl_setDeleteEntryEnabled(PyObject *, PyObject *);}
static PyObject *meth_MainControl_setDeleteEntryEnabled(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        bool a0;
        MainControl *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bb",&sipSelf,sipClass_MainControl,&sipCpp,&a0))
        {
            sipCpp->setDeleteEntryEnabled(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_MainControl,sipNm_BALL_setDeleteEntryEnabled);

    return NULL;
}


extern "C" {static PyObject *meth_MainControl_insertDeleteEntry(PyObject *, PyObject *);}
static PyObject *meth_MainControl_insertDeleteEntry(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        MainControl *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_MainControl,&sipCpp))
        {
            sipCpp->insertDeleteEntry();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_MainControl,sipNm_BALL_insertDeleteEntry);

    return NULL;
}


extern "C" {static PyObject *meth_MainControl_getWorkingDir(PyObject *, PyObject *);}
static PyObject *meth_MainControl_getWorkingDir(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        MainControl *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_MainControl,&sipCpp))
        {
            String *sipRes;

            sipRes = new String(sipCpp->getWorkingDir());

            return sipConvertFromNewInstance(sipRes,sipClass_String,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_MainControl,sipNm_BALL_getWorkingDir);

    return NULL;
}


extern "C" {static PyObject *meth_MainControl_setWorkingDir(PyObject *, PyObject *);}
static PyObject *meth_MainControl_setWorkingDir(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const String * a0;
        int a0State = 0;
        MainControl *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ1",&sipSelf,sipClass_MainControl,&sipCpp,sipClass_String,&a0,&a0State))
        {
            sipCpp->setWorkingDir(*a0);

            sipReleaseInstance(const_cast<String *>(a0),sipClass_String,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_MainControl,sipNm_BALL_setWorkingDir);

    return NULL;
}


extern "C" {static PyObject *meth_MainControl_enableLoggingToFile(PyObject *, PyObject *);}
static PyObject *meth_MainControl_enableLoggingToFile(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        MainControl *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_MainControl,&sipCpp))
        {
            sipCpp->enableLoggingToFile();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_MainControl,sipNm_BALL_enableLoggingToFile);

    return NULL;
}


extern "C" {static PyObject *meth_MainControl_disableLoggingToFile(PyObject *, PyObject *);}
static PyObject *meth_MainControl_disableLoggingToFile(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        MainControl *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_MainControl,&sipCpp))
        {
            sipCpp->disableLoggingToFile();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_MainControl,sipNm_BALL_disableLoggingToFile);

    return NULL;
}


extern "C" {static PyObject *meth_MainControl_setLoggingFilename(PyObject *, PyObject *);}
static PyObject *meth_MainControl_setLoggingFilename(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const String * a0;
        int a0State = 0;
        MainControl *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ1",&sipSelf,sipClass_MainControl,&sipCpp,sipClass_String,&a0,&a0State))
        {
            sipCpp->setLoggingFilename(*a0);

            sipReleaseInstance(const_cast<String *>(a0),sipClass_String,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_MainControl,sipNm_BALL_setLoggingFilename);

    return NULL;
}


extern "C" {static PyObject *meth_MainControl_getLoggingFilename(PyObject *, PyObject *);}
static PyObject *meth_MainControl_getLoggingFilename(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        MainControl *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_MainControl,&sipCpp))
        {
            const String *sipRes;

            sipRes = &sipCpp->getLoggingFilename();

            return sipConvertFromInstance(const_cast<String *>(sipRes),sipClass_String,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_MainControl,sipNm_BALL_getLoggingFilename);

    return NULL;
}


extern "C" {static PyObject *meth_MainControl_setProxy(PyObject *, PyObject *);}
static PyObject *meth_MainControl_setProxy(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const String * a0;
        int a0State = 0;
        Position * a1;
        int a1State = 0;
        MainControl *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ1M1",&sipSelf,sipClass_MainControl,&sipCpp,sipClass_String,&a0,&a0State,sipMappedType_Position,&a1,&a1State))
        {
            try
            {
            sipCpp->setProxy(*a0,*a1);
            }
            catch (...)
            {

            sipReleaseInstance(const_cast<String *>(a0),sipClass_String,a0State);
            sipReleaseMappedType(a1,sipMappedType_Position,a1State);
                sipRaiseUnknownException();
                return NULL;
            }

            sipReleaseInstance(const_cast<String *>(a0),sipClass_String,a0State);
            sipReleaseMappedType(a1,sipMappedType_Position,a1State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_MainControl,sipNm_BALL_setProxy);

    return NULL;
}


extern "C" {static PyObject *meth_MainControl_getProxy(PyObject *, PyObject *);}
static PyObject *meth_MainControl_getProxy(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        MainControl *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_MainControl,&sipCpp))
        {
            String *sipRes;

            try
            {
            sipRes = new String(sipCpp->getProxy());
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_MainControl,sipNm_BALL_getProxy);

    return NULL;
}


extern "C" {static PyObject *meth_MainControl_getProxyPort(PyObject *, PyObject *);}
static PyObject *meth_MainControl_getProxyPort(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        MainControl *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_MainControl,&sipCpp))
        {
            Position *sipRes;

            try
            {
            sipRes = new Position(sipCpp->getProxyPort());
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            PyObject *sipResObj = sipConvertFromMappedType(sipRes,sipMappedType_Position,NULL);
            delete sipRes;

            return sipResObj;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_MainControl,sipNm_BALL_getProxyPort);

    return NULL;
}


extern "C" {static PyObject *meth_MainControl_useMultithreading(PyObject *, PyObject *);}
static PyObject *meth_MainControl_useMultithreading(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        MainControl *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_MainControl,&sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->useMultithreading();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_MainControl,sipNm_BALL_useMultithreading);

    return NULL;
}


extern "C" {static PyObject *meth_MainControl_setMultithreading(PyObject *, PyObject *);}
static PyObject *meth_MainControl_setMultithreading(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        bool a0;
        MainControl *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bb",&sipSelf,sipClass_MainControl,&sipCpp,&a0))
        {
            sipCpp->setMultithreading(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_MainControl,sipNm_BALL_setMultithreading);

    return NULL;
}


extern "C" {static PyObject *meth_MainControl_openFile(PyObject *, PyObject *);}
static PyObject *meth_MainControl_openFile(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        const String * a0;
        int a0State = 0;
        MainControl *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ1",&sipSelf,sipClass_MainControl,&sipCpp,sipClass_String,&a0,&a0State))
        {
            (sipSelfWasArg ? sipCpp->MainControl::openFile(*a0) : sipCpp->openFile(*a0));

            sipReleaseInstance(const_cast<String *>(a0),sipClass_String,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_MainControl,sipNm_BALL_openFile);

    return NULL;
}


extern "C" {static PyObject *meth_MainControl_saveBALLViewProjectFile(PyObject *, PyObject *);}
static PyObject *meth_MainControl_saveBALLViewProjectFile(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const String * a0;
        int a0State = 0;
        MainControl *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ1",&sipSelf,sipClass_MainControl,&sipCpp,sipClass_String,&a0,&a0State))
        {
            try
            {
            sipCpp->saveBALLViewProjectFile(*a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_MainControl,sipNm_BALL_saveBALLViewProjectFile);

    return NULL;
}


extern "C" {static PyObject *meth_MainControl_loadBALLViewProjectFile(PyObject *, PyObject *);}
static PyObject *meth_MainControl_loadBALLViewProjectFile(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const String * a0;
        int a0State = 0;
        MainControl *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ1",&sipSelf,sipClass_MainControl,&sipCpp,sipClass_String,&a0,&a0State))
        {
            sipCpp->loadBALLViewProjectFile(*a0);

            sipReleaseInstance(const_cast<String *>(a0),sipClass_String,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_MainControl,sipNm_BALL_loadBALLViewProjectFile);

    return NULL;
}


extern "C" {static PyObject *meth_MainControl_quickSave(PyObject *, PyObject *);}
static PyObject *meth_MainControl_quickSave(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        MainControl *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_MainControl,&sipCpp))
        {
            try
            {
            sipCpp->quickSave();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_MainControl,sipNm_BALL_quickSave);

    return NULL;
}


extern "C" {static PyObject *meth_MainControl_quickLoad(PyObject *, PyObject *);}
static PyObject *meth_MainControl_quickLoad(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        MainControl *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_MainControl,&sipCpp))
        {
            try
            {
            sipCpp->quickLoad();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_MainControl,sipNm_BALL_quickLoad);

    return NULL;
}


extern "C" {static PyObject *meth_MainControl_processEvents(PyObject *, PyObject *);}
static PyObject *meth_MainControl_processEvents(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        int a0;
        MainControl *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bi",&sipSelf,sipClass_MainControl,&sipCpp,&a0))
        {
            try
            {
            sipCpp->processEvents(a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_MainControl,sipNm_BALL_processEvents);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_MainControl(void *, sipWrapperType *);}
static void *cast_MainControl(void *ptr,sipWrapperType *targetClass)
{
    void *res;

    if (targetClass == sipClass_MainControl)
        return ptr;

    if ((res = sipCast_Embeddable((Embeddable *)(MainControl *)ptr,targetClass)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_MainControl(void *, int);}
static void release_MainControl(void *ptr,int state)
{
    if (state & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipMainControl *>(ptr);
    else
        delete reinterpret_cast<MainControl *>(ptr);
}


extern "C" {static void dealloc_MainControl(sipWrapper *);}
static void dealloc_MainControl(sipWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipMainControl *>(sipSelf->u.cppPtr)->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_MainControl(sipSelf->u.cppPtr,sipSelf->flags);
    }
}


extern "C" {static void *init_MainControl(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_MainControl(sipWrapper *sipSelf,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    sipMainControl *sipCpp = 0;

    if (!sipCpp)
    {
        const MainControl * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_MainControl,&a0))
        {
            sipCpp = new sipMainControl(*a0);
        }
    }

    if (sipCpp)
        sipCpp->sipPySelf = sipSelf;

    return sipCpp;
}


extern "C" {static void *forceConvertTo_MainControl(PyObject *, int *);}
static void *forceConvertTo_MainControl(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_MainControl))
        return sipConvertToCpp(valobj,sipClass_MainControl,iserrp);

    sipBadClass(sipNm_BALL_MainControl);

    *iserrp = 1;

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedClassDef supers_MainControl[] = {{200, 255, 1}};


static PyMethodDef methods_MainControl[] = {
    {sipNm_BALL_aboutToExit, meth_MainControl_aboutToExit, METH_VARARGS, NULL},
    {sipNm_BALL_addModularWidget, meth_MainControl_addModularWidget, METH_VARARGS, NULL},
    {sipNm_BALL_applyPreferences, meth_MainControl_applyPreferences, METH_VARARGS, NULL},
    {sipNm_BALL_checkMenus, meth_MainControl_checkMenus, METH_VARARGS, NULL},
    {sipNm_BALL_clear, meth_MainControl_clear, METH_VARARGS, NULL},
    {sipNm_BALL_clearData, meth_MainControl_clearData, METH_VARARGS, NULL},
    {sipNm_BALL_clearSelection, meth_MainControl_clearSelection, METH_VARARGS, NULL},
    {sipNm_BALL_complementSelection, meth_MainControl_complementSelection, METH_VARARGS, NULL},
    {sipNm_BALL_compositesAreLocked, meth_MainControl_compositesAreLocked, METH_VARARGS, NULL},
    {sipNm_BALL_countInstances, meth_MainControl_countInstances, METH_VARARGS, NULL},
    {sipNm_BALL_deselectCompositeRecursive, meth_MainControl_deselectCompositeRecursive, METH_VARARGS, NULL},
    {sipNm_BALL_disableLoggingToFile, meth_MainControl_disableLoggingToFile, METH_VARARGS, NULL},
    {sipNm_BALL_enableLoggingToFile, meth_MainControl_enableLoggingToFile, METH_VARARGS, NULL},
    {sipNm_BALL_fetchPreferences, meth_MainControl_fetchPreferences, METH_VARARGS, NULL},
    {sipNm_BALL_getCompositeManager, meth_MainControl_getCompositeManager, METH_VARARGS, NULL},
    {sipNm_BALL_getFragmentDB, meth_MainControl_getFragmentDB, METH_VARARGS, NULL},
    {sipNm_BALL_getINIFile, meth_MainControl_getINIFile, METH_VARARGS, NULL},
    {sipNm_BALL_getInstance, meth_MainControl_getInstance, METH_VARARGS, NULL},
    {sipNm_BALL_getLockingWidget, meth_MainControl_getLockingWidget, METH_VARARGS, NULL},
    {sipNm_BALL_getLoggingFilename, meth_MainControl_getLoggingFilename, METH_VARARGS, NULL},
    {sipNm_BALL_getMolecularControlSelection, meth_MainControl_getMolecularControlSelection, METH_VARARGS, NULL},
    {sipNm_BALL_getPreferences, meth_MainControl_getPreferences, METH_VARARGS, NULL},
    {sipNm_BALL_getProxy, meth_MainControl_getProxy, METH_VARARGS, NULL},
    {sipNm_BALL_getProxyPort, meth_MainControl_getProxyPort, METH_VARARGS, NULL},
    {sipNm_BALL_getRepresentationManager, meth_MainControl_getRepresentationManager, METH_VARARGS, NULL},
    {sipNm_BALL_getSelectedSystem, meth_MainControl_getSelectedSystem, METH_VARARGS, NULL},
    {sipNm_BALL_getSelection, meth_MainControl_getSelection, METH_VARARGS, NULL},
    {sipNm_BALL_getStatusbarText, meth_MainControl_getStatusbarText, METH_VARARGS, NULL},
    {sipNm_BALL_getWorkingDir, meth_MainControl_getWorkingDir, METH_VARARGS, NULL},
    {sipNm_BALL_insert, meth_MainControl_insert, METH_VARARGS, NULL},
    {sipNm_BALL_insertDeleteEntry, meth_MainControl_insertDeleteEntry, METH_VARARGS, NULL},
    {sipNm_BALL_insertPopupMenuSeparator, meth_MainControl_insertPopupMenuSeparator, METH_VARARGS, NULL},
    {sipNm_BALL_isAboutToQuit, meth_MainControl_isAboutToQuit, METH_VARARGS, NULL},
    {sipNm_BALL_isBusy, meth_MainControl_isBusy, METH_VARARGS, NULL},
    {sipNm_BALL_loadBALLViewProjectFile, meth_MainControl_loadBALLViewProjectFile, METH_VARARGS, NULL},
    {sipNm_BALL_lockCompositesFor, meth_MainControl_lockCompositesFor, METH_VARARGS, NULL},
    {sipNm_BALL_openFile, meth_MainControl_openFile, METH_VARARGS, NULL},
    {sipNm_BALL_printSelectionInfos, meth_MainControl_printSelectionInfos, METH_VARARGS, NULL},
    {sipNm_BALL_processEvents, meth_MainControl_processEvents, METH_VARARGS, NULL},
    {sipNm_BALL_quickLoad, meth_MainControl_quickLoad, METH_VARARGS, NULL},
    {sipNm_BALL_quickSave, meth_MainControl_quickSave, METH_VARARGS, NULL},
    {sipNm_BALL_quit, meth_MainControl_quit, METH_VARARGS, NULL},
    {sipNm_BALL_redrawAllRepresentations, meth_MainControl_redrawAllRepresentations, METH_VARARGS, NULL},
    {sipNm_BALL_remove, meth_MainControl_remove, METH_VARARGS, NULL},
    {sipNm_BALL_removeModularWidget, meth_MainControl_removeModularWidget, METH_VARARGS, NULL},
    {sipNm_BALL_resize, meth_MainControl_resize, METH_VARARGS, NULL},
    {sipNm_BALL_restoreWindows, meth_MainControl_restoreWindows, METH_VARARGS, NULL},
    {sipNm_BALL_saveBALLViewProjectFile, meth_MainControl_saveBALLViewProjectFile, METH_VARARGS, NULL},
    {sipNm_BALL_selectCompositeRecursive, meth_MainControl_selectCompositeRecursive, METH_VARARGS, NULL},
    {sipNm_BALL_sendMessage, meth_MainControl_sendMessage, METH_VARARGS, NULL},
    {sipNm_BALL_setContentSize, meth_MainControl_setContentSize, METH_VARARGS, NULL},
    {sipNm_BALL_setDeleteEntryEnabled, meth_MainControl_setDeleteEntryEnabled, METH_VARARGS, NULL},
    {sipNm_BALL_setLoggingFilename, meth_MainControl_setLoggingFilename, METH_VARARGS, NULL},
    {sipNm_BALL_setMultithreading, meth_MainControl_setMultithreading, METH_VARARGS, NULL},
    {sipNm_BALL_setProxy, meth_MainControl_setProxy, METH_VARARGS, NULL},
    {sipNm_BALL_setStatusbarText, meth_MainControl_setStatusbarText, METH_VARARGS, NULL},
    {sipNm_BALL_setWorkingDir, meth_MainControl_setWorkingDir, METH_VARARGS, NULL},
    {sipNm_BALL_show, meth_MainControl_show, METH_VARARGS, NULL},
    {sipNm_BALL_stopSimulation, meth_MainControl_stopSimulation, METH_VARARGS, NULL},
    {sipNm_BALL_stopedSimulation, meth_MainControl_stopedSimulation, METH_VARARGS, NULL},
    {sipNm_BALL_unlockCompositesFor, meth_MainControl_unlockCompositesFor, METH_VARARGS, NULL},
    {sipNm_BALL_update, meth_MainControl_update, METH_VARARGS, NULL},
    {sipNm_BALL_updateOfRepresentationRunning, meth_MainControl_updateOfRepresentationRunning, METH_VARARGS, NULL},
    {sipNm_BALL_updateRepresentationsOf, meth_MainControl_updateRepresentationsOf, METH_VARARGS, NULL},
    {sipNm_BALL_useMultithreading, meth_MainControl_useMultithreading, METH_VARARGS, NULL},
    {sipNm_BALL_wait, meth_MainControl_wait, METH_VARARGS, NULL},
    {sipNm_BALL_writePreferences, meth_MainControl_writePreferences, METH_VARARGS, NULL}
};


sipTypeDef sipType_BALL_MainControl = {
    0,
    0,
    "BALL.MainControl",
    0,
    {0, 0, 1},
    supers_MainControl,
    0,
    67, methods_MainControl,
    0, 0,
    0,
    init_MainControl,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_MainControl,
    cast_MainControl,
    release_MainControl,
    forceConvertTo_MainControl,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
