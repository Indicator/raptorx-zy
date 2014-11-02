/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLAtomType.h"

#include "sipBALLAtomType.h"



extern "C" {static PyObject *slot_AtomType___repr__(PyObject *sipSelf);}
static PyObject *slot_AtomType___repr__(PyObject *sipSelf)
{
    AtomType *sipCpp = reinterpret_cast<AtomType *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_AtomType));

    if (!sipCpp)
        return 0;


    {
        {
            PyObject * sipRes = 0;

#line 35 "atom.sip"
	sipRes = PyString_FromString(String(*sipCpp).c_str());
#line 33 "sipBALLAtomType.C"

            return sipRes;
        }
    }
}


extern "C" {static PyObject *slot_AtomType___str__(PyObject *sipSelf);}
static PyObject *slot_AtomType___str__(PyObject *sipSelf)
{
    AtomType *sipCpp = reinterpret_cast<AtomType *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_AtomType));

    if (!sipCpp)
        return 0;


    {
        {
            PyObject * sipRes = 0;

#line 30 "atom.sip"
	sipRes = PyString_FromString(String(*sipCpp).c_str());
#line 56 "sipBALLAtomType.C"

            return sipRes;
        }
    }
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_AtomType(void *, sipWrapperType *);}
static void *cast_AtomType(void *ptr,sipWrapperType *targetClass)
{
    if (targetClass == sipClass_AtomType)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_AtomType(void *, int);}
static void release_AtomType(void *ptr,int)
{
    delete reinterpret_cast<AtomType *>(ptr);
}


extern "C" {static void dealloc_AtomType(sipWrapper *);}
static void dealloc_AtomType(sipWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_AtomType(sipSelf->u.cppPtr,0);
    }
}


extern "C" {static void *init_AtomType(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_AtomType(sipWrapper *,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    AtomType *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            try
            {
            sipCpp = new AtomType();
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
        const AtomType * a0;
        int a0State = 0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"J1",sipClass_AtomType,&a0,&a0State))
        {
            try
            {
            sipCpp = new AtomType(*a0);
            }
            catch (...)
            {

            sipReleaseInstance(const_cast<AtomType *>(a0),sipClass_AtomType,a0State);
                sipRaiseUnknownException();
                return NULL;
            }

            sipReleaseInstance(const_cast<AtomType *>(a0),sipClass_AtomType,a0State);
        }
    }

    return sipCpp;
}


extern "C" {static int convertTo_AtomType(PyObject *, void **, int *, PyObject *);}
static int convertTo_AtomType(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *)
{
    AtomType **sipCppPtr = reinterpret_cast<AtomType **>(sipCppPtrV);

#line 16 "atom.sip"
	if (PyInt_Check(sipPy))
	{
		*sipCppPtr = new AtomType(PyInt_AS_LONG(sipPy));
	
		return 1;
	}
	
	*sipCppPtr = (AtomType*)sipConvertToCpp(sipPy, sipClass_AtomType, sipIsErr);

	return 0;
#line 157 "sipBALLAtomType.C"
}


extern "C" {static void *forceConvertTo_AtomType(PyObject *, int *);}
static void *forceConvertTo_AtomType(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (convertTo_AtomType(valobj,NULL,NULL,NULL))
    {
        void *val;

        /*
         * Note that we throw away the flag that says if the value
         * has just been created on the heap or not.
         */
        convertTo_AtomType(valobj,&val,iserrp,NULL);

        return val;
    }

    sipBadClass(sipNm_BALL_AtomType);

    *iserrp = 1;

    return NULL;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_AtomType[] = {
    {(void *)slot_AtomType___repr__, repr_slot},
    {(void *)slot_AtomType___str__, str_slot},
    {0, (sipPySlotType)0}
};


sipTypeDef sipType_BALL_AtomType = {
    0,
    0,
    "BALL.AtomType",
    0,
    {0, 0, 1},
    0,
    slots_AtomType,
    0, 0,
    0, 0,
    0,
    init_AtomType,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_AtomType,
    cast_AtomType,
    release_AtomType,
    forceConvertTo_AtomType,
    convertTo_AtomType,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
