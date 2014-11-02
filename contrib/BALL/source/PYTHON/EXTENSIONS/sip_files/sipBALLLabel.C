/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLLabel.h"

#include "sipBALLGeometricObject.h"
#include "sipBALLVertex.h"
#include "sipBALLLabel.h"
#include "sipBALLString.h"
#include "sipBALLColorRGBA.h"
#include "sipBALLColorUnit.h"
#include "sipBALLComposite.h"
#include "sipBALLVector3.h"


sipLabel::sipLabel() throw(): Label(), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,2);
}

sipLabel::sipLabel(const Label& a0) throw(): Label(a0), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,2);
}

sipLabel::~sipLabel() throw()
{
    sipCommonDtor(sipPySelf);
}

void sipLabel::clear() throw()
{
    extern void sipVH_BALL_0(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipNm_BALL_clear);

    if (!meth)
    {
        Label::clear();
        return;
    }

    sipVH_BALL_0(sipGILState,meth);
}

bool sipLabel::isValid() const throw()
{
    extern bool sipVH_BALL_4(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<sipMethodCache *>(&sipPyMethods[1]),sipPySelf,NULL,sipNm_BALL_isValid);

    if (!meth)
        return Label::isValid();

    return sipVH_BALL_4(sipGILState,meth);
}


extern "C" {static PyObject *meth_Label_getText(PyObject *, PyObject *);}
static PyObject *meth_Label_getText(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Label *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Label,&sipCpp))
        {
            String *sipRes;

            sipRes = new String(sipCpp->getText());

            return sipConvertFromNewInstance(sipRes,sipClass_String,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Label,sipNm_BALL_getText);

    return NULL;
}


extern "C" {static PyObject *meth_Label_isValid(PyObject *, PyObject *);}
static PyObject *meth_Label_isValid(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        Label *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Label,&sipCpp))
        {
            bool sipRes;

            sipRes = (sipSelfWasArg ? sipCpp->Label::isValid() : sipCpp->isValid());

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Label,sipNm_BALL_isValid);

    return NULL;
}


extern "C" {static PyObject *meth_Label_clear(PyObject *, PyObject *);}
static PyObject *meth_Label_clear(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        Label *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Label,&sipCpp))
        {
            (sipSelfWasArg ? sipCpp->Label::clear() : sipCpp->clear());

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Label,sipNm_BALL_clear);

    return NULL;
}


extern "C" {static PyObject *meth_Label_set(PyObject *, PyObject *);}
static PyObject *meth_Label_set(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const Label * a0;
        Label *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_Label,&sipCpp,sipClass_Label,&a0))
        {
            sipCpp->set(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Label,sipNm_BALL_set);

    return NULL;
}


extern "C" {static PyObject *meth_Label_setText(PyObject *, PyObject *);}
static PyObject *meth_Label_setText(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const String * a0;
        int a0State = 0;
        Label *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ1",&sipSelf,sipClass_Label,&sipCpp,sipClass_String,&a0,&a0State))
        {
            sipCpp->setText(*a0);

            sipReleaseInstance(const_cast<String *>(a0),sipClass_String,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Label,sipNm_BALL_setText);

    return NULL;
}


extern "C" {static PyObject *meth_Label_swap(PyObject *, PyObject *);}
static PyObject *meth_Label_swap(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Label * a0;
        Label *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_Label,&sipCpp,sipClass_Label,&a0))
        {
            sipCpp->swap(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Label,sipNm_BALL_swap);

    return NULL;
}


extern "C" {static PyObject *meth_Label_setFontSize(PyObject *, PyObject *);}
static PyObject *meth_Label_setFontSize(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        int a0;
        Label *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bi",&sipSelf,sipClass_Label,&sipCpp,&a0))
        {
            try
            {
            sipCpp->setFontSize(a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Label,sipNm_BALL_setFontSize);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_Label(void *, sipWrapperType *);}
static void *cast_Label(void *ptr,sipWrapperType *targetClass)
{
    void *res;

    if (targetClass == sipClass_Label)
        return ptr;

    if ((res = sipCast_GeometricObject((GeometricObject *)(Label *)ptr,targetClass)) != NULL)
        return res;

    if ((res = sipCast_Vertex((Vertex *)(Label *)ptr,targetClass)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_Label(void *, int);}
static void release_Label(void *ptr,int state)
{
    if (state & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipLabel *>(ptr);
    else
        delete reinterpret_cast<Label *>(ptr);
}


extern "C" {static void dealloc_Label(sipWrapper *);}
static void dealloc_Label(sipWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipLabel *>(sipSelf->u.cppPtr)->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_Label(sipSelf->u.cppPtr,sipSelf->flags);
    }
}


extern "C" {static void *init_Label(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_Label(sipWrapper *sipSelf,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    sipLabel *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            sipCpp = new sipLabel();
        }
    }

    if (!sipCpp)
    {
        const Label * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_Label,&a0))
        {
            sipCpp = new sipLabel(*a0);
        }
    }

    if (sipCpp)
        sipCpp->sipPySelf = sipSelf;

    return sipCpp;
}


extern "C" {static void *forceConvertTo_Label(PyObject *, int *);}
static void *forceConvertTo_Label(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_Label))
        return sipConvertToCpp(valobj,sipClass_Label,iserrp);

    sipBadClass(sipNm_BALL_Label);

    *iserrp = 1;

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedClassDef supers_Label[] = {{41, 255, 0}, {36, 255, 1}};


static PyMethodDef methods_Label[] = {
    {sipNm_BALL_clear, meth_Label_clear, METH_VARARGS, NULL},
    {sipNm_BALL_getText, meth_Label_getText, METH_VARARGS, NULL},
    {sipNm_BALL_isValid, meth_Label_isValid, METH_VARARGS, NULL},
    {sipNm_BALL_set, meth_Label_set, METH_VARARGS, NULL},
    {sipNm_BALL_setFontSize, meth_Label_setFontSize, METH_VARARGS, NULL},
    {sipNm_BALL_setText, meth_Label_setText, METH_VARARGS, NULL},
    {sipNm_BALL_swap, meth_Label_swap, METH_VARARGS, NULL}
};


sipTypeDef sipType_BALL_Label = {
    0,
    SIP_TYPE_SCC,
    "BALL.Label",
    0,
    {0, 0, 1},
    supers_Label,
    0,
    7, methods_Label,
    0, 0,
    0,
    init_Label,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_Label,
    cast_Label,
    release_Label,
    forceConvertTo_Label,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
