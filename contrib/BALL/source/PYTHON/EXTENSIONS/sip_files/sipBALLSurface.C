/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLSurface.h"

#include "sipBALLSurface.h"
#include "sipBALLVector3.h"
#include "sipBALLSurfaceTriangle.h"
#include "sipBALLPosition.h"
#include "sipBALLString.h"



extern "C" {static PyObject *meth_Surface_clear(PyObject *, PyObject *);}
static PyObject *meth_Surface_clear(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Surface *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Surface,&sipCpp))
        {
            try
            {
            sipCpp->clear();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Surface,sipNm_BALL_clear);

    return NULL;
}


extern "C" {static PyObject *meth_Surface_set(PyObject *, PyObject *);}
static PyObject *meth_Surface_set(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const Surface * a0;
        Surface *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_Surface,&sipCpp,sipClass_Surface,&a0))
        {
            try
            {
            sipCpp->set(*a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Surface,sipNm_BALL_set);

    return NULL;
}


extern "C" {static PyObject *meth_Surface_get(PyObject *, PyObject *);}
static PyObject *meth_Surface_get(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Surface * a0;
        Surface *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_Surface,&sipCpp,sipClass_Surface,&a0))
        {
            try
            {
            sipCpp->get(*a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Surface,sipNm_BALL_get);

    return NULL;
}


extern "C" {static PyObject *meth_Surface_readMSMSFile(PyObject *, PyObject *);}
static PyObject *meth_Surface_readMSMSFile(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const String * a0;
        int a0State = 0;
        const String * a1;
        int a1State = 0;
        Surface *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ1J1",&sipSelf,sipClass_Surface,&sipCpp,sipClass_String,&a0,&a0State,sipClass_String,&a1,&a1State))
        {
            try
            {
            sipCpp->readMSMSFile(*a0,*a1);
            }
            catch (...)
            {

            sipReleaseInstance(const_cast<String *>(a0),sipClass_String,a0State);
            sipReleaseInstance(const_cast<String *>(a1),sipClass_String,a1State);
                sipRaiseUnknownException();
                return NULL;
            }

            sipReleaseInstance(const_cast<String *>(a0),sipClass_String,a0State);
            sipReleaseInstance(const_cast<String *>(a1),sipClass_String,a1State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Surface,sipNm_BALL_readMSMSFile);

    return NULL;
}


extern "C" {static PyObject *meth_Surface_getArea(PyObject *, PyObject *);}
static PyObject *meth_Surface_getArea(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Surface *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Surface,&sipCpp))
        {
            float sipRes;

            try
            {
            sipRes = sipCpp->getArea();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Surface,sipNm_BALL_getArea);

    return NULL;
}


extern "C" {static PyObject *meth_Surface_getNumberOfTriangles(PyObject *, PyObject *);}
static PyObject *meth_Surface_getNumberOfTriangles(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Surface *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Surface,&sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->getNumberOfTriangles();

            return PyInt_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Surface,sipNm_BALL_getNumberOfTriangles);

    return NULL;
}


extern "C" {static PyObject *meth_Surface_getNumberOfVertices(PyObject *, PyObject *);}
static PyObject *meth_Surface_getNumberOfVertices(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Surface *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Surface,&sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->getNumberOfVertices();

            return PyInt_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Surface,sipNm_BALL_getNumberOfVertices);

    return NULL;
}


extern "C" {static PyObject *meth_Surface_getNumberOfNormals(PyObject *, PyObject *);}
static PyObject *meth_Surface_getNumberOfNormals(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Surface *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Surface,&sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->getNumberOfNormals();

            return PyInt_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Surface,sipNm_BALL_getNumberOfNormals);

    return NULL;
}


extern "C" {static PyObject *meth_Surface_getTriangle(PyObject *, PyObject *);}
static PyObject *meth_Surface_getTriangle(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Position * a0;
        int a0State = 0;
        Surface *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BM1",&sipSelf,sipClass_Surface,&sipCpp,sipMappedType_Position,&a0,&a0State))
        {
            Surface::Triangle *sipRes;

            sipRes = &sipCpp->getTriangle(*a0);

            sipReleaseMappedType(a0,sipMappedType_Position,a0State);

            return sipConvertFromInstance(sipRes,sipClass_Surface_Triangle,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Surface,sipNm_BALL_getTriangle);

    return NULL;
}


extern "C" {static PyObject *meth_Surface_getVertex(PyObject *, PyObject *);}
static PyObject *meth_Surface_getVertex(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Position * a0;
        int a0State = 0;
        Surface *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BM1",&sipSelf,sipClass_Surface,&sipCpp,sipMappedType_Position,&a0,&a0State))
        {
            Vector3 *sipRes;

            sipRes = &sipCpp->getVertex(*a0);

            sipReleaseMappedType(a0,sipMappedType_Position,a0State);

            return sipConvertFromInstance(sipRes,sipClass_Vector3,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Surface,sipNm_BALL_getVertex);

    return NULL;
}


extern "C" {static PyObject *meth_Surface_getNormal(PyObject *, PyObject *);}
static PyObject *meth_Surface_getNormal(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Position * a0;
        int a0State = 0;
        Surface *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BM1",&sipSelf,sipClass_Surface,&sipCpp,sipMappedType_Position,&a0,&a0State))
        {
            Vector3 *sipRes;

            sipRes = &sipCpp->getNormal(*a0);

            sipReleaseMappedType(a0,sipMappedType_Position,a0State);

            return sipConvertFromInstance(sipRes,sipClass_Vector3,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Surface,sipNm_BALL_getNormal);

    return NULL;
}


extern "C" {static PyObject *meth_Surface_clearVertices(PyObject *, PyObject *);}
static PyObject *meth_Surface_clearVertices(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Surface *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Surface,&sipCpp))
        {
            try
            {
            sipCpp->clearVertices();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Surface,sipNm_BALL_clearVertices);

    return NULL;
}


extern "C" {static PyObject *meth_Surface_clearTriangles(PyObject *, PyObject *);}
static PyObject *meth_Surface_clearTriangles(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Surface *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Surface,&sipCpp))
        {
            try
            {
            sipCpp->clearTriangles();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Surface,sipNm_BALL_clearTriangles);

    return NULL;
}


extern "C" {static PyObject *meth_Surface_clearNormals(PyObject *, PyObject *);}
static PyObject *meth_Surface_clearNormals(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Surface *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Surface,&sipCpp))
        {
            try
            {
            sipCpp->clearNormals();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Surface,sipNm_BALL_clearNormals);

    return NULL;
}


extern "C" {static PyObject *meth_Surface_pushBackTriangle(PyObject *, PyObject *);}
static PyObject *meth_Surface_pushBackTriangle(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const Surface::Triangle * a0;
        Surface *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_Surface,&sipCpp,sipClass_Surface_Triangle,&a0))
        {
            sipCpp->pushBackTriangle(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Surface,sipNm_BALL_pushBackTriangle);

    return NULL;
}


extern "C" {static PyObject *meth_Surface_pushBackVertex(PyObject *, PyObject *);}
static PyObject *meth_Surface_pushBackVertex(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const Vector3 * a0;
        Surface *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_Surface,&sipCpp,sipClass_Vector3,&a0))
        {
            sipCpp->pushBackVertex(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Surface,sipNm_BALL_pushBackVertex);

    return NULL;
}


extern "C" {static PyObject *meth_Surface_pushBackNormal(PyObject *, PyObject *);}
static PyObject *meth_Surface_pushBackNormal(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const Vector3 * a0;
        Surface *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_Surface,&sipCpp,sipClass_Vector3,&a0))
        {
            sipCpp->pushBackNormal(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Surface,sipNm_BALL_pushBackNormal);

    return NULL;
}


extern "C" {static PyObject *meth_Surface_resizeTriangles(PyObject *, PyObject *);}
static PyObject *meth_Surface_resizeTriangles(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        int a0;
        Surface *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bi",&sipSelf,sipClass_Surface,&sipCpp,&a0))
        {
            try
            {
            sipCpp->resizeTriangles(a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Surface,sipNm_BALL_resizeTriangles);

    return NULL;
}


extern "C" {static PyObject *meth_Surface_resizeNormals(PyObject *, PyObject *);}
static PyObject *meth_Surface_resizeNormals(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        int a0;
        Surface *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bi",&sipSelf,sipClass_Surface,&sipCpp,&a0))
        {
            try
            {
            sipCpp->resizeNormals(a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Surface,sipNm_BALL_resizeNormals);

    return NULL;
}


extern "C" {static PyObject *meth_Surface_resizeVertices(PyObject *, PyObject *);}
static PyObject *meth_Surface_resizeVertices(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        int a0;
        Surface *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bi",&sipSelf,sipClass_Surface,&sipCpp,&a0))
        {
            try
            {
            sipCpp->resizeVertices(a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Surface,sipNm_BALL_resizeVertices);

    return NULL;
}


extern "C" {static PyObject *slot_Surface___ne__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_Surface___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    Surface *sipCpp = reinterpret_cast<Surface *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_Surface));

    if (!sipCpp)
        return 0;

    int sipArgsParsed = 0;

    {
        const Surface * a0;

        if (sipParseArgs(&sipArgsParsed,sipArg,"JA",sipClass_Surface,&a0))
        {
            bool sipRes;

            try
            {
            sipRes = ((*sipCpp) != *a0);
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return PyBool_FromLong(sipRes);
        }
    }

    return sipPySlotExtend(&sipModuleAPI_BALL,ne_slot,sipClass_Surface,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_Surface___eq__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_Surface___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    Surface *sipCpp = reinterpret_cast<Surface *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_Surface));

    if (!sipCpp)
        return 0;

    int sipArgsParsed = 0;

    {
        const Surface * a0;

        if (sipParseArgs(&sipArgsParsed,sipArg,"JA",sipClass_Surface,&a0))
        {
            bool sipRes;

            try
            {
            sipRes = ((*sipCpp) == *a0);
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return PyBool_FromLong(sipRes);
        }
    }

    return sipPySlotExtend(&sipModuleAPI_BALL,eq_slot,sipClass_Surface,sipSelf,sipArg);
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_Surface(void *, sipWrapperType *);}
static void *cast_Surface(void *ptr,sipWrapperType *targetClass)
{
    if (targetClass == sipClass_Surface)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_Surface(void *, int);}
static void release_Surface(void *ptr,int)
{
    delete reinterpret_cast<Surface *>(ptr);
}


extern "C" {static void dealloc_Surface(sipWrapper *);}
static void dealloc_Surface(sipWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_Surface(sipSelf->u.cppPtr,0);
    }
}


extern "C" {static void *init_Surface(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_Surface(sipWrapper *,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    Surface *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            try
            {
            sipCpp = new Surface();
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
        const Surface * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_Surface,&a0))
        {
            try
            {
            sipCpp = new Surface(*a0);
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


extern "C" {static void *forceConvertTo_Surface(PyObject *, int *);}
static void *forceConvertTo_Surface(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_Surface))
        return sipConvertToCpp(valobj,sipClass_Surface,iserrp);

    sipBadClass(sipNm_BALL_Surface);

    *iserrp = 1;

    return NULL;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_Surface[] = {
    {(void *)slot_Surface___ne__, ne_slot},
    {(void *)slot_Surface___eq__, eq_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_Surface[] = {
    {sipNm_BALL_clear, meth_Surface_clear, METH_VARARGS, NULL},
    {sipNm_BALL_clearNormals, meth_Surface_clearNormals, METH_VARARGS, NULL},
    {sipNm_BALL_clearTriangles, meth_Surface_clearTriangles, METH_VARARGS, NULL},
    {sipNm_BALL_clearVertices, meth_Surface_clearVertices, METH_VARARGS, NULL},
    {sipNm_BALL_get, meth_Surface_get, METH_VARARGS, NULL},
    {sipNm_BALL_getArea, meth_Surface_getArea, METH_VARARGS, NULL},
    {sipNm_BALL_getNormal, meth_Surface_getNormal, METH_VARARGS, NULL},
    {sipNm_BALL_getNumberOfNormals, meth_Surface_getNumberOfNormals, METH_VARARGS, NULL},
    {sipNm_BALL_getNumberOfTriangles, meth_Surface_getNumberOfTriangles, METH_VARARGS, NULL},
    {sipNm_BALL_getNumberOfVertices, meth_Surface_getNumberOfVertices, METH_VARARGS, NULL},
    {sipNm_BALL_getTriangle, meth_Surface_getTriangle, METH_VARARGS, NULL},
    {sipNm_BALL_getVertex, meth_Surface_getVertex, METH_VARARGS, NULL},
    {sipNm_BALL_pushBackNormal, meth_Surface_pushBackNormal, METH_VARARGS, NULL},
    {sipNm_BALL_pushBackTriangle, meth_Surface_pushBackTriangle, METH_VARARGS, NULL},
    {sipNm_BALL_pushBackVertex, meth_Surface_pushBackVertex, METH_VARARGS, NULL},
    {sipNm_BALL_readMSMSFile, meth_Surface_readMSMSFile, METH_VARARGS, NULL},
    {sipNm_BALL_resizeNormals, meth_Surface_resizeNormals, METH_VARARGS, NULL},
    {sipNm_BALL_resizeTriangles, meth_Surface_resizeTriangles, METH_VARARGS, NULL},
    {sipNm_BALL_resizeVertices, meth_Surface_resizeVertices, METH_VARARGS, NULL},
    {sipNm_BALL_set, meth_Surface_set, METH_VARARGS, NULL}
};


sipTypeDef sipType_BALL_Surface = {
    0,
    0,
    "BALL.Surface",
    0,
    {0, 0, 1},
    0,
    slots_Surface,
    20, methods_Surface,
    0, 0,
    0,
    init_Surface,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_Surface,
    cast_Surface,
    release_Surface,
    forceConvertTo_Surface,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
