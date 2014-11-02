/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLRegularExpression.h"

#include "sipBALLNullPointer.h"
#include "sipBALLIndexUnderflow.h"
#include "sipBALLIndexOverflow.h"
#include "sipBALLString.h"
#include "sipBALLRegularExpression.h"
#include "sipBALLSubstring.h"


sipRegularExpression::sipRegularExpression(): RegularExpression(), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,2);
}

sipRegularExpression::sipRegularExpression(const RegularExpression& a0): RegularExpression(a0), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,2);
}

sipRegularExpression::sipRegularExpression(const String& a0,bool a1): RegularExpression(a0,a1), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,2);
}

sipRegularExpression::~sipRegularExpression() throw()
{
    sipCommonDtor(sipPySelf);
}

void sipRegularExpression::clear() throw()
{
    extern void sipVH_BALL_0(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipNm_BALL_clear);

    if (!meth)
    {
        RegularExpression::clear();
        return;
    }

    sipVH_BALL_0(sipGILState,meth);
}

bool sipRegularExpression::isValid() const throw()
{
    extern bool sipVH_BALL_4(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<sipMethodCache *>(&sipPyMethods[1]),sipPySelf,NULL,sipNm_BALL_isValid);

    if (!meth)
        return RegularExpression::isValid();

    return sipVH_BALL_4(sipGILState,meth);
}


extern "C" {static PyObject *meth_RegularExpression_clear(PyObject *, PyObject *);}
static PyObject *meth_RegularExpression_clear(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        RegularExpression *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_RegularExpression,&sipCpp))
        {
            (sipSelfWasArg ? sipCpp->RegularExpression::clear() : sipCpp->clear());

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_RegularExpression,sipNm_BALL_clear);

    return NULL;
}


extern "C" {static PyObject *meth_RegularExpression_destroy(PyObject *, PyObject *);}
static PyObject *meth_RegularExpression_destroy(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        RegularExpression *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_RegularExpression,&sipCpp))
        {
            try
            {
            sipCpp->destroy();
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_RegularExpression,sipNm_BALL_destroy);

    return NULL;
}


extern "C" {static PyObject *meth_RegularExpression_set(PyObject *, PyObject *);}
static PyObject *meth_RegularExpression_set(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const RegularExpression * a0;
        RegularExpression *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_RegularExpression,&sipCpp,sipClass_RegularExpression,&a0))
        {
            try
            {
            sipCpp->set(*a0);
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    {
        const String * a0;
        int a0State = 0;
        bool a1 = 0;
        RegularExpression *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ1|b",&sipSelf,sipClass_RegularExpression,&sipCpp,sipClass_String,&a0,&a0State,&a1))
        {
            try
            {
            sipCpp->set(*a0,a1);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_RegularExpression,sipNm_BALL_set);

    return NULL;
}


extern "C" {static PyObject *meth_RegularExpression_get(PyObject *, PyObject *);}
static PyObject *meth_RegularExpression_get(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        RegularExpression * a0;
        RegularExpression *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_RegularExpression,&sipCpp,sipClass_RegularExpression,&a0))
        {
            try
            {
            sipCpp->get(*a0);
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_RegularExpression,sipNm_BALL_get);

    return NULL;
}


extern "C" {static PyObject *meth_RegularExpression_getPattern(PyObject *, PyObject *);}
static PyObject *meth_RegularExpression_getPattern(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        RegularExpression *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_RegularExpression,&sipCpp))
        {
            const String *sipRes;

            try
            {
            sipRes = &sipCpp->getPattern();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_RegularExpression,sipNm_BALL_getPattern);

    return NULL;
}


extern "C" {static PyObject *meth_RegularExpression_countSubexpressions(PyObject *, PyObject *);}
static PyObject *meth_RegularExpression_countSubexpressions(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        RegularExpression *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_RegularExpression,&sipCpp))
        {
            int sipRes;

            try
            {
            sipRes = sipCpp->countSubexpressions();
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return PyInt_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_RegularExpression,sipNm_BALL_countSubexpressions);

    return NULL;
}


extern "C" {static PyObject *meth_RegularExpression_match(PyObject *, PyObject *);}
static PyObject *meth_RegularExpression_match(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const char * a0;
        const char * a1;
        int a2 = REG_EXTENDED | REG_NOSUB;
        int a3 = 0;
        RegularExpression *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bss|ii",&sipSelf,sipClass_RegularExpression,&sipCpp,&a0,&a1,&a2,&a3))
        {
            bool sipRes;

            try
            {
            sipRes = sipCpp->match(a0,a1,a2,a3);
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return PyBool_FromLong(sipRes);
        }
    }

    {
        const String * a0;
        int a0State = 0;
        int a1 = 0;
        int a2 = 0;
        RegularExpression *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ1|ii",&sipSelf,sipClass_RegularExpression,&sipCpp,sipClass_String,&a0,&a0State,&a1,&a2))
        {
            bool sipRes;

            try
            {
            sipRes = sipCpp->match(*a0,a1,a2);
            }
            catch (NullPointer &sipExceptionRef)
            {

            sipReleaseInstance(const_cast<String *>(a0),sipClass_String,a0State);
                /* Hope that there is a valid copy ctor. */
                NullPointer *sipExceptionCopy = new NullPointer(sipExceptionRef);

                sipRaiseClassException(sipClass_NullPointer,sipExceptionCopy);

                return NULL;
            }
            catch (IndexUnderflow &sipExceptionRef)
            {

            sipReleaseInstance(const_cast<String *>(a0),sipClass_String,a0State);
                /* Hope that there is a valid copy ctor. */
                IndexUnderflow *sipExceptionCopy = new IndexUnderflow(sipExceptionRef);

                sipRaiseClassException(sipClass_IndexUnderflow,sipExceptionCopy);

                return NULL;
            }
            catch (IndexOverflow &sipExceptionRef)
            {

            sipReleaseInstance(const_cast<String *>(a0),sipClass_String,a0State);
                /* Hope that there is a valid copy ctor. */
                IndexOverflow *sipExceptionCopy = new IndexOverflow(sipExceptionRef);

                sipRaiseClassException(sipClass_IndexOverflow,sipExceptionCopy);

                return NULL;
            }

            sipReleaseInstance(const_cast<String *>(a0),sipClass_String,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    {
        const Substring * a0;
        int a1 = 0;
        int a2 = 0;
        RegularExpression *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA|ii",&sipSelf,sipClass_RegularExpression,&sipCpp,sipClass_Substring,&a0,&a1,&a2))
        {
            bool sipRes;

            try
            {
            sipRes = sipCpp->match(*a0,a1,a2);
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return PyBool_FromLong(sipRes);
        }
    }

    {
        const char * a0;
        int a1 = 0;
        RegularExpression *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bs|i",&sipSelf,sipClass_RegularExpression,&sipCpp,&a0,&a1))
        {
            bool sipRes;

            try
            {
            sipRes = sipCpp->match(a0,a1);
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_RegularExpression,sipNm_BALL_match);

    return NULL;
}


extern "C" {static PyObject *meth_RegularExpression_find(PyObject *, PyObject *);}
static PyObject *meth_RegularExpression_find(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const String * a0;
        int a0State = 0;
        Substring * a1;
        int a2 = 0;
        int a3 = 0;
        RegularExpression *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ1JA|ii",&sipSelf,sipClass_RegularExpression,&sipCpp,sipClass_String,&a0,&a0State,sipClass_Substring,&a1,&a2,&a3))
        {
            bool sipRes;

            try
            {
            sipRes = sipCpp->find(*a0,*a1,a2,a3);
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

    {
        const Substring * a0;
        Substring * a1;
        int a2 = 0;
        int a3 = 0;
        RegularExpression *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJAJA|ii",&sipSelf,sipClass_RegularExpression,&sipCpp,sipClass_Substring,&a0,sipClass_Substring,&a1,&a2,&a3))
        {
            bool sipRes;

            try
            {
            sipRes = sipCpp->find(*a0,*a1,a2,a3);
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_RegularExpression,sipNm_BALL_find);

    return NULL;
}


extern "C" {static PyObject *meth_RegularExpression_isEmpty(PyObject *, PyObject *);}
static PyObject *meth_RegularExpression_isEmpty(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        RegularExpression *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_RegularExpression,&sipCpp))
        {
            bool sipRes;

            try
            {
            sipRes = sipCpp->isEmpty();
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_RegularExpression,sipNm_BALL_isEmpty);

    return NULL;
}


extern "C" {static PyObject *meth_RegularExpression_isValid(PyObject *, PyObject *);}
static PyObject *meth_RegularExpression_isValid(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        RegularExpression *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_RegularExpression,&sipCpp))
        {
            bool sipRes;

            sipRes = (sipSelfWasArg ? sipCpp->RegularExpression::isValid() : sipCpp->isValid());

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_RegularExpression,sipNm_BALL_isValid);

    return NULL;
}


extern "C" {static PyObject *slot_RegularExpression___gt__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_RegularExpression___gt__(PyObject *sipSelf,PyObject *sipArg)
{
    RegularExpression *sipCpp = reinterpret_cast<RegularExpression *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_RegularExpression));

    if (!sipCpp)
        return 0;

    int sipArgsParsed = 0;

    {
        const RegularExpression * a0;

        if (sipParseArgs(&sipArgsParsed,sipArg,"JA",sipClass_RegularExpression,&a0))
        {
            bool sipRes;

            try
            {
            sipRes = ((*sipCpp) > *a0);
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return PyBool_FromLong(sipRes);
        }
    }

    return sipPySlotExtend(&sipModuleAPI_BALL,gt_slot,sipClass_RegularExpression,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_RegularExpression___ge__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_RegularExpression___ge__(PyObject *sipSelf,PyObject *sipArg)
{
    RegularExpression *sipCpp = reinterpret_cast<RegularExpression *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_RegularExpression));

    if (!sipCpp)
        return 0;

    int sipArgsParsed = 0;

    {
        const RegularExpression * a0;

        if (sipParseArgs(&sipArgsParsed,sipArg,"JA",sipClass_RegularExpression,&a0))
        {
            bool sipRes;

            try
            {
            sipRes = ((*sipCpp) >= *a0);
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return PyBool_FromLong(sipRes);
        }
    }

    return sipPySlotExtend(&sipModuleAPI_BALL,ge_slot,sipClass_RegularExpression,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_RegularExpression___le__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_RegularExpression___le__(PyObject *sipSelf,PyObject *sipArg)
{
    RegularExpression *sipCpp = reinterpret_cast<RegularExpression *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_RegularExpression));

    if (!sipCpp)
        return 0;

    int sipArgsParsed = 0;

    {
        const RegularExpression * a0;

        if (sipParseArgs(&sipArgsParsed,sipArg,"JA",sipClass_RegularExpression,&a0))
        {
            bool sipRes;

            try
            {
            sipRes = ((*sipCpp) <= *a0);
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return PyBool_FromLong(sipRes);
        }
    }

    return sipPySlotExtend(&sipModuleAPI_BALL,le_slot,sipClass_RegularExpression,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_RegularExpression___lt__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_RegularExpression___lt__(PyObject *sipSelf,PyObject *sipArg)
{
    RegularExpression *sipCpp = reinterpret_cast<RegularExpression *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_RegularExpression));

    if (!sipCpp)
        return 0;

    int sipArgsParsed = 0;

    {
        const RegularExpression * a0;

        if (sipParseArgs(&sipArgsParsed,sipArg,"JA",sipClass_RegularExpression,&a0))
        {
            bool sipRes;

            try
            {
            sipRes = ((*sipCpp) < *a0);
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return PyBool_FromLong(sipRes);
        }
    }

    return sipPySlotExtend(&sipModuleAPI_BALL,lt_slot,sipClass_RegularExpression,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_RegularExpression___ne__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_RegularExpression___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    RegularExpression *sipCpp = reinterpret_cast<RegularExpression *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_RegularExpression));

    if (!sipCpp)
        return 0;

    int sipArgsParsed = 0;

    {
        const RegularExpression * a0;

        if (sipParseArgs(&sipArgsParsed,sipArg,"JA",sipClass_RegularExpression,&a0))
        {
            bool sipRes;

            try
            {
            sipRes = ((*sipCpp) != *a0);
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return PyBool_FromLong(sipRes);
        }
    }

    return sipPySlotExtend(&sipModuleAPI_BALL,ne_slot,sipClass_RegularExpression,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_RegularExpression___eq__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_RegularExpression___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    RegularExpression *sipCpp = reinterpret_cast<RegularExpression *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_RegularExpression));

    if (!sipCpp)
        return 0;

    int sipArgsParsed = 0;

    {
        const RegularExpression * a0;

        if (sipParseArgs(&sipArgsParsed,sipArg,"JA",sipClass_RegularExpression,&a0))
        {
            bool sipRes;

            try
            {
            sipRes = ((*sipCpp) == *a0);
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return PyBool_FromLong(sipRes);
        }
    }

    return sipPySlotExtend(&sipModuleAPI_BALL,eq_slot,sipClass_RegularExpression,sipSelf,sipArg);
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_RegularExpression(void *, sipWrapperType *);}
static void *cast_RegularExpression(void *ptr,sipWrapperType *targetClass)
{
    if (targetClass == sipClass_RegularExpression)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_RegularExpression(void *, int);}
static void release_RegularExpression(void *ptr,int state)
{
    if (state & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipRegularExpression *>(ptr);
    else
        delete reinterpret_cast<RegularExpression *>(ptr);
}


extern "C" {static void dealloc_RegularExpression(sipWrapper *);}
static void dealloc_RegularExpression(sipWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipRegularExpression *>(sipSelf->u.cppPtr)->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_RegularExpression(sipSelf->u.cppPtr,sipSelf->flags);
    }
}


extern "C" {static void *init_RegularExpression(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_RegularExpression(sipWrapper *sipSelf,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    sipRegularExpression *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            try
            {
            sipCpp = new sipRegularExpression();
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
        const RegularExpression * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_RegularExpression,&a0))
        {
            try
            {
            sipCpp = new sipRegularExpression(*a0);
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
        bool a1 = 0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"J1|b",sipClass_String,&a0,&a0State,&a1))
        {
            try
            {
            sipCpp = new sipRegularExpression(*a0,a1);
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

    if (sipCpp)
        sipCpp->sipPySelf = sipSelf;

    return sipCpp;
}


extern "C" {static void *forceConvertTo_RegularExpression(PyObject *, int *);}
static void *forceConvertTo_RegularExpression(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_RegularExpression))
        return sipConvertToCpp(valobj,sipClass_RegularExpression,iserrp);

    sipBadClass(sipNm_BALL_RegularExpression);

    *iserrp = 1;

    return NULL;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_RegularExpression[] = {
    {(void *)slot_RegularExpression___gt__, gt_slot},
    {(void *)slot_RegularExpression___ge__, ge_slot},
    {(void *)slot_RegularExpression___le__, le_slot},
    {(void *)slot_RegularExpression___lt__, lt_slot},
    {(void *)slot_RegularExpression___ne__, ne_slot},
    {(void *)slot_RegularExpression___eq__, eq_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_RegularExpression[] = {
    {sipNm_BALL_clear, meth_RegularExpression_clear, METH_VARARGS, NULL},
    {sipNm_BALL_countSubexpressions, meth_RegularExpression_countSubexpressions, METH_VARARGS, NULL},
    {sipNm_BALL_destroy, meth_RegularExpression_destroy, METH_VARARGS, NULL},
    {sipNm_BALL_find, meth_RegularExpression_find, METH_VARARGS, NULL},
    {sipNm_BALL_get, meth_RegularExpression_get, METH_VARARGS, NULL},
    {sipNm_BALL_getPattern, meth_RegularExpression_getPattern, METH_VARARGS, NULL},
    {sipNm_BALL_isEmpty, meth_RegularExpression_isEmpty, METH_VARARGS, NULL},
    {sipNm_BALL_isValid, meth_RegularExpression_isValid, METH_VARARGS, NULL},
    {sipNm_BALL_match, meth_RegularExpression_match, METH_VARARGS, NULL},
    {sipNm_BALL_set, meth_RegularExpression_set, METH_VARARGS, NULL}
};


sipTypeDef sipType_BALL_RegularExpression = {
    0,
    0,
    "BALL.RegularExpression",
    0,
    {0, 0, 1},
    0,
    slots_RegularExpression,
    10, methods_RegularExpression,
    0, 0,
    0,
    init_RegularExpression,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_RegularExpression,
    cast_RegularExpression,
    release_RegularExpression,
    forceConvertTo_RegularExpression,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
