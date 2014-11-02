/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLInvalidIterator.h"

#include "sipBALLGeneralException.h"
#include "sipBALLInvalidIterator.h"



extern "C" {static PyObject *slot_InvalidIterator___repr__(PyObject *sipSelf);}
static PyObject *slot_InvalidIterator___repr__(PyObject *sipSelf)
{
    InvalidIterator *sipCpp = reinterpret_cast<InvalidIterator *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_InvalidIterator));

    if (!sipCpp)
        return 0;


    {
        {
            PyObject * sipRes = 0;

#line 238 "exception.sip"
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
#line 43 "sipBALLInvalidIterator.C"

            return sipRes;
        }
    }
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_InvalidIterator(void *, sipWrapperType *);}
static void *cast_InvalidIterator(void *ptr,sipWrapperType *targetClass)
{
    void *res;

    if (targetClass == sipClass_InvalidIterator)
        return ptr;

    if ((res = sipCast_GeneralException((GeneralException *)(InvalidIterator *)ptr,targetClass)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_InvalidIterator(void *, int);}
static void release_InvalidIterator(void *ptr,int)
{
    delete reinterpret_cast<InvalidIterator *>(ptr);
}


extern "C" {static void dealloc_InvalidIterator(sipWrapper *);}
static void dealloc_InvalidIterator(sipWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_InvalidIterator(sipSelf->u.cppPtr,0);
    }
}


extern "C" {static void *init_InvalidIterator(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_InvalidIterator(sipWrapper *,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    InvalidIterator *sipCpp = 0;

    if (!sipCpp)
    {
        const char * a0;
        int a1;

        if (sipParseArgs(sipArgsParsed,sipArgs,"si",&a0,&a1))
        {
            try
            {
            sipCpp = new InvalidIterator(a0,a1);
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
        const InvalidIterator * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_InvalidIterator,&a0))
        {
            try
            {
            sipCpp = new InvalidIterator(*a0);
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


extern "C" {static void *forceConvertTo_InvalidIterator(PyObject *, int *);}
static void *forceConvertTo_InvalidIterator(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_InvalidIterator))
        return sipConvertToCpp(valobj,sipClass_InvalidIterator,iserrp);

    sipBadClass(sipNm_BALL_InvalidIterator);

    *iserrp = 1;

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedClassDef supers_InvalidIterator[] = {{240, 255, 1}};


/* Define this type's Python slots. */
static sipPySlotDef slots_InvalidIterator[] = {
    {(void *)slot_InvalidIterator___repr__, repr_slot},
    {0, (sipPySlotType)0}
};


sipTypeDef sipType_BALL_InvalidIterator = {
    0,
    0,
    "BALL.InvalidIterator",
    0,
    {0, 0, 1},
    supers_InvalidIterator,
    slots_InvalidIterator,
    0, 0,
    0, 0,
    0,
    init_InvalidIterator,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_InvalidIterator,
    cast_InvalidIterator,
    release_InvalidIterator,
    forceConvertTo_InvalidIterator,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
