/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLTransformationProcessor.h"

#include "sipBALLAtomProcessor.h"
#include "sipBALLMatrix4x4.h"
#include "sipBALLTransformationProcessor.h"
#include "sipBALLProcessor.h"
#include "sipBALLAtom.h"



extern "C" {static PyObject *meth_TransformationProcessor_setTransformation(PyObject *, PyObject *);}
static PyObject *meth_TransformationProcessor_setTransformation(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const Matrix4x4 * a0;
        TransformationProcessor *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_TransformationProcessor,&sipCpp,sipClass_Matrix4x4,&a0))
        {
            try
            {
            sipCpp->setTransformation(*a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_TransformationProcessor,sipNm_BALL_setTransformation);

    return NULL;
}


extern "C" {static PyObject *meth_TransformationProcessor_getTransformation(PyObject *, PyObject *);}
static PyObject *meth_TransformationProcessor_getTransformation(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        TransformationProcessor *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_TransformationProcessor,&sipCpp))
        {
            const Matrix4x4 *sipRes;

            try
            {
            sipRes = &sipCpp->getTransformation();
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return sipConvertFromInstance(const_cast<Matrix4x4 *>(sipRes),sipClass_Matrix4x4,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_TransformationProcessor,sipNm_BALL_getTransformation);

    return NULL;
}


extern "C" {static PyObject *slot_TransformationProcessor___call__(PyObject *sipSelf,PyObject *sipArgs);}
static PyObject *slot_TransformationProcessor___call__(PyObject *sipSelf,PyObject *sipArgs)
{
    TransformationProcessor *sipCpp = reinterpret_cast<TransformationProcessor *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_TransformationProcessor));

    if (!sipCpp)
        return 0;

    int sipArgsParsed = 0;

    {
        Atom * a0;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"JA",sipClass_Atom,&a0))
        {
            Processor::Result sipRes = (Processor::Result)0;

#line 45 "geometricTransformations.sip"
  sipRes = sipCpp->operator () (*a0);
#line 107 "sipBALLTransformationProcessor.C"

            return sipConvertFromNamedEnum(sipRes,sipEnum_Processor_Result);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_TransformationProcessor,sipNm_BALL___call__);

    return 0;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_TransformationProcessor(void *, sipWrapperType *);}
static void *cast_TransformationProcessor(void *ptr,sipWrapperType *targetClass)
{
    void *res;

    if (targetClass == sipClass_TransformationProcessor)
        return ptr;

    if ((res = sipCast_AtomProcessor((AtomProcessor *)(TransformationProcessor *)ptr,targetClass)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_TransformationProcessor(void *, int);}
static void release_TransformationProcessor(void *ptr,int)
{
    delete reinterpret_cast<TransformationProcessor *>(ptr);
}


extern "C" {static void dealloc_TransformationProcessor(sipWrapper *);}
static void dealloc_TransformationProcessor(sipWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_TransformationProcessor(sipSelf->u.cppPtr,0);
    }
}


extern "C" {static void *init_TransformationProcessor(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_TransformationProcessor(sipWrapper *,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    TransformationProcessor *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            try
            {
            sipCpp = new TransformationProcessor();
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
        const Matrix4x4 * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_Matrix4x4,&a0))
        {
            try
            {
            sipCpp = new TransformationProcessor(*a0);
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
        const TransformationProcessor * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_TransformationProcessor,&a0))
        {
            try
            {
            sipCpp = new TransformationProcessor(*a0);
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


extern "C" {static void *forceConvertTo_TransformationProcessor(PyObject *, int *);}
static void *forceConvertTo_TransformationProcessor(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_TransformationProcessor))
        return sipConvertToCpp(valobj,sipClass_TransformationProcessor,iserrp);

    sipBadClass(sipNm_BALL_TransformationProcessor);

    *iserrp = 1;

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedClassDef supers_TransformationProcessor[] = {{107, 255, 1}};


/* Define this type's Python slots. */
static sipPySlotDef slots_TransformationProcessor[] = {
    {(void *)slot_TransformationProcessor___call__, call_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_TransformationProcessor[] = {
    {sipNm_BALL_getTransformation, meth_TransformationProcessor_getTransformation, METH_VARARGS, NULL},
    {sipNm_BALL_setTransformation, meth_TransformationProcessor_setTransformation, METH_VARARGS, NULL}
};


sipTypeDef sipType_BALL_TransformationProcessor = {
    0,
    0,
    "BALL.TransformationProcessor",
    0,
    {0, 0, 1},
    supers_TransformationProcessor,
    slots_TransformationProcessor,
    2, methods_TransformationProcessor,
    0, 0,
    0,
    init_TransformationProcessor,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_TransformationProcessor,
    cast_TransformationProcessor,
    release_TransformationProcessor,
    forceConvertTo_TransformationProcessor,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
