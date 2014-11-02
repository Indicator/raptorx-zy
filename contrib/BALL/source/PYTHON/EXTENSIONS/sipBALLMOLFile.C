/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLMOLFile.h"

#include "sipBALLGenericMolFile.h"
#include "sipBALLFileNotFound.h"
#include "sipBALLFileCannotWrite.h"
#include "sipBALLParseError.h"
#include "sipBALLString.h"
#include "sipBALLOpenMode.h"
#include "sipBALLMOLFile.h"
#include "sipBALLSystem.h"
#include "sipBALLMolecule.h"
#include "sipBALLLineBasedFile.h"
#include "sipBALLPosition.h"
#include "sipBALLFile.h"


sipMOLFile::sipMOLFile(): MOLFile(), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,8);
}

sipMOLFile::sipMOLFile(String& a0,OpenMode a1) throw(FileNotFound): MOLFile(a0,a1), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,8);
}

sipMOLFile::sipMOLFile(const MOLFile& a0): MOLFile(a0), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,8);
}

sipMOLFile::~sipMOLFile() throw()
{
    sipCommonDtor(sipPySelf);
}

bool sipMOLFile::write(const System& a0) throw(File::CannotWrite)
{
    extern bool sipVH_BALL_49(sip_gilstate_t,PyObject *,const System&);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipNm_BALL_write);

    if (!meth)
        return MOLFile::write(a0);

    return sipVH_BALL_49(sipGILState,meth,a0);
}

bool sipMOLFile::write(const Molecule& a0) throw(File::CannotWrite)
{
    extern bool sipVH_BALL_48(sip_gilstate_t,PyObject *,const Molecule&);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,NULL,sipNm_BALL_write);

    if (!meth)
        return MOLFile::write(a0);

    return sipVH_BALL_48(sipGILState,meth,a0);
}

bool sipMOLFile::read(System& a0) throw(ParseError)
{
    extern bool sipVH_BALL_47(sip_gilstate_t,PyObject *,System&);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[2],sipPySelf,NULL,sipNm_BALL_read);

    if (!meth)
        return MOLFile::read(a0);

    return sipVH_BALL_47(sipGILState,meth,a0);
}

Molecule * sipMOLFile::read() throw(ParseError)
{
    extern Molecule * sipVH_BALL_46(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[3],sipPySelf,NULL,sipNm_BALL_read);

    if (!meth)
        return MOLFile::read();

    return sipVH_BALL_46(sipGILState,meth);
}

GenericMolFile& sipMOLFile::operator>>(System& a0) throw(ParseError)
{
    extern GenericMolFile& sipVH_BALL_45(sip_gilstate_t,PyObject *,System&);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[4],sipPySelf,NULL,sipNm_BALL___rshift__);

    if (!meth)
        return GenericMolFile::operator>>(a0);

    return sipVH_BALL_45(sipGILState,meth,a0);
}

GenericMolFile& sipMOLFile::operator<<(const System& a0) throw(File::CannotWrite)
{
    extern GenericMolFile& sipVH_BALL_44(sip_gilstate_t,PyObject *,const System&);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[5],sipPySelf,NULL,sipNm_BALL___lshift__);

    if (!meth)
        return GenericMolFile::operator<<(a0);

    return sipVH_BALL_44(sipGILState,meth,a0);
}

GenericMolFile& sipMOLFile::operator>>(Molecule& a0) throw(ParseError)
{
    extern GenericMolFile& sipVH_BALL_43(sip_gilstate_t,PyObject *,Molecule&);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[6],sipPySelf,NULL,sipNm_BALL___rshift__);

    if (!meth)
        return GenericMolFile::operator>>(a0);

    return sipVH_BALL_43(sipGILState,meth,a0);
}

GenericMolFile& sipMOLFile::operator<<(const Molecule& a0) throw(File::CannotWrite)
{
    extern GenericMolFile& sipVH_BALL_42(sip_gilstate_t,PyObject *,const Molecule&);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[7],sipPySelf,NULL,sipNm_BALL___lshift__);

    if (!meth)
        return GenericMolFile::operator<<(a0);

    return sipVH_BALL_42(sipGILState,meth,a0);
}


extern "C" {static PyObject *meth_MOLFile_write(PyObject *, PyObject *);}
static PyObject *meth_MOLFile_write(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        const System * a0;
        MOLFile *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_MOLFile,&sipCpp,sipClass_System,&a0))
        {
            bool sipRes;

            try
            {
            sipRes = (sipSelfWasArg ? sipCpp->MOLFile::write(*a0) : sipCpp->write(*a0));
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
        MOLFile *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_MOLFile,&sipCpp,sipClass_Molecule,&a0))
        {
            bool sipRes;

            try
            {
            sipRes = (sipSelfWasArg ? sipCpp->MOLFile::write(*a0) : sipCpp->write(*a0));
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_MOLFile,sipNm_BALL_write);

    return NULL;
}


extern "C" {static PyObject *meth_MOLFile_read(PyObject *, PyObject *);}
static PyObject *meth_MOLFile_read(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        System * a0;
        MOLFile *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_MOLFile,&sipCpp,sipClass_System,&a0))
        {
            bool sipRes;

            try
            {
            sipRes = (sipSelfWasArg ? sipCpp->MOLFile::read(*a0) : sipCpp->read(*a0));
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
        MOLFile *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_MOLFile,&sipCpp))
        {
            Molecule *sipRes;

            try
            {
            sipRes = (sipSelfWasArg ? sipCpp->MOLFile::read() : sipCpp->read());
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_MOLFile,sipNm_BALL_read);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_MOLFile(void *, sipWrapperType *);}
static void *cast_MOLFile(void *ptr,sipWrapperType *targetClass)
{
    void *res;

    if (targetClass == sipClass_MOLFile)
        return ptr;

    if ((res = sipCast_GenericMolFile((GenericMolFile *)(MOLFile *)ptr,targetClass)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_MOLFile(void *, int);}
static void release_MOLFile(void *ptr,int state)
{
    if (state & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipMOLFile *>(ptr);
    else
        delete reinterpret_cast<MOLFile *>(ptr);
}


extern "C" {static void dealloc_MOLFile(sipWrapper *);}
static void dealloc_MOLFile(sipWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipMOLFile *>(sipSelf->u.cppPtr)->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_MOLFile(sipSelf->u.cppPtr,sipSelf->flags);
    }
}


extern "C" {static void *init_MOLFile(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_MOLFile(sipWrapper *sipSelf,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    sipMOLFile *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            try
            {
            sipCpp = new sipMOLFile();
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
            sipCpp = new sipMOLFile(*a0,*a1);
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
        const MOLFile * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_MOLFile,&a0))
        {
            try
            {
            sipCpp = new sipMOLFile(*a0);
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


extern "C" {static void *forceConvertTo_MOLFile(PyObject *, int *);}
static void *forceConvertTo_MOLFile(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_MOLFile))
        return sipConvertToCpp(valobj,sipClass_MOLFile,iserrp);

    sipBadClass(sipNm_BALL_MOLFile);

    *iserrp = 1;

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedClassDef supers_MOLFile[] = {{169, 255, 1}};


static PyMethodDef methods_MOLFile[] = {
    {sipNm_BALL_read, meth_MOLFile_read, METH_VARARGS, NULL},
    {sipNm_BALL_write, meth_MOLFile_write, METH_VARARGS, NULL}
};


sipTypeDef sipType_BALL_MOLFile = {
    0,
    0,
    "BALL.MOLFile",
    0,
    {0, 0, 1},
    supers_MOLFile,
    0,
    2, methods_MOLFile,
    0, 0,
    0,
    init_MOLFile,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_MOLFile,
    cast_MOLFile,
    release_MOLFile,
    forceConvertTo_MOLFile,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
