/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLModularWidget.h"

#include "sipBALLEmbeddable.h"
#include "sipBALLNullPointer.h"
#include "sipBALLModularWidget.h"
#include "sipBALLString.h"
#include "sipBALLFragmentDB.h"
#include "sipBALLMainControl.h"
#include "sipBALLINIFile.h"
#include "sipBALLPosition.h"


sipModularWidget::sipModularWidget(const char *a0) throw(): ModularWidget(a0), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,11);
}

sipModularWidget::sipModularWidget(const ModularWidget& a0) throw(): ModularWidget(a0), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,11);
}

sipModularWidget::~sipModularWidget() throw()
{
    sipCommonDtor(sipPySelf);
}

void sipModularWidget::destroy() throw()
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

void sipModularWidget::clear() throw()
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

void sipModularWidget::checkMenu(MainControl& a0) throw()
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

void sipModularWidget::applyPreferences() throw()
{
    extern void sipVH_BALL_0(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[3],sipPySelf,NULL,sipNm_BALL_applyPreferences);

    if (!meth)
    {
        ModularWidget::applyPreferences();
        return;
    }

    sipVH_BALL_0(sipGILState,meth);
}

void sipModularWidget::fetchPreferences(INIFile& a0) throw()
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

void sipModularWidget::writePreferences(INIFile& a0) throw()
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

void sipModularWidget::setStatusbarText(String a0,bool a1) throw()
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

void sipModularWidget::showHelp(const String& a0)
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

bool sipModularWidget::canHandle(const String& a0) const
{
    extern bool sipVH_BALL_8(sip_gilstate_t,PyObject *,const String&);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<sipMethodCache *>(&sipPyMethods[8]),sipPySelf,NULL,sipNm_BALL_canHandle);

    if (!meth)
        return ModularWidget::canHandle(a0);

    return sipVH_BALL_8(sipGILState,meth,a0);
}

bool sipModularWidget::openFile(const String& a0)
{
    extern bool sipVH_BALL_8(sip_gilstate_t,PyObject *,const String&);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[9],sipPySelf,NULL,sipNm_BALL_openFile);

    if (!meth)
        return ModularWidget::openFile(a0);

    return sipVH_BALL_8(sipGILState,meth,a0);
}

void sipModularWidget::registerThis() throw()
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


extern "C" {static PyObject *meth_ModularWidget_countInstances(PyObject *, PyObject *);}
static PyObject *meth_ModularWidget_countInstances(PyObject *,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        if (sipParseArgs(&sipArgsParsed,sipArgs,""))
        {
            int sipRes;

            try
            {
            sipRes = ModularWidget::countInstances();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_ModularWidget,sipNm_BALL_countInstances);

    return NULL;
}


extern "C" {static PyObject *meth_ModularWidget_getInstance(PyObject *, PyObject *);}
static PyObject *meth_ModularWidget_getInstance(PyObject *,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Position * a0;
        int a0State = 0;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"M1",sipMappedType_Position,&a0,&a0State))
        {
            ModularWidget *sipRes;

            try
            {
            sipRes = ModularWidget::getInstance(*a0);
            }
            catch (...)
            {

            sipReleaseMappedType(a0,sipMappedType_Position,a0State);
                sipRaiseUnknownException();
                return NULL;
            }

            sipReleaseMappedType(a0,sipMappedType_Position,a0State);

            return sipConvertFromInstance(sipRes,sipClass_ModularWidget,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_ModularWidget,sipNm_BALL_getInstance);

    return NULL;
}


extern "C" {static PyObject *meth_ModularWidget_destroy(PyObject *, PyObject *);}
static PyObject *meth_ModularWidget_destroy(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        ModularWidget *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_ModularWidget,&sipCpp))
        {
            (sipSelfWasArg ? sipCpp->ModularWidget::destroy() : sipCpp->destroy());

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_ModularWidget,sipNm_BALL_destroy);

    return NULL;
}


extern "C" {static PyObject *meth_ModularWidget_clear(PyObject *, PyObject *);}
static PyObject *meth_ModularWidget_clear(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        ModularWidget *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_ModularWidget,&sipCpp))
        {
            (sipSelfWasArg ? sipCpp->ModularWidget::clear() : sipCpp->clear());

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_ModularWidget,sipNm_BALL_clear);

    return NULL;
}


extern "C" {static PyObject *meth_ModularWidget_registerWidget(PyObject *, PyObject *);}
static PyObject *meth_ModularWidget_registerWidget(PyObject *,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        ModularWidget * a0;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"J@",sipClass_ModularWidget,&a0))
        {
            try
            {
            ModularWidget::registerWidget(a0);
            }
            catch (NullPointer &sipExceptionRef)
            {
                /* Hope that there is a valid copy ctor. */
                NullPointer *sipExceptionCopy = new NullPointer(sipExceptionRef);

                sipRaiseClassException(sipClass_NullPointer,sipExceptionCopy);

                return NULL;
            }

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_ModularWidget,sipNm_BALL_registerWidget);

    return NULL;
}


extern "C" {static PyObject *meth_ModularWidget_checkMenu(PyObject *, PyObject *);}
static PyObject *meth_ModularWidget_checkMenu(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        MainControl * a0;
        ModularWidget *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_ModularWidget,&sipCpp,sipClass_MainControl,&a0))
        {
            (sipSelfWasArg ? sipCpp->ModularWidget::checkMenu(*a0) : sipCpp->checkMenu(*a0));

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_ModularWidget,sipNm_BALL_checkMenu);

    return NULL;
}


extern "C" {static PyObject *meth_ModularWidget_applyPreferences(PyObject *, PyObject *);}
static PyObject *meth_ModularWidget_applyPreferences(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        ModularWidget *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_ModularWidget,&sipCpp))
        {
            (sipSelfWasArg ? sipCpp->ModularWidget::applyPreferences() : sipCpp->applyPreferences());

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_ModularWidget,sipNm_BALL_applyPreferences);

    return NULL;
}


extern "C" {static PyObject *meth_ModularWidget_fetchPreferences(PyObject *, PyObject *);}
static PyObject *meth_ModularWidget_fetchPreferences(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        INIFile * a0;
        ModularWidget *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_ModularWidget,&sipCpp,sipClass_INIFile,&a0))
        {
            (sipSelfWasArg ? sipCpp->ModularWidget::fetchPreferences(*a0) : sipCpp->fetchPreferences(*a0));

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_ModularWidget,sipNm_BALL_fetchPreferences);

    return NULL;
}


extern "C" {static PyObject *meth_ModularWidget_writePreferences(PyObject *, PyObject *);}
static PyObject *meth_ModularWidget_writePreferences(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        INIFile * a0;
        ModularWidget *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_ModularWidget,&sipCpp,sipClass_INIFile,&a0))
        {
            (sipSelfWasArg ? sipCpp->ModularWidget::writePreferences(*a0) : sipCpp->writePreferences(*a0));

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_ModularWidget,sipNm_BALL_writePreferences);

    return NULL;
}


extern "C" {static PyObject *meth_ModularWidget_setStatusbarText(PyObject *, PyObject *);}
static PyObject *meth_ModularWidget_setStatusbarText(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        String * a0;
        int a0State = 0;
        bool a1 = 0;
        ModularWidget *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ1|b",&sipSelf,sipClass_ModularWidget,&sipCpp,sipClass_String,&a0,&a0State,&a1))
        {
            (sipSelfWasArg ? sipCpp->ModularWidget::setStatusbarText(*a0,a1) : sipCpp->setStatusbarText(*a0,a1));

            sipReleaseInstance(a0,sipClass_String,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_ModularWidget,sipNm_BALL_setStatusbarText);

    return NULL;
}


extern "C" {static PyObject *meth_ModularWidget_getMainControl(PyObject *, PyObject *);}
static PyObject *meth_ModularWidget_getMainControl(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        ModularWidget *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_ModularWidget,&sipCpp))
        {
            MainControl *sipRes;

            sipRes = sipCpp->getMainControl();

            return sipConvertFromInstance(sipRes,sipClass_MainControl,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_ModularWidget,sipNm_BALL_getMainControl);

    return NULL;
}


extern "C" {static PyObject *meth_ModularWidget_getWorkingDir(PyObject *, PyObject *);}
static PyObject *meth_ModularWidget_getWorkingDir(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        ModularWidget *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_ModularWidget,&sipCpp))
        {
            String *sipRes;

            sipRes = new String(sipCpp->getWorkingDir());

            return sipConvertFromNewInstance(sipRes,sipClass_String,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_ModularWidget,sipNm_BALL_getWorkingDir);

    return NULL;
}


extern "C" {static PyObject *meth_ModularWidget_setWorkingDir(PyObject *, PyObject *);}
static PyObject *meth_ModularWidget_setWorkingDir(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const String * a0;
        int a0State = 0;
        ModularWidget *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ1",&sipSelf,sipClass_ModularWidget,&sipCpp,sipClass_String,&a0,&a0State))
        {
            sipCpp->setWorkingDir(*a0);

            sipReleaseInstance(const_cast<String *>(a0),sipClass_String,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_ModularWidget,sipNm_BALL_setWorkingDir);

    return NULL;
}


extern "C" {static PyObject *meth_ModularWidget_getFragmentDB(PyObject *, PyObject *);}
static PyObject *meth_ModularWidget_getFragmentDB(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        ModularWidget *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_ModularWidget,&sipCpp))
        {
            FragmentDB *sipRes;

            sipRes = &sipCpp->getFragmentDB();

            return sipConvertFromInstance(sipRes,sipClass_FragmentDB,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_ModularWidget,sipNm_BALL_getFragmentDB);

    return NULL;
}


extern "C" {static PyObject *meth_ModularWidget_lockComposites(PyObject *, PyObject *);}
static PyObject *meth_ModularWidget_lockComposites(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        ModularWidget *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_ModularWidget,&sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->lockComposites();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_ModularWidget,sipNm_BALL_lockComposites);

    return NULL;
}


extern "C" {static PyObject *meth_ModularWidget_unlockComposites(PyObject *, PyObject *);}
static PyObject *meth_ModularWidget_unlockComposites(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        ModularWidget *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_ModularWidget,&sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->unlockComposites();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_ModularWidget,sipNm_BALL_unlockComposites);

    return NULL;
}


extern "C" {static PyObject *meth_ModularWidget_setMenuHint(PyObject *, PyObject *);}
static PyObject *meth_ModularWidget_setMenuHint(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const String * a0;
        int a0State = 0;
        ModularWidget *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ1",&sipSelf,sipClass_ModularWidget,&sipCpp,sipClass_String,&a0,&a0State))
        {
            try
            {
            sipCpp->setMenuHint(*a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_ModularWidget,sipNm_BALL_setMenuHint);

    return NULL;
}


extern "C" {static PyObject *meth_ModularWidget_setMenuHelp(PyObject *, PyObject *);}
static PyObject *meth_ModularWidget_setMenuHelp(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const String * a0;
        int a0State = 0;
        ModularWidget *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ1",&sipSelf,sipClass_ModularWidget,&sipCpp,sipClass_String,&a0,&a0State))
        {
            try
            {
            sipCpp->setMenuHelp(*a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_ModularWidget,sipNm_BALL_setMenuHelp);

    return NULL;
}


extern "C" {static PyObject *meth_ModularWidget_setWorkingDirFromFilename_(PyObject *, PyObject *);}
static PyObject *meth_ModularWidget_setWorkingDirFromFilename_(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        String * a0;
        int a0State = 0;
        ModularWidget *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ1",&sipSelf,sipClass_ModularWidget,&sipCpp,sipClass_String,&a0,&a0State))
        {
            sipCpp->setWorkingDirFromFilename_(*a0);

            sipReleaseInstance(a0,sipClass_String,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_ModularWidget,sipNm_BALL_setWorkingDirFromFilename_);

    return NULL;
}


extern "C" {static PyObject *meth_ModularWidget_showHelp(PyObject *, PyObject *);}
static PyObject *meth_ModularWidget_showHelp(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        const String * a0;
        int a0State = 0;
        ModularWidget *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ1",&sipSelf,sipClass_ModularWidget,&sipCpp,sipClass_String,&a0,&a0State))
        {
            try
            {
            (sipSelfWasArg ? sipCpp->ModularWidget::showHelp(*a0) : sipCpp->showHelp(*a0));
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_ModularWidget,sipNm_BALL_showHelp);

    return NULL;
}


extern "C" {static PyObject *meth_ModularWidget_canHandle(PyObject *, PyObject *);}
static PyObject *meth_ModularWidget_canHandle(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        const String * a0;
        int a0State = 0;
        ModularWidget *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ1",&sipSelf,sipClass_ModularWidget,&sipCpp,sipClass_String,&a0,&a0State))
        {
            bool sipRes;

            try
            {
            sipRes = (sipSelfWasArg ? sipCpp->ModularWidget::canHandle(*a0) : sipCpp->canHandle(*a0));
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

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_ModularWidget,sipNm_BALL_canHandle);

    return NULL;
}


extern "C" {static PyObject *meth_ModularWidget_openFile(PyObject *, PyObject *);}
static PyObject *meth_ModularWidget_openFile(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        const String * a0;
        int a0State = 0;
        ModularWidget *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ1",&sipSelf,sipClass_ModularWidget,&sipCpp,sipClass_String,&a0,&a0State))
        {
            bool sipRes;

            try
            {
            sipRes = (sipSelfWasArg ? sipCpp->ModularWidget::openFile(*a0) : sipCpp->openFile(*a0));
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

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_ModularWidget,sipNm_BALL_openFile);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_ModularWidget(void *, sipWrapperType *);}
static void *cast_ModularWidget(void *ptr,sipWrapperType *targetClass)
{
    void *res;

    if (targetClass == sipClass_ModularWidget)
        return ptr;

    if ((res = sipCast_Embeddable((Embeddable *)(ModularWidget *)ptr,targetClass)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_ModularWidget(void *, int);}
static void release_ModularWidget(void *ptr,int state)
{
    if (state & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipModularWidget *>(ptr);
    else
        delete reinterpret_cast<ModularWidget *>(ptr);
}


extern "C" {static void dealloc_ModularWidget(sipWrapper *);}
static void dealloc_ModularWidget(sipWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipModularWidget *>(sipSelf->u.cppPtr)->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_ModularWidget(sipSelf->u.cppPtr,sipSelf->flags);
    }
}


extern "C" {static void *init_ModularWidget(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_ModularWidget(sipWrapper *sipSelf,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    sipModularWidget *sipCpp = 0;

    if (!sipCpp)
    {
        const char * a0 = "<ModularWidget>";

        if (sipParseArgs(sipArgsParsed,sipArgs,"|s",&a0))
        {
            sipCpp = new sipModularWidget(a0);
        }
    }

    if (!sipCpp)
    {
        const ModularWidget * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_ModularWidget,&a0))
        {
            sipCpp = new sipModularWidget(*a0);
        }
    }

    if (sipCpp)
        sipCpp->sipPySelf = sipSelf;

    return sipCpp;
}


extern "C" {static void *forceConvertTo_ModularWidget(PyObject *, int *);}
static void *forceConvertTo_ModularWidget(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_ModularWidget))
        return sipConvertToCpp(valobj,sipClass_ModularWidget,iserrp);

    sipBadClass(sipNm_BALL_ModularWidget);

    *iserrp = 1;

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedClassDef supers_ModularWidget[] = {{200, 255, 1}};


static PyMethodDef methods_ModularWidget[] = {
    {sipNm_BALL_applyPreferences, meth_ModularWidget_applyPreferences, METH_VARARGS, NULL},
    {sipNm_BALL_canHandle, meth_ModularWidget_canHandle, METH_VARARGS, NULL},
    {sipNm_BALL_checkMenu, meth_ModularWidget_checkMenu, METH_VARARGS, NULL},
    {sipNm_BALL_clear, meth_ModularWidget_clear, METH_VARARGS, NULL},
    {sipNm_BALL_countInstances, meth_ModularWidget_countInstances, METH_VARARGS, NULL},
    {sipNm_BALL_destroy, meth_ModularWidget_destroy, METH_VARARGS, NULL},
    {sipNm_BALL_fetchPreferences, meth_ModularWidget_fetchPreferences, METH_VARARGS, NULL},
    {sipNm_BALL_getFragmentDB, meth_ModularWidget_getFragmentDB, METH_VARARGS, NULL},
    {sipNm_BALL_getInstance, meth_ModularWidget_getInstance, METH_VARARGS, NULL},
    {sipNm_BALL_getMainControl, meth_ModularWidget_getMainControl, METH_VARARGS, NULL},
    {sipNm_BALL_getWorkingDir, meth_ModularWidget_getWorkingDir, METH_VARARGS, NULL},
    {sipNm_BALL_lockComposites, meth_ModularWidget_lockComposites, METH_VARARGS, NULL},
    {sipNm_BALL_openFile, meth_ModularWidget_openFile, METH_VARARGS, NULL},
    {sipNm_BALL_registerWidget, meth_ModularWidget_registerWidget, METH_VARARGS, NULL},
    {sipNm_BALL_setMenuHelp, meth_ModularWidget_setMenuHelp, METH_VARARGS, NULL},
    {sipNm_BALL_setMenuHint, meth_ModularWidget_setMenuHint, METH_VARARGS, NULL},
    {sipNm_BALL_setStatusbarText, meth_ModularWidget_setStatusbarText, METH_VARARGS, NULL},
    {sipNm_BALL_setWorkingDir, meth_ModularWidget_setWorkingDir, METH_VARARGS, NULL},
    {sipNm_BALL_setWorkingDirFromFilename_, meth_ModularWidget_setWorkingDirFromFilename_, METH_VARARGS, NULL},
    {sipNm_BALL_showHelp, meth_ModularWidget_showHelp, METH_VARARGS, NULL},
    {sipNm_BALL_unlockComposites, meth_ModularWidget_unlockComposites, METH_VARARGS, NULL},
    {sipNm_BALL_writePreferences, meth_ModularWidget_writePreferences, METH_VARARGS, NULL}
};


sipTypeDef sipType_BALL_ModularWidget = {
    0,
    0,
    "BALL.ModularWidget",
    0,
    {0, 0, 1},
    supers_ModularWidget,
    0,
    22, methods_ModularWidget,
    0, 0,
    0,
    init_ModularWidget,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_ModularWidget,
    cast_ModularWidget,
    release_ModularWidget,
    forceConvertTo_ModularWidget,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
