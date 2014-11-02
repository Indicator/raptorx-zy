/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLSecondaryStructureColorProcessor.h"

#include "sipBALLColorProcessor.h"
#include "sipBALLSecondaryStructureColorProcessor.h"
#include "sipBALLColorRGBA.h"
#include "sipBALLComposite.h"
#include "sipBALLAtom.h"
#include "sipBALLVector3.h"



extern "C" {static PyObject *meth_SecondaryStructureColorProcessor_getColor(PyObject *, PyObject *);}
static PyObject *meth_SecondaryStructureColorProcessor_getColor(PyObject *,PyObject *)
{

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(0,sipNm_BALL_SecondaryStructureColorProcessor,sipNm_BALL_getColor);

    return NULL;
}


extern "C" {static PyObject *meth_SecondaryStructureColorProcessor_getCoilColor(PyObject *, PyObject *);}
static PyObject *meth_SecondaryStructureColorProcessor_getCoilColor(PyObject *,PyObject *)
{

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(0,sipNm_BALL_SecondaryStructureColorProcessor,sipNm_BALL_getCoilColor);

    return NULL;
}


extern "C" {static PyObject *meth_SecondaryStructureColorProcessor_getHelixColor(PyObject *, PyObject *);}
static PyObject *meth_SecondaryStructureColorProcessor_getHelixColor(PyObject *,PyObject *)
{

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(0,sipNm_BALL_SecondaryStructureColorProcessor,sipNm_BALL_getHelixColor);

    return NULL;
}


extern "C" {static PyObject *meth_SecondaryStructureColorProcessor_getStrandColor(PyObject *, PyObject *);}
static PyObject *meth_SecondaryStructureColorProcessor_getStrandColor(PyObject *,PyObject *)
{

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(0,sipNm_BALL_SecondaryStructureColorProcessor,sipNm_BALL_getStrandColor);

    return NULL;
}


extern "C" {static PyObject *meth_SecondaryStructureColorProcessor_getTurnColor(PyObject *, PyObject *);}
static PyObject *meth_SecondaryStructureColorProcessor_getTurnColor(PyObject *,PyObject *)
{

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(0,sipNm_BALL_SecondaryStructureColorProcessor,sipNm_BALL_getTurnColor);

    return NULL;
}


extern "C" {static PyObject *meth_SecondaryStructureColorProcessor_setCoilColor(PyObject *, PyObject *);}
static PyObject *meth_SecondaryStructureColorProcessor_setCoilColor(PyObject *,PyObject *)
{

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(0,sipNm_BALL_SecondaryStructureColorProcessor,sipNm_BALL_setCoilColor);

    return NULL;
}


extern "C" {static PyObject *meth_SecondaryStructureColorProcessor_setHelixColor(PyObject *, PyObject *);}
static PyObject *meth_SecondaryStructureColorProcessor_setHelixColor(PyObject *,PyObject *)
{

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(0,sipNm_BALL_SecondaryStructureColorProcessor,sipNm_BALL_setHelixColor);

    return NULL;
}


extern "C" {static PyObject *meth_SecondaryStructureColorProcessor_setStrandColor(PyObject *, PyObject *);}
static PyObject *meth_SecondaryStructureColorProcessor_setStrandColor(PyObject *,PyObject *)
{

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(0,sipNm_BALL_SecondaryStructureColorProcessor,sipNm_BALL_setStrandColor);

    return NULL;
}


extern "C" {static PyObject *meth_SecondaryStructureColorProcessor_setTurnColor(PyObject *, PyObject *);}
static PyObject *meth_SecondaryStructureColorProcessor_setTurnColor(PyObject *,PyObject *)
{

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(0,sipNm_BALL_SecondaryStructureColorProcessor,sipNm_BALL_setTurnColor);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_SecondaryStructureColorProcessor(void *, sipWrapperType *);}
static void *cast_SecondaryStructureColorProcessor(void *ptr,sipWrapperType *targetClass)
{
    void *res;

    if (targetClass == sipClass_SecondaryStructureColorProcessor)
        return ptr;

    if ((res = sipCast_ColorProcessor((ColorProcessor *)(SecondaryStructureColorProcessor *)ptr,targetClass)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_SecondaryStructureColorProcessor(void *, int);}
static void release_SecondaryStructureColorProcessor(void *ptr,int)
{
    delete reinterpret_cast<SecondaryStructureColorProcessor *>(ptr);
}


extern "C" {static void dealloc_SecondaryStructureColorProcessor(sipWrapper *);}
static void dealloc_SecondaryStructureColorProcessor(sipWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_SecondaryStructureColorProcessor(sipSelf->u.cppPtr,0);
    }
}


extern "C" {static void *forceConvertTo_SecondaryStructureColorProcessor(PyObject *, int *);}
static void *forceConvertTo_SecondaryStructureColorProcessor(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_SecondaryStructureColorProcessor))
        return sipConvertToCpp(valobj,sipClass_SecondaryStructureColorProcessor,iserrp);

    sipBadClass(sipNm_BALL_SecondaryStructureColorProcessor);

    *iserrp = 1;

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedClassDef supers_SecondaryStructureColorProcessor[] = {{15, 255, 1}};


static PyMethodDef methods_SecondaryStructureColorProcessor[] = {
    {sipNm_BALL_getCoilColor, meth_SecondaryStructureColorProcessor_getCoilColor, METH_VARARGS, NULL},
    {sipNm_BALL_getColor, meth_SecondaryStructureColorProcessor_getColor, METH_VARARGS, NULL},
    {sipNm_BALL_getHelixColor, meth_SecondaryStructureColorProcessor_getHelixColor, METH_VARARGS, NULL},
    {sipNm_BALL_getStrandColor, meth_SecondaryStructureColorProcessor_getStrandColor, METH_VARARGS, NULL},
    {sipNm_BALL_getTurnColor, meth_SecondaryStructureColorProcessor_getTurnColor, METH_VARARGS, NULL},
    {sipNm_BALL_setCoilColor, meth_SecondaryStructureColorProcessor_setCoilColor, METH_VARARGS, NULL},
    {sipNm_BALL_setHelixColor, meth_SecondaryStructureColorProcessor_setHelixColor, METH_VARARGS, NULL},
    {sipNm_BALL_setStrandColor, meth_SecondaryStructureColorProcessor_setStrandColor, METH_VARARGS, NULL},
    {sipNm_BALL_setTurnColor, meth_SecondaryStructureColorProcessor_setTurnColor, METH_VARARGS, NULL}
};


sipTypeDef sipType_BALL_SecondaryStructureColorProcessor = {
    0,
    0,
    "BALL.SecondaryStructureColorProcessor",
    0,
    {0, 0, 1},
    supers_SecondaryStructureColorProcessor,
    0,
    9, methods_SecondaryStructureColorProcessor,
    0, 0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_SecondaryStructureColorProcessor,
    cast_SecondaryStructureColorProcessor,
    release_SecondaryStructureColorProcessor,
    forceConvertTo_SecondaryStructureColorProcessor,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
