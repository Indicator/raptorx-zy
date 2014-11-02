/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLUnaryCompositePredicate.h"

#include "sipBALLUnaryCompositePredicate.h"
#include "sipBALLComposite.h"



extern "C" {static PyObject *slot_UnaryCompositePredicate___call__(PyObject *sipSelf,PyObject *sipArgs);}
static PyObject *slot_UnaryCompositePredicate___call__(PyObject *sipSelf,PyObject *sipArgs)
{
    UnaryCompositePredicate *sipCpp = reinterpret_cast<UnaryCompositePredicate *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_UnaryCompositePredicate));

    if (!sipCpp)
        return 0;

    int sipArgsParsed = 0;

    {
        const Composite * a0;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"JA",sipClass_Composite,&a0))
        {
            bool sipRes = 0;

#line 20 "predicateConcept.sip"
	sipRes = sipCpp->operator()(*a0);
#line 38 "sipBALLUnaryCompositePredicate.C"

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_UnaryCompositePredicate,sipNm_BALL___call__);

    return 0;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_UnaryCompositePredicate(void *, sipWrapperType *);}
static void *cast_UnaryCompositePredicate(void *ptr,sipWrapperType *targetClass)
{
    if (targetClass == sipClass_UnaryCompositePredicate)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_UnaryCompositePredicate(void *, int);}
static void release_UnaryCompositePredicate(void *ptr,int)
{
    delete reinterpret_cast<UnaryCompositePredicate *>(ptr);
}


extern "C" {static void dealloc_UnaryCompositePredicate(sipWrapper *);}
static void dealloc_UnaryCompositePredicate(sipWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_UnaryCompositePredicate(sipSelf->u.cppPtr,0);
    }
}


extern "C" {static void *init_UnaryCompositePredicate(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_UnaryCompositePredicate(sipWrapper *,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    UnaryCompositePredicate *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            sipCpp = new UnaryCompositePredicate();
        }
    }

    if (!sipCpp)
    {
        const UnaryCompositePredicate * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_UnaryCompositePredicate,&a0))
        {
            try
            {
            sipCpp = new UnaryCompositePredicate(*a0);
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


extern "C" {static void *forceConvertTo_UnaryCompositePredicate(PyObject *, int *);}
static void *forceConvertTo_UnaryCompositePredicate(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_UnaryCompositePredicate))
        return sipConvertToCpp(valobj,sipClass_UnaryCompositePredicate,iserrp);

    sipBadClass(sipNm_BALL_UnaryCompositePredicate);

    *iserrp = 1;

    return NULL;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_UnaryCompositePredicate[] = {
    {(void *)slot_UnaryCompositePredicate___call__, call_slot},
    {0, (sipPySlotType)0}
};


sipTypeDef sipType_BALL_UnaryCompositePredicate = {
    0,
    0,
    "BALL.UnaryCompositePredicate",
    0,
    {0, 0, 1},
    0,
    slots_UnaryCompositePredicate,
    0, 0,
    0, 0,
    0,
    init_UnaryCompositePredicate,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_UnaryCompositePredicate,
    cast_UnaryCompositePredicate,
    release_UnaryCompositePredicate,
    forceConvertTo_UnaryCompositePredicate,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
