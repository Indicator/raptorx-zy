/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLMOL2File.h"

#include "sipBALLFile.h"
#include "sipBALLFileNotFound.h"
#include "sipBALLFileCannotWrite.h"
#include "sipBALLParseError.h"
#include "sipBALLString.h"
#include "sipBALLOpenMode.h"
#include "sipBALLMOL2File.h"
#include "sipBALLSystem.h"


sipMOL2File::sipMOL2File(): MOL2File(), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,2);
}

sipMOL2File::sipMOL2File(const String& a0,OpenMode a1) throw(FileNotFound): MOL2File(a0,a1), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,2);
}

sipMOL2File::sipMOL2File(const MOL2File& a0): MOL2File(a0), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,2);
}

sipMOL2File::~sipMOL2File() throw()
{
    sipCommonDtor(sipPySelf);
}

bool sipMOL2File::write(const System& a0) throw(File::CannotWrite)
{
    extern bool sipVH_BALL_49(sip_gilstate_t,PyObject *,const System&);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipNm_BALL_write);

    if (!meth)
        return MOL2File::write(a0);

    return sipVH_BALL_49(sipGILState,meth,a0);
}

bool sipMOL2File::read(System& a0) throw(ParseError)
{
    extern bool sipVH_BALL_47(sip_gilstate_t,PyObject *,System&);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,NULL,sipNm_BALL_read);

    if (!meth)
        return MOL2File::read(a0);

    return sipVH_BALL_47(sipGILState,meth,a0);
}


extern "C" {static PyObject *meth_MOL2File_write(PyObject *, PyObject *);}
static PyObject *meth_MOL2File_write(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        const System * a0;
        MOL2File *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_MOL2File,&sipCpp,sipClass_System,&a0))
        {
            bool sipRes;

            try
            {
            sipRes = (sipSelfWasArg ? sipCpp->MOL2File::write(*a0) : sipCpp->write(*a0));
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_MOL2File,sipNm_BALL_write);

    return NULL;
}


extern "C" {static PyObject *meth_MOL2File_read(PyObject *, PyObject *);}
static PyObject *meth_MOL2File_read(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        System * a0;
        MOL2File *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_MOL2File,&sipCpp,sipClass_System,&a0))
        {
            bool sipRes;

            try
            {
            sipRes = (sipSelfWasArg ? sipCpp->MOL2File::read(*a0) : sipCpp->read(*a0));
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_MOL2File,sipNm_BALL_read);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_MOL2File(void *, sipWrapperType *);}
static void *cast_MOL2File(void *ptr,sipWrapperType *targetClass)
{
    void *res;

    if (targetClass == sipClass_MOL2File)
        return ptr;

    if ((res = sipCast_File((File *)(MOL2File *)ptr,targetClass)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_MOL2File(void *, int);}
static void release_MOL2File(void *ptr,int state)
{
    if (state & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipMOL2File *>(ptr);
    else
        delete reinterpret_cast<MOL2File *>(ptr);
}


extern "C" {static void dealloc_MOL2File(sipWrapper *);}
static void dealloc_MOL2File(sipWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipMOL2File *>(sipSelf->u.cppPtr)->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_MOL2File(sipSelf->u.cppPtr,sipSelf->flags);
    }
}


extern "C" {static void *init_MOL2File(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_MOL2File(sipWrapper *sipSelf,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    sipMOL2File *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            try
            {
            sipCpp = new sipMOL2File();
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
            sipCpp = new sipMOL2File(*a0,*a1);
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
        const MOL2File * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_MOL2File,&a0))
        {
            try
            {
            sipCpp = new sipMOL2File(*a0);
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


extern "C" {static void *forceConvertTo_MOL2File(PyObject *, int *);}
static void *forceConvertTo_MOL2File(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_MOL2File))
        return sipConvertToCpp(valobj,sipClass_MOL2File,iserrp);

    sipBadClass(sipNm_BALL_MOL2File);

    *iserrp = 1;

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedClassDef supers_MOL2File[] = {{163, 255, 1}};


static PyMethodDef methods_MOL2File[] = {
    {sipNm_BALL_read, meth_MOL2File_read, METH_VARARGS, NULL},
    {sipNm_BALL_write, meth_MOL2File_write, METH_VARARGS, NULL}
};


sipTypeDef sipType_BALL_MOL2File = {
    0,
    0,
    "BALL.MOL2File",
    0,
    {0, 0, 1},
    supers_MOL2File,
    0,
    2, methods_MOL2File,
    0, 0,
    0,
    init_MOL2File,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_MOL2File,
    cast_MOL2File,
    release_MOL2File,
    forceConvertTo_MOL2File,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
