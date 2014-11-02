/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLCamera.h"

#include "sipBALLVector3.h"
#include "sipBALLCamera.h"
#include "sipBALLString.h"
#include "sipBALLQuaternion.h"


sipCamera::sipCamera() throw(): Camera(), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,1);
}

sipCamera::sipCamera(const Camera& a0) throw(): Camera(a0), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,1);
}

sipCamera::sipCamera(const Vector3& a0,const Vector3& a1,const Vector3& a2) throw(): Camera(a0,a1,a2), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,1);
}

sipCamera::~sipCamera() throw()
{
    sipCommonDtor(sipPySelf);
}

void sipCamera::clear() throw()
{
    extern void sipVH_BALL_0(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipNm_BALL_clear);

    if (!meth)
    {
        Camera::clear();
        return;
    }

    sipVH_BALL_0(sipGILState,meth);
}


extern "C" {static PyObject *meth_Camera_getViewPoint(PyObject *, PyObject *);}
static PyObject *meth_Camera_getViewPoint(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Camera *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Camera,&sipCpp))
        {
            const Vector3 *sipRes;

            sipRes = &sipCpp->getViewPoint();

            return sipConvertFromInstance(const_cast<Vector3 *>(sipRes),sipClass_Vector3,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Camera,sipNm_BALL_getViewPoint);

    return NULL;
}


extern "C" {static PyObject *meth_Camera_setViewPoint(PyObject *, PyObject *);}
static PyObject *meth_Camera_setViewPoint(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const Vector3 * a0;
        Camera *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_Camera,&sipCpp,sipClass_Vector3,&a0))
        {
            sipCpp->setViewPoint(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Camera,sipNm_BALL_setViewPoint);

    return NULL;
}


extern "C" {static PyObject *meth_Camera_getLookAtPosition(PyObject *, PyObject *);}
static PyObject *meth_Camera_getLookAtPosition(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Camera *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Camera,&sipCpp))
        {
            const Vector3 *sipRes;

            sipRes = &sipCpp->getLookAtPosition();

            return sipConvertFromInstance(const_cast<Vector3 *>(sipRes),sipClass_Vector3,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Camera,sipNm_BALL_getLookAtPosition);

    return NULL;
}


extern "C" {static PyObject *meth_Camera_setLookAtPosition(PyObject *, PyObject *);}
static PyObject *meth_Camera_setLookAtPosition(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const Vector3 * a0;
        Camera *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_Camera,&sipCpp,sipClass_Vector3,&a0))
        {
            sipCpp->setLookAtPosition(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Camera,sipNm_BALL_setLookAtPosition);

    return NULL;
}


extern "C" {static PyObject *meth_Camera_getLookUpVector(PyObject *, PyObject *);}
static PyObject *meth_Camera_getLookUpVector(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Camera *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Camera,&sipCpp))
        {
            const Vector3 *sipRes;

            sipRes = &sipCpp->getLookUpVector();

            return sipConvertFromInstance(const_cast<Vector3 *>(sipRes),sipClass_Vector3,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Camera,sipNm_BALL_getLookUpVector);

    return NULL;
}


extern "C" {static PyObject *meth_Camera_setLookUpVector(PyObject *, PyObject *);}
static PyObject *meth_Camera_setLookUpVector(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const Vector3 * a0;
        Camera *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_Camera,&sipCpp,sipClass_Vector3,&a0))
        {
            sipCpp->setLookUpVector(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Camera,sipNm_BALL_setLookUpVector);

    return NULL;
}


extern "C" {static PyObject *meth_Camera_getDistance(PyObject *, PyObject *);}
static PyObject *meth_Camera_getDistance(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Camera *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Camera,&sipCpp))
        {
            float sipRes;

            sipRes = sipCpp->getDistance();

            return PyFloat_FromDouble((double)sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Camera,sipNm_BALL_getDistance);

    return NULL;
}


extern "C" {static PyObject *meth_Camera_getViewVector(PyObject *, PyObject *);}
static PyObject *meth_Camera_getViewVector(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Camera *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Camera,&sipCpp))
        {
            Vector3 *sipRes;

            sipRes = new Vector3(sipCpp->getViewVector());

            return sipConvertFromNewInstance(sipRes,sipClass_Vector3,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Camera,sipNm_BALL_getViewVector);

    return NULL;
}


extern "C" {static PyObject *meth_Camera_getRightVector(PyObject *, PyObject *);}
static PyObject *meth_Camera_getRightVector(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Camera *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Camera,&sipCpp))
        {
            Vector3 *sipRes;

            sipRes = new Vector3(sipCpp->getRightVector());

            return sipConvertFromNewInstance(sipRes,sipClass_Vector3,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Camera,sipNm_BALL_getRightVector);

    return NULL;
}


extern "C" {static PyObject *meth_Camera_translate(PyObject *, PyObject *);}
static PyObject *meth_Camera_translate(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const Vector3 * a0;
        Camera *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_Camera,&sipCpp,sipClass_Vector3,&a0))
        {
            sipCpp->translate(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Camera,sipNm_BALL_translate);

    return NULL;
}


extern "C" {static PyObject *meth_Camera_rotate(PyObject *, PyObject *);}
static PyObject *meth_Camera_rotate(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const Quaternion * a0;
        const Vector3 * a1;
        Camera *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJAJA",&sipSelf,sipClass_Camera,&sipCpp,sipClass_Quaternion,&a0,sipClass_Vector3,&a1))
        {
            sipCpp->rotate(*a0,*a1);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Camera,sipNm_BALL_rotate);

    return NULL;
}


extern "C" {static PyObject *meth_Camera_clear(PyObject *, PyObject *);}
static PyObject *meth_Camera_clear(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        Camera *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Camera,&sipCpp))
        {
            (sipSelfWasArg ? sipCpp->Camera::clear() : sipCpp->clear());

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Camera,sipNm_BALL_clear);

    return NULL;
}


extern "C" {static PyObject *meth_Camera_toString(PyObject *, PyObject *);}
static PyObject *meth_Camera_toString(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Camera *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Camera,&sipCpp))
        {
            String *sipRes;

            sipRes = new String(sipCpp->toString());

            return sipConvertFromNewInstance(sipRes,sipClass_String,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Camera,sipNm_BALL_toString);

    return NULL;
}


extern "C" {static PyObject *meth_Camera_readFromString(PyObject *, PyObject *);}
static PyObject *meth_Camera_readFromString(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const String * a0;
        int a0State = 0;
        Camera *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ1",&sipSelf,sipClass_Camera,&sipCpp,sipClass_String,&a0,&a0State))
        {
            bool sipRes;

            sipRes = sipCpp->readFromString(*a0);

            sipReleaseInstance(const_cast<String *>(a0),sipClass_String,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Camera,sipNm_BALL_readFromString);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_Camera(void *, sipWrapperType *);}
static void *cast_Camera(void *ptr,sipWrapperType *targetClass)
{
    if (targetClass == sipClass_Camera)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_Camera(void *, int);}
static void release_Camera(void *ptr,int state)
{
    if (state & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipCamera *>(ptr);
    else
        delete reinterpret_cast<Camera *>(ptr);
}


extern "C" {static void dealloc_Camera(sipWrapper *);}
static void dealloc_Camera(sipWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipCamera *>(sipSelf->u.cppPtr)->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_Camera(sipSelf->u.cppPtr,sipSelf->flags);
    }
}


extern "C" {static void *init_Camera(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_Camera(sipWrapper *sipSelf,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    sipCamera *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            sipCpp = new sipCamera();
        }
    }

    if (!sipCpp)
    {
        const Camera * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_Camera,&a0))
        {
            sipCpp = new sipCamera(*a0);
        }
    }

    if (!sipCpp)
    {
        const Vector3 * a0;
        const Vector3 * a1;
        const Vector3 * a2;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JAJAJA",sipClass_Vector3,&a0,sipClass_Vector3,&a1,sipClass_Vector3,&a2))
        {
            sipCpp = new sipCamera(*a0,*a1,*a2);
        }
    }

    if (sipCpp)
        sipCpp->sipPySelf = sipSelf;

    return sipCpp;
}


extern "C" {static void *forceConvertTo_Camera(PyObject *, int *);}
static void *forceConvertTo_Camera(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_Camera))
        return sipConvertToCpp(valobj,sipClass_Camera,iserrp);

    sipBadClass(sipNm_BALL_Camera);

    *iserrp = 1;

    return NULL;
}


static PyMethodDef methods_Camera[] = {
    {sipNm_BALL_clear, meth_Camera_clear, METH_VARARGS, NULL},
    {sipNm_BALL_getDistance, meth_Camera_getDistance, METH_VARARGS, NULL},
    {sipNm_BALL_getLookAtPosition, meth_Camera_getLookAtPosition, METH_VARARGS, NULL},
    {sipNm_BALL_getLookUpVector, meth_Camera_getLookUpVector, METH_VARARGS, NULL},
    {sipNm_BALL_getRightVector, meth_Camera_getRightVector, METH_VARARGS, NULL},
    {sipNm_BALL_getViewPoint, meth_Camera_getViewPoint, METH_VARARGS, NULL},
    {sipNm_BALL_getViewVector, meth_Camera_getViewVector, METH_VARARGS, NULL},
    {sipNm_BALL_readFromString, meth_Camera_readFromString, METH_VARARGS, NULL},
    {sipNm_BALL_rotate, meth_Camera_rotate, METH_VARARGS, NULL},
    {sipNm_BALL_setLookAtPosition, meth_Camera_setLookAtPosition, METH_VARARGS, NULL},
    {sipNm_BALL_setLookUpVector, meth_Camera_setLookUpVector, METH_VARARGS, NULL},
    {sipNm_BALL_setViewPoint, meth_Camera_setViewPoint, METH_VARARGS, NULL},
    {sipNm_BALL_toString, meth_Camera_toString, METH_VARARGS, NULL},
    {sipNm_BALL_translate, meth_Camera_translate, METH_VARARGS, NULL}
};


sipTypeDef sipType_BALL_Camera = {
    0,
    0,
    "BALL.Camera",
    0,
    {0, 0, 1},
    0,
    0,
    14, methods_Camera,
    0, 0,
    0,
    init_Camera,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_Camera,
    cast_Camera,
    release_Camera,
    forceConvertTo_Camera,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
