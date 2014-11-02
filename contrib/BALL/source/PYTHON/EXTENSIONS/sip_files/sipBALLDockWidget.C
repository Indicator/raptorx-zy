/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLDockWidget.h"

#include "sipBALLModularWidget.h"
#include "sipBALLDockWidget.h"
#include "sipBALLPosition.h"
#include "sipBALLString.h"
#include "sipBALLFragmentDB.h"
#include "sipBALLMainControl.h"
#include "sipBALLINIFile.h"
#include "sipBALLEmbeddable.h"


sipDockWidget::sipDockWidget(): DockWidget(), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,11);
}

sipDockWidget::sipDockWidget(const DockWidget& a0): DockWidget(a0), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,11);
}

sipDockWidget::~sipDockWidget() throw()
{
    sipCommonDtor(sipPySelf);
}

void sipDockWidget::destroy() throw()
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

void sipDockWidget::clear() throw()
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

void sipDockWidget::checkMenu(MainControl& a0) throw()
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

void sipDockWidget::applyPreferences() throw()
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

void sipDockWidget::fetchPreferences(INIFile& a0) throw()
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

void sipDockWidget::writePreferences(INIFile& a0) throw()
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

void sipDockWidget::setStatusbarText(String a0,bool a1) throw()
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

void sipDockWidget::showHelp(const String& a0)
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

bool sipDockWidget::canHandle(const String& a0) const
{
    extern bool sipVH_BALL_8(sip_gilstate_t,PyObject *,const String&);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<sipMethodCache *>(&sipPyMethods[8]),sipPySelf,NULL,sipNm_BALL_canHandle);

    if (!meth)
        return ModularWidget::canHandle(a0);

    return sipVH_BALL_8(sipGILState,meth,a0);
}

bool sipDockWidget::openFile(const String& a0)
{
    extern bool sipVH_BALL_8(sip_gilstate_t,PyObject *,const String&);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[9],sipPySelf,NULL,sipNm_BALL_openFile);

    if (!meth)
        return ModularWidget::openFile(a0);

    return sipVH_BALL_8(sipGILState,meth,a0);
}

void sipDockWidget::registerThis() throw()
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


extern "C" {static PyObject *meth_DockWidget_countInstances(PyObject *, PyObject *);}
static PyObject *meth_DockWidget_countInstances(PyObject *,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        if (sipParseArgs(&sipArgsParsed,sipArgs,""))
        {
            int sipRes;

            try
            {
            sipRes = DockWidget::countInstances();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_DockWidget,sipNm_BALL_countInstances);

    return NULL;
}


extern "C" {static PyObject *meth_DockWidget_getInstance(PyObject *, PyObject *);}
static PyObject *meth_DockWidget_getInstance(PyObject *,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Position * a0;
        int a0State = 0;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"M1",sipMappedType_Position,&a0,&a0State))
        {
            DockWidget *sipRes;

            try
            {
            sipRes = DockWidget::getInstance(*a0);
            }
            catch (...)
            {

            sipReleaseMappedType(a0,sipMappedType_Position,a0State);
                sipRaiseUnknownException();
                return NULL;
            }

            sipReleaseMappedType(a0,sipMappedType_Position,a0State);

            return sipConvertFromInstance(sipRes,sipClass_DockWidget,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_DockWidget,sipNm_BALL_getInstance);

    return NULL;
}


extern "C" {static PyObject *meth_DockWidget_applyPreferences(PyObject *, PyObject *);}
static PyObject *meth_DockWidget_applyPreferences(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        DockWidget *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_DockWidget,&sipCpp))
        {
            (sipSelfWasArg ? sipCpp->DockWidget::applyPreferences() : sipCpp->applyPreferences());

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_DockWidget,sipNm_BALL_applyPreferences);

    return NULL;
}


extern "C" {static PyObject *meth_DockWidget_setWidgetVisible(PyObject *, PyObject *);}
static PyObject *meth_DockWidget_setWidgetVisible(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        bool a0;
        DockWidget *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bb",&sipSelf,sipClass_DockWidget,&sipCpp,&a0))
        {
            try
            {
            sipCpp->setWidgetVisible(a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_DockWidget,sipNm_BALL_setWidgetVisible);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_DockWidget(void *, sipWrapperType *);}
static void *cast_DockWidget(void *ptr,sipWrapperType *targetClass)
{
    void *res;

    if (targetClass == sipClass_DockWidget)
        return ptr;

    if ((res = sipCast_ModularWidget((ModularWidget *)(DockWidget *)ptr,targetClass)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_DockWidget(void *, int);}
static void release_DockWidget(void *ptr,int state)
{
    if (state & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipDockWidget *>(ptr);
    else
        delete reinterpret_cast<DockWidget *>(ptr);
}


extern "C" {static void dealloc_DockWidget(sipWrapper *);}
static void dealloc_DockWidget(sipWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipDockWidget *>(sipSelf->u.cppPtr)->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_DockWidget(sipSelf->u.cppPtr,sipSelf->flags);
    }
}


extern "C" {static void *init_DockWidget(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_DockWidget(sipWrapper *sipSelf,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    sipDockWidget *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            try
            {
            sipCpp = new sipDockWidget();
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
        const DockWidget * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_DockWidget,&a0))
        {
            try
            {
            sipCpp = new sipDockWidget(*a0);
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


extern "C" {static void *forceConvertTo_DockWidget(PyObject *, int *);}
static void *forceConvertTo_DockWidget(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_DockWidget))
        return sipConvertToCpp(valobj,sipClass_DockWidget,iserrp);

    sipBadClass(sipNm_BALL_DockWidget);

    *iserrp = 1;

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedClassDef supers_DockWidget[] = {{206, 255, 1}};


static PyMethodDef methods_DockWidget[] = {
    {sipNm_BALL_applyPreferences, meth_DockWidget_applyPreferences, METH_VARARGS, NULL},
    {sipNm_BALL_countInstances, meth_DockWidget_countInstances, METH_VARARGS, NULL},
    {sipNm_BALL_getInstance, meth_DockWidget_getInstance, METH_VARARGS, NULL},
    {sipNm_BALL_setWidgetVisible, meth_DockWidget_setWidgetVisible, METH_VARARGS, NULL}
};


sipTypeDef sipType_BALL_DockWidget = {
    0,
    0,
    "BALL.DockWidget",
    0,
    {0, 0, 1},
    supers_DockWidget,
    0,
    4, methods_DockWidget,
    0, 0,
    0,
    init_DockWidget,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_DockWidget,
    cast_DockWidget,
    release_DockWidget,
    forceConvertTo_DockWidget,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
