/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLNotImplemented.h"

#include "sipBALLGeneralException.h"
#include "sipBALLNotImplemented.h"



extern "C" {static PyObject *slot_NotImplemented___repr__(PyObject *sipSelf);}
static PyObject *slot_NotImplemented___repr__(PyObject *sipSelf)
{
    NotImplemented *sipCpp = reinterpret_cast<NotImplemented *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_NotImplemented));

    if (!sipCpp)
        return 0;


    {
        {
            PyObject * sipRes = 0;

#line 288 "exception.sip"
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
#line 43 "sipBALLNotImplemented.C"

            return sipRes;
        }
    }
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_NotImplemented(void *, sipWrapperType *);}
static void *cast_NotImplemented(void *ptr,sipWrapperType *targetClass)
{
    void *res;

    if (targetClass == sipClass_NotImplemented)
        return ptr;

    if ((res = sipCast_GeneralException((GeneralException *)(NotImplemented *)ptr,targetClass)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_NotImplemented(void *, int);}
static void release_NotImplemented(void *ptr,int)
{
    delete reinterpret_cast<NotImplemented *>(ptr);
}


extern "C" {static void dealloc_NotImplemented(sipWrapper *);}
static void dealloc_NotImplemented(sipWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_NotImplemented(sipSelf->u.cppPtr,0);
    }
}


extern "C" {static void *init_NotImplemented(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_NotImplemented(sipWrapper *,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    NotImplemented *sipCpp = 0;

    if (!sipCpp)
    {
        const char * a0;
        int a1;

        if (sipParseArgs(sipArgsParsed,sipArgs,"si",&a0,&a1))
        {
            try
            {
            sipCpp = new NotImplemented(a0,a1);
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
        const NotImplemented * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_NotImplemented,&a0))
        {
            try
            {
            sipCpp = new NotImplemented(*a0);
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


extern "C" {static void *forceConvertTo_NotImplemented(PyObject *, int *);}
static void *forceConvertTo_NotImplemented(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_NotImplemented))
        return sipConvertToCpp(valobj,sipClass_NotImplemented,iserrp);

    sipBadClass(sipNm_BALL_NotImplemented);

    *iserrp = 1;

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedClassDef supers_NotImplemented[] = {{240, 255, 1}};


/* Define this type's Python slots. */
static sipPySlotDef slots_NotImplemented[] = {
    {(void *)slot_NotImplemented___repr__, repr_slot},
    {0, (sipPySlotType)0}
};


sipTypeDef sipType_BALL_NotImplemented = {
    0,
    0,
    "BALL.NotImplemented",
    0,
    {0, 0, 1},
    supers_NotImplemented,
    slots_NotImplemented,
    0, 0,
    0, 0,
    0,
    init_NotImplemented,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_NotImplemented,
    cast_NotImplemented,
    release_NotImplemented,
    forceConvertTo_NotImplemented,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
