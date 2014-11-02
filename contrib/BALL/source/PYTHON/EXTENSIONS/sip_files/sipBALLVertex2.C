/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLVertex2.h"

#include "sipBALLVertex2.h"
#include "sipBALLVector3.h"



extern "C" {static PyObject *meth_Vertex2_clear(PyObject *, PyObject *);}
static PyObject *meth_Vertex2_clear(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Vertex2 *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Vertex2,&sipCpp))
        {
            sipCpp->clear();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Vertex2,sipNm_BALL_clear);

    return NULL;
}


extern "C" {static PyObject *meth_Vertex2_set(PyObject *, PyObject *);}
static PyObject *meth_Vertex2_set(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const Vertex2 * a0;
        Vertex2 *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_Vertex2,&sipCpp,sipClass_Vertex2,&a0))
        {
            sipCpp->set(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Vertex2,sipNm_BALL_set);

    return NULL;
}


extern "C" {static PyObject *meth_Vertex2_swap(PyObject *, PyObject *);}
static PyObject *meth_Vertex2_swap(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Vertex2 * a0;
        Vertex2 *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_Vertex2,&sipCpp,sipClass_Vertex2,&a0))
        {
            sipCpp->swap(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Vertex2,sipNm_BALL_swap);

    return NULL;
}


extern "C" {static PyObject *meth_Vertex2_setVertex1(PyObject *, PyObject *);}
static PyObject *meth_Vertex2_setVertex1(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const Vector3 * a0;
        Vertex2 *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_Vertex2,&sipCpp,sipClass_Vector3,&a0))
        {
            sipCpp->setVertex1(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    {
        float a0;
        float a1;
        float a2;
        Vertex2 *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bfff",&sipSelf,sipClass_Vertex2,&sipCpp,&a0,&a1,&a2))
        {
            sipCpp->setVertex1(a0,a1,a2);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Vertex2,sipNm_BALL_setVertex1);

    return NULL;
}


extern "C" {static PyObject *meth_Vertex2_getVertex1(PyObject *, PyObject *);}
static PyObject *meth_Vertex2_getVertex1(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Vertex2 *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Vertex2,&sipCpp))
        {
            Vector3 *sipRes;

            sipRes = &sipCpp->getVertex1();

            return sipConvertFromInstance(sipRes,sipClass_Vector3,NULL);
        }
    }

    {
        Vector3 * a0;
        Vertex2 *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_Vertex2,&sipCpp,sipClass_Vector3,&a0))
        {
            sipCpp->getVertex1(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Vertex2,sipNm_BALL_getVertex1);

    return NULL;
}


extern "C" {static PyObject *meth_Vertex2_setVertex1Address(PyObject *, PyObject *);}
static PyObject *meth_Vertex2_setVertex1Address(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const Vector3 * a0;
        Vertex2 *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_Vertex2,&sipCpp,sipClass_Vector3,&a0))
        {
            sipCpp->setVertex1Address(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Vertex2,sipNm_BALL_setVertex1Address);

    return NULL;
}


extern "C" {static PyObject *meth_Vertex2_setDefaultVertex1Address(PyObject *, PyObject *);}
static PyObject *meth_Vertex2_setDefaultVertex1Address(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Vertex2 *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Vertex2,&sipCpp))
        {
            sipCpp->setDefaultVertex1Address();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Vertex2,sipNm_BALL_setDefaultVertex1Address);

    return NULL;
}


extern "C" {static PyObject *meth_Vertex2_getVertex1Address(PyObject *, PyObject *);}
static PyObject *meth_Vertex2_getVertex1Address(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Vertex2 *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Vertex2,&sipCpp))
        {
            Vector3 *sipRes;

            sipRes = sipCpp->getVertex1Address();

            return sipConvertFromInstance(sipRes,sipClass_Vector3,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Vertex2,sipNm_BALL_getVertex1Address);

    return NULL;
}


extern "C" {static PyObject *meth_Vertex2_setVertex2(PyObject *, PyObject *);}
static PyObject *meth_Vertex2_setVertex2(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const Vector3 * a0;
        Vertex2 *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_Vertex2,&sipCpp,sipClass_Vector3,&a0))
        {
            sipCpp->setVertex2(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    {
        float a0;
        float a1;
        float a2;
        Vertex2 *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bfff",&sipSelf,sipClass_Vertex2,&sipCpp,&a0,&a1,&a2))
        {
            sipCpp->setVertex2(a0,a1,a2);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Vertex2,sipNm_BALL_setVertex2);

    return NULL;
}


extern "C" {static PyObject *meth_Vertex2_getVertex2(PyObject *, PyObject *);}
static PyObject *meth_Vertex2_getVertex2(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Vertex2 *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Vertex2,&sipCpp))
        {
            Vector3 *sipRes;

            sipRes = &sipCpp->getVertex2();

            return sipConvertFromInstance(sipRes,sipClass_Vector3,NULL);
        }
    }

    {
        Vector3 * a0;
        Vertex2 *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_Vertex2,&sipCpp,sipClass_Vector3,&a0))
        {
            sipCpp->getVertex2(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Vertex2,sipNm_BALL_getVertex2);

    return NULL;
}


extern "C" {static PyObject *meth_Vertex2_setVertex2Address(PyObject *, PyObject *);}
static PyObject *meth_Vertex2_setVertex2Address(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const Vector3 * a0;
        Vertex2 *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_Vertex2,&sipCpp,sipClass_Vector3,&a0))
        {
            sipCpp->setVertex2Address(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Vertex2,sipNm_BALL_setVertex2Address);

    return NULL;
}


extern "C" {static PyObject *meth_Vertex2_setDefaultVertex2Address(PyObject *, PyObject *);}
static PyObject *meth_Vertex2_setDefaultVertex2Address(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Vertex2 *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Vertex2,&sipCpp))
        {
            sipCpp->setDefaultVertex2Address();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Vertex2,sipNm_BALL_setDefaultVertex2Address);

    return NULL;
}


extern "C" {static PyObject *meth_Vertex2_getVertex2Address(PyObject *, PyObject *);}
static PyObject *meth_Vertex2_getVertex2Address(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Vertex2 *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Vertex2,&sipCpp))
        {
            Vector3 *sipRes;

            sipRes = sipCpp->getVertex2Address();

            return sipConvertFromInstance(sipRes,sipClass_Vector3,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Vertex2,sipNm_BALL_getVertex2Address);

    return NULL;
}


extern "C" {static PyObject *meth_Vertex2_setVertices(PyObject *, PyObject *);}
static PyObject *meth_Vertex2_setVertices(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const Vector3 * a0;
        const Vector3 * a1;
        Vertex2 *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJAJA",&sipSelf,sipClass_Vertex2,&sipCpp,sipClass_Vector3,&a0,sipClass_Vector3,&a1))
        {
            sipCpp->setVertices(*a0,*a1);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    {
        float a0;
        float a1;
        float a2;
        float a3;
        float a4;
        float a5;
        Vertex2 *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bffffff",&sipSelf,sipClass_Vertex2,&sipCpp,&a0,&a1,&a2,&a3,&a4,&a5))
        {
            sipCpp->setVertices(a0,a1,a2,a3,a4,a5);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Vertex2,sipNm_BALL_setVertices);

    return NULL;
}


extern "C" {static PyObject *meth_Vertex2_setVertexAddresses(PyObject *, PyObject *);}
static PyObject *meth_Vertex2_setVertexAddresses(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const Vector3 * a0;
        const Vector3 * a1;
        Vertex2 *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJAJA",&sipSelf,sipClass_Vertex2,&sipCpp,sipClass_Vector3,&a0,sipClass_Vector3,&a1))
        {
            sipCpp->setVertexAddresses(*a0,*a1);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Vertex2,sipNm_BALL_setVertexAddresses);

    return NULL;
}


extern "C" {static PyObject *meth_Vertex2_getVertices(PyObject *, PyObject *);}
static PyObject *meth_Vertex2_getVertices(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Vector3 * a0;
        Vector3 * a1;
        Vertex2 *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJAJA",&sipSelf,sipClass_Vertex2,&sipCpp,sipClass_Vector3,&a0,sipClass_Vector3,&a1))
        {
            sipCpp->getVertices(*a0,*a1);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    {
        float a0;
        float a1;
        float a2;
        float a3;
        float a4;
        float a5;
        Vertex2 *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Vertex2,&sipCpp))
        {
            sipCpp->getVertices(a0,a1,a2,a3,a4,a5);

            return sipBuildResult(0,"(ffffff)",a0,a1,a2,a3,a4,a5);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Vertex2,sipNm_BALL_getVertices);

    return NULL;
}


extern "C" {static PyObject *meth_Vertex2_setDefaultVertexAddresses(PyObject *, PyObject *);}
static PyObject *meth_Vertex2_setDefaultVertexAddresses(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Vertex2 *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Vertex2,&sipCpp))
        {
            sipCpp->setDefaultVertexAddresses();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Vertex2,sipNm_BALL_setDefaultVertexAddresses);

    return NULL;
}


extern "C" {static PyObject *meth_Vertex2_isDefaultVertex1Address(PyObject *, PyObject *);}
static PyObject *meth_Vertex2_isDefaultVertex1Address(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Vertex2 *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Vertex2,&sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isDefaultVertex1Address();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Vertex2,sipNm_BALL_isDefaultVertex1Address);

    return NULL;
}


extern "C" {static PyObject *meth_Vertex2_isDefaultVertex2Address(PyObject *, PyObject *);}
static PyObject *meth_Vertex2_isDefaultVertex2Address(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Vertex2 *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Vertex2,&sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isDefaultVertex2Address();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Vertex2,sipNm_BALL_isDefaultVertex2Address);

    return NULL;
}


extern "C" {static PyObject *meth_Vertex2_isDefaultVertexAddresses(PyObject *, PyObject *);}
static PyObject *meth_Vertex2_isDefaultVertexAddresses(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Vertex2 *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Vertex2,&sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isDefaultVertexAddresses();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Vertex2,sipNm_BALL_isDefaultVertexAddresses);

    return NULL;
}


extern "C" {static PyObject *meth_Vertex2_isValid(PyObject *, PyObject *);}
static PyObject *meth_Vertex2_isValid(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Vertex2 *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Vertex2,&sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isValid();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Vertex2,sipNm_BALL_isValid);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_Vertex2(void *, sipWrapperType *);}
static void *cast_Vertex2(void *ptr,sipWrapperType *targetClass)
{
    if (targetClass == sipClass_Vertex2)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_Vertex2(void *, int);}
static void release_Vertex2(void *ptr,int)
{
    delete reinterpret_cast<Vertex2 *>(ptr);
}


extern "C" {static void dealloc_Vertex2(sipWrapper *);}
static void dealloc_Vertex2(sipWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_Vertex2(sipSelf->u.cppPtr,0);
    }
}


extern "C" {static void *init_Vertex2(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_Vertex2(sipWrapper *,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    Vertex2 *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            sipCpp = new Vertex2();
        }
    }

    if (!sipCpp)
    {
        const Vertex2 * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_Vertex2,&a0))
        {
            sipCpp = new Vertex2(*a0);
        }
    }

    return sipCpp;
}


extern "C" {static void *forceConvertTo_Vertex2(PyObject *, int *);}
static void *forceConvertTo_Vertex2(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_Vertex2))
        return sipConvertToCpp(valobj,sipClass_Vertex2,iserrp);

    sipBadClass(sipNm_BALL_Vertex2);

    *iserrp = 1;

    return NULL;
}


static PyMethodDef methods_Vertex2[] = {
    {sipNm_BALL_clear, meth_Vertex2_clear, METH_VARARGS, NULL},
    {sipNm_BALL_getVertex1, meth_Vertex2_getVertex1, METH_VARARGS, NULL},
    {sipNm_BALL_getVertex1Address, meth_Vertex2_getVertex1Address, METH_VARARGS, NULL},
    {sipNm_BALL_getVertex2, meth_Vertex2_getVertex2, METH_VARARGS, NULL},
    {sipNm_BALL_getVertex2Address, meth_Vertex2_getVertex2Address, METH_VARARGS, NULL},
    {sipNm_BALL_getVertices, meth_Vertex2_getVertices, METH_VARARGS, NULL},
    {sipNm_BALL_isDefaultVertex1Address, meth_Vertex2_isDefaultVertex1Address, METH_VARARGS, NULL},
    {sipNm_BALL_isDefaultVertex2Address, meth_Vertex2_isDefaultVertex2Address, METH_VARARGS, NULL},
    {sipNm_BALL_isDefaultVertexAddresses, meth_Vertex2_isDefaultVertexAddresses, METH_VARARGS, NULL},
    {sipNm_BALL_isValid, meth_Vertex2_isValid, METH_VARARGS, NULL},
    {sipNm_BALL_set, meth_Vertex2_set, METH_VARARGS, NULL},
    {sipNm_BALL_setDefaultVertex1Address, meth_Vertex2_setDefaultVertex1Address, METH_VARARGS, NULL},
    {sipNm_BALL_setDefaultVertex2Address, meth_Vertex2_setDefaultVertex2Address, METH_VARARGS, NULL},
    {sipNm_BALL_setDefaultVertexAddresses, meth_Vertex2_setDefaultVertexAddresses, METH_VARARGS, NULL},
    {sipNm_BALL_setVertex1, meth_Vertex2_setVertex1, METH_VARARGS, NULL},
    {sipNm_BALL_setVertex1Address, meth_Vertex2_setVertex1Address, METH_VARARGS, NULL},
    {sipNm_BALL_setVertex2, meth_Vertex2_setVertex2, METH_VARARGS, NULL},
    {sipNm_BALL_setVertex2Address, meth_Vertex2_setVertex2Address, METH_VARARGS, NULL},
    {sipNm_BALL_setVertexAddresses, meth_Vertex2_setVertexAddresses, METH_VARARGS, NULL},
    {sipNm_BALL_setVertices, meth_Vertex2_setVertices, METH_VARARGS, NULL},
    {sipNm_BALL_swap, meth_Vertex2_swap, METH_VARARGS, NULL}
};


sipTypeDef sipType_BALL_Vertex2 = {
    0,
    0,
    "BALL.Vertex2",
    0,
    {0, 0, 1},
    0,
    0,
    21, methods_Vertex2,
    0, 0,
    0,
    init_Vertex2,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_Vertex2,
    cast_Vertex2,
    release_Vertex2,
    forceConvertTo_Vertex2,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
