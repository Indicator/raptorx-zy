/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLIllegalSelfOperation.h"

#include "sipBALLGeneralException.h"
#include "sipBALLIllegalSelfOperation.h"



extern "C" {static PyObject *slot_IllegalSelfOperation___repr__(PyObject *sipSelf);}
static PyObject *slot_IllegalSelfOperation___repr__(PyObject *sipSelf)
{
    IllegalSelfOperation *sipCpp = reinterpret_cast<IllegalSelfOperation *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_IllegalSelfOperation));

    if (!sipCpp)
        return 0;


    {
        {
            PyObject * sipRes = 0;

#line 188 "exception.sip"
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
#line 43 "sipBALLIllegalSelfOperation.C"

            return sipRes;
        }
    }
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_IllegalSelfOperation(void *, sipWrapperType *);}
static void *cast_IllegalSelfOperation(void *ptr,sipWrapperType *targetClass)
{
    void *res;

    if (targetClass == sipClass_IllegalSelfOperation)
        return ptr;

    if ((res = sipCast_GeneralException((GeneralException *)(IllegalSelfOperation *)ptr,targetClass)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_IllegalSelfOperation(void *, int);}
static void release_IllegalSelfOperation(void *ptr,int)
{
    delete reinterpret_cast<IllegalSelfOperation *>(ptr);
}


extern "C" {static void dealloc_IllegalSelfOperation(sipWrapper *);}
static void dealloc_IllegalSelfOperation(sipWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_IllegalSelfOperation(sipSelf->u.cppPtr,0);
    }
}


extern "C" {static void *init_IllegalSelfOperation(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_IllegalSelfOperation(sipWrapper *,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    IllegalSelfOperation *sipCpp = 0;

    if (!sipCpp)
    {
        const char * a0;
        int a1;

        if (sipParseArgs(sipArgsParsed,sipArgs,"si",&a0,&a1))
        {
            try
            {
            sipCpp = new IllegalSelfOperation(a0,a1);
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
        const IllegalSelfOperation * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_IllegalSelfOperation,&a0))
        {
            try
            {
            sipCpp = new IllegalSelfOperation(*a0);
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


extern "C" {static void *forceConvertTo_IllegalSelfOperation(PyObject *, int *);}
static void *forceConvertTo_IllegalSelfOperation(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_IllegalSelfOperation))
        return sipConvertToCpp(valobj,sipClass_IllegalSelfOperation,iserrp);

    sipBadClass(sipNm_BALL_IllegalSelfOperation);

    *iserrp = 1;

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedClassDef supers_IllegalSelfOperation[] = {{240, 255, 1}};


/* Define this type's Python slots. */
static sipPySlotDef slots_IllegalSelfOperation[] = {
    {(void *)slot_IllegalSelfOperation___repr__, repr_slot},
    {0, (sipPySlotType)0}
};


sipTypeDef sipType_BALL_IllegalSelfOperation = {
    0,
    0,
    "BALL.IllegalSelfOperation",
    0,
    {0, 0, 1},
    supers_IllegalSelfOperation,
    slots_IllegalSelfOperation,
    0, 0,
    0, 0,
    0,
    init_IllegalSelfOperation,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_IllegalSelfOperation,
    cast_IllegalSelfOperation,
    release_IllegalSelfOperation,
    forceConvertTo_IllegalSelfOperation,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
