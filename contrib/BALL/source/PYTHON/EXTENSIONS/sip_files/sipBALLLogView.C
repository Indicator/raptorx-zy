/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLLogView.h"

#include "sipBALLDockWidget.h"
#include "sipBALLLogView.h"
#include "sipBALLPosition.h"
#include "sipBALLModularWidget.h"
#include "sipBALLString.h"
#include "sipBALLFragmentDB.h"
#include "sipBALLMainControl.h"
#include "sipBALLINIFile.h"
#include "sipBALLEmbeddable.h"


sipLogView::sipLogView() throw(): LogView(), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,11);
}

sipLogView::sipLogView(const LogView& a0): LogView(a0), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,11);
}

sipLogView::~sipLogView() throw()
{
    sipCommonDtor(sipPySelf);
}

void sipLogView::destroy() throw()
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

void sipLogView::clear() throw()
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

void sipLogView::checkMenu(MainControl& a0) throw()
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

void sipLogView::applyPreferences() throw()
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

void sipLogView::fetchPreferences(INIFile& a0) throw()
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

void sipLogView::writePreferences(INIFile& a0) throw()
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

void sipLogView::setStatusbarText(String a0,bool a1) throw()
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

void sipLogView::showHelp(const String& a0)
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

bool sipLogView::canHandle(const String& a0) const
{
    extern bool sipVH_BALL_8(sip_gilstate_t,PyObject *,const String&);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<sipMethodCache *>(&sipPyMethods[8]),sipPySelf,NULL,sipNm_BALL_canHandle);

    if (!meth)
        return ModularWidget::canHandle(a0);

    return sipVH_BALL_8(sipGILState,meth,a0);
}

bool sipLogView::openFile(const String& a0)
{
    extern bool sipVH_BALL_8(sip_gilstate_t,PyObject *,const String&);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[9],sipPySelf,NULL,sipNm_BALL_openFile);

    if (!meth)
        return ModularWidget::openFile(a0);

    return sipVH_BALL_8(sipGILState,meth,a0);
}

void sipLogView::registerThis() throw()
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


extern "C" {static PyObject *meth_LogView_countInstances(PyObject *, PyObject *);}
static PyObject *meth_LogView_countInstances(PyObject *,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        if (sipParseArgs(&sipArgsParsed,sipArgs,""))
        {
            int sipRes;

            try
            {
            sipRes = LogView::countInstances();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_LogView,sipNm_BALL_countInstances);

    return NULL;
}


extern "C" {static PyObject *meth_LogView_getInstance(PyObject *, PyObject *);}
static PyObject *meth_LogView_getInstance(PyObject *,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Position * a0;
        int a0State = 0;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"M1",sipMappedType_Position,&a0,&a0State))
        {
            LogView *sipRes;

            try
            {
            sipRes = LogView::getInstance(*a0);
            }
            catch (...)
            {

            sipReleaseMappedType(a0,sipMappedType_Position,a0State);
                sipRaiseUnknownException();
                return NULL;
            }

            sipReleaseMappedType(a0,sipMappedType_Position,a0State);

            return sipConvertFromInstance(sipRes,sipClass_LogView,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_LogView,sipNm_BALL_getInstance);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_LogView(void *, sipWrapperType *);}
static void *cast_LogView(void *ptr,sipWrapperType *targetClass)
{
    void *res;

    if (targetClass == sipClass_LogView)
        return ptr;

    if ((res = sipCast_DockWidget((DockWidget *)(LogView *)ptr,targetClass)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_LogView(void *, int);}
static void release_LogView(void *ptr,int state)
{
    if (state & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipLogView *>(ptr);
    else
        delete reinterpret_cast<LogView *>(ptr);
}


extern "C" {static void dealloc_LogView(sipWrapper *);}
static void dealloc_LogView(sipWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipLogView *>(sipSelf->u.cppPtr)->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_LogView(sipSelf->u.cppPtr,sipSelf->flags);
    }
}


extern "C" {static void *init_LogView(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_LogView(sipWrapper *sipSelf,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    sipLogView *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            sipCpp = new sipLogView();
        }
    }

    if (!sipCpp)
    {
        const LogView * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_LogView,&a0))
        {
            try
            {
            sipCpp = new sipLogView(*a0);
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


extern "C" {static void *forceConvertTo_LogView(PyObject *, int *);}
static void *forceConvertTo_LogView(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_LogView))
        return sipConvertToCpp(valobj,sipClass_LogView,iserrp);

    sipBadClass(sipNm_BALL_LogView);

    *iserrp = 1;

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedClassDef supers_LogView[] = {{208, 255, 1}};


static PyMethodDef methods_LogView[] = {
    {sipNm_BALL_countInstances, meth_LogView_countInstances, METH_VARARGS, NULL},
    {sipNm_BALL_getInstance, meth_LogView_getInstance, METH_VARARGS, NULL}
};


sipTypeDef sipType_BALL_LogView = {
    0,
    0,
    "BALL.LogView",
    0,
    {0, 0, 1},
    supers_LogView,
    0,
    2, methods_LogView,
    0, 0,
    0,
    init_LogView,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_LogView,
    cast_LogView,
    release_LogView,
    forceConvertTo_LogView,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
