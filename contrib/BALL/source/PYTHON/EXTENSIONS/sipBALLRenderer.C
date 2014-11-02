/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLRenderer.h"

#include "sipBALLRenderer.h"
#include "sipBALLRepresentation.h"
#include "sipBALLStage.h"



extern "C" {static PyObject *meth_Renderer_hasStage(PyObject *, PyObject *);}
static PyObject *meth_Renderer_hasStage(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Renderer *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Renderer,&sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->hasStage();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Renderer,sipNm_BALL_hasStage);

    return NULL;
}


extern "C" {static PyObject *meth_Renderer_getStage(PyObject *, PyObject *);}
static PyObject *meth_Renderer_getStage(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Renderer *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Renderer,&sipCpp))
        {
            const Stage *sipRes;

            sipRes = &sipCpp->getStage();

            return sipConvertFromInstance(const_cast<Stage *>(sipRes),sipClass_Stage,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Renderer,sipNm_BALL_getStage);

    return NULL;
}


extern "C" {static PyObject *meth_Renderer_getHeight(PyObject *, PyObject *);}
static PyObject *meth_Renderer_getHeight(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Renderer *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Renderer,&sipCpp))
        {
            float sipRes;

            sipRes = sipCpp->getHeight();

            return PyFloat_FromDouble((double)sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Renderer,sipNm_BALL_getHeight);

    return NULL;
}


extern "C" {static PyObject *meth_Renderer_getWidth(PyObject *, PyObject *);}
static PyObject *meth_Renderer_getWidth(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Renderer *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Renderer,&sipCpp))
        {
            float sipRes;

            sipRes = sipCpp->getWidth();

            return PyFloat_FromDouble((double)sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Renderer,sipNm_BALL_getWidth);

    return NULL;
}


extern "C" {static PyObject *meth_Renderer_clear(PyObject *, PyObject *);}
static PyObject *meth_Renderer_clear(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Renderer *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Renderer,&sipCpp))
        {
            sipCpp->clear();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Renderer,sipNm_BALL_clear);

    return NULL;
}


extern "C" {static PyObject *meth_Renderer_setSize(PyObject *, PyObject *);}
static PyObject *meth_Renderer_setSize(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        float a0;
        float a1;
        Renderer *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bff",&sipSelf,sipClass_Renderer,&sipCpp,&a0,&a1))
        {
            sipCpp->setSize(a0,a1);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Renderer,sipNm_BALL_setSize);

    return NULL;
}


extern "C" {static PyObject *meth_Renderer_setStage(PyObject *, PyObject *);}
static PyObject *meth_Renderer_setStage(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const Stage * a0;
        Renderer *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_Renderer,&sipCpp,sipClass_Stage,&a0))
        {
            sipCpp->setStage(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Renderer,sipNm_BALL_setStage);

    return NULL;
}


extern "C" {static PyObject *meth_Renderer_render(PyObject *, PyObject *);}
static PyObject *meth_Renderer_render(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const Representation * a0;
        Renderer *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_Renderer,&sipCpp,sipClass_Representation,&a0))
        {
            bool sipRes;

            sipRes = sipCpp->render(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Renderer,sipNm_BALL_render);

    return NULL;
}


extern "C" {static PyObject *slot_Renderer___eq__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_Renderer___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    Renderer *sipCpp = reinterpret_cast<Renderer *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_Renderer));

    if (!sipCpp)
        return 0;

    int sipArgsParsed = 0;

    {
        const Renderer * a0;

        if (sipParseArgs(&sipArgsParsed,sipArg,"JA",sipClass_Renderer,&a0))
        {
            bool sipRes;

            sipRes = ((*sipCpp) == *a0);

            return PyBool_FromLong(sipRes);
        }
    }

    return sipPySlotExtend(&sipModuleAPI_BALL,eq_slot,sipClass_Renderer,sipSelf,sipArg);
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_Renderer(void *, sipWrapperType *);}
static void *cast_Renderer(void *ptr,sipWrapperType *targetClass)
{
    if (targetClass == sipClass_Renderer)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_Renderer(void *, int);}
static void release_Renderer(void *ptr,int)
{
    delete reinterpret_cast<Renderer *>(ptr);
}


extern "C" {static void dealloc_Renderer(sipWrapper *);}
static void dealloc_Renderer(sipWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_Renderer(sipSelf->u.cppPtr,0);
    }
}


extern "C" {static void *init_Renderer(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_Renderer(sipWrapper *,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    Renderer *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            sipCpp = new Renderer();
        }
    }

    if (!sipCpp)
    {
        const Renderer * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_Renderer,&a0))
        {
            sipCpp = new Renderer(*a0);
        }
    }

    return sipCpp;
}


extern "C" {static void *forceConvertTo_Renderer(PyObject *, int *);}
static void *forceConvertTo_Renderer(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_Renderer))
        return sipConvertToCpp(valobj,sipClass_Renderer,iserrp);

    sipBadClass(sipNm_BALL_Renderer);

    *iserrp = 1;

    return NULL;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_Renderer[] = {
    {(void *)slot_Renderer___eq__, eq_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_Renderer[] = {
    {sipNm_BALL_clear, meth_Renderer_clear, METH_VARARGS, NULL},
    {sipNm_BALL_getHeight, meth_Renderer_getHeight, METH_VARARGS, NULL},
    {sipNm_BALL_getStage, meth_Renderer_getStage, METH_VARARGS, NULL},
    {sipNm_BALL_getWidth, meth_Renderer_getWidth, METH_VARARGS, NULL},
    {sipNm_BALL_hasStage, meth_Renderer_hasStage, METH_VARARGS, NULL},
    {sipNm_BALL_render, meth_Renderer_render, METH_VARARGS, NULL},
    {sipNm_BALL_setSize, meth_Renderer_setSize, METH_VARARGS, NULL},
    {sipNm_BALL_setStage, meth_Renderer_setStage, METH_VARARGS, NULL}
};


sipTypeDef sipType_BALL_Renderer = {
    0,
    0,
    "BALL.Renderer",
    0,
    {0, 0, 1},
    0,
    slots_Renderer,
    8, methods_Renderer,
    0, 0,
    0,
    init_Renderer,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_Renderer,
    cast_Renderer,
    release_Renderer,
    forceConvertTo_Renderer,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
