/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLBit.h"

#include "sipBALLNullPointer.h"
#include "sipBALLBit.h"


sipBit::sipBit() throw(): Bit(), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,1);
}

sipBit::sipBit(const Bit& a0) throw(): Bit(a0), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,1);
}

sipBit::~sipBit() throw()
{
    sipCommonDtor(sipPySelf);
}

void sipBit::clear() throw()
{
    extern void sipVH_BALL_0(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipNm_BALL_clear);

    if (!meth)
    {
        Bit::clear();
        return;
    }

    sipVH_BALL_0(sipGILState,meth);
}


extern "C" {static PyObject *meth_Bit_clear(PyObject *, PyObject *);}
static PyObject *meth_Bit_clear(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        Bit *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Bit,&sipCpp))
        {
            (sipSelfWasArg ? sipCpp->Bit::clear() : sipCpp->clear());

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Bit,sipNm_BALL_clear);

    return NULL;
}


extern "C" {static PyObject *slot_Bit___ne__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_Bit___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    Bit *sipCpp = reinterpret_cast<Bit *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_Bit));

    if (!sipCpp)
        return 0;

    int sipArgsParsed = 0;

    {
        const Bit * a0;

        if (sipParseArgs(&sipArgsParsed,sipArg,"JA",sipClass_Bit,&a0))
        {
            bool sipRes;

            sipRes = ((*sipCpp) != *a0);

            return PyBool_FromLong(sipRes);
        }
    }

    {
        bool a0;

        if (sipParseArgs(&sipArgsParsed,sipArg,"b",&a0))
        {
            bool sipRes;

            try
            {
            sipRes = ((*sipCpp) != a0);
            }
            catch (NullPointer &sipExceptionRef)
            {
                /* Hope that there is a valid copy ctor. */
                NullPointer *sipExceptionCopy = new NullPointer(sipExceptionRef);

                sipRaiseClassException(sipClass_NullPointer,sipExceptionCopy);

                return NULL;
            }

            return PyBool_FromLong(sipRes);
        }
    }

    return sipPySlotExtend(&sipModuleAPI_BALL,ne_slot,sipClass_Bit,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_Bit___eq__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_Bit___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    Bit *sipCpp = reinterpret_cast<Bit *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_Bit));

    if (!sipCpp)
        return 0;

    int sipArgsParsed = 0;

    {
        const Bit * a0;

        if (sipParseArgs(&sipArgsParsed,sipArg,"JA",sipClass_Bit,&a0))
        {
            bool sipRes;

            sipRes = ((*sipCpp) == *a0);

            return PyBool_FromLong(sipRes);
        }
    }

    {
        bool a0;

        if (sipParseArgs(&sipArgsParsed,sipArg,"b",&a0))
        {
            bool sipRes;

            try
            {
            sipRes = ((*sipCpp) == a0);
            }
            catch (NullPointer &sipExceptionRef)
            {
                /* Hope that there is a valid copy ctor. */
                NullPointer *sipExceptionCopy = new NullPointer(sipExceptionRef);

                sipRaiseClassException(sipClass_NullPointer,sipExceptionCopy);

                return NULL;
            }

            return PyBool_FromLong(sipRes);
        }
    }

    return sipPySlotExtend(&sipModuleAPI_BALL,eq_slot,sipClass_Bit,sipSelf,sipArg);
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_Bit(void *, sipWrapperType *);}
static void *cast_Bit(void *ptr,sipWrapperType *targetClass)
{
    if (targetClass == sipClass_Bit)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_Bit(void *, int);}
static void release_Bit(void *ptr,int state)
{
    if (state & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipBit *>(ptr);
    else
        delete reinterpret_cast<Bit *>(ptr);
}


extern "C" {static void dealloc_Bit(sipWrapper *);}
static void dealloc_Bit(sipWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipBit *>(sipSelf->u.cppPtr)->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_Bit(sipSelf->u.cppPtr,sipSelf->flags);
    }
}


extern "C" {static void *init_Bit(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_Bit(sipWrapper *sipSelf,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    sipBit *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            sipCpp = new sipBit();
        }
    }

    if (!sipCpp)
    {
        const Bit * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_Bit,&a0))
        {
            sipCpp = new sipBit(*a0);
        }
    }

    if (sipCpp)
        sipCpp->sipPySelf = sipSelf;

    return sipCpp;
}


extern "C" {static void *forceConvertTo_Bit(PyObject *, int *);}
static void *forceConvertTo_Bit(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_Bit))
        return sipConvertToCpp(valobj,sipClass_Bit,iserrp);

    sipBadClass(sipNm_BALL_Bit);

    *iserrp = 1;

    return NULL;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_Bit[] = {
    {(void *)slot_Bit___ne__, ne_slot},
    {(void *)slot_Bit___eq__, eq_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_Bit[] = {
    {sipNm_BALL_clear, meth_Bit_clear, METH_VARARGS, NULL}
};


sipTypeDef sipType_BALL_Bit = {
    0,
    0,
    "BALL.Bit",
    0,
    {0, 0, 1},
    0,
    slots_Bit,
    1, methods_Bit,
    0, 0,
    0,
    init_Bit,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_Bit,
    cast_Bit,
    release_Bit,
    forceConvertTo_Bit,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
