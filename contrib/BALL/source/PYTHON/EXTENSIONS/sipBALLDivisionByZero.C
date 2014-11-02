/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLDivisionByZero.h"

#include "sipBALLGeneralException.h"
#include "sipBALLDivisionByZero.h"



extern "C" {static PyObject *slot_DivisionByZero___repr__(PyObject *sipSelf);}
static PyObject *slot_DivisionByZero___repr__(PyObject *sipSelf)
{
    DivisionByZero *sipCpp = reinterpret_cast<DivisionByZero *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_DivisionByZero));

    if (!sipCpp)
        return 0;


    {
        {
            PyObject * sipRes = 0;

#line 417 "exception.sip"
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
#line 43 "sipBALLDivisionByZero.C"

            return sipRes;
        }
    }
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_DivisionByZero(void *, sipWrapperType *);}
static void *cast_DivisionByZero(void *ptr,sipWrapperType *targetClass)
{
    void *res;

    if (targetClass == sipClass_DivisionByZero)
        return ptr;

    if ((res = sipCast_GeneralException((GeneralException *)(DivisionByZero *)ptr,targetClass)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_DivisionByZero(void *, int);}
static void release_DivisionByZero(void *ptr,int)
{
    delete reinterpret_cast<DivisionByZero *>(ptr);
}


extern "C" {static void dealloc_DivisionByZero(sipWrapper *);}
static void dealloc_DivisionByZero(sipWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_DivisionByZero(sipSelf->u.cppPtr,0);
    }
}


extern "C" {static void *init_DivisionByZero(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_DivisionByZero(sipWrapper *,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    DivisionByZero *sipCpp = 0;

    if (!sipCpp)
    {
        const char * a0;
        int a1;

        if (sipParseArgs(sipArgsParsed,sipArgs,"si",&a0,&a1))
        {
            try
            {
            sipCpp = new DivisionByZero(a0,a1);
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
        const DivisionByZero * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_DivisionByZero,&a0))
        {
            try
            {
            sipCpp = new DivisionByZero(*a0);
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


extern "C" {static void *forceConvertTo_DivisionByZero(PyObject *, int *);}
static void *forceConvertTo_DivisionByZero(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_DivisionByZero))
        return sipConvertToCpp(valobj,sipClass_DivisionByZero,iserrp);

    sipBadClass(sipNm_BALL_DivisionByZero);

    *iserrp = 1;

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedClassDef supers_DivisionByZero[] = {{240, 255, 1}};


/* Define this type's Python slots. */
static sipPySlotDef slots_DivisionByZero[] = {
    {(void *)slot_DivisionByZero___repr__, repr_slot},
    {0, (sipPySlotType)0}
};


sipTypeDef sipType_BALL_DivisionByZero = {
    0,
    0,
    "BALL.DivisionByZero",
    0,
    {0, 0, 1},
    supers_DivisionByZero,
    slots_DivisionByZero,
    0, 0,
    0, 0,
    0,
    init_DivisionByZero,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_DivisionByZero,
    cast_DivisionByZero,
    release_DivisionByZero,
    forceConvertTo_DivisionByZero,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
