/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLMolecularControl.h"

#include "sipBALLDockWidget.h"
#include "sipBALLMolecularControl.h"
#include "sipBALLPyCompositeList.h"
#include "sipBALLString.h"
#include "sipBALLMainControl.h"
#include "sipBALLComposite.h"
#include "sipBALLPosition.h"
#include "sipBALLModularWidget.h"
#include "sipBALLFragmentDB.h"
#include "sipBALLINIFile.h"
#include "sipBALLEmbeddable.h"


sipMolecularControl::sipMolecularControl() throw(): MolecularControl(), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,13);
}

sipMolecularControl::sipMolecularControl(const MolecularControl& a0): MolecularControl(a0), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,13);
}

sipMolecularControl::~sipMolecularControl() throw()
{
    sipCommonDtor(sipPySelf);
}

void sipMolecularControl::updateContextMenu(Composite& a0) throw()
{
    extern void sipVH_BALL_2(sip_gilstate_t,PyObject *,Composite&);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipNm_BALL_updateContextMenu);

    if (!meth)
    {
        MolecularControl::updateContextMenu(a0);
        return;
    }

    sipVH_BALL_2(sipGILState,meth,a0);
}

void sipMolecularControl::initializeWidget(MainControl& a0) throw()
{
    extern void sipVH_BALL_1(sip_gilstate_t,PyObject *,MainControl&);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,NULL,sipNm_BALL_initializeWidget);

    if (!meth)
    {
        MolecularControl::initializeWidget(a0);
        return;
    }

    sipVH_BALL_1(sipGILState,meth,a0);
}

void sipMolecularControl::destroy() throw()
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

void sipMolecularControl::clear() throw()
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

void sipMolecularControl::checkMenu(MainControl& a0) throw()
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

void sipMolecularControl::applyPreferences() throw()
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

void sipMolecularControl::fetchPreferences(INIFile& a0) throw()
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

void sipMolecularControl::writePreferences(INIFile& a0) throw()
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

void sipMolecularControl::setStatusbarText(String a0,bool a1) throw()
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

void sipMolecularControl::showHelp(const String& a0)
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

bool sipMolecularControl::canHandle(const String& a0) const
{
    extern bool sipVH_BALL_8(sip_gilstate_t,PyObject *,const String&);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<sipMethodCache *>(&sipPyMethods[10]),sipPySelf,NULL,sipNm_BALL_canHandle);

    if (!meth)
        return ModularWidget::canHandle(a0);

    return sipVH_BALL_8(sipGILState,meth,a0);
}

bool sipMolecularControl::openFile(const String& a0)
{
    extern bool sipVH_BALL_8(sip_gilstate_t,PyObject *,const String&);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[11],sipPySelf,NULL,sipNm_BALL_openFile);

    if (!meth)
        return ModularWidget::openFile(a0);

    return sipVH_BALL_8(sipGILState,meth,a0);
}

void sipMolecularControl::registerThis() throw()
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


extern "C" {static PyObject *meth_MolecularControl_countInstances(PyObject *, PyObject *);}
static PyObject *meth_MolecularControl_countInstances(PyObject *,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        if (sipParseArgs(&sipArgsParsed,sipArgs,""))
        {
            int sipRes;

            try
            {
            sipRes = MolecularControl::countInstances();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_MolecularControl,sipNm_BALL_countInstances);

    return NULL;
}


extern "C" {static PyObject *meth_MolecularControl_getInstance(PyObject *, PyObject *);}
static PyObject *meth_MolecularControl_getInstance(PyObject *,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Position * a0;
        int a0State = 0;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"M1",sipMappedType_Position,&a0,&a0State))
        {
            MolecularControl *sipRes;

            try
            {
            sipRes = MolecularControl::getInstance(*a0);
            }
            catch (...)
            {

            sipReleaseMappedType(a0,sipMappedType_Position,a0State);
                sipRaiseUnknownException();
                return NULL;
            }

            sipReleaseMappedType(a0,sipMappedType_Position,a0State);

            return sipConvertFromInstance(sipRes,sipClass_MolecularControl,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_MolecularControl,sipNm_BALL_getInstance);

    return NULL;
}


extern "C" {static PyObject *meth_MolecularControl_removeComposite(PyObject *, PyObject *);}
static PyObject *meth_MolecularControl_removeComposite(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Composite * a0;
        MolecularControl *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_MolecularControl,&sipCpp,sipClass_Composite,&a0))
        {
            int sipRes;

            sipRes = sipCpp->removeComposite(*a0);

            return PyInt_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_MolecularControl,sipNm_BALL_removeComposite);

    return NULL;
}


extern "C" {static PyObject *meth_MolecularControl_getSelection(PyObject *, PyObject *);}
static PyObject *meth_MolecularControl_getSelection(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        MolecularControl *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_MolecularControl,&sipCpp))
        {
            PyCompositeList *sipRes;

            sipRes = new PyCompositeList(sipCpp->getSelection());

            PyObject *sipResObj = sipConvertFromMappedType(sipRes,sipMappedType_PyCompositeList,NULL);
            delete sipRes;

            return sipResObj;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_MolecularControl,sipNm_BALL_getSelection);

    return NULL;
}


extern "C" {static PyObject *meth_MolecularControl_updateContextMenu(PyObject *, PyObject *);}
static PyObject *meth_MolecularControl_updateContextMenu(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        Composite * a0;
        MolecularControl *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_MolecularControl,&sipCpp,sipClass_Composite,&a0))
        {
            (sipSelfWasArg ? sipCpp->MolecularControl::updateContextMenu(*a0) : sipCpp->updateContextMenu(*a0));

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_MolecularControl,sipNm_BALL_updateContextMenu);

    return NULL;
}


extern "C" {static PyObject *meth_MolecularControl_initializeWidget(PyObject *, PyObject *);}
static PyObject *meth_MolecularControl_initializeWidget(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        MainControl * a0;
        MolecularControl *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_MolecularControl,&sipCpp,sipClass_MainControl,&a0))
        {
            (sipSelfWasArg ? sipCpp->MolecularControl::initializeWidget(*a0) : sipCpp->initializeWidget(*a0));

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_MolecularControl,sipNm_BALL_initializeWidget);

    return NULL;
}


extern "C" {static PyObject *meth_MolecularControl_applySelector(PyObject *, PyObject *);}
static PyObject *meth_MolecularControl_applySelector(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const String * a0;
        int a0State = 0;
        MolecularControl *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ1",&sipSelf,sipClass_MolecularControl,&sipCpp,sipClass_String,&a0,&a0State))
        {
            int sipRes;

            sipRes = sipCpp->applySelector(*a0);

            sipReleaseInstance(const_cast<String *>(a0),sipClass_String,a0State);

            return PyInt_FromLong(sipRes);
        }
    }

    {
        MolecularControl *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_MolecularControl,&sipCpp))
        {
            int sipRes;

            try
            {
            sipRes = sipCpp->applySelector();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_MolecularControl,sipNm_BALL_applySelector);

    return NULL;
}


extern "C" {static PyObject *meth_MolecularControl_showDistance(PyObject *, PyObject *);}
static PyObject *meth_MolecularControl_showDistance(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        MolecularControl *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_MolecularControl,&sipCpp))
        {
            try
            {
            sipCpp->showDistance();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_MolecularControl,sipNm_BALL_showDistance);

    return NULL;
}


extern "C" {static PyObject *meth_MolecularControl_createRepresentation(PyObject *, PyObject *);}
static PyObject *meth_MolecularControl_createRepresentation(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        MolecularControl *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_MolecularControl,&sipCpp))
        {
            try
            {
            sipCpp->createRepresentation();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_MolecularControl,sipNm_BALL_createRepresentation);

    return NULL;
}


extern "C" {static PyObject *meth_MolecularControl_compositeProperties(PyObject *, PyObject *);}
static PyObject *meth_MolecularControl_compositeProperties(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        MolecularControl *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_MolecularControl,&sipCpp))
        {
            try
            {
            sipCpp->compositeProperties();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_MolecularControl,sipNm_BALL_compositeProperties);

    return NULL;
}


extern "C" {static PyObject *meth_MolecularControl_bondProperties(PyObject *, PyObject *);}
static PyObject *meth_MolecularControl_bondProperties(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        MolecularControl *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_MolecularControl,&sipCpp))
        {
            try
            {
            sipCpp->bondProperties();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_MolecularControl,sipNm_BALL_bondProperties);

    return NULL;
}


extern "C" {static PyObject *meth_MolecularControl_checkResidue(PyObject *, PyObject *);}
static PyObject *meth_MolecularControl_checkResidue(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        MolecularControl *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_MolecularControl,&sipCpp))
        {
            try
            {
            sipCpp->checkResidue();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_MolecularControl,sipNm_BALL_checkResidue);

    return NULL;
}


extern "C" {static PyObject *meth_MolecularControl_buildBonds(PyObject *, PyObject *);}
static PyObject *meth_MolecularControl_buildBonds(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        MolecularControl *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_MolecularControl,&sipCpp))
        {
            try
            {
            sipCpp->buildBonds();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_MolecularControl,sipNm_BALL_buildBonds);

    return NULL;
}


extern "C" {static PyObject *meth_MolecularControl_centerCamera(PyObject *, PyObject *);}
static PyObject *meth_MolecularControl_centerCamera(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        MolecularControl *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_MolecularControl,&sipCpp))
        {
            try
            {
            sipCpp->centerCamera();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_MolecularControl,sipNm_BALL_centerCamera);

    return NULL;
}


extern "C" {static PyObject *meth_MolecularControl_countItems(PyObject *, PyObject *);}
static PyObject *meth_MolecularControl_countItems(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        MolecularControl *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_MolecularControl,&sipCpp))
        {
            try
            {
            sipCpp->countItems();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_MolecularControl,sipNm_BALL_countItems);

    return NULL;
}


extern "C" {static PyObject *meth_MolecularControl_showFilename(PyObject *, PyObject *);}
static PyObject *meth_MolecularControl_showFilename(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        MolecularControl *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_MolecularControl,&sipCpp))
        {
            try
            {
            sipCpp->showFilename();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_MolecularControl,sipNm_BALL_showFilename);

    return NULL;
}


extern "C" {static PyObject *meth_MolecularControl_updateSelection(PyObject *, PyObject *);}
static PyObject *meth_MolecularControl_updateSelection(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        MolecularControl *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_MolecularControl,&sipCpp))
        {
            try
            {
            sipCpp->updateSelection();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_MolecularControl,sipNm_BALL_updateSelection);

    return NULL;
}


extern "C" {static PyObject *meth_MolecularControl_highlightSelection(PyObject *, PyObject *);}
static PyObject *meth_MolecularControl_highlightSelection(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        MolecularControl *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_MolecularControl,&sipCpp))
        {
            sipCpp->highlightSelection();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_MolecularControl,sipNm_BALL_highlightSelection);

    return NULL;
}


extern "C" {static PyObject *meth_MolecularControl_highlight(PyObject *, PyObject *);}
static PyObject *meth_MolecularControl_highlight(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        PyCompositeList * a0;
        int a0State = 0;
        MolecularControl *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BM1",&sipSelf,sipClass_MolecularControl,&sipCpp,sipMappedType_PyCompositeList,&a0,&a0State))
        {
            sipCpp->highlight(*a0);

            sipReleaseMappedType(a0,sipMappedType_PyCompositeList,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_MolecularControl,sipNm_BALL_highlight);

    return NULL;
}


extern "C" {static PyObject *meth_MolecularControl_cut(PyObject *, PyObject *);}
static PyObject *meth_MolecularControl_cut(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        MolecularControl *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_MolecularControl,&sipCpp))
        {
            try
            {
            sipCpp->cut();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_MolecularControl,sipNm_BALL_cut);

    return NULL;
}


extern "C" {static PyObject *meth_MolecularControl_copy(PyObject *, PyObject *);}
static PyObject *meth_MolecularControl_copy(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        MolecularControl *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_MolecularControl,&sipCpp))
        {
            try
            {
            sipCpp->copy();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_MolecularControl,sipNm_BALL_copy);

    return NULL;
}


extern "C" {static PyObject *meth_MolecularControl_paste(PyObject *, PyObject *);}
static PyObject *meth_MolecularControl_paste(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        MolecularControl *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_MolecularControl,&sipCpp))
        {
            try
            {
            sipCpp->paste();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_MolecularControl,sipNm_BALL_paste);

    return NULL;
}


extern "C" {static PyObject *meth_MolecularControl_clearClipboard(PyObject *, PyObject *);}
static PyObject *meth_MolecularControl_clearClipboard(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        MolecularControl *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_MolecularControl,&sipCpp))
        {
            try
            {
            sipCpp->clearClipboard();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_MolecularControl,sipNm_BALL_clearClipboard);

    return NULL;
}


extern "C" {static PyObject *meth_MolecularControl_select(PyObject *, PyObject *);}
static PyObject *meth_MolecularControl_select(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        MolecularControl *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_MolecularControl,&sipCpp))
        {
            try
            {
            sipCpp->select();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_MolecularControl,sipNm_BALL_select);

    return NULL;
}


extern "C" {static PyObject *meth_MolecularControl_deselect(PyObject *, PyObject *);}
static PyObject *meth_MolecularControl_deselect(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        MolecularControl *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_MolecularControl,&sipCpp))
        {
            try
            {
            sipCpp->deselect();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_MolecularControl,sipNm_BALL_deselect);

    return NULL;
}


extern "C" {static PyObject *meth_MolecularControl_moveItems(PyObject *, PyObject *);}
static PyObject *meth_MolecularControl_moveItems(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        MolecularControl *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_MolecularControl,&sipCpp))
        {
            try
            {
            sipCpp->moveItems();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_MolecularControl,sipNm_BALL_moveItems);

    return NULL;
}


extern "C" {static PyObject *meth_MolecularControl_collapseAll(PyObject *, PyObject *);}
static PyObject *meth_MolecularControl_collapseAll(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        MolecularControl *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_MolecularControl,&sipCpp))
        {
            try
            {
            sipCpp->collapseAll();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_MolecularControl,sipNm_BALL_collapseAll);

    return NULL;
}


extern "C" {static PyObject *meth_MolecularControl_expandAll(PyObject *, PyObject *);}
static PyObject *meth_MolecularControl_expandAll(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        MolecularControl *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_MolecularControl,&sipCpp))
        {
            try
            {
            sipCpp->expandAll();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_MolecularControl,sipNm_BALL_expandAll);

    return NULL;
}


extern "C" {static PyObject *meth_MolecularControl_showSelectorHelp(PyObject *, PyObject *);}
static PyObject *meth_MolecularControl_showSelectorHelp(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        MolecularControl *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_MolecularControl,&sipCpp))
        {
            try
            {
            sipCpp->showSelectorHelp();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_MolecularControl,sipNm_BALL_showSelectorHelp);

    return NULL;
}


extern "C" {static PyObject *meth_MolecularControl_clearSelector(PyObject *, PyObject *);}
static PyObject *meth_MolecularControl_clearSelector(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        MolecularControl *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_MolecularControl,&sipCpp))
        {
            try
            {
            sipCpp->clearSelector();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_MolecularControl,sipNm_BALL_clearSelector);

    return NULL;
}


extern "C" {static PyObject *meth_MolecularControl_switchShowSecondaryStructure(PyObject *, PyObject *);}
static PyObject *meth_MolecularControl_switchShowSecondaryStructure(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        MolecularControl *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_MolecularControl,&sipCpp))
        {
            try
            {
            sipCpp->switchShowSecondaryStructure();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_MolecularControl,sipNm_BALL_switchShowSecondaryStructure);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_MolecularControl(void *, sipWrapperType *);}
static void *cast_MolecularControl(void *ptr,sipWrapperType *targetClass)
{
    void *res;

    if (targetClass == sipClass_MolecularControl)
        return ptr;

    if ((res = sipCast_DockWidget((DockWidget *)(MolecularControl *)ptr,targetClass)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_MolecularControl(void *, int);}
static void release_MolecularControl(void *ptr,int state)
{
    if (state & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipMolecularControl *>(ptr);
    else
        delete reinterpret_cast<MolecularControl *>(ptr);
}


extern "C" {static void dealloc_MolecularControl(sipWrapper *);}
static void dealloc_MolecularControl(sipWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipMolecularControl *>(sipSelf->u.cppPtr)->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_MolecularControl(sipSelf->u.cppPtr,sipSelf->flags);
    }
}


extern "C" {static void *init_MolecularControl(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_MolecularControl(sipWrapper *sipSelf,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    sipMolecularControl *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            sipCpp = new sipMolecularControl();
        }
    }

    if (!sipCpp)
    {
        const MolecularControl * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_MolecularControl,&a0))
        {
            try
            {
            sipCpp = new sipMolecularControl(*a0);
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


extern "C" {static void *forceConvertTo_MolecularControl(PyObject *, int *);}
static void *forceConvertTo_MolecularControl(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_MolecularControl))
        return sipConvertToCpp(valobj,sipClass_MolecularControl,iserrp);

    sipBadClass(sipNm_BALL_MolecularControl);

    *iserrp = 1;

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedClassDef supers_MolecularControl[] = {{208, 255, 1}};


static PyMethodDef methods_MolecularControl[] = {
    {sipNm_BALL_applySelector, meth_MolecularControl_applySelector, METH_VARARGS, NULL},
    {sipNm_BALL_bondProperties, meth_MolecularControl_bondProperties, METH_VARARGS, NULL},
    {sipNm_BALL_buildBonds, meth_MolecularControl_buildBonds, METH_VARARGS, NULL},
    {sipNm_BALL_centerCamera, meth_MolecularControl_centerCamera, METH_VARARGS, NULL},
    {sipNm_BALL_checkResidue, meth_MolecularControl_checkResidue, METH_VARARGS, NULL},
    {sipNm_BALL_clearClipboard, meth_MolecularControl_clearClipboard, METH_VARARGS, NULL},
    {sipNm_BALL_clearSelector, meth_MolecularControl_clearSelector, METH_VARARGS, NULL},
    {sipNm_BALL_collapseAll, meth_MolecularControl_collapseAll, METH_VARARGS, NULL},
    {sipNm_BALL_compositeProperties, meth_MolecularControl_compositeProperties, METH_VARARGS, NULL},
    {sipNm_BALL_copy, meth_MolecularControl_copy, METH_VARARGS, NULL},
    {sipNm_BALL_countInstances, meth_MolecularControl_countInstances, METH_VARARGS, NULL},
    {sipNm_BALL_countItems, meth_MolecularControl_countItems, METH_VARARGS, NULL},
    {sipNm_BALL_createRepresentation, meth_MolecularControl_createRepresentation, METH_VARARGS, NULL},
    {sipNm_BALL_cut, meth_MolecularControl_cut, METH_VARARGS, NULL},
    {sipNm_BALL_deselect, meth_MolecularControl_deselect, METH_VARARGS, NULL},
    {sipNm_BALL_expandAll, meth_MolecularControl_expandAll, METH_VARARGS, NULL},
    {sipNm_BALL_getInstance, meth_MolecularControl_getInstance, METH_VARARGS, NULL},
    {sipNm_BALL_getSelection, meth_MolecularControl_getSelection, METH_VARARGS, NULL},
    {sipNm_BALL_highlight, meth_MolecularControl_highlight, METH_VARARGS, NULL},
    {sipNm_BALL_highlightSelection, meth_MolecularControl_highlightSelection, METH_VARARGS, NULL},
    {sipNm_BALL_initializeWidget, meth_MolecularControl_initializeWidget, METH_VARARGS, NULL},
    {sipNm_BALL_moveItems, meth_MolecularControl_moveItems, METH_VARARGS, NULL},
    {sipNm_BALL_paste, meth_MolecularControl_paste, METH_VARARGS, NULL},
    {sipNm_BALL_removeComposite, meth_MolecularControl_removeComposite, METH_VARARGS, NULL},
    {sipNm_BALL_select, meth_MolecularControl_select, METH_VARARGS, NULL},
    {sipNm_BALL_showDistance, meth_MolecularControl_showDistance, METH_VARARGS, NULL},
    {sipNm_BALL_showFilename, meth_MolecularControl_showFilename, METH_VARARGS, NULL},
    {sipNm_BALL_showSelectorHelp, meth_MolecularControl_showSelectorHelp, METH_VARARGS, NULL},
    {sipNm_BALL_switchShowSecondaryStructure, meth_MolecularControl_switchShowSecondaryStructure, METH_VARARGS, NULL},
    {sipNm_BALL_updateContextMenu, meth_MolecularControl_updateContextMenu, METH_VARARGS, NULL},
    {sipNm_BALL_updateSelection, meth_MolecularControl_updateSelection, METH_VARARGS, NULL}
};


sipTypeDef sipType_BALL_MolecularControl = {
    0,
    0,
    "BALL.MolecularControl",
    0,
    {0, 0, 1},
    supers_MolecularControl,
    0,
    31, methods_MolecularControl,
    0, 0,
    0,
    init_MolecularControl,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_MolecularControl,
    cast_MolecularControl,
    release_MolecularControl,
    forceConvertTo_MolecularControl,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
