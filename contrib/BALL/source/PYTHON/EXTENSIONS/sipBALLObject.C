/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLObject.h"

#include "sipBALLObject.h"


sipObject::sipObject() throw(): Object(), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,2);
}

sipObject::sipObject(const Object& a0) throw(): Object(a0), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,2);
}

sipObject::~sipObject() throw()
{
    sipCommonDtor(sipPySelf);
}

void sipObject::clear() throw()
{
    extern void sipVH_BALL_0(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipNm_BALL_clear);

    if (!meth)
    {
        Object::clear();
        return;
    }

    sipVH_BALL_0(sipGILState,meth);
}

bool sipObject::isValid() const throw()
{
    extern bool sipVH_BALL_4(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<sipMethodCache *>(&sipPyMethods[1]),sipPySelf,NULL,sipNm_BALL_isValid);

    if (!meth)
        return Object::isValid();

    return sipVH_BALL_4(sipGILState,meth);
}


extern "C" {static PyObject *meth_Object_clear(PyObject *, PyObject *);}
static PyObject *meth_Object_clear(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        Object *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Object,&sipCpp))
        {
            (sipSelfWasArg ? sipCpp->Object::clear() : sipCpp->clear());

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Object,sipNm_BALL_clear);

    return NULL;
}


extern "C" {static PyObject *meth_Object_getHandle(PyObject *, PyObject *);}
static PyObject *meth_Object_getHandle(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Object *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Object,&sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->getHandle();

            return PyInt_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Object,sipNm_BALL_getHandle);

    return NULL;
}


extern "C" {static PyObject *meth_Object_getNextHandle(PyObject *, PyObject *);}
static PyObject *meth_Object_getNextHandle(PyObject *,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        if (sipParseArgs(&sipArgsParsed,sipArgs,""))
        {
            int sipRes;

            sipRes = Object::getNextHandle();

            return PyInt_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Object,sipNm_BALL_getNextHandle);

    return NULL;
}


extern "C" {static PyObject *meth_Object_getNewHandle(PyObject *, PyObject *);}
static PyObject *meth_Object_getNewHandle(PyObject *,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        if (sipParseArgs(&sipArgsParsed,sipArgs,""))
        {
            int sipRes;

            sipRes = Object::getNewHandle();

            return PyInt_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Object,sipNm_BALL_getNewHandle);

    return NULL;
}


extern "C" {static PyObject *meth_Object_compare(PyObject *, PyObject *);}
static PyObject *meth_Object_compare(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const Object * a0;
        Object *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_Object,&sipCpp,sipClass_Object,&a0))
        {
            int sipRes;

            try
            {
            sipRes = sipCpp->compare(*a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Object,sipNm_BALL_compare);

    return NULL;
}


extern "C" {static PyObject *meth_Object_isValid(PyObject *, PyObject *);}
static PyObject *meth_Object_isValid(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        Object *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Object,&sipCpp))
        {
            bool sipRes;

            sipRes = (sipSelfWasArg ? sipCpp->Object::isValid() : sipCpp->isValid());

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Object,sipNm_BALL_isValid);

    return NULL;
}


extern "C" {static PyObject *slot_Object___gt__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_Object___gt__(PyObject *sipSelf,PyObject *sipArg)
{
    Object *sipCpp = reinterpret_cast<Object *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_Object));

    if (!sipCpp)
        return 0;

    int sipArgsParsed = 0;

    {
        const Object * a0;

        if (sipParseArgs(&sipArgsParsed,sipArg,"JA",sipClass_Object,&a0))
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

    return sipPySlotExtend(&sipModuleAPI_BALL,gt_slot,sipClass_Object,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_Object___ge__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_Object___ge__(PyObject *sipSelf,PyObject *sipArg)
{
    Object *sipCpp = reinterpret_cast<Object *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_Object));

    if (!sipCpp)
        return 0;

    int sipArgsParsed = 0;

    {
        const Object * a0;

        if (sipParseArgs(&sipArgsParsed,sipArg,"JA",sipClass_Object,&a0))
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

    return sipPySlotExtend(&sipModuleAPI_BALL,ge_slot,sipClass_Object,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_Object___le__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_Object___le__(PyObject *sipSelf,PyObject *sipArg)
{
    Object *sipCpp = reinterpret_cast<Object *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_Object));

    if (!sipCpp)
        return 0;

    int sipArgsParsed = 0;

    {
        const Object * a0;

        if (sipParseArgs(&sipArgsParsed,sipArg,"JA",sipClass_Object,&a0))
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

    return sipPySlotExtend(&sipModuleAPI_BALL,le_slot,sipClass_Object,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_Object___lt__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_Object___lt__(PyObject *sipSelf,PyObject *sipArg)
{
    Object *sipCpp = reinterpret_cast<Object *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_Object));

    if (!sipCpp)
        return 0;

    int sipArgsParsed = 0;

    {
        const Object * a0;

        if (sipParseArgs(&sipArgsParsed,sipArg,"JA",sipClass_Object,&a0))
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

    return sipPySlotExtend(&sipModuleAPI_BALL,lt_slot,sipClass_Object,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_Object___ne__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_Object___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    Object *sipCpp = reinterpret_cast<Object *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_Object));

    if (!sipCpp)
        return 0;

    int sipArgsParsed = 0;

    {
        const Object * a0;

        if (sipParseArgs(&sipArgsParsed,sipArg,"JA",sipClass_Object,&a0))
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

    return sipPySlotExtend(&sipModuleAPI_BALL,ne_slot,sipClass_Object,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_Object___eq__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_Object___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    Object *sipCpp = reinterpret_cast<Object *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_Object));

    if (!sipCpp)
        return 0;

    int sipArgsParsed = 0;

    {
        const Object * a0;

        if (sipParseArgs(&sipArgsParsed,sipArg,"JA",sipClass_Object,&a0))
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

    return sipPySlotExtend(&sipModuleAPI_BALL,eq_slot,sipClass_Object,sipSelf,sipArg);
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_Object(void *, sipWrapperType *);}
static void *cast_Object(void *ptr,sipWrapperType *targetClass)
{
    if (targetClass == sipClass_Object)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_Object(void *, int);}
static void release_Object(void *ptr,int state)
{
    if (state & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipObject *>(ptr);
    else
        delete reinterpret_cast<Object *>(ptr);
}


extern "C" {static void dealloc_Object(sipWrapper *);}
static void dealloc_Object(sipWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipObject *>(sipSelf->u.cppPtr)->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_Object(sipSelf->u.cppPtr,sipSelf->flags);
    }
}


extern "C" {static void *init_Object(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_Object(sipWrapper *sipSelf,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    sipObject *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            sipCpp = new sipObject();
        }
    }

    if (!sipCpp)
    {
        const Object * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_Object,&a0))
        {
            sipCpp = new sipObject(*a0);
        }
    }

    if (sipCpp)
        sipCpp->sipPySelf = sipSelf;

    return sipCpp;
}


extern "C" {static void *forceConvertTo_Object(PyObject *, int *);}
static void *forceConvertTo_Object(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_Object))
        return sipConvertToCpp(valobj,sipClass_Object,iserrp);

    sipBadClass(sipNm_BALL_Object);

    *iserrp = 1;

    return NULL;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_Object[] = {
    {(void *)slot_Object___gt__, gt_slot},
    {(void *)slot_Object___ge__, ge_slot},
    {(void *)slot_Object___le__, le_slot},
    {(void *)slot_Object___lt__, lt_slot},
    {(void *)slot_Object___ne__, ne_slot},
    {(void *)slot_Object___eq__, eq_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_Object[] = {
    {sipNm_BALL_clear, meth_Object_clear, METH_VARARGS, NULL},
    {sipNm_BALL_compare, meth_Object_compare, METH_VARARGS, NULL},
    {sipNm_BALL_getHandle, meth_Object_getHandle, METH_VARARGS, NULL},
    {sipNm_BALL_getNewHandle, meth_Object_getNewHandle, METH_VARARGS, NULL},
    {sipNm_BALL_getNextHandle, meth_Object_getNextHandle, METH_VARARGS, NULL},
    {sipNm_BALL_isValid, meth_Object_isValid, METH_VARARGS, NULL}
};


sipTypeDef sipType_BALL_Object = {
    0,
    0,
    "BALL.Object",
    0,
    {0, 0, 1},
    0,
    slots_Object,
    6, methods_Object,
    0, 0,
    0,
    init_Object,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_Object,
    cast_Object,
    release_Object,
    forceConvertTo_Object,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
