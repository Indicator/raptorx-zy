/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLAtomDistanceColorProcessor.h"

#include "sipBALLColorProcessor.h"
#include "sipBALLAtomDistanceColorProcessor.h"
#include "sipBALLComposite.h"
#include "sipBALLColorRGBA.h"
#include "sipBALLAtom.h"
#include "sipBALLVector3.h"


sipAtomDistanceColorProcessor::sipAtomDistanceColorProcessor() throw(): AtomDistanceColorProcessor(), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,5);
}

sipAtomDistanceColorProcessor::sipAtomDistanceColorProcessor(const AtomDistanceColorProcessor& a0) throw(): AtomDistanceColorProcessor(a0), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,5);
}

sipAtomDistanceColorProcessor::~sipAtomDistanceColorProcessor()
{
    sipCommonDtor(sipPySelf);
}

void sipAtomDistanceColorProcessor::addAtom(const Atom& a0)
{
    extern void sipVH_BALL_16(sip_gilstate_t,PyObject *,const Atom&);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipNm_BALL_addAtom);

    if (!meth)
    {
        AtomDistanceColorProcessor::addAtom(a0);
        return;
    }

    sipVH_BALL_16(sipGILState,meth,a0);
}

bool sipAtomDistanceColorProcessor::finish() throw()
{
    extern bool sipVH_BALL_4(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,NULL,sipNm_BALL_finish);

    if (!meth)
        return AtomDistanceColorProcessor::finish();

    return sipVH_BALL_4(sipGILState,meth);
}

void sipAtomDistanceColorProcessor::getColor(const Composite& a0,ColorRGBA& a1)
{
    extern void sipVH_BALL_15(sip_gilstate_t,PyObject *,const Composite&,ColorRGBA&);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[2],sipPySelf,NULL,sipNm_BALL_getColor);

    if (!meth)
    {
        AtomDistanceColorProcessor::getColor(a0,a1);
        return;
    }

    sipVH_BALL_15(sipGILState,meth,a0,a1);
}

void sipAtomDistanceColorProcessor::clear() throw()
{
    extern void sipVH_BALL_0(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[3],sipPySelf,NULL,sipNm_BALL_clear);

    if (!meth)
    {
        ColorProcessor::clear();
        return;
    }

    sipVH_BALL_0(sipGILState,meth);
}

bool sipAtomDistanceColorProcessor::start() throw()
{
    extern bool sipVH_BALL_4(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[4],sipPySelf,NULL,sipNm_BALL_start);

    if (!meth)
        return ColorProcessor::start();

    return sipVH_BALL_4(sipGILState,meth);
}


extern "C" {static PyObject *meth_AtomDistanceColorProcessor_setDistance(PyObject *, PyObject *);}
static PyObject *meth_AtomDistanceColorProcessor_setDistance(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        float a0;
        AtomDistanceColorProcessor *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bf",&sipSelf,sipClass_AtomDistanceColorProcessor,&sipCpp,&a0))
        {
            sipCpp->setDistance(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_AtomDistanceColorProcessor,sipNm_BALL_setDistance);

    return NULL;
}


extern "C" {static PyObject *meth_AtomDistanceColorProcessor_getDistance(PyObject *, PyObject *);}
static PyObject *meth_AtomDistanceColorProcessor_getDistance(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        AtomDistanceColorProcessor *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_AtomDistanceColorProcessor,&sipCpp))
        {
            float sipRes;

            sipRes = sipCpp->getDistance();

            return PyFloat_FromDouble((double)sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_AtomDistanceColorProcessor,sipNm_BALL_getDistance);

    return NULL;
}


extern "C" {static PyObject *meth_AtomDistanceColorProcessor_setNullDistanceColor(PyObject *, PyObject *);}
static PyObject *meth_AtomDistanceColorProcessor_setNullDistanceColor(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const ColorRGBA * a0;
        AtomDistanceColorProcessor *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_AtomDistanceColorProcessor,&sipCpp,sipClass_ColorRGBA,&a0))
        {
            sipCpp->setNullDistanceColor(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_AtomDistanceColorProcessor,sipNm_BALL_setNullDistanceColor);

    return NULL;
}


extern "C" {static PyObject *meth_AtomDistanceColorProcessor_getNullDistanceColor(PyObject *, PyObject *);}
static PyObject *meth_AtomDistanceColorProcessor_getNullDistanceColor(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        AtomDistanceColorProcessor *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_AtomDistanceColorProcessor,&sipCpp))
        {
            const ColorRGBA *sipRes;

            sipRes = &sipCpp->getNullDistanceColor();

            return sipConvertFromInstance(const_cast<ColorRGBA *>(sipRes),sipClass_ColorRGBA,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_AtomDistanceColorProcessor,sipNm_BALL_getNullDistanceColor);

    return NULL;
}


extern "C" {static PyObject *meth_AtomDistanceColorProcessor_setMaxDistanceColor(PyObject *, PyObject *);}
static PyObject *meth_AtomDistanceColorProcessor_setMaxDistanceColor(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const ColorRGBA * a0;
        AtomDistanceColorProcessor *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_AtomDistanceColorProcessor,&sipCpp,sipClass_ColorRGBA,&a0))
        {
            sipCpp->setMaxDistanceColor(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_AtomDistanceColorProcessor,sipNm_BALL_setMaxDistanceColor);

    return NULL;
}


extern "C" {static PyObject *meth_AtomDistanceColorProcessor_getMaxDistanceColor(PyObject *, PyObject *);}
static PyObject *meth_AtomDistanceColorProcessor_getMaxDistanceColor(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        AtomDistanceColorProcessor *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_AtomDistanceColorProcessor,&sipCpp))
        {
            const ColorRGBA *sipRes;

            sipRes = &sipCpp->getMaxDistanceColor();

            return sipConvertFromInstance(const_cast<ColorRGBA *>(sipRes),sipClass_ColorRGBA,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_AtomDistanceColorProcessor,sipNm_BALL_getMaxDistanceColor);

    return NULL;
}


extern "C" {static PyObject *meth_AtomDistanceColorProcessor_calculateDistances(PyObject *, PyObject *);}
static PyObject *meth_AtomDistanceColorProcessor_calculateDistances(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        AtomDistanceColorProcessor *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_AtomDistanceColorProcessor,&sipCpp))
        {
            sipCpp->calculateDistances();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_AtomDistanceColorProcessor,sipNm_BALL_calculateDistances);

    return NULL;
}


extern "C" {static PyObject *meth_AtomDistanceColorProcessor_addAtom(PyObject *, PyObject *);}
static PyObject *meth_AtomDistanceColorProcessor_addAtom(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        const Atom * a0;
        AtomDistanceColorProcessor *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_AtomDistanceColorProcessor,&sipCpp,sipClass_Atom,&a0))
        {
            try
            {
            (sipSelfWasArg ? sipCpp->AtomDistanceColorProcessor::addAtom(*a0) : sipCpp->addAtom(*a0));
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_AtomDistanceColorProcessor,sipNm_BALL_addAtom);

    return NULL;
}


extern "C" {static PyObject *meth_AtomDistanceColorProcessor_finish(PyObject *, PyObject *);}
static PyObject *meth_AtomDistanceColorProcessor_finish(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        AtomDistanceColorProcessor *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_AtomDistanceColorProcessor,&sipCpp))
        {
            bool sipRes;

            sipRes = (sipSelfWasArg ? sipCpp->AtomDistanceColorProcessor::finish() : sipCpp->finish());

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_AtomDistanceColorProcessor,sipNm_BALL_finish);

    return NULL;
}


extern "C" {static PyObject *meth_AtomDistanceColorProcessor_getColor(PyObject *, PyObject *);}
static PyObject *meth_AtomDistanceColorProcessor_getColor(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        const Composite * a0;
        ColorRGBA * a1;
        AtomDistanceColorProcessor *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJAJA",&sipSelf,sipClass_AtomDistanceColorProcessor,&sipCpp,sipClass_Composite,&a0,sipClass_ColorRGBA,&a1))
        {
            try
            {
            (sipSelfWasArg ? sipCpp->AtomDistanceColorProcessor::getColor(*a0,*a1) : sipCpp->getColor(*a0,*a1));
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_AtomDistanceColorProcessor,sipNm_BALL_getColor);

    return NULL;
}


extern "C" {static PyObject *meth_AtomDistanceColorProcessor_showSelected(PyObject *, PyObject *);}
static PyObject *meth_AtomDistanceColorProcessor_showSelected(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        AtomDistanceColorProcessor *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_AtomDistanceColorProcessor,&sipCpp))
        {
            bool sipRes;

            try
            {
            sipRes = sipCpp->showSelected();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_AtomDistanceColorProcessor,sipNm_BALL_showSelected);

    return NULL;
}


extern "C" {static PyObject *meth_AtomDistanceColorProcessor_setShowSelected(PyObject *, PyObject *);}
static PyObject *meth_AtomDistanceColorProcessor_setShowSelected(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        bool a0;
        AtomDistanceColorProcessor *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bb",&sipSelf,sipClass_AtomDistanceColorProcessor,&sipCpp,&a0))
        {
            try
            {
            sipCpp->setShowSelected(a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_AtomDistanceColorProcessor,sipNm_BALL_setShowSelected);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_AtomDistanceColorProcessor(void *, sipWrapperType *);}
static void *cast_AtomDistanceColorProcessor(void *ptr,sipWrapperType *targetClass)
{
    void *res;

    if (targetClass == sipClass_AtomDistanceColorProcessor)
        return ptr;

    if ((res = sipCast_ColorProcessor((ColorProcessor *)(AtomDistanceColorProcessor *)ptr,targetClass)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_AtomDistanceColorProcessor(void *, int);}
static void release_AtomDistanceColorProcessor(void *ptr,int state)
{
    if (state & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipAtomDistanceColorProcessor *>(ptr);
    else
        delete reinterpret_cast<AtomDistanceColorProcessor *>(ptr);
}


extern "C" {static void dealloc_AtomDistanceColorProcessor(sipWrapper *);}
static void dealloc_AtomDistanceColorProcessor(sipWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipAtomDistanceColorProcessor *>(sipSelf->u.cppPtr)->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_AtomDistanceColorProcessor(sipSelf->u.cppPtr,sipSelf->flags);
    }
}


extern "C" {static void *init_AtomDistanceColorProcessor(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_AtomDistanceColorProcessor(sipWrapper *sipSelf,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    sipAtomDistanceColorProcessor *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            sipCpp = new sipAtomDistanceColorProcessor();
        }
    }

    if (!sipCpp)
    {
        const AtomDistanceColorProcessor * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_AtomDistanceColorProcessor,&a0))
        {
            sipCpp = new sipAtomDistanceColorProcessor(*a0);
        }
    }

    if (sipCpp)
        sipCpp->sipPySelf = sipSelf;

    return sipCpp;
}


extern "C" {static void *forceConvertTo_AtomDistanceColorProcessor(PyObject *, int *);}
static void *forceConvertTo_AtomDistanceColorProcessor(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_AtomDistanceColorProcessor))
        return sipConvertToCpp(valobj,sipClass_AtomDistanceColorProcessor,iserrp);

    sipBadClass(sipNm_BALL_AtomDistanceColorProcessor);

    *iserrp = 1;

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedClassDef supers_AtomDistanceColorProcessor[] = {{15, 255, 1}};


static PyMethodDef methods_AtomDistanceColorProcessor[] = {
    {sipNm_BALL_addAtom, meth_AtomDistanceColorProcessor_addAtom, METH_VARARGS, NULL},
    {sipNm_BALL_calculateDistances, meth_AtomDistanceColorProcessor_calculateDistances, METH_VARARGS, NULL},
    {sipNm_BALL_finish, meth_AtomDistanceColorProcessor_finish, METH_VARARGS, NULL},
    {sipNm_BALL_getColor, meth_AtomDistanceColorProcessor_getColor, METH_VARARGS, NULL},
    {sipNm_BALL_getDistance, meth_AtomDistanceColorProcessor_getDistance, METH_VARARGS, NULL},
    {sipNm_BALL_getMaxDistanceColor, meth_AtomDistanceColorProcessor_getMaxDistanceColor, METH_VARARGS, NULL},
    {sipNm_BALL_getNullDistanceColor, meth_AtomDistanceColorProcessor_getNullDistanceColor, METH_VARARGS, NULL},
    {sipNm_BALL_setDistance, meth_AtomDistanceColorProcessor_setDistance, METH_VARARGS, NULL},
    {sipNm_BALL_setMaxDistanceColor, meth_AtomDistanceColorProcessor_setMaxDistanceColor, METH_VARARGS, NULL},
    {sipNm_BALL_setNullDistanceColor, meth_AtomDistanceColorProcessor_setNullDistanceColor, METH_VARARGS, NULL},
    {sipNm_BALL_setShowSelected, meth_AtomDistanceColorProcessor_setShowSelected, METH_VARARGS, NULL},
    {sipNm_BALL_showSelected, meth_AtomDistanceColorProcessor_showSelected, METH_VARARGS, NULL}
};


sipTypeDef sipType_BALL_AtomDistanceColorProcessor = {
    0,
    0,
    "BALL.AtomDistanceColorProcessor",
    0,
    {0, 0, 1},
    supers_AtomDistanceColorProcessor,
    0,
    12, methods_AtomDistanceColorProcessor,
    0, 0,
    0,
    init_AtomDistanceColorProcessor,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_AtomDistanceColorProcessor,
    cast_AtomDistanceColorProcessor,
    release_AtomDistanceColorProcessor,
    forceConvertTo_AtomDistanceColorProcessor,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
