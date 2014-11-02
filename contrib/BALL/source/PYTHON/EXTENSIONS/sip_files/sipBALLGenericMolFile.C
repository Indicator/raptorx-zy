/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLGenericMolFile.h"

#include "sipBALLLineBasedFile.h"
#include "sipBALLFileNotFound.h"
#include "sipBALLFileCannotWrite.h"
#include "sipBALLParseError.h"
#include "sipBALLString.h"
#include "sipBALLOpenMode.h"
#include "sipBALLGenericMolFile.h"
#include "sipBALLSystem.h"
#include "sipBALLMolecule.h"
#include "sipBALLPosition.h"
#include "sipBALLFile.h"


sipGenericMolFile::sipGenericMolFile() throw(): GenericMolFile(), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,8);
}

sipGenericMolFile::sipGenericMolFile(const String& a0,OpenMode a1) throw(FileNotFound): GenericMolFile(a0,a1), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,8);
}

sipGenericMolFile::sipGenericMolFile(const GenericMolFile& a0) throw(FileNotFound): GenericMolFile(a0), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,8);
}

sipGenericMolFile::~sipGenericMolFile() throw()
{
    sipCommonDtor(sipPySelf);
}

bool sipGenericMolFile::write(const System& a0) throw(File::CannotWrite)
{
    extern bool sipVH_BALL_49(sip_gilstate_t,PyObject *,const System&);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipNm_BALL_write);

    if (!meth)
        return GenericMolFile::write(a0);

    return sipVH_BALL_49(sipGILState,meth,a0);
}

bool sipGenericMolFile::write(const Molecule& a0) throw(File::CannotWrite)
{
    extern bool sipVH_BALL_48(sip_gilstate_t,PyObject *,const Molecule&);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,NULL,sipNm_BALL_write);

    if (!meth)
        return GenericMolFile::write(a0);

    return sipVH_BALL_48(sipGILState,meth,a0);
}

bool sipGenericMolFile::read(System& a0) throw(ParseError)
{
    extern bool sipVH_BALL_47(sip_gilstate_t,PyObject *,System&);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[2],sipPySelf,NULL,sipNm_BALL_read);

    if (!meth)
        return GenericMolFile::read(a0);

    return sipVH_BALL_47(sipGILState,meth,a0);
}

Molecule * sipGenericMolFile::read() throw(ParseError)
{
    extern Molecule * sipVH_BALL_46(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[3],sipPySelf,NULL,sipNm_BALL_read);

    if (!meth)
        return GenericMolFile::read();

    return sipVH_BALL_46(sipGILState,meth);
}

GenericMolFile& sipGenericMolFile::operator>>(System& a0) throw(ParseError)
{
    extern GenericMolFile& sipVH_BALL_45(sip_gilstate_t,PyObject *,System&);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[4],sipPySelf,NULL,sipNm_BALL___rshift__);

    if (!meth)
        return GenericMolFile::operator>>(a0);

    return sipVH_BALL_45(sipGILState,meth,a0);
}

GenericMolFile& sipGenericMolFile::operator<<(const System& a0) throw(File::CannotWrite)
{
    extern GenericMolFile& sipVH_BALL_44(sip_gilstate_t,PyObject *,const System&);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[5],sipPySelf,NULL,sipNm_BALL___lshift__);

    if (!meth)
        return GenericMolFile::operator<<(a0);

    return sipVH_BALL_44(sipGILState,meth,a0);
}

GenericMolFile& sipGenericMolFile::operator>>(Molecule& a0) throw(ParseError)
{
    extern GenericMolFile& sipVH_BALL_43(sip_gilstate_t,PyObject *,Molecule&);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[6],sipPySelf,NULL,sipNm_BALL___rshift__);

    if (!meth)
        return GenericMolFile::operator>>(a0);

    return sipVH_BALL_43(sipGILState,meth,a0);
}

GenericMolFile& sipGenericMolFile::operator<<(const Molecule& a0) throw(File::CannotWrite)
{
    extern GenericMolFile& sipVH_BALL_42(sip_gilstate_t,PyObject *,const Molecule&);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[7],sipPySelf,NULL,sipNm_BALL___lshift__);

    if (!meth)
        return GenericMolFile::operator<<(a0);

    return sipVH_BALL_42(sipGILState,meth,a0);
}


extern "C" {static PyObject *meth_GenericMolFile_write(PyObject *, PyObject *);}
static PyObject *meth_GenericMolFile_write(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        const System * a0;
        GenericMolFile *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_GenericMolFile,&sipCpp,sipClass_System,&a0))
        {
            bool sipRes;

            try
            {
            sipRes = (sipSelfWasArg ? sipCpp->GenericMolFile::write(*a0) : sipCpp->write(*a0));
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
        GenericMolFile *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_GenericMolFile,&sipCpp,sipClass_Molecule,&a0))
        {
            bool sipRes;

            try
            {
            sipRes = (sipSelfWasArg ? sipCpp->GenericMolFile::write(*a0) : sipCpp->write(*a0));
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_GenericMolFile,sipNm_BALL_write);

    return NULL;
}


extern "C" {static PyObject *meth_GenericMolFile_read(PyObject *, PyObject *);}
static PyObject *meth_GenericMolFile_read(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        System * a0;
        GenericMolFile *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_GenericMolFile,&sipCpp,sipClass_System,&a0))
        {
            bool sipRes;

            try
            {
            sipRes = (sipSelfWasArg ? sipCpp->GenericMolFile::read(*a0) : sipCpp->read(*a0));
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
        GenericMolFile *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_GenericMolFile,&sipCpp))
        {
            Molecule *sipRes;

            try
            {
            sipRes = (sipSelfWasArg ? sipCpp->GenericMolFile::read() : sipCpp->read());
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_GenericMolFile,sipNm_BALL_read);

    return NULL;
}


extern "C" {static PyObject *slot_GenericMolFile___lshift__(PyObject *sipArg0,PyObject *sipArg1);}
static PyObject *slot_GenericMolFile___lshift__(PyObject *sipArg0,PyObject *sipArg1)
{
    int sipArgsParsed = 0;

    {
        GenericMolFile * a0;
        const System * a1;

        if (sipParsePair(&sipArgsParsed,sipArg0,sipArg1,"JAJA",sipClass_GenericMolFile,&a0,sipClass_System,&a1))
        {
            GenericMolFile *sipRes;

            try
            {
            sipRes = &(*a0 << *a1);
            }
            catch (File::CannotWrite &sipExceptionRef)
            {
                /* Hope that there is a valid copy ctor. */
                File::CannotWrite *sipExceptionCopy = new File::CannotWrite(sipExceptionRef);

                sipRaiseClassException(sipClass_File_CannotWrite,sipExceptionCopy);

                return NULL;
            }

            return sipConvertFromInstance(sipRes,sipClass_GenericMolFile,NULL);
        }
    }

    {
        GenericMolFile * a0;
        const Molecule * a1;

        if (sipParsePair(&sipArgsParsed,sipArg0,sipArg1,"JAJA",sipClass_GenericMolFile,&a0,sipClass_Molecule,&a1))
        {
            GenericMolFile *sipRes;

            try
            {
            sipRes = &(*a0 << *a1);
            }
            catch (File::CannotWrite &sipExceptionRef)
            {
                /* Hope that there is a valid copy ctor. */
                File::CannotWrite *sipExceptionCopy = new File::CannotWrite(sipExceptionRef);

                sipRaiseClassException(sipClass_File_CannotWrite,sipExceptionCopy);

                return NULL;
            }

            return sipConvertFromInstance(sipRes,sipClass_GenericMolFile,NULL);
        }
    }

    return sipPySlotExtend(&sipModuleAPI_BALL,lshift_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_GenericMolFile___rshift__(PyObject *sipArg0,PyObject *sipArg1);}
static PyObject *slot_GenericMolFile___rshift__(PyObject *sipArg0,PyObject *sipArg1)
{
    int sipArgsParsed = 0;

    {
        GenericMolFile * a0;
        System * a1;

        if (sipParsePair(&sipArgsParsed,sipArg0,sipArg1,"JAJA",sipClass_GenericMolFile,&a0,sipClass_System,&a1))
        {
            GenericMolFile *sipRes;

            try
            {
            sipRes = &(*a0 >> *a1);
            }
            catch (ParseError &sipExceptionRef)
            {
                /* Hope that there is a valid copy ctor. */
                ParseError *sipExceptionCopy = new ParseError(sipExceptionRef);

                sipRaiseClassException(sipClass_ParseError,sipExceptionCopy);

                return NULL;
            }

            return sipConvertFromInstance(sipRes,sipClass_GenericMolFile,NULL);
        }
    }

    {
        GenericMolFile * a0;
        Molecule * a1;

        if (sipParsePair(&sipArgsParsed,sipArg0,sipArg1,"JAJA",sipClass_GenericMolFile,&a0,sipClass_Molecule,&a1))
        {
            GenericMolFile *sipRes;

            try
            {
            sipRes = &(*a0 >> *a1);
            }
            catch (ParseError &sipExceptionRef)
            {
                /* Hope that there is a valid copy ctor. */
                ParseError *sipExceptionCopy = new ParseError(sipExceptionRef);

                sipRaiseClassException(sipClass_ParseError,sipExceptionCopy);

                return NULL;
            }

            return sipConvertFromInstance(sipRes,sipClass_GenericMolFile,NULL);
        }
    }

    return sipPySlotExtend(&sipModuleAPI_BALL,rshift_slot,NULL,sipArg0,sipArg1);
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_GenericMolFile(void *, sipWrapperType *);}
static void *cast_GenericMolFile(void *ptr,sipWrapperType *targetClass)
{
    void *res;

    if (targetClass == sipClass_GenericMolFile)
        return ptr;

    if ((res = sipCast_LineBasedFile((LineBasedFile *)(GenericMolFile *)ptr,targetClass)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_GenericMolFile(void *, int);}
static void release_GenericMolFile(void *ptr,int state)
{
    if (state & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipGenericMolFile *>(ptr);
    else
        delete reinterpret_cast<GenericMolFile *>(ptr);
}


extern "C" {static void dealloc_GenericMolFile(sipWrapper *);}
static void dealloc_GenericMolFile(sipWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipGenericMolFile *>(sipSelf->u.cppPtr)->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_GenericMolFile(sipSelf->u.cppPtr,sipSelf->flags);
    }
}


extern "C" {static void *init_GenericMolFile(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_GenericMolFile(sipWrapper *sipSelf,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    sipGenericMolFile *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            sipCpp = new sipGenericMolFile();
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
            try
            {
            sipCpp = new sipGenericMolFile(*a0,*a1);
            }
            catch (FileNotFound &sipExceptionRef)
            {

            sipReleaseInstance(const_cast<String *>(a0),sipClass_String,a0State);
            sipReleaseInstance(a1,sipClass_OpenMode,a1State);
                /* Hope that there is a valid copy ctor. */
                FileNotFound *sipExceptionCopy = new FileNotFound(sipExceptionRef);

                sipRaiseClassException(sipClass_FileNotFound,sipExceptionCopy);

                return NULL;
            }

            sipReleaseInstance(const_cast<String *>(a0),sipClass_String,a0State);
            sipReleaseInstance(a1,sipClass_OpenMode,a1State);
        }
    }

    if (!sipCpp)
    {
        const GenericMolFile * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_GenericMolFile,&a0))
        {
            try
            {
            sipCpp = new sipGenericMolFile(*a0);
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

    if (sipCpp)
        sipCpp->sipPySelf = sipSelf;

    return sipCpp;
}


extern "C" {static void *forceConvertTo_GenericMolFile(PyObject *, int *);}
static void *forceConvertTo_GenericMolFile(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_GenericMolFile))
        return sipConvertToCpp(valobj,sipClass_GenericMolFile,iserrp);

    sipBadClass(sipNm_BALL_GenericMolFile);

    *iserrp = 1;

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedClassDef supers_GenericMolFile[] = {{168, 255, 1}};


/* Define this type's Python slots. */
static sipPySlotDef slots_GenericMolFile[] = {
    {(void *)slot_GenericMolFile___lshift__, lshift_slot},
    {(void *)slot_GenericMolFile___rshift__, rshift_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_GenericMolFile[] = {
    {sipNm_BALL_read, meth_GenericMolFile_read, METH_VARARGS, NULL},
    {sipNm_BALL_write, meth_GenericMolFile_write, METH_VARARGS, NULL}
};


sipTypeDef sipType_BALL_GenericMolFile = {
    0,
    0,
    "BALL.GenericMolFile",
    0,
    {0, 0, 1},
    supers_GenericMolFile,
    slots_GenericMolFile,
    2, methods_GenericMolFile,
    0, 0,
    0,
    init_GenericMolFile,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_GenericMolFile,
    cast_GenericMolFile,
    release_GenericMolFile,
    forceConvertTo_GenericMolFile,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
