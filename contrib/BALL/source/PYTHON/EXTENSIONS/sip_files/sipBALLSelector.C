/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLSelector.h"

#include "sipBALLCompositeProcessor.h"
#include "sipBALLString.h"
#include "sipBALLSelector.h"
#include "sipBALLProcessor.h"
#include "sipBALLComposite.h"


sipSelector::sipSelector(): Selector(), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,1);
}

sipSelector::sipSelector(const Selector& a0): Selector(a0), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,1);
}

sipSelector::sipSelector(const String& a0): Selector(a0), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,1);
}

sipSelector::~sipSelector() throw()
{
    sipCommonDtor(sipPySelf);
}

bool sipSelector::start() throw()
{
    extern bool sipVH_BALL_4(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipNm_BALL_start);

    if (!meth)
        return Selector::start();

    return sipVH_BALL_4(sipGILState,meth);
}


extern "C" {static PyObject *meth_Selector_start(PyObject *, PyObject *);}
static PyObject *meth_Selector_start(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        Selector *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Selector,&sipCpp))
        {
            bool sipRes;

            sipRes = (sipSelfWasArg ? sipCpp->Selector::start() : sipCpp->start());

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Selector,sipNm_BALL_start);

    return NULL;
}


extern "C" {static PyObject *meth_Selector_getNumberOfSelectedAtoms(PyObject *, PyObject *);}
static PyObject *meth_Selector_getNumberOfSelectedAtoms(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Selector *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Selector,&sipCpp))
        {
            int sipRes;

            try
            {
            sipRes = sipCpp->getNumberOfSelectedAtoms();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Selector,sipNm_BALL_getNumberOfSelectedAtoms);

    return NULL;
}


extern "C" {static PyObject *slot_Selector___call__(PyObject *sipSelf,PyObject *sipArgs);}
static PyObject *slot_Selector___call__(PyObject *sipSelf,PyObject *sipArgs)
{
    Selector *sipCpp = reinterpret_cast<Selector *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_Selector));

    if (!sipCpp)
        return 0;

    int sipArgsParsed = 0;

    {
        Composite * a0;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"JA",sipClass_Composite,&a0))
        {
            Processor::Result sipRes = (Processor::Result)0;

#line 23 "selector.sip"
	sipRes = sipCpp->operator () (*a0);
#line 135 "sipBALLSelector.C"

            return sipConvertFromNamedEnum(sipRes,sipEnum_Processor_Result);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Selector,sipNm_BALL___call__);

    return 0;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_Selector(void *, sipWrapperType *);}
static void *cast_Selector(void *ptr,sipWrapperType *targetClass)
{
    void *res;

    if (targetClass == sipClass_Selector)
        return ptr;

    if ((res = sipCast_CompositeProcessor((CompositeProcessor *)(Selector *)ptr,targetClass)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_Selector(void *, int);}
static void release_Selector(void *ptr,int state)
{
    if (state & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipSelector *>(ptr);
    else
        delete reinterpret_cast<Selector *>(ptr);
}


extern "C" {static void dealloc_Selector(sipWrapper *);}
static void dealloc_Selector(sipWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipSelector *>(sipSelf->u.cppPtr)->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_Selector(sipSelf->u.cppPtr,sipSelf->flags);
    }
}


extern "C" {static void *init_Selector(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_Selector(sipWrapper *sipSelf,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    sipSelector *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            try
            {
            sipCpp = new sipSelector();
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
        const Selector * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_Selector,&a0))
        {
            try
            {
            sipCpp = new sipSelector(*a0);
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
            sipCpp = new sipSelector(*a0);
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


extern "C" {static void *forceConvertTo_Selector(PyObject *, int *);}
static void *forceConvertTo_Selector(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_Selector))
        return sipConvertToCpp(valobj,sipClass_Selector,iserrp);

    sipBadClass(sipNm_BALL_Selector);

    *iserrp = 1;

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedClassDef supers_Selector[] = {{149, 255, 1}};


/* Define this type's Python slots. */
static sipPySlotDef slots_Selector[] = {
    {(void *)slot_Selector___call__, call_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_Selector[] = {
    {sipNm_BALL_getNumberOfSelectedAtoms, meth_Selector_getNumberOfSelectedAtoms, METH_VARARGS, NULL},
    {sipNm_BALL_start, meth_Selector_start, METH_VARARGS, NULL}
};


sipTypeDef sipType_BALL_Selector = {
    0,
    0,
    "BALL.Selector",
    0,
    {0, 0, 1},
    supers_Selector,
    slots_Selector,
    2, methods_Selector,
    0, 0,
    0,
    init_Selector,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_Selector,
    cast_Selector,
    release_Selector,
    forceConvertTo_Selector,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
