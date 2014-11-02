/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLOutOfMemory.h"

#include "sipBALLGeneralException.h"
#include "sipBALLOutOfMemory.h"



extern "C" {static PyObject *slot_OutOfMemory___repr__(PyObject *sipSelf);}
static PyObject *slot_OutOfMemory___repr__(PyObject *sipSelf)
{
    OutOfMemory *sipCpp = reinterpret_cast<OutOfMemory *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_OutOfMemory));

    if (!sipCpp)
        return 0;


    {
        {
            PyObject * sipRes = 0;

#line 340 "exception.sip"
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
#line 43 "sipBALLOutOfMemory.C"

            return sipRes;
        }
    }
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_OutOfMemory(void *, sipWrapperType *);}
static void *cast_OutOfMemory(void *ptr,sipWrapperType *targetClass)
{
    void *res;

    if (targetClass == sipClass_OutOfMemory)
        return ptr;

    if ((res = sipCast_GeneralException((GeneralException *)(OutOfMemory *)ptr,targetClass)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_OutOfMemory(void *, int);}
static void release_OutOfMemory(void *ptr,int)
{
    delete reinterpret_cast<OutOfMemory *>(ptr);
}


extern "C" {static void dealloc_OutOfMemory(sipWrapper *);}
static void dealloc_OutOfMemory(sipWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_OutOfMemory(sipSelf->u.cppPtr,0);
    }
}


extern "C" {static void *init_OutOfMemory(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_OutOfMemory(sipWrapper *,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    OutOfMemory *sipCpp = 0;

    if (!sipCpp)
    {
        const char * a0;
        int a1;
        int a2 = 0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"si|i",&a0,&a1,&a2))
        {
            try
            {
            sipCpp = new OutOfMemory(a0,a1,a2);
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
        const OutOfMemory * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_OutOfMemory,&a0))
        {
            try
            {
            sipCpp = new OutOfMemory(*a0);
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


extern "C" {static void *forceConvertTo_OutOfMemory(PyObject *, int *);}
static void *forceConvertTo_OutOfMemory(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_OutOfMemory))
        return sipConvertToCpp(valobj,sipClass_OutOfMemory,iserrp);

    sipBadClass(sipNm_BALL_OutOfMemory);

    *iserrp = 1;

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedClassDef supers_OutOfMemory[] = {{240, 255, 1}};


/* Define this type's Python slots. */
static sipPySlotDef slots_OutOfMemory[] = {
    {(void *)slot_OutOfMemory___repr__, repr_slot},
    {0, (sipPySlotType)0}
};


sipTypeDef sipType_BALL_OutOfMemory = {
    0,
    0,
    "BALL.OutOfMemory",
    0,
    {0, 0, 1},
    supers_OutOfMemory,
    slots_OutOfMemory,
    0, 0,
    0, 0,
    0,
    init_OutOfMemory,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_OutOfMemory,
    cast_OutOfMemory,
    release_OutOfMemory,
    forceConvertTo_OutOfMemory,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
