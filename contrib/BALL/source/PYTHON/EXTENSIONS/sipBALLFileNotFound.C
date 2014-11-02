/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLFileNotFound.h"

#include "sipBALLGeneralException.h"
#include "sipBALLString.h"
#include "sipBALLFileNotFound.h"



extern "C" {static PyObject *meth_FileNotFound_getFilename(PyObject *, PyObject *);}
static PyObject *meth_FileNotFound_getFilename(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        FileNotFound *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_FileNotFound,&sipCpp))
        {
            String *sipRes;

            try
            {
            sipRes = new String(sipCpp->getFilename());
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return sipConvertFromNewInstance(sipRes,sipClass_String,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_FileNotFound,sipNm_BALL_getFilename);

    return NULL;
}


extern "C" {static PyObject *slot_FileNotFound___repr__(PyObject *sipSelf);}
static PyObject *slot_FileNotFound___repr__(PyObject *sipSelf)
{
    FileNotFound *sipCpp = reinterpret_cast<FileNotFound *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_FileNotFound));

    if (!sipCpp)
        return 0;


    {
        {
            PyObject * sipRes = 0;

#line 443 "exception.sip"
  if (sipCpp == 0)
  {
    sipRes = PyString_FromString("");
  }
  else
  {
    sipRes = PyString_FromString(String(String(sipCpp->getName())
					+ " in line " + String(sipCpp->getLine()) + " of "
          + String(sipCpp->getFile()) + ": " + String(sipCpp->getMessage())).c_str());
  }
#line 77 "sipBALLFileNotFound.C"

            return sipRes;
        }
    }
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_FileNotFound(void *, sipWrapperType *);}
static void *cast_FileNotFound(void *ptr,sipWrapperType *targetClass)
{
    void *res;

    if (targetClass == sipClass_FileNotFound)
        return ptr;

    if ((res = sipCast_GeneralException((GeneralException *)(FileNotFound *)ptr,targetClass)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_FileNotFound(void *, int);}
static void release_FileNotFound(void *ptr,int)
{
    delete reinterpret_cast<FileNotFound *>(ptr);
}


extern "C" {static void dealloc_FileNotFound(sipWrapper *);}
static void dealloc_FileNotFound(sipWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_FileNotFound(sipSelf->u.cppPtr,0);
    }
}


extern "C" {static void *init_FileNotFound(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_FileNotFound(sipWrapper *,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    FileNotFound *sipCpp = 0;

    if (!sipCpp)
    {
        const char * a0;
        int a1;
        const String * a2;
        int a2State = 0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"siJ1",&a0,&a1,sipClass_String,&a2,&a2State))
        {
            try
            {
            sipCpp = new FileNotFound(a0,a1,*a2);
            }
            catch (...)
            {

            sipReleaseInstance(const_cast<String *>(a2),sipClass_String,a2State);
                sipRaiseUnknownException();
                return NULL;
            }

            sipReleaseInstance(const_cast<String *>(a2),sipClass_String,a2State);
        }
    }

    if (!sipCpp)
    {
        const FileNotFound * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_FileNotFound,&a0))
        {
            try
            {
            sipCpp = new FileNotFound(*a0);
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


extern "C" {static void *forceConvertTo_FileNotFound(PyObject *, int *);}
static void *forceConvertTo_FileNotFound(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_FileNotFound))
        return sipConvertToCpp(valobj,sipClass_FileNotFound,iserrp);

    sipBadClass(sipNm_BALL_FileNotFound);

    *iserrp = 1;

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedClassDef supers_FileNotFound[] = {{240, 255, 1}};


/* Define this type's Python slots. */
static sipPySlotDef slots_FileNotFound[] = {
    {(void *)slot_FileNotFound___repr__, repr_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_FileNotFound[] = {
    {sipNm_BALL_getFilename, meth_FileNotFound_getFilename, METH_VARARGS, NULL}
};


sipTypeDef sipType_BALL_FileNotFound = {
    0,
    0,
    "BALL.FileNotFound",
    0,
    {0, 0, 1},
    supers_FileNotFound,
    slots_FileNotFound,
    1, methods_FileNotFound,
    0, 0,
    0,
    init_FileNotFound,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_FileNotFound,
    cast_FileNotFound,
    release_FileNotFound,
    forceConvertTo_FileNotFound,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
