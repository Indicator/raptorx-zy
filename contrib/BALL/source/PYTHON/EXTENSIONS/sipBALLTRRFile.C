/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLTRRFile.h"

#include "sipBALLTrajectoryFile.h"
#include "sipBALLFileNotFound.h"
#include "sipBALLString.h"
#include "sipBALLOpenMode.h"
#include "sipBALLTRRFile.h"
#include "sipBALLVector3.h"
#include "sipBALLSnapShotManager.h"
#include "sipBALLSnapShot.h"
#include "sipBALLTRRFileTRRHeader.h"
#include "sipBALLFile.h"


sipTRRFile::sipTRRFile() throw(): TRRFile(), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,9);
}

sipTRRFile::sipTRRFile(const TRRFile& a0) throw(FileNotFound): TRRFile(a0), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,9);
}

sipTRRFile::sipTRRFile(const String& a0,OpenMode a1) throw(): TRRFile(a0,a1), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,9);
}

sipTRRFile::~sipTRRFile() throw()
{
    sipCommonDtor(sipPySelf);
}

void sipTRRFile::clear() throw()
{
    extern void sipVH_BALL_0(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipNm_BALL_clear);

    if (!meth)
    {
        TRRFile::clear();
        return;
    }

    sipVH_BALL_0(sipGILState,meth);
}

bool sipTRRFile::init() throw()
{
    extern bool sipVH_BALL_4(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,NULL,sipNm_BALL_init);

    if (!meth)
        return TRRFile::init();

    return sipVH_BALL_4(sipGILState,meth);
}

bool sipTRRFile::writeNextHeader(const TRRFile::TRRHeader& a0) throw()
{
    extern bool sipVH_BALL_52(sip_gilstate_t,PyObject *,const TRRFile::TRRHeader&);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[2],sipPySelf,NULL,sipNm_BALL_writeNextHeader);

    if (!meth)
        return TRRFile::writeNextHeader(a0);

    return sipVH_BALL_52(sipGILState,meth,a0);
}

bool sipTRRFile::readNextHeader(TRRFile::TRRHeader& a0) throw()
{
    extern bool sipVH_BALL_51(sip_gilstate_t,PyObject *,TRRFile::TRRHeader&);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[3],sipPySelf,NULL,sipNm_BALL_readNextHeader);

    if (!meth)
        return TRRFile::readNextHeader(a0);

    return sipVH_BALL_51(sipGILState,meth,a0);
}

bool sipTRRFile::append(const SnapShot& a0) throw()
{
    extern bool sipVH_BALL_41(sip_gilstate_t,PyObject *,const SnapShot&);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[4],sipPySelf,NULL,sipNm_BALL_append);

    if (!meth)
        return TRRFile::append(a0);

    return sipVH_BALL_41(sipGILState,meth,a0);
}

bool sipTRRFile::read(SnapShot& a0) throw()
{
    extern bool sipVH_BALL_40(sip_gilstate_t,PyObject *,SnapShot&);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[5],sipPySelf,NULL,sipNm_BALL_read);

    if (!meth)
        return TRRFile::read(a0);

    return sipVH_BALL_40(sipGILState,meth,a0);
}

TRRFile& sipTRRFile::operator>>(SnapShotManager& a0) throw()
{
    extern TRRFile& sipVH_BALL_50(sip_gilstate_t,PyObject *,SnapShotManager&);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[6],sipPySelf,NULL,sipNm_BALL___rshift__);

    if (!meth)
        return TRRFile::operator>>(a0);

    return sipVH_BALL_50(sipGILState,meth,a0);
}

bool sipTRRFile::readHeader() throw()
{
    extern bool sipVH_BALL_4(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[7],sipPySelf,NULL,sipNm_BALL_readHeader);

    if (!meth)
        return TrajectoryFile::readHeader();

    return sipVH_BALL_4(sipGILState,meth);
}

bool sipTRRFile::writeHeader() throw()
{
    extern bool sipVH_BALL_4(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[8],sipPySelf,NULL,sipNm_BALL_writeHeader);

    if (!meth)
        return TrajectoryFile::writeHeader();

    return sipVH_BALL_4(sipGILState,meth);
}


extern "C" {static PyObject *meth_TRRFile_clear(PyObject *, PyObject *);}
static PyObject *meth_TRRFile_clear(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        TRRFile *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_TRRFile,&sipCpp))
        {
            (sipSelfWasArg ? sipCpp->TRRFile::clear() : sipCpp->clear());

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_TRRFile,sipNm_BALL_clear);

    return NULL;
}


extern "C" {static PyObject *meth_TRRFile_init(PyObject *, PyObject *);}
static PyObject *meth_TRRFile_init(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        TRRFile *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_TRRFile,&sipCpp))
        {
            bool sipRes;

            sipRes = (sipSelfWasArg ? sipCpp->TRRFile::init() : sipCpp->init());

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_TRRFile,sipNm_BALL_init);

    return NULL;
}


extern "C" {static PyObject *meth_TRRFile_writeNextHeader(PyObject *, PyObject *);}
static PyObject *meth_TRRFile_writeNextHeader(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        const TRRFile::TRRHeader * a0;
        TRRFile *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_TRRFile,&sipCpp,sipClass_TRRFile_TRRHeader,&a0))
        {
            bool sipRes;

            sipRes = (sipSelfWasArg ? sipCpp->TRRFile::writeNextHeader(*a0) : sipCpp->writeNextHeader(*a0));

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_TRRFile,sipNm_BALL_writeNextHeader);

    return NULL;
}


extern "C" {static PyObject *meth_TRRFile_readNextHeader(PyObject *, PyObject *);}
static PyObject *meth_TRRFile_readNextHeader(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        TRRFile::TRRHeader * a0;
        TRRFile *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_TRRFile,&sipCpp,sipClass_TRRFile_TRRHeader,&a0))
        {
            bool sipRes;

            sipRes = (sipSelfWasArg ? sipCpp->TRRFile::readNextHeader(*a0) : sipCpp->readNextHeader(*a0));

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_TRRFile,sipNm_BALL_readNextHeader);

    return NULL;
}


extern "C" {static PyObject *meth_TRRFile_append(PyObject *, PyObject *);}
static PyObject *meth_TRRFile_append(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        const SnapShot * a0;
        TRRFile *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_TRRFile,&sipCpp,sipClass_SnapShot,&a0))
        {
            bool sipRes;

            sipRes = (sipSelfWasArg ? sipCpp->TRRFile::append(*a0) : sipCpp->append(*a0));

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_TRRFile,sipNm_BALL_append);

    return NULL;
}


extern "C" {static PyObject *meth_TRRFile_read(PyObject *, PyObject *);}
static PyObject *meth_TRRFile_read(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        SnapShot * a0;
        TRRFile *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_TRRFile,&sipCpp,sipClass_SnapShot,&a0))
        {
            bool sipRes;

            sipRes = (sipSelfWasArg ? sipCpp->TRRFile::read(*a0) : sipCpp->read(*a0));

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_TRRFile,sipNm_BALL_read);

    return NULL;
}


extern "C" {static PyObject *meth_TRRFile_hasVelocities(PyObject *, PyObject *);}
static PyObject *meth_TRRFile_hasVelocities(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        TRRFile *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_TRRFile,&sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->hasVelocities();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_TRRFile,sipNm_BALL_hasVelocities);

    return NULL;
}


extern "C" {static PyObject *meth_TRRFile_setVelocityStorage(PyObject *, PyObject *);}
static PyObject *meth_TRRFile_setVelocityStorage(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        bool a0;
        TRRFile *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bb",&sipSelf,sipClass_TRRFile,&sipCpp,&a0))
        {
            sipCpp->setVelocityStorage(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_TRRFile,sipNm_BALL_setVelocityStorage);

    return NULL;
}


extern "C" {static PyObject *meth_TRRFile_hasForces(PyObject *, PyObject *);}
static PyObject *meth_TRRFile_hasForces(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        TRRFile *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_TRRFile,&sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->hasForces();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_TRRFile,sipNm_BALL_hasForces);

    return NULL;
}


extern "C" {static PyObject *meth_TRRFile_setForceStorage(PyObject *, PyObject *);}
static PyObject *meth_TRRFile_setForceStorage(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        bool a0;
        TRRFile *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bb",&sipSelf,sipClass_TRRFile,&sipCpp,&a0))
        {
            sipCpp->setForceStorage(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_TRRFile,sipNm_BALL_setForceStorage);

    return NULL;
}


extern "C" {static PyObject *meth_TRRFile_getPrecision(PyObject *, PyObject *);}
static PyObject *meth_TRRFile_getPrecision(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        TRRFile *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_TRRFile,&sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->getPrecision();

            return PyInt_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_TRRFile,sipNm_BALL_getPrecision);

    return NULL;
}


extern "C" {static PyObject *meth_TRRFile_setPrecision(PyObject *, PyObject *);}
static PyObject *meth_TRRFile_setPrecision(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        int a0;
        TRRFile *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bi",&sipSelf,sipClass_TRRFile,&sipCpp,&a0))
        {
            bool sipRes;

            sipRes = sipCpp->setPrecision(a0);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_TRRFile,sipNm_BALL_setPrecision);

    return NULL;
}


extern "C" {static PyObject *meth_TRRFile_getTimestep(PyObject *, PyObject *);}
static PyObject *meth_TRRFile_getTimestep(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        TRRFile *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_TRRFile,&sipCpp))
        {
            float sipRes;

            sipRes = sipCpp->getTimestep();

            return PyFloat_FromDouble((double)sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_TRRFile,sipNm_BALL_getTimestep);

    return NULL;
}


extern "C" {static PyObject *meth_TRRFile_setTimestep(PyObject *, PyObject *);}
static PyObject *meth_TRRFile_setTimestep(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        float a0;
        TRRFile *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bf",&sipSelf,sipClass_TRRFile,&sipCpp,&a0))
        {
            sipCpp->setTimestep(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_TRRFile,sipNm_BALL_setTimestep);

    return NULL;
}


extern "C" {static PyObject *meth_TRRFile_getBoundingBoxX(PyObject *, PyObject *);}
static PyObject *meth_TRRFile_getBoundingBoxX(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        TRRFile *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_TRRFile,&sipCpp))
        {
            Vector3 *sipRes;

            sipRes = new Vector3(sipCpp->getBoundingBoxX());

            return sipConvertFromNewInstance(sipRes,sipClass_Vector3,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_TRRFile,sipNm_BALL_getBoundingBoxX);

    return NULL;
}


extern "C" {static PyObject *meth_TRRFile_getBoundingBoxY(PyObject *, PyObject *);}
static PyObject *meth_TRRFile_getBoundingBoxY(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        TRRFile *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_TRRFile,&sipCpp))
        {
            Vector3 *sipRes;

            sipRes = new Vector3(sipCpp->getBoundingBoxY());

            return sipConvertFromNewInstance(sipRes,sipClass_Vector3,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_TRRFile,sipNm_BALL_getBoundingBoxY);

    return NULL;
}


extern "C" {static PyObject *meth_TRRFile_getBoundingBoxZ(PyObject *, PyObject *);}
static PyObject *meth_TRRFile_getBoundingBoxZ(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        TRRFile *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_TRRFile,&sipCpp))
        {
            Vector3 *sipRes;

            sipRes = new Vector3(sipCpp->getBoundingBoxZ());

            return sipConvertFromNewInstance(sipRes,sipClass_Vector3,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_TRRFile,sipNm_BALL_getBoundingBoxZ);

    return NULL;
}


extern "C" {static PyObject *meth_TRRFile_setBoundingBox(PyObject *, PyObject *);}
static PyObject *meth_TRRFile_setBoundingBox(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const Vector3 * a0;
        const Vector3 * a1;
        const Vector3 * a2;
        TRRFile *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJAJAJA",&sipSelf,sipClass_TRRFile,&sipCpp,sipClass_Vector3,&a0,sipClass_Vector3,&a1,sipClass_Vector3,&a2))
        {
            sipCpp->setBoundingBox(*a0,*a1,*a2);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_TRRFile,sipNm_BALL_setBoundingBox);

    return NULL;
}


extern "C" {static PyObject *slot_TRRFile___rshift__(PyObject *sipArg0,PyObject *sipArg1);}
static PyObject *slot_TRRFile___rshift__(PyObject *sipArg0,PyObject *sipArg1)
{
    int sipArgsParsed = 0;

    {
        TRRFile * a0;
        SnapShotManager * a1;

        if (sipParsePair(&sipArgsParsed,sipArg0,sipArg1,"JAJA",sipClass_TRRFile,&a0,sipClass_SnapShotManager,&a1))
        {
            TRRFile *sipRes;

            sipRes = &(*a0 >> *a1);

            return sipConvertFromInstance(sipRes,sipClass_TRRFile,NULL);
        }
    }

    return sipPySlotExtend(&sipModuleAPI_BALL,rshift_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_TRRFile___eq__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_TRRFile___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    TRRFile *sipCpp = reinterpret_cast<TRRFile *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_TRRFile));

    if (!sipCpp)
        return 0;

    int sipArgsParsed = 0;

    {
        const TRRFile * a0;

        if (sipParseArgs(&sipArgsParsed,sipArg,"JA",sipClass_TRRFile,&a0))
        {
            bool sipRes;

            sipRes = ((*sipCpp) == *a0);

            return PyBool_FromLong(sipRes);
        }
    }

    return sipPySlotExtend(&sipModuleAPI_BALL,eq_slot,sipClass_TRRFile,sipSelf,sipArg);
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_TRRFile(void *, sipWrapperType *);}
static void *cast_TRRFile(void *ptr,sipWrapperType *targetClass)
{
    void *res;

    if (targetClass == sipClass_TRRFile)
        return ptr;

    if ((res = sipCast_TrajectoryFile((TrajectoryFile *)(TRRFile *)ptr,targetClass)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_TRRFile(void *, int);}
static void release_TRRFile(void *ptr,int state)
{
    if (state & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipTRRFile *>(ptr);
    else
        delete reinterpret_cast<TRRFile *>(ptr);
}


extern "C" {static void dealloc_TRRFile(sipWrapper *);}
static void dealloc_TRRFile(sipWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipTRRFile *>(sipSelf->u.cppPtr)->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_TRRFile(sipSelf->u.cppPtr,sipSelf->flags);
    }
}


extern "C" {static void *init_TRRFile(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_TRRFile(sipWrapper *sipSelf,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    sipTRRFile *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            sipCpp = new sipTRRFile();
        }
    }

    if (!sipCpp)
    {
        const TRRFile * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_TRRFile,&a0))
        {
            try
            {
            sipCpp = new sipTRRFile(*a0);
            }
            catch (FileNotFound &sipExceptionRef)
            {
                /* Hope that there is a valid copy ctor. */
                FileNotFound *sipExceptionCopy = new FileNotFound(sipExceptionRef);

                sipRaiseClassException(sipClass_FileNotFound,sipExceptionCopy);

                return NULL;
            }
        }
    }

    if (!sipCpp)
    {
        const String * a0;
        int a0State = 0;
        OpenMode a1def = std::ios::in;
        OpenMode * a1 = &a1def;
        int a1State = 0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"J1|J1",sipClass_String,&a0,&a0State,sipClass_OpenMode,&a1,&a1State))
        {
            sipCpp = new sipTRRFile(*a0,*a1);

            sipReleaseInstance(const_cast<String *>(a0),sipClass_String,a0State);
            sipReleaseInstance(a1,sipClass_OpenMode,a1State);
        }
    }

    if (sipCpp)
        sipCpp->sipPySelf = sipSelf;

    return sipCpp;
}


extern "C" {static void *forceConvertTo_TRRFile(PyObject *, int *);}
static void *forceConvertTo_TRRFile(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_TRRFile))
        return sipConvertToCpp(valobj,sipClass_TRRFile,iserrp);

    sipBadClass(sipNm_BALL_TRRFile);

    *iserrp = 1;

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedClassDef supers_TRRFile[] = {{174, 255, 1}};


/* Define this type's Python slots. */
static sipPySlotDef slots_TRRFile[] = {
    {(void *)slot_TRRFile___rshift__, rshift_slot},
    {(void *)slot_TRRFile___eq__, eq_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_TRRFile[] = {
    {sipNm_BALL_append, meth_TRRFile_append, METH_VARARGS, NULL},
    {sipNm_BALL_clear, meth_TRRFile_clear, METH_VARARGS, NULL},
    {sipNm_BALL_getBoundingBoxX, meth_TRRFile_getBoundingBoxX, METH_VARARGS, NULL},
    {sipNm_BALL_getBoundingBoxY, meth_TRRFile_getBoundingBoxY, METH_VARARGS, NULL},
    {sipNm_BALL_getBoundingBoxZ, meth_TRRFile_getBoundingBoxZ, METH_VARARGS, NULL},
    {sipNm_BALL_getPrecision, meth_TRRFile_getPrecision, METH_VARARGS, NULL},
    {sipNm_BALL_getTimestep, meth_TRRFile_getTimestep, METH_VARARGS, NULL},
    {sipNm_BALL_hasForces, meth_TRRFile_hasForces, METH_VARARGS, NULL},
    {sipNm_BALL_hasVelocities, meth_TRRFile_hasVelocities, METH_VARARGS, NULL},
    {sipNm_BALL_init, meth_TRRFile_init, METH_VARARGS, NULL},
    {sipNm_BALL_read, meth_TRRFile_read, METH_VARARGS, NULL},
    {sipNm_BALL_readNextHeader, meth_TRRFile_readNextHeader, METH_VARARGS, NULL},
    {sipNm_BALL_setBoundingBox, meth_TRRFile_setBoundingBox, METH_VARARGS, NULL},
    {sipNm_BALL_setForceStorage, meth_TRRFile_setForceStorage, METH_VARARGS, NULL},
    {sipNm_BALL_setPrecision, meth_TRRFile_setPrecision, METH_VARARGS, NULL},
    {sipNm_BALL_setTimestep, meth_TRRFile_setTimestep, METH_VARARGS, NULL},
    {sipNm_BALL_setVelocityStorage, meth_TRRFile_setVelocityStorage, METH_VARARGS, NULL},
    {sipNm_BALL_writeNextHeader, meth_TRRFile_writeNextHeader, METH_VARARGS, NULL}
};


sipTypeDef sipType_BALL_TRRFile = {
    0,
    0,
    "BALL.TRRFile",
    0,
    {0, 0, 1},
    supers_TRRFile,
    slots_TRRFile,
    18, methods_TRRFile,
    0, 0,
    0,
    init_TRRFile,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_TRRFile,
    cast_TRRFile,
    release_TRRFile,
    forceConvertTo_TRRFile,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
