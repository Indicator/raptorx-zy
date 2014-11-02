/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLRepresentation.h"

#include "sipBALLPropertyManager.h"
#include "sipBALLRepresentation.h"
#include "sipBALLString.h"
#include "sipBALLPreciseTime.h"
#include "sipBALLColorProcessor.h"
#include "sipBALLModelProcessor.h"
#include "sipBALLComposite.h"
#include "sipBALLPyCompositeList.h"
#include "sipBALLGeometricObject.h"
#include "sipBALLGeometricObjectList.h"
#include "sipBALLNamedProperty.h"
#include "sipBALLPosition.h"
#include "sipBALLPersistentObject.h"



extern "C" {static PyObject *meth_Representation_clear(PyObject *, PyObject *);}
static PyObject *meth_Representation_clear(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Representation *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Representation,&sipCpp))
        {
            sipCpp->clear();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Representation,sipNm_BALL_clear);

    return NULL;
}


extern "C" {static PyObject *meth_Representation_setHidden(PyObject *, PyObject *);}
static PyObject *meth_Representation_setHidden(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        bool a0;
        Representation *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bb",&sipSelf,sipClass_Representation,&sipCpp,&a0))
        {
            sipCpp->setHidden(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Representation,sipNm_BALL_setHidden);

    return NULL;
}


extern "C" {static PyObject *meth_Representation_isHidden(PyObject *, PyObject *);}
static PyObject *meth_Representation_isHidden(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Representation *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Representation,&sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isHidden();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Representation,sipNm_BALL_isHidden);

    return NULL;
}


extern "C" {static PyObject *meth_Representation_setDrawingPrecision(PyObject *, PyObject *);}
static PyObject *meth_Representation_setDrawingPrecision(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        DrawingPrecision a0;
        Representation *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BE",&sipSelf,sipClass_Representation,&sipCpp,sipEnum_DrawingPrecision,&a0))
        {
            sipCpp->setDrawingPrecision(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Representation,sipNm_BALL_setDrawingPrecision);

    return NULL;
}


extern "C" {static PyObject *meth_Representation_getDrawingPrecision(PyObject *, PyObject *);}
static PyObject *meth_Representation_getDrawingPrecision(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Representation *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Representation,&sipCpp))
        {
            DrawingPrecision sipRes;

            sipRes = sipCpp->getDrawingPrecision();

            return sipConvertFromNamedEnum(sipRes,sipEnum_DrawingPrecision);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Representation,sipNm_BALL_getDrawingPrecision);

    return NULL;
}


extern "C" {static PyObject *meth_Representation_setSurfaceDrawingPrecision(PyObject *, PyObject *);}
static PyObject *meth_Representation_setSurfaceDrawingPrecision(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        float a0;
        Representation *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bf",&sipSelf,sipClass_Representation,&sipCpp,&a0))
        {
            sipCpp->setSurfaceDrawingPrecision(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Representation,sipNm_BALL_setSurfaceDrawingPrecision);

    return NULL;
}


extern "C" {static PyObject *meth_Representation_getSurfaceDrawingPrecision(PyObject *, PyObject *);}
static PyObject *meth_Representation_getSurfaceDrawingPrecision(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Representation *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Representation,&sipCpp))
        {
            float sipRes;

            sipRes = sipCpp->getSurfaceDrawingPrecision();

            return PyFloat_FromDouble((double)sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Representation,sipNm_BALL_getSurfaceDrawingPrecision);

    return NULL;
}


extern "C" {static PyObject *meth_Representation_getDrawingMode(PyObject *, PyObject *);}
static PyObject *meth_Representation_getDrawingMode(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Representation *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Representation,&sipCpp))
        {
            DrawingMode sipRes;

            sipRes = sipCpp->getDrawingMode();

            return sipConvertFromNamedEnum(sipRes,sipEnum_DrawingMode);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Representation,sipNm_BALL_getDrawingMode);

    return NULL;
}


extern "C" {static PyObject *meth_Representation_setDrawingMode(PyObject *, PyObject *);}
static PyObject *meth_Representation_setDrawingMode(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        DrawingMode a0;
        Representation *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BE",&sipSelf,sipClass_Representation,&sipCpp,sipEnum_DrawingMode,&a0))
        {
            sipCpp->setDrawingMode(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Representation,sipNm_BALL_setDrawingMode);

    return NULL;
}


extern "C" {static PyObject *meth_Representation_getTransparency(PyObject *, PyObject *);}
static PyObject *meth_Representation_getTransparency(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Representation *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Representation,&sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->getTransparency();

            return PyInt_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Representation,sipNm_BALL_getTransparency);

    return NULL;
}


extern "C" {static PyObject *meth_Representation_setTransparency(PyObject *, PyObject *);}
static PyObject *meth_Representation_setTransparency(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        int a0;
        Representation *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bi",&sipSelf,sipClass_Representation,&sipCpp,&a0))
        {
            sipCpp->setTransparency(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Representation,sipNm_BALL_setTransparency);

    return NULL;
}


extern "C" {static PyObject *meth_Representation_getGeometricObjects(PyObject *, PyObject *);}
static PyObject *meth_Representation_getGeometricObjects(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Representation *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Representation,&sipCpp))
        {
            GeometricObjectList *sipRes;

            sipRes = &sipCpp->getGeometricObjects();

            PyObject *sipResObj = sipConvertFromMappedType(sipRes,sipMappedType_GeometricObjectList,NULL);

            return sipResObj;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Representation,sipNm_BALL_getGeometricObjects);

    return NULL;
}


extern "C" {static PyObject *meth_Representation_setGeometricObjects(PyObject *, PyObject *);}
static PyObject *meth_Representation_setGeometricObjects(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        GeometricObjectList * a0;
        int a0State = 0;
        Representation *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BM1",&sipSelf,sipClass_Representation,&sipCpp,sipMappedType_GeometricObjectList,&a0,&a0State))
        {
            sipCpp->setGeometricObjects(*a0);

            sipReleaseMappedType(a0,sipMappedType_GeometricObjectList,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Representation,sipNm_BALL_setGeometricObjects);

    return NULL;
}


extern "C" {static PyObject *meth_Representation_insert(PyObject *, PyObject *);}
static PyObject *meth_Representation_insert(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        GeometricObject * a0;
        Representation *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJC",&sipSelf,sipClass_Representation,&sipCpp,sipClass_GeometricObject,&a0))
        {
            sipCpp->insert(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Representation,sipNm_BALL_insert);

    return NULL;
}


extern "C" {static PyObject *meth_Representation_getComposites(PyObject *, PyObject *);}
static PyObject *meth_Representation_getComposites(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Representation *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Representation,&sipCpp))
        {
            PyCompositeList *sipRes = 0;

#line 52 "representation.sip"
	PyCompositeList& my_list = *new PyCompositeList;
	List<const Composite*> org_list = sipCpp->getComposites();
	List<const Composite*>::Iterator it = org_list.begin();
	for (; it != org_list.end(); it++)
	{
		my_list.push_back((Composite*)*it);
	}
	sipRes = &my_list;
#line 405 "sipBALLRepresentation.C"

            PyObject *sipResObj = sipConvertFromMappedType(sipRes,sipMappedType_PyCompositeList,NULL);
            delete sipRes;

            return sipResObj;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Representation,sipNm_BALL_getComposites);

    return NULL;
}


extern "C" {static PyObject *meth_Representation_setComposites(PyObject *, PyObject *);}
static PyObject *meth_Representation_setComposites(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const PyCompositeList * a0;
        int a0State = 0;
        Representation *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BM1",&sipSelf,sipClass_Representation,&sipCpp,sipMappedType_PyCompositeList,&a0,&a0State))
        {
#line 64 "representation.sip"
	List<const Composite*> my_list;
	for (PyCompositeList::ConstIterator it = a0->begin(); it != a0->end(); ++it)
	{
		Composite* obj = *it;
		my_list.push_back(obj);
	}
	sipCpp->setComposites(my_list);
#line 441 "sipBALLRepresentation.C"

            sipReleaseMappedType(const_cast<PyCompositeList *>(a0),sipMappedType_PyCompositeList,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Representation,sipNm_BALL_setComposites);

    return NULL;
}


extern "C" {static PyObject *meth_Representation_setComposite(PyObject *, PyObject *);}
static PyObject *meth_Representation_setComposite(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const Composite * a0;
        Representation *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ@",&sipSelf,sipClass_Representation,&sipCpp,sipClass_Composite,&a0))
        {
            sipCpp->setComposite(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Representation,sipNm_BALL_setComposite);

    return NULL;
}


extern "C" {static PyObject *meth_Representation_getModelProcessor(PyObject *, PyObject *);}
static PyObject *meth_Representation_getModelProcessor(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Representation *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Representation,&sipCpp))
        {
            ModelProcessor *sipRes;

            sipRes = sipCpp->getModelProcessor();

            return sipConvertFromInstance(sipRes,sipClass_ModelProcessor,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Representation,sipNm_BALL_getModelProcessor);

    return NULL;
}


extern "C" {static PyObject *meth_Representation_setModelProcessor(PyObject *, PyObject *);}
static PyObject *meth_Representation_setModelProcessor(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        ModelProcessor * a0;
        Representation *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJB",&sipSelf,sipClass_Representation,&sipCpp,sipClass_ModelProcessor,&a0))
        {
            sipCpp->setModelProcessor(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Representation,sipNm_BALL_setModelProcessor);

    return NULL;
}


extern "C" {static PyObject *meth_Representation_getColorProcessor(PyObject *, PyObject *);}
static PyObject *meth_Representation_getColorProcessor(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Representation *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Representation,&sipCpp))
        {
            ColorProcessor *sipRes;

            sipRes = sipCpp->getColorProcessor();

            return sipConvertFromInstance(sipRes,sipClass_ColorProcessor,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Representation,sipNm_BALL_getColorProcessor);

    return NULL;
}


extern "C" {static PyObject *meth_Representation_setColorProcessor(PyObject *, PyObject *);}
static PyObject *meth_Representation_setColorProcessor(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        ColorProcessor * a0;
        Representation *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJB",&sipSelf,sipClass_Representation,&sipCpp,sipClass_ColorProcessor,&a0))
        {
            sipCpp->setColorProcessor(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Representation,sipNm_BALL_setColorProcessor);

    return NULL;
}


extern "C" {static PyObject *meth_Representation_setModelType(PyObject *, PyObject *);}
static PyObject *meth_Representation_setModelType(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        ModelType a0;
        Representation *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BE",&sipSelf,sipClass_Representation,&sipCpp,sipEnum_ModelType,&a0))
        {
            sipCpp->setModelType(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Representation,sipNm_BALL_setModelType);

    return NULL;
}


extern "C" {static PyObject *meth_Representation_getModelType(PyObject *, PyObject *);}
static PyObject *meth_Representation_getModelType(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Representation *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Representation,&sipCpp))
        {
            ModelType sipRes;

            sipRes = sipCpp->getModelType();

            return sipConvertFromNamedEnum(sipRes,sipEnum_ModelType);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Representation,sipNm_BALL_getModelType);

    return NULL;
}


extern "C" {static PyObject *meth_Representation_setColoringMethod(PyObject *, PyObject *);}
static PyObject *meth_Representation_setColoringMethod(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        ColoringMethod a0;
        Representation *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BE",&sipSelf,sipClass_Representation,&sipCpp,sipEnum_ColoringMethod,&a0))
        {
            sipCpp->setColoringMethod(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Representation,sipNm_BALL_setColoringMethod);

    return NULL;
}


extern "C" {static PyObject *meth_Representation_getColoringMethod(PyObject *, PyObject *);}
static PyObject *meth_Representation_getColoringMethod(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Representation *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Representation,&sipCpp))
        {
            ColoringMethod sipRes;

            sipRes = sipCpp->getColoringMethod();

            return sipConvertFromNamedEnum(sipRes,sipEnum_ColoringMethod);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Representation,sipNm_BALL_getColoringMethod);

    return NULL;
}


extern "C" {static PyObject *meth_Representation_enableModelUpdate(PyObject *, PyObject *);}
static PyObject *meth_Representation_enableModelUpdate(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        bool a0;
        Representation *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bb",&sipSelf,sipClass_Representation,&sipCpp,&a0))
        {
            try
            {
            sipCpp->enableModelUpdate(a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Representation,sipNm_BALL_enableModelUpdate);

    return NULL;
}


extern "C" {static PyObject *meth_Representation_enableColoringUpdate(PyObject *, PyObject *);}
static PyObject *meth_Representation_enableColoringUpdate(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        bool a0;
        Representation *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bb",&sipSelf,sipClass_Representation,&sipCpp,&a0))
        {
            try
            {
            sipCpp->enableColoringUpdate(a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Representation,sipNm_BALL_enableColoringUpdate);

    return NULL;
}


extern "C" {static PyObject *meth_Representation_modelUpdateEnabled(PyObject *, PyObject *);}
static PyObject *meth_Representation_modelUpdateEnabled(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Representation *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Representation,&sipCpp))
        {
            bool sipRes;

            try
            {
            sipRes = sipCpp->modelUpdateEnabled();
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Representation,sipNm_BALL_modelUpdateEnabled);

    return NULL;
}


extern "C" {static PyObject *meth_Representation_coloringUpdateEnabled(PyObject *, PyObject *);}
static PyObject *meth_Representation_coloringUpdateEnabled(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Representation *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Representation,&sipCpp))
        {
            bool sipRes;

            try
            {
            sipRes = sipCpp->coloringUpdateEnabled();
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Representation,sipNm_BALL_coloringUpdateEnabled);

    return NULL;
}


extern "C" {static PyObject *meth_Representation_getProperties(PyObject *, PyObject *);}
static PyObject *meth_Representation_getProperties(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Representation *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Representation,&sipCpp))
        {
            String *sipRes;

            sipRes = new String(sipCpp->getProperties());

            return sipConvertFromNewInstance(sipRes,sipClass_String,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Representation,sipNm_BALL_getProperties);

    return NULL;
}


extern "C" {static PyObject *meth_Representation_isValid(PyObject *, PyObject *);}
static PyObject *meth_Representation_isValid(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Representation *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Representation,&sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isValid();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Representation,sipNm_BALL_isValid);

    return NULL;
}


extern "C" {static PyObject *meth_Representation_update(PyObject *, PyObject *);}
static PyObject *meth_Representation_update(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        bool a0;
        Representation *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bb",&sipSelf,sipClass_Representation,&sipCpp,&a0))
        {
            sipCpp->update(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Representation,sipNm_BALL_update);

    return NULL;
}


extern "C" {static PyObject *meth_Representation_clearGeometricObjects(PyObject *, PyObject *);}
static PyObject *meth_Representation_clearGeometricObjects(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Representation *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Representation,&sipCpp))
        {
            sipCpp->clearGeometricObjects();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Representation,sipNm_BALL_clearGeometricObjects);

    return NULL;
}


extern "C" {static PyObject *meth_Representation_getModelBuildTime(PyObject *, PyObject *);}
static PyObject *meth_Representation_getModelBuildTime(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Representation *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Representation,&sipCpp))
        {
            const PreciseTime *sipRes;

            sipRes = &sipCpp->getModelBuildTime();

            return sipConvertFromInstance(const_cast<PreciseTime *>(sipRes),sipClass_PreciseTime,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Representation,sipNm_BALL_getModelBuildTime);

    return NULL;
}


extern "C" {static PyObject *meth_Representation_needsUpdate(PyObject *, PyObject *);}
static PyObject *meth_Representation_needsUpdate(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Representation *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Representation,&sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->needsUpdate();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Representation,sipNm_BALL_needsUpdate);

    return NULL;
}


extern "C" {static PyObject *meth_Representation_setNeedsUpdate(PyObject *, PyObject *);}
static PyObject *meth_Representation_setNeedsUpdate(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Representation *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Representation,&sipCpp))
        {
            sipCpp->setNeedsUpdate();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Representation,sipNm_BALL_setNeedsUpdate);

    return NULL;
}


extern "C" {static PyObject *meth_Representation_toString(PyObject *, PyObject *);}
static PyObject *meth_Representation_toString(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Representation *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Representation,&sipCpp))
        {
            String *sipRes;

            sipRes = new String(sipCpp->toString());

            return sipConvertFromNewInstance(sipRes,sipClass_String,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Representation,sipNm_BALL_toString);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_Representation(void *, sipWrapperType *);}
static void *cast_Representation(void *ptr,sipWrapperType *targetClass)
{
    void *res;

    if (targetClass == sipClass_Representation)
        return ptr;

    if ((res = sipCast_PropertyManager((PropertyManager *)(Representation *)ptr,targetClass)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_Representation(void *, int);}
static void release_Representation(void *ptr,int)
{
    delete reinterpret_cast<Representation *>(ptr);
}


extern "C" {static void dealloc_Representation(sipWrapper *);}
static void dealloc_Representation(sipWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_Representation(sipSelf->u.cppPtr,0);
    }
}


extern "C" {static void *init_Representation(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_Representation(sipWrapper *,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    Representation *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            sipCpp = new Representation();
        }
    }

    if (!sipCpp)
    {
        ModelType a0;
        DrawingPrecision a1;
        DrawingMode a2;

        if (sipParseArgs(sipArgsParsed,sipArgs,"EEE",sipEnum_ModelType,&a0,sipEnum_DrawingPrecision,&a1,sipEnum_DrawingMode,&a2))
        {
            sipCpp = new Representation(a0,a1,a2);
        }
    }

    if (!sipCpp)
    {
        const Representation * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_Representation,&a0))
        {
            sipCpp = new Representation(*a0);
        }
    }

    return sipCpp;
}


extern "C" {static void *forceConvertTo_Representation(PyObject *, int *);}
static void *forceConvertTo_Representation(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_Representation))
        return sipConvertToCpp(valobj,sipClass_Representation,iserrp);

    sipBadClass(sipNm_BALL_Representation);

    *iserrp = 1;

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedClassDef supers_Representation[] = {{191, 255, 1}};


static PyMethodDef methods_Representation[] = {
    {sipNm_BALL_clear, meth_Representation_clear, METH_VARARGS, NULL},
    {sipNm_BALL_clearGeometricObjects, meth_Representation_clearGeometricObjects, METH_VARARGS, NULL},
    {sipNm_BALL_coloringUpdateEnabled, meth_Representation_coloringUpdateEnabled, METH_VARARGS, NULL},
    {sipNm_BALL_enableColoringUpdate, meth_Representation_enableColoringUpdate, METH_VARARGS, NULL},
    {sipNm_BALL_enableModelUpdate, meth_Representation_enableModelUpdate, METH_VARARGS, NULL},
    {sipNm_BALL_getColorProcessor, meth_Representation_getColorProcessor, METH_VARARGS, NULL},
    {sipNm_BALL_getColoringMethod, meth_Representation_getColoringMethod, METH_VARARGS, NULL},
    {sipNm_BALL_getComposites, meth_Representation_getComposites, METH_VARARGS, NULL},
    {sipNm_BALL_getDrawingMode, meth_Representation_getDrawingMode, METH_VARARGS, NULL},
    {sipNm_BALL_getDrawingPrecision, meth_Representation_getDrawingPrecision, METH_VARARGS, NULL},
    {sipNm_BALL_getGeometricObjects, meth_Representation_getGeometricObjects, METH_VARARGS, NULL},
    {sipNm_BALL_getModelBuildTime, meth_Representation_getModelBuildTime, METH_VARARGS, NULL},
    {sipNm_BALL_getModelProcessor, meth_Representation_getModelProcessor, METH_VARARGS, NULL},
    {sipNm_BALL_getModelType, meth_Representation_getModelType, METH_VARARGS, NULL},
    {sipNm_BALL_getProperties, meth_Representation_getProperties, METH_VARARGS, NULL},
    {sipNm_BALL_getSurfaceDrawingPrecision, meth_Representation_getSurfaceDrawingPrecision, METH_VARARGS, NULL},
    {sipNm_BALL_getTransparency, meth_Representation_getTransparency, METH_VARARGS, NULL},
    {sipNm_BALL_insert, meth_Representation_insert, METH_VARARGS, NULL},
    {sipNm_BALL_isHidden, meth_Representation_isHidden, METH_VARARGS, NULL},
    {sipNm_BALL_isValid, meth_Representation_isValid, METH_VARARGS, NULL},
    {sipNm_BALL_modelUpdateEnabled, meth_Representation_modelUpdateEnabled, METH_VARARGS, NULL},
    {sipNm_BALL_needsUpdate, meth_Representation_needsUpdate, METH_VARARGS, NULL},
    {sipNm_BALL_setColorProcessor, meth_Representation_setColorProcessor, METH_VARARGS, NULL},
    {sipNm_BALL_setColoringMethod, meth_Representation_setColoringMethod, METH_VARARGS, NULL},
    {sipNm_BALL_setComposite, meth_Representation_setComposite, METH_VARARGS, NULL},
    {sipNm_BALL_setComposites, meth_Representation_setComposites, METH_VARARGS, NULL},
    {sipNm_BALL_setDrawingMode, meth_Representation_setDrawingMode, METH_VARARGS, NULL},
    {sipNm_BALL_setDrawingPrecision, meth_Representation_setDrawingPrecision, METH_VARARGS, NULL},
    {sipNm_BALL_setGeometricObjects, meth_Representation_setGeometricObjects, METH_VARARGS, NULL},
    {sipNm_BALL_setHidden, meth_Representation_setHidden, METH_VARARGS, NULL},
    {sipNm_BALL_setModelProcessor, meth_Representation_setModelProcessor, METH_VARARGS, NULL},
    {sipNm_BALL_setModelType, meth_Representation_setModelType, METH_VARARGS, NULL},
    {sipNm_BALL_setNeedsUpdate, meth_Representation_setNeedsUpdate, METH_VARARGS, NULL},
    {sipNm_BALL_setSurfaceDrawingPrecision, meth_Representation_setSurfaceDrawingPrecision, METH_VARARGS, NULL},
    {sipNm_BALL_setTransparency, meth_Representation_setTransparency, METH_VARARGS, NULL},
    {sipNm_BALL_toString, meth_Representation_toString, METH_VARARGS, NULL},
    {sipNm_BALL_update, meth_Representation_update, METH_VARARGS, NULL}
};

static sipEnumMemberDef enummembers_Representation[] = {
    {sipNm_BALL_PROPERTY__ALWAYS_FRONT, Representation::PROPERTY__ALWAYS_FRONT, 7},
    {sipNm_BALL_PROPERTY__IS_COORDINATE_SYSTEM, Representation::PROPERTY__IS_COORDINATE_SYSTEM, 7},
};


sipTypeDef sipType_BALL_Representation = {
    0,
    0,
    "BALL.Representation",
    0,
    {0, 0, 1},
    supers_Representation,
    0,
    37, methods_Representation,
    2, enummembers_Representation,
    0,
    init_Representation,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_Representation,
    cast_Representation,
    release_Representation,
    forceConvertTo_Representation,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
