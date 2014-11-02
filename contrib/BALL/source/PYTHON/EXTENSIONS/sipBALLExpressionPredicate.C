/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLExpressionPredicate.h"

#include "sipBALLUnaryAtomPredicate.h"
#include "sipBALLString.h"
#include "sipBALLExpressionPredicate.h"
#include "sipBALLAtom.h"


sipExpressionPredicate::sipExpressionPredicate(): ExpressionPredicate(), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,1);
}

sipExpressionPredicate::sipExpressionPredicate(const String& a0): ExpressionPredicate(a0), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,1);
}

sipExpressionPredicate::sipExpressionPredicate(const ExpressionPredicate& a0): ExpressionPredicate(a0), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,1);
}

sipExpressionPredicate::~sipExpressionPredicate() throw()
{
    sipCommonDtor(sipPySelf);
}

void sipExpressionPredicate::setArgument(const String& a0) throw()
{
    extern void sipVH_BALL_9(sip_gilstate_t,PyObject *,const String&);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipNm_BALL_setArgument);

    if (!meth)
    {
        ExpressionPredicate::setArgument(a0);
        return;
    }

    sipVH_BALL_9(sipGILState,meth,a0);
}


extern "C" {static PyObject *meth_ExpressionPredicate_setArgument(PyObject *, PyObject *);}
static PyObject *meth_ExpressionPredicate_setArgument(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        const String * a0;
        int a0State = 0;
        ExpressionPredicate *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ1",&sipSelf,sipClass_ExpressionPredicate,&sipCpp,sipClass_String,&a0,&a0State))
        {
            (sipSelfWasArg ? sipCpp->ExpressionPredicate::setArgument(*a0) : sipCpp->setArgument(*a0));

            sipReleaseInstance(const_cast<String *>(a0),sipClass_String,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_ExpressionPredicate,sipNm_BALL_setArgument);

    return NULL;
}


extern "C" {static PyObject *slot_ExpressionPredicate___call__(PyObject *sipSelf,PyObject *sipArgs);}
static PyObject *slot_ExpressionPredicate___call__(PyObject *sipSelf,PyObject *sipArgs)
{
    ExpressionPredicate *sipCpp = reinterpret_cast<ExpressionPredicate *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_ExpressionPredicate));

    if (!sipCpp)
        return 0;

    int sipArgsParsed = 0;

    {
        const Atom * a0;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"JA",sipClass_Atom,&a0))
        {
            bool sipRes = 0;

#line 22 "expression.sip"
	sipRes = sipCpp->operator () (*a0);
#line 107 "sipBALLExpressionPredicate.C"

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_ExpressionPredicate,sipNm_BALL___call__);

    return 0;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_ExpressionPredicate(void *, sipWrapperType *);}
static void *cast_ExpressionPredicate(void *ptr,sipWrapperType *targetClass)
{
    void *res;

    if (targetClass == sipClass_ExpressionPredicate)
        return ptr;

    if ((res = sipCast_UnaryAtomPredicate((UnaryAtomPredicate *)(ExpressionPredicate *)ptr,targetClass)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_ExpressionPredicate(void *, int);}
static void release_ExpressionPredicate(void *ptr,int state)
{
    if (state & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipExpressionPredicate *>(ptr);
    else
        delete reinterpret_cast<ExpressionPredicate *>(ptr);
}


extern "C" {static void dealloc_ExpressionPredicate(sipWrapper *);}
static void dealloc_ExpressionPredicate(sipWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipExpressionPredicate *>(sipSelf->u.cppPtr)->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_ExpressionPredicate(sipSelf->u.cppPtr,sipSelf->flags);
    }
}


extern "C" {static void *init_ExpressionPredicate(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_ExpressionPredicate(sipWrapper *sipSelf,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    sipExpressionPredicate *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            try
            {
            sipCpp = new sipExpressionPredicate();
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
        const String * a0;
        int a0State = 0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"J1",sipClass_String,&a0,&a0State))
        {
            try
            {
            sipCpp = new sipExpressionPredicate(*a0);
            }
            catch (...)
            {

            sipReleaseInstance(const_cast<String *>(a0),sipClass_String,a0State);
                sipRaiseUnknownException();
                return NULL;
            }

            sipReleaseInstance(const_cast<String *>(a0),sipClass_String,a0State);
        }
    }

    if (!sipCpp)
    {
        const ExpressionPredicate * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_ExpressionPredicate,&a0))
        {
            try
            {
            sipCpp = new sipExpressionPredicate(*a0);
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }
        }
    }

    if (sipCpp)
        sipCpp->sipPySelf = sipSelf;

    return sipCpp;
}


extern "C" {static void *forceConvertTo_ExpressionPredicate(PyObject *, int *);}
static void *forceConvertTo_ExpressionPredicate(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_ExpressionPredicate))
        return sipConvertToCpp(valobj,sipClass_ExpressionPredicate,iserrp);

    sipBadClass(sipNm_BALL_ExpressionPredicate);

    *iserrp = 1;

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedClassDef supers_ExpressionPredicate[] = {{196, 255, 1}};


/* Define this type's Python slots. */
static sipPySlotDef slots_ExpressionPredicate[] = {
    {(void *)slot_ExpressionPredicate___call__, call_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_ExpressionPredicate[] = {
    {sipNm_BALL_setArgument, meth_ExpressionPredicate_setArgument, METH_VARARGS, NULL}
};


sipTypeDef sipType_BALL_ExpressionPredicate = {
    0,
    0,
    "BALL.ExpressionPredicate",
    0,
    {0, 0, 1},
    supers_ExpressionPredicate,
    slots_ExpressionPredicate,
    1, methods_ExpressionPredicate,
    0, 0,
    0,
    init_ExpressionPredicate,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_ExpressionPredicate,
    cast_ExpressionPredicate,
    release_ExpressionPredicate,
    forceConvertTo_ExpressionPredicate,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
