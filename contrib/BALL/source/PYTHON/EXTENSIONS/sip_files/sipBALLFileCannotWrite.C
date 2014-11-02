/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLFileCannotWrite.h"

#include "sipBALLString.h"
#include "sipBALLFileCannotWrite.h"



extern "C" {static PyObject *meth_File_CannotWrite_getFilename(PyObject *, PyObject *);}
static PyObject *meth_File_CannotWrite_getFilename(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        File::CannotWrite *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_File_CannotWrite,&sipCpp))
        {
            String *sipRes;

            sipRes = new String(sipCpp->getFilename());

            return sipConvertFromNewInstance(sipRes,sipClass_String,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_CannotWrite,sipNm_BALL_getFilename);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_File_CannotWrite(void *, sipWrapperType *);}
static void *cast_File_CannotWrite(void *ptr,sipWrapperType *targetClass)
{
    if (targetClass == sipClass_File_CannotWrite)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_File_CannotWrite(void *, int);}
static void release_File_CannotWrite(void *ptr,int)
{
    delete reinterpret_cast<File::CannotWrite *>(ptr);
}


extern "C" {static void dealloc_File_CannotWrite(sipWrapper *);}
static void dealloc_File_CannotWrite(sipWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_File_CannotWrite(sipSelf->u.cppPtr,0);
    }
}


extern "C" {static void *init_File_CannotWrite(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_File_CannotWrite(sipWrapper *,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    File::CannotWrite *sipCpp = 0;

    if (!sipCpp)
    {
        const char * a0;
        int a1;
        const String * a2;
        int a2State = 0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"siJ1",&a0,&a1,sipClass_String,&a2,&a2State))
        {
            sipCpp = new File::CannotWrite(a0,a1,*a2);

            sipReleaseInstance(const_cast<String *>(a2),sipClass_String,a2State);
        }
    }

    if (!sipCpp)
    {
        const File::CannotWrite * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_File_CannotWrite,&a0))
        {
            try
            {
            sipCpp = new File::CannotWrite(*a0);
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }
        }
    }

    return sipCpp;
}


extern "C" {static void *forceConvertTo_File_CannotWrite(PyObject *, int *);}
static void *forceConvertTo_File_CannotWrite(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_File_CannotWrite))
        return sipConvertToCpp(valobj,sipClass_File_CannotWrite,iserrp);

    sipBadClass(sipNm_BALL_CannotWrite);

    *iserrp = 1;

    return NULL;
}


static PyMethodDef methods_File_CannotWrite[] = {
    {sipNm_BALL_getFilename, meth_File_CannotWrite_getFilename, METH_VARARGS, NULL}
};


sipTypeDef sipType_BALL_File_CannotWrite = {
    0,
    0,
    "BALL.File.CannotWrite",
    0,
    {163, 255, 0},
    0,
    0,
    1, methods_File_CannotWrite,
    0, 0,
    0,
    init_File_CannotWrite,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_File_CannotWrite,
    cast_File_CannotWrite,
    release_File_CannotWrite,
    forceConvertTo_File_CannotWrite,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
