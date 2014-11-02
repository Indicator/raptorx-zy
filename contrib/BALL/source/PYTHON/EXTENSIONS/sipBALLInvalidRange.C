/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLInvalidRange.h"

#include "sipBALLGeneralException.h"
#include "sipBALLInvalidRange.h"



extern "C" {static PyObject *slot_InvalidRange___repr__(PyObject *sipSelf);}
static PyObject *slot_InvalidRange___repr__(PyObject *sipSelf)
{
    InvalidRange *sipCpp = reinterpret_cast<InvalidRange *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_InvalidRange));

    if (!sipCpp)
        return 0;


    {
        {
            PyObject * sipRes = 0;

#line 138 "exception.sip"
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
#line 43 "sipBALLInvalidRange.C"

            return sipRes;
        }
    }
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_InvalidRange(void *, sipWrapperType *);}
static void *cast_InvalidRange(void *ptr,sipWrapperType *targetClass)
{
    void *res;

    if (targetClass == sipClass_InvalidRange)
        return ptr;

    if ((res = sipCast_GeneralException((GeneralException *)(InvalidRange *)ptr,targetClass)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_InvalidRange(void *, int);}
static void release_InvalidRange(void *ptr,int)
{
    delete reinterpret_cast<InvalidRange *>(ptr);
}


extern "C" {static void dealloc_InvalidRange(sipWrapper *);}
static void dealloc_InvalidRange(sipWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_InvalidRange(sipSelf->u.cppPtr,0);
    }
}


extern "C" {static void *init_InvalidRange(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_InvalidRange(sipWrapper *,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    InvalidRange *sipCpp = 0;

    if (!sipCpp)
    {
        const char * a0;
        int a1;
        float a2;

        if (sipParseArgs(sipArgsParsed,sipArgs,"sif",&a0,&a1,&a2))
        {
            try
            {
            sipCpp = new InvalidRange(a0,a1,a2);
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
        const InvalidRange * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_InvalidRange,&a0))
        {
            try
            {
            sipCpp = new InvalidRange(*a0);
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


extern "C" {static void *forceConvertTo_InvalidRange(PyObject *, int *);}
static void *forceConvertTo_InvalidRange(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_InvalidRange))
        return sipConvertToCpp(valobj,sipClass_InvalidRange,iserrp);

    sipBadClass(sipNm_BALL_InvalidRange);

    *iserrp = 1;

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedClassDef supers_InvalidRange[] = {{240, 255, 1}};


/* Define this type's Python slots. */
static sipPySlotDef slots_InvalidRange[] = {
    {(void *)slot_InvalidRange___repr__, repr_slot},
    {0, (sipPySlotType)0}
};


sipTypeDef sipType_BALL_InvalidRange = {
    0,
    0,
    "BALL.InvalidRange",
    0,
    {0, 0, 1},
    supers_InvalidRange,
    slots_InvalidRange,
    0, 0,
    0, 0,
    0,
    init_InvalidRange,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_InvalidRange,
    cast_InvalidRange,
    release_InvalidRange,
    forceConvertTo_InvalidRange,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
