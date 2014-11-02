/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLSurfaceTriangle.h"

#include "sipBALLIndex.h"



/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_Surface_Triangle(void *, sipWrapperType *);}
static void *cast_Surface_Triangle(void *ptr,sipWrapperType *targetClass)
{
    if (targetClass == sipClass_Surface_Triangle)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_Surface_Triangle(void *, int);}
static void release_Surface_Triangle(void *ptr,int)
{
    delete reinterpret_cast<Surface::Triangle *>(ptr);
}


extern "C" {static void dealloc_Surface_Triangle(sipWrapper *);}
static void dealloc_Surface_Triangle(sipWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_Surface_Triangle(sipSelf->u.cppPtr,0);
    }
}


extern "C" {static void *init_Surface_Triangle(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_Surface_Triangle(sipWrapper *,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    Surface::Triangle *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            try
            {
            sipCpp = new Surface::Triangle();
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
        const Surface::Triangle * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_Surface_Triangle,&a0))
        {
            try
            {
            sipCpp = new Surface::Triangle(*a0);
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


extern "C" {static PyObject *var_Surface_Triangle_v3(PyObject *, PyObject *);}
static PyObject *var_Surface_Triangle_v3(PyObject *sipSelf,PyObject *sipPy)
{
    int sipIsErr = 0;
    int sipValState;
   Index *sipVal;
    Surface::Triangle *sipCpp = reinterpret_cast<Surface::Triangle *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_Surface_Triangle));

    if (!sipCpp)
        return NULL;

    if (sipPy == NULL)
    {
        sipVal = &sipCpp->v3;

        sipPy = sipConvertFromMappedType(sipVal,sipMappedType_Index,NULL);

        return sipPy;
    }

    sipVal = reinterpret_cast<Index *>(sipForceConvertToMappedType(sipPy,sipMappedType_Index,NULL,SIP_NOT_NONE,&sipValState,&sipIsErr));

    if (sipIsErr)
        return NULL;

    sipCpp->v3 = *sipVal;

    sipReleaseMappedType(sipVal,sipMappedType_Index,sipValState);

    Py_INCREF(Py_None);
    return Py_None;
}


extern "C" {static PyObject *var_Surface_Triangle_v2(PyObject *, PyObject *);}
static PyObject *var_Surface_Triangle_v2(PyObject *sipSelf,PyObject *sipPy)
{
    int sipIsErr = 0;
    int sipValState;
   Index *sipVal;
    Surface::Triangle *sipCpp = reinterpret_cast<Surface::Triangle *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_Surface_Triangle));

    if (!sipCpp)
        return NULL;

    if (sipPy == NULL)
    {
        sipVal = &sipCpp->v2;

        sipPy = sipConvertFromMappedType(sipVal,sipMappedType_Index,NULL);

        return sipPy;
    }

    sipVal = reinterpret_cast<Index *>(sipForceConvertToMappedType(sipPy,sipMappedType_Index,NULL,SIP_NOT_NONE,&sipValState,&sipIsErr));

    if (sipIsErr)
        return NULL;

    sipCpp->v2 = *sipVal;

    sipReleaseMappedType(sipVal,sipMappedType_Index,sipValState);

    Py_INCREF(Py_None);
    return Py_None;
}


extern "C" {static PyObject *var_Surface_Triangle_v1(PyObject *, PyObject *);}
static PyObject *var_Surface_Triangle_v1(PyObject *sipSelf,PyObject *sipPy)
{
    int sipIsErr = 0;
    int sipValState;
   Index *sipVal;
    Surface::Triangle *sipCpp = reinterpret_cast<Surface::Triangle *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_Surface_Triangle));

    if (!sipCpp)
        return NULL;

    if (sipPy == NULL)
    {
        sipVal = &sipCpp->v1;

        sipPy = sipConvertFromMappedType(sipVal,sipMappedType_Index,NULL);

        return sipPy;
    }

    sipVal = reinterpret_cast<Index *>(sipForceConvertToMappedType(sipPy,sipMappedType_Index,NULL,SIP_NOT_NONE,&sipValState,&sipIsErr));

    if (sipIsErr)
        return NULL;

    sipCpp->v1 = *sipVal;

    sipReleaseMappedType(sipVal,sipMappedType_Index,sipValState);

    Py_INCREF(Py_None);
    return Py_None;
}

PyMethodDef variables_Surface_Triangle[] = {
    {sipNm_BALL_v3, var_Surface_Triangle_v3, 0, NULL},
    {sipNm_BALL_v2, var_Surface_Triangle_v2, 0, NULL},
    {sipNm_BALL_v1, var_Surface_Triangle_v1, 0, NULL},
    {0, 0, 0, 0}
};


extern "C" {static void *forceConvertTo_Surface_Triangle(PyObject *, int *);}
static void *forceConvertTo_Surface_Triangle(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_Surface_Triangle))
        return sipConvertToCpp(valobj,sipClass_Surface_Triangle,iserrp);

    sipBadClass(sipNm_BALL_Triangle);

    *iserrp = 1;

    return NULL;
}


sipTypeDef sipType_BALL_Surface_Triangle = {
    0,
    0,
    "BALL.Surface.Triangle",
    0,
    {136, 255, 0},
    0,
    0,
    0, 0,
    0, 0,
    variables_Surface_Triangle,
    init_Surface_Triangle,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_Surface_Triangle,
    cast_Surface_Triangle,
    release_Surface_Triangle,
    forceConvertTo_Surface_Triangle,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
