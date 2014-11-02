/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLSizeUnderflow.h"

#include "sipBALLGeneralException.h"
#include "sipBALLSizeUnderflow.h"



extern "C" {static PyObject *slot_SizeUnderflow___repr__(PyObject *sipSelf);}
static PyObject *slot_SizeUnderflow___repr__(PyObject *sipSelf)
{
    SizeUnderflow *sipCpp = reinterpret_cast<SizeUnderflow *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_SizeUnderflow));

    if (!sipCpp)
        return 0;


    {
        {
            PyObject * sipRes = 0;

#line 86 "exception.sip"
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
#line 43 "sipBALLSizeUnderflow.C"

            return sipRes;
        }
    }
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_SizeUnderflow(void *, sipWrapperType *);}
static void *cast_SizeUnderflow(void *ptr,sipWrapperType *targetClass)
{
    void *res;

    if (targetClass == sipClass_SizeUnderflow)
        return ptr;

    if ((res = sipCast_GeneralException((GeneralException *)(SizeUnderflow *)ptr,targetClass)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_SizeUnderflow(void *, int);}
static void release_SizeUnderflow(void *ptr,int)
{
    delete reinterpret_cast<SizeUnderflow *>(ptr);
}


extern "C" {static void dealloc_SizeUnderflow(sipWrapper *);}
static void dealloc_SizeUnderflow(sipWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_SizeUnderflow(sipSelf->u.cppPtr,0);
    }
}


extern "C" {static void *init_SizeUnderflow(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_SizeUnderflow(sipWrapper *,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    SizeUnderflow *sipCpp = 0;

    if (!sipCpp)
    {
        const char * a0;
        int a1;
        int a2 = 0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"si|i",&a0,&a1,&a2))
        {
            try
            {
            sipCpp = new SizeUnderflow(a0,a1,a2);
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
        const SizeUnderflow * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_SizeUnderflow,&a0))
        {
            try
            {
            sipCpp = new SizeUnderflow(*a0);
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


extern "C" {static void *forceConvertTo_SizeUnderflow(PyObject *, int *);}
static void *forceConvertTo_SizeUnderflow(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_SizeUnderflow))
        return sipConvertToCpp(valobj,sipClass_SizeUnderflow,iserrp);

    sipBadClass(sipNm_BALL_SizeUnderflow);

    *iserrp = 1;

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedClassDef supers_SizeUnderflow[] = {{240, 255, 1}};


/* Define this type's Python slots. */
static sipPySlotDef slots_SizeUnderflow[] = {
    {(void *)slot_SizeUnderflow___repr__, repr_slot},
    {0, (sipPySlotType)0}
};


sipTypeDef sipType_BALL_SizeUnderflow = {
    0,
    0,
    "BALL.SizeUnderflow",
    0,
    {0, 0, 1},
    supers_SizeUnderflow,
    slots_SizeUnderflow,
    0, 0,
    0, 0,
    0,
    init_SizeUnderflow,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_SizeUnderflow,
    cast_SizeUnderflow,
    release_SizeUnderflow,
    forceConvertTo_SizeUnderflow,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
