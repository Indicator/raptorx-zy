/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLSDFile.h"

#include "sipBALLGenericMolFile.h"
#include "sipBALLFileNotFound.h"
#include "sipBALLFileCannotWrite.h"
#include "sipBALLParseError.h"
#include "sipBALLString.h"
#include "sipBALLOpenMode.h"
#include "sipBALLSDFile.h"
#include "sipBALLSystem.h"
#include "sipBALLMolecule.h"
#include "sipBALLLineBasedFile.h"
#include "sipBALLPosition.h"
#include "sipBALLFile.h"


sipSDFile::sipSDFile(): SDFile(), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,8);
}

sipSDFile::sipSDFile(String& a0,OpenMode a1) throw(FileNotFound): SDFile(a0,a1), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,8);
}

sipSDFile::sipSDFile(const SDFile& a0): SDFile(a0), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,8);
}

sipSDFile::~sipSDFile() throw()
{
    sipCommonDtor(sipPySelf);
}

bool sipSDFile::write(const System& a0) throw(File::CannotWrite)
{
    extern bool sipVH_BALL_49(sip_gilstate_t,PyObject *,const System&);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipNm_BALL_write);

    if (!meth)
        return SDFile::write(a0);

    return sipVH_BALL_49(sipGILState,meth,a0);
}

bool sipSDFile::write(const Molecule& a0) throw(File::CannotWrite)
{
    extern bool sipVH_BALL_48(sip_gilstate_t,PyObject *,const Molecule&);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,NULL,sipNm_BALL_write);

    if (!meth)
        return SDFile::write(a0);

    return sipVH_BALL_48(sipGILState,meth,a0);
}

bool sipSDFile::read(System& a0) throw(ParseError)
{
    extern bool sipVH_BALL_47(sip_gilstate_t,PyObject *,System&);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[2],sipPySelf,NULL,sipNm_BALL_read);

    if (!meth)
        return SDFile::read(a0);

    return sipVH_BALL_47(sipGILState,meth,a0);
}

Molecule * sipSDFile::read() throw(ParseError)
{
    extern Molecule * sipVH_BALL_46(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[3],sipPySelf,NULL,sipNm_BALL_read);

    if (!meth)
        return SDFile::read();

    return sipVH_BALL_46(sipGILState,meth);
}

GenericMolFile& sipSDFile::operator>>(System& a0) throw(ParseError)
{
    extern GenericMolFile& sipVH_BALL_45(sip_gilstate_t,PyObject *,System&);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[4],sipPySelf,NULL,sipNm_BALL___rshift__);

    if (!meth)
        return GenericMolFile::operator>>(a0);

    return sipVH_BALL_45(sipGILState,meth,a0);
}

GenericMolFile& sipSDFile::operator<<(const System& a0) throw(File::CannotWrite)
{
    extern GenericMolFile& sipVH_BALL_44(sip_gilstate_t,PyObject *,const System&);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[5],sipPySelf,NULL,sipNm_BALL___lshift__);

    if (!meth)
        return GenericMolFile::operator<<(a0);

    return sipVH_BALL_44(sipGILState,meth,a0);
}

GenericMolFile& sipSDFile::operator>>(Molecule& a0) throw(ParseError)
{
    extern GenericMolFile& sipVH_BALL_43(sip_gilstate_t,PyObject *,Molecule&);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[6],sipPySelf,NULL,sipNm_BALL___rshift__);

    if (!meth)
        return GenericMolFile::operator>>(a0);

    return sipVH_BALL_43(sipGILState,meth,a0);
}

GenericMolFile& sipSDFile::operator<<(const Molecule& a0) throw(File::CannotWrite)
{
    extern GenericMolFile& sipVH_BALL_42(sip_gilstate_t,PyObject *,const Molecule&);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[7],sipPySelf,NULL,sipNm_BALL___lshift__);

    if (!meth)
        return GenericMolFile::operator<<(a0);

    return sipVH_BALL_42(sipGILState,meth,a0);
}


extern "C" {static PyObject *meth_SDFile_write(PyObject *, PyObject *);}
static PyObject *meth_SDFile_write(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        const System * a0;
        SDFile *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_SDFile,&sipCpp,sipClass_System,&a0))
        {
            bool sipRes;

            try
            {
            sipRes = (sipSelfWasArg ? sipCpp->SDFile::write(*a0) : sipCpp->write(*a0));
            }
            catch (File::CannotWrite &sipExceptionRef)
            {
                /* Hope that there is a valid copy ctor. */
                File::CannotWrite *sipExceptionCopy = new File::CannotWrite(sipExceptionRef);

                sipRaiseClassException(sipClass_File_CannotWrite,sipExceptionCopy);

                return NULL;
            }

            return PyBool_FromLong(sipRes);
        }
    }

    {
        const Molecule * a0;
        SDFile *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_SDFile,&sipCpp,sipClass_Molecule,&a0))
        {
            bool sipRes;

            try
            {
            sipRes = (sipSelfWasArg ? sipCpp->SDFile::write(*a0) : sipCpp->write(*a0));
            }
            catch (File::CannotWrite &sipExceptionRef)
            {
                /* Hope that there is a valid copy ctor. */
                File::CannotWrite *sipExceptionCopy = new File::CannotWrite(sipExceptionRef);

                sipRaiseClassException(sipClass_File_CannotWrite,sipExceptionCopy);

                return NULL;
            }

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_SDFile,sipNm_BALL_write);

    return NULL;
}


extern "C" {static PyObject *meth_SDFile_read(PyObject *, PyObject *);}
static PyObject *meth_SDFile_read(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        System * a0;
        SDFile *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_SDFile,&sipCpp,sipClass_System,&a0))
        {
            bool sipRes;

            try
            {
            sipRes = (sipSelfWasArg ? sipCpp->SDFile::read(*a0) : sipCpp->read(*a0));
            }
            catch (ParseError &sipExceptionRef)
            {
                /* Hope that there is a valid copy ctor. */
                ParseError *sipExceptionCopy = new ParseError(sipExceptionRef);

                sipRaiseClassException(sipClass_ParseError,sipExceptionCopy);

                return NULL;
            }

            return PyBool_FromLong(sipRes);
        }
    }

    {
        SDFile *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_SDFile,&sipCpp))
        {
            Molecule *sipRes;

            try
            {
            sipRes = (sipSelfWasArg ? sipCpp->SDFile::read() : sipCpp->read());
            }
            catch (ParseError &sipExceptionRef)
            {
                /* Hope that there is a valid copy ctor. */
                ParseError *sipExceptionCopy = new ParseError(sipExceptionRef);

                sipRaiseClassException(sipClass_ParseError,sipExceptionCopy);

                return NULL;
            }

            return sipConvertFromInstance(sipRes,sipClass_Molecule,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_SDFile,sipNm_BALL_read);

    return NULL;
}


extern "C" {static PyObject *meth_SDFile_disableAtoms(PyObject *, PyObject *);}
static PyObject *meth_SDFile_disableAtoms(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        SDFile *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_SDFile,&sipCpp))
        {
            sipCpp->disableAtoms();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_SDFile,sipNm_BALL_disableAtoms);

    return NULL;
}


extern "C" {static PyObject *meth_SDFile_enableAtoms(PyObject *, PyObject *);}
static PyObject *meth_SDFile_enableAtoms(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        SDFile *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_SDFile,&sipCpp))
        {
            sipCpp->enableAtoms();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_SDFile,sipNm_BALL_enableAtoms);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_SDFile(void *, sipWrapperType *);}
static void *cast_SDFile(void *ptr,sipWrapperType *targetClass)
{
    void *res;

    if (targetClass == sipClass_SDFile)
        return ptr;

    if ((res = sipCast_GenericMolFile((GenericMolFile *)(SDFile *)ptr,targetClass)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_SDFile(void *, int);}
static void release_SDFile(void *ptr,int state)
{
    if (state & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipSDFile *>(ptr);
    else
        delete reinterpret_cast<SDFile *>(ptr);
}


extern "C" {static void dealloc_SDFile(sipWrapper *);}
static void dealloc_SDFile(sipWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipSDFile *>(sipSelf->u.cppPtr)->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_SDFile(sipSelf->u.cppPtr,sipSelf->flags);
    }
}


extern "C" {static void *init_SDFile(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_SDFile(sipWrapper *sipSelf,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    sipSDFile *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            try
            {
            sipCpp = new sipSDFile();
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
        String * a0;
        int a0State = 0;
        OpenMode a1def = std::ios::in;
        OpenMode * a1 = &a1def;
        int a1State = 0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"J1|J1",sipClass_String,&a0,&a0State,sipClass_OpenMode,&a1,&a1State))
        {
            try
            {
            sipCpp = new sipSDFile(*a0,*a1);
            }
            catch (FileNotFound &sipExceptionRef)
            {

            sipReleaseInstance(a0,sipClass_String,a0State);
            sipReleaseInstance(a1,sipClass_OpenMode,a1State);
                /* Hope that there is a valid copy ctor. */
                FileNotFound *sipExceptionCopy = new FileNotFound(sipExceptionRef);

                sipRaiseClassException(sipClass_FileNotFound,sipExceptionCopy);

                return NULL;
            }

            sipReleaseInstance(a0,sipClass_String,a0State);
            sipReleaseInstance(a1,sipClass_OpenMode,a1State);
        }
    }

    if (!sipCpp)
    {
        const SDFile * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_SDFile,&a0))
        {
            try
            {
            sipCpp = new sipSDFile(*a0);
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


extern "C" {static void *forceConvertTo_SDFile(PyObject *, int *);}
static void *forceConvertTo_SDFile(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_SDFile))
        return sipConvertToCpp(valobj,sipClass_SDFile,iserrp);

    sipBadClass(sipNm_BALL_SDFile);

    *iserrp = 1;

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedClassDef supers_SDFile[] = {{169, 255, 1}};


static PyMethodDef methods_SDFile[] = {
    {sipNm_BALL_disableAtoms, meth_SDFile_disableAtoms, METH_VARARGS, NULL},
    {sipNm_BALL_enableAtoms, meth_SDFile_enableAtoms, METH_VARARGS, NULL},
    {sipNm_BALL_read, meth_SDFile_read, METH_VARARGS, NULL},
    {sipNm_BALL_write, meth_SDFile_write, METH_VARARGS, NULL}
};


sipTypeDef sipType_BALL_SDFile = {
    0,
    0,
    "BALL.SDFile",
    0,
    {0, 0, 1},
    supers_SDFile,
    0,
    4, methods_SDFile,
    0, 0,
    0,
    init_SDFile,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_SDFile,
    cast_SDFile,
    release_SDFile,
    forceConvertTo_SDFile,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
