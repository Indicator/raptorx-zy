/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLFDPBFastAtomStruct.h"

#include "sipBALLIndex.h"



/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_FDPB_FastAtomStruct(void *, sipWrapperType *);}
static void *cast_FDPB_FastAtomStruct(void *ptr,sipWrapperType *targetClass)
{
    if (targetClass == sipClass_FDPB_FastAtomStruct)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_FDPB_FastAtomStruct(void *, int);}
static void release_FDPB_FastAtomStruct(void *ptr,int)
{
    delete reinterpret_cast<FDPB::FastAtomStruct *>(ptr);
}


extern "C" {static void dealloc_FDPB_FastAtomStruct(sipWrapper *);}
static void dealloc_FDPB_FastAtomStruct(sipWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_FDPB_FastAtomStruct(sipSelf->u.cppPtr,0);
    }
}


extern "C" {static void *init_FDPB_FastAtomStruct(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_FDPB_FastAtomStruct(sipWrapper *,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    FDPB::FastAtomStruct *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            try
            {
            sipCpp = new FDPB::FastAtomStruct();
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
        const FDPB::FastAtomStruct * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_FDPB_FastAtomStruct,&a0))
        {
            try
            {
            sipCpp = new FDPB::FastAtomStruct(*a0);
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


extern "C" {static PyObject *var_FDPB_FastAtomStruct_index(PyObject *, PyObject *);}
static PyObject *var_FDPB_FastAtomStruct_index(PyObject *sipSelf,PyObject *sipPy)
{
    int sipIsErr = 0;
    int sipValState;
   Index *sipVal;
    FDPB::FastAtomStruct *sipCpp = reinterpret_cast<FDPB::FastAtomStruct *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_FDPB_FastAtomStruct));

    if (!sipCpp)
        return NULL;

    if (sipPy == NULL)
    {
        sipVal = &sipCpp->index;

        sipPy = sipConvertFromMappedType(sipVal,sipMappedType_Index,NULL);

        return sipPy;
    }

    sipVal = reinterpret_cast<Index *>(sipForceConvertToMappedType(sipPy,sipMappedType_Index,NULL,SIP_NOT_NONE,&sipValState,&sipIsErr));

    if (sipIsErr)
        return NULL;

    sipCpp->index = *sipVal;

    sipReleaseMappedType(sipVal,sipMappedType_Index,sipValState);

    Py_INCREF(Py_None);
    return Py_None;
}


extern "C" {static PyObject *var_FDPB_FastAtomStruct_z(PyObject *, PyObject *);}
static PyObject *var_FDPB_FastAtomStruct_z(PyObject *sipSelf,PyObject *sipPy)
{
   float sipVal;
    FDPB::FastAtomStruct *sipCpp = reinterpret_cast<FDPB::FastAtomStruct *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_FDPB_FastAtomStruct));

    if (!sipCpp)
        return NULL;

    if (sipPy == NULL)
    {
        sipVal = sipCpp->z;

        sipPy = PyFloat_FromDouble((double)sipVal);

        return sipPy;
    }

	sipVal = (float)PyFloat_AsDouble(sipPy);

    if (PyErr_Occurred() != NULL)
    {
        sipBadSetType(sipNm_BALL_FastAtomStruct,sipNm_BALL_z);
        return NULL;
    }

    sipCpp->z = sipVal;

    Py_INCREF(Py_None);
    return Py_None;
}


extern "C" {static PyObject *var_FDPB_FastAtomStruct_y(PyObject *, PyObject *);}
static PyObject *var_FDPB_FastAtomStruct_y(PyObject *sipSelf,PyObject *sipPy)
{
   float sipVal;
    FDPB::FastAtomStruct *sipCpp = reinterpret_cast<FDPB::FastAtomStruct *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_FDPB_FastAtomStruct));

    if (!sipCpp)
        return NULL;

    if (sipPy == NULL)
    {
        sipVal = sipCpp->y;

        sipPy = PyFloat_FromDouble((double)sipVal);

        return sipPy;
    }

	sipVal = (float)PyFloat_AsDouble(sipPy);

    if (PyErr_Occurred() != NULL)
    {
        sipBadSetType(sipNm_BALL_FastAtomStruct,sipNm_BALL_y);
        return NULL;
    }

    sipCpp->y = sipVal;

    Py_INCREF(Py_None);
    return Py_None;
}


extern "C" {static PyObject *var_FDPB_FastAtomStruct_x(PyObject *, PyObject *);}
static PyObject *var_FDPB_FastAtomStruct_x(PyObject *sipSelf,PyObject *sipPy)
{
   float sipVal;
    FDPB::FastAtomStruct *sipCpp = reinterpret_cast<FDPB::FastAtomStruct *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_FDPB_FastAtomStruct));

    if (!sipCpp)
        return NULL;

    if (sipPy == NULL)
    {
        sipVal = sipCpp->x;

        sipPy = PyFloat_FromDouble((double)sipVal);

        return sipPy;
    }

	sipVal = (float)PyFloat_AsDouble(sipPy);

    if (PyErr_Occurred() != NULL)
    {
        sipBadSetType(sipNm_BALL_FastAtomStruct,sipNm_BALL_x);
        return NULL;
    }

    sipCpp->x = sipVal;

    Py_INCREF(Py_None);
    return Py_None;
}


extern "C" {static PyObject *var_FDPB_FastAtomStruct_r(PyObject *, PyObject *);}
static PyObject *var_FDPB_FastAtomStruct_r(PyObject *sipSelf,PyObject *sipPy)
{
   float sipVal;
    FDPB::FastAtomStruct *sipCpp = reinterpret_cast<FDPB::FastAtomStruct *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_FDPB_FastAtomStruct));

    if (!sipCpp)
        return NULL;

    if (sipPy == NULL)
    {
        sipVal = sipCpp->r;

        sipPy = PyFloat_FromDouble((double)sipVal);

        return sipPy;
    }

	sipVal = (float)PyFloat_AsDouble(sipPy);

    if (PyErr_Occurred() != NULL)
    {
        sipBadSetType(sipNm_BALL_FastAtomStruct,sipNm_BALL_r);
        return NULL;
    }

    sipCpp->r = sipVal;

    Py_INCREF(Py_None);
    return Py_None;
}


extern "C" {static PyObject *var_FDPB_FastAtomStruct_q(PyObject *, PyObject *);}
static PyObject *var_FDPB_FastAtomStruct_q(PyObject *sipSelf,PyObject *sipPy)
{
   float sipVal;
    FDPB::FastAtomStruct *sipCpp = reinterpret_cast<FDPB::FastAtomStruct *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_FDPB_FastAtomStruct));

    if (!sipCpp)
        return NULL;

    if (sipPy == NULL)
    {
        sipVal = sipCpp->q;

        sipPy = PyFloat_FromDouble((double)sipVal);

        return sipPy;
    }

	sipVal = (float)PyFloat_AsDouble(sipPy);

    if (PyErr_Occurred() != NULL)
    {
        sipBadSetType(sipNm_BALL_FastAtomStruct,sipNm_BALL_q);
        return NULL;
    }

    sipCpp->q = sipVal;

    Py_INCREF(Py_None);
    return Py_None;
}

PyMethodDef variables_FDPB_FastAtomStruct[] = {
    {sipNm_BALL_index, var_FDPB_FastAtomStruct_index, 0, NULL},
    {sipNm_BALL_z, var_FDPB_FastAtomStruct_z, 0, NULL},
    {sipNm_BALL_y, var_FDPB_FastAtomStruct_y, 0, NULL},
    {sipNm_BALL_x, var_FDPB_FastAtomStruct_x, 0, NULL},
    {sipNm_BALL_r, var_FDPB_FastAtomStruct_r, 0, NULL},
    {sipNm_BALL_q, var_FDPB_FastAtomStruct_q, 0, NULL},
    {0, 0, 0, 0}
};


extern "C" {static void *forceConvertTo_FDPB_FastAtomStruct(PyObject *, int *);}
static void *forceConvertTo_FDPB_FastAtomStruct(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_FDPB_FastAtomStruct))
        return sipConvertToCpp(valobj,sipClass_FDPB_FastAtomStruct,iserrp);

    sipBadClass(sipNm_BALL_FastAtomStruct);

    *iserrp = 1;

    return NULL;
}


sipTypeDef sipType_BALL_FDPB_FastAtomStruct = {
    0,
    0,
    "BALL.FDPB.FastAtomStruct",
    0,
    {77, 255, 0},
    0,
    0,
    0, 0,
    0, 0,
    variables_FDPB_FastAtomStruct,
    init_FDPB_FastAtomStruct,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_FDPB_FastAtomStruct,
    cast_FDPB_FastAtomStruct,
    release_FDPB_FastAtomStruct,
    forceConvertTo_FDPB_FastAtomStruct,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
