/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLStage.h"

#include "sipBALLStage.h"
#include "sipBALLVector3.h"
#include "sipBALLColorRGBA.h"
#include "sipBALLCamera.h"
#include "sipBALLLightSource.h"


sipStage::sipStage() throw(): Stage(), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,8);
}

sipStage::sipStage(const Stage& a0) throw(): Stage(a0), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,8);
}

sipStage::~sipStage() throw()
{
    sipCommonDtor(sipPySelf);
}

void sipStage::clear() throw()
{
    extern void sipVH_BALL_0(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipNm_BALL_clear);

    if (!meth)
    {
        Stage::clear();
        return;
    }

    sipVH_BALL_0(sipGILState,meth);
}

void sipStage::addLightSource(const LightSource& a0) throw()
{
    extern void sipVH_BALL_28(sip_gilstate_t,PyObject *,const LightSource&);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,NULL,sipNm_BALL_addLightSource);

    if (!meth)
    {
        Stage::addLightSource(a0);
        return;
    }

    sipVH_BALL_28(sipGILState,meth,a0);
}

void sipStage::removeLightSource(const LightSource& a0) throw()
{
    extern void sipVH_BALL_28(sip_gilstate_t,PyObject *,const LightSource&);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[2],sipPySelf,NULL,sipNm_BALL_removeLightSource);

    if (!meth)
    {
        Stage::removeLightSource(a0);
        return;
    }

    sipVH_BALL_28(sipGILState,meth,a0);
}

Camera& sipStage::getCamera() throw()
{
    extern Camera& sipVH_BALL_27(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[3],sipPySelf,NULL,sipNm_BALL_getCamera);

    if (!meth)
        return Stage::getCamera();

    return sipVH_BALL_27(sipGILState,meth);
}

void sipStage::setCamera(const Camera& a0) throw()
{
    extern void sipVH_BALL_26(sip_gilstate_t,PyObject *,const Camera&);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[4],sipPySelf,NULL,sipNm_BALL_setCamera);

    if (!meth)
    {
        Stage::setCamera(a0);
        return;
    }

    sipVH_BALL_26(sipGILState,meth,a0);
}

const ColorRGBA& sipStage::getBackgroundColor() const throw()
{
    extern const ColorRGBA& sipVH_BALL_25(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<sipMethodCache *>(&sipPyMethods[5]),sipPySelf,NULL,sipNm_BALL_getBackgroundColor);

    if (!meth)
        return Stage::getBackgroundColor();

    return sipVH_BALL_25(sipGILState,meth);
}

void sipStage::setBackgroundColor(const ColorRGBA& a0) throw()
{
    extern void sipVH_BALL_24(sip_gilstate_t,PyObject *,const ColorRGBA&);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[6],sipPySelf,NULL,sipNm_BALL_setBackgroundColor);

    if (!meth)
    {
        Stage::setBackgroundColor(a0);
        return;
    }

    sipVH_BALL_24(sipGILState,meth,a0);
}

void sipStage::showCoordinateSystem(bool a0) throw()
{
    extern void sipVH_BALL_3(sip_gilstate_t,PyObject *,bool);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[7],sipPySelf,NULL,sipNm_BALL_showCoordinateSystem);

    if (!meth)
    {
        Stage::showCoordinateSystem(a0);
        return;
    }

    sipVH_BALL_3(sipGILState,meth,a0);
}


extern "C" {static PyObject *meth_Stage_clear(PyObject *, PyObject *);}
static PyObject *meth_Stage_clear(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        Stage *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Stage,&sipCpp))
        {
            (sipSelfWasArg ? sipCpp->Stage::clear() : sipCpp->clear());

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Stage,sipNm_BALL_clear);

    return NULL;
}


extern "C" {static PyObject *meth_Stage_addLightSource(PyObject *, PyObject *);}
static PyObject *meth_Stage_addLightSource(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        const LightSource * a0;
        Stage *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_Stage,&sipCpp,sipClass_LightSource,&a0))
        {
            (sipSelfWasArg ? sipCpp->Stage::addLightSource(*a0) : sipCpp->addLightSource(*a0));

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Stage,sipNm_BALL_addLightSource);

    return NULL;
}


extern "C" {static PyObject *meth_Stage_removeLightSource(PyObject *, PyObject *);}
static PyObject *meth_Stage_removeLightSource(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        const LightSource * a0;
        Stage *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_Stage,&sipCpp,sipClass_LightSource,&a0))
        {
            (sipSelfWasArg ? sipCpp->Stage::removeLightSource(*a0) : sipCpp->removeLightSource(*a0));

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Stage,sipNm_BALL_removeLightSource);

    return NULL;
}


extern "C" {static PyObject *meth_Stage_clearLightSources(PyObject *, PyObject *);}
static PyObject *meth_Stage_clearLightSources(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Stage *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Stage,&sipCpp))
        {
            sipCpp->clearLightSources();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Stage,sipNm_BALL_clearLightSources);

    return NULL;
}


extern "C" {static PyObject *meth_Stage_getCamera(PyObject *, PyObject *);}
static PyObject *meth_Stage_getCamera(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        Stage *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Stage,&sipCpp))
        {
            Camera *sipRes;

            sipRes = &(sipSelfWasArg ? sipCpp->Stage::getCamera() : sipCpp->getCamera());

            return sipConvertFromInstance(sipRes,sipClass_Camera,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Stage,sipNm_BALL_getCamera);

    return NULL;
}


extern "C" {static PyObject *meth_Stage_setCamera(PyObject *, PyObject *);}
static PyObject *meth_Stage_setCamera(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        const Camera * a0;
        Stage *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_Stage,&sipCpp,sipClass_Camera,&a0))
        {
            (sipSelfWasArg ? sipCpp->Stage::setCamera(*a0) : sipCpp->setCamera(*a0));

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Stage,sipNm_BALL_setCamera);

    return NULL;
}


extern "C" {static PyObject *meth_Stage_getBackgroundColor(PyObject *, PyObject *);}
static PyObject *meth_Stage_getBackgroundColor(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        Stage *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Stage,&sipCpp))
        {
            const ColorRGBA *sipRes;

            sipRes = &(sipSelfWasArg ? sipCpp->Stage::getBackgroundColor() : sipCpp->getBackgroundColor());

            return sipConvertFromInstance(const_cast<ColorRGBA *>(sipRes),sipClass_ColorRGBA,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Stage,sipNm_BALL_getBackgroundColor);

    return NULL;
}


extern "C" {static PyObject *meth_Stage_setBackgroundColor(PyObject *, PyObject *);}
static PyObject *meth_Stage_setBackgroundColor(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        const ColorRGBA * a0;
        Stage *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_Stage,&sipCpp,sipClass_ColorRGBA,&a0))
        {
            (sipSelfWasArg ? sipCpp->Stage::setBackgroundColor(*a0) : sipCpp->setBackgroundColor(*a0));

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Stage,sipNm_BALL_setBackgroundColor);

    return NULL;
}


extern "C" {static PyObject *meth_Stage_showCoordinateSystem(PyObject *, PyObject *);}
static PyObject *meth_Stage_showCoordinateSystem(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        bool a0;
        Stage *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bb",&sipSelf,sipClass_Stage,&sipCpp,&a0))
        {
            (sipSelfWasArg ? sipCpp->Stage::showCoordinateSystem(a0) : sipCpp->showCoordinateSystem(a0));

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Stage,sipNm_BALL_showCoordinateSystem);

    return NULL;
}


extern "C" {static PyObject *meth_Stage_coordinateSystemEnabled(PyObject *, PyObject *);}
static PyObject *meth_Stage_coordinateSystemEnabled(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Stage *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Stage,&sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->coordinateSystemEnabled();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Stage,sipNm_BALL_coordinateSystemEnabled);

    return NULL;
}


extern "C" {static PyObject *meth_Stage_setEyeDistance(PyObject *, PyObject *);}
static PyObject *meth_Stage_setEyeDistance(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        float a0;
        Stage *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bf",&sipSelf,sipClass_Stage,&sipCpp,&a0))
        {
            sipCpp->setEyeDistance(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Stage,sipNm_BALL_setEyeDistance);

    return NULL;
}


extern "C" {static PyObject *meth_Stage_getEyeDistance(PyObject *, PyObject *);}
static PyObject *meth_Stage_getEyeDistance(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Stage *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Stage,&sipCpp))
        {
            float sipRes;

            sipRes = sipCpp->getEyeDistance();

            return PyFloat_FromDouble((double)sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Stage,sipNm_BALL_getEyeDistance);

    return NULL;
}


extern "C" {static PyObject *meth_Stage_setFocalDistance(PyObject *, PyObject *);}
static PyObject *meth_Stage_setFocalDistance(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        float a0;
        Stage *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bf",&sipSelf,sipClass_Stage,&sipCpp,&a0))
        {
            sipCpp->setFocalDistance(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Stage,sipNm_BALL_setFocalDistance);

    return NULL;
}


extern "C" {static PyObject *meth_Stage_getFocalDistance(PyObject *, PyObject *);}
static PyObject *meth_Stage_getFocalDistance(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Stage *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Stage,&sipCpp))
        {
            float sipRes;

            sipRes = sipCpp->getFocalDistance();

            return PyFloat_FromDouble((double)sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Stage,sipNm_BALL_getFocalDistance);

    return NULL;
}


extern "C" {static PyObject *meth_Stage_setSwapSideBySideStereo(PyObject *, PyObject *);}
static PyObject *meth_Stage_setSwapSideBySideStereo(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        bool a0;
        Stage *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bb",&sipSelf,sipClass_Stage,&sipCpp,&a0))
        {
            sipCpp->setSwapSideBySideStereo(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Stage,sipNm_BALL_setSwapSideBySideStereo);

    return NULL;
}


extern "C" {static PyObject *meth_Stage_swapSideBySideStereo(PyObject *, PyObject *);}
static PyObject *meth_Stage_swapSideBySideStereo(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Stage *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Stage,&sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->swapSideBySideStereo();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Stage,sipNm_BALL_swapSideBySideStereo);

    return NULL;
}


extern "C" {static PyObject *meth_Stage_getFogIntensity(PyObject *, PyObject *);}
static PyObject *meth_Stage_getFogIntensity(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Stage *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Stage,&sipCpp))
        {
            float sipRes;

            sipRes = sipCpp->getFogIntensity();

            return PyFloat_FromDouble((double)sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Stage,sipNm_BALL_getFogIntensity);

    return NULL;
}


extern "C" {static PyObject *meth_Stage_setFogIntensity(PyObject *, PyObject *);}
static PyObject *meth_Stage_setFogIntensity(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        float a0;
        Stage *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bf",&sipSelf,sipClass_Stage,&sipCpp,&a0))
        {
            sipCpp->setFogIntensity(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Stage,sipNm_BALL_setFogIntensity);

    return NULL;
}


extern "C" {static PyObject *meth_Stage_getSpecularIntensity(PyObject *, PyObject *);}
static PyObject *meth_Stage_getSpecularIntensity(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Stage *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Stage,&sipCpp))
        {
            float sipRes;

            sipRes = sipCpp->getSpecularIntensity();

            return PyFloat_FromDouble((double)sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Stage,sipNm_BALL_getSpecularIntensity);

    return NULL;
}


extern "C" {static PyObject *meth_Stage_setSpecularIntensity(PyObject *, PyObject *);}
static PyObject *meth_Stage_setSpecularIntensity(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        float a0;
        Stage *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bf",&sipSelf,sipClass_Stage,&sipCpp,&a0))
        {
            sipCpp->setSpecularIntensity(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Stage,sipNm_BALL_setSpecularIntensity);

    return NULL;
}


extern "C" {static PyObject *meth_Stage_getDiffuseIntensity(PyObject *, PyObject *);}
static PyObject *meth_Stage_getDiffuseIntensity(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Stage *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Stage,&sipCpp))
        {
            float sipRes;

            sipRes = sipCpp->getDiffuseIntensity();

            return PyFloat_FromDouble((double)sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Stage,sipNm_BALL_getDiffuseIntensity);

    return NULL;
}


extern "C" {static PyObject *meth_Stage_setDiffuseIntensity(PyObject *, PyObject *);}
static PyObject *meth_Stage_setDiffuseIntensity(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        float a0;
        Stage *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bf",&sipSelf,sipClass_Stage,&sipCpp,&a0))
        {
            sipCpp->setDiffuseIntensity(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Stage,sipNm_BALL_setDiffuseIntensity);

    return NULL;
}


extern "C" {static PyObject *meth_Stage_getAmbientIntensity(PyObject *, PyObject *);}
static PyObject *meth_Stage_getAmbientIntensity(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Stage *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Stage,&sipCpp))
        {
            float sipRes;

            sipRes = sipCpp->getAmbientIntensity();

            return PyFloat_FromDouble((double)sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Stage,sipNm_BALL_getAmbientIntensity);

    return NULL;
}


extern "C" {static PyObject *meth_Stage_setAmbientIntensity(PyObject *, PyObject *);}
static PyObject *meth_Stage_setAmbientIntensity(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        float a0;
        Stage *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bf",&sipSelf,sipClass_Stage,&sipCpp,&a0))
        {
            sipCpp->setAmbientIntensity(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Stage,sipNm_BALL_setAmbientIntensity);

    return NULL;
}


extern "C" {static PyObject *meth_Stage_getShininess(PyObject *, PyObject *);}
static PyObject *meth_Stage_getShininess(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Stage *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Stage,&sipCpp))
        {
            float sipRes;

            sipRes = sipCpp->getShininess();

            return PyFloat_FromDouble((double)sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Stage,sipNm_BALL_getShininess);

    return NULL;
}


extern "C" {static PyObject *meth_Stage_setShininess(PyObject *, PyObject *);}
static PyObject *meth_Stage_setShininess(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        float a0;
        Stage *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bf",&sipSelf,sipClass_Stage,&sipCpp,&a0))
        {
            sipCpp->setShininess(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Stage,sipNm_BALL_setShininess);

    return NULL;
}


extern "C" {static PyObject *meth_Stage_calculateRelativeCoordinates(PyObject *, PyObject *);}
static PyObject *meth_Stage_calculateRelativeCoordinates(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Vector3 * a0;
        Stage *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_Stage,&sipCpp,sipClass_Vector3,&a0))
        {
            Vector3 *sipRes;

            try
            {
            sipRes = new Vector3(sipCpp->calculateRelativeCoordinates(*a0));
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return sipConvertFromNewInstance(sipRes,sipClass_Vector3,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Stage,sipNm_BALL_calculateRelativeCoordinates);

    return NULL;
}


extern "C" {static PyObject *meth_Stage_calculateAbsoluteCoordinates(PyObject *, PyObject *);}
static PyObject *meth_Stage_calculateAbsoluteCoordinates(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Vector3 * a0;
        Stage *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_Stage,&sipCpp,sipClass_Vector3,&a0))
        {
            Vector3 *sipRes;

            try
            {
            sipRes = new Vector3(sipCpp->calculateAbsoluteCoordinates(*a0));
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return sipConvertFromNewInstance(sipRes,sipClass_Vector3,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Stage,sipNm_BALL_calculateAbsoluteCoordinates);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_Stage(void *, sipWrapperType *);}
static void *cast_Stage(void *ptr,sipWrapperType *targetClass)
{
    if (targetClass == sipClass_Stage)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_Stage(void *, int);}
static void release_Stage(void *ptr,int state)
{
    if (state & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipStage *>(ptr);
    else
        delete reinterpret_cast<Stage *>(ptr);
}


extern "C" {static void dealloc_Stage(sipWrapper *);}
static void dealloc_Stage(sipWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipStage *>(sipSelf->u.cppPtr)->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_Stage(sipSelf->u.cppPtr,sipSelf->flags);
    }
}


extern "C" {static void *init_Stage(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_Stage(sipWrapper *sipSelf,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    sipStage *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            sipCpp = new sipStage();
        }
    }

    if (!sipCpp)
    {
        const Stage * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_Stage,&a0))
        {
            sipCpp = new sipStage(*a0);
        }
    }

    if (sipCpp)
        sipCpp->sipPySelf = sipSelf;

    return sipCpp;
}


extern "C" {static void *forceConvertTo_Stage(PyObject *, int *);}
static void *forceConvertTo_Stage(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_Stage))
        return sipConvertToCpp(valobj,sipClass_Stage,iserrp);

    sipBadClass(sipNm_BALL_Stage);

    *iserrp = 1;

    return NULL;
}


static PyMethodDef methods_Stage[] = {
    {sipNm_BALL_addLightSource, meth_Stage_addLightSource, METH_VARARGS, NULL},
    {sipNm_BALL_calculateAbsoluteCoordinates, meth_Stage_calculateAbsoluteCoordinates, METH_VARARGS, NULL},
    {sipNm_BALL_calculateRelativeCoordinates, meth_Stage_calculateRelativeCoordinates, METH_VARARGS, NULL},
    {sipNm_BALL_clear, meth_Stage_clear, METH_VARARGS, NULL},
    {sipNm_BALL_clearLightSources, meth_Stage_clearLightSources, METH_VARARGS, NULL},
    {sipNm_BALL_coordinateSystemEnabled, meth_Stage_coordinateSystemEnabled, METH_VARARGS, NULL},
    {sipNm_BALL_getAmbientIntensity, meth_Stage_getAmbientIntensity, METH_VARARGS, NULL},
    {sipNm_BALL_getBackgroundColor, meth_Stage_getBackgroundColor, METH_VARARGS, NULL},
    {sipNm_BALL_getCamera, meth_Stage_getCamera, METH_VARARGS, NULL},
    {sipNm_BALL_getDiffuseIntensity, meth_Stage_getDiffuseIntensity, METH_VARARGS, NULL},
    {sipNm_BALL_getEyeDistance, meth_Stage_getEyeDistance, METH_VARARGS, NULL},
    {sipNm_BALL_getFocalDistance, meth_Stage_getFocalDistance, METH_VARARGS, NULL},
    {sipNm_BALL_getFogIntensity, meth_Stage_getFogIntensity, METH_VARARGS, NULL},
    {sipNm_BALL_getShininess, meth_Stage_getShininess, METH_VARARGS, NULL},
    {sipNm_BALL_getSpecularIntensity, meth_Stage_getSpecularIntensity, METH_VARARGS, NULL},
    {sipNm_BALL_removeLightSource, meth_Stage_removeLightSource, METH_VARARGS, NULL},
    {sipNm_BALL_setAmbientIntensity, meth_Stage_setAmbientIntensity, METH_VARARGS, NULL},
    {sipNm_BALL_setBackgroundColor, meth_Stage_setBackgroundColor, METH_VARARGS, NULL},
    {sipNm_BALL_setCamera, meth_Stage_setCamera, METH_VARARGS, NULL},
    {sipNm_BALL_setDiffuseIntensity, meth_Stage_setDiffuseIntensity, METH_VARARGS, NULL},
    {sipNm_BALL_setEyeDistance, meth_Stage_setEyeDistance, METH_VARARGS, NULL},
    {sipNm_BALL_setFocalDistance, meth_Stage_setFocalDistance, METH_VARARGS, NULL},
    {sipNm_BALL_setFogIntensity, meth_Stage_setFogIntensity, METH_VARARGS, NULL},
    {sipNm_BALL_setShininess, meth_Stage_setShininess, METH_VARARGS, NULL},
    {sipNm_BALL_setSpecularIntensity, meth_Stage_setSpecularIntensity, METH_VARARGS, NULL},
    {sipNm_BALL_setSwapSideBySideStereo, meth_Stage_setSwapSideBySideStereo, METH_VARARGS, NULL},
    {sipNm_BALL_showCoordinateSystem, meth_Stage_showCoordinateSystem, METH_VARARGS, NULL},
    {sipNm_BALL_swapSideBySideStereo, meth_Stage_swapSideBySideStereo, METH_VARARGS, NULL}
};


sipTypeDef sipType_BALL_Stage = {
    0,
    0,
    "BALL.Stage",
    0,
    {0, 0, 1},
    0,
    0,
    28, methods_Stage,
    0, 0,
    0,
    init_Stage,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_Stage,
    cast_Stage,
    release_Stage,
    forceConvertTo_Stage,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
