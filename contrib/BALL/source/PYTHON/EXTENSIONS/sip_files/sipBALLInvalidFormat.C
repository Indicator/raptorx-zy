/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLInvalidFormat.h"

#include "sipBALLGeneralException.h"
#include "sipBALLString.h"
#include "sipBALLInvalidFormat.h"



extern "C" {static PyObject *slot_InvalidFormat___repr__(PyObject *sipSelf);}
static PyObject *slot_InvalidFormat___repr__(PyObject *sipSelf)
{
    InvalidFormat *sipCpp = reinterpret_cast<InvalidFormat *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_InvalidFormat));

    if (!sipCpp)
        return 0;


    {
        {
            PyObject * sipRes = 0;

#line 163 "exception.sip"
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
#line 44 "sipBALLInvalidFormat.C"

            return sipRes;
        }
    }
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_InvalidFormat(void *, sipWrapperType *);}
static void *cast_InvalidFormat(void *ptr,sipWrapperType *targetClass)
{
    void *res;

    if (targetClass == sipClass_InvalidFormat)
        return ptr;

    if ((res = sipCast_GeneralException((GeneralException *)(InvalidFormat *)ptr,targetClass)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_InvalidFormat(void *, int);}
static void release_InvalidFormat(void *ptr,int)
{
    delete reinterpret_cast<InvalidFormat *>(ptr);
}


extern "C" {static void dealloc_InvalidFormat(sipWrapper *);}
static void dealloc_InvalidFormat(sipWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_InvalidFormat(sipSelf->u.cppPtr,0);
    }
}


extern "C" {static void *init_InvalidFormat(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_InvalidFormat(sipWrapper *,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    InvalidFormat *sipCpp = 0;

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
            sipCpp = new InvalidFormat(a0,a1,*a2);
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
        const InvalidFormat * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_InvalidFormat,&a0))
        {
            try
            {
            sipCpp = new InvalidFormat(*a0);
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


extern "C" {static void *forceConvertTo_InvalidFormat(PyObject *, int *);}
static void *forceConvertTo_InvalidFormat(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_InvalidFormat))
        return sipConvertToCpp(valobj,sipClass_InvalidFormat,iserrp);

    sipBadClass(sipNm_BALL_InvalidFormat);

    *iserrp = 1;

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedClassDef supers_InvalidFormat[] = {{240, 255, 1}};


/* Define this type's Python slots. */
static sipPySlotDef slots_InvalidFormat[] = {
    {(void *)slot_InvalidFormat___repr__, repr_slot},
    {0, (sipPySlotType)0}
};


sipTypeDef sipType_BALL_InvalidFormat = {
    0,
    0,
    "BALL.InvalidFormat",
    0,
    {0, 0, 1},
    supers_InvalidFormat,
    slots_InvalidFormat,
    0, 0,
    0, 0,
    0,
    init_InvalidFormat,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_InvalidFormat,
    cast_InvalidFormat,
    release_InvalidFormat,
    forceConvertTo_InvalidFormat,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
