/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLSnapShotManager.h"

#include "sipBALLFileCannotWrite.h"
#include "sipBALLOptions.h"
#include "sipBALLSystem.h"
#include "sipBALLForceField.h"
#include "sipBALLTrajectoryFile.h"
#include "sipBALLSnapShotManager.h"


sipSnapShotManager::sipSnapShotManager() throw(): SnapShotManager(), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,9);
}

sipSnapShotManager::sipSnapShotManager(System *a0,const ForceField *a1,TrajectoryFile *a2) throw(): SnapShotManager(a0,a1,a2), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,9);
}

sipSnapShotManager::sipSnapShotManager(System *a0,const ForceField *a1,const Options& a2,TrajectoryFile *a3) throw(): SnapShotManager(a0,a1,a2,a3), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,9);
}

sipSnapShotManager::sipSnapShotManager(const SnapShotManager& a0) throw(): SnapShotManager(a0), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,9);
}

sipSnapShotManager::~sipSnapShotManager() throw()
{
    sipCommonDtor(sipPySelf);
}

bool sipSnapShotManager::setup() throw()
{
    extern bool sipVH_BALL_4(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipNm_BALL_setup);

    if (!meth)
        return SnapShotManager::setup();

    return sipVH_BALL_4(sipGILState,meth);
}

void sipSnapShotManager::clear() throw()
{
    extern void sipVH_BALL_0(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,NULL,sipNm_BALL_clear);

    if (!meth)
    {
        SnapShotManager::clear();
        return;
    }

    sipVH_BALL_0(sipGILState,meth);
}

bool sipSnapShotManager::isValid() const throw()
{
    extern bool sipVH_BALL_4(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<sipMethodCache *>(&sipPyMethods[2]),sipPySelf,NULL,sipNm_BALL_isValid);

    if (!meth)
        return SnapShotManager::isValid();

    return sipVH_BALL_4(sipGILState,meth);
}

void sipSnapShotManager::takeSnapShot() throw(File::CannotWrite)
{
    extern void sipVH_BALL_0(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[3],sipPySelf,NULL,sipNm_BALL_takeSnapShot);

    if (!meth)
    {
        SnapShotManager::takeSnapShot();
        return;
    }

    sipVH_BALL_0(sipGILState,meth);
}

bool sipSnapShotManager::applySnapShot(int a0) throw()
{
    extern bool sipVH_BALL_38(sip_gilstate_t,PyObject *,int);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[4],sipPySelf,NULL,sipNm_BALL_applySnapShot);

    if (!meth)
        return SnapShotManager::applySnapShot(a0);

    return sipVH_BALL_38(sipGILState,meth,a0);
}

bool sipSnapShotManager::applyFirstSnapShot() throw()
{
    extern bool sipVH_BALL_4(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[5],sipPySelf,NULL,sipNm_BALL_applyFirstSnapShot);

    if (!meth)
        return SnapShotManager::applyFirstSnapShot();

    return sipVH_BALL_4(sipGILState,meth);
}

bool sipSnapShotManager::applyNextSnapShot() throw()
{
    extern bool sipVH_BALL_4(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[6],sipPySelf,NULL,sipNm_BALL_applyNextSnapShot);

    if (!meth)
        return SnapShotManager::applyNextSnapShot();

    return sipVH_BALL_4(sipGILState,meth);
}

bool sipSnapShotManager::applyLastSnapShot() throw()
{
    extern bool sipVH_BALL_4(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[7],sipPySelf,NULL,sipNm_BALL_applyLastSnapShot);

    if (!meth)
        return SnapShotManager::applyLastSnapShot();

    return sipVH_BALL_4(sipGILState,meth);
}

void sipSnapShotManager::flushToDisk() throw(File::CannotWrite)
{
    extern void sipVH_BALL_0(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[8],sipPySelf,NULL,sipNm_BALL_flushToDisk);

    if (!meth)
    {
        SnapShotManager::flushToDisk();
        return;
    }

    sipVH_BALL_0(sipGILState,meth);
}


extern "C" {static PyObject *meth_SnapShotManager_setup(PyObject *, PyObject *);}
static PyObject *meth_SnapShotManager_setup(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        System * a0;
        const ForceField * a1;
        TrajectoryFile * a2;
        SnapShotManager *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ@J@J@",&sipSelf,sipClass_SnapShotManager,&sipCpp,sipClass_System,&a0,sipClass_ForceField,&a1,sipClass_TrajectoryFile,&a2))
        {
            bool sipRes;

            sipRes = sipCpp->setup(a0,a1,a2);

            return PyBool_FromLong(sipRes);
        }
    }

    {
        SnapShotManager *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_SnapShotManager,&sipCpp))
        {
            bool sipRes;

            sipRes = (sipSelfWasArg ? sipCpp->SnapShotManager::setup() : sipCpp->setup());

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_SnapShotManager,sipNm_BALL_setup);

    return NULL;
}


extern "C" {static PyObject *meth_SnapShotManager_clear(PyObject *, PyObject *);}
static PyObject *meth_SnapShotManager_clear(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        SnapShotManager *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_SnapShotManager,&sipCpp))
        {
            (sipSelfWasArg ? sipCpp->SnapShotManager::clear() : sipCpp->clear());

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_SnapShotManager,sipNm_BALL_clear);

    return NULL;
}


extern "C" {static PyObject *meth_SnapShotManager_isValid(PyObject *, PyObject *);}
static PyObject *meth_SnapShotManager_isValid(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        SnapShotManager *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_SnapShotManager,&sipCpp))
        {
            bool sipRes;

            sipRes = (sipSelfWasArg ? sipCpp->SnapShotManager::isValid() : sipCpp->isValid());

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_SnapShotManager,sipNm_BALL_isValid);

    return NULL;
}


extern "C" {static PyObject *meth_SnapShotManager_setSystem(PyObject *, PyObject *);}
static PyObject *meth_SnapShotManager_setSystem(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        System * a0;
        SnapShotManager *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ@",&sipSelf,sipClass_SnapShotManager,&sipCpp,sipClass_System,&a0))
        {
            sipCpp->setSystem(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_SnapShotManager,sipNm_BALL_setSystem);

    return NULL;
}


extern "C" {static PyObject *meth_SnapShotManager_getSystem(PyObject *, PyObject *);}
static PyObject *meth_SnapShotManager_getSystem(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        SnapShotManager *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_SnapShotManager,&sipCpp))
        {
            System *sipRes;

            sipRes = sipCpp->getSystem();

            return sipConvertFromInstance(sipRes,sipClass_System,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_SnapShotManager,sipNm_BALL_getSystem);

    return NULL;
}


extern "C" {static PyObject *meth_SnapShotManager_setForceField(PyObject *, PyObject *);}
static PyObject *meth_SnapShotManager_setForceField(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const ForceField * a0;
        SnapShotManager *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ@",&sipSelf,sipClass_SnapShotManager,&sipCpp,sipClass_ForceField,&a0))
        {
            sipCpp->setForceField(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_SnapShotManager,sipNm_BALL_setForceField);

    return NULL;
}


extern "C" {static PyObject *meth_SnapShotManager_getForceField(PyObject *, PyObject *);}
static PyObject *meth_SnapShotManager_getForceField(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        SnapShotManager *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_SnapShotManager,&sipCpp))
        {
            const ForceField *sipRes;

            sipRes = sipCpp->getForceField();

            return sipConvertFromInstance(const_cast<ForceField *>(sipRes),sipClass_ForceField,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_SnapShotManager,sipNm_BALL_getForceField);

    return NULL;
}


extern "C" {static PyObject *meth_SnapShotManager_setTrajectoryFile(PyObject *, PyObject *);}
static PyObject *meth_SnapShotManager_setTrajectoryFile(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        TrajectoryFile * a0;
        SnapShotManager *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ@",&sipSelf,sipClass_SnapShotManager,&sipCpp,sipClass_TrajectoryFile,&a0))
        {
            sipCpp->setTrajectoryFile(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_SnapShotManager,sipNm_BALL_setTrajectoryFile);

    return NULL;
}


extern "C" {static PyObject *meth_SnapShotManager_getTrajectoryFile(PyObject *, PyObject *);}
static PyObject *meth_SnapShotManager_getTrajectoryFile(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        SnapShotManager *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_SnapShotManager,&sipCpp))
        {
            TrajectoryFile *sipRes;

            sipRes = sipCpp->getTrajectoryFile();

            return sipConvertFromInstance(sipRes,sipClass_TrajectoryFile,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_SnapShotManager,sipNm_BALL_getTrajectoryFile);

    return NULL;
}


extern "C" {static PyObject *meth_SnapShotManager_setFlushToDiskFrequency(PyObject *, PyObject *);}
static PyObject *meth_SnapShotManager_setFlushToDiskFrequency(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        int a0;
        SnapShotManager *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bi",&sipSelf,sipClass_SnapShotManager,&sipCpp,&a0))
        {
            sipCpp->setFlushToDiskFrequency(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_SnapShotManager,sipNm_BALL_setFlushToDiskFrequency);

    return NULL;
}


extern "C" {static PyObject *meth_SnapShotManager_getFlushToDiskFrequency(PyObject *, PyObject *);}
static PyObject *meth_SnapShotManager_getFlushToDiskFrequency(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        SnapShotManager *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_SnapShotManager,&sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->getFlushToDiskFrequency();

            return PyInt_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_SnapShotManager,sipNm_BALL_getFlushToDiskFrequency);

    return NULL;
}


extern "C" {static PyObject *meth_SnapShotManager_takeSnapShot(PyObject *, PyObject *);}
static PyObject *meth_SnapShotManager_takeSnapShot(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        SnapShotManager *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_SnapShotManager,&sipCpp))
        {
            try
            {
            (sipSelfWasArg ? sipCpp->SnapShotManager::takeSnapShot() : sipCpp->takeSnapShot());
            }
            catch (File::CannotWrite &sipExceptionRef)
            {
                /* Hope that there is a valid copy ctor. */
                File::CannotWrite *sipExceptionCopy = new File::CannotWrite(sipExceptionRef);

                sipRaiseClassException(sipClass_File_CannotWrite,sipExceptionCopy);

                return NULL;
            }

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_SnapShotManager,sipNm_BALL_takeSnapShot);

    return NULL;
}


extern "C" {static PyObject *meth_SnapShotManager_applySnapShot(PyObject *, PyObject *);}
static PyObject *meth_SnapShotManager_applySnapShot(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        int a0;
        SnapShotManager *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bi",&sipSelf,sipClass_SnapShotManager,&sipCpp,&a0))
        {
            bool sipRes;

            sipRes = (sipSelfWasArg ? sipCpp->SnapShotManager::applySnapShot(a0) : sipCpp->applySnapShot(a0));

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_SnapShotManager,sipNm_BALL_applySnapShot);

    return NULL;
}


extern "C" {static PyObject *meth_SnapShotManager_applyFirstSnapShot(PyObject *, PyObject *);}
static PyObject *meth_SnapShotManager_applyFirstSnapShot(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        SnapShotManager *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_SnapShotManager,&sipCpp))
        {
            bool sipRes;

            sipRes = (sipSelfWasArg ? sipCpp->SnapShotManager::applyFirstSnapShot() : sipCpp->applyFirstSnapShot());

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_SnapShotManager,sipNm_BALL_applyFirstSnapShot);

    return NULL;
}


extern "C" {static PyObject *meth_SnapShotManager_applyNextSnapShot(PyObject *, PyObject *);}
static PyObject *meth_SnapShotManager_applyNextSnapShot(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        SnapShotManager *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_SnapShotManager,&sipCpp))
        {
            bool sipRes;

            sipRes = (sipSelfWasArg ? sipCpp->SnapShotManager::applyNextSnapShot() : sipCpp->applyNextSnapShot());

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_SnapShotManager,sipNm_BALL_applyNextSnapShot);

    return NULL;
}


extern "C" {static PyObject *meth_SnapShotManager_applyLastSnapShot(PyObject *, PyObject *);}
static PyObject *meth_SnapShotManager_applyLastSnapShot(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        SnapShotManager *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_SnapShotManager,&sipCpp))
        {
            bool sipRes;

            sipRes = (sipSelfWasArg ? sipCpp->SnapShotManager::applyLastSnapShot() : sipCpp->applyLastSnapShot());

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_SnapShotManager,sipNm_BALL_applyLastSnapShot);

    return NULL;
}


extern "C" {static PyObject *meth_SnapShotManager_flushToDisk(PyObject *, PyObject *);}
static PyObject *meth_SnapShotManager_flushToDisk(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        SnapShotManager *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_SnapShotManager,&sipCpp))
        {
            try
            {
            (sipSelfWasArg ? sipCpp->SnapShotManager::flushToDisk() : sipCpp->flushToDisk());
            }
            catch (File::CannotWrite &sipExceptionRef)
            {
                /* Hope that there is a valid copy ctor. */
                File::CannotWrite *sipExceptionCopy = new File::CannotWrite(sipExceptionRef);

                sipRaiseClassException(sipClass_File_CannotWrite,sipExceptionCopy);

                return NULL;
            }

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_SnapShotManager,sipNm_BALL_flushToDisk);

    return NULL;
}


extern "C" {static PyObject *meth_SnapShotManager_getNumberOfSnapShotsInBuffer(PyObject *, PyObject *);}
static PyObject *meth_SnapShotManager_getNumberOfSnapShotsInBuffer(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        SnapShotManager *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_SnapShotManager,&sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->getNumberOfSnapShotsInBuffer();

            return PyInt_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_SnapShotManager,sipNm_BALL_getNumberOfSnapShotsInBuffer);

    return NULL;
}


extern "C" {static PyObject *meth_SnapShotManager_readFromFile(PyObject *, PyObject *);}
static PyObject *meth_SnapShotManager_readFromFile(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        SnapShotManager *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_SnapShotManager,&sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->readFromFile();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_SnapShotManager,sipNm_BALL_readFromFile);

    return NULL;
}


extern "C" {static PyObject *meth_SnapShotManager_clearBuffer(PyObject *, PyObject *);}
static PyObject *meth_SnapShotManager_clearBuffer(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        SnapShotManager *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_SnapShotManager,&sipCpp))
        {
            sipCpp->clearBuffer();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_SnapShotManager,sipNm_BALL_clearBuffer);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_SnapShotManager(void *, sipWrapperType *);}
static void *cast_SnapShotManager(void *ptr,sipWrapperType *targetClass)
{
    if (targetClass == sipClass_SnapShotManager)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_SnapShotManager(void *, int);}
static void release_SnapShotManager(void *ptr,int state)
{
    if (state & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipSnapShotManager *>(ptr);
    else
        delete reinterpret_cast<SnapShotManager *>(ptr);
}


extern "C" {static void dealloc_SnapShotManager(sipWrapper *);}
static void dealloc_SnapShotManager(sipWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipSnapShotManager *>(sipSelf->u.cppPtr)->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_SnapShotManager(sipSelf->u.cppPtr,sipSelf->flags);
    }
}


extern "C" {static void *init_SnapShotManager(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_SnapShotManager(sipWrapper *sipSelf,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    sipSnapShotManager *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            sipCpp = new sipSnapShotManager();
        }
    }

    if (!sipCpp)
    {
        System * a0;
        const ForceField * a1;
        TrajectoryFile * a2;

        if (sipParseArgs(sipArgsParsed,sipArgs,"J@J@J@",sipClass_System,&a0,sipClass_ForceField,&a1,sipClass_TrajectoryFile,&a2))
        {
            sipCpp = new sipSnapShotManager(a0,a1,a2);
        }
    }

    if (!sipCpp)
    {
        System * a0;
        const ForceField * a1;
        const Options * a2;
        TrajectoryFile * a3;

        if (sipParseArgs(sipArgsParsed,sipArgs,"J@J@JAJ@",sipClass_System,&a0,sipClass_ForceField,&a1,sipClass_Options,&a2,sipClass_TrajectoryFile,&a3))
        {
            sipCpp = new sipSnapShotManager(a0,a1,*a2,a3);
        }
    }

    if (!sipCpp)
    {
        const SnapShotManager * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_SnapShotManager,&a0))
        {
            sipCpp = new sipSnapShotManager(*a0);
        }
    }

    if (sipCpp)
        sipCpp->sipPySelf = sipSelf;

    return sipCpp;
}


extern "C" {static PyObject *var_SnapShotManager_options(PyObject *, PyObject *);}
static PyObject *var_SnapShotManager_options(PyObject *sipSelf,PyObject *sipPy)
{
    int sipIsErr = 0;
   Options *sipVal;
    SnapShotManager *sipCpp = reinterpret_cast<SnapShotManager *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_SnapShotManager));

    if (!sipCpp)
        return NULL;

    if (sipPy == NULL)
    {
        sipVal = &sipCpp->options;

        sipPy = sipConvertFromInstance(sipVal,sipClass_Options,NULL);

        return sipPy;
    }

    sipVal = reinterpret_cast<Options *>(sipForceConvertToInstance(sipPy,sipClass_Options,NULL,SIP_NOT_NONE,NULL,&sipIsErr));

    if (sipIsErr)
        return NULL;

    sipCpp->options = *sipVal;

    Py_INCREF(Py_None);
    return Py_None;
}

PyMethodDef variables_SnapShotManager[] = {
    {sipNm_BALL_options, var_SnapShotManager_options, 0, NULL},
    {0, 0, 0, 0}
};


extern "C" {static void *forceConvertTo_SnapShotManager(PyObject *, int *);}
static void *forceConvertTo_SnapShotManager(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_SnapShotManager))
        return sipConvertToCpp(valobj,sipClass_SnapShotManager,iserrp);

    sipBadClass(sipNm_BALL_SnapShotManager);

    *iserrp = 1;

    return NULL;
}


static PyMethodDef methods_SnapShotManager[] = {
    {sipNm_BALL_applyFirstSnapShot, meth_SnapShotManager_applyFirstSnapShot, METH_VARARGS, NULL},
    {sipNm_BALL_applyLastSnapShot, meth_SnapShotManager_applyLastSnapShot, METH_VARARGS, NULL},
    {sipNm_BALL_applyNextSnapShot, meth_SnapShotManager_applyNextSnapShot, METH_VARARGS, NULL},
    {sipNm_BALL_applySnapShot, meth_SnapShotManager_applySnapShot, METH_VARARGS, NULL},
    {sipNm_BALL_clear, meth_SnapShotManager_clear, METH_VARARGS, NULL},
    {sipNm_BALL_clearBuffer, meth_SnapShotManager_clearBuffer, METH_VARARGS, NULL},
    {sipNm_BALL_flushToDisk, meth_SnapShotManager_flushToDisk, METH_VARARGS, NULL},
    {sipNm_BALL_getFlushToDiskFrequency, meth_SnapShotManager_getFlushToDiskFrequency, METH_VARARGS, NULL},
    {sipNm_BALL_getForceField, meth_SnapShotManager_getForceField, METH_VARARGS, NULL},
    {sipNm_BALL_getNumberOfSnapShotsInBuffer, meth_SnapShotManager_getNumberOfSnapShotsInBuffer, METH_VARARGS, NULL},
    {sipNm_BALL_getSystem, meth_SnapShotManager_getSystem, METH_VARARGS, NULL},
    {sipNm_BALL_getTrajectoryFile, meth_SnapShotManager_getTrajectoryFile, METH_VARARGS, NULL},
    {sipNm_BALL_isValid, meth_SnapShotManager_isValid, METH_VARARGS, NULL},
    {sipNm_BALL_readFromFile, meth_SnapShotManager_readFromFile, METH_VARARGS, NULL},
    {sipNm_BALL_setFlushToDiskFrequency, meth_SnapShotManager_setFlushToDiskFrequency, METH_VARARGS, NULL},
    {sipNm_BALL_setForceField, meth_SnapShotManager_setForceField, METH_VARARGS, NULL},
    {sipNm_BALL_setSystem, meth_SnapShotManager_setSystem, METH_VARARGS, NULL},
    {sipNm_BALL_setTrajectoryFile, meth_SnapShotManager_setTrajectoryFile, METH_VARARGS, NULL},
    {sipNm_BALL_setup, meth_SnapShotManager_setup, METH_VARARGS, NULL},
    {sipNm_BALL_takeSnapShot, meth_SnapShotManager_takeSnapShot, METH_VARARGS, NULL}
};


sipTypeDef sipType_BALL_SnapShotManager = {
    0,
    0,
    "BALL.SnapShotManager",
    0,
    {0, 0, 1},
    0,
    0,
    20, methods_SnapShotManager,
    0, 0,
    variables_SnapShotManager,
    init_SnapShotManager,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_SnapShotManager,
    cast_SnapShotManager,
    release_SnapShotManager,
    forceConvertTo_SnapShotManager,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
