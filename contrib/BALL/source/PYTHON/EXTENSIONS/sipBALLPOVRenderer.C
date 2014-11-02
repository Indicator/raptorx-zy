/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLPOVRenderer.h"

#include "sipBALLRenderer.h"
#include "sipBALLFileNotFound.h"
#include "sipBALLString.h"
#include "sipBALLPOVRenderer.h"
#include "sipBALLStage.h"
#include "sipBALLRepresentation.h"


sipPOVRenderer::sipPOVRenderer() throw(): POVRenderer(), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,1);
}

sipPOVRenderer::sipPOVRenderer(const String& a0) throw(FileNotFound): POVRenderer(a0), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,1);
}

sipPOVRenderer::sipPOVRenderer(const POVRenderer& a0): POVRenderer(a0), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,1);
}

sipPOVRenderer::~sipPOVRenderer() throw()
{
    sipCommonDtor(sipPySelf);
}

bool sipPOVRenderer::init(const Stage& a0,float a1,float a2) throw()
{
    extern bool sipVH_BALL_12(sip_gilstate_t,PyObject *,const Stage&,float,float);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipNm_BALL_init);

    if (!meth)
        return POVRenderer::init(a0,a1,a2);

    return sipVH_BALL_12(sipGILState,meth,a0,a1,a2);
}


extern "C" {static PyObject *meth_POVRenderer_finish(PyObject *, PyObject *);}
static PyObject *meth_POVRenderer_finish(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        POVRenderer *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_POVRenderer,&sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->finish();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_POVRenderer,sipNm_BALL_finish);

    return NULL;
}


extern "C" {static PyObject *meth_POVRenderer_clear(PyObject *, PyObject *);}
static PyObject *meth_POVRenderer_clear(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        POVRenderer *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_POVRenderer,&sipCpp))
        {
            sipCpp->clear();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_POVRenderer,sipNm_BALL_clear);

    return NULL;
}


extern "C" {static PyObject *meth_POVRenderer_init(PyObject *, PyObject *);}
static PyObject *meth_POVRenderer_init(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        const Stage * a0;
        float a1;
        float a2;
        POVRenderer *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJAff",&sipSelf,sipClass_POVRenderer,&sipCpp,sipClass_Stage,&a0,&a1,&a2))
        {
            bool sipRes;

            sipRes = (sipSelfWasArg ? sipCpp->POVRenderer::init(*a0,a1,a2) : sipCpp->init(*a0,a1,a2));

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_POVRenderer,sipNm_BALL_init);

    return NULL;
}


extern "C" {static PyObject *meth_POVRenderer_setFileName(PyObject *, PyObject *);}
static PyObject *meth_POVRenderer_setFileName(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const String * a0;
        int a0State = 0;
        POVRenderer *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ1",&sipSelf,sipClass_POVRenderer,&sipCpp,sipClass_String,&a0,&a0State))
        {
            try
            {
            sipCpp->setFileName(*a0);
            }
            catch (FileNotFound &sipExceptionRef)
            {

            sipReleaseInstance(const_cast<String *>(a0),sipClass_String,a0State);
                /* Hope that there is a valid copy ctor. */
                FileNotFound *sipExceptionCopy = new FileNotFound(sipExceptionRef);

                sipRaiseClassException(sipClass_FileNotFound,sipExceptionCopy);

                return NULL;
            }

            sipReleaseInstance(const_cast<String *>(a0),sipClass_String,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_POVRenderer,sipNm_BALL_setFileName);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_POVRenderer(void *, sipWrapperType *);}
static void *cast_POVRenderer(void *ptr,sipWrapperType *targetClass)
{
    void *res;

    if (targetClass == sipClass_POVRenderer)
        return ptr;

    if ((res = sipCast_Renderer((Renderer *)(POVRenderer *)ptr,targetClass)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_POVRenderer(void *, int);}
static void release_POVRenderer(void *ptr,int state)
{
    if (state & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipPOVRenderer *>(ptr);
    else
        delete reinterpret_cast<POVRenderer *>(ptr);
}


extern "C" {static void dealloc_POVRenderer(sipWrapper *);}
static void dealloc_POVRenderer(sipWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipPOVRenderer *>(sipSelf->u.cppPtr)->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_POVRenderer(sipSelf->u.cppPtr,sipSelf->flags);
    }
}


extern "C" {static void *init_POVRenderer(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_POVRenderer(sipWrapper *sipSelf,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    sipPOVRenderer *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            sipCpp = new sipPOVRenderer();
        }
    }

    if (!sipCpp)
    {
        const String * a0;
        int a0State = 0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"J1",sipClass_String,&a0,&a0State))
        {
            try
            {
            sipCpp = new sipPOVRenderer(*a0);
            }
            catch (FileNotFound &sipExceptionRef)
            {

            sipReleaseInstance(const_cast<String *>(a0),sipClass_String,a0State);
                /* Hope that there is a valid copy ctor. */
                FileNotFound *sipExceptionCopy = new FileNotFound(sipExceptionRef);

                sipRaiseClassException(sipClass_FileNotFound,sipExceptionCopy);

                return NULL;
            }

            sipReleaseInstance(const_cast<String *>(a0),sipClass_String,a0State);
        }
    }

    if (!sipCpp)
    {
        const POVRenderer * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_POVRenderer,&a0))
        {
            try
            {
            sipCpp = new sipPOVRenderer(*a0);
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }
        }
    }

    if (sipCpp)
        sipCpp->sipPySelf = sipSelf;

    return sipCpp;
}


extern "C" {static void *forceConvertTo_POVRenderer(PyObject *, int *);}
static void *forceConvertTo_POVRenderer(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_POVRenderer))
        return sipConvertToCpp(valobj,sipClass_POVRenderer,iserrp);

    sipBadClass(sipNm_BALL_POVRenderer);

    *iserrp = 1;

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedClassDef supers_POVRenderer[] = {{0, 255, 1}};


static PyMethodDef methods_POVRenderer[] = {
    {sipNm_BALL_clear, meth_POVRenderer_clear, METH_VARARGS, NULL},
    {sipNm_BALL_finish, meth_POVRenderer_finish, METH_VARARGS, NULL},
    {sipNm_BALL_init, meth_POVRenderer_init, METH_VARARGS, NULL},
    {sipNm_BALL_setFileName, meth_POVRenderer_setFileName, METH_VARARGS, NULL}
};


sipTypeDef sipType_BALL_POVRenderer = {
    0,
    0,
    "BALL.POVRenderer",
    0,
    {0, 0, 1},
    supers_POVRenderer,
    0,
    4, methods_POVRenderer,
    0, 0,
    0,
    init_POVRenderer,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_POVRenderer,
    cast_POVRenderer,
    release_POVRenderer,
    forceConvertTo_POVRenderer,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
