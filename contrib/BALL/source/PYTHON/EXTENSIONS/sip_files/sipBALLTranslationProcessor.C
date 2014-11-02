/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLTranslationProcessor.h"

#include "sipBALLAtomProcessor.h"
#include "sipBALLVector3.h"
#include "sipBALLTranslationProcessor.h"
#include "sipBALLProcessor.h"
#include "sipBALLAtom.h"



extern "C" {static PyObject *meth_TranslationProcessor_setTranslation(PyObject *, PyObject *);}
static PyObject *meth_TranslationProcessor_setTranslation(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const Vector3 * a0;
        TranslationProcessor *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_TranslationProcessor,&sipCpp,sipClass_Vector3,&a0))
        {
            try
            {
            sipCpp->setTranslation(*a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_TranslationProcessor,sipNm_BALL_setTranslation);

    return NULL;
}


extern "C" {static PyObject *meth_TranslationProcessor_getTranslation(PyObject *, PyObject *);}
static PyObject *meth_TranslationProcessor_getTranslation(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        TranslationProcessor *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_TranslationProcessor,&sipCpp))
        {
            const Vector3 *sipRes;

            try
            {
            sipRes = &sipCpp->getTranslation();
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return sipConvertFromInstance(const_cast<Vector3 *>(sipRes),sipClass_Vector3,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_TranslationProcessor,sipNm_BALL_getTranslation);

    return NULL;
}


extern "C" {static PyObject *slot_TranslationProcessor___call__(PyObject *sipSelf,PyObject *sipArgs);}
static PyObject *slot_TranslationProcessor___call__(PyObject *sipSelf,PyObject *sipArgs)
{
    TranslationProcessor *sipCpp = reinterpret_cast<TranslationProcessor *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_TranslationProcessor));

    if (!sipCpp)
        return 0;

    int sipArgsParsed = 0;

    {
        Atom * a0;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"JA",sipClass_Atom,&a0))
        {
            Processor::Result sipRes = (Processor::Result)0;

#line 24 "geometricTransformations.sip"
  sipRes = sipCpp->operator () (*a0);
#line 107 "sipBALLTranslationProcessor.C"

            return sipConvertFromNamedEnum(sipRes,sipEnum_Processor_Result);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_TranslationProcessor,sipNm_BALL___call__);

    return 0;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_TranslationProcessor(void *, sipWrapperType *);}
static void *cast_TranslationProcessor(void *ptr,sipWrapperType *targetClass)
{
    void *res;

    if (targetClass == sipClass_TranslationProcessor)
        return ptr;

    if ((res = sipCast_AtomProcessor((AtomProcessor *)(TranslationProcessor *)ptr,targetClass)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_TranslationProcessor(void *, int);}
static void release_TranslationProcessor(void *ptr,int)
{
    delete reinterpret_cast<TranslationProcessor *>(ptr);
}


extern "C" {static void dealloc_TranslationProcessor(sipWrapper *);}
static void dealloc_TranslationProcessor(sipWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_TranslationProcessor(sipSelf->u.cppPtr,0);
    }
}


extern "C" {static void *init_TranslationProcessor(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_TranslationProcessor(sipWrapper *,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    TranslationProcessor *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            try
            {
            sipCpp = new TranslationProcessor();
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
        const Vector3 * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_Vector3,&a0))
        {
            try
            {
            sipCpp = new TranslationProcessor(*a0);
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
        const TranslationProcessor * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_TranslationProcessor,&a0))
        {
            try
            {
            sipCpp = new TranslationProcessor(*a0);
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


extern "C" {static void *forceConvertTo_TranslationProcessor(PyObject *, int *);}
static void *forceConvertTo_TranslationProcessor(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_TranslationProcessor))
        return sipConvertToCpp(valobj,sipClass_TranslationProcessor,iserrp);

    sipBadClass(sipNm_BALL_TranslationProcessor);

    *iserrp = 1;

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedClassDef supers_TranslationProcessor[] = {{107, 255, 1}};


/* Define this type's Python slots. */
static sipPySlotDef slots_TranslationProcessor[] = {
    {(void *)slot_TranslationProcessor___call__, call_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_TranslationProcessor[] = {
    {sipNm_BALL_getTranslation, meth_TranslationProcessor_getTranslation, METH_VARARGS, NULL},
    {sipNm_BALL_setTranslation, meth_TranslationProcessor_setTranslation, METH_VARARGS, NULL}
};


sipTypeDef sipType_BALL_TranslationProcessor = {
    0,
    0,
    "BALL.TranslationProcessor",
    0,
    {0, 0, 1},
    supers_TranslationProcessor,
    slots_TranslationProcessor,
    2, methods_TranslationProcessor,
    0, 0,
    0,
    init_TranslationProcessor,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_TranslationProcessor,
    cast_TranslationProcessor,
    release_TranslationProcessor,
    forceConvertTo_TranslationProcessor,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
