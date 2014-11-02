/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLTooManyErrors.h"

#include "sipBALLGeneralException.h"
#include "sipBALLTooManyErrors.h"



extern "C" {static PyObject *slot_TooManyErrors___repr__(PyObject *sipSelf);}
static PyObject *slot_TooManyErrors___repr__(PyObject *sipSelf)
{
    TooManyErrors *sipCpp = reinterpret_cast<TooManyErrors *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_TooManyErrors));

    if (!sipCpp)
        return 0;


    {
        {
            PyObject * sipRes = 0;

#line 313 "exception.sip"
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
#line 43 "sipBALLTooManyErrors.C"

            return sipRes;
        }
    }
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_TooManyErrors(void *, sipWrapperType *);}
static void *cast_TooManyErrors(void *ptr,sipWrapperType *targetClass)
{
    void *res;

    if (targetClass == sipClass_TooManyErrors)
        return ptr;

    if ((res = sipCast_GeneralException((GeneralException *)(TooManyErrors *)ptr,targetClass)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_TooManyErrors(void *, int);}
static void release_TooManyErrors(void *ptr,int)
{
    delete reinterpret_cast<TooManyErrors *>(ptr);
}


extern "C" {static void dealloc_TooManyErrors(sipWrapper *);}
static void dealloc_TooManyErrors(sipWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_TooManyErrors(sipSelf->u.cppPtr,0);
    }
}


extern "C" {static void *init_TooManyErrors(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_TooManyErrors(sipWrapper *,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    TooManyErrors *sipCpp = 0;

    if (!sipCpp)
    {
        const char * a0;
        int a1;

        if (sipParseArgs(sipArgsParsed,sipArgs,"si",&a0,&a1))
        {
            try
            {
            sipCpp = new TooManyErrors(a0,a1);
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
        const TooManyErrors * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_TooManyErrors,&a0))
        {
            try
            {
            sipCpp = new TooManyErrors(*a0);
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


extern "C" {static void *forceConvertTo_TooManyErrors(PyObject *, int *);}
static void *forceConvertTo_TooManyErrors(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_TooManyErrors))
        return sipConvertToCpp(valobj,sipClass_TooManyErrors,iserrp);

    sipBadClass(sipNm_BALL_TooManyErrors);

    *iserrp = 1;

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedClassDef supers_TooManyErrors[] = {{240, 255, 1}};


/* Define this type's Python slots. */
static sipPySlotDef slots_TooManyErrors[] = {
    {(void *)slot_TooManyErrors___repr__, repr_slot},
    {0, (sipPySlotType)0}
};


sipTypeDef sipType_BALL_TooManyErrors = {
    0,
    0,
    "BALL.TooManyErrors",
    0,
    {0, 0, 1},
    supers_TooManyErrors,
    slots_TooManyErrors,
    0, 0,
    0, 0,
    0,
    init_TooManyErrors,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_TooManyErrors,
    cast_TooManyErrors,
    release_TooManyErrors,
    forceConvertTo_TooManyErrors,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
