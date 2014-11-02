/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLBox.h"

#include "sipBALLGeometricObject.h"
#include "sipBALLVertex2.h"
#include "sipBALLVector3.h"
#include "sipBALLBox.h"
#include "sipBALLColorRGBA.h"
#include "sipBALLColorUnit.h"
#include "sipBALLComposite.h"


sipBox::sipBox() throw(): Box(), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,2);
}

sipBox::sipBox(const Box& a0) throw(): Box(a0), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,2);
}

sipBox::sipBox(const Vector3& a0,const Vector3& a1,const Vector3& a2,float a3) throw(): Box(a0,a1,a2,a3), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,2);
}

sipBox::~sipBox() throw()
{
    sipCommonDtor(sipPySelf);
}

void sipBox::clear() throw()
{
    extern void sipVH_BALL_0(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipNm_BALL_clear);

    if (!meth)
    {
        Box::clear();
        return;
    }

    sipVH_BALL_0(sipGILState,meth);
}

bool sipBox::isValid() const throw()
{
    extern bool sipVH_BALL_4(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<sipMethodCache *>(&sipPyMethods[1]),sipPySelf,NULL,sipNm_BALL_isValid);

    if (!meth)
        return Box::isValid();

    return sipVH_BALL_4(sipGILState,meth);
}


extern "C" {static PyObject *meth_Box_isValid(PyObject *, PyObject *);}
static PyObject *meth_Box_isValid(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        Box *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Box,&sipCpp))
        {
            bool sipRes;

            sipRes = (sipSelfWasArg ? sipCpp->Box::isValid() : sipCpp->isValid());

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Box,sipNm_BALL_isValid);

    return NULL;
}


extern "C" {static PyObject *meth_Box_clear(PyObject *, PyObject *);}
static PyObject *meth_Box_clear(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        Box *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Box,&sipCpp))
        {
            (sipSelfWasArg ? sipCpp->Box::clear() : sipCpp->clear());

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Box,sipNm_BALL_clear);

    return NULL;
}


extern "C" {static PyObject *meth_Box_set(PyObject *, PyObject *);}
static PyObject *meth_Box_set(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const Box * a0;
        Box *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_Box,&sipCpp,sipClass_Box,&a0))
        {
            sipCpp->set(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Box,sipNm_BALL_set);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_Box(void *, sipWrapperType *);}
static void *cast_Box(void *ptr,sipWrapperType *targetClass)
{
    void *res;

    if (targetClass == sipClass_Box)
        return ptr;

    if ((res = sipCast_GeometricObject((GeometricObject *)(Box *)ptr,targetClass)) != NULL)
        return res;

    if ((res = sipCast_Vertex2((Vertex2 *)(Box *)ptr,targetClass)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_Box(void *, int);}
static void release_Box(void *ptr,int state)
{
    if (state & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipBox *>(ptr);
    else
        delete reinterpret_cast<Box *>(ptr);
}


extern "C" {static void dealloc_Box(sipWrapper *);}
static void dealloc_Box(sipWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipBox *>(sipSelf->u.cppPtr)->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_Box(sipSelf->u.cppPtr,sipSelf->flags);
    }
}


extern "C" {static void *init_Box(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_Box(sipWrapper *sipSelf,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    sipBox *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            sipCpp = new sipBox();
        }
    }

    if (!sipCpp)
    {
        const Box * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_Box,&a0))
        {
            sipCpp = new sipBox(*a0);
        }
    }

    if (!sipCpp)
    {
        const Vector3 * a0;
        const Vector3& a1def = Vector3(0,1,0);
        const Vector3 * a1 = &a1def;
        const Vector3& a2def = Vector3(-1,0,0);
        const Vector3 * a2 = &a2def;
        float a3 = 1;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA|JAJAf",sipClass_Vector3,&a0,sipClass_Vector3,&a1,sipClass_Vector3,&a2,&a3))
        {
            sipCpp = new sipBox(*a0,*a1,*a2,a3);
        }
    }

    if (sipCpp)
        sipCpp->sipPySelf = sipSelf;

    return sipCpp;
}


extern "C" {static void *forceConvertTo_Box(PyObject *, int *);}
static void *forceConvertTo_Box(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_Box))
        return sipConvertToCpp(valobj,sipClass_Box,iserrp);

    sipBadClass(sipNm_BALL_Box);

    *iserrp = 1;

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedClassDef supers_Box[] = {{41, 255, 0}, {35, 255, 1}};


static PyMethodDef methods_Box[] = {
    {sipNm_BALL_clear, meth_Box_clear, METH_VARARGS, NULL},
    {sipNm_BALL_isValid, meth_Box_isValid, METH_VARARGS, NULL},
    {sipNm_BALL_set, meth_Box_set, METH_VARARGS, NULL}
};


sipTypeDef sipType_BALL_Box = {
    0,
    SIP_TYPE_SCC,
    "BALL.Box",
    0,
    {0, 0, 1},
    supers_Box,
    0,
    3, methods_Box,
    0, 0,
    0,
    init_Box,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_Box,
    cast_Box,
    release_Box,
    forceConvertTo_Box,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
