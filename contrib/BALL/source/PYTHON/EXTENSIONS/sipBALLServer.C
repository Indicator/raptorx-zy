/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLServer.h"

#include "sipBALLModularWidget.h"
#include "sipBALLServer.h"
#include "sipBALLPreferences.h"
#include "sipBALLMainControl.h"
#include "sipBALLPosition.h"
#include "sipBALLString.h"
#include "sipBALLFragmentDB.h"
#include "sipBALLINIFile.h"
#include "sipBALLEmbeddable.h"


sipServer::sipServer(): Server(), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,16);
}

sipServer::sipServer(const Server& a0): Server(a0), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,16);
}

sipServer::~sipServer() throw()
{
    sipCommonDtor(sipPySelf);
}

void sipServer::clear() throw()
{
    extern void sipVH_BALL_0(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipNm_BALL_clear);

    if (!meth)
    {
        Server::clear();
        return;
    }

    sipVH_BALL_0(sipGILState,meth);
}

void sipServer::initializeWidget(MainControl& a0) throw()
{
    extern void sipVH_BALL_1(sip_gilstate_t,PyObject *,MainControl&);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,NULL,sipNm_BALL_initializeWidget);

    if (!meth)
    {
        Server::initializeWidget(a0);
        return;
    }

    sipVH_BALL_1(sipGILState,meth,a0);
}

void sipServer::finalizeWidget(MainControl& a0) throw()
{
    extern void sipVH_BALL_1(sip_gilstate_t,PyObject *,MainControl&);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[2],sipPySelf,NULL,sipNm_BALL_finalizeWidget);

    if (!meth)
    {
        Server::finalizeWidget(a0);
        return;
    }

    sipVH_BALL_1(sipGILState,meth,a0);
}

void sipServer::initializePreferencesTab(Preferences& a0) throw()
{
    extern void sipVH_BALL_21(sip_gilstate_t,PyObject *,Preferences&);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[3],sipPySelf,NULL,sipNm_BALL_initializePreferencesTab);

    if (!meth)
    {
        Server::initializePreferencesTab(a0);
        return;
    }

    sipVH_BALL_21(sipGILState,meth,a0);
}

void sipServer::finalizePreferencesTab(Preferences& a0) throw()
{
    extern void sipVH_BALL_21(sip_gilstate_t,PyObject *,Preferences&);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[4],sipPySelf,NULL,sipNm_BALL_finalizePreferencesTab);

    if (!meth)
    {
        Server::finalizePreferencesTab(a0);
        return;
    }

    sipVH_BALL_21(sipGILState,meth,a0);
}

void sipServer::applyPreferences() throw()
{
    extern void sipVH_BALL_0(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[5],sipPySelf,NULL,sipNm_BALL_applyPreferences);

    if (!meth)
    {
        Server::applyPreferences();
        return;
    }

    sipVH_BALL_0(sipGILState,meth);
}

bool sipServer::isValid() const throw()
{
    extern bool sipVH_BALL_4(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<sipMethodCache *>(&sipPyMethods[6]),sipPySelf,NULL,sipNm_BALL_isValid);

    if (!meth)
        return Server::isValid();

    return sipVH_BALL_4(sipGILState,meth);
}

void sipServer::destroy() throw()
{
    extern void sipVH_BALL_0(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[7],sipPySelf,NULL,sipNm_BALL_destroy);

    if (!meth)
    {
        ModularWidget::destroy();
        return;
    }

    sipVH_BALL_0(sipGILState,meth);
}

void sipServer::checkMenu(MainControl& a0) throw()
{
    extern void sipVH_BALL_1(sip_gilstate_t,PyObject *,MainControl&);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[8],sipPySelf,NULL,sipNm_BALL_checkMenu);

    if (!meth)
    {
        ModularWidget::checkMenu(a0);
        return;
    }

    sipVH_BALL_1(sipGILState,meth,a0);
}

void sipServer::fetchPreferences(INIFile& a0) throw()
{
    extern void sipVH_BALL_5(sip_gilstate_t,PyObject *,INIFile&);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[9],sipPySelf,NULL,sipNm_BALL_fetchPreferences);

    if (!meth)
    {
        ModularWidget::fetchPreferences(a0);
        return;
    }

    sipVH_BALL_5(sipGILState,meth,a0);
}

void sipServer::writePreferences(INIFile& a0) throw()
{
    extern void sipVH_BALL_5(sip_gilstate_t,PyObject *,INIFile&);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[10],sipPySelf,NULL,sipNm_BALL_writePreferences);

    if (!meth)
    {
        ModularWidget::writePreferences(a0);
        return;
    }

    sipVH_BALL_5(sipGILState,meth,a0);
}

void sipServer::setStatusbarText(String a0,bool a1) throw()
{
    extern void sipVH_BALL_10(sip_gilstate_t,PyObject *,String,bool);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[11],sipPySelf,NULL,sipNm_BALL_setStatusbarText);

    if (!meth)
    {
        ModularWidget::setStatusbarText(a0,a1);
        return;
    }

    sipVH_BALL_10(sipGILState,meth,a0,a1);
}

void sipServer::showHelp(const String& a0)
{
    extern void sipVH_BALL_9(sip_gilstate_t,PyObject *,const String&);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[12],sipPySelf,NULL,sipNm_BALL_showHelp);

    if (!meth)
    {
        ModularWidget::showHelp(a0);
        return;
    }

    sipVH_BALL_9(sipGILState,meth,a0);
}

bool sipServer::canHandle(const String& a0) const
{
    extern bool sipVH_BALL_8(sip_gilstate_t,PyObject *,const String&);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<sipMethodCache *>(&sipPyMethods[13]),sipPySelf,NULL,sipNm_BALL_canHandle);

    if (!meth)
        return ModularWidget::canHandle(a0);

    return sipVH_BALL_8(sipGILState,meth,a0);
}

bool sipServer::openFile(const String& a0)
{
    extern bool sipVH_BALL_8(sip_gilstate_t,PyObject *,const String&);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[14],sipPySelf,NULL,sipNm_BALL_openFile);

    if (!meth)
        return ModularWidget::openFile(a0);

    return sipVH_BALL_8(sipGILState,meth,a0);
}

void sipServer::registerThis() throw()
{
    extern void sipVH_BALL_0(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[15],sipPySelf,NULL,sipNm_BALL_registerThis);

    if (!meth)
    {
        Embeddable::registerThis();
        return;
    }

    sipVH_BALL_0(sipGILState,meth);
}


extern "C" {static PyObject *meth_Server_countInstances(PyObject *, PyObject *);}
static PyObject *meth_Server_countInstances(PyObject *,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        if (sipParseArgs(&sipArgsParsed,sipArgs,""))
        {
            int sipRes;

            try
            {
            sipRes = Server::countInstances();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Server,sipNm_BALL_countInstances);

    return NULL;
}


extern "C" {static PyObject *meth_Server_getInstance(PyObject *, PyObject *);}
static PyObject *meth_Server_getInstance(PyObject *,PyObject *sipArgs)
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
            sipRes = Server::getInstance(*a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Server,sipNm_BALL_getInstance);

    return NULL;
}


extern "C" {static PyObject *meth_Server_clear(PyObject *, PyObject *);}
static PyObject *meth_Server_clear(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        Server *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Server,&sipCpp))
        {
            (sipSelfWasArg ? sipCpp->Server::clear() : sipCpp->clear());

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Server,sipNm_BALL_clear);

    return NULL;
}


extern "C" {static PyObject *meth_Server_activate(PyObject *, PyObject *);}
static PyObject *meth_Server_activate(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Server *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Server,&sipCpp))
        {
            sipCpp->activate();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Server,sipNm_BALL_activate);

    return NULL;
}


extern "C" {static PyObject *meth_Server_deactivate(PyObject *, PyObject *);}
static PyObject *meth_Server_deactivate(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Server *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Server,&sipCpp))
        {
            sipCpp->deactivate();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Server,sipNm_BALL_deactivate);

    return NULL;
}


extern "C" {static PyObject *meth_Server_setPort(PyObject *, PyObject *);}
static PyObject *meth_Server_setPort(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        int a0;
        Server *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bi",&sipSelf,sipClass_Server,&sipCpp,&a0))
        {
            sipCpp->setPort(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Server,sipNm_BALL_setPort);

    return NULL;
}


extern "C" {static PyObject *meth_Server_getPort(PyObject *, PyObject *);}
static PyObject *meth_Server_getPort(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Server *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Server,&sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->getPort();

            return PyInt_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Server,sipNm_BALL_getPort);

    return NULL;
}


extern "C" {static PyObject *meth_Server_initializeWidget(PyObject *, PyObject *);}
static PyObject *meth_Server_initializeWidget(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        MainControl * a0;
        Server *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_Server,&sipCpp,sipClass_MainControl,&a0))
        {
            (sipSelfWasArg ? sipCpp->Server::initializeWidget(*a0) : sipCpp->initializeWidget(*a0));

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Server,sipNm_BALL_initializeWidget);

    return NULL;
}


extern "C" {static PyObject *meth_Server_finalizeWidget(PyObject *, PyObject *);}
static PyObject *meth_Server_finalizeWidget(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        MainControl * a0;
        Server *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_Server,&sipCpp,sipClass_MainControl,&a0))
        {
            (sipSelfWasArg ? sipCpp->Server::finalizeWidget(*a0) : sipCpp->finalizeWidget(*a0));

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Server,sipNm_BALL_finalizeWidget);

    return NULL;
}


extern "C" {static PyObject *meth_Server_initializePreferencesTab(PyObject *, PyObject *);}
static PyObject *meth_Server_initializePreferencesTab(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        Preferences * a0;
        Server *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_Server,&sipCpp,sipClass_Preferences,&a0))
        {
            (sipSelfWasArg ? sipCpp->Server::initializePreferencesTab(*a0) : sipCpp->initializePreferencesTab(*a0));

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Server,sipNm_BALL_initializePreferencesTab);

    return NULL;
}


extern "C" {static PyObject *meth_Server_finalizePreferencesTab(PyObject *, PyObject *);}
static PyObject *meth_Server_finalizePreferencesTab(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        Preferences * a0;
        Server *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_Server,&sipCpp,sipClass_Preferences,&a0))
        {
            (sipSelfWasArg ? sipCpp->Server::finalizePreferencesTab(*a0) : sipCpp->finalizePreferencesTab(*a0));

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Server,sipNm_BALL_finalizePreferencesTab);

    return NULL;
}


extern "C" {static PyObject *meth_Server_applyPreferences(PyObject *, PyObject *);}
static PyObject *meth_Server_applyPreferences(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        Server *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Server,&sipCpp))
        {
            (sipSelfWasArg ? sipCpp->Server::applyPreferences() : sipCpp->applyPreferences());

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Server,sipNm_BALL_applyPreferences);

    return NULL;
}


extern "C" {static PyObject *meth_Server_isValid(PyObject *, PyObject *);}
static PyObject *meth_Server_isValid(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        Server *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Server,&sipCpp))
        {
            bool sipRes;

            sipRes = (sipSelfWasArg ? sipCpp->Server::isValid() : sipCpp->isValid());

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Server,sipNm_BALL_isValid);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_Server(void *, sipWrapperType *);}
static void *cast_Server(void *ptr,sipWrapperType *targetClass)
{
    void *res;

    if (targetClass == sipClass_Server)
        return ptr;

    if ((res = sipCast_ModularWidget((ModularWidget *)(Server *)ptr,targetClass)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_Server(void *, int);}
static void release_Server(void *ptr,int state)
{
    if (state & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipServer *>(ptr);
    else
        delete reinterpret_cast<Server *>(ptr);
}


extern "C" {static void dealloc_Server(sipWrapper *);}
static void dealloc_Server(sipWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipServer *>(sipSelf->u.cppPtr)->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_Server(sipSelf->u.cppPtr,sipSelf->flags);
    }
}


extern "C" {static void *init_Server(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_Server(sipWrapper *sipSelf,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    sipServer *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            try
            {
            sipCpp = new sipServer();
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
        const Server * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_Server,&a0))
        {
            try
            {
            sipCpp = new sipServer(*a0);
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


extern "C" {static void *forceConvertTo_Server(PyObject *, int *);}
static void *forceConvertTo_Server(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_Server))
        return sipConvertToCpp(valobj,sipClass_Server,iserrp);

    sipBadClass(sipNm_BALL_Server);

    *iserrp = 1;

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedClassDef supers_Server[] = {{206, 255, 1}};


static PyMethodDef methods_Server[] = {
    {sipNm_BALL_activate, meth_Server_activate, METH_VARARGS, NULL},
    {sipNm_BALL_applyPreferences, meth_Server_applyPreferences, METH_VARARGS, NULL},
    {sipNm_BALL_clear, meth_Server_clear, METH_VARARGS, NULL},
    {sipNm_BALL_countInstances, meth_Server_countInstances, METH_VARARGS, NULL},
    {sipNm_BALL_deactivate, meth_Server_deactivate, METH_VARARGS, NULL},
    {sipNm_BALL_finalizePreferencesTab, meth_Server_finalizePreferencesTab, METH_VARARGS, NULL},
    {sipNm_BALL_finalizeWidget, meth_Server_finalizeWidget, METH_VARARGS, NULL},
    {sipNm_BALL_getInstance, meth_Server_getInstance, METH_VARARGS, NULL},
    {sipNm_BALL_getPort, meth_Server_getPort, METH_VARARGS, NULL},
    {sipNm_BALL_initializePreferencesTab, meth_Server_initializePreferencesTab, METH_VARARGS, NULL},
    {sipNm_BALL_initializeWidget, meth_Server_initializeWidget, METH_VARARGS, NULL},
    {sipNm_BALL_isValid, meth_Server_isValid, METH_VARARGS, NULL},
    {sipNm_BALL_setPort, meth_Server_setPort, METH_VARARGS, NULL}
};


sipTypeDef sipType_BALL_Server = {
    0,
    0,
    "BALL.Server",
    0,
    {0, 0, 1},
    supers_Server,
    0,
    13, methods_Server,
    0, 0,
    0,
    init_Server,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_Server,
    cast_Server,
    release_Server,
    forceConvertTo_Server,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
