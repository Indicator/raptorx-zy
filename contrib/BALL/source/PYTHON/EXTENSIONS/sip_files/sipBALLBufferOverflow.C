/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLBufferOverflow.h"

#include "sipBALLGeneralException.h"
#include "sipBALLBufferOverflow.h"



extern "C" {static PyObject *slot_BufferOverflow___repr__(PyObject *sipSelf);}
static PyObject *slot_BufferOverflow___repr__(PyObject *sipSelf)
{
    BufferOverflow *sipCpp = reinterpret_cast<BufferOverflow *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_BufferOverflow));

    if (!sipCpp)
        return 0;


    {
        {
            PyObject * sipRes = 0;

#line 392 "exception.sip"
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
#line 43 "sipBALLBufferOverflow.C"

            return sipRes;
        }
    }
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_BufferOverflow(void *, sipWrapperType *);}
static void *cast_BufferOverflow(void *ptr,sipWrapperType *targetClass)
{
    void *res;

    if (targetClass == sipClass_BufferOverflow)
        return ptr;

    if ((res = sipCast_GeneralException((GeneralException *)(BufferOverflow *)ptr,targetClass)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_BufferOverflow(void *, int);}
static void release_BufferOverflow(void *ptr,int)
{
    delete reinterpret_cast<BufferOverflow *>(ptr);
}


extern "C" {static void dealloc_BufferOverflow(sipWrapper *);}
static void dealloc_BufferOverflow(sipWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_BufferOverflow(sipSelf->u.cppPtr,0);
    }
}


extern "C" {static void *init_BufferOverflow(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_BufferOverflow(sipWrapper *,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    BufferOverflow *sipCpp = 0;

    if (!sipCpp)
    {
        const char * a0;
        int a1;

        if (sipParseArgs(sipArgsParsed,sipArgs,"si",&a0,&a1))
        {
            try
            {
            sipCpp = new BufferOverflow(a0,a1);
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
        const BufferOverflow * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_BufferOverflow,&a0))
        {
            try
            {
            sipCpp = new BufferOverflow(*a0);
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


extern "C" {static void *forceConvertTo_BufferOverflow(PyObject *, int *);}
static void *forceConvertTo_BufferOverflow(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_BufferOverflow))
        return sipConvertToCpp(valobj,sipClass_BufferOverflow,iserrp);

    sipBadClass(sipNm_BALL_BufferOverflow);

    *iserrp = 1;

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedClassDef supers_BufferOverflow[] = {{240, 255, 1}};


/* Define this type's Python slots. */
static sipPySlotDef slots_BufferOverflow[] = {
    {(void *)slot_BufferOverflow___repr__, repr_slot},
    {0, (sipPySlotType)0}
};


sipTypeDef sipType_BALL_BufferOverflow = {
    0,
    0,
    "BALL.BufferOverflow",
    0,
    {0, 0, 1},
    supers_BufferOverflow,
    slots_BufferOverflow,
    0, 0,
    0, 0,
    0,
    init_BufferOverflow,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_BufferOverflow,
    cast_BufferOverflow,
    release_BufferOverflow,
    forceConvertTo_BufferOverflow,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
