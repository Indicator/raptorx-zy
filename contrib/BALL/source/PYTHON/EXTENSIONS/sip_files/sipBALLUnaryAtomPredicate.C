/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLUnaryAtomPredicate.h"

#include "sipBALLUnaryAtomPredicate.h"
#include "sipBALLAtom.h"



extern "C" {static PyObject *slot_UnaryAtomPredicate___call__(PyObject *sipSelf,PyObject *sipArgs);}
static PyObject *slot_UnaryAtomPredicate___call__(PyObject *sipSelf,PyObject *sipArgs)
{
    UnaryAtomPredicate *sipCpp = reinterpret_cast<UnaryAtomPredicate *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_UnaryAtomPredicate));

    if (!sipCpp)
        return 0;

    int sipArgsParsed = 0;

    {
        const Atom * a0;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"JA",sipClass_Atom,&a0))
        {
            bool sipRes = 0;

#line 38 "predicateConcept.sip"
	sipRes = sipCpp->operator()(*a0);
#line 38 "sipBALLUnaryAtomPredicate.C"

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_UnaryAtomPredicate,sipNm_BALL___call__);

    return 0;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_UnaryAtomPredicate(void *, sipWrapperType *);}
static void *cast_UnaryAtomPredicate(void *ptr,sipWrapperType *targetClass)
{
    if (targetClass == sipClass_UnaryAtomPredicate)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_UnaryAtomPredicate(void *, int);}
static void release_UnaryAtomPredicate(void *ptr,int)
{
    delete reinterpret_cast<UnaryAtomPredicate *>(ptr);
}


extern "C" {static void dealloc_UnaryAtomPredicate(sipWrapper *);}
static void dealloc_UnaryAtomPredicate(sipWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_UnaryAtomPredicate(sipSelf->u.cppPtr,0);
    }
}


extern "C" {static void *init_UnaryAtomPredicate(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_UnaryAtomPredicate(sipWrapper *,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    UnaryAtomPredicate *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            sipCpp = new UnaryAtomPredicate();
        }
    }

    if (!sipCpp)
    {
        const UnaryAtomPredicate * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_UnaryAtomPredicate,&a0))
        {
            try
            {
            sipCpp = new UnaryAtomPredicate(*a0);
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


extern "C" {static void *forceConvertTo_UnaryAtomPredicate(PyObject *, int *);}
static void *forceConvertTo_UnaryAtomPredicate(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_UnaryAtomPredicate))
        return sipConvertToCpp(valobj,sipClass_UnaryAtomPredicate,iserrp);

    sipBadClass(sipNm_BALL_UnaryAtomPredicate);

    *iserrp = 1;

    return NULL;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_UnaryAtomPredicate[] = {
    {(void *)slot_UnaryAtomPredicate___call__, call_slot},
    {0, (sipPySlotType)0}
};


sipTypeDef sipType_BALL_UnaryAtomPredicate = {
    0,
    0,
    "BALL.UnaryAtomPredicate",
    0,
    {0, 0, 1},
    0,
    slots_UnaryAtomPredicate,
    0, 0,
    0, 0,
    0,
    init_UnaryAtomPredicate,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_UnaryAtomPredicate,
    cast_UnaryAtomPredicate,
    release_UnaryAtomPredicate,
    forceConvertTo_UnaryAtomPredicate,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
