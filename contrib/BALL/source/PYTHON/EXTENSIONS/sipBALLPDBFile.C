/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLPDBFile.h"

#include "sipBALLFileNotFound.h"
#include "sipBALLParseError.h"
#include "sipBALLFileCannotWrite.h"
#include "sipBALLString.h"
#include "sipBALLOpenMode.h"
#include "sipBALLPDBFile.h"
#include "sipBALLProtein.h"
#include "sipBALLMolecule.h"
#include "sipBALLSystem.h"


sipPDBFile::sipPDBFile(): PDBFile(), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,6);
}

sipPDBFile::sipPDBFile(const String& a0,OpenMode a1) throw(FileNotFound): PDBFile(a0,a1), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,6);
}

sipPDBFile::sipPDBFile(const PDBFile& a0): PDBFile(a0), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,6);
}

sipPDBFile::~sipPDBFile() throw()
{
    sipCommonDtor(sipPySelf);
}

bool sipPDBFile::read(Protein& a0) throw(ParseError)
{
    extern bool sipVH_BALL_55(sip_gilstate_t,PyObject *,Protein&);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipNm_BALL_read);

    if (!meth)
        return PDBFile::read(a0);

    return sipVH_BALL_55(sipGILState,meth,a0);
}

bool sipPDBFile::read(Molecule& a0) throw(ParseError)
{
    extern bool sipVH_BALL_54(sip_gilstate_t,PyObject *,Molecule&);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,NULL,sipNm_BALL_read);

    if (!meth)
        return PDBFile::read(a0);

    return sipVH_BALL_54(sipGILState,meth,a0);
}

bool sipPDBFile::read(System& a0) throw(ParseError)
{
    extern bool sipVH_BALL_47(sip_gilstate_t,PyObject *,System&);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[2],sipPySelf,NULL,sipNm_BALL_read);

    if (!meth)
        return PDBFile::read(a0);

    return sipVH_BALL_47(sipGILState,meth,a0);
}

bool sipPDBFile::write(const Protein& a0) throw(File::CannotWrite)
{
    extern bool sipVH_BALL_53(sip_gilstate_t,PyObject *,const Protein&);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[3],sipPySelf,NULL,sipNm_BALL_write);

    if (!meth)
        return PDBFile::write(a0);

    return sipVH_BALL_53(sipGILState,meth,a0);
}

bool sipPDBFile::write(const Molecule& a0) throw(File::CannotWrite)
{
    extern bool sipVH_BALL_48(sip_gilstate_t,PyObject *,const Molecule&);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[4],sipPySelf,NULL,sipNm_BALL_write);

    if (!meth)
        return PDBFile::write(a0);

    return sipVH_BALL_48(sipGILState,meth,a0);
}

bool sipPDBFile::write(const System& a0) throw(File::CannotWrite)
{
    extern bool sipVH_BALL_49(sip_gilstate_t,PyObject *,const System&);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[5],sipPySelf,NULL,sipNm_BALL_write);

    if (!meth)
        return PDBFile::write(a0);

    return sipVH_BALL_49(sipGILState,meth,a0);
}


extern "C" {static PyObject *meth_PDBFile_read(PyObject *, PyObject *);}
static PyObject *meth_PDBFile_read(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        Protein * a0;
        PDBFile *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_PDBFile,&sipCpp,sipClass_Protein,&a0))
        {
            bool sipRes;

            try
            {
            sipRes = (sipSelfWasArg ? sipCpp->PDBFile::read(*a0) : sipCpp->read(*a0));
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
        Molecule * a0;
        PDBFile *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_PDBFile,&sipCpp,sipClass_Molecule,&a0))
        {
            bool sipRes;

            try
            {
            sipRes = (sipSelfWasArg ? sipCpp->PDBFile::read(*a0) : sipCpp->read(*a0));
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
        System * a0;
        PDBFile *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_PDBFile,&sipCpp,sipClass_System,&a0))
        {
            bool sipRes;

            try
            {
            sipRes = (sipSelfWasArg ? sipCpp->PDBFile::read(*a0) : sipCpp->read(*a0));
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

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_PDBFile,sipNm_BALL_read);

    return NULL;
}


extern "C" {static PyObject *meth_PDBFile_write(PyObject *, PyObject *);}
static PyObject *meth_PDBFile_write(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        const Protein * a0;
        PDBFile *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_PDBFile,&sipCpp,sipClass_Protein,&a0))
        {
            bool sipRes;

            try
            {
            sipRes = (sipSelfWasArg ? sipCpp->PDBFile::write(*a0) : sipCpp->write(*a0));
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
        PDBFile *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_PDBFile,&sipCpp,sipClass_Molecule,&a0))
        {
            bool sipRes;

            try
            {
            sipRes = (sipSelfWasArg ? sipCpp->PDBFile::write(*a0) : sipCpp->write(*a0));
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
        const System * a0;
        PDBFile *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_PDBFile,&sipCpp,sipClass_System,&a0))
        {
            bool sipRes;

            try
            {
            sipRes = (sipSelfWasArg ? sipCpp->PDBFile::write(*a0) : sipCpp->write(*a0));
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_PDBFile,sipNm_BALL_write);

    return NULL;
}


extern "C" {static PyObject *meth_PDBFile_close(PyObject *, PyObject *);}
static PyObject *meth_PDBFile_close(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        PDBFile *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_PDBFile,&sipCpp))
        {
            try
            {
            sipCpp->close();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_PDBFile,sipNm_BALL_close);

    return NULL;
}


extern "C" {static PyObject *slot_PDBFile___lshift__(PyObject *sipArg0,PyObject *sipArg1);}
static PyObject *slot_PDBFile___lshift__(PyObject *sipArg0,PyObject *sipArg1)
{
    int sipArgsParsed = 0;

    {
        PDBFile * a0;
        const Protein * a1;

        if (sipParsePair(&sipArgsParsed,sipArg0,sipArg1,"JAJA",sipClass_PDBFile,&a0,sipClass_Protein,&a1))
        {
            try
            {
            (*a0 << *a1);
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

    {
        PDBFile * a0;
        const Molecule * a1;

        if (sipParsePair(&sipArgsParsed,sipArg0,sipArg1,"JAJA",sipClass_PDBFile,&a0,sipClass_Molecule,&a1))
        {
            try
            {
            (*a0 << *a1);
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

    {
        PDBFile * a0;
        const System * a1;

        if (sipParsePair(&sipArgsParsed,sipArg0,sipArg1,"JAJA",sipClass_PDBFile,&a0,sipClass_System,&a1))
        {
            try
            {
            (*a0 << *a1);
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

    return sipPySlotExtend(&sipModuleAPI_BALL,lshift_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_PDBFile___rshift__(PyObject *sipArg0,PyObject *sipArg1);}
static PyObject *slot_PDBFile___rshift__(PyObject *sipArg0,PyObject *sipArg1)
{
    int sipArgsParsed = 0;

    {
        PDBFile * a0;
        Protein * a1;

        if (sipParsePair(&sipArgsParsed,sipArg0,sipArg1,"JAJA",sipClass_PDBFile,&a0,sipClass_Protein,&a1))
        {
            try
            {
            (*a0 >> *a1);
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

    {
        PDBFile * a0;
        Molecule * a1;

        if (sipParsePair(&sipArgsParsed,sipArg0,sipArg1,"JAJA",sipClass_PDBFile,&a0,sipClass_Molecule,&a1))
        {
            try
            {
            (*a0 >> *a1);
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

    {
        PDBFile * a0;
        System * a1;

        if (sipParsePair(&sipArgsParsed,sipArg0,sipArg1,"JAJA",sipClass_PDBFile,&a0,sipClass_System,&a1))
        {
            try
            {
            (*a0 >> *a1);
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

    return sipPySlotExtend(&sipModuleAPI_BALL,rshift_slot,NULL,sipArg0,sipArg1);
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_PDBFile(void *, sipWrapperType *);}
static void *cast_PDBFile(void *ptr,sipWrapperType *targetClass)
{
    if (targetClass == sipClass_PDBFile)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_PDBFile(void *, int);}
static void release_PDBFile(void *ptr,int state)
{
    if (state & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipPDBFile *>(ptr);
    else
        delete reinterpret_cast<PDBFile *>(ptr);
}


extern "C" {static void dealloc_PDBFile(sipWrapper *);}
static void dealloc_PDBFile(sipWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipPDBFile *>(sipSelf->u.cppPtr)->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_PDBFile(sipSelf->u.cppPtr,sipSelf->flags);
    }
}


extern "C" {static void *init_PDBFile(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_PDBFile(sipWrapper *sipSelf,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    sipPDBFile *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            try
            {
            sipCpp = new sipPDBFile();
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
        const String * a0;
        int a0State = 0;
        OpenMode a1def = std::ios::in;
        OpenMode * a1 = &a1def;
        int a1State = 0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"J1|J1",sipClass_String,&a0,&a0State,sipClass_OpenMode,&a1,&a1State))
        {
            try
            {
            sipCpp = new sipPDBFile(*a0,*a1);
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
        const PDBFile * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_PDBFile,&a0))
        {
            try
            {
            sipCpp = new sipPDBFile(*a0);
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


extern "C" {static void *forceConvertTo_PDBFile(PyObject *, int *);}
static void *forceConvertTo_PDBFile(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_PDBFile))
        return sipConvertToCpp(valobj,sipClass_PDBFile,iserrp);

    sipBadClass(sipNm_BALL_PDBFile);

    *iserrp = 1;

    return NULL;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_PDBFile[] = {
    {(void *)slot_PDBFile___lshift__, lshift_slot},
    {(void *)slot_PDBFile___rshift__, rshift_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_PDBFile[] = {
    {sipNm_BALL_close, meth_PDBFile_close, METH_VARARGS, NULL},
    {sipNm_BALL_read, meth_PDBFile_read, METH_VARARGS, NULL},
    {sipNm_BALL_write, meth_PDBFile_write, METH_VARARGS, NULL}
};


sipTypeDef sipType_BALL_PDBFile = {
    0,
    0,
    "BALL.PDBFile",
    0,
    {0, 0, 1},
    0,
    slots_PDBFile,
    3, methods_PDBFile,
    0, 0,
    0,
    init_PDBFile,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_PDBFile,
    cast_PDBFile,
    release_PDBFile,
    forceConvertTo_PDBFile,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
