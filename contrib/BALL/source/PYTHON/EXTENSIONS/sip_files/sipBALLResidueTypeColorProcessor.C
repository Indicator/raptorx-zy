/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLResidueTypeColorProcessor.h"

#include "sipBALLColorProcessor.h"
#include "sipBALLResidueTypeColorProcessor.h"
#include "sipBALLColorRGBA.h"
#include "sipBALLComposite.h"
#include "sipBALLAtom.h"
#include "sipBALLVector3.h"



extern "C" {static PyObject *meth_ResidueTypeColorProcessor_getColor(PyObject *, PyObject *);}
static PyObject *meth_ResidueTypeColorProcessor_getColor(PyObject *,PyObject *)
{

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(0,sipNm_BALL_ResidueTypeColorProcessor,sipNm_BALL_getColor);

    return NULL;
}


extern "C" {static PyObject *meth_ResidueTypeColorProcessor_setBasicColor(PyObject *, PyObject *);}
static PyObject *meth_ResidueTypeColorProcessor_setBasicColor(PyObject *,PyObject *)
{

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(0,sipNm_BALL_ResidueTypeColorProcessor,sipNm_BALL_setBasicColor);

    return NULL;
}


extern "C" {static PyObject *meth_ResidueTypeColorProcessor_setAcidicColor(PyObject *, PyObject *);}
static PyObject *meth_ResidueTypeColorProcessor_setAcidicColor(PyObject *,PyObject *)
{

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(0,sipNm_BALL_ResidueTypeColorProcessor,sipNm_BALL_setAcidicColor);

    return NULL;
}


extern "C" {static PyObject *meth_ResidueTypeColorProcessor_setPolarColor(PyObject *, PyObject *);}
static PyObject *meth_ResidueTypeColorProcessor_setPolarColor(PyObject *,PyObject *)
{

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(0,sipNm_BALL_ResidueTypeColorProcessor,sipNm_BALL_setPolarColor);

    return NULL;
}


extern "C" {static PyObject *meth_ResidueTypeColorProcessor_setHydrophobicColor(PyObject *, PyObject *);}
static PyObject *meth_ResidueTypeColorProcessor_setHydrophobicColor(PyObject *,PyObject *)
{

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(0,sipNm_BALL_ResidueTypeColorProcessor,sipNm_BALL_setHydrophobicColor);

    return NULL;
}


extern "C" {static PyObject *meth_ResidueTypeColorProcessor_setAromaticColor(PyObject *, PyObject *);}
static PyObject *meth_ResidueTypeColorProcessor_setAromaticColor(PyObject *,PyObject *)
{

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(0,sipNm_BALL_ResidueTypeColorProcessor,sipNm_BALL_setAromaticColor);

    return NULL;
}


extern "C" {static PyObject *meth_ResidueTypeColorProcessor_setOtherColor(PyObject *, PyObject *);}
static PyObject *meth_ResidueTypeColorProcessor_setOtherColor(PyObject *,PyObject *)
{

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(0,sipNm_BALL_ResidueTypeColorProcessor,sipNm_BALL_setOtherColor);

    return NULL;
}


extern "C" {static PyObject *meth_ResidueTypeColorProcessor_getBasicColor(PyObject *, PyObject *);}
static PyObject *meth_ResidueTypeColorProcessor_getBasicColor(PyObject *,PyObject *)
{

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(0,sipNm_BALL_ResidueTypeColorProcessor,sipNm_BALL_getBasicColor);

    return NULL;
}


extern "C" {static PyObject *meth_ResidueTypeColorProcessor_getAcidicColor(PyObject *, PyObject *);}
static PyObject *meth_ResidueTypeColorProcessor_getAcidicColor(PyObject *,PyObject *)
{

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(0,sipNm_BALL_ResidueTypeColorProcessor,sipNm_BALL_getAcidicColor);

    return NULL;
}


extern "C" {static PyObject *meth_ResidueTypeColorProcessor_getPolarColor(PyObject *, PyObject *);}
static PyObject *meth_ResidueTypeColorProcessor_getPolarColor(PyObject *,PyObject *)
{

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(0,sipNm_BALL_ResidueTypeColorProcessor,sipNm_BALL_getPolarColor);

    return NULL;
}


extern "C" {static PyObject *meth_ResidueTypeColorProcessor_getHydrophobicColor(PyObject *, PyObject *);}
static PyObject *meth_ResidueTypeColorProcessor_getHydrophobicColor(PyObject *,PyObject *)
{

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(0,sipNm_BALL_ResidueTypeColorProcessor,sipNm_BALL_getHydrophobicColor);

    return NULL;
}


extern "C" {static PyObject *meth_ResidueTypeColorProcessor_getAromaticColor(PyObject *, PyObject *);}
static PyObject *meth_ResidueTypeColorProcessor_getAromaticColor(PyObject *,PyObject *)
{

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(0,sipNm_BALL_ResidueTypeColorProcessor,sipNm_BALL_getAromaticColor);

    return NULL;
}


extern "C" {static PyObject *meth_ResidueTypeColorProcessor_getOtherColor(PyObject *, PyObject *);}
static PyObject *meth_ResidueTypeColorProcessor_getOtherColor(PyObject *,PyObject *)
{

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(0,sipNm_BALL_ResidueTypeColorProcessor,sipNm_BALL_getOtherColor);

    return NULL;
}


extern "C" {static PyObject *meth_ResidueTypeColorProcessor_setTransparency(PyObject *, PyObject *);}
static PyObject *meth_ResidueTypeColorProcessor_setTransparency(PyObject *,PyObject *)
{

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(0,sipNm_BALL_ResidueTypeColorProcessor,sipNm_BALL_setTransparency);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_ResidueTypeColorProcessor(void *, sipWrapperType *);}
static void *cast_ResidueTypeColorProcessor(void *ptr,sipWrapperType *targetClass)
{
    void *res;

    if (targetClass == sipClass_ResidueTypeColorProcessor)
        return ptr;

    if ((res = sipCast_ColorProcessor((ColorProcessor *)(ResidueTypeColorProcessor *)ptr,targetClass)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_ResidueTypeColorProcessor(void *, int);}
static void release_ResidueTypeColorProcessor(void *ptr,int)
{
    delete reinterpret_cast<ResidueTypeColorProcessor *>(ptr);
}


extern "C" {static void dealloc_ResidueTypeColorProcessor(sipWrapper *);}
static void dealloc_ResidueTypeColorProcessor(sipWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_ResidueTypeColorProcessor(sipSelf->u.cppPtr,0);
    }
}


extern "C" {static void *forceConvertTo_ResidueTypeColorProcessor(PyObject *, int *);}
static void *forceConvertTo_ResidueTypeColorProcessor(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_ResidueTypeColorProcessor))
        return sipConvertToCpp(valobj,sipClass_ResidueTypeColorProcessor,iserrp);

    sipBadClass(sipNm_BALL_ResidueTypeColorProcessor);

    *iserrp = 1;

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedClassDef supers_ResidueTypeColorProcessor[] = {{15, 255, 1}};


static PyMethodDef methods_ResidueTypeColorProcessor[] = {
    {sipNm_BALL_getAcidicColor, meth_ResidueTypeColorProcessor_getAcidicColor, METH_VARARGS, NULL},
    {sipNm_BALL_getAromaticColor, meth_ResidueTypeColorProcessor_getAromaticColor, METH_VARARGS, NULL},
    {sipNm_BALL_getBasicColor, meth_ResidueTypeColorProcessor_getBasicColor, METH_VARARGS, NULL},
    {sipNm_BALL_getColor, meth_ResidueTypeColorProcessor_getColor, METH_VARARGS, NULL},
    {sipNm_BALL_getHydrophobicColor, meth_ResidueTypeColorProcessor_getHydrophobicColor, METH_VARARGS, NULL},
    {sipNm_BALL_getOtherColor, meth_ResidueTypeColorProcessor_getOtherColor, METH_VARARGS, NULL},
    {sipNm_BALL_getPolarColor, meth_ResidueTypeColorProcessor_getPolarColor, METH_VARARGS, NULL},
    {sipNm_BALL_setAcidicColor, meth_ResidueTypeColorProcessor_setAcidicColor, METH_VARARGS, NULL},
    {sipNm_BALL_setAromaticColor, meth_ResidueTypeColorProcessor_setAromaticColor, METH_VARARGS, NULL},
    {sipNm_BALL_setBasicColor, meth_ResidueTypeColorProcessor_setBasicColor, METH_VARARGS, NULL},
    {sipNm_BALL_setHydrophobicColor, meth_ResidueTypeColorProcessor_setHydrophobicColor, METH_VARARGS, NULL},
    {sipNm_BALL_setOtherColor, meth_ResidueTypeColorProcessor_setOtherColor, METH_VARARGS, NULL},
    {sipNm_BALL_setPolarColor, meth_ResidueTypeColorProcessor_setPolarColor, METH_VARARGS, NULL},
    {sipNm_BALL_setTransparency, meth_ResidueTypeColorProcessor_setTransparency, METH_VARARGS, NULL}
};


sipTypeDef sipType_BALL_ResidueTypeColorProcessor = {
    0,
    0,
    "BALL.ResidueTypeColorProcessor",
    0,
    {0, 0, 1},
    supers_ResidueTypeColorProcessor,
    0,
    14, methods_ResidueTypeColorProcessor,
    0, 0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_ResidueTypeColorProcessor,
    cast_ResidueTypeColorProcessor,
    release_ResidueTypeColorProcessor,
    forceConvertTo_ResidueTypeColorProcessor,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
