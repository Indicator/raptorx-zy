/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLVRMLRenderer.h"

#include "sipBALLRenderer.h"
#include "sipBALLString.h"
#include "sipBALLVRMLRenderer.h"
#include "sipBALLTwoColoredTube.h"
#include "sipBALLTube.h"
#include "sipBALLMesh.h"
#include "sipBALLSphere.h"
#include "sipBALLStage.h"
#include "sipBALLColorRGBA.h"
#include "sipBALLVector3.h"
#include "sipBALLRepresentation.h"


sipVRMLRenderer::sipVRMLRenderer() throw(): VRMLRenderer(), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,3);
}

sipVRMLRenderer::sipVRMLRenderer(const String& a0): VRMLRenderer(a0), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,3);
}

sipVRMLRenderer::sipVRMLRenderer(const VRMLRenderer& a0): VRMLRenderer(a0), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,3);
}

sipVRMLRenderer::~sipVRMLRenderer() throw()
{
    sipCommonDtor(sipPySelf);
}

void sipVRMLRenderer::clear() throw()
{
    extern void sipVH_BALL_0(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipNm_BALL_clear);

    if (!meth)
    {
        VRMLRenderer::clear();
        return;
    }

    sipVH_BALL_0(sipGILState,meth);
}

bool sipVRMLRenderer::init(const Stage& a0) throw()
{
    extern bool sipVH_BALL_11(sip_gilstate_t,PyObject *,const Stage&);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,NULL,sipNm_BALL_init);

    if (!meth)
        return VRMLRenderer::init(a0);

    return sipVH_BALL_11(sipGILState,meth,a0);
}

bool sipVRMLRenderer::finish() throw()
{
    extern bool sipVH_BALL_4(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[2],sipPySelf,NULL,sipNm_BALL_finish);

    if (!meth)
        return VRMLRenderer::finish();

    return sipVH_BALL_4(sipGILState,meth);
}


extern "C" {static PyObject *meth_VRMLRenderer_clear(PyObject *, PyObject *);}
static PyObject *meth_VRMLRenderer_clear(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        VRMLRenderer *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_VRMLRenderer,&sipCpp))
        {
            (sipSelfWasArg ? sipCpp->VRMLRenderer::clear() : sipCpp->clear());

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_VRMLRenderer,sipNm_BALL_clear);

    return NULL;
}


extern "C" {static PyObject *meth_VRMLRenderer_setFileName(PyObject *, PyObject *);}
static PyObject *meth_VRMLRenderer_setFileName(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const String * a0;
        int a0State = 0;
        VRMLRenderer *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ1",&sipSelf,sipClass_VRMLRenderer,&sipCpp,sipClass_String,&a0,&a0State))
        {
            try
            {
            sipCpp->setFileName(*a0);
            }
            catch (...)
            {

            sipReleaseInstance(const_cast<String *>(a0),sipClass_String,a0State);
                sipRaiseUnknownException();
                return NULL;
            }

            sipReleaseInstance(const_cast<String *>(a0),sipClass_String,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_VRMLRenderer,sipNm_BALL_setFileName);

    return NULL;
}


extern "C" {static PyObject *meth_VRMLRenderer_VRMLColorRGBA(PyObject *, PyObject *);}
static PyObject *meth_VRMLRenderer_VRMLColorRGBA(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const ColorRGBA * a0;
        VRMLRenderer *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_VRMLRenderer,&sipCpp,sipClass_ColorRGBA,&a0))
        {
            String *sipRes;

            sipRes = new String(sipCpp->VRMLColorRGBA(*a0));

            return sipConvertFromNewInstance(sipRes,sipClass_String,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_VRMLRenderer,sipNm_BALL_VRMLColorRGBA);

    return NULL;
}


extern "C" {static PyObject *meth_VRMLRenderer_VRMLVector3(PyObject *, PyObject *);}
static PyObject *meth_VRMLRenderer_VRMLVector3(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Vector3 * a0;
        VRMLRenderer *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_VRMLRenderer,&sipCpp,sipClass_Vector3,&a0))
        {
            String *sipRes;

            sipRes = new String(sipCpp->VRMLVector3(*a0));

            return sipConvertFromNewInstance(sipRes,sipClass_String,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_VRMLRenderer,sipNm_BALL_VRMLVector3);

    return NULL;
}


extern "C" {static PyObject *meth_VRMLRenderer_VRMLColor(PyObject *, PyObject *);}
static PyObject *meth_VRMLRenderer_VRMLColor(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const ColorRGBA * a0;
        VRMLRenderer *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_VRMLRenderer,&sipCpp,sipClass_ColorRGBA,&a0))
        {
            sipCpp->VRMLColor(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_VRMLRenderer,sipNm_BALL_VRMLColor);

    return NULL;
}


extern "C" {static PyObject *meth_VRMLRenderer_init(PyObject *, PyObject *);}
static PyObject *meth_VRMLRenderer_init(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        const Stage * a0;
        VRMLRenderer *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_VRMLRenderer,&sipCpp,sipClass_Stage,&a0))
        {
            bool sipRes;

            sipRes = (sipSelfWasArg ? sipCpp->VRMLRenderer::init(*a0) : sipCpp->init(*a0));

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_VRMLRenderer,sipNm_BALL_init);

    return NULL;
}


extern "C" {static PyObject *meth_VRMLRenderer_finish(PyObject *, PyObject *);}
static PyObject *meth_VRMLRenderer_finish(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        VRMLRenderer *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_VRMLRenderer,&sipCpp))
        {
            bool sipRes;

            sipRes = (sipSelfWasArg ? sipCpp->VRMLRenderer::finish() : sipCpp->finish());

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_VRMLRenderer,sipNm_BALL_finish);

    return NULL;
}


extern "C" {static PyObject *meth_VRMLRenderer_renderSphere_(PyObject *, PyObject *);}
static PyObject *meth_VRMLRenderer_renderSphere_(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const Sphere * a0;
        VRMLRenderer *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_VRMLRenderer,&sipCpp,sipClass_Sphere,&a0))
        {
            sipCpp->renderSphere_(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_VRMLRenderer,sipNm_BALL_renderSphere_);

    return NULL;
}


extern "C" {static PyObject *meth_VRMLRenderer_renderMesh_(PyObject *, PyObject *);}
static PyObject *meth_VRMLRenderer_renderMesh_(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const Mesh * a0;
        VRMLRenderer *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_VRMLRenderer,&sipCpp,sipClass_Mesh,&a0))
        {
            sipCpp->renderMesh_(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_VRMLRenderer,sipNm_BALL_renderMesh_);

    return NULL;
}


extern "C" {static PyObject *meth_VRMLRenderer_renderTube_(PyObject *, PyObject *);}
static PyObject *meth_VRMLRenderer_renderTube_(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const Tube * a0;
        VRMLRenderer *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_VRMLRenderer,&sipCpp,sipClass_Tube,&a0))
        {
            sipCpp->renderTube_(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_VRMLRenderer,sipNm_BALL_renderTube_);

    return NULL;
}


extern "C" {static PyObject *meth_VRMLRenderer_renderTwoColoredTube_(PyObject *, PyObject *);}
static PyObject *meth_VRMLRenderer_renderTwoColoredTube_(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const TwoColoredTube * a0;
        VRMLRenderer *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_VRMLRenderer,&sipCpp,sipClass_TwoColoredTube,&a0))
        {
            sipCpp->renderTwoColoredTube_(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_VRMLRenderer,sipNm_BALL_renderTwoColoredTube_);

    return NULL;
}


extern "C" {static PyObject *meth_VRMLRenderer_out_(PyObject *, PyObject *);}
static PyObject *meth_VRMLRenderer_out_(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const String * a0;
        int a0State = 0;
        VRMLRenderer *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ1",&sipSelf,sipClass_VRMLRenderer,&sipCpp,sipClass_String,&a0,&a0State))
        {
            sipCpp->out_(*a0);

            sipReleaseInstance(const_cast<String *>(a0),sipClass_String,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_VRMLRenderer,sipNm_BALL_out_);

    return NULL;
}


extern "C" {static PyObject *meth_VRMLRenderer_outheader_(PyObject *, PyObject *);}
static PyObject *meth_VRMLRenderer_outheader_(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const String * a0;
        int a0State = 0;
        VRMLRenderer *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ1",&sipSelf,sipClass_VRMLRenderer,&sipCpp,sipClass_String,&a0,&a0State))
        {
            sipCpp->outheader_(*a0);

            sipReleaseInstance(const_cast<String *>(a0),sipClass_String,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_VRMLRenderer,sipNm_BALL_outheader_);

    return NULL;
}


extern "C" {static PyObject *meth_VRMLRenderer_outfinish_(PyObject *, PyObject *);}
static PyObject *meth_VRMLRenderer_outfinish_(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const String * a0;
        int a0State = 0;
        VRMLRenderer *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ1",&sipSelf,sipClass_VRMLRenderer,&sipCpp,sipClass_String,&a0,&a0State))
        {
            sipCpp->outfinish_(*a0);

            sipReleaseInstance(const_cast<String *>(a0),sipClass_String,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_VRMLRenderer,sipNm_BALL_outfinish_);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_VRMLRenderer(void *, sipWrapperType *);}
static void *cast_VRMLRenderer(void *ptr,sipWrapperType *targetClass)
{
    void *res;

    if (targetClass == sipClass_VRMLRenderer)
        return ptr;

    if ((res = sipCast_Renderer((Renderer *)(VRMLRenderer *)ptr,targetClass)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_VRMLRenderer(void *, int);}
static void release_VRMLRenderer(void *ptr,int state)
{
    if (state & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipVRMLRenderer *>(ptr);
    else
        delete reinterpret_cast<VRMLRenderer *>(ptr);
}


extern "C" {static void dealloc_VRMLRenderer(sipWrapper *);}
static void dealloc_VRMLRenderer(sipWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipVRMLRenderer *>(sipSelf->u.cppPtr)->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_VRMLRenderer(sipSelf->u.cppPtr,sipSelf->flags);
    }
}


extern "C" {static void *init_VRMLRenderer(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_VRMLRenderer(sipWrapper *sipSelf,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    sipVRMLRenderer *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            sipCpp = new sipVRMLRenderer();
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
            sipCpp = new sipVRMLRenderer(*a0);
            }
            catch (...)
            {

            sipReleaseInstance(const_cast<String *>(a0),sipClass_String,a0State);
                sipRaiseUnknownException();
                return NULL;
            }

            sipReleaseInstance(const_cast<String *>(a0),sipClass_String,a0State);
        }
    }

    if (!sipCpp)
    {
        const VRMLRenderer * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_VRMLRenderer,&a0))
        {
            try
            {
            sipCpp = new sipVRMLRenderer(*a0);
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


extern "C" {static void *forceConvertTo_VRMLRenderer(PyObject *, int *);}
static void *forceConvertTo_VRMLRenderer(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_VRMLRenderer))
        return sipConvertToCpp(valobj,sipClass_VRMLRenderer,iserrp);

    sipBadClass(sipNm_BALL_VRMLRenderer);

    *iserrp = 1;

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedClassDef supers_VRMLRenderer[] = {{0, 255, 1}};


static PyMethodDef methods_VRMLRenderer[] = {
    {sipNm_BALL_VRMLColor, meth_VRMLRenderer_VRMLColor, METH_VARARGS, NULL},
    {sipNm_BALL_VRMLColorRGBA, meth_VRMLRenderer_VRMLColorRGBA, METH_VARARGS, NULL},
    {sipNm_BALL_VRMLVector3, meth_VRMLRenderer_VRMLVector3, METH_VARARGS, NULL},
    {sipNm_BALL_clear, meth_VRMLRenderer_clear, METH_VARARGS, NULL},
    {sipNm_BALL_finish, meth_VRMLRenderer_finish, METH_VARARGS, NULL},
    {sipNm_BALL_init, meth_VRMLRenderer_init, METH_VARARGS, NULL},
    {sipNm_BALL_out_, meth_VRMLRenderer_out_, METH_VARARGS, NULL},
    {sipNm_BALL_outfinish_, meth_VRMLRenderer_outfinish_, METH_VARARGS, NULL},
    {sipNm_BALL_outheader_, meth_VRMLRenderer_outheader_, METH_VARARGS, NULL},
    {sipNm_BALL_renderMesh_, meth_VRMLRenderer_renderMesh_, METH_VARARGS, NULL},
    {sipNm_BALL_renderSphere_, meth_VRMLRenderer_renderSphere_, METH_VARARGS, NULL},
    {sipNm_BALL_renderTube_, meth_VRMLRenderer_renderTube_, METH_VARARGS, NULL},
    {sipNm_BALL_renderTwoColoredTube_, meth_VRMLRenderer_renderTwoColoredTube_, METH_VARARGS, NULL},
    {sipNm_BALL_setFileName, meth_VRMLRenderer_setFileName, METH_VARARGS, NULL}
};


sipTypeDef sipType_BALL_VRMLRenderer = {
    0,
    0,
    "BALL.VRMLRenderer",
    0,
    {0, 0, 1},
    supers_VRMLRenderer,
    0,
    14, methods_VRMLRenderer,
    0, 0,
    0,
    init_VRMLRenderer,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_VRMLRenderer,
    cast_VRMLRenderer,
    release_VRMLRenderer,
    forceConvertTo_VRMLRenderer,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
