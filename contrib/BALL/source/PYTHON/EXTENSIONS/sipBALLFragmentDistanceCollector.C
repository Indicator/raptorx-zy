/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLFragmentDistanceCollector.h"

#include "sipBALLCompositeProcessor.h"
#include "sipBALLComposite.h"
#include "sipBALLFragmentDistanceCollector.h"
#include "sipBALLProcessor.h"


sipFragmentDistanceCollector::sipFragmentDistanceCollector(): FragmentDistanceCollector(), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,2);
}

sipFragmentDistanceCollector::sipFragmentDistanceCollector(const Composite& a0): FragmentDistanceCollector(a0), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,2);
}

sipFragmentDistanceCollector::sipFragmentDistanceCollector(const Composite& a0,float a1): FragmentDistanceCollector(a0,a1), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,2);
}

sipFragmentDistanceCollector::sipFragmentDistanceCollector(const FragmentDistanceCollector& a0): FragmentDistanceCollector(a0), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,2);
}

sipFragmentDistanceCollector::~sipFragmentDistanceCollector() throw()
{
    sipCommonDtor(sipPySelf);
}

bool sipFragmentDistanceCollector::start() throw()
{
    extern bool sipVH_BALL_4(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipNm_BALL_start);

    if (!meth)
        return FragmentDistanceCollector::start();

    return sipVH_BALL_4(sipGILState,meth);
}

bool sipFragmentDistanceCollector::finish() throw()
{
    extern bool sipVH_BALL_4(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,NULL,sipNm_BALL_finish);

    if (!meth)
        return FragmentDistanceCollector::finish();

    return sipVH_BALL_4(sipGILState,meth);
}


extern "C" {static PyObject *meth_FragmentDistanceCollector_start(PyObject *, PyObject *);}
static PyObject *meth_FragmentDistanceCollector_start(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        FragmentDistanceCollector *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_FragmentDistanceCollector,&sipCpp))
        {
            bool sipRes;

            sipRes = (sipSelfWasArg ? sipCpp->FragmentDistanceCollector::start() : sipCpp->start());

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_FragmentDistanceCollector,sipNm_BALL_start);

    return NULL;
}


extern "C" {static PyObject *meth_FragmentDistanceCollector_finish(PyObject *, PyObject *);}
static PyObject *meth_FragmentDistanceCollector_finish(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        FragmentDistanceCollector *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_FragmentDistanceCollector,&sipCpp))
        {
            bool sipRes;

            sipRes = (sipSelfWasArg ? sipCpp->FragmentDistanceCollector::finish() : sipCpp->finish());

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_FragmentDistanceCollector,sipNm_BALL_finish);

    return NULL;
}


extern "C" {static PyObject *meth_FragmentDistanceCollector_getNumberOfFragments(PyObject *, PyObject *);}
static PyObject *meth_FragmentDistanceCollector_getNumberOfFragments(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        FragmentDistanceCollector *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_FragmentDistanceCollector,&sipCpp))
        {
            int sipRes;

            try
            {
            sipRes = sipCpp->getNumberOfFragments();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_FragmentDistanceCollector,sipNm_BALL_getNumberOfFragments);

    return NULL;
}


extern "C" {static PyObject *meth_FragmentDistanceCollector_setComposite(PyObject *, PyObject *);}
static PyObject *meth_FragmentDistanceCollector_setComposite(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const Composite * a0;
        FragmentDistanceCollector *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_FragmentDistanceCollector,&sipCpp,sipClass_Composite,&a0))
        {
            try
            {
            sipCpp->setComposite(*a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_FragmentDistanceCollector,sipNm_BALL_setComposite);

    return NULL;
}


extern "C" {static PyObject *meth_FragmentDistanceCollector_getComposite(PyObject *, PyObject *);}
static PyObject *meth_FragmentDistanceCollector_getComposite(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        FragmentDistanceCollector *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_FragmentDistanceCollector,&sipCpp))
        {
            const Composite *sipRes;

            try
            {
            sipRes = sipCpp->getComposite();
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return sipConvertFromInstance(const_cast<Composite *>(sipRes),sipClass_Composite,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_FragmentDistanceCollector,sipNm_BALL_getComposite);

    return NULL;
}


extern "C" {static PyObject *meth_FragmentDistanceCollector_getDistance(PyObject *, PyObject *);}
static PyObject *meth_FragmentDistanceCollector_getDistance(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        FragmentDistanceCollector *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_FragmentDistanceCollector,&sipCpp))
        {
            float sipRes;

            try
            {
            sipRes = sipCpp->getDistance();
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return PyFloat_FromDouble((double)sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_FragmentDistanceCollector,sipNm_BALL_getDistance);

    return NULL;
}


extern "C" {static PyObject *meth_FragmentDistanceCollector_setDistance(PyObject *, PyObject *);}
static PyObject *meth_FragmentDistanceCollector_setDistance(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        float a0;
        FragmentDistanceCollector *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bf",&sipSelf,sipClass_FragmentDistanceCollector,&sipCpp,&a0))
        {
            try
            {
            sipCpp->setDistance(a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_FragmentDistanceCollector,sipNm_BALL_setDistance);

    return NULL;
}


extern "C" {static PyObject *slot_FragmentDistanceCollector___call__(PyObject *sipSelf,PyObject *sipArgs);}
static PyObject *slot_FragmentDistanceCollector___call__(PyObject *sipSelf,PyObject *sipArgs)
{
    FragmentDistanceCollector *sipCpp = reinterpret_cast<FragmentDistanceCollector *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_FragmentDistanceCollector));

    if (!sipCpp)
        return 0;

    int sipArgsParsed = 0;

    {
        Composite * a0;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"JA",sipClass_Composite,&a0))
        {
            Processor::Result sipRes = (Processor::Result)0;

#line 68 "geometricProperties.sip"
  sipRes = sipCpp->operator () (*a0);
#line 312 "sipBALLFragmentDistanceCollector.C"

            return sipConvertFromNamedEnum(sipRes,sipEnum_Processor_Result);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_FragmentDistanceCollector,sipNm_BALL___call__);

    return 0;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_FragmentDistanceCollector(void *, sipWrapperType *);}
static void *cast_FragmentDistanceCollector(void *ptr,sipWrapperType *targetClass)
{
    void *res;

    if (targetClass == sipClass_FragmentDistanceCollector)
        return ptr;

    if ((res = sipCast_CompositeProcessor((CompositeProcessor *)(FragmentDistanceCollector *)ptr,targetClass)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_FragmentDistanceCollector(void *, int);}
static void release_FragmentDistanceCollector(void *ptr,int state)
{
    if (state & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipFragmentDistanceCollector *>(ptr);
    else
        delete reinterpret_cast<FragmentDistanceCollector *>(ptr);
}


extern "C" {static void dealloc_FragmentDistanceCollector(sipWrapper *);}
static void dealloc_FragmentDistanceCollector(sipWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipFragmentDistanceCollector *>(sipSelf->u.cppPtr)->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_FragmentDistanceCollector(sipSelf->u.cppPtr,sipSelf->flags);
    }
}


extern "C" {static void *init_FragmentDistanceCollector(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_FragmentDistanceCollector(sipWrapper *sipSelf,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    sipFragmentDistanceCollector *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            try
            {
            sipCpp = new sipFragmentDistanceCollector();
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
        const Composite * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_Composite,&a0))
        {
            try
            {
            sipCpp = new sipFragmentDistanceCollector(*a0);
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
        const Composite * a0;
        float a1;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JAf",sipClass_Composite,&a0,&a1))
        {
            try
            {
            sipCpp = new sipFragmentDistanceCollector(*a0,a1);
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
        const FragmentDistanceCollector * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_FragmentDistanceCollector,&a0))
        {
            try
            {
            sipCpp = new sipFragmentDistanceCollector(*a0);
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


extern "C" {static void *forceConvertTo_FragmentDistanceCollector(PyObject *, int *);}
static void *forceConvertTo_FragmentDistanceCollector(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_FragmentDistanceCollector))
        return sipConvertToCpp(valobj,sipClass_FragmentDistanceCollector,iserrp);

    sipBadClass(sipNm_BALL_FragmentDistanceCollector);

    *iserrp = 1;

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedClassDef supers_FragmentDistanceCollector[] = {{149, 255, 1}};


/* Define this type's Python slots. */
static sipPySlotDef slots_FragmentDistanceCollector[] = {
    {(void *)slot_FragmentDistanceCollector___call__, call_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_FragmentDistanceCollector[] = {
    {sipNm_BALL_finish, meth_FragmentDistanceCollector_finish, METH_VARARGS, NULL},
    {sipNm_BALL_getComposite, meth_FragmentDistanceCollector_getComposite, METH_VARARGS, NULL},
    {sipNm_BALL_getDistance, meth_FragmentDistanceCollector_getDistance, METH_VARARGS, NULL},
    {sipNm_BALL_getNumberOfFragments, meth_FragmentDistanceCollector_getNumberOfFragments, METH_VARARGS, NULL},
    {sipNm_BALL_setComposite, meth_FragmentDistanceCollector_setComposite, METH_VARARGS, NULL},
    {sipNm_BALL_setDistance, meth_FragmentDistanceCollector_setDistance, METH_VARARGS, NULL},
    {sipNm_BALL_start, meth_FragmentDistanceCollector_start, METH_VARARGS, NULL}
};


sipTypeDef sipType_BALL_FragmentDistanceCollector = {
    0,
    0,
    "BALL.FragmentDistanceCollector",
    0,
    {0, 0, 1},
    supers_FragmentDistanceCollector,
    slots_FragmentDistanceCollector,
    7, methods_FragmentDistanceCollector,
    0, 0,
    0,
    init_FragmentDistanceCollector,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_FragmentDistanceCollector,
    cast_FragmentDistanceCollector,
    release_FragmentDistanceCollector,
    forceConvertTo_FragmentDistanceCollector,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
