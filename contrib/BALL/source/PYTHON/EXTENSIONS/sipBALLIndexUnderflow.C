/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLIndexUnderflow.h"

#include "sipBALLGeneralException.h"
#include "sipBALLIndex.h"
#include "sipBALLIndexUnderflow.h"



extern "C" {static PyObject *slot_IndexUnderflow___repr__(PyObject *sipSelf);}
static PyObject *slot_IndexUnderflow___repr__(PyObject *sipSelf)
{
    IndexUnderflow *sipCpp = reinterpret_cast<IndexUnderflow *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_IndexUnderflow));

    if (!sipCpp)
        return 0;


    {
        {
            PyObject * sipRes = 0;

#line 61 "exception.sip"
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
#line 44 "sipBALLIndexUnderflow.C"

            return sipRes;
        }
    }
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_IndexUnderflow(void *, sipWrapperType *);}
static void *cast_IndexUnderflow(void *ptr,sipWrapperType *targetClass)
{
    void *res;

    if (targetClass == sipClass_IndexUnderflow)
        return ptr;

    if ((res = sipCast_GeneralException((GeneralException *)(IndexUnderflow *)ptr,targetClass)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_IndexUnderflow(void *, int);}
static void release_IndexUnderflow(void *ptr,int)
{
    delete reinterpret_cast<IndexUnderflow *>(ptr);
}


extern "C" {static void dealloc_IndexUnderflow(sipWrapper *);}
static void dealloc_IndexUnderflow(sipWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_IndexUnderflow(sipSelf->u.cppPtr,0);
    }
}


extern "C" {static void *init_IndexUnderflow(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_IndexUnderflow(sipWrapper *,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    IndexUnderflow *sipCpp = 0;

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
            sipCpp = new IndexUnderflow(a0,a1,*a2,a3);
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
        const IndexUnderflow * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_IndexUnderflow,&a0))
        {
            try
            {
            sipCpp = new IndexUnderflow(*a0);
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


extern "C" {static void *forceConvertTo_IndexUnderflow(PyObject *, int *);}
static void *forceConvertTo_IndexUnderflow(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_IndexUnderflow))
        return sipConvertToCpp(valobj,sipClass_IndexUnderflow,iserrp);

    sipBadClass(sipNm_BALL_IndexUnderflow);

    *iserrp = 1;

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedClassDef supers_IndexUnderflow[] = {{240, 255, 1}};


/* Define this type's Python slots. */
static sipPySlotDef slots_IndexUnderflow[] = {
    {(void *)slot_IndexUnderflow___repr__, repr_slot},
    {0, (sipPySlotType)0}
};


sipTypeDef sipType_BALL_IndexUnderflow = {
    0,
    0,
    "BALL.IndexUnderflow",
    0,
    {0, 0, 1},
    supers_IndexUnderflow,
    slots_IndexUnderflow,
    0, 0,
    0, 0,
    0,
    init_IndexUnderflow,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_IndexUnderflow,
    cast_IndexUnderflow,
    release_IndexUnderflow,
    forceConvertTo_IndexUnderflow,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
