/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLSurfaceProcessor.h"

#include "sipBALLSurfaceProcessor.h"
#include "sipBALLSurface.h"



extern "C" {static PyObject *meth_SurfaceProcessor_start(PyObject *, PyObject *);}
static PyObject *meth_SurfaceProcessor_start(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        SurfaceProcessor *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_SurfaceProcessor,&sipCpp))
        {
            bool sipRes;

            try
            {
            sipRes = sipCpp->start();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_SurfaceProcessor,sipNm_BALL_start);

    return NULL;
}


extern "C" {static PyObject *meth_SurfaceProcessor_finish(PyObject *, PyObject *);}
static PyObject *meth_SurfaceProcessor_finish(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        SurfaceProcessor *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_SurfaceProcessor,&sipCpp))
        {
            bool sipRes;

            try
            {
            sipRes = sipCpp->finish();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_SurfaceProcessor,sipNm_BALL_finish);

    return NULL;
}


extern "C" {static PyObject *meth_SurfaceProcessor_getSurface(PyObject *, PyObject *);}
static PyObject *meth_SurfaceProcessor_getSurface(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        SurfaceProcessor *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_SurfaceProcessor,&sipCpp))
        {
            Surface *sipRes;

            try
            {
            sipRes = &sipCpp->getSurface();
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return sipConvertFromInstance(sipRes,sipClass_Surface,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_SurfaceProcessor,sipNm_BALL_getSurface);

    return NULL;
}


extern "C" {static PyObject *meth_SurfaceProcessor_setProbeRadius(PyObject *, PyObject *);}
static PyObject *meth_SurfaceProcessor_setProbeRadius(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        double a0;
        SurfaceProcessor *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bd",&sipSelf,sipClass_SurfaceProcessor,&sipCpp,&a0))
        {
            try
            {
            sipCpp->setProbeRadius(a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_SurfaceProcessor,sipNm_BALL_setProbeRadius);

    return NULL;
}


extern "C" {static PyObject *meth_SurfaceProcessor_getProbeRadius(PyObject *, PyObject *);}
static PyObject *meth_SurfaceProcessor_getProbeRadius(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        SurfaceProcessor *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_SurfaceProcessor,&sipCpp))
        {
            double sipRes;

            try
            {
            sipRes = sipCpp->getProbeRadius();
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return PyFloat_FromDouble(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_SurfaceProcessor,sipNm_BALL_getProbeRadius);

    return NULL;
}


extern "C" {static PyObject *meth_SurfaceProcessor_setDensity(PyObject *, PyObject *);}
static PyObject *meth_SurfaceProcessor_setDensity(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        double a0;
        SurfaceProcessor *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bd",&sipSelf,sipClass_SurfaceProcessor,&sipCpp,&a0))
        {
            try
            {
            sipCpp->setDensity(a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_SurfaceProcessor,sipNm_BALL_setDensity);

    return NULL;
}


extern "C" {static PyObject *meth_SurfaceProcessor_getDensity(PyObject *, PyObject *);}
static PyObject *meth_SurfaceProcessor_getDensity(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        SurfaceProcessor *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_SurfaceProcessor,&sipCpp))
        {
            double sipRes;

            try
            {
            sipRes = sipCpp->getDensity();
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return PyFloat_FromDouble(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_SurfaceProcessor,sipNm_BALL_getDensity);

    return NULL;
}


extern "C" {static PyObject *meth_SurfaceProcessor_setType(PyObject *, PyObject *);}
static PyObject *meth_SurfaceProcessor_setType(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        SurfaceProcessor::SurfaceType a0;
        SurfaceProcessor *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BE",&sipSelf,sipClass_SurfaceProcessor,&sipCpp,sipEnum_SurfaceProcessor_SurfaceType,&a0))
        {
            try
            {
            sipCpp->setType(a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_SurfaceProcessor,sipNm_BALL_setType);

    return NULL;
}


extern "C" {static PyObject *meth_SurfaceProcessor_getType(PyObject *, PyObject *);}
static PyObject *meth_SurfaceProcessor_getType(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        SurfaceProcessor *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_SurfaceProcessor,&sipCpp))
        {
            SurfaceProcessor::SurfaceType sipRes;

            try
            {
            sipRes = sipCpp->getType();
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return sipConvertFromNamedEnum(sipRes,sipEnum_SurfaceProcessor_SurfaceType);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_SurfaceProcessor,sipNm_BALL_getType);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_SurfaceProcessor(void *, sipWrapperType *);}
static void *cast_SurfaceProcessor(void *ptr,sipWrapperType *targetClass)
{
    if (targetClass == sipClass_SurfaceProcessor)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_SurfaceProcessor(void *, int);}
static void release_SurfaceProcessor(void *ptr,int)
{
    delete reinterpret_cast<SurfaceProcessor *>(ptr);
}


extern "C" {static void dealloc_SurfaceProcessor(sipWrapper *);}
static void dealloc_SurfaceProcessor(sipWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_SurfaceProcessor(sipSelf->u.cppPtr,0);
    }
}


extern "C" {static void *init_SurfaceProcessor(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_SurfaceProcessor(sipWrapper *,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    SurfaceProcessor *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            try
            {
            sipCpp = new SurfaceProcessor();
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
        const SurfaceProcessor * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_SurfaceProcessor,&a0))
        {
            try
            {
            sipCpp = new SurfaceProcessor(*a0);
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }
        }
    }

    return sipCpp;
}


extern "C" {static void *forceConvertTo_SurfaceProcessor(PyObject *, int *);}
static void *forceConvertTo_SurfaceProcessor(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_SurfaceProcessor))
        return sipConvertToCpp(valobj,sipClass_SurfaceProcessor,iserrp);

    sipBadClass(sipNm_BALL_SurfaceProcessor);

    *iserrp = 1;

    return NULL;
}


static PyMethodDef methods_SurfaceProcessor[] = {
    {sipNm_BALL_finish, meth_SurfaceProcessor_finish, METH_VARARGS, NULL},
    {sipNm_BALL_getDensity, meth_SurfaceProcessor_getDensity, METH_VARARGS, NULL},
    {sipNm_BALL_getProbeRadius, meth_SurfaceProcessor_getProbeRadius, METH_VARARGS, NULL},
    {sipNm_BALL_getSurface, meth_SurfaceProcessor_getSurface, METH_VARARGS, NULL},
    {sipNm_BALL_getType, meth_SurfaceProcessor_getType, METH_VARARGS, NULL},
    {sipNm_BALL_setDensity, meth_SurfaceProcessor_setDensity, METH_VARARGS, NULL},
    {sipNm_BALL_setProbeRadius, meth_SurfaceProcessor_setProbeRadius, METH_VARARGS, NULL},
    {sipNm_BALL_setType, meth_SurfaceProcessor_setType, METH_VARARGS, NULL},
    {sipNm_BALL_start, meth_SurfaceProcessor_start, METH_VARARGS, NULL}
};

static sipEnumMemberDef enummembers_SurfaceProcessor[] = {
    {sipNm_BALL_SOLVENT_ACCESSIBLE_SURFACE, SurfaceProcessor::SOLVENT_ACCESSIBLE_SURFACE, 13},
    {sipNm_BALL_SOLVENT_EXCLUDED_SURFACE, SurfaceProcessor::SOLVENT_EXCLUDED_SURFACE, 13},
};


sipTypeDef sipType_BALL_SurfaceProcessor = {
    0,
    0,
    "BALL.SurfaceProcessor",
    0,
    {0, 0, 1},
    0,
    0,
    9, methods_SurfaceProcessor,
    2, enummembers_SurfaceProcessor,
    0,
    init_SurfaceProcessor,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_SurfaceProcessor,
    cast_SurfaceProcessor,
    release_SurfaceProcessor,
    forceConvertTo_SurfaceProcessor,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
