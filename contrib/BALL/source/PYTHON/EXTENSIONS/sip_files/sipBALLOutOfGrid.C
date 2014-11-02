/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLOutOfGrid.h"

#include "sipBALLGeneralException.h"
#include "sipBALLOutOfGrid.h"



extern "C" {static PyObject *slot_OutOfGrid___repr__(PyObject *sipSelf);}
static PyObject *slot_OutOfGrid___repr__(PyObject *sipSelf)
{
    OutOfGrid *sipCpp = reinterpret_cast<OutOfGrid *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_OutOfGrid));

    if (!sipCpp)
        return 0;


    {
        {
            PyObject * sipRes = 0;

#line 366 "exception.sip"
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
#line 43 "sipBALLOutOfGrid.C"

            return sipRes;
        }
    }
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_OutOfGrid(void *, sipWrapperType *);}
static void *cast_OutOfGrid(void *ptr,sipWrapperType *targetClass)
{
    void *res;

    if (targetClass == sipClass_OutOfGrid)
        return ptr;

    if ((res = sipCast_GeneralException((GeneralException *)(OutOfGrid *)ptr,targetClass)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_OutOfGrid(void *, int);}
static void release_OutOfGrid(void *ptr,int)
{
    delete reinterpret_cast<OutOfGrid *>(ptr);
}


extern "C" {static void dealloc_OutOfGrid(sipWrapper *);}
static void dealloc_OutOfGrid(sipWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_OutOfGrid(sipSelf->u.cppPtr,0);
    }
}


extern "C" {static void *init_OutOfGrid(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_OutOfGrid(sipWrapper *,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    OutOfGrid *sipCpp = 0;

    if (!sipCpp)
    {
        const char * a0;
        int a1;

        if (sipParseArgs(sipArgsParsed,sipArgs,"si",&a0,&a1))
        {
            sipCpp = new OutOfGrid(a0,a1);
        }
    }

    if (!sipCpp)
    {
        const OutOfGrid * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_OutOfGrid,&a0))
        {
            try
            {
            sipCpp = new OutOfGrid(*a0);
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


extern "C" {static void *forceConvertTo_OutOfGrid(PyObject *, int *);}
static void *forceConvertTo_OutOfGrid(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_OutOfGrid))
        return sipConvertToCpp(valobj,sipClass_OutOfGrid,iserrp);

    sipBadClass(sipNm_BALL_OutOfGrid);

    *iserrp = 1;

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedClassDef supers_OutOfGrid[] = {{240, 255, 1}};


/* Define this type's Python slots. */
static sipPySlotDef slots_OutOfGrid[] = {
    {(void *)slot_OutOfGrid___repr__, repr_slot},
    {0, (sipPySlotType)0}
};


sipTypeDef sipType_BALL_OutOfGrid = {
    0,
    0,
    "BALL.OutOfGrid",
    0,
    {0, 0, 1},
    supers_OutOfGrid,
    slots_OutOfGrid,
    0, 0,
    0, 0,
    0,
    init_OutOfGrid,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_OutOfGrid,
    cast_OutOfGrid,
    release_OutOfGrid,
    forceConvertTo_OutOfGrid,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
