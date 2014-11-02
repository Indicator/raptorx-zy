/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLMolecularStructure.h"

#include "sipBALLModularWidget.h"
#include "sipBALLMolecularStructure.h"
#include "sipBALLMainControl.h"
#include "sipBALLComposite.h"
#include "sipBALLForceField.h"
#include "sipBALLCharmmFF.h"
#include "sipBALLAmberFF.h"
#include "sipBALLPosition.h"
#include "sipBALLString.h"
#include "sipBALLFragmentDB.h"
#include "sipBALLINIFile.h"
#include "sipBALLEmbeddable.h"


sipMolecularStructure::sipMolecularStructure(): MolecularStructure(), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,11);
}

sipMolecularStructure::sipMolecularStructure(const MolecularStructure& a0): MolecularStructure(a0), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,11);
}

sipMolecularStructure::~sipMolecularStructure() throw()
{
    sipCommonDtor(sipPySelf);
}

void sipMolecularStructure::destroy() throw()
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

void sipMolecularStructure::clear() throw()
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

void sipMolecularStructure::checkMenu(MainControl& a0) throw()
{
    extern void sipVH_BALL_1(sip_gilstate_t,PyObject *,MainControl&);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[2],sipPySelf,NULL,sipNm_BALL_checkMenu);

    if (!meth)
    {
        MolecularStructure::checkMenu(a0);
        return;
    }

    sipVH_BALL_1(sipGILState,meth,a0);
}

void sipMolecularStructure::applyPreferences() throw()
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

void sipMolecularStructure::fetchPreferences(INIFile& a0) throw()
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

void sipMolecularStructure::writePreferences(INIFile& a0) throw()
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

void sipMolecularStructure::setStatusbarText(String a0,bool a1) throw()
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

void sipMolecularStructure::showHelp(const String& a0)
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

bool sipMolecularStructure::canHandle(const String& a0) const
{
    extern bool sipVH_BALL_8(sip_gilstate_t,PyObject *,const String&);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<sipMethodCache *>(&sipPyMethods[8]),sipPySelf,NULL,sipNm_BALL_canHandle);

    if (!meth)
        return ModularWidget::canHandle(a0);

    return sipVH_BALL_8(sipGILState,meth,a0);
}

bool sipMolecularStructure::openFile(const String& a0)
{
    extern bool sipVH_BALL_8(sip_gilstate_t,PyObject *,const String&);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[9],sipPySelf,NULL,sipNm_BALL_openFile);

    if (!meth)
        return ModularWidget::openFile(a0);

    return sipVH_BALL_8(sipGILState,meth,a0);
}

void sipMolecularStructure::registerThis() throw()
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


extern "C" {static PyObject *meth_MolecularStructure_countInstances(PyObject *, PyObject *);}
static PyObject *meth_MolecularStructure_countInstances(PyObject *,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        if (sipParseArgs(&sipArgsParsed,sipArgs,""))
        {
            int sipRes;

            try
            {
            sipRes = MolecularStructure::countInstances();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_MolecularStructure,sipNm_BALL_countInstances);

    return NULL;
}


extern "C" {static PyObject *meth_MolecularStructure_getInstance(PyObject *, PyObject *);}
static PyObject *meth_MolecularStructure_getInstance(PyObject *,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Position * a0;
        int a0State = 0;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"M1",sipMappedType_Position,&a0,&a0State))
        {
            MolecularStructure *sipRes;

            try
            {
            sipRes = MolecularStructure::getInstance(*a0);
            }
            catch (...)
            {

            sipReleaseMappedType(a0,sipMappedType_Position,a0State);
                sipRaiseUnknownException();
                return NULL;
            }

            sipReleaseMappedType(a0,sipMappedType_Position,a0State);

            return sipConvertFromInstance(sipRes,sipClass_MolecularStructure,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_MolecularStructure,sipNm_BALL_getInstance);

    return NULL;
}


extern "C" {static PyObject *meth_MolecularStructure_getAmberFF(PyObject *, PyObject *);}
static PyObject *meth_MolecularStructure_getAmberFF(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        MolecularStructure *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_MolecularStructure,&sipCpp))
        {
            AmberFF *sipRes;

            sipRes = &sipCpp->getAmberFF();

            return sipConvertFromInstance(sipRes,sipClass_AmberFF,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_MolecularStructure,sipNm_BALL_getAmberFF);

    return NULL;
}


extern "C" {static PyObject *meth_MolecularStructure_getCharmmFF(PyObject *, PyObject *);}
static PyObject *meth_MolecularStructure_getCharmmFF(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        MolecularStructure *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_MolecularStructure,&sipCpp))
        {
            CharmmFF *sipRes;

            sipRes = &sipCpp->getCharmmFF();

            return sipConvertFromInstance(sipRes,sipClass_CharmmFF,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_MolecularStructure,sipNm_BALL_getCharmmFF);

    return NULL;
}


extern "C" {static PyObject *meth_MolecularStructure_getForceField(PyObject *, PyObject *);}
static PyObject *meth_MolecularStructure_getForceField(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        MolecularStructure *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_MolecularStructure,&sipCpp))
        {
            ForceField *sipRes;

            sipRes = &sipCpp->getForceField();

            return sipConvertFromInstance(sipRes,sipClass_ForceField,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_MolecularStructure,sipNm_BALL_getForceField);

    return NULL;
}


extern "C" {static PyObject *meth_MolecularStructure_checkResidue(PyObject *, PyObject *);}
static PyObject *meth_MolecularStructure_checkResidue(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        MolecularStructure *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_MolecularStructure,&sipCpp))
        {
            bool sipRes;

            try
            {
            sipRes = sipCpp->checkResidue();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_MolecularStructure,sipNm_BALL_checkResidue);

    return NULL;
}


extern "C" {static PyObject *meth_MolecularStructure_centerCamera(PyObject *, PyObject *);}
static PyObject *meth_MolecularStructure_centerCamera(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Composite * a0;
        MolecularStructure *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ@",&sipSelf,sipClass_MolecularStructure,&sipCpp,sipClass_Composite,&a0))
        {
            try
            {
            sipCpp->centerCamera(a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_MolecularStructure,sipNm_BALL_centerCamera);

    return NULL;
}


extern "C" {static PyObject *meth_MolecularStructure_addHydrogens(PyObject *, PyObject *);}
static PyObject *meth_MolecularStructure_addHydrogens(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        MolecularStructure *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_MolecularStructure,&sipCpp))
        {
            try
            {
            sipCpp->addHydrogens();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_MolecularStructure,sipNm_BALL_addHydrogens);

    return NULL;
}


extern "C" {static PyObject *meth_MolecularStructure_MDSimulation(PyObject *, PyObject *);}
static PyObject *meth_MolecularStructure_MDSimulation(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        bool a0;
        MolecularStructure *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bb",&sipSelf,sipClass_MolecularStructure,&sipCpp,&a0))
        {
            try
            {
            sipCpp->MDSimulation(a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_MolecularStructure,sipNm_BALL_MDSimulation);

    return NULL;
}


extern "C" {static PyObject *meth_MolecularStructure_buildBonds(PyObject *, PyObject *);}
static PyObject *meth_MolecularStructure_buildBonds(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        MolecularStructure *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_MolecularStructure,&sipCpp))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_MolecularStructure,sipNm_BALL_buildBonds);

    return NULL;
}


extern "C" {static PyObject *meth_MolecularStructure_buildPeptide(PyObject *, PyObject *);}
static PyObject *meth_MolecularStructure_buildPeptide(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        MolecularStructure *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_MolecularStructure,&sipCpp))
        {
            try
            {
            sipCpp->buildPeptide();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_MolecularStructure,sipNm_BALL_buildPeptide);

    return NULL;
}


extern "C" {static PyObject *meth_MolecularStructure_calculateForceFieldEnergy(PyObject *, PyObject *);}
static PyObject *meth_MolecularStructure_calculateForceFieldEnergy(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        MolecularStructure *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_MolecularStructure,&sipCpp))
        {
            try
            {
            sipCpp->calculateForceFieldEnergy();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_MolecularStructure,sipNm_BALL_calculateForceFieldEnergy);

    return NULL;
}


extern "C" {static PyObject *meth_MolecularStructure_calculateHBonds(PyObject *, PyObject *);}
static PyObject *meth_MolecularStructure_calculateHBonds(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        MolecularStructure *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_MolecularStructure,&sipCpp))
        {
            try
            {
            sipCpp->calculateHBonds();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_MolecularStructure,sipNm_BALL_calculateHBonds);

    return NULL;
}


extern "C" {static PyObject *meth_MolecularStructure_calculateRMSD(PyObject *, PyObject *);}
static PyObject *meth_MolecularStructure_calculateRMSD(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        MolecularStructure *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_MolecularStructure,&sipCpp))
        {
            try
            {
            sipCpp->calculateRMSD();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_MolecularStructure,sipNm_BALL_calculateRMSD);

    return NULL;
}


extern "C" {static PyObject *meth_MolecularStructure_calculateSecondaryStructure(PyObject *, PyObject *);}
static PyObject *meth_MolecularStructure_calculateSecondaryStructure(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        MolecularStructure *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_MolecularStructure,&sipCpp))
        {
            try
            {
            sipCpp->calculateSecondaryStructure();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_MolecularStructure,sipNm_BALL_calculateSecondaryStructure);

    return NULL;
}


extern "C" {static PyObject *meth_MolecularStructure_checkMenu(PyObject *, PyObject *);}
static PyObject *meth_MolecularStructure_checkMenu(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        MainControl * a0;
        MolecularStructure *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_MolecularStructure,&sipCpp,sipClass_MainControl,&a0))
        {
            (sipSelfWasArg ? sipCpp->MolecularStructure::checkMenu(*a0) : sipCpp->checkMenu(*a0));

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_MolecularStructure,sipNm_BALL_checkMenu);

    return NULL;
}


extern "C" {static PyObject *meth_MolecularStructure_chooseAmberFF(PyObject *, PyObject *);}
static PyObject *meth_MolecularStructure_chooseAmberFF(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        MolecularStructure *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_MolecularStructure,&sipCpp))
        {
            try
            {
            sipCpp->chooseAmberFF();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_MolecularStructure,sipNm_BALL_chooseAmberFF);

    return NULL;
}


extern "C" {static PyObject *meth_MolecularStructure_chooseCharmmFF(PyObject *, PyObject *);}
static PyObject *meth_MolecularStructure_chooseCharmmFF(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        MolecularStructure *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_MolecularStructure,&sipCpp))
        {
            try
            {
            sipCpp->chooseCharmmFF();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_MolecularStructure,sipNm_BALL_chooseCharmmFF);

    return NULL;
}


extern "C" {static PyObject *meth_MolecularStructure_createGridFromDistance(PyObject *, PyObject *);}
static PyObject *meth_MolecularStructure_createGridFromDistance(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        MolecularStructure *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_MolecularStructure,&sipCpp))
        {
            try
            {
            sipCpp->createGridFromDistance();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_MolecularStructure,sipNm_BALL_createGridFromDistance);

    return NULL;
}


extern "C" {static PyObject *meth_MolecularStructure_mapProteins(PyObject *, PyObject *);}
static PyObject *meth_MolecularStructure_mapProteins(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        MolecularStructure *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_MolecularStructure,&sipCpp))
        {
            try
            {
            sipCpp->mapProteins();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_MolecularStructure,sipNm_BALL_mapProteins);

    return NULL;
}


extern "C" {static PyObject *meth_MolecularStructure_runMinimization(PyObject *, PyObject *);}
static PyObject *meth_MolecularStructure_runMinimization(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        bool a0;
        MolecularStructure *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bb",&sipSelf,sipClass_MolecularStructure,&sipCpp,&a0))
        {
            try
            {
            sipCpp->runMinimization(a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_MolecularStructure,sipNm_BALL_runMinimization);

    return NULL;
}


extern "C" {static PyObject *meth_MolecularStructure_setupForceField(PyObject *, PyObject *);}
static PyObject *meth_MolecularStructure_setupForceField(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        MolecularStructure *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_MolecularStructure,&sipCpp))
        {
            try
            {
            sipCpp->setupForceField();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_MolecularStructure,sipNm_BALL_setupForceField);

    return NULL;
}


extern "C" {static PyObject *meth_MolecularStructure_showAmberForceFieldOptions(PyObject *, PyObject *);}
static PyObject *meth_MolecularStructure_showAmberForceFieldOptions(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        MolecularStructure *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_MolecularStructure,&sipCpp))
        {
            try
            {
            sipCpp->showAmberForceFieldOptions();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_MolecularStructure,sipNm_BALL_showAmberForceFieldOptions);

    return NULL;
}


extern "C" {static PyObject *meth_MolecularStructure_showCharmmForceFieldOptions(PyObject *, PyObject *);}
static PyObject *meth_MolecularStructure_showCharmmForceFieldOptions(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        MolecularStructure *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_MolecularStructure,&sipCpp))
        {
            try
            {
            sipCpp->showCharmmForceFieldOptions();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_MolecularStructure,sipNm_BALL_showCharmmForceFieldOptions);

    return NULL;
}


extern "C" {static PyObject *meth_MolecularStructure_calculateFDPB(PyObject *, PyObject *);}
static PyObject *meth_MolecularStructure_calculateFDPB(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        bool a0 = 1;
        MolecularStructure *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B|b",&sipSelf,sipClass_MolecularStructure,&sipCpp,&a0))
        {
            try
            {
            sipCpp->calculateFDPB(a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_MolecularStructure,sipNm_BALL_calculateFDPB);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_MolecularStructure(void *, sipWrapperType *);}
static void *cast_MolecularStructure(void *ptr,sipWrapperType *targetClass)
{
    void *res;

    if (targetClass == sipClass_MolecularStructure)
        return ptr;

    if ((res = sipCast_ModularWidget((ModularWidget *)(MolecularStructure *)ptr,targetClass)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_MolecularStructure(void *, int);}
static void release_MolecularStructure(void *ptr,int state)
{
    if (state & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipMolecularStructure *>(ptr);
    else
        delete reinterpret_cast<MolecularStructure *>(ptr);
}


extern "C" {static void dealloc_MolecularStructure(sipWrapper *);}
static void dealloc_MolecularStructure(sipWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipMolecularStructure *>(sipSelf->u.cppPtr)->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_MolecularStructure(sipSelf->u.cppPtr,sipSelf->flags);
    }
}


extern "C" {static void *init_MolecularStructure(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_MolecularStructure(sipWrapper *sipSelf,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    sipMolecularStructure *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            try
            {
            sipCpp = new sipMolecularStructure();
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
        const MolecularStructure * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_MolecularStructure,&a0))
        {
            try
            {
            sipCpp = new sipMolecularStructure(*a0);
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


extern "C" {static void *forceConvertTo_MolecularStructure(PyObject *, int *);}
static void *forceConvertTo_MolecularStructure(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_MolecularStructure))
        return sipConvertToCpp(valobj,sipClass_MolecularStructure,iserrp);

    sipBadClass(sipNm_BALL_MolecularStructure);

    *iserrp = 1;

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedClassDef supers_MolecularStructure[] = {{206, 255, 1}};


static PyMethodDef methods_MolecularStructure[] = {
    {sipNm_BALL_MDSimulation, meth_MolecularStructure_MDSimulation, METH_VARARGS, NULL},
    {sipNm_BALL_addHydrogens, meth_MolecularStructure_addHydrogens, METH_VARARGS, NULL},
    {sipNm_BALL_buildBonds, meth_MolecularStructure_buildBonds, METH_VARARGS, NULL},
    {sipNm_BALL_buildPeptide, meth_MolecularStructure_buildPeptide, METH_VARARGS, NULL},
    {sipNm_BALL_calculateFDPB, meth_MolecularStructure_calculateFDPB, METH_VARARGS, NULL},
    {sipNm_BALL_calculateForceFieldEnergy, meth_MolecularStructure_calculateForceFieldEnergy, METH_VARARGS, NULL},
    {sipNm_BALL_calculateHBonds, meth_MolecularStructure_calculateHBonds, METH_VARARGS, NULL},
    {sipNm_BALL_calculateRMSD, meth_MolecularStructure_calculateRMSD, METH_VARARGS, NULL},
    {sipNm_BALL_calculateSecondaryStructure, meth_MolecularStructure_calculateSecondaryStructure, METH_VARARGS, NULL},
    {sipNm_BALL_centerCamera, meth_MolecularStructure_centerCamera, METH_VARARGS, NULL},
    {sipNm_BALL_checkMenu, meth_MolecularStructure_checkMenu, METH_VARARGS, NULL},
    {sipNm_BALL_checkResidue, meth_MolecularStructure_checkResidue, METH_VARARGS, NULL},
    {sipNm_BALL_chooseAmberFF, meth_MolecularStructure_chooseAmberFF, METH_VARARGS, NULL},
    {sipNm_BALL_chooseCharmmFF, meth_MolecularStructure_chooseCharmmFF, METH_VARARGS, NULL},
    {sipNm_BALL_countInstances, meth_MolecularStructure_countInstances, METH_VARARGS, NULL},
    {sipNm_BALL_createGridFromDistance, meth_MolecularStructure_createGridFromDistance, METH_VARARGS, NULL},
    {sipNm_BALL_getAmberFF, meth_MolecularStructure_getAmberFF, METH_VARARGS, NULL},
    {sipNm_BALL_getCharmmFF, meth_MolecularStructure_getCharmmFF, METH_VARARGS, NULL},
    {sipNm_BALL_getForceField, meth_MolecularStructure_getForceField, METH_VARARGS, NULL},
    {sipNm_BALL_getInstance, meth_MolecularStructure_getInstance, METH_VARARGS, NULL},
    {sipNm_BALL_mapProteins, meth_MolecularStructure_mapProteins, METH_VARARGS, NULL},
    {sipNm_BALL_runMinimization, meth_MolecularStructure_runMinimization, METH_VARARGS, NULL},
    {sipNm_BALL_setupForceField, meth_MolecularStructure_setupForceField, METH_VARARGS, NULL},
    {sipNm_BALL_showAmberForceFieldOptions, meth_MolecularStructure_showAmberForceFieldOptions, METH_VARARGS, NULL},
    {sipNm_BALL_showCharmmForceFieldOptions, meth_MolecularStructure_showCharmmForceFieldOptions, METH_VARARGS, NULL}
};


sipTypeDef sipType_BALL_MolecularStructure = {
    0,
    0,
    "BALL.MolecularStructure",
    0,
    {0, 0, 1},
    supers_MolecularStructure,
    0,
    25, methods_MolecularStructure,
    0, 0,
    0,
    init_MolecularStructure,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_MolecularStructure,
    cast_MolecularStructure,
    release_MolecularStructure,
    forceConvertTo_MolecularStructure,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
