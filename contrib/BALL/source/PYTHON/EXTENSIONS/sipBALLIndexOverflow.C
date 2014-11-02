/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLIndexOverflow.h"

#include "sipBALLGeneralException.h"
#include "sipBALLIndex.h"
#include "sipBALLIndexOverflow.h"



extern "C" {static PyObject *slot_IndexOverflow___repr__(PyObject *sipSelf);}
static PyObject *slot_IndexOverflow___repr__(PyObject *sipSelf)
{
    IndexOverflow *sipCpp = reinterpret_cast<IndexOverflow *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_IndexOverflow));

    if (!sipCpp)
        return 0;


    {
        {
            PyObject * sipRes = 0;

#line 113 "exception.sip"
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
#line 44 "sipBALLIndexOverflow.C"

            return sipRes;
        }
    }
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_IndexOverflow(void *, sipWrapperType *);}
static void *cast_IndexOverflow(void *ptr,sipWrapperType *targetClass)
{
    void *res;

    if (targetClass == sipClass_IndexOverflow)
        return ptr;

    if ((res = sipCast_GeneralException((GeneralException *)(IndexOverflow *)ptr,targetClass)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_IndexOverflow(void *, int);}
static void release_IndexOverflow(void *ptr,int)
{
    delete reinterpret_cast<IndexOverflow *>(ptr);
}


extern "C" {static void dealloc_IndexOverflow(sipWrapper *);}
static void dealloc_IndexOverflow(sipWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_IndexOverflow(sipSelf->u.cppPtr,0);
    }
}


extern "C" {static void *init_IndexOverflow(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_IndexOverflow(sipWrapper *,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    IndexOverflow *sipCpp = 0;

    if (!sipCpp)
    {
        const char * a0;
        int a1;
        Index a2def = 0;
        Index * a2 = &a2def;
        int a2State = 0;
        int a3 = 0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"si|M1i",&a0,&a1,sipMappedType_Index,&a2,&a2State,&a3))
        {
            try
            {
            sipCpp = new IndexOverflow(a0,a1,*a2,a3);
            }
            catch (...)
            {

            sipReleaseMappedType(a2,sipMappedType_Index,a2State);
                sipRaiseUnknownException();
                return NULL;
            }

            sipReleaseMappedType(a2,sipMappedType_Index,a2State);
        }
    }

    if (!sipCpp)
    {
        const IndexOverflow * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_IndexOverflow,&a0))
        {
            try
            {
            sipCpp = new IndexOverflow(*a0);
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


extern "C" {static void *forceConvertTo_IndexOverflow(PyObject *, int *);}
static void *forceConvertTo_IndexOverflow(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_IndexOverflow))
        return sipConvertToCpp(valobj,sipClass_IndexOverflow,iserrp);

    sipBadClass(sipNm_BALL_IndexOverflow);

    *iserrp = 1;

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedClassDef supers_IndexOverflow[] = {{240, 255, 1}};


/* Define this type's Python slots. */
static sipPySlotDef slots_IndexOverflow[] = {
    {(void *)slot_IndexOverflow___repr__, repr_slot},
    {0, (sipPySlotType)0}
};


sipTypeDef sipType_BALL_IndexOverflow = {
    0,
    0,
    "BALL.IndexOverflow",
    0,
    {0, 0, 1},
    supers_IndexOverflow,
    slots_IndexOverflow,
    0, 0,
    0, 0,
    0,
    init_IndexOverflow,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_IndexOverflow,
    cast_IndexOverflow,
    release_IndexOverflow,
    forceConvertTo_IndexOverflow,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
