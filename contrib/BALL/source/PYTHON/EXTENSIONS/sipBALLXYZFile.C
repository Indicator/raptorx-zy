/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLXYZFile.h"

#include "sipBALLFile.h"
#include "sipBALLFileNotFound.h"
#include "sipBALLFileCannotWrite.h"
#include "sipBALLString.h"
#include "sipBALLOpenMode.h"
#include "sipBALLXYZFile.h"
#include "sipBALLSystem.h"


sipXYZFile::sipXYZFile(): XYZFile(), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,2);
}

sipXYZFile::sipXYZFile(const String& a0,OpenMode a1) throw(FileNotFound): XYZFile(a0,a1), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,2);
}

sipXYZFile::sipXYZFile(const XYZFile& a0): XYZFile(a0), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,2);
}

sipXYZFile::~sipXYZFile() throw()
{
    sipCommonDtor(sipPySelf);
}

bool sipXYZFile::write(const System& a0) throw(File::CannotWrite)
{
    extern bool sipVH_BALL_49(sip_gilstate_t,PyObject *,const System&);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipNm_BALL_write);

    if (!meth)
        return XYZFile::write(a0);

    return sipVH_BALL_49(sipGILState,meth,a0);
}

bool sipXYZFile::read(System& a0)
{
    extern bool sipVH_BALL_47(sip_gilstate_t,PyObject *,System&);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,NULL,sipNm_BALL_read);

    if (!meth)
        return XYZFile::read(a0);

    return sipVH_BALL_47(sipGILState,meth,a0);
}


extern "C" {static PyObject *meth_XYZFile_write(PyObject *, PyObject *);}
static PyObject *meth_XYZFile_write(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        const System * a0;
        XYZFile *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_XYZFile,&sipCpp,sipClass_System,&a0))
        {
            bool sipRes;

            try
            {
            sipRes = (sipSelfWasArg ? sipCpp->XYZFile::write(*a0) : sipCpp->write(*a0));
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_XYZFile,sipNm_BALL_write);

    return NULL;
}


extern "C" {static PyObject *meth_XYZFile_read(PyObject *, PyObject *);}
static PyObject *meth_XYZFile_read(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        System * a0;
        XYZFile *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_XYZFile,&sipCpp,sipClass_System,&a0))
        {
            bool sipRes;

            try
            {
            sipRes = (sipSelfWasArg ? sipCpp->XYZFile::read(*a0) : sipCpp->read(*a0));
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_XYZFile,sipNm_BALL_read);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_XYZFile(void *, sipWrapperType *);}
static void *cast_XYZFile(void *ptr,sipWrapperType *targetClass)
{
    void *res;

    if (targetClass == sipClass_XYZFile)
        return ptr;

    if ((res = sipCast_File((File *)(XYZFile *)ptr,targetClass)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_XYZFile(void *, int);}
static void release_XYZFile(void *ptr,int state)
{
    if (state & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipXYZFile *>(ptr);
    else
        delete reinterpret_cast<XYZFile *>(ptr);
}


extern "C" {static void dealloc_XYZFile(sipWrapper *);}
static void dealloc_XYZFile(sipWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipXYZFile *>(sipSelf->u.cppPtr)->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_XYZFile(sipSelf->u.cppPtr,sipSelf->flags);
    }
}


extern "C" {static void *init_XYZFile(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_XYZFile(sipWrapper *sipSelf,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    sipXYZFile *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            try
            {
            sipCpp = new sipXYZFile();
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
            sipCpp = new sipXYZFile(*a0,*a1);
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
        const XYZFile * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_XYZFile,&a0))
        {
            try
            {
            sipCpp = new sipXYZFile(*a0);
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


extern "C" {static void *forceConvertTo_XYZFile(PyObject *, int *);}
static void *forceConvertTo_XYZFile(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_XYZFile))
        return sipConvertToCpp(valobj,sipClass_XYZFile,iserrp);

    sipBadClass(sipNm_BALL_XYZFile);

    *iserrp = 1;

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedClassDef supers_XYZFile[] = {{163, 255, 1}};


static PyMethodDef methods_XYZFile[] = {
    {sipNm_BALL_read, meth_XYZFile_read, METH_VARARGS, NULL},
    {sipNm_BALL_write, meth_XYZFile_write, METH_VARARGS, NULL}
};


sipTypeDef sipType_BALL_XYZFile = {
    0,
    0,
    "BALL.XYZFile",
    0,
    {0, 0, 1},
    supers_XYZFile,
    0,
    2, methods_XYZFile,
    0, 0,
    0,
    init_XYZFile,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_XYZFile,
    cast_XYZFile,
    release_XYZFile,
    forceConvertTo_XYZFile,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
