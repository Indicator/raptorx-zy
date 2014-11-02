/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLRegularData1D.h"

#include "sipBALLIndexOverflow.h"
#include "sipBALLRegularData1D.h"
#include "sipBALLPosition.h"


sipRegularData1D::sipRegularData1D() throw(): RegularData1D(), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,1);
}

sipRegularData1D::sipRegularData1D(const RegularData1D& a0) throw(): RegularData1D(a0), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,1);
}

sipRegularData1D::~sipRegularData1D() throw()
{
    sipCommonDtor(sipPySelf);
}

void sipRegularData1D::clear() throw()
{
    extern void sipVH_BALL_0(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipNm_BALL_clear);

    if (!meth)
    {
        RegularData1D::clear();
        return;
    }

    sipVH_BALL_0(sipGILState,meth);
}


extern "C" {static PyObject *meth_RegularData1D_clear(PyObject *, PyObject *);}
static PyObject *meth_RegularData1D_clear(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        RegularData1D *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_RegularData1D,&sipCpp))
        {
            (sipSelfWasArg ? sipCpp->RegularData1D::clear() : sipCpp->clear());

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_RegularData1D,sipNm_BALL_clear);

    return NULL;
}


extern "C" {static PyObject *meth_RegularData1D_getSize(PyObject *, PyObject *);}
static PyObject *meth_RegularData1D_getSize(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        RegularData1D *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_RegularData1D,&sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->getSize();

            return PyInt_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_RegularData1D,sipNm_BALL_getSize);

    return NULL;
}


extern "C" {static PyObject *meth_RegularData1D_getOrigin(PyObject *, PyObject *);}
static PyObject *meth_RegularData1D_getOrigin(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        RegularData1D *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_RegularData1D,&sipCpp))
        {
            double sipRes;

            sipRes = sipCpp->getOrigin();

            return PyFloat_FromDouble(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_RegularData1D,sipNm_BALL_getOrigin);

    return NULL;
}


extern "C" {static PyObject *meth_RegularData1D_getDimension(PyObject *, PyObject *);}
static PyObject *meth_RegularData1D_getDimension(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        RegularData1D *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_RegularData1D,&sipCpp))
        {
            double sipRes;

            sipRes = sipCpp->getDimension();

            return PyFloat_FromDouble(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_RegularData1D,sipNm_BALL_getDimension);

    return NULL;
}


extern "C" {static PyObject *meth_RegularData1D_setOrigin(PyObject *, PyObject *);}
static PyObject *meth_RegularData1D_setOrigin(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        double a0;
        RegularData1D *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bd",&sipSelf,sipClass_RegularData1D,&sipCpp,&a0))
        {
            sipCpp->setOrigin(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_RegularData1D,sipNm_BALL_setOrigin);

    return NULL;
}


extern "C" {static PyObject *meth_RegularData1D_setDimension(PyObject *, PyObject *);}
static PyObject *meth_RegularData1D_setDimension(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        double a0;
        RegularData1D *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bd",&sipSelf,sipClass_RegularData1D,&sipCpp,&a0))
        {
            sipCpp->setDimension(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_RegularData1D,sipNm_BALL_setDimension);

    return NULL;
}


extern "C" {static PyObject *meth_RegularData1D_resize(PyObject *, PyObject *);}
static PyObject *meth_RegularData1D_resize(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        int a0;
        RegularData1D *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bi",&sipSelf,sipClass_RegularData1D,&sipCpp,&a0))
        {
            sipCpp->resize(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_RegularData1D,sipNm_BALL_resize);

    return NULL;
}


extern "C" {static PyObject *slot_RegularData1D___getitem__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_RegularData1D___getitem__(PyObject *sipSelf,PyObject *sipArg)
{
    RegularData1D *sipCpp = reinterpret_cast<RegularData1D *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_RegularData1D));

    if (!sipCpp)
        return 0;

    int sipArgsParsed = 0;

    {
        Position * a0;
        int a0State = 0;

        if (sipParseArgs(&sipArgsParsed,sipArg,"M1",sipMappedType_Position,&a0,&a0State))
        {
            float sipRes = 0;

#line 23 "regularData1D.sip"
  sipRes = sipCpp->operator [] (*a0);
#line 248 "sipBALLRegularData1D.C"

            sipReleaseMappedType(a0,sipMappedType_Position,a0State);

            return PyFloat_FromDouble((double)sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_RegularData1D,sipNm_BALL___getitem__);

    return 0;
}


extern "C" {static PyObject *slot_RegularData1D___eq__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_RegularData1D___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    RegularData1D *sipCpp = reinterpret_cast<RegularData1D *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_RegularData1D));

    if (!sipCpp)
        return 0;

    int sipArgsParsed = 0;

    {
        const RegularData1D * a0;

        if (sipParseArgs(&sipArgsParsed,sipArg,"JA",sipClass_RegularData1D,&a0))
        {
            bool sipRes;

            sipRes = ((*sipCpp) == *a0);

            return PyBool_FromLong(sipRes);
        }
    }

    return sipPySlotExtend(&sipModuleAPI_BALL,eq_slot,sipClass_RegularData1D,sipSelf,sipArg);
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_RegularData1D(void *, sipWrapperType *);}
static void *cast_RegularData1D(void *ptr,sipWrapperType *targetClass)
{
    if (targetClass == sipClass_RegularData1D)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_RegularData1D(void *, int);}
static void release_RegularData1D(void *ptr,int state)
{
    if (state & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipRegularData1D *>(ptr);
    else
        delete reinterpret_cast<RegularData1D *>(ptr);
}


extern "C" {static void dealloc_RegularData1D(sipWrapper *);}
static void dealloc_RegularData1D(sipWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipRegularData1D *>(sipSelf->u.cppPtr)->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_RegularData1D(sipSelf->u.cppPtr,sipSelf->flags);
    }
}


extern "C" {static void *init_RegularData1D(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_RegularData1D(sipWrapper *sipSelf,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    sipRegularData1D *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            sipCpp = new sipRegularData1D();
        }
    }

    if (!sipCpp)
    {
        const RegularData1D * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_RegularData1D,&a0))
        {
            sipCpp = new sipRegularData1D(*a0);
        }
    }

    if (sipCpp)
        sipCpp->sipPySelf = sipSelf;

    return sipCpp;
}


extern "C" {static void *forceConvertTo_RegularData1D(PyObject *, int *);}
static void *forceConvertTo_RegularData1D(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_RegularData1D))
        return sipConvertToCpp(valobj,sipClass_RegularData1D,iserrp);

    sipBadClass(sipNm_BALL_RegularData1D);

    *iserrp = 1;

    return NULL;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_RegularData1D[] = {
    {(void *)slot_RegularData1D___getitem__, getitem_slot},
    {(void *)slot_RegularData1D___eq__, eq_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_RegularData1D[] = {
    {sipNm_BALL_clear, meth_RegularData1D_clear, METH_VARARGS, NULL},
    {sipNm_BALL_getDimension, meth_RegularData1D_getDimension, METH_VARARGS, NULL},
    {sipNm_BALL_getOrigin, meth_RegularData1D_getOrigin, METH_VARARGS, NULL},
    {sipNm_BALL_getSize, meth_RegularData1D_getSize, METH_VARARGS, NULL},
    {sipNm_BALL_resize, meth_RegularData1D_resize, METH_VARARGS, NULL},
    {sipNm_BALL_setDimension, meth_RegularData1D_setDimension, METH_VARARGS, NULL},
    {sipNm_BALL_setOrigin, meth_RegularData1D_setOrigin, METH_VARARGS, NULL}
};


sipTypeDef sipType_BALL_RegularData1D = {
    0,
    0,
    "BALL.RegularData1D",
    0,
    {0, 0, 1},
    0,
    slots_RegularData1D,
    7, methods_RegularData1D,
    0, 0,
    0,
    init_RegularData1D,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_RegularData1D,
    cast_RegularData1D,
    release_RegularData1D,
    forceConvertTo_RegularData1D,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
