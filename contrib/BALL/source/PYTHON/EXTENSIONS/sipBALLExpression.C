/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLExpression.h"

#include "sipBALLString.h"
#include "sipBALLExpression.h"
#include "sipBALLExpressionPredicate.h"
#include "sipBALLAtom.h"



extern "C" {static PyObject *meth_Expression_hasPredicate(PyObject *, PyObject *);}
static PyObject *meth_Expression_hasPredicate(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const String * a0;
        int a0State = 0;
        Expression *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ1",&sipSelf,sipClass_Expression,&sipCpp,sipClass_String,&a0,&a0State))
        {
            bool sipRes;

            try
            {
            sipRes = sipCpp->hasPredicate(*a0);
            }
            catch (...)
            {

            sipReleaseInstance(const_cast<String *>(a0),sipClass_String,a0State);
                sipRaiseUnknownException();
                return NULL;
            }

            sipReleaseInstance(const_cast<String *>(a0),sipClass_String,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Expression,sipNm_BALL_hasPredicate);

    return NULL;
}


extern "C" {static PyObject *meth_Expression_getPredicate(PyObject *, PyObject *);}
static PyObject *meth_Expression_getPredicate(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const String * a0;
        int a0State = 0;
        const String& a1def = "";
        const String * a1 = &a1def;
        int a1State = 0;
        Expression *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ1|J1",&sipSelf,sipClass_Expression,&sipCpp,sipClass_String,&a0,&a0State,sipClass_String,&a1,&a1State))
        {
            ExpressionPredicate *sipRes;

            try
            {
            sipRes = sipCpp->getPredicate(*a0,*a1);
            }
            catch (...)
            {

            sipReleaseInstance(const_cast<String *>(a0),sipClass_String,a0State);
            sipReleaseInstance(const_cast<String *>(a1),sipClass_String,a1State);
                sipRaiseUnknownException();
                return NULL;
            }

            sipReleaseInstance(const_cast<String *>(a0),sipClass_String,a0State);
            sipReleaseInstance(const_cast<String *>(a1),sipClass_String,a1State);

            return sipConvertFromInstance(sipRes,sipClass_ExpressionPredicate,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Expression,sipNm_BALL_getPredicate);

    return NULL;
}


extern "C" {static PyObject *meth_Expression_setExpression(PyObject *, PyObject *);}
static PyObject *meth_Expression_setExpression(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const String * a0;
        int a0State = 0;
        Expression *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ1",&sipSelf,sipClass_Expression,&sipCpp,sipClass_String,&a0,&a0State))
        {
            try
            {
            sipCpp->setExpression(*a0);
            }
            catch (...)
            {

            sipReleaseInstance(const_cast<String *>(a0),sipClass_String,a0State);
                sipRaiseUnknownException();
                return NULL;
            }

            sipReleaseInstance(const_cast<String *>(a0),sipClass_String,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Expression,sipNm_BALL_setExpression);

    return NULL;
}


extern "C" {static PyObject *meth_Expression_getExpressionString(PyObject *, PyObject *);}
static PyObject *meth_Expression_getExpressionString(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Expression *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Expression,&sipCpp))
        {
            const String *sipRes;

            try
            {
            sipRes = &sipCpp->getExpressionString();
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return sipConvertFromInstance(const_cast<String *>(sipRes),sipClass_String,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Expression,sipNm_BALL_getExpressionString);

    return NULL;
}


extern "C" {static PyObject *slot_Expression___call__(PyObject *sipSelf,PyObject *sipArgs);}
static PyObject *slot_Expression___call__(PyObject *sipSelf,PyObject *sipArgs)
{
    Expression *sipCpp = reinterpret_cast<Expression *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_Expression));

    if (!sipCpp)
        return 0;

    int sipArgsParsed = 0;

    {
        const Atom * a0;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"JA",sipClass_Atom,&a0))
        {
            bool sipRes = 0;

#line 94 "expression.sip"
	sipRes = sipCpp->operator () (*a0);
#line 194 "sipBALLExpression.C"

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Expression,sipNm_BALL___call__);

    return 0;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_Expression(void *, sipWrapperType *);}
static void *cast_Expression(void *ptr,sipWrapperType *targetClass)
{
    if (targetClass == sipClass_Expression)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_Expression(void *, int);}
static void release_Expression(void *ptr,int)
{
    delete reinterpret_cast<Expression *>(ptr);
}


extern "C" {static void dealloc_Expression(sipWrapper *);}
static void dealloc_Expression(sipWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_Expression(sipSelf->u.cppPtr,0);
    }
}


extern "C" {static void *init_Expression(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_Expression(sipWrapper *,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    Expression *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            try
            {
            sipCpp = new Expression();
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
        const Expression * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_Expression,&a0))
        {
            try
            {
            sipCpp = new Expression(*a0);
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
            sipCpp = new Expression(*a0);
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

    return sipCpp;
}


extern "C" {static void *forceConvertTo_Expression(PyObject *, int *);}
static void *forceConvertTo_Expression(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_Expression))
        return sipConvertToCpp(valobj,sipClass_Expression,iserrp);

    sipBadClass(sipNm_BALL_Expression);

    *iserrp = 1;

    return NULL;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_Expression[] = {
    {(void *)slot_Expression___call__, call_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_Expression[] = {
    {sipNm_BALL_getExpressionString, meth_Expression_getExpressionString, METH_VARARGS, NULL},
    {sipNm_BALL_getPredicate, meth_Expression_getPredicate, METH_VARARGS, NULL},
    {sipNm_BALL_hasPredicate, meth_Expression_hasPredicate, METH_VARARGS, NULL},
    {sipNm_BALL_setExpression, meth_Expression_setExpression, METH_VARARGS, NULL}
};


sipTypeDef sipType_BALL_Expression = {
    0,
    0,
    "BALL.Expression",
    0,
    {0, 0, 1},
    0,
    slots_Expression,
    4, methods_Expression,
    0, 0,
    0,
    init_Expression,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_Expression,
    cast_Expression,
    release_Expression,
    forceConvertTo_Expression,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
