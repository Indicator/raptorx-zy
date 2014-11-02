/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLNullPointer.h"

#include "sipBALLGeneralException.h"
#include "sipBALLNullPointer.h"



extern "C" {static PyObject *slot_NullPointer___repr__(PyObject *sipSelf);}
static PyObject *slot_NullPointer___repr__(PyObject *sipSelf)
{
    NullPointer *sipCpp = reinterpret_cast<NullPointer *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_NullPointer));

    if (!sipCpp)
        return 0;


    {
        {
            PyObject * sipRes = 0;

#line 213 "exception.sip"
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
#line 43 "sipBALLNullPointer.C"

            return sipRes;
        }
    }
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_NullPointer(void *, sipWrapperType *);}
static void *cast_NullPointer(void *ptr,sipWrapperType *targetClass)
{
    void *res;

    if (targetClass == sipClass_NullPointer)
        return ptr;

    if ((res = sipCast_GeneralException((GeneralException *)(NullPointer *)ptr,targetClass)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_NullPointer(void *, int);}
static void release_NullPointer(void *ptr,int)
{
    delete reinterpret_cast<NullPointer *>(ptr);
}


extern "C" {static void dealloc_NullPointer(sipWrapper *);}
static void dealloc_NullPointer(sipWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_NullPointer(sipSelf->u.cppPtr,0);
    }
}


extern "C" {static void *init_NullPointer(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_NullPointer(sipWrapper *,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    NullPointer *sipCpp = 0;

    if (!sipCpp)
    {
        const char * a0;
        int a1;

        if (sipParseArgs(sipArgsParsed,sipArgs,"si",&a0,&a1))
        {
            try
            {
            sipCpp = new NullPointer(a0,a1);
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
        const NullPointer * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_NullPointer,&a0))
        {
            try
            {
            sipCpp = new NullPointer(*a0);
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


extern "C" {static void *forceConvertTo_NullPointer(PyObject *, int *);}
static void *forceConvertTo_NullPointer(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_NullPointer))
        return sipConvertToCpp(valobj,sipClass_NullPointer,iserrp);

    sipBadClass(sipNm_BALL_NullPointer);

    *iserrp = 1;

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedClassDef supers_NullPointer[] = {{240, 255, 1}};


/* Define this type's Python slots. */
static sipPySlotDef slots_NullPointer[] = {
    {(void *)slot_NullPointer___repr__, repr_slot},
    {0, (sipPySlotType)0}
};


sipTypeDef sipType_BALL_NullPointer = {
    0,
    0,
    "BALL.NullPointer",
    0,
    {0, 0, 1},
    supers_NullPointer,
    slots_NullPointer,
    0, 0,
    0, 0,
    0,
    init_NullPointer,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_NullPointer,
    cast_NullPointer,
    release_NullPointer,
    forceConvertTo_NullPointer,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
