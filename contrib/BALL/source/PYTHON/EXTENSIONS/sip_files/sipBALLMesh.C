/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLMesh.h"

#include "sipBALLGeometricObject.h"
#include "sipBALLSurface.h"
#include "sipBALLMultiColorExtension.h"
#include "sipBALLMesh.h"
#include "sipBALLColorRGBA.h"
#include "sipBALLColorUnit.h"
#include "sipBALLComposite.h"
#include "sipBALLVector3.h"
#include "sipBALLSurfaceTriangle.h"
#include "sipBALLPosition.h"
#include "sipBALLString.h"


sipMesh::sipMesh() throw(): Mesh(), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,2);
}

sipMesh::sipMesh(const Mesh& a0) throw(): Mesh(a0), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,2);
}

sipMesh::~sipMesh() throw()
{
    sipCommonDtor(sipPySelf);
}

void sipMesh::clear() throw()
{
    extern void sipVH_BALL_0(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipNm_BALL_clear);

    if (!meth)
    {
        Mesh::clear();
        return;
    }

    sipVH_BALL_0(sipGILState,meth);
}

bool sipMesh::isValid() const throw()
{
    extern bool sipVH_BALL_4(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<sipMethodCache *>(&sipPyMethods[1]),sipPySelf,NULL,sipNm_BALL_isValid);

    if (!meth)
        return Mesh::isValid();

    return sipVH_BALL_4(sipGILState,meth);
}


extern "C" {static PyObject *meth_Mesh_isValid(PyObject *, PyObject *);}
static PyObject *meth_Mesh_isValid(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        Mesh *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Mesh,&sipCpp))
        {
            bool sipRes;

            sipRes = (sipSelfWasArg ? sipCpp->Mesh::isValid() : sipCpp->isValid());

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Mesh,sipNm_BALL_isValid);

    return NULL;
}


extern "C" {static PyObject *meth_Mesh_clear(PyObject *, PyObject *);}
static PyObject *meth_Mesh_clear(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        Mesh *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Mesh,&sipCpp))
        {
            (sipSelfWasArg ? sipCpp->Mesh::clear() : sipCpp->clear());

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Mesh,sipNm_BALL_clear);

    return NULL;
}


extern "C" {static PyObject *meth_Mesh_set(PyObject *, PyObject *);}
static PyObject *meth_Mesh_set(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const Mesh * a0;
        Mesh *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_Mesh,&sipCpp,sipClass_Mesh,&a0))
        {
            sipCpp->set(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Mesh,sipNm_BALL_set);

    return NULL;
}


extern "C" {static PyObject *meth_Mesh_swap(PyObject *, PyObject *);}
static PyObject *meth_Mesh_swap(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Mesh * a0;
        Mesh *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_Mesh,&sipCpp,sipClass_Mesh,&a0))
        {
            sipCpp->swap(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Mesh,sipNm_BALL_swap);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_Mesh(void *, sipWrapperType *);}
static void *cast_Mesh(void *ptr,sipWrapperType *targetClass)
{
    void *res;

    if (targetClass == sipClass_Mesh)
        return ptr;

    if ((res = sipCast_GeometricObject((GeometricObject *)(Mesh *)ptr,targetClass)) != NULL)
        return res;

    if ((res = sipCast_Surface((Surface *)(Mesh *)ptr,targetClass)) != NULL)
        return res;

    if ((res = sipCast_MultiColorExtension((MultiColorExtension *)(Mesh *)ptr,targetClass)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_Mesh(void *, int);}
static void release_Mesh(void *ptr,int state)
{
    if (state & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipMesh *>(ptr);
    else
        delete reinterpret_cast<Mesh *>(ptr);
}


extern "C" {static void dealloc_Mesh(sipWrapper *);}
static void dealloc_Mesh(sipWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipMesh *>(sipSelf->u.cppPtr)->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_Mesh(sipSelf->u.cppPtr,sipSelf->flags);
    }
}


extern "C" {static void *init_Mesh(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_Mesh(sipWrapper *sipSelf,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    sipMesh *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            sipCpp = new sipMesh();
        }
    }

    if (!sipCpp)
    {
        const Mesh * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_Mesh,&a0))
        {
            sipCpp = new sipMesh(*a0);
        }
    }

    if (sipCpp)
        sipCpp->sipPySelf = sipSelf;

    return sipCpp;
}


extern "C" {static void *forceConvertTo_Mesh(PyObject *, int *);}
static void *forceConvertTo_Mesh(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_Mesh))
        return sipConvertToCpp(valobj,sipClass_Mesh,iserrp);

    sipBadClass(sipNm_BALL_Mesh);

    *iserrp = 1;

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedClassDef supers_Mesh[] = {{41, 255, 0}, {136, 255, 0}, {33, 255, 1}};


static PyMethodDef methods_Mesh[] = {
    {sipNm_BALL_clear, meth_Mesh_clear, METH_VARARGS, NULL},
    {sipNm_BALL_isValid, meth_Mesh_isValid, METH_VARARGS, NULL},
    {sipNm_BALL_set, meth_Mesh_set, METH_VARARGS, NULL},
    {sipNm_BALL_swap, meth_Mesh_swap, METH_VARARGS, NULL}
};


sipTypeDef sipType_BALL_Mesh = {
    0,
    SIP_TYPE_SCC,
    "BALL.Mesh",
    0,
    {0, 0, 1},
    supers_Mesh,
    0,
    4, methods_Mesh,
    0, 0,
    0,
    init_Mesh,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_Mesh,
    cast_Mesh,
    release_Mesh,
    forceConvertTo_Mesh,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
