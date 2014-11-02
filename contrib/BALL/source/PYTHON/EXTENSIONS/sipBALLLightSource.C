/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLLightSource.h"

#include "sipBALLLightSource.h"
#include "sipBALLIndex.h"
#include "sipBALLColorRGBA.h"
#include "sipBALLAngle.h"
#include "sipBALLVector3.h"



extern "C" {static PyObject *meth_LightSource_getPosition(PyObject *, PyObject *);}
static PyObject *meth_LightSource_getPosition(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        LightSource *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_LightSource,&sipCpp))
        {
            const Vector3 *sipRes;

            sipRes = &sipCpp->getPosition();

            return sipConvertFromInstance(const_cast<Vector3 *>(sipRes),sipClass_Vector3,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_LightSource,sipNm_BALL_getPosition);

    return NULL;
}


extern "C" {static PyObject *meth_LightSource_setPosition(PyObject *, PyObject *);}
static PyObject *meth_LightSource_setPosition(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const Vector3 * a0;
        LightSource *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_LightSource,&sipCpp,sipClass_Vector3,&a0))
        {
            sipCpp->setPosition(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_LightSource,sipNm_BALL_setPosition);

    return NULL;
}


extern "C" {static PyObject *meth_LightSource_getDirection(PyObject *, PyObject *);}
static PyObject *meth_LightSource_getDirection(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        LightSource *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_LightSource,&sipCpp))
        {
            const Vector3 *sipRes;

            sipRes = &sipCpp->getDirection();

            return sipConvertFromInstance(const_cast<Vector3 *>(sipRes),sipClass_Vector3,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_LightSource,sipNm_BALL_getDirection);

    return NULL;
}


extern "C" {static PyObject *meth_LightSource_setDirection(PyObject *, PyObject *);}
static PyObject *meth_LightSource_setDirection(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const Vector3 * a0;
        LightSource *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_LightSource,&sipCpp,sipClass_Vector3,&a0))
        {
            sipCpp->setDirection(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_LightSource,sipNm_BALL_setDirection);

    return NULL;
}


extern "C" {static PyObject *meth_LightSource_getAngle(PyObject *, PyObject *);}
static PyObject *meth_LightSource_getAngle(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        LightSource *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_LightSource,&sipCpp))
        {
            const Angle *sipRes;

            sipRes = &sipCpp->getAngle();

            return sipConvertFromInstance(const_cast<Angle *>(sipRes),sipClass_Angle,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_LightSource,sipNm_BALL_getAngle);

    return NULL;
}


extern "C" {static PyObject *meth_LightSource_setAngle(PyObject *, PyObject *);}
static PyObject *meth_LightSource_setAngle(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const Angle * a0;
        LightSource *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_LightSource,&sipCpp,sipClass_Angle,&a0))
        {
            sipCpp->setAngle(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_LightSource,sipNm_BALL_setAngle);

    return NULL;
}


extern "C" {static PyObject *meth_LightSource_getIntensity(PyObject *, PyObject *);}
static PyObject *meth_LightSource_getIntensity(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        LightSource *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_LightSource,&sipCpp))
        {
            float sipRes;

            sipRes = sipCpp->getIntensity();

            return PyFloat_FromDouble((double)sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_LightSource,sipNm_BALL_getIntensity);

    return NULL;
}


extern "C" {static PyObject *meth_LightSource_setIntensity(PyObject *, PyObject *);}
static PyObject *meth_LightSource_setIntensity(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        float a0;
        LightSource *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bf",&sipSelf,sipClass_LightSource,&sipCpp,&a0))
        {
            sipCpp->setIntensity(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_LightSource,sipNm_BALL_setIntensity);

    return NULL;
}


extern "C" {static PyObject *meth_LightSource_getColor(PyObject *, PyObject *);}
static PyObject *meth_LightSource_getColor(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        LightSource *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_LightSource,&sipCpp))
        {
            const ColorRGBA *sipRes;

            sipRes = &sipCpp->getColor();

            return sipConvertFromInstance(const_cast<ColorRGBA *>(sipRes),sipClass_ColorRGBA,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_LightSource,sipNm_BALL_getColor);

    return NULL;
}


extern "C" {static PyObject *meth_LightSource_setColor(PyObject *, PyObject *);}
static PyObject *meth_LightSource_setColor(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const ColorRGBA * a0;
        LightSource *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_LightSource,&sipCpp,sipClass_ColorRGBA,&a0))
        {
            sipCpp->setColor(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_LightSource,sipNm_BALL_setColor);

    return NULL;
}


extern "C" {static PyObject *meth_LightSource_getType(PyObject *, PyObject *);}
static PyObject *meth_LightSource_getType(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        LightSource *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_LightSource,&sipCpp))
        {
            Index *sipRes;

            sipRes = new Index(sipCpp->getType());

            PyObject *sipResObj = sipConvertFromMappedType(sipRes,sipMappedType_Index,NULL);
            delete sipRes;

            return sipResObj;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_LightSource,sipNm_BALL_getType);

    return NULL;
}


extern "C" {static PyObject *meth_LightSource_setType(PyObject *, PyObject *);}
static PyObject *meth_LightSource_setType(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        LightSource::Types a0;
        LightSource *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BE",&sipSelf,sipClass_LightSource,&sipCpp,sipEnum_LightSource_Types,&a0))
        {
            sipCpp->setType(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_LightSource,sipNm_BALL_setType);

    return NULL;
}


extern "C" {static PyObject *meth_LightSource_setRelativeToCamera(PyObject *, PyObject *);}
static PyObject *meth_LightSource_setRelativeToCamera(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        bool a0;
        LightSource *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bb",&sipSelf,sipClass_LightSource,&sipCpp,&a0))
        {
            sipCpp->setRelativeToCamera(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_LightSource,sipNm_BALL_setRelativeToCamera);

    return NULL;
}


extern "C" {static PyObject *meth_LightSource_isRelativeToCamera(PyObject *, PyObject *);}
static PyObject *meth_LightSource_isRelativeToCamera(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        LightSource *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_LightSource,&sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isRelativeToCamera();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_LightSource,sipNm_BALL_isRelativeToCamera);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_LightSource(void *, sipWrapperType *);}
static void *cast_LightSource(void *ptr,sipWrapperType *targetClass)
{
    if (targetClass == sipClass_LightSource)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_LightSource(void *, int);}
static void release_LightSource(void *ptr,int)
{
    delete reinterpret_cast<LightSource *>(ptr);
}


extern "C" {static void dealloc_LightSource(sipWrapper *);}
static void dealloc_LightSource(sipWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_LightSource(sipSelf->u.cppPtr,0);
    }
}


extern "C" {static void *init_LightSource(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_LightSource(sipWrapper *,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    LightSource *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            sipCpp = new LightSource();
        }
    }

    if (!sipCpp)
    {
        const LightSource * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_LightSource,&a0))
        {
            sipCpp = new LightSource(*a0);
        }
    }

    return sipCpp;
}


extern "C" {static void *forceConvertTo_LightSource(PyObject *, int *);}
static void *forceConvertTo_LightSource(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_LightSource))
        return sipConvertToCpp(valobj,sipClass_LightSource,iserrp);

    sipBadClass(sipNm_BALL_LightSource);

    *iserrp = 1;

    return NULL;
}


static PyMethodDef methods_LightSource[] = {
    {sipNm_BALL_getAngle, meth_LightSource_getAngle, METH_VARARGS, NULL},
    {sipNm_BALL_getColor, meth_LightSource_getColor, METH_VARARGS, NULL},
    {sipNm_BALL_getDirection, meth_LightSource_getDirection, METH_VARARGS, NULL},
    {sipNm_BALL_getIntensity, meth_LightSource_getIntensity, METH_VARARGS, NULL},
    {sipNm_BALL_getPosition, meth_LightSource_getPosition, METH_VARARGS, NULL},
    {sipNm_BALL_getType, meth_LightSource_getType, METH_VARARGS, NULL},
    {sipNm_BALL_isRelativeToCamera, meth_LightSource_isRelativeToCamera, METH_VARARGS, NULL},
    {sipNm_BALL_setAngle, meth_LightSource_setAngle, METH_VARARGS, NULL},
    {sipNm_BALL_setColor, meth_LightSource_setColor, METH_VARARGS, NULL},
    {sipNm_BALL_setDirection, meth_LightSource_setDirection, METH_VARARGS, NULL},
    {sipNm_BALL_setIntensity, meth_LightSource_setIntensity, METH_VARARGS, NULL},
    {sipNm_BALL_setPosition, meth_LightSource_setPosition, METH_VARARGS, NULL},
    {sipNm_BALL_setRelativeToCamera, meth_LightSource_setRelativeToCamera, METH_VARARGS, NULL},
    {sipNm_BALL_setType, meth_LightSource_setType, METH_VARARGS, NULL}
};

static sipEnumMemberDef enummembers_LightSource[] = {
    {sipNm_BALL_AMBIENT, LightSource::AMBIENT, 8},
    {sipNm_BALL_DIRECTIONAL, LightSource::DIRECTIONAL, 8},
    {sipNm_BALL_POSITIONAL, LightSource::POSITIONAL, 8},
};


sipTypeDef sipType_BALL_LightSource = {
    0,
    0,
    "BALL.LightSource",
    0,
    {0, 0, 1},
    0,
    0,
    14, methods_LightSource,
    3, enummembers_LightSource,
    0,
    init_LightSource,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_LightSource,
    cast_LightSource,
    release_LightSource,
    forceConvertTo_LightSource,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
