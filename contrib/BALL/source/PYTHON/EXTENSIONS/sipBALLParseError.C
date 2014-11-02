/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLParseError.h"

#include "sipBALLGeneralException.h"
#include "sipBALLString.h"
#include "sipBALLParseError.h"



extern "C" {static PyObject *slot_ParseError___repr__(PyObject *sipSelf);}
static PyObject *slot_ParseError___repr__(PyObject *sipSelf)
{
    ParseError *sipCpp = reinterpret_cast<ParseError *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_ParseError));

    if (!sipCpp)
        return 0;


    {
        {
            PyObject * sipRes = 0;

#line 470 "exception.sip"
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
#line 44 "sipBALLParseError.C"

            return sipRes;
        }
    }
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_ParseError(void *, sipWrapperType *);}
static void *cast_ParseError(void *ptr,sipWrapperType *targetClass)
{
    void *res;

    if (targetClass == sipClass_ParseError)
        return ptr;

    if ((res = sipCast_GeneralException((GeneralException *)(ParseError *)ptr,targetClass)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_ParseError(void *, int);}
static void release_ParseError(void *ptr,int)
{
    delete reinterpret_cast<ParseError *>(ptr);
}


extern "C" {static void dealloc_ParseError(sipWrapper *);}
static void dealloc_ParseError(sipWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_ParseError(sipSelf->u.cppPtr,0);
    }
}


extern "C" {static void *init_ParseError(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_ParseError(sipWrapper *,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    ParseError *sipCpp = 0;

    if (!sipCpp)
    {
        const char * a0;
        int a1;
        const String * a2;
        int a2State = 0;
        const String * a3;
        int a3State = 0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"siJ1J1",&a0,&a1,sipClass_String,&a2,&a2State,sipClass_String,&a3,&a3State))
        {
            sipCpp = new ParseError(a0,a1,*a2,*a3);

            sipReleaseInstance(const_cast<String *>(a2),sipClass_String,a2State);
            sipReleaseInstance(const_cast<String *>(a3),sipClass_String,a3State);
        }
    }

    if (!sipCpp)
    {
        const ParseError * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_ParseError,&a0))
        {
            try
            {
            sipCpp = new ParseError(*a0);
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


extern "C" {static void *forceConvertTo_ParseError(PyObject *, int *);}
static void *forceConvertTo_ParseError(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_ParseError))
        return sipConvertToCpp(valobj,sipClass_ParseError,iserrp);

    sipBadClass(sipNm_BALL_ParseError);

    *iserrp = 1;

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedClassDef supers_ParseError[] = {{240, 255, 1}};


/* Define this type's Python slots. */
static sipPySlotDef slots_ParseError[] = {
    {(void *)slot_ParseError___repr__, repr_slot},
    {0, (sipPySlotType)0}
};


sipTypeDef sipType_BALL_ParseError = {
    0,
    0,
    "BALL.ParseError",
    0,
    {0, 0, 1},
    supers_ParseError,
    slots_ParseError,
    0, 0,
    0, 0,
    0,
    init_ParseError,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_ParseError,
    cast_ParseError,
    release_ParseError,
    forceConvertTo_ParseError,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
