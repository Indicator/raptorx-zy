/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLIncompatibleIterators.h"

#include "sipBALLGeneralException.h"
#include "sipBALLIncompatibleIterators.h"



extern "C" {static PyObject *slot_IncompatibleIterators___repr__(PyObject *sipSelf);}
static PyObject *slot_IncompatibleIterators___repr__(PyObject *sipSelf)
{
    IncompatibleIterators *sipCpp = reinterpret_cast<IncompatibleIterators *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_IncompatibleIterators));

    if (!sipCpp)
        return 0;


    {
        {
            PyObject * sipRes = 0;

#line 263 "exception.sip"
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
#line 43 "sipBALLIncompatibleIterators.C"

            return sipRes;
        }
    }
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_IncompatibleIterators(void *, sipWrapperType *);}
static void *cast_IncompatibleIterators(void *ptr,sipWrapperType *targetClass)
{
    void *res;

    if (targetClass == sipClass_IncompatibleIterators)
        return ptr;

    if ((res = sipCast_GeneralException((GeneralException *)(IncompatibleIterators *)ptr,targetClass)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_IncompatibleIterators(void *, int);}
static void release_IncompatibleIterators(void *ptr,int)
{
    delete reinterpret_cast<IncompatibleIterators *>(ptr);
}


extern "C" {static void dealloc_IncompatibleIterators(sipWrapper *);}
static void dealloc_IncompatibleIterators(sipWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_IncompatibleIterators(sipSelf->u.cppPtr,0);
    }
}


extern "C" {static void *init_IncompatibleIterators(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_IncompatibleIterators(sipWrapper *,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    IncompatibleIterators *sipCpp = 0;

    if (!sipCpp)
    {
        const char * a0;
        int a1;

        if (sipParseArgs(sipArgsParsed,sipArgs,"si",&a0,&a1))
        {
            try
            {
            sipCpp = new IncompatibleIterators(a0,a1);
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
        const IncompatibleIterators * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_IncompatibleIterators,&a0))
        {
            try
            {
            sipCpp = new IncompatibleIterators(*a0);
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


extern "C" {static void *forceConvertTo_IncompatibleIterators(PyObject *, int *);}
static void *forceConvertTo_IncompatibleIterators(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_IncompatibleIterators))
        return sipConvertToCpp(valobj,sipClass_IncompatibleIterators,iserrp);

    sipBadClass(sipNm_BALL_IncompatibleIterators);

    *iserrp = 1;

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedClassDef supers_IncompatibleIterators[] = {{240, 255, 1}};


/* Define this type's Python slots. */
static sipPySlotDef slots_IncompatibleIterators[] = {
    {(void *)slot_IncompatibleIterators___repr__, repr_slot},
    {0, (sipPySlotType)0}
};


sipTypeDef sipType_BALL_IncompatibleIterators = {
    0,
    0,
    "BALL.IncompatibleIterators",
    0,
    {0, 0, 1},
    supers_IncompatibleIterators,
    slots_IncompatibleIterators,
    0, 0,
    0, 0,
    0,
    init_IncompatibleIterators,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_IncompatibleIterators,
    cast_IncompatibleIterators,
    release_IncompatibleIterators,
    forceConvertTo_IncompatibleIterators,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
