/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLRegularData2DIndexType.h"

#include "sipBALLPosition.h"



/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_RegularData2D_IndexType(void *, sipWrapperType *);}
static void *cast_RegularData2D_IndexType(void *ptr,sipWrapperType *targetClass)
{
    if (targetClass == sipClass_RegularData2D_IndexType)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_RegularData2D_IndexType(void *, int);}
static void release_RegularData2D_IndexType(void *ptr,int)
{
    delete reinterpret_cast<RegularData2D::IndexType *>(ptr);
}


extern "C" {static void dealloc_RegularData2D_IndexType(sipWrapper *);}
static void dealloc_RegularData2D_IndexType(sipWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_RegularData2D_IndexType(sipSelf->u.cppPtr,0);
    }
}


extern "C" {static void *init_RegularData2D_IndexType(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_RegularData2D_IndexType(sipWrapper *,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    RegularData2D::IndexType *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            try
            {
            sipCpp = new RegularData2D::IndexType();
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
        const RegularData2D::IndexType * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_RegularData2D_IndexType,&a0))
        {
            try
            {
            sipCpp = new RegularData2D::IndexType(*a0);
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


extern "C" {static PyObject *var_RegularData2D_IndexType_y(PyObject *, PyObject *);}
static PyObject *var_RegularData2D_IndexType_y(PyObject *sipSelf,PyObject *sipPy)
{
    int sipIsErr = 0;
    int sipValState;
   Position *sipVal;
    RegularData2D::IndexType *sipCpp = reinterpret_cast<RegularData2D::IndexType *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_RegularData2D_IndexType));

    if (!sipCpp)
        return NULL;

    if (sipPy == NULL)
    {
        sipVal = &sipCpp->y;

        sipPy = sipConvertFromMappedType(sipVal,sipMappedType_Position,NULL);

        return sipPy;
    }

    sipVal = reinterpret_cast<Position *>(sipForceConvertToMappedType(sipPy,sipMappedType_Position,NULL,SIP_NOT_NONE,&sipValState,&sipIsErr));

    if (sipIsErr)
        return NULL;

    sipCpp->y = *sipVal;

    sipReleaseMappedType(sipVal,sipMappedType_Position,sipValState);

    Py_INCREF(Py_None);
    return Py_None;
}


extern "C" {static PyObject *var_RegularData2D_IndexType_x(PyObject *, PyObject *);}
static PyObject *var_RegularData2D_IndexType_x(PyObject *sipSelf,PyObject *sipPy)
{
    int sipIsErr = 0;
    int sipValState;
   Position *sipVal;
    RegularData2D::IndexType *sipCpp = reinterpret_cast<RegularData2D::IndexType *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_RegularData2D_IndexType));

    if (!sipCpp)
        return NULL;

    if (sipPy == NULL)
    {
        sipVal = &sipCpp->x;

        sipPy = sipConvertFromMappedType(sipVal,sipMappedType_Position,NULL);

        return sipPy;
    }

    sipVal = reinterpret_cast<Position *>(sipForceConvertToMappedType(sipPy,sipMappedType_Position,NULL,SIP_NOT_NONE,&sipValState,&sipIsErr));

    if (sipIsErr)
        return NULL;

    sipCpp->x = *sipVal;

    sipReleaseMappedType(sipVal,sipMappedType_Position,sipValState);

    Py_INCREF(Py_None);
    return Py_None;
}

PyMethodDef variables_RegularData2D_IndexType[] = {
    {sipNm_BALL_y, var_RegularData2D_IndexType_y, 0, NULL},
    {sipNm_BALL_x, var_RegularData2D_IndexType_x, 0, NULL},
    {0, 0, 0, 0}
};


extern "C" {static void *forceConvertTo_RegularData2D_IndexType(PyObject *, int *);}
static void *forceConvertTo_RegularData2D_IndexType(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_RegularData2D_IndexType))
        return sipConvertToCpp(valobj,sipClass_RegularData2D_IndexType,iserrp);

    sipBadClass(sipNm_BALL_IndexType);

    *iserrp = 1;

    return NULL;
}


sipTypeDef sipType_BALL_RegularData2D_IndexType = {
    0,
    0,
    "BALL.RegularData2D.IndexType",
    0,
    {183, 255, 0},
    0,
    0,
    0, 0,
    0, 0,
    variables_RegularData2D_IndexType,
    init_RegularData2D_IndexType,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_RegularData2D_IndexType,
    cast_RegularData2D_IndexType,
    release_RegularData2D_IndexType,
    forceConvertTo_RegularData2D_IndexType,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
