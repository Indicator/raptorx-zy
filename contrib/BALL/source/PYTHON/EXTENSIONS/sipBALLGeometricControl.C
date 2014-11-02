/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLGeometricControl.h"

#include "sipBALLDockWidget.h"
#include "sipBALLGeometricControl.h"
#include "sipBALLModifyRepresentationDialog.h"
#include "sipBALLRepresentationList.h"
#include "sipBALLPosition.h"
#include "sipBALLModularWidget.h"
#include "sipBALLString.h"
#include "sipBALLFragmentDB.h"
#include "sipBALLMainControl.h"
#include "sipBALLINIFile.h"
#include "sipBALLEmbeddable.h"


sipGeometricControl::sipGeometricControl() throw(): GeometricControl(), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,20);
}

sipGeometricControl::sipGeometricControl(const GeometricControl& a0): GeometricControl(a0), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,20);
}

sipGeometricControl::~sipGeometricControl() throw()
{
    sipCommonDtor(sipPySelf);
}

void sipGeometricControl::selectAtoms()
{
    extern void sipVH_BALL_0(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipNm_BALL_selectAtoms);

    if (!meth)
    {
        GeometricControl::selectAtoms();
        return;
    }

    sipVH_BALL_0(sipGILState,meth);
}

void sipGeometricControl::updateSelection()
{
    extern void sipVH_BALL_0(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,NULL,sipNm_BALL_updateSelection);

    if (!meth)
    {
        GeometricControl::updateSelection();
        return;
    }

    sipVH_BALL_0(sipGILState,meth);
}

void sipGeometricControl::focus()
{
    extern void sipVH_BALL_0(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[2],sipPySelf,NULL,sipNm_BALL_focus);

    if (!meth)
    {
        GeometricControl::focus();
        return;
    }

    sipVH_BALL_0(sipGILState,meth);
}

void sipGeometricControl::enterMoveMode()
{
    extern void sipVH_BALL_0(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[3],sipPySelf,NULL,sipNm_BALL_enterMoveMode);

    if (!meth)
    {
        GeometricControl::enterMoveMode();
        return;
    }

    sipVH_BALL_0(sipGILState,meth);
}

void sipGeometricControl::flipClippingPlane()
{
    extern void sipVH_BALL_0(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[4],sipPySelf,NULL,sipNm_BALL_flipClippingPlane);

    if (!meth)
    {
        GeometricControl::flipClippingPlane();
        return;
    }

    sipVH_BALL_0(sipGILState,meth);
}

void sipGeometricControl::setClippingPlaneX()
{
    extern void sipVH_BALL_0(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[5],sipPySelf,NULL,sipNm_BALL_setClippingPlaneX);

    if (!meth)
    {
        GeometricControl::setClippingPlaneX();
        return;
    }

    sipVH_BALL_0(sipGILState,meth);
}

void sipGeometricControl::setClippingPlaneY()
{
    extern void sipVH_BALL_0(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[6],sipPySelf,NULL,sipNm_BALL_setClippingPlaneY);

    if (!meth)
    {
        GeometricControl::setClippingPlaneY();
        return;
    }

    sipVH_BALL_0(sipGILState,meth);
}

void sipGeometricControl::setClippingPlaneZ()
{
    extern void sipVH_BALL_0(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[7],sipPySelf,NULL,sipNm_BALL_setClippingPlaneZ);

    if (!meth)
    {
        GeometricControl::setClippingPlaneZ();
        return;
    }

    sipVH_BALL_0(sipGILState,meth);
}

void sipGeometricControl::selectClipRepresentations()
{
    extern void sipVH_BALL_0(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[8],sipPySelf,NULL,sipNm_BALL_selectClipRepresentations);

    if (!meth)
    {
        GeometricControl::selectClipRepresentations();
        return;
    }

    sipVH_BALL_0(sipGILState,meth);
}

void sipGeometricControl::destroy() throw()
{
    extern void sipVH_BALL_0(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[9],sipPySelf,NULL,sipNm_BALL_destroy);

    if (!meth)
    {
        ModularWidget::destroy();
        return;
    }

    sipVH_BALL_0(sipGILState,meth);
}

void sipGeometricControl::clear() throw()
{
    extern void sipVH_BALL_0(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[10],sipPySelf,NULL,sipNm_BALL_clear);

    if (!meth)
    {
        ModularWidget::clear();
        return;
    }

    sipVH_BALL_0(sipGILState,meth);
}

void sipGeometricControl::checkMenu(MainControl& a0) throw()
{
    extern void sipVH_BALL_1(sip_gilstate_t,PyObject *,MainControl&);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[11],sipPySelf,NULL,sipNm_BALL_checkMenu);

    if (!meth)
    {
        ModularWidget::checkMenu(a0);
        return;
    }

    sipVH_BALL_1(sipGILState,meth,a0);
}

void sipGeometricControl::applyPreferences() throw()
{
    extern void sipVH_BALL_0(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[12],sipPySelf,NULL,sipNm_BALL_applyPreferences);

    if (!meth)
    {
        DockWidget::applyPreferences();
        return;
    }

    sipVH_BALL_0(sipGILState,meth);
}

void sipGeometricControl::fetchPreferences(INIFile& a0) throw()
{
    extern void sipVH_BALL_5(sip_gilstate_t,PyObject *,INIFile&);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[13],sipPySelf,NULL,sipNm_BALL_fetchPreferences);

    if (!meth)
    {
        ModularWidget::fetchPreferences(a0);
        return;
    }

    sipVH_BALL_5(sipGILState,meth,a0);
}

void sipGeometricControl::writePreferences(INIFile& a0) throw()
{
    extern void sipVH_BALL_5(sip_gilstate_t,PyObject *,INIFile&);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[14],sipPySelf,NULL,sipNm_BALL_writePreferences);

    if (!meth)
    {
        ModularWidget::writePreferences(a0);
        return;
    }

    sipVH_BALL_5(sipGILState,meth,a0);
}

void sipGeometricControl::setStatusbarText(String a0,bool a1) throw()
{
    extern void sipVH_BALL_10(sip_gilstate_t,PyObject *,String,bool);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[15],sipPySelf,NULL,sipNm_BALL_setStatusbarText);

    if (!meth)
    {
        ModularWidget::setStatusbarText(a0,a1);
        return;
    }

    sipVH_BALL_10(sipGILState,meth,a0,a1);
}

void sipGeometricControl::showHelp(const String& a0)
{
    extern void sipVH_BALL_9(sip_gilstate_t,PyObject *,const String&);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[16],sipPySelf,NULL,sipNm_BALL_showHelp);

    if (!meth)
    {
        ModularWidget::showHelp(a0);
        return;
    }

    sipVH_BALL_9(sipGILState,meth,a0);
}

bool sipGeometricControl::canHandle(const String& a0) const
{
    extern bool sipVH_BALL_8(sip_gilstate_t,PyObject *,const String&);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<sipMethodCache *>(&sipPyMethods[17]),sipPySelf,NULL,sipNm_BALL_canHandle);

    if (!meth)
        return ModularWidget::canHandle(a0);

    return sipVH_BALL_8(sipGILState,meth,a0);
}

bool sipGeometricControl::openFile(const String& a0)
{
    extern bool sipVH_BALL_8(sip_gilstate_t,PyObject *,const String&);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[18],sipPySelf,NULL,sipNm_BALL_openFile);

    if (!meth)
        return ModularWidget::openFile(a0);

    return sipVH_BALL_8(sipGILState,meth,a0);
}

void sipGeometricControl::registerThis() throw()
{
    extern void sipVH_BALL_0(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[19],sipPySelf,NULL,sipNm_BALL_registerThis);

    if (!meth)
    {
        Embeddable::registerThis();
        return;
    }

    sipVH_BALL_0(sipGILState,meth);
}


extern "C" {static PyObject *meth_GeometricControl_countInstances(PyObject *, PyObject *);}
static PyObject *meth_GeometricControl_countInstances(PyObject *,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        if (sipParseArgs(&sipArgsParsed,sipArgs,""))
        {
            int sipRes;

            try
            {
            sipRes = GeometricControl::countInstances();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_GeometricControl,sipNm_BALL_countInstances);

    return NULL;
}


extern "C" {static PyObject *meth_GeometricControl_getInstance(PyObject *, PyObject *);}
static PyObject *meth_GeometricControl_getInstance(PyObject *,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Position * a0;
        int a0State = 0;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"M1",sipMappedType_Position,&a0,&a0State))
        {
            GeometricControl *sipRes;

            try
            {
            sipRes = GeometricControl::getInstance(*a0);
            }
            catch (...)
            {

            sipReleaseMappedType(a0,sipMappedType_Position,a0State);
                sipRaiseUnknownException();
                return NULL;
            }

            sipReleaseMappedType(a0,sipMappedType_Position,a0State);

            return sipConvertFromInstance(sipRes,sipClass_GeometricControl,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_GeometricControl,sipNm_BALL_getInstance);

    return NULL;
}


extern "C" {static PyObject *meth_GeometricControl_getHighlightedRepresentations(PyObject *, PyObject *);}
static PyObject *meth_GeometricControl_getHighlightedRepresentations(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        GeometricControl *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_GeometricControl,&sipCpp))
        {
            RepresentationList *sipRes;

            sipRes = new RepresentationList(sipCpp->getHighlightedRepresentations());

            PyObject *sipResObj = sipConvertFromMappedType(sipRes,sipMappedType_RepresentationList,NULL);
            delete sipRes;

            return sipResObj;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_GeometricControl,sipNm_BALL_getHighlightedRepresentations);

    return NULL;
}


extern "C" {static PyObject *meth_GeometricControl_selectAtoms(PyObject *, PyObject *);}
static PyObject *meth_GeometricControl_selectAtoms(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        GeometricControl *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_GeometricControl,&sipCpp))
        {
            try
            {
            (sipSelfWasArg ? sipCpp->GeometricControl::selectAtoms() : sipCpp->selectAtoms());
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_GeometricControl,sipNm_BALL_selectAtoms);

    return NULL;
}


extern "C" {static PyObject *meth_GeometricControl_updateSelection(PyObject *, PyObject *);}
static PyObject *meth_GeometricControl_updateSelection(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        GeometricControl *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_GeometricControl,&sipCpp))
        {
            try
            {
            (sipSelfWasArg ? sipCpp->GeometricControl::updateSelection() : sipCpp->updateSelection());
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_GeometricControl,sipNm_BALL_updateSelection);

    return NULL;
}


extern "C" {static PyObject *meth_GeometricControl_focus(PyObject *, PyObject *);}
static PyObject *meth_GeometricControl_focus(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        GeometricControl *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_GeometricControl,&sipCpp))
        {
            try
            {
            (sipSelfWasArg ? sipCpp->GeometricControl::focus() : sipCpp->focus());
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_GeometricControl,sipNm_BALL_focus);

    return NULL;
}


extern "C" {static PyObject *meth_GeometricControl_enterMoveMode(PyObject *, PyObject *);}
static PyObject *meth_GeometricControl_enterMoveMode(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        GeometricControl *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_GeometricControl,&sipCpp))
        {
            try
            {
            (sipSelfWasArg ? sipCpp->GeometricControl::enterMoveMode() : sipCpp->enterMoveMode());
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_GeometricControl,sipNm_BALL_enterMoveMode);

    return NULL;
}


extern "C" {static PyObject *meth_GeometricControl_flipClippingPlane(PyObject *, PyObject *);}
static PyObject *meth_GeometricControl_flipClippingPlane(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        GeometricControl *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_GeometricControl,&sipCpp))
        {
            try
            {
            (sipSelfWasArg ? sipCpp->GeometricControl::flipClippingPlane() : sipCpp->flipClippingPlane());
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_GeometricControl,sipNm_BALL_flipClippingPlane);

    return NULL;
}


extern "C" {static PyObject *meth_GeometricControl_setClippingPlaneX(PyObject *, PyObject *);}
static PyObject *meth_GeometricControl_setClippingPlaneX(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        GeometricControl *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_GeometricControl,&sipCpp))
        {
            try
            {
            (sipSelfWasArg ? sipCpp->GeometricControl::setClippingPlaneX() : sipCpp->setClippingPlaneX());
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_GeometricControl,sipNm_BALL_setClippingPlaneX);

    return NULL;
}


extern "C" {static PyObject *meth_GeometricControl_setClippingPlaneY(PyObject *, PyObject *);}
static PyObject *meth_GeometricControl_setClippingPlaneY(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        GeometricControl *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_GeometricControl,&sipCpp))
        {
            try
            {
            (sipSelfWasArg ? sipCpp->GeometricControl::setClippingPlaneY() : sipCpp->setClippingPlaneY());
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_GeometricControl,sipNm_BALL_setClippingPlaneY);

    return NULL;
}


extern "C" {static PyObject *meth_GeometricControl_setClippingPlaneZ(PyObject *, PyObject *);}
static PyObject *meth_GeometricControl_setClippingPlaneZ(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        GeometricControl *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_GeometricControl,&sipCpp))
        {
            try
            {
            (sipSelfWasArg ? sipCpp->GeometricControl::setClippingPlaneZ() : sipCpp->setClippingPlaneZ());
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_GeometricControl,sipNm_BALL_setClippingPlaneZ);

    return NULL;
}


extern "C" {static PyObject *meth_GeometricControl_hideShowClippingPlane(PyObject *, PyObject *);}
static PyObject *meth_GeometricControl_hideShowClippingPlane(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        GeometricControl *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_GeometricControl,&sipCpp))
        {
            try
            {
            sipCpp->hideShowClippingPlane();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_GeometricControl,sipNm_BALL_hideShowClippingPlane);

    return NULL;
}


extern "C" {static PyObject *meth_GeometricControl_selectClipRepresentations(PyObject *, PyObject *);}
static PyObject *meth_GeometricControl_selectClipRepresentations(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        GeometricControl *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_GeometricControl,&sipCpp))
        {
            try
            {
            (sipSelfWasArg ? sipCpp->GeometricControl::selectClipRepresentations() : sipCpp->selectClipRepresentations());
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_GeometricControl,sipNm_BALL_selectClipRepresentations);

    return NULL;
}


extern "C" {static PyObject *meth_GeometricControl_createNewClippingPlane(PyObject *, PyObject *);}
static PyObject *meth_GeometricControl_createNewClippingPlane(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        GeometricControl *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_GeometricControl,&sipCpp))
        {
            try
            {
            sipCpp->createNewClippingPlane();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_GeometricControl,sipNm_BALL_createNewClippingPlane);

    return NULL;
}


extern "C" {static PyObject *meth_GeometricControl_duplicate(PyObject *, PyObject *);}
static PyObject *meth_GeometricControl_duplicate(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        GeometricControl *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_GeometricControl,&sipCpp))
        {
            try
            {
            sipCpp->duplicate();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_GeometricControl,sipNm_BALL_duplicate);

    return NULL;
}


extern "C" {static PyObject *meth_GeometricControl_renameRepresentation(PyObject *, PyObject *);}
static PyObject *meth_GeometricControl_renameRepresentation(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        GeometricControl *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_GeometricControl,&sipCpp))
        {
            try
            {
            sipCpp->renameRepresentation();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_GeometricControl,sipNm_BALL_renameRepresentation);

    return NULL;
}


extern "C" {static PyObject *meth_GeometricControl_getModifySurfaceDialog(PyObject *, PyObject *);}
static PyObject *meth_GeometricControl_getModifySurfaceDialog(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        GeometricControl *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_GeometricControl,&sipCpp))
        {
            ModifyRepresentationDialog *sipRes;

            try
            {
            sipRes = sipCpp->getModifySurfaceDialog();
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return sipConvertFromInstance(sipRes,sipClass_ModifyRepresentationDialog,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_GeometricControl,sipNm_BALL_getModifySurfaceDialog);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_GeometricControl(void *, sipWrapperType *);}
static void *cast_GeometricControl(void *ptr,sipWrapperType *targetClass)
{
    void *res;

    if (targetClass == sipClass_GeometricControl)
        return ptr;

    if ((res = sipCast_DockWidget((DockWidget *)(GeometricControl *)ptr,targetClass)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_GeometricControl(void *, int);}
static void release_GeometricControl(void *ptr,int state)
{
    if (state & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipGeometricControl *>(ptr);
    else
        delete reinterpret_cast<GeometricControl *>(ptr);
}


extern "C" {static void dealloc_GeometricControl(sipWrapper *);}
static void dealloc_GeometricControl(sipWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipGeometricControl *>(sipSelf->u.cppPtr)->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_GeometricControl(sipSelf->u.cppPtr,sipSelf->flags);
    }
}


extern "C" {static void *init_GeometricControl(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_GeometricControl(sipWrapper *sipSelf,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    sipGeometricControl *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            sipCpp = new sipGeometricControl();
        }
    }

    if (!sipCpp)
    {
        const GeometricControl * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_GeometricControl,&a0))
        {
            try
            {
            sipCpp = new sipGeometricControl(*a0);
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


extern "C" {static void *forceConvertTo_GeometricControl(PyObject *, int *);}
static void *forceConvertTo_GeometricControl(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_GeometricControl))
        return sipConvertToCpp(valobj,sipClass_GeometricControl,iserrp);

    sipBadClass(sipNm_BALL_GeometricControl);

    *iserrp = 1;

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedClassDef supers_GeometricControl[] = {{208, 255, 1}};


static PyMethodDef methods_GeometricControl[] = {
    {sipNm_BALL_countInstances, meth_GeometricControl_countInstances, METH_VARARGS, NULL},
    {sipNm_BALL_createNewClippingPlane, meth_GeometricControl_createNewClippingPlane, METH_VARARGS, NULL},
    {sipNm_BALL_duplicate, meth_GeometricControl_duplicate, METH_VARARGS, NULL},
    {sipNm_BALL_enterMoveMode, meth_GeometricControl_enterMoveMode, METH_VARARGS, NULL},
    {sipNm_BALL_flipClippingPlane, meth_GeometricControl_flipClippingPlane, METH_VARARGS, NULL},
    {sipNm_BALL_focus, meth_GeometricControl_focus, METH_VARARGS, NULL},
    {sipNm_BALL_getHighlightedRepresentations, meth_GeometricControl_getHighlightedRepresentations, METH_VARARGS, NULL},
    {sipNm_BALL_getInstance, meth_GeometricControl_getInstance, METH_VARARGS, NULL},
    {sipNm_BALL_getModifySurfaceDialog, meth_GeometricControl_getModifySurfaceDialog, METH_VARARGS, NULL},
    {sipNm_BALL_hideShowClippingPlane, meth_GeometricControl_hideShowClippingPlane, METH_VARARGS, NULL},
    {sipNm_BALL_renameRepresentation, meth_GeometricControl_renameRepresentation, METH_VARARGS, NULL},
    {sipNm_BALL_selectAtoms, meth_GeometricControl_selectAtoms, METH_VARARGS, NULL},
    {sipNm_BALL_selectClipRepresentations, meth_GeometricControl_selectClipRepresentations, METH_VARARGS, NULL},
    {sipNm_BALL_setClippingPlaneX, meth_GeometricControl_setClippingPlaneX, METH_VARARGS, NULL},
    {sipNm_BALL_setClippingPlaneY, meth_GeometricControl_setClippingPlaneY, METH_VARARGS, NULL},
    {sipNm_BALL_setClippingPlaneZ, meth_GeometricControl_setClippingPlaneZ, METH_VARARGS, NULL},
    {sipNm_BALL_updateSelection, meth_GeometricControl_updateSelection, METH_VARARGS, NULL}
};


sipTypeDef sipType_BALL_GeometricControl = {
    0,
    0,
    "BALL.GeometricControl",
    0,
    {0, 0, 1},
    supers_GeometricControl,
    0,
    17, methods_GeometricControl,
    0, 0,
    0,
    init_GeometricControl,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_GeometricControl,
    cast_GeometricControl,
    release_GeometricControl,
    forceConvertTo_GeometricControl,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
