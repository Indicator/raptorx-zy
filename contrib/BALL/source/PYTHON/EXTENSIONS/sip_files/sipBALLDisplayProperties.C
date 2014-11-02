/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLDisplayProperties.h"

#include "sipBALLModularWidget.h"
#include "sipBALLDisplayProperties.h"
#include "sipBALLColorRGBA.h"
#include "sipBALLString.h"
#include "sipBALLRepresentation.h"
#include "sipBALLPyCompositeList.h"
#include "sipBALLPosition.h"
#include "sipBALLFragmentDB.h"
#include "sipBALLMainControl.h"
#include "sipBALLINIFile.h"
#include "sipBALLEmbeddable.h"


sipDisplayProperties::sipDisplayProperties(): DisplayProperties(), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,11);
}

sipDisplayProperties::sipDisplayProperties(const DisplayProperties& a0): DisplayProperties(a0), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,11);
}

sipDisplayProperties::~sipDisplayProperties() throw()
{
    sipCommonDtor(sipPySelf);
}

void sipDisplayProperties::destroy() throw()
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

void sipDisplayProperties::clear() throw()
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

void sipDisplayProperties::checkMenu(MainControl& a0) throw()
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

void sipDisplayProperties::applyPreferences() throw()
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

void sipDisplayProperties::fetchPreferences(INIFile& a0) throw()
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

void sipDisplayProperties::writePreferences(INIFile& a0) throw()
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

void sipDisplayProperties::setStatusbarText(String a0,bool a1) throw()
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

void sipDisplayProperties::showHelp(const String& a0)
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

bool sipDisplayProperties::canHandle(const String& a0) const
{
    extern bool sipVH_BALL_8(sip_gilstate_t,PyObject *,const String&);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<sipMethodCache *>(&sipPyMethods[8]),sipPySelf,NULL,sipNm_BALL_canHandle);

    if (!meth)
        return ModularWidget::canHandle(a0);

    return sipVH_BALL_8(sipGILState,meth,a0);
}

bool sipDisplayProperties::openFile(const String& a0)
{
    extern bool sipVH_BALL_8(sip_gilstate_t,PyObject *,const String&);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[9],sipPySelf,NULL,sipNm_BALL_openFile);

    if (!meth)
        return ModularWidget::openFile(a0);

    return sipVH_BALL_8(sipGILState,meth,a0);
}

void sipDisplayProperties::registerThis() throw()
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


extern "C" {static PyObject *meth_DisplayProperties_countInstances(PyObject *, PyObject *);}
static PyObject *meth_DisplayProperties_countInstances(PyObject *,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        if (sipParseArgs(&sipArgsParsed,sipArgs,""))
        {
            int sipRes;

            try
            {
            sipRes = DisplayProperties::countInstances();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_DisplayProperties,sipNm_BALL_countInstances);

    return NULL;
}


extern "C" {static PyObject *meth_DisplayProperties_getInstance(PyObject *, PyObject *);}
static PyObject *meth_DisplayProperties_getInstance(PyObject *,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Position * a0;
        int a0State = 0;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"M1",sipMappedType_Position,&a0,&a0State))
        {
            DisplayProperties *sipRes;

            try
            {
            sipRes = DisplayProperties::getInstance(*a0);
            }
            catch (...)
            {

            sipReleaseMappedType(a0,sipMappedType_Position,a0State);
                sipRaiseUnknownException();
                return NULL;
            }

            sipReleaseMappedType(a0,sipMappedType_Position,a0State);

            return sipConvertFromInstance(sipRes,sipClass_DisplayProperties,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_DisplayProperties,sipNm_BALL_getInstance);

    return NULL;
}


extern "C" {static PyObject *meth_DisplayProperties_createRepresentationMode(PyObject *, PyObject *);}
static PyObject *meth_DisplayProperties_createRepresentationMode(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        DisplayProperties *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_DisplayProperties,&sipCpp))
        {
            try
            {
            sipCpp->createRepresentationMode();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_DisplayProperties,sipNm_BALL_createRepresentationMode);

    return NULL;
}


extern "C" {static PyObject *meth_DisplayProperties_modifyRepresentationMode(PyObject *, PyObject *);}
static PyObject *meth_DisplayProperties_modifyRepresentationMode(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Representation * a0;
        DisplayProperties *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ@",&sipSelf,sipClass_DisplayProperties,&sipCpp,sipClass_Representation,&a0))
        {
            try
            {
            sipCpp->modifyRepresentationMode(a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_DisplayProperties,sipNm_BALL_modifyRepresentationMode);

    return NULL;
}


extern "C" {static PyObject *meth_DisplayProperties_createRepresentation(PyObject *, PyObject *);}
static PyObject *meth_DisplayProperties_createRepresentation(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const PyCompositeList * a0;
        int a0State = 0;
        DisplayProperties *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BM1",&sipSelf,sipClass_DisplayProperties,&sipCpp,sipMappedType_PyCompositeList,&a0,&a0State))
        {
            Representation *sipRes;

            try
            {
            sipRes = sipCpp->createRepresentation(*a0);
            }
            catch (...)
            {

            sipReleaseMappedType(const_cast<PyCompositeList *>(a0),sipMappedType_PyCompositeList,a0State);
                sipRaiseUnknownException();
                return NULL;
            }

            sipReleaseMappedType(const_cast<PyCompositeList *>(a0),sipMappedType_PyCompositeList,a0State);

            return sipConvertFromInstance(sipRes,sipClass_Representation,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_DisplayProperties,sipNm_BALL_createRepresentation);

    return NULL;
}


extern "C" {static PyObject *meth_DisplayProperties_getSettingsFromString(PyObject *, PyObject *);}
static PyObject *meth_DisplayProperties_getSettingsFromString(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const String * a0;
        int a0State = 0;
        DisplayProperties *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ1",&sipSelf,sipClass_DisplayProperties,&sipCpp,sipClass_String,&a0,&a0State))
        {
            bool sipRes;

            sipRes = sipCpp->getSettingsFromString(*a0);

            sipReleaseInstance(const_cast<String *>(a0),sipClass_String,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_DisplayProperties,sipNm_BALL_getSettingsFromString);

    return NULL;
}


extern "C" {static PyObject *meth_DisplayProperties_enableCreationForNewMolecules(PyObject *, PyObject *);}
static PyObject *meth_DisplayProperties_enableCreationForNewMolecules(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        bool a0;
        DisplayProperties *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bb",&sipSelf,sipClass_DisplayProperties,&sipCpp,&a0))
        {
            sipCpp->enableCreationForNewMolecules(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_DisplayProperties,sipNm_BALL_enableCreationForNewMolecules);

    return NULL;
}


extern "C" {static PyObject *meth_DisplayProperties_selectModel(PyObject *, PyObject *);}
static PyObject *meth_DisplayProperties_selectModel(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        int a0;
        DisplayProperties *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bi",&sipSelf,sipClass_DisplayProperties,&sipCpp,&a0))
        {
            try
            {
            sipCpp->selectModel(a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_DisplayProperties,sipNm_BALL_selectModel);

    return NULL;
}


extern "C" {static PyObject *meth_DisplayProperties_selectMode(PyObject *, PyObject *);}
static PyObject *meth_DisplayProperties_selectMode(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        int a0;
        DisplayProperties *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bi",&sipSelf,sipClass_DisplayProperties,&sipCpp,&a0))
        {
            try
            {
            sipCpp->selectMode(a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_DisplayProperties,sipNm_BALL_selectMode);

    return NULL;
}


extern "C" {static PyObject *meth_DisplayProperties_selectColoringMethod(PyObject *, PyObject *);}
static PyObject *meth_DisplayProperties_selectColoringMethod(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        int a0;
        DisplayProperties *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bi",&sipSelf,sipClass_DisplayProperties,&sipCpp,&a0))
        {
            try
            {
            sipCpp->selectColoringMethod(a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_DisplayProperties,sipNm_BALL_selectColoringMethod);

    return NULL;
}


extern "C" {static PyObject *meth_DisplayProperties_setSurfaceDrawingPrecision(PyObject *, PyObject *);}
static PyObject *meth_DisplayProperties_setSurfaceDrawingPrecision(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        float a0;
        DisplayProperties *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bf",&sipSelf,sipClass_DisplayProperties,&sipCpp,&a0))
        {
            try
            {
            sipCpp->setSurfaceDrawingPrecision(a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_DisplayProperties,sipNm_BALL_setSurfaceDrawingPrecision);

    return NULL;
}


extern "C" {static PyObject *meth_DisplayProperties_setDrawingPrecision(PyObject *, PyObject *);}
static PyObject *meth_DisplayProperties_setDrawingPrecision(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        int a0;
        DisplayProperties *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bi",&sipSelf,sipClass_DisplayProperties,&sipCpp,&a0))
        {
            try
            {
            sipCpp->setDrawingPrecision(a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_DisplayProperties,sipNm_BALL_setDrawingPrecision);

    return NULL;
}


extern "C" {static PyObject *meth_DisplayProperties_setTransparency(PyObject *, PyObject *);}
static PyObject *meth_DisplayProperties_setTransparency(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        int a0;
        DisplayProperties *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bi",&sipSelf,sipClass_DisplayProperties,&sipCpp,&a0))
        {
            try
            {
            sipCpp->setTransparency(a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_DisplayProperties,sipNm_BALL_setTransparency);

    return NULL;
}


extern "C" {static PyObject *meth_DisplayProperties_setCustomColor(PyObject *, PyObject *);}
static PyObject *meth_DisplayProperties_setCustomColor(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const ColorRGBA * a0;
        DisplayProperties *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_DisplayProperties,&sipCpp,sipClass_ColorRGBA,&a0))
        {
            try
            {
            sipCpp->setCustomColor(*a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_DisplayProperties,sipNm_BALL_setCustomColor);

    return NULL;
}


extern "C" {static PyObject *meth_DisplayProperties_apply(PyObject *, PyObject *);}
static PyObject *meth_DisplayProperties_apply(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        DisplayProperties *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_DisplayProperties,&sipCpp))
        {
            try
            {
            sipCpp->apply();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_DisplayProperties,sipNm_BALL_apply);

    return NULL;
}


extern "C" {static PyObject *meth_DisplayProperties_editColor(PyObject *, PyObject *);}
static PyObject *meth_DisplayProperties_editColor(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        DisplayProperties *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_DisplayProperties,&sipCpp))
        {
            try
            {
            sipCpp->editColor();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_DisplayProperties,sipNm_BALL_editColor);

    return NULL;
}


extern "C" {static PyObject *meth_DisplayProperties_editSelectionColor(PyObject *, PyObject *);}
static PyObject *meth_DisplayProperties_editSelectionColor(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        DisplayProperties *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_DisplayProperties,&sipCpp))
        {
            try
            {
            sipCpp->editSelectionColor();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_DisplayProperties,sipNm_BALL_editSelectionColor);

    return NULL;
}


extern "C" {static PyObject *meth_DisplayProperties_coloringOptionsPressed(PyObject *, PyObject *);}
static PyObject *meth_DisplayProperties_coloringOptionsPressed(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        DisplayProperties *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_DisplayProperties,&sipCpp))
        {
            try
            {
            sipCpp->coloringOptionsPressed();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_DisplayProperties,sipNm_BALL_coloringOptionsPressed);

    return NULL;
}


extern "C" {static PyObject *meth_DisplayProperties_modelOptionsPressed(PyObject *, PyObject *);}
static PyObject *meth_DisplayProperties_modelOptionsPressed(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        DisplayProperties *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_DisplayProperties,&sipCpp))
        {
            try
            {
            sipCpp->modelOptionsPressed();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_DisplayProperties,sipNm_BALL_modelOptionsPressed);

    return NULL;
}


extern "C" {static PyObject *meth_DisplayProperties_precisionBoxChanged(PyObject *, PyObject *);}
static PyObject *meth_DisplayProperties_precisionBoxChanged(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        int a0;
        DisplayProperties *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bi",&sipSelf,sipClass_DisplayProperties,&sipCpp,&a0))
        {
            try
            {
            sipCpp->precisionBoxChanged(a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_DisplayProperties,sipNm_BALL_precisionBoxChanged);

    return NULL;
}


extern "C" {static PyObject *meth_DisplayProperties_precisionSliderChanged(PyObject *, PyObject *);}
static PyObject *meth_DisplayProperties_precisionSliderChanged(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        DisplayProperties *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_DisplayProperties,&sipCpp))
        {
            try
            {
            sipCpp->precisionSliderChanged();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_DisplayProperties,sipNm_BALL_precisionSliderChanged);

    return NULL;
}


extern "C" {static PyObject *meth_DisplayProperties_coloringUpdatesChanged(PyObject *, PyObject *);}
static PyObject *meth_DisplayProperties_coloringUpdatesChanged(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        DisplayProperties *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_DisplayProperties,&sipCpp))
        {
            try
            {
            sipCpp->coloringUpdatesChanged();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_DisplayProperties,sipNm_BALL_coloringUpdatesChanged);

    return NULL;
}


extern "C" {static PyObject *meth_DisplayProperties_modelUpdatesChanged(PyObject *, PyObject *);}
static PyObject *meth_DisplayProperties_modelUpdatesChanged(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        DisplayProperties *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_DisplayProperties,&sipCpp))
        {
            try
            {
            sipCpp->modelUpdatesChanged();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_DisplayProperties,sipNm_BALL_modelUpdatesChanged);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_DisplayProperties(void *, sipWrapperType *);}
static void *cast_DisplayProperties(void *ptr,sipWrapperType *targetClass)
{
    void *res;

    if (targetClass == sipClass_DisplayProperties)
        return ptr;

    if ((res = sipCast_ModularWidget((ModularWidget *)(DisplayProperties *)ptr,targetClass)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_DisplayProperties(void *, int);}
static void release_DisplayProperties(void *ptr,int state)
{
    if (state & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipDisplayProperties *>(ptr);
    else
        delete reinterpret_cast<DisplayProperties *>(ptr);
}


extern "C" {static void dealloc_DisplayProperties(sipWrapper *);}
static void dealloc_DisplayProperties(sipWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipDisplayProperties *>(sipSelf->u.cppPtr)->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_DisplayProperties(sipSelf->u.cppPtr,sipSelf->flags);
    }
}


extern "C" {static void *init_DisplayProperties(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_DisplayProperties(sipWrapper *sipSelf,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    sipDisplayProperties *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            try
            {
            sipCpp = new sipDisplayProperties();
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
        const DisplayProperties * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_DisplayProperties,&a0))
        {
            try
            {
            sipCpp = new sipDisplayProperties(*a0);
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


extern "C" {static void *forceConvertTo_DisplayProperties(PyObject *, int *);}
static void *forceConvertTo_DisplayProperties(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_DisplayProperties))
        return sipConvertToCpp(valobj,sipClass_DisplayProperties,iserrp);

    sipBadClass(sipNm_BALL_DisplayProperties);

    *iserrp = 1;

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedClassDef supers_DisplayProperties[] = {{206, 255, 1}};


static PyMethodDef methods_DisplayProperties[] = {
    {sipNm_BALL_apply, meth_DisplayProperties_apply, METH_VARARGS, NULL},
    {sipNm_BALL_coloringOptionsPressed, meth_DisplayProperties_coloringOptionsPressed, METH_VARARGS, NULL},
    {sipNm_BALL_coloringUpdatesChanged, meth_DisplayProperties_coloringUpdatesChanged, METH_VARARGS, NULL},
    {sipNm_BALL_countInstances, meth_DisplayProperties_countInstances, METH_VARARGS, NULL},
    {sipNm_BALL_createRepresentation, meth_DisplayProperties_createRepresentation, METH_VARARGS, NULL},
    {sipNm_BALL_createRepresentationMode, meth_DisplayProperties_createRepresentationMode, METH_VARARGS, NULL},
    {sipNm_BALL_editColor, meth_DisplayProperties_editColor, METH_VARARGS, NULL},
    {sipNm_BALL_editSelectionColor, meth_DisplayProperties_editSelectionColor, METH_VARARGS, NULL},
    {sipNm_BALL_enableCreationForNewMolecules, meth_DisplayProperties_enableCreationForNewMolecules, METH_VARARGS, NULL},
    {sipNm_BALL_getInstance, meth_DisplayProperties_getInstance, METH_VARARGS, NULL},
    {sipNm_BALL_getSettingsFromString, meth_DisplayProperties_getSettingsFromString, METH_VARARGS, NULL},
    {sipNm_BALL_modelOptionsPressed, meth_DisplayProperties_modelOptionsPressed, METH_VARARGS, NULL},
    {sipNm_BALL_modelUpdatesChanged, meth_DisplayProperties_modelUpdatesChanged, METH_VARARGS, NULL},
    {sipNm_BALL_modifyRepresentationMode, meth_DisplayProperties_modifyRepresentationMode, METH_VARARGS, NULL},
    {sipNm_BALL_precisionBoxChanged, meth_DisplayProperties_precisionBoxChanged, METH_VARARGS, NULL},
    {sipNm_BALL_precisionSliderChanged, meth_DisplayProperties_precisionSliderChanged, METH_VARARGS, NULL},
    {sipNm_BALL_selectColoringMethod, meth_DisplayProperties_selectColoringMethod, METH_VARARGS, NULL},
    {sipNm_BALL_selectMode, meth_DisplayProperties_selectMode, METH_VARARGS, NULL},
    {sipNm_BALL_selectModel, meth_DisplayProperties_selectModel, METH_VARARGS, NULL},
    {sipNm_BALL_setCustomColor, meth_DisplayProperties_setCustomColor, METH_VARARGS, NULL},
    {sipNm_BALL_setDrawingPrecision, meth_DisplayProperties_setDrawingPrecision, METH_VARARGS, NULL},
    {sipNm_BALL_setSurfaceDrawingPrecision, meth_DisplayProperties_setSurfaceDrawingPrecision, METH_VARARGS, NULL},
    {sipNm_BALL_setTransparency, meth_DisplayProperties_setTransparency, METH_VARARGS, NULL}
};


sipTypeDef sipType_BALL_DisplayProperties = {
    0,
    0,
    "BALL.DisplayProperties",
    0,
    {0, 0, 1},
    supers_DisplayProperties,
    0,
    23, methods_DisplayProperties,
    0, 0,
    0,
    init_DisplayProperties,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_DisplayProperties,
    cast_DisplayProperties,
    release_DisplayProperties,
    forceConvertTo_DisplayProperties,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
