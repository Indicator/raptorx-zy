/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLGeometricObject.h"

#include "sipBALLGeometricObject.h"
#include "sipBALLColorRGBA.h"
#include "sipBALLColorUnit.h"
#include "sipBALLComposite.h"


sipGeometricObject::sipGeometricObject() throw(): GeometricObject(), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,2);
}

sipGeometricObject::sipGeometricObject(const GeometricObject& a0) throw(): GeometricObject(a0), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,2);
}

sipGeometricObject::~sipGeometricObject() throw()
{
    sipCommonDtor(sipPySelf);
}

void sipGeometricObject::clear() throw()
{
    extern void sipVH_BALL_0(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipNm_BALL_clear);

    if (!meth)
    {
        GeometricObject::clear();
        return;
    }

    sipVH_BALL_0(sipGILState,meth);
}

bool sipGeometricObject::isValid() const throw()
{
    extern bool sipVH_BALL_4(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<sipMethodCache *>(&sipPyMethods[1]),sipPySelf,NULL,sipNm_BALL_isValid);

    if (!meth)
        return GeometricObject::isValid();

    return sipVH_BALL_4(sipGILState,meth);
}


extern "C" {static PyObject *meth_GeometricObject_clear(PyObject *, PyObject *);}
static PyObject *meth_GeometricObject_clear(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        GeometricObject *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_GeometricObject,&sipCpp))
        {
            (sipSelfWasArg ? sipCpp->GeometricObject::clear() : sipCpp->clear());

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_GeometricObject,sipNm_BALL_clear);

    return NULL;
}


extern "C" {static PyObject *meth_GeometricObject_set(PyObject *, PyObject *);}
static PyObject *meth_GeometricObject_set(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const GeometricObject * a0;
        GeometricObject *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_GeometricObject,&sipCpp,sipClass_GeometricObject,&a0))
        {
            sipCpp->set(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_GeometricObject,sipNm_BALL_set);

    return NULL;
}


extern "C" {static PyObject *meth_GeometricObject_swap(PyObject *, PyObject *);}
static PyObject *meth_GeometricObject_swap(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        GeometricObject * a0;
        GeometricObject *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_GeometricObject,&sipCpp,sipClass_GeometricObject,&a0))
        {
            sipCpp->swap(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_GeometricObject,sipNm_BALL_swap);

    return NULL;
}


extern "C" {static PyObject *meth_GeometricObject_setComposite(PyObject *, PyObject *);}
static PyObject *meth_GeometricObject_setComposite(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const Composite * a0;
        GeometricObject *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ@",&sipSelf,sipClass_GeometricObject,&sipCpp,sipClass_Composite,&a0))
        {
            sipCpp->setComposite(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_GeometricObject,sipNm_BALL_setComposite);

    return NULL;
}


extern "C" {static PyObject *meth_GeometricObject_getComposite(PyObject *, PyObject *);}
static PyObject *meth_GeometricObject_getComposite(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        GeometricObject *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_GeometricObject,&sipCpp))
        {
            const Composite *sipRes;

            sipRes = sipCpp->getComposite();

            return sipConvertFromInstance(const_cast<Composite *>(sipRes),sipClass_Composite,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_GeometricObject,sipNm_BALL_getComposite);

    return NULL;
}


extern "C" {static PyObject *meth_GeometricObject_isValid(PyObject *, PyObject *);}
static PyObject *meth_GeometricObject_isValid(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        GeometricObject *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_GeometricObject,&sipCpp))
        {
            bool sipRes;

            sipRes = (sipSelfWasArg ? sipCpp->GeometricObject::isValid() : sipCpp->isValid());

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_GeometricObject,sipNm_BALL_isValid);

    return NULL;
}


extern "C" {static PyObject *meth_GeometricObject_setColor(PyObject *, PyObject *);}
static PyObject *meth_GeometricObject_setColor(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const ColorRGBA * a0;
        GeometricObject *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_GeometricObject,&sipCpp,sipClass_ColorRGBA,&a0))
        {
            sipCpp->setColor(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    {
        const ColorUnit * a0;
        const ColorUnit * a1;
        const ColorUnit * a2;
        const ColorUnit& a3def = 1;
        const ColorUnit * a3 = &a3def;
        GeometricObject *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJAJAJA|JA",&sipSelf,sipClass_GeometricObject,&sipCpp,sipClass_ColorUnit,&a0,sipClass_ColorUnit,&a1,sipClass_ColorUnit,&a2,sipClass_ColorUnit,&a3))
        {
            sipCpp->setColor(*a0,*a1,*a2,*a3);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_GeometricObject,sipNm_BALL_setColor);

    return NULL;
}


extern "C" {static PyObject *meth_GeometricObject_getColor(PyObject *, PyObject *);}
static PyObject *meth_GeometricObject_getColor(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        GeometricObject *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_GeometricObject,&sipCpp))
        {
            ColorRGBA *sipRes;

            sipRes = &sipCpp->getColor();

            return sipConvertFromInstance(sipRes,sipClass_ColorRGBA,NULL);
        }
    }

    {
        ColorUnit * a0;
        ColorUnit * a1;
        ColorUnit * a2;
        ColorUnit * a3;
        GeometricObject *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJAJAJAJA",&sipSelf,sipClass_GeometricObject,&sipCpp,sipClass_ColorUnit,&a0,sipClass_ColorUnit,&a1,sipClass_ColorUnit,&a2,sipClass_ColorUnit,&a3))
        {
            sipCpp->getColor(*a0,*a1,*a2,*a3);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_GeometricObject,sipNm_BALL_getColor);

    return NULL;
}


extern "C" {static PyObject *slot_GeometricObject___repr__(PyObject *sipSelf);}
static PyObject *slot_GeometricObject___repr__(PyObject *sipSelf)
{
    GeometricObject *sipCpp = reinterpret_cast<GeometricObject *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_GeometricObject));

    if (!sipCpp)
        return 0;


    {
        {
            PyObject * sipRes = 0;

#line 93 "geometricObject.sip"
	sipRes = PyString_FromString(String(String("GeometricObject") 
						+ " { "
						+ " Composite: " + String((long int)sipCpp->getComposite())
						+ " }").c_str());
#line 321 "sipBALLGeometricObject.C"

            return sipRes;
        }
    }
}


extern "C" {static PyObject *slot_GeometricObject___str__(PyObject *sipSelf);}
static PyObject *slot_GeometricObject___str__(PyObject *sipSelf)
{
    GeometricObject *sipCpp = reinterpret_cast<GeometricObject *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_GeometricObject));

    if (!sipCpp)
        return 0;


    {
        {
            PyObject * sipRes = 0;

#line 85 "geometricObject.sip"
	sipRes = PyString_FromString(String(String("GeometricObject") 
						+ " { "
						+ " Composite: " + String((long int)sipCpp->getComposite())
						+ " }").c_str());
#line 347 "sipBALLGeometricObject.C"

            return sipRes;
        }
    }
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_GeometricObject(void *, sipWrapperType *);}
static void *cast_GeometricObject(void *ptr,sipWrapperType *targetClass)
{
    if (targetClass == sipClass_GeometricObject)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_GeometricObject(void *, int);}
static void release_GeometricObject(void *ptr,int state)
{
    if (state & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipGeometricObject *>(ptr);
    else
        delete reinterpret_cast<GeometricObject *>(ptr);
}


extern "C" {static void dealloc_GeometricObject(sipWrapper *);}
static void dealloc_GeometricObject(sipWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipGeometricObject *>(sipSelf->u.cppPtr)->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_GeometricObject(sipSelf->u.cppPtr,sipSelf->flags);
    }
}


extern "C" {static void *init_GeometricObject(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_GeometricObject(sipWrapper *sipSelf,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    sipGeometricObject *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            sipCpp = new sipGeometricObject();
        }
    }

    if (!sipCpp)
    {
        const GeometricObject * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_GeometricObject,&a0))
        {
            sipCpp = new sipGeometricObject(*a0);
        }
    }

    if (sipCpp)
        sipCpp->sipPySelf = sipSelf;

    return sipCpp;
}


extern "C" {static void *forceConvertTo_GeometricObject(PyObject *, int *);}
static void *forceConvertTo_GeometricObject(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_GeometricObject))
        return sipConvertToCpp(valobj,sipClass_GeometricObject,iserrp);

    sipBadClass(sipNm_BALL_GeometricObject);

    *iserrp = 1;

    return NULL;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_GeometricObject[] = {
    {(void *)slot_GeometricObject___repr__, repr_slot},
    {(void *)slot_GeometricObject___str__, str_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_GeometricObject[] = {
    {sipNm_BALL_clear, meth_GeometricObject_clear, METH_VARARGS, NULL},
    {sipNm_BALL_getColor, meth_GeometricObject_getColor, METH_VARARGS, NULL},
    {sipNm_BALL_getComposite, meth_GeometricObject_getComposite, METH_VARARGS, NULL},
    {sipNm_BALL_isValid, meth_GeometricObject_isValid, METH_VARARGS, NULL},
    {sipNm_BALL_set, meth_GeometricObject_set, METH_VARARGS, NULL},
    {sipNm_BALL_setColor, meth_GeometricObject_setColor, METH_VARARGS, NULL},
    {sipNm_BALL_setComposite, meth_GeometricObject_setComposite, METH_VARARGS, NULL},
    {sipNm_BALL_swap, meth_GeometricObject_swap, METH_VARARGS, NULL}
};


sipTypeDef sipType_BALL_GeometricObject = {
    0,
    SIP_TYPE_SCC,
    "BALL.GeometricObject",
    0,
    {0, 0, 1},
    0,
    slots_GeometricObject,
    8, methods_GeometricObject,
    0, 0,
    0,
    init_GeometricObject,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_GeometricObject,
    cast_GeometricObject,
    release_GeometricObject,
    forceConvertTo_GeometricObject,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
