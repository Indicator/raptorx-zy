/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLVertex.h"

#include "sipBALLVertex.h"
#include "sipBALLVector3.h"



extern "C" {static PyObject *meth_Vertex_clear(PyObject *, PyObject *);}
static PyObject *meth_Vertex_clear(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Vertex *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Vertex,&sipCpp))
        {
            sipCpp->clear();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Vertex,sipNm_BALL_clear);

    return NULL;
}


extern "C" {static PyObject *meth_Vertex_set(PyObject *, PyObject *);}
static PyObject *meth_Vertex_set(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const Vertex * a0;
        Vertex *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_Vertex,&sipCpp,sipClass_Vertex,&a0))
        {
            sipCpp->set(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Vertex,sipNm_BALL_set);

    return NULL;
}


extern "C" {static PyObject *meth_Vertex_swap(PyObject *, PyObject *);}
static PyObject *meth_Vertex_swap(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Vertex * a0;
        Vertex *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_Vertex,&sipCpp,sipClass_Vertex,&a0))
        {
            sipCpp->swap(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Vertex,sipNm_BALL_swap);

    return NULL;
}


extern "C" {static PyObject *meth_Vertex_setVertex(PyObject *, PyObject *);}
static PyObject *meth_Vertex_setVertex(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const Vector3 * a0;
        Vertex *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_Vertex,&sipCpp,sipClass_Vector3,&a0))
        {
            sipCpp->setVertex(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    {
        float a0;
        float a1;
        float a2;
        Vertex *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bfff",&sipSelf,sipClass_Vertex,&sipCpp,&a0,&a1,&a2))
        {
            sipCpp->setVertex(a0,a1,a2);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Vertex,sipNm_BALL_setVertex);

    return NULL;
}


extern "C" {static PyObject *meth_Vertex_getVertex(PyObject *, PyObject *);}
static PyObject *meth_Vertex_getVertex(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Vertex *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Vertex,&sipCpp))
        {
            Vector3 *sipRes;

            sipRes = &sipCpp->getVertex();

            return sipConvertFromInstance(sipRes,sipClass_Vector3,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Vertex,sipNm_BALL_getVertex);

    return NULL;
}


extern "C" {static PyObject *meth_Vertex_setVertexAddress(PyObject *, PyObject *);}
static PyObject *meth_Vertex_setVertexAddress(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const Vector3 * a0;
        Vertex *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_Vertex,&sipCpp,sipClass_Vector3,&a0))
        {
            sipCpp->setVertexAddress(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Vertex,sipNm_BALL_setVertexAddress);

    return NULL;
}


extern "C" {static PyObject *meth_Vertex_setDefaultVertexAddress(PyObject *, PyObject *);}
static PyObject *meth_Vertex_setDefaultVertexAddress(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Vertex *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Vertex,&sipCpp))
        {
            sipCpp->setDefaultVertexAddress();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Vertex,sipNm_BALL_setDefaultVertexAddress);

    return NULL;
}


extern "C" {static PyObject *meth_Vertex_getVertexAddress(PyObject *, PyObject *);}
static PyObject *meth_Vertex_getVertexAddress(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Vertex *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Vertex,&sipCpp))
        {
            Vector3 *sipRes;

            sipRes = sipCpp->getVertexAddress();

            return sipConvertFromInstance(sipRes,sipClass_Vector3,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Vertex,sipNm_BALL_getVertexAddress);

    return NULL;
}


extern "C" {static PyObject *meth_Vertex_isDefaultVertexAddress(PyObject *, PyObject *);}
static PyObject *meth_Vertex_isDefaultVertexAddress(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Vertex *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Vertex,&sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isDefaultVertexAddress();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Vertex,sipNm_BALL_isDefaultVertexAddress);

    return NULL;
}


extern "C" {static PyObject *meth_Vertex_isValid(PyObject *, PyObject *);}
static PyObject *meth_Vertex_isValid(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Vertex *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Vertex,&sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isValid();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Vertex,sipNm_BALL_isValid);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_Vertex(void *, sipWrapperType *);}
static void *cast_Vertex(void *ptr,sipWrapperType *targetClass)
{
    if (targetClass == sipClass_Vertex)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_Vertex(void *, int);}
static void release_Vertex(void *ptr,int)
{
    delete reinterpret_cast<Vertex *>(ptr);
}


extern "C" {static void dealloc_Vertex(sipWrapper *);}
static void dealloc_Vertex(sipWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_Vertex(sipSelf->u.cppPtr,0);
    }
}


extern "C" {static void *init_Vertex(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_Vertex(sipWrapper *,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    Vertex *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            sipCpp = new Vertex();
        }
    }

    if (!sipCpp)
    {
        const Vertex * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_Vertex,&a0))
        {
            sipCpp = new Vertex(*a0);
        }
    }

    return sipCpp;
}


extern "C" {static void *forceConvertTo_Vertex(PyObject *, int *);}
static void *forceConvertTo_Vertex(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_Vertex))
        return sipConvertToCpp(valobj,sipClass_Vertex,iserrp);

    sipBadClass(sipNm_BALL_Vertex);

    *iserrp = 1;

    return NULL;
}


static PyMethodDef methods_Vertex[] = {
    {sipNm_BALL_clear, meth_Vertex_clear, METH_VARARGS, NULL},
    {sipNm_BALL_getVertex, meth_Vertex_getVertex, METH_VARARGS, NULL},
    {sipNm_BALL_getVertexAddress, meth_Vertex_getVertexAddress, METH_VARARGS, NULL},
    {sipNm_BALL_isDefaultVertexAddress, meth_Vertex_isDefaultVertexAddress, METH_VARARGS, NULL},
    {sipNm_BALL_isValid, meth_Vertex_isValid, METH_VARARGS, NULL},
    {sipNm_BALL_set, meth_Vertex_set, METH_VARARGS, NULL},
    {sipNm_BALL_setDefaultVertexAddress, meth_Vertex_setDefaultVertexAddress, METH_VARARGS, NULL},
    {sipNm_BALL_setVertex, meth_Vertex_setVertex, METH_VARARGS, NULL},
    {sipNm_BALL_setVertexAddress, meth_Vertex_setVertexAddress, METH_VARARGS, NULL},
    {sipNm_BALL_swap, meth_Vertex_swap, METH_VARARGS, NULL}
};


sipTypeDef sipType_BALL_Vertex = {
    0,
    0,
    "BALL.Vertex",
    0,
    {0, 0, 1},
    0,
    0,
    10, methods_Vertex,
    0, 0,
    0,
    init_Vertex,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_Vertex,
    cast_Vertex,
    release_Vertex,
    forceConvertTo_Vertex,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
