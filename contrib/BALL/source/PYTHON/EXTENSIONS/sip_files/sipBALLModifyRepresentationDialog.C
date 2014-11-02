/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLModifyRepresentationDialog.h"

#include "sipBALLModularWidget.h"
#include "sipBALLModifyRepresentationDialog.h"
#include "sipBALLRegularData3D.h"
#include "sipBALLRepresentation.h"
#include "sipBALLPosition.h"
#include "sipBALLString.h"
#include "sipBALLFragmentDB.h"
#include "sipBALLMainControl.h"
#include "sipBALLINIFile.h"
#include "sipBALLEmbeddable.h"


sipModifyRepresentationDialog::sipModifyRepresentationDialog(): ModifyRepresentationDialog(), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,11);
}

sipModifyRepresentationDialog::sipModifyRepresentationDialog(const ModifyRepresentationDialog& a0): ModifyRepresentationDialog(a0), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,11);
}

sipModifyRepresentationDialog::~sipModifyRepresentationDialog() throw()
{
    sipCommonDtor(sipPySelf);
}

void sipModifyRepresentationDialog::destroy() throw()
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

void sipModifyRepresentationDialog::clear() throw()
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

void sipModifyRepresentationDialog::checkMenu(MainControl& a0) throw()
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

void sipModifyRepresentationDialog::applyPreferences() throw()
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

void sipModifyRepresentationDialog::fetchPreferences(INIFile& a0) throw()
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

void sipModifyRepresentationDialog::writePreferences(INIFile& a0) throw()
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

void sipModifyRepresentationDialog::setStatusbarText(String a0,bool a1) throw()
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

void sipModifyRepresentationDialog::showHelp(const String& a0)
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

bool sipModifyRepresentationDialog::canHandle(const String& a0) const
{
    extern bool sipVH_BALL_8(sip_gilstate_t,PyObject *,const String&);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<sipMethodCache *>(&sipPyMethods[8]),sipPySelf,NULL,sipNm_BALL_canHandle);

    if (!meth)
        return ModularWidget::canHandle(a0);

    return sipVH_BALL_8(sipGILState,meth,a0);
}

bool sipModifyRepresentationDialog::openFile(const String& a0)
{
    extern bool sipVH_BALL_8(sip_gilstate_t,PyObject *,const String&);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[9],sipPySelf,NULL,sipNm_BALL_openFile);

    if (!meth)
        return ModularWidget::openFile(a0);

    return sipVH_BALL_8(sipGILState,meth,a0);
}

void sipModifyRepresentationDialog::registerThis() throw()
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


extern "C" {static PyObject *meth_ModifyRepresentationDialog_countInstances(PyObject *, PyObject *);}
static PyObject *meth_ModifyRepresentationDialog_countInstances(PyObject *,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        if (sipParseArgs(&sipArgsParsed,sipArgs,""))
        {
            int sipRes;

            try
            {
            sipRes = ModifyRepresentationDialog::countInstances();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_ModifyRepresentationDialog,sipNm_BALL_countInstances);

    return NULL;
}


extern "C" {static PyObject *meth_ModifyRepresentationDialog_getInstance(PyObject *, PyObject *);}
static PyObject *meth_ModifyRepresentationDialog_getInstance(PyObject *,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Position * a0;
        int a0State = 0;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"M1",sipMappedType_Position,&a0,&a0State))
        {
            ModifyRepresentationDialog *sipRes;

            try
            {
            sipRes = ModifyRepresentationDialog::getInstance(*a0);
            }
            catch (...)
            {

            sipReleaseMappedType(a0,sipMappedType_Position,a0State);
                sipRaiseUnknownException();
                return NULL;
            }

            sipReleaseMappedType(a0,sipMappedType_Position,a0State);

            return sipConvertFromInstance(sipRes,sipClass_ModifyRepresentationDialog,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_ModifyRepresentationDialog,sipNm_BALL_getInstance);

    return NULL;
}


extern "C" {static PyObject *meth_ModifyRepresentationDialog_setRepresentation(PyObject *, PyObject *);}
static PyObject *meth_ModifyRepresentationDialog_setRepresentation(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Representation * a0;
        ModifyRepresentationDialog *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ@",&sipSelf,sipClass_ModifyRepresentationDialog,&sipCpp,sipClass_Representation,&a0))
        {
            sipCpp->setRepresentation(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_ModifyRepresentationDialog,sipNm_BALL_setRepresentation);

    return NULL;
}


extern "C" {static PyObject *meth_ModifyRepresentationDialog_setGrid(PyObject *, PyObject *);}
static PyObject *meth_ModifyRepresentationDialog_setGrid(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        RegularData3D * a0;
        ModifyRepresentationDialog *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ@",&sipSelf,sipClass_ModifyRepresentationDialog,&sipCpp,sipClass_RegularData3D,&a0))
        {
            sipCpp->setGrid(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_ModifyRepresentationDialog,sipNm_BALL_setGrid);

    return NULL;
}


extern "C" {static PyObject *meth_ModifyRepresentationDialog_setMinValue(PyObject *, PyObject *);}
static PyObject *meth_ModifyRepresentationDialog_setMinValue(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        float a0;
        ModifyRepresentationDialog *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bf",&sipSelf,sipClass_ModifyRepresentationDialog,&sipCpp,&a0))
        {
            try
            {
            sipCpp->setMinValue(a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_ModifyRepresentationDialog,sipNm_BALL_setMinValue);

    return NULL;
}


extern "C" {static PyObject *meth_ModifyRepresentationDialog_setMaxValue(PyObject *, PyObject *);}
static PyObject *meth_ModifyRepresentationDialog_setMaxValue(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        float a0;
        ModifyRepresentationDialog *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bf",&sipSelf,sipClass_ModifyRepresentationDialog,&sipCpp,&a0))
        {
            try
            {
            sipCpp->setMaxValue(a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_ModifyRepresentationDialog,sipNm_BALL_setMaxValue);

    return NULL;
}


extern "C" {static PyObject *meth_ModifyRepresentationDialog_setMidValue(PyObject *, PyObject *);}
static PyObject *meth_ModifyRepresentationDialog_setMidValue(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        float a0;
        ModifyRepresentationDialog *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bf",&sipSelf,sipClass_ModifyRepresentationDialog,&sipCpp,&a0))
        {
            try
            {
            sipCpp->setMidValue(a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_ModifyRepresentationDialog,sipNm_BALL_setMidValue);

    return NULL;
}


extern "C" {static PyObject *meth_ModifyRepresentationDialog_setSplitRadius(PyObject *, PyObject *);}
static PyObject *meth_ModifyRepresentationDialog_setSplitRadius(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        float a0;
        ModifyRepresentationDialog *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bf",&sipSelf,sipClass_ModifyRepresentationDialog,&sipCpp,&a0))
        {
            try
            {
            sipCpp->setSplitRadius(a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_ModifyRepresentationDialog,sipNm_BALL_setSplitRadius);

    return NULL;
}


extern "C" {static PyObject *meth_ModifyRepresentationDialog_applyPressed(PyObject *, PyObject *);}
static PyObject *meth_ModifyRepresentationDialog_applyPressed(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        ModifyRepresentationDialog *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_ModifyRepresentationDialog,&sipCpp))
        {
            try
            {
            sipCpp->applyPressed();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_ModifyRepresentationDialog,sipNm_BALL_applyPressed);

    return NULL;
}


extern "C" {static PyObject *meth_ModifyRepresentationDialog_cancelPressed(PyObject *, PyObject *);}
static PyObject *meth_ModifyRepresentationDialog_cancelPressed(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        ModifyRepresentationDialog *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_ModifyRepresentationDialog,&sipCpp))
        {
            try
            {
            sipCpp->cancelPressed();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_ModifyRepresentationDialog,sipNm_BALL_cancelPressed);

    return NULL;
}


extern "C" {static PyObject *meth_ModifyRepresentationDialog_maxPressed(PyObject *, PyObject *);}
static PyObject *meth_ModifyRepresentationDialog_maxPressed(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        ModifyRepresentationDialog *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_ModifyRepresentationDialog,&sipCpp))
        {
            try
            {
            sipCpp->maxPressed();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_ModifyRepresentationDialog,sipNm_BALL_maxPressed);

    return NULL;
}


extern "C" {static PyObject *meth_ModifyRepresentationDialog_midPressed(PyObject *, PyObject *);}
static PyObject *meth_ModifyRepresentationDialog_midPressed(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        ModifyRepresentationDialog *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_ModifyRepresentationDialog,&sipCpp))
        {
            try
            {
            sipCpp->midPressed();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_ModifyRepresentationDialog,sipNm_BALL_midPressed);

    return NULL;
}


extern "C" {static PyObject *meth_ModifyRepresentationDialog_minPressed(PyObject *, PyObject *);}
static PyObject *meth_ModifyRepresentationDialog_minPressed(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        ModifyRepresentationDialog *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_ModifyRepresentationDialog,&sipCpp))
        {
            try
            {
            sipCpp->minPressed();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_ModifyRepresentationDialog,sipNm_BALL_minPressed);

    return NULL;
}


extern "C" {static PyObject *meth_ModifyRepresentationDialog_minMinPressed(PyObject *, PyObject *);}
static PyObject *meth_ModifyRepresentationDialog_minMinPressed(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        ModifyRepresentationDialog *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_ModifyRepresentationDialog,&sipCpp))
        {
            try
            {
            sipCpp->minMinPressed();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_ModifyRepresentationDialog,sipNm_BALL_minMinPressed);

    return NULL;
}


extern "C" {static PyObject *meth_ModifyRepresentationDialog_maxMaxPressed(PyObject *, PyObject *);}
static PyObject *meth_ModifyRepresentationDialog_maxMaxPressed(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        ModifyRepresentationDialog *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_ModifyRepresentationDialog,&sipCpp))
        {
            try
            {
            sipCpp->maxMaxPressed();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_ModifyRepresentationDialog,sipNm_BALL_maxMaxPressed);

    return NULL;
}


extern "C" {static PyObject *meth_ModifyRepresentationDialog_tabChanged(PyObject *, PyObject *);}
static PyObject *meth_ModifyRepresentationDialog_tabChanged(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        ModifyRepresentationDialog *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_ModifyRepresentationDialog,&sipCpp))
        {
            try
            {
            sipCpp->tabChanged();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_ModifyRepresentationDialog,sipNm_BALL_tabChanged);

    return NULL;
}


extern "C" {static PyObject *meth_ModifyRepresentationDialog_autoScale(PyObject *, PyObject *);}
static PyObject *meth_ModifyRepresentationDialog_autoScale(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        ModifyRepresentationDialog *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_ModifyRepresentationDialog,&sipCpp))
        {
            try
            {
            sipCpp->autoScale();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_ModifyRepresentationDialog,sipNm_BALL_autoScale);

    return NULL;
}


extern "C" {static PyObject *meth_ModifyRepresentationDialog_choosePressed(PyObject *, PyObject *);}
static PyObject *meth_ModifyRepresentationDialog_choosePressed(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        ModifyRepresentationDialog *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_ModifyRepresentationDialog,&sipCpp))
        {
            try
            {
            sipCpp->choosePressed();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_ModifyRepresentationDialog,sipNm_BALL_choosePressed);

    return NULL;
}


extern "C" {static PyObject *meth_ModifyRepresentationDialog_gridSelected(PyObject *, PyObject *);}
static PyObject *meth_ModifyRepresentationDialog_gridSelected(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        ModifyRepresentationDialog *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_ModifyRepresentationDialog,&sipCpp))
        {
            try
            {
            sipCpp->gridSelected();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_ModifyRepresentationDialog,sipNm_BALL_gridSelected);

    return NULL;
}


extern "C" {static PyObject *meth_ModifyRepresentationDialog_show(PyObject *, PyObject *);}
static PyObject *meth_ModifyRepresentationDialog_show(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        ModifyRepresentationDialog *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_ModifyRepresentationDialog,&sipCpp))
        {
            try
            {
            sipCpp->show();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_ModifyRepresentationDialog,sipNm_BALL_show);

    return NULL;
}


extern "C" {static PyObject *meth_ModifyRepresentationDialog_applySplit(PyObject *, PyObject *);}
static PyObject *meth_ModifyRepresentationDialog_applySplit(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        ModifyRepresentationDialog *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_ModifyRepresentationDialog,&sipCpp))
        {
            try
            {
            sipCpp->applySplit();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_ModifyRepresentationDialog,sipNm_BALL_applySplit);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_ModifyRepresentationDialog(void *, sipWrapperType *);}
static void *cast_ModifyRepresentationDialog(void *ptr,sipWrapperType *targetClass)
{
    void *res;

    if (targetClass == sipClass_ModifyRepresentationDialog)
        return ptr;

    if ((res = sipCast_ModularWidget((ModularWidget *)(ModifyRepresentationDialog *)ptr,targetClass)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_ModifyRepresentationDialog(void *, int);}
static void release_ModifyRepresentationDialog(void *ptr,int state)
{
    if (state & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipModifyRepresentationDialog *>(ptr);
    else
        delete reinterpret_cast<ModifyRepresentationDialog *>(ptr);
}


extern "C" {static void dealloc_ModifyRepresentationDialog(sipWrapper *);}
static void dealloc_ModifyRepresentationDialog(sipWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipModifyRepresentationDialog *>(sipSelf->u.cppPtr)->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_ModifyRepresentationDialog(sipSelf->u.cppPtr,sipSelf->flags);
    }
}


extern "C" {static void *init_ModifyRepresentationDialog(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_ModifyRepresentationDialog(sipWrapper *sipSelf,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    sipModifyRepresentationDialog *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            try
            {
            sipCpp = new sipModifyRepresentationDialog();
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
        const ModifyRepresentationDialog * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_ModifyRepresentationDialog,&a0))
        {
            try
            {
            sipCpp = new sipModifyRepresentationDialog(*a0);
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


extern "C" {static void *forceConvertTo_ModifyRepresentationDialog(PyObject *, int *);}
static void *forceConvertTo_ModifyRepresentationDialog(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_ModifyRepresentationDialog))
        return sipConvertToCpp(valobj,sipClass_ModifyRepresentationDialog,iserrp);

    sipBadClass(sipNm_BALL_ModifyRepresentationDialog);

    *iserrp = 1;

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedClassDef supers_ModifyRepresentationDialog[] = {{206, 255, 1}};


static PyMethodDef methods_ModifyRepresentationDialog[] = {
    {sipNm_BALL_applyPressed, meth_ModifyRepresentationDialog_applyPressed, METH_VARARGS, NULL},
    {sipNm_BALL_applySplit, meth_ModifyRepresentationDialog_applySplit, METH_VARARGS, NULL},
    {sipNm_BALL_autoScale, meth_ModifyRepresentationDialog_autoScale, METH_VARARGS, NULL},
    {sipNm_BALL_cancelPressed, meth_ModifyRepresentationDialog_cancelPressed, METH_VARARGS, NULL},
    {sipNm_BALL_choosePressed, meth_ModifyRepresentationDialog_choosePressed, METH_VARARGS, NULL},
    {sipNm_BALL_countInstances, meth_ModifyRepresentationDialog_countInstances, METH_VARARGS, NULL},
    {sipNm_BALL_getInstance, meth_ModifyRepresentationDialog_getInstance, METH_VARARGS, NULL},
    {sipNm_BALL_gridSelected, meth_ModifyRepresentationDialog_gridSelected, METH_VARARGS, NULL},
    {sipNm_BALL_maxMaxPressed, meth_ModifyRepresentationDialog_maxMaxPressed, METH_VARARGS, NULL},
    {sipNm_BALL_maxPressed, meth_ModifyRepresentationDialog_maxPressed, METH_VARARGS, NULL},
    {sipNm_BALL_midPressed, meth_ModifyRepresentationDialog_midPressed, METH_VARARGS, NULL},
    {sipNm_BALL_minMinPressed, meth_ModifyRepresentationDialog_minMinPressed, METH_VARARGS, NULL},
    {sipNm_BALL_minPressed, meth_ModifyRepresentationDialog_minPressed, METH_VARARGS, NULL},
    {sipNm_BALL_setGrid, meth_ModifyRepresentationDialog_setGrid, METH_VARARGS, NULL},
    {sipNm_BALL_setMaxValue, meth_ModifyRepresentationDialog_setMaxValue, METH_VARARGS, NULL},
    {sipNm_BALL_setMidValue, meth_ModifyRepresentationDialog_setMidValue, METH_VARARGS, NULL},
    {sipNm_BALL_setMinValue, meth_ModifyRepresentationDialog_setMinValue, METH_VARARGS, NULL},
    {sipNm_BALL_setRepresentation, meth_ModifyRepresentationDialog_setRepresentation, METH_VARARGS, NULL},
    {sipNm_BALL_setSplitRadius, meth_ModifyRepresentationDialog_setSplitRadius, METH_VARARGS, NULL},
    {sipNm_BALL_show, meth_ModifyRepresentationDialog_show, METH_VARARGS, NULL},
    {sipNm_BALL_tabChanged, meth_ModifyRepresentationDialog_tabChanged, METH_VARARGS, NULL}
};


sipTypeDef sipType_BALL_ModifyRepresentationDialog = {
    0,
    0,
    "BALL.ModifyRepresentationDialog",
    0,
    {0, 0, 1},
    supers_ModifyRepresentationDialog,
    0,
    21, methods_ModifyRepresentationDialog,
    0, 0,
    0,
    init_ModifyRepresentationDialog,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_ModifyRepresentationDialog,
    cast_ModifyRepresentationDialog,
    release_ModifyRepresentationDialog,
    forceConvertTo_ModifyRepresentationDialog,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
