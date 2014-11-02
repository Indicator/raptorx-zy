/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLMolecularFileDialog.h"

#include "sipBALLModularWidget.h"
#include "sipBALLMolecularFileDialog.h"
#include "sipBALLString.h"
#include "sipBALLSystem.h"
#include "sipBALLMainControl.h"
#include "sipBALLPosition.h"
#include "sipBALLFragmentDB.h"
#include "sipBALLINIFile.h"
#include "sipBALLEmbeddable.h"


sipMolecularFileDialog::sipMolecularFileDialog(): MolecularFileDialog(), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,16);
}

sipMolecularFileDialog::sipMolecularFileDialog(const MolecularFileDialog& a0): MolecularFileDialog(a0), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,16);
}

sipMolecularFileDialog::~sipMolecularFileDialog() throw()
{
    sipCommonDtor(sipPySelf);
}

void sipMolecularFileDialog::initializeWidget(MainControl& a0) throw()
{
    extern void sipVH_BALL_1(sip_gilstate_t,PyObject *,MainControl&);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipNm_BALL_initializeWidget);

    if (!meth)
    {
        MolecularFileDialog::initializeWidget(a0);
        return;
    }

    sipVH_BALL_1(sipGILState,meth,a0);
}

void sipMolecularFileDialog::readFiles()
{
    extern void sipVH_BALL_0(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,NULL,sipNm_BALL_readFiles);

    if (!meth)
    {
        MolecularFileDialog::readFiles();
        return;
    }

    sipVH_BALL_0(sipGILState,meth);
}

System * sipMolecularFileDialog::openMolecularFile(const String& a0) throw()
{
    extern System * sipVH_BALL_14(sip_gilstate_t,PyObject *,const String&);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[2],sipPySelf,NULL,sipNm_BALL_openMolecularFile);

    if (!meth)
        return MolecularFileDialog::openMolecularFile(a0);

    return sipVH_BALL_14(sipGILState,meth,a0);
}

System * sipMolecularFileDialog::openMolecularFile(const String& a0,const String& a1,const String& a2) throw()
{
    extern System * sipVH_BALL_13(sip_gilstate_t,PyObject *,const String&,const String&,const String&);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[3],sipPySelf,NULL,sipNm_BALL_openMolecularFile);

    if (!meth)
        return MolecularFileDialog::openMolecularFile(a0,a1,a2);

    return sipVH_BALL_13(sipGILState,meth,a0,a1,a2);
}

bool sipMolecularFileDialog::writeFile()
{
    extern bool sipVH_BALL_4(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[4],sipPySelf,NULL,sipNm_BALL_writeFile);

    if (!meth)
        return MolecularFileDialog::writeFile();

    return sipVH_BALL_4(sipGILState,meth);
}

void sipMolecularFileDialog::destroy() throw()
{
    extern void sipVH_BALL_0(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[5],sipPySelf,NULL,sipNm_BALL_destroy);

    if (!meth)
    {
        ModularWidget::destroy();
        return;
    }

    sipVH_BALL_0(sipGILState,meth);
}

void sipMolecularFileDialog::clear() throw()
{
    extern void sipVH_BALL_0(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[6],sipPySelf,NULL,sipNm_BALL_clear);

    if (!meth)
    {
        ModularWidget::clear();
        return;
    }

    sipVH_BALL_0(sipGILState,meth);
}

void sipMolecularFileDialog::checkMenu(MainControl& a0) throw()
{
    extern void sipVH_BALL_1(sip_gilstate_t,PyObject *,MainControl&);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[7],sipPySelf,NULL,sipNm_BALL_checkMenu);

    if (!meth)
    {
        ModularWidget::checkMenu(a0);
        return;
    }

    sipVH_BALL_1(sipGILState,meth,a0);
}

void sipMolecularFileDialog::applyPreferences() throw()
{
    extern void sipVH_BALL_0(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[8],sipPySelf,NULL,sipNm_BALL_applyPreferences);

    if (!meth)
    {
        ModularWidget::applyPreferences();
        return;
    }

    sipVH_BALL_0(sipGILState,meth);
}

void sipMolecularFileDialog::fetchPreferences(INIFile& a0) throw()
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

void sipMolecularFileDialog::writePreferences(INIFile& a0) throw()
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

void sipMolecularFileDialog::setStatusbarText(String a0,bool a1) throw()
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

void sipMolecularFileDialog::showHelp(const String& a0)
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

bool sipMolecularFileDialog::canHandle(const String& a0) const
{
    extern bool sipVH_BALL_8(sip_gilstate_t,PyObject *,const String&);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<sipMethodCache *>(&sipPyMethods[13]),sipPySelf,NULL,sipNm_BALL_canHandle);

    if (!meth)
        return ModularWidget::canHandle(a0);

    return sipVH_BALL_8(sipGILState,meth,a0);
}

bool sipMolecularFileDialog::openFile(const String& a0)
{
    extern bool sipVH_BALL_8(sip_gilstate_t,PyObject *,const String&);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[14],sipPySelf,NULL,sipNm_BALL_openFile);

    if (!meth)
        return ModularWidget::openFile(a0);

    return sipVH_BALL_8(sipGILState,meth,a0);
}

void sipMolecularFileDialog::registerThis() throw()
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


extern "C" {static PyObject *meth_MolecularFileDialog_countInstances(PyObject *, PyObject *);}
static PyObject *meth_MolecularFileDialog_countInstances(PyObject *,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        if (sipParseArgs(&sipArgsParsed,sipArgs,""))
        {
            int sipRes;

            try
            {
            sipRes = MolecularFileDialog::countInstances();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_MolecularFileDialog,sipNm_BALL_countInstances);

    return NULL;
}


extern "C" {static PyObject *meth_MolecularFileDialog_getInstance(PyObject *, PyObject *);}
static PyObject *meth_MolecularFileDialog_getInstance(PyObject *,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Position * a0;
        int a0State = 0;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"M1",sipMappedType_Position,&a0,&a0State))
        {
            MolecularFileDialog *sipRes;

            try
            {
            sipRes = MolecularFileDialog::getInstance(*a0);
            }
            catch (...)
            {

            sipReleaseMappedType(a0,sipMappedType_Position,a0State);
                sipRaiseUnknownException();
                return NULL;
            }

            sipReleaseMappedType(a0,sipMappedType_Position,a0State);

            return sipConvertFromInstance(sipRes,sipClass_MolecularFileDialog,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_MolecularFileDialog,sipNm_BALL_getInstance);

    return NULL;
}


extern "C" {static PyObject *meth_MolecularFileDialog_initializeWidget(PyObject *, PyObject *);}
static PyObject *meth_MolecularFileDialog_initializeWidget(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        MainControl * a0;
        MolecularFileDialog *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_MolecularFileDialog,&sipCpp,sipClass_MainControl,&a0))
        {
            (sipSelfWasArg ? sipCpp->MolecularFileDialog::initializeWidget(*a0) : sipCpp->initializeWidget(*a0));

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_MolecularFileDialog,sipNm_BALL_initializeWidget);

    return NULL;
}


extern "C" {static PyObject *meth_MolecularFileDialog_readFiles(PyObject *, PyObject *);}
static PyObject *meth_MolecularFileDialog_readFiles(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        MolecularFileDialog *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_MolecularFileDialog,&sipCpp))
        {
            try
            {
            (sipSelfWasArg ? sipCpp->MolecularFileDialog::readFiles() : sipCpp->readFiles());
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_MolecularFileDialog,sipNm_BALL_readFiles);

    return NULL;
}


extern "C" {static PyObject *meth_MolecularFileDialog_openMolecularFile(PyObject *, PyObject *);}
static PyObject *meth_MolecularFileDialog_openMolecularFile(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        const String * a0;
        int a0State = 0;
        MolecularFileDialog *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ1",&sipSelf,sipClass_MolecularFileDialog,&sipCpp,sipClass_String,&a0,&a0State))
        {
            System *sipRes;

            sipRes = (sipSelfWasArg ? sipCpp->MolecularFileDialog::openMolecularFile(*a0) : sipCpp->openMolecularFile(*a0));

            sipReleaseInstance(const_cast<String *>(a0),sipClass_String,a0State);

            return sipConvertFromInstance(sipRes,sipClass_System,NULL);
        }
    }

    {
        const String * a0;
        int a0State = 0;
        const String * a1;
        int a1State = 0;
        const String * a2;
        int a2State = 0;
        MolecularFileDialog *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ1J1J1",&sipSelf,sipClass_MolecularFileDialog,&sipCpp,sipClass_String,&a0,&a0State,sipClass_String,&a1,&a1State,sipClass_String,&a2,&a2State))
        {
            System *sipRes;

            sipRes = (sipSelfWasArg ? sipCpp->MolecularFileDialog::openMolecularFile(*a0,*a1,*a2) : sipCpp->openMolecularFile(*a0,*a1,*a2));

            sipReleaseInstance(const_cast<String *>(a0),sipClass_String,a0State);
            sipReleaseInstance(const_cast<String *>(a1),sipClass_String,a1State);
            sipReleaseInstance(const_cast<String *>(a2),sipClass_String,a2State);

            return sipConvertFromInstance(sipRes,sipClass_System,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_MolecularFileDialog,sipNm_BALL_openMolecularFile);

    return NULL;
}


extern "C" {static PyObject *meth_MolecularFileDialog_writeFile(PyObject *, PyObject *);}
static PyObject *meth_MolecularFileDialog_writeFile(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        MolecularFileDialog *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_MolecularFileDialog,&sipCpp))
        {
            bool sipRes;

            try
            {
            sipRes = (sipSelfWasArg ? sipCpp->MolecularFileDialog::writeFile() : sipCpp->writeFile());
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_MolecularFileDialog,sipNm_BALL_writeFile);

    return NULL;
}


extern "C" {static PyObject *meth_MolecularFileDialog_readPDBFile(PyObject *, PyObject *);}
static PyObject *meth_MolecularFileDialog_readPDBFile(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        String * a0;
        int a0State = 0;
        String * a1;
        int a1State = 0;
        MolecularFileDialog *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ1J1",&sipSelf,sipClass_MolecularFileDialog,&sipCpp,sipClass_String,&a0,&a0State,sipClass_String,&a1,&a1State))
        {
            System *sipRes;

            sipRes = sipCpp->readPDBFile(*a0,*a1);

            sipReleaseInstance(a0,sipClass_String,a0State);
            sipReleaseInstance(a1,sipClass_String,a1State);

            return sipConvertFromInstance(sipRes,sipClass_System,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_MolecularFileDialog,sipNm_BALL_readPDBFile);

    return NULL;
}


extern "C" {static PyObject *meth_MolecularFileDialog_readHINFile(PyObject *, PyObject *);}
static PyObject *meth_MolecularFileDialog_readHINFile(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        String * a0;
        int a0State = 0;
        String * a1;
        int a1State = 0;
        MolecularFileDialog *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ1J1",&sipSelf,sipClass_MolecularFileDialog,&sipCpp,sipClass_String,&a0,&a0State,sipClass_String,&a1,&a1State))
        {
            System *sipRes;

            sipRes = sipCpp->readHINFile(*a0,*a1);

            sipReleaseInstance(a0,sipClass_String,a0State);
            sipReleaseInstance(a1,sipClass_String,a1State);

            return sipConvertFromInstance(sipRes,sipClass_System,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_MolecularFileDialog,sipNm_BALL_readHINFile);

    return NULL;
}


extern "C" {static PyObject *meth_MolecularFileDialog_readMOL2File(PyObject *, PyObject *);}
static PyObject *meth_MolecularFileDialog_readMOL2File(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        String * a0;
        int a0State = 0;
        String * a1;
        int a1State = 0;
        MolecularFileDialog *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ1J1",&sipSelf,sipClass_MolecularFileDialog,&sipCpp,sipClass_String,&a0,&a0State,sipClass_String,&a1,&a1State))
        {
            System *sipRes;

            sipRes = sipCpp->readMOL2File(*a0,*a1);

            sipReleaseInstance(a0,sipClass_String,a0State);
            sipReleaseInstance(a1,sipClass_String,a1State);

            return sipConvertFromInstance(sipRes,sipClass_System,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_MolecularFileDialog,sipNm_BALL_readMOL2File);

    return NULL;
}


extern "C" {static PyObject *meth_MolecularFileDialog_readMOLFile(PyObject *, PyObject *);}
static PyObject *meth_MolecularFileDialog_readMOLFile(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        String * a0;
        int a0State = 0;
        String * a1;
        int a1State = 0;
        MolecularFileDialog *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ1J1",&sipSelf,sipClass_MolecularFileDialog,&sipCpp,sipClass_String,&a0,&a0State,sipClass_String,&a1,&a1State))
        {
            System *sipRes;

            sipRes = sipCpp->readMOLFile(*a0,*a1);

            sipReleaseInstance(a0,sipClass_String,a0State);
            sipReleaseInstance(a1,sipClass_String,a1State);

            return sipConvertFromInstance(sipRes,sipClass_System,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_MolecularFileDialog,sipNm_BALL_readMOLFile);

    return NULL;
}


extern "C" {static PyObject *meth_MolecularFileDialog_readSDFile(PyObject *, PyObject *);}
static PyObject *meth_MolecularFileDialog_readSDFile(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        String * a0;
        int a0State = 0;
        String * a1;
        int a1State = 0;
        MolecularFileDialog *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ1J1",&sipSelf,sipClass_MolecularFileDialog,&sipCpp,sipClass_String,&a0,&a0State,sipClass_String,&a1,&a1State))
        {
            System *sipRes;

            sipRes = sipCpp->readSDFile(*a0,*a1);

            sipReleaseInstance(a0,sipClass_String,a0State);
            sipReleaseInstance(a1,sipClass_String,a1State);

            return sipConvertFromInstance(sipRes,sipClass_System,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_MolecularFileDialog,sipNm_BALL_readSDFile);

    return NULL;
}


extern "C" {static PyObject *meth_MolecularFileDialog_writePDBFile(PyObject *, PyObject *);}
static PyObject *meth_MolecularFileDialog_writePDBFile(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        String * a0;
        int a0State = 0;
        const System * a1;
        MolecularFileDialog *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ1JA",&sipSelf,sipClass_MolecularFileDialog,&sipCpp,sipClass_String,&a0,&a0State,sipClass_System,&a1))
        {
            bool sipRes;

            sipRes = sipCpp->writePDBFile(*a0,*a1);

            sipReleaseInstance(a0,sipClass_String,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_MolecularFileDialog,sipNm_BALL_writePDBFile);

    return NULL;
}


extern "C" {static PyObject *meth_MolecularFileDialog_writeHINFile(PyObject *, PyObject *);}
static PyObject *meth_MolecularFileDialog_writeHINFile(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        String * a0;
        int a0State = 0;
        const System * a1;
        MolecularFileDialog *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ1JA",&sipSelf,sipClass_MolecularFileDialog,&sipCpp,sipClass_String,&a0,&a0State,sipClass_System,&a1))
        {
            bool sipRes;

            sipRes = sipCpp->writeHINFile(*a0,*a1);

            sipReleaseInstance(a0,sipClass_String,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_MolecularFileDialog,sipNm_BALL_writeHINFile);

    return NULL;
}


extern "C" {static PyObject *meth_MolecularFileDialog_writeMOLFile(PyObject *, PyObject *);}
static PyObject *meth_MolecularFileDialog_writeMOLFile(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        String * a0;
        int a0State = 0;
        const System * a1;
        MolecularFileDialog *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ1JA",&sipSelf,sipClass_MolecularFileDialog,&sipCpp,sipClass_String,&a0,&a0State,sipClass_System,&a1))
        {
            bool sipRes;

            sipRes = sipCpp->writeMOLFile(*a0,*a1);

            sipReleaseInstance(a0,sipClass_String,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_MolecularFileDialog,sipNm_BALL_writeMOLFile);

    return NULL;
}


extern "C" {static PyObject *meth_MolecularFileDialog_writeMOL2File(PyObject *, PyObject *);}
static PyObject *meth_MolecularFileDialog_writeMOL2File(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        String * a0;
        int a0State = 0;
        const System * a1;
        MolecularFileDialog *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ1JA",&sipSelf,sipClass_MolecularFileDialog,&sipCpp,sipClass_String,&a0,&a0State,sipClass_System,&a1))
        {
            bool sipRes;

            sipRes = sipCpp->writeMOL2File(*a0,*a1);

            sipReleaseInstance(a0,sipClass_String,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_MolecularFileDialog,sipNm_BALL_writeMOL2File);

    return NULL;
}


extern "C" {static PyObject *meth_MolecularFileDialog_writeSDFile(PyObject *, PyObject *);}
static PyObject *meth_MolecularFileDialog_writeSDFile(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        String * a0;
        int a0State = 0;
        const System * a1;
        MolecularFileDialog *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ1JA",&sipSelf,sipClass_MolecularFileDialog,&sipCpp,sipClass_String,&a0,&a0State,sipClass_System,&a1))
        {
            bool sipRes;

            sipRes = sipCpp->writeSDFile(*a0,*a1);

            sipReleaseInstance(a0,sipClass_String,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_MolecularFileDialog,sipNm_BALL_writeSDFile);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_MolecularFileDialog(void *, sipWrapperType *);}
static void *cast_MolecularFileDialog(void *ptr,sipWrapperType *targetClass)
{
    void *res;

    if (targetClass == sipClass_MolecularFileDialog)
        return ptr;

    if ((res = sipCast_ModularWidget((ModularWidget *)(MolecularFileDialog *)ptr,targetClass)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_MolecularFileDialog(void *, int);}
static void release_MolecularFileDialog(void *ptr,int state)
{
    if (state & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipMolecularFileDialog *>(ptr);
    else
        delete reinterpret_cast<MolecularFileDialog *>(ptr);
}


extern "C" {static void dealloc_MolecularFileDialog(sipWrapper *);}
static void dealloc_MolecularFileDialog(sipWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipMolecularFileDialog *>(sipSelf->u.cppPtr)->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_MolecularFileDialog(sipSelf->u.cppPtr,sipSelf->flags);
    }
}


extern "C" {static void *init_MolecularFileDialog(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_MolecularFileDialog(sipWrapper *sipSelf,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    sipMolecularFileDialog *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            try
            {
            sipCpp = new sipMolecularFileDialog();
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
        const MolecularFileDialog * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_MolecularFileDialog,&a0))
        {
            try
            {
            sipCpp = new sipMolecularFileDialog(*a0);
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


extern "C" {static void *forceConvertTo_MolecularFileDialog(PyObject *, int *);}
static void *forceConvertTo_MolecularFileDialog(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_MolecularFileDialog))
        return sipConvertToCpp(valobj,sipClass_MolecularFileDialog,iserrp);

    sipBadClass(sipNm_BALL_MolecularFileDialog);

    *iserrp = 1;

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedClassDef supers_MolecularFileDialog[] = {{206, 255, 1}};


static PyMethodDef methods_MolecularFileDialog[] = {
    {sipNm_BALL_countInstances, meth_MolecularFileDialog_countInstances, METH_VARARGS, NULL},
    {sipNm_BALL_getInstance, meth_MolecularFileDialog_getInstance, METH_VARARGS, NULL},
    {sipNm_BALL_initializeWidget, meth_MolecularFileDialog_initializeWidget, METH_VARARGS, NULL},
    {sipNm_BALL_openMolecularFile, meth_MolecularFileDialog_openMolecularFile, METH_VARARGS, NULL},
    {sipNm_BALL_readFiles, meth_MolecularFileDialog_readFiles, METH_VARARGS, NULL},
    {sipNm_BALL_readHINFile, meth_MolecularFileDialog_readHINFile, METH_VARARGS, NULL},
    {sipNm_BALL_readMOL2File, meth_MolecularFileDialog_readMOL2File, METH_VARARGS, NULL},
    {sipNm_BALL_readMOLFile, meth_MolecularFileDialog_readMOLFile, METH_VARARGS, NULL},
    {sipNm_BALL_readPDBFile, meth_MolecularFileDialog_readPDBFile, METH_VARARGS, NULL},
    {sipNm_BALL_readSDFile, meth_MolecularFileDialog_readSDFile, METH_VARARGS, NULL},
    {sipNm_BALL_writeFile, meth_MolecularFileDialog_writeFile, METH_VARARGS, NULL},
    {sipNm_BALL_writeHINFile, meth_MolecularFileDialog_writeHINFile, METH_VARARGS, NULL},
    {sipNm_BALL_writeMOL2File, meth_MolecularFileDialog_writeMOL2File, METH_VARARGS, NULL},
    {sipNm_BALL_writeMOLFile, meth_MolecularFileDialog_writeMOLFile, METH_VARARGS, NULL},
    {sipNm_BALL_writePDBFile, meth_MolecularFileDialog_writePDBFile, METH_VARARGS, NULL},
    {sipNm_BALL_writeSDFile, meth_MolecularFileDialog_writeSDFile, METH_VARARGS, NULL}
};


sipTypeDef sipType_BALL_MolecularFileDialog = {
    0,
    0,
    "BALL.MolecularFileDialog",
    0,
    {0, 0, 1},
    supers_MolecularFileDialog,
    0,
    16, methods_MolecularFileDialog,
    0, 0,
    0,
    init_MolecularFileDialog,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_MolecularFileDialog,
    cast_MolecularFileDialog,
    release_MolecularFileDialog,
    forceConvertTo_MolecularFileDialog,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
