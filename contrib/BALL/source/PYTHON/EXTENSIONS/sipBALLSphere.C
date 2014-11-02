/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLSphere.h"

#include "sipBALLGeometricObject.h"
#include "sipBALLSphere.h"
#include "sipBALLVector3.h"
#include "sipBALLColorRGBA.h"
#include "sipBALLColorUnit.h"
#include "sipBALLComposite.h"


sipSphere::sipSphere() throw(): Sphere(), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,2);
}

sipSphere::sipSphere(const Sphere& a0) throw(): Sphere(a0), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,2);
}

sipSphere::~sipSphere() throw()
{
    sipCommonDtor(sipPySelf);
}

void sipSphere::clear() throw()
{
    extern void sipVH_BALL_0(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipNm_BALL_clear);

    if (!meth)
    {
        Sphere::clear();
        return;
    }

    sipVH_BALL_0(sipGILState,meth);
}

bool sipSphere::isValid() const throw()
{
    extern bool sipVH_BALL_4(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<sipMethodCache *>(&sipPyMethods[1]),sipPySelf,NULL,sipNm_BALL_isValid);

    if (!meth)
        return Sphere::isValid();

    return sipVH_BALL_4(sipGILState,meth);
}


extern "C" {static PyObject *meth_Sphere_getPositionAddress(PyObject *, PyObject *);}
static PyObject *meth_Sphere_getPositionAddress(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Sphere *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Sphere,&sipCpp))
        {
            Vector3 *sipRes;

            sipRes = sipCpp->getPositionAddress();

            return sipConvertFromInstance(sipRes,sipClass_Vector3,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Sphere,sipNm_BALL_getPositionAddress);

    return NULL;
}


extern "C" {static PyObject *meth_Sphere_isDefaultPositionAddress(PyObject *, PyObject *);}
static PyObject *meth_Sphere_isDefaultPositionAddress(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Sphere *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Sphere,&sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isDefaultPositionAddress();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Sphere,sipNm_BALL_isDefaultPositionAddress);

    return NULL;
}


extern "C" {static PyObject *meth_Sphere_isValid(PyObject *, PyObject *);}
static PyObject *meth_Sphere_isValid(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        Sphere *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Sphere,&sipCpp))
        {
            bool sipRes;

            sipRes = (sipSelfWasArg ? sipCpp->Sphere::isValid() : sipCpp->isValid());

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Sphere,sipNm_BALL_isValid);

    return NULL;
}


extern "C" {static PyObject *meth_Sphere_getPosition(PyObject *, PyObject *);}
static PyObject *meth_Sphere_getPosition(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Sphere *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Sphere,&sipCpp))
        {
            const Vector3 *sipRes;

            sipRes = &sipCpp->getPosition();

            return sipConvertFromInstance(const_cast<Vector3 *>(sipRes),sipClass_Vector3,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Sphere,sipNm_BALL_getPosition);

    return NULL;
}


extern "C" {static PyObject *meth_Sphere_getRadius(PyObject *, PyObject *);}
static PyObject *meth_Sphere_getRadius(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Sphere *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Sphere,&sipCpp))
        {
            float sipRes;

            sipRes = sipCpp->getRadius();

            return PyFloat_FromDouble((double)sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Sphere,sipNm_BALL_getRadius);

    return NULL;
}


extern "C" {static PyObject *meth_Sphere_clear(PyObject *, PyObject *);}
static PyObject *meth_Sphere_clear(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        Sphere *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Sphere,&sipCpp))
        {
            (sipSelfWasArg ? sipCpp->Sphere::clear() : sipCpp->clear());

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Sphere,sipNm_BALL_clear);

    return NULL;
}


extern "C" {static PyObject *meth_Sphere_set(PyObject *, PyObject *);}
static PyObject *meth_Sphere_set(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const Sphere * a0;
        Sphere *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_Sphere,&sipCpp,sipClass_Sphere,&a0))
        {
            sipCpp->set(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Sphere,sipNm_BALL_set);

    return NULL;
}


extern "C" {static PyObject *meth_Sphere_setPosition(PyObject *, PyObject *);}
static PyObject *meth_Sphere_setPosition(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const Vector3 * a0;
        Sphere *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_Sphere,&sipCpp,sipClass_Vector3,&a0))
        {
            sipCpp->setPosition(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Sphere,sipNm_BALL_setPosition);

    return NULL;
}


extern "C" {static PyObject *meth_Sphere_setPositionAddress(PyObject *, PyObject *);}
static PyObject *meth_Sphere_setPositionAddress(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const Vector3 * a0;
        Sphere *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_Sphere,&sipCpp,sipClass_Vector3,&a0))
        {
            sipCpp->setPositionAddress(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Sphere,sipNm_BALL_setPositionAddress);

    return NULL;
}


extern "C" {static PyObject *meth_Sphere_setRadius(PyObject *, PyObject *);}
static PyObject *meth_Sphere_setRadius(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        float a0;
        Sphere *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bf",&sipSelf,sipClass_Sphere,&sipCpp,&a0))
        {
            sipCpp->setRadius(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Sphere,sipNm_BALL_setRadius);

    return NULL;
}


extern "C" {static PyObject *meth_Sphere_swap(PyObject *, PyObject *);}
static PyObject *meth_Sphere_swap(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Sphere * a0;
        Sphere *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_Sphere,&sipCpp,sipClass_Sphere,&a0))
        {
            sipCpp->swap(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Sphere,sipNm_BALL_swap);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_Sphere(void *, sipWrapperType *);}
static void *cast_Sphere(void *ptr,sipWrapperType *targetClass)
{
    void *res;

    if (targetClass == sipClass_Sphere)
        return ptr;

    if ((res = sipCast_GeometricObject((GeometricObject *)(Sphere *)ptr,targetClass)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_Sphere(void *, int);}
static void release_Sphere(void *ptr,int state)
{
    if (state & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipSphere *>(ptr);
    else
        delete reinterpret_cast<Sphere *>(ptr);
}


extern "C" {static void dealloc_Sphere(sipWrapper *);}
static void dealloc_Sphere(sipWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipSphere *>(sipSelf->u.cppPtr)->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_Sphere(sipSelf->u.cppPtr,sipSelf->flags);
    }
}


extern "C" {static void *init_Sphere(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_Sphere(sipWrapper *sipSelf,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    sipSphere *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            sipCpp = new sipSphere();
        }
    }

    if (!sipCpp)
    {
        const Sphere * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_Sphere,&a0))
        {
            sipCpp = new sipSphere(*a0);
        }
    }

    if (sipCpp)
        sipCpp->sipPySelf = sipSelf;

    return sipCpp;
}


extern "C" {static void *forceConvertTo_Sphere(PyObject *, int *);}
static void *forceConvertTo_Sphere(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_Sphere))
        return sipConvertToCpp(valobj,sipClass_Sphere,iserrp);

    sipBadClass(sipNm_BALL_Sphere);

    *iserrp = 1;

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedClassDef supers_Sphere[] = {{41, 255, 1}};


static PyMethodDef methods_Sphere[] = {
    {sipNm_BALL_clear, meth_Sphere_clear, METH_VARARGS, NULL},
    {sipNm_BALL_getPosition, meth_Sphere_getPosition, METH_VARARGS, NULL},
    {sipNm_BALL_getPositionAddress, meth_Sphere_getPositionAddress, METH_VARARGS, NULL},
    {sipNm_BALL_getRadius, meth_Sphere_getRadius, METH_VARARGS, NULL},
    {sipNm_BALL_isDefaultPositionAddress, meth_Sphere_isDefaultPositionAddress, METH_VARARGS, NULL},
    {sipNm_BALL_isValid, meth_Sphere_isValid, METH_VARARGS, NULL},
    {sipNm_BALL_set, meth_Sphere_set, METH_VARARGS, NULL},
    {sipNm_BALL_setPosition, meth_Sphere_setPosition, METH_VARARGS, NULL},
    {sipNm_BALL_setPositionAddress, meth_Sphere_setPositionAddress, METH_VARARGS, NULL},
    {sipNm_BALL_setRadius, meth_Sphere_setRadius, METH_VARARGS, NULL},
    {sipNm_BALL_swap, meth_Sphere_swap, METH_VARARGS, NULL}
};


sipTypeDef sipType_BALL_Sphere = {
    0,
    SIP_TYPE_SCC,
    "BALL.Sphere",
    0,
    {0, 0, 1},
    supers_Sphere,
    0,
    11, methods_Sphere,
    0, 0,
    0,
    init_Sphere,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_Sphere,
    cast_Sphere,
    release_Sphere,
    forceConvertTo_Sphere,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
