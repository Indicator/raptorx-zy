/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLPyWidget.h"

#include "sipBALLDockWidget.h"
#include "sipBALLPyWidget.h"
#include "sipBALLString.h"
#include "sipBALLMainControl.h"
#include "sipBALLPosition.h"
#include "sipBALLModularWidget.h"
#include "sipBALLFragmentDB.h"
#include "sipBALLINIFile.h"
#include "sipBALLEmbeddable.h"


sipPyWidget::sipPyWidget() throw(): PyWidget(), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,13);
}

sipPyWidget::sipPyWidget(const PyWidget& a0) throw(): PyWidget(a0), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,13);
}

sipPyWidget::~sipPyWidget() throw()
{
    sipCommonDtor(sipPySelf);
}

void sipPyWidget::initializeWidget(MainControl& a0) throw()
{
    extern void sipVH_BALL_1(sip_gilstate_t,PyObject *,MainControl&);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipNm_BALL_initializeWidget);

    if (!meth)
    {
        PyWidget::initializeWidget(a0);
        return;
    }

    sipVH_BALL_1(sipGILState,meth,a0);
}

void sipPyWidget::finalizeWidget(MainControl& a0) throw()
{
    extern void sipVH_BALL_1(sip_gilstate_t,PyObject *,MainControl&);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,NULL,sipNm_BALL_finalizeWidget);

    if (!meth)
    {
        PyWidget::finalizeWidget(a0);
        return;
    }

    sipVH_BALL_1(sipGILState,meth,a0);
}

void sipPyWidget::destroy() throw()
{
    extern void sipVH_BALL_0(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[2],sipPySelf,NULL,sipNm_BALL_destroy);

    if (!meth)
    {
        ModularWidget::destroy();
        return;
    }

    sipVH_BALL_0(sipGILState,meth);
}

void sipPyWidget::clear() throw()
{
    extern void sipVH_BALL_0(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[3],sipPySelf,NULL,sipNm_BALL_clear);

    if (!meth)
    {
        ModularWidget::clear();
        return;
    }

    sipVH_BALL_0(sipGILState,meth);
}

void sipPyWidget::checkMenu(MainControl& a0) throw()
{
    extern void sipVH_BALL_1(sip_gilstate_t,PyObject *,MainControl&);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[4],sipPySelf,NULL,sipNm_BALL_checkMenu);

    if (!meth)
    {
        ModularWidget::checkMenu(a0);
        return;
    }

    sipVH_BALL_1(sipGILState,meth,a0);
}

void sipPyWidget::applyPreferences() throw()
{
    extern void sipVH_BALL_0(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[5],sipPySelf,NULL,sipNm_BALL_applyPreferences);

    if (!meth)
    {
        DockWidget::applyPreferences();
        return;
    }

    sipVH_BALL_0(sipGILState,meth);
}

void sipPyWidget::fetchPreferences(INIFile& a0) throw()
{
    extern void sipVH_BALL_5(sip_gilstate_t,PyObject *,INIFile&);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[6],sipPySelf,NULL,sipNm_BALL_fetchPreferences);

    if (!meth)
    {
        ModularWidget::fetchPreferences(a0);
        return;
    }

    sipVH_BALL_5(sipGILState,meth,a0);
}

void sipPyWidget::writePreferences(INIFile& a0) throw()
{
    extern void sipVH_BALL_5(sip_gilstate_t,PyObject *,INIFile&);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[7],sipPySelf,NULL,sipNm_BALL_writePreferences);

    if (!meth)
    {
        ModularWidget::writePreferences(a0);
        return;
    }

    sipVH_BALL_5(sipGILState,meth,a0);
}

void sipPyWidget::setStatusbarText(String a0,bool a1) throw()
{
    extern void sipVH_BALL_10(sip_gilstate_t,PyObject *,String,bool);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[8],sipPySelf,NULL,sipNm_BALL_setStatusbarText);

    if (!meth)
    {
        ModularWidget::setStatusbarText(a0,a1);
        return;
    }

    sipVH_BALL_10(sipGILState,meth,a0,a1);
}

void sipPyWidget::showHelp(const String& a0)
{
    extern void sipVH_BALL_9(sip_gilstate_t,PyObject *,const String&);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[9],sipPySelf,NULL,sipNm_BALL_showHelp);

    if (!meth)
    {
        ModularWidget::showHelp(a0);
        return;
    }

    sipVH_BALL_9(sipGILState,meth,a0);
}

bool sipPyWidget::canHandle(const String& a0) const
{
    extern bool sipVH_BALL_8(sip_gilstate_t,PyObject *,const String&);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<sipMethodCache *>(&sipPyMethods[10]),sipPySelf,NULL,sipNm_BALL_canHandle);

    if (!meth)
        return ModularWidget::canHandle(a0);

    return sipVH_BALL_8(sipGILState,meth,a0);
}

bool sipPyWidget::openFile(const String& a0)
{
    extern bool sipVH_BALL_8(sip_gilstate_t,PyObject *,const String&);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[11],sipPySelf,NULL,sipNm_BALL_openFile);

    if (!meth)
        return ModularWidget::openFile(a0);

    return sipVH_BALL_8(sipGILState,meth,a0);
}

void sipPyWidget::registerThis() throw()
{
    extern void sipVH_BALL_0(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[12],sipPySelf,NULL,sipNm_BALL_registerThis);

    if (!meth)
    {
        Embeddable::registerThis();
        return;
    }

    sipVH_BALL_0(sipGILState,meth);
}


extern "C" {static PyObject *meth_PyWidget_countInstances(PyObject *, PyObject *);}
static PyObject *meth_PyWidget_countInstances(PyObject *,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        if (sipParseArgs(&sipArgsParsed,sipArgs,""))
        {
            int sipRes;

            try
            {
            sipRes = PyWidget::countInstances();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_PyWidget,sipNm_BALL_countInstances);

    return NULL;
}


extern "C" {static PyObject *meth_PyWidget_getInstance(PyObject *, PyObject *);}
static PyObject *meth_PyWidget_getInstance(PyObject *,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Position * a0;
        int a0State = 0;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"M1",sipMappedType_Position,&a0,&a0State))
        {
            PyWidget *sipRes;

            try
            {
            sipRes = PyWidget::getInstance(*a0);
            }
            catch (...)
            {

            sipReleaseMappedType(a0,sipMappedType_Position,a0State);
                sipRaiseUnknownException();
                return NULL;
            }

            sipReleaseMappedType(a0,sipMappedType_Position,a0State);

            return sipConvertFromInstance(sipRes,sipClass_PyWidget,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_PyWidget,sipNm_BALL_getInstance);

    return NULL;
}


extern "C" {static PyObject *meth_PyWidget_initializeWidget(PyObject *, PyObject *);}
static PyObject *meth_PyWidget_initializeWidget(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        MainControl * a0;
        PyWidget *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_PyWidget,&sipCpp,sipClass_MainControl,&a0))
        {
            (sipSelfWasArg ? sipCpp->PyWidget::initializeWidget(*a0) : sipCpp->initializeWidget(*a0));

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_PyWidget,sipNm_BALL_initializeWidget);

    return NULL;
}


extern "C" {static PyObject *meth_PyWidget_finalizeWidget(PyObject *, PyObject *);}
static PyObject *meth_PyWidget_finalizeWidget(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        MainControl * a0;
        PyWidget *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_PyWidget,&sipCpp,sipClass_MainControl,&a0))
        {
            (sipSelfWasArg ? sipCpp->PyWidget::finalizeWidget(*a0) : sipCpp->finalizeWidget(*a0));

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_PyWidget,sipNm_BALL_finalizeWidget);

    return NULL;
}


extern "C" {static PyObject *meth_PyWidget_toAbortScript(PyObject *, PyObject *);}
static PyObject *meth_PyWidget_toAbortScript(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        PyWidget *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_PyWidget,&sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->toAbortScript();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_PyWidget,sipNm_BALL_toAbortScript);

    return NULL;
}


extern "C" {static PyObject *meth_PyWidget_openFile(PyObject *, PyObject *);}
static PyObject *meth_PyWidget_openFile(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const String * a0;
        int a0State = 0;
        bool a1;
        bool a2 = 0;
        PyWidget *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ1b|b",&sipSelf,sipClass_PyWidget,&sipCpp,sipClass_String,&a0,&a0State,&a1,&a2))
        {
            bool sipRes;

            sipRes = sipCpp->openFile(*a0,a1,a2);

            sipReleaseInstance(const_cast<String *>(a0),sipClass_String,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_PyWidget,sipNm_BALL_openFile);

    return NULL;
}


extern "C" {static PyObject *meth_PyWidget_runCurrentScript(PyObject *, PyObject *);}
static PyObject *meth_PyWidget_runCurrentScript(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        PyWidget *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_PyWidget,&sipCpp))
        {
            bool sipRes;

            try
            {
            sipRes = sipCpp->runCurrentScript();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_PyWidget,sipNm_BALL_runCurrentScript);

    return NULL;
}


extern "C" {static PyObject *meth_PyWidget_abortScript(PyObject *, PyObject *);}
static PyObject *meth_PyWidget_abortScript(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        PyWidget *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_PyWidget,&sipCpp))
        {
            try
            {
            sipCpp->abortScript();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_PyWidget,sipNm_BALL_abortScript);

    return NULL;
}


extern "C" {static PyObject *meth_PyWidget_loadScript(PyObject *, PyObject *);}
static PyObject *meth_PyWidget_loadScript(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        PyWidget *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_PyWidget,&sipCpp))
        {
            try
            {
            sipCpp->loadScript();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_PyWidget,sipNm_BALL_loadScript);

    return NULL;
}


extern "C" {static PyObject *meth_PyWidget_execScript(PyObject *, PyObject *);}
static PyObject *meth_PyWidget_execScript(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        PyWidget *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_PyWidget,&sipCpp))
        {
            try
            {
            sipCpp->execScript();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_PyWidget,sipNm_BALL_execScript);

    return NULL;
}


extern "C" {static PyObject *meth_PyWidget_saveScript(PyObject *, PyObject *);}
static PyObject *meth_PyWidget_saveScript(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        PyWidget *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_PyWidget,&sipCpp))
        {
            try
            {
            sipCpp->saveScript();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_PyWidget,sipNm_BALL_saveScript);

    return NULL;
}


extern "C" {static PyObject *meth_PyWidget_clearScript(PyObject *, PyObject *);}
static PyObject *meth_PyWidget_clearScript(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        PyWidget *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_PyWidget,&sipCpp))
        {
            try
            {
            sipCpp->clearScript();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_PyWidget,sipNm_BALL_clearScript);

    return NULL;
}


extern "C" {static PyObject *meth_PyWidget_map(PyObject *, PyObject *);}
static PyObject *meth_PyWidget_map(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        String * a0;
        int a0State = 0;
        String * a1;
        int a1State = 0;
        String * a2;
        int a2State = 0;
        PyWidget *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ1J1J1",&sipSelf,sipClass_PyWidget,&sipCpp,sipClass_String,&a0,&a0State,sipClass_String,&a1,&a1State,sipClass_String,&a2,&a2State))
        {
            try
            {
            sipCpp->map(*a0,*a1,*a2);
            }
            catch (...)
            {

            sipReleaseInstance(a0,sipClass_String,a0State);
            sipReleaseInstance(a1,sipClass_String,a1State);
            sipReleaseInstance(a2,sipClass_String,a2State);
                sipRaiseUnknownException();
                return NULL;
            }

            sipReleaseInstance(a0,sipClass_String,a0State);
            sipReleaseInstance(a1,sipClass_String,a1State);
            sipReleaseInstance(a2,sipClass_String,a2State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_PyWidget,sipNm_BALL_map);

    return NULL;
}


extern "C" {static PyObject *meth_PyWidget_unmap(PyObject *, PyObject *);}
static PyObject *meth_PyWidget_unmap(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        String * a0;
        int a0State = 0;
        String * a1;
        int a1State = 0;
        PyWidget *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ1J1",&sipSelf,sipClass_PyWidget,&sipCpp,sipClass_String,&a0,&a0State,sipClass_String,&a1,&a1State))
        {
            try
            {
            sipCpp->unmap(*a0,*a1);
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

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_PyWidget,sipNm_BALL_unmap);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_PyWidget(void *, sipWrapperType *);}
static void *cast_PyWidget(void *ptr,sipWrapperType *targetClass)
{
    void *res;

    if (targetClass == sipClass_PyWidget)
        return ptr;

    if ((res = sipCast_DockWidget((DockWidget *)(PyWidget *)ptr,targetClass)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_PyWidget(void *, int);}
static void release_PyWidget(void *ptr,int state)
{
    if (state & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipPyWidget *>(ptr);
    else
        delete reinterpret_cast<PyWidget *>(ptr);
}


extern "C" {static void dealloc_PyWidget(sipWrapper *);}
static void dealloc_PyWidget(sipWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipPyWidget *>(sipSelf->u.cppPtr)->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_PyWidget(sipSelf->u.cppPtr,sipSelf->flags);
    }
}


extern "C" {static void *init_PyWidget(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_PyWidget(sipWrapper *sipSelf,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    sipPyWidget *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            sipCpp = new sipPyWidget();
        }
    }

    if (!sipCpp)
    {
        const PyWidget * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_PyWidget,&a0))
        {
            sipCpp = new sipPyWidget(*a0);
        }
    }

    if (sipCpp)
        sipCpp->sipPySelf = sipSelf;

    return sipCpp;
}


extern "C" {static void *forceConvertTo_PyWidget(PyObject *, int *);}
static void *forceConvertTo_PyWidget(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_PyWidget))
        return sipConvertToCpp(valobj,sipClass_PyWidget,iserrp);

    sipBadClass(sipNm_BALL_PyWidget);

    *iserrp = 1;

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedClassDef supers_PyWidget[] = {{208, 255, 1}};


static PyMethodDef methods_PyWidget[] = {
    {sipNm_BALL_abortScript, meth_PyWidget_abortScript, METH_VARARGS, NULL},
    {sipNm_BALL_clearScript, meth_PyWidget_clearScript, METH_VARARGS, NULL},
    {sipNm_BALL_countInstances, meth_PyWidget_countInstances, METH_VARARGS, NULL},
    {sipNm_BALL_execScript, meth_PyWidget_execScript, METH_VARARGS, NULL},
    {sipNm_BALL_finalizeWidget, meth_PyWidget_finalizeWidget, METH_VARARGS, NULL},
    {sipNm_BALL_getInstance, meth_PyWidget_getInstance, METH_VARARGS, NULL},
    {sipNm_BALL_initializeWidget, meth_PyWidget_initializeWidget, METH_VARARGS, NULL},
    {sipNm_BALL_loadScript, meth_PyWidget_loadScript, METH_VARARGS, NULL},
    {sipNm_BALL_map, meth_PyWidget_map, METH_VARARGS, NULL},
    {sipNm_BALL_openFile, meth_PyWidget_openFile, METH_VARARGS, NULL},
    {sipNm_BALL_runCurrentScript, meth_PyWidget_runCurrentScript, METH_VARARGS, NULL},
    {sipNm_BALL_saveScript, meth_PyWidget_saveScript, METH_VARARGS, NULL},
    {sipNm_BALL_toAbortScript, meth_PyWidget_toAbortScript, METH_VARARGS, NULL},
    {sipNm_BALL_unmap, meth_PyWidget_unmap, METH_VARARGS, NULL}
};


sipTypeDef sipType_BALL_PyWidget = {
    0,
    0,
    "BALL.PyWidget",
    0,
    {0, 0, 1},
    supers_PyWidget,
    0,
    14, methods_PyWidget,
    0, 0,
    0,
    init_PyWidget,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_PyWidget,
    cast_PyWidget,
    release_PyWidget,
    forceConvertTo_PyWidget,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
