/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLColorMap.h"

#include "sipBALLColorRGBA.h"
#include "sipBALLIndex.h"
#include "sipBALLColorMap.h"
#include "sipBALLPyColorRGBAVector.h"



extern "C" {static PyObject *meth_ColorMap_setBaseColors(PyObject *, PyObject *);}
static PyObject *meth_ColorMap_setBaseColors(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const PyColorRGBAVector * a0;
        int a0State = 0;
        ColorMap *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BM1",&sipSelf,sipClass_ColorMap,&sipCpp,sipMappedType_PyColorRGBAVector,&a0,&a0State))
        {
#line 22 "colorMap.sip"
		sipCpp->clear();
		for (Position p = 0; p < (*a0).size(); p++)
		{
			sipCpp->push_back((*a0)[p]);
		}
#line 39 "sipBALLColorMap.C"

            sipReleaseMappedType(const_cast<PyColorRGBAVector *>(a0),sipMappedType_PyColorRGBAVector,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_ColorMap,sipNm_BALL_setBaseColors);

    return NULL;
}


extern "C" {static PyObject *meth_ColorMap_setNumberOfColors(PyObject *, PyObject *);}
static PyObject *meth_ColorMap_setNumberOfColors(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        int a0;
        ColorMap *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bi",&sipSelf,sipClass_ColorMap,&sipCpp,&a0))
        {
            sipCpp->setNumberOfColors(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_ColorMap,sipNm_BALL_setNumberOfColors);

    return NULL;
}


extern "C" {static PyObject *meth_ColorMap_getNumberOfColors(PyObject *, PyObject *);}
static PyObject *meth_ColorMap_getNumberOfColors(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        ColorMap *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_ColorMap,&sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->getNumberOfColors();

            return PyInt_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_ColorMap,sipNm_BALL_getNumberOfColors);

    return NULL;
}


extern "C" {static PyObject *meth_ColorMap_setAlphaBlending(PyObject *, PyObject *);}
static PyObject *meth_ColorMap_setAlphaBlending(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        bool a0;
        ColorMap *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bb",&sipSelf,sipClass_ColorMap,&sipCpp,&a0))
        {
            sipCpp->setAlphaBlending(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_ColorMap,sipNm_BALL_setAlphaBlending);

    return NULL;
}


extern "C" {static PyObject *meth_ColorMap_getAlphaBlending(PyObject *, PyObject *);}
static PyObject *meth_ColorMap_getAlphaBlending(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        ColorMap *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_ColorMap,&sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->getAlphaBlending();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_ColorMap,sipNm_BALL_getAlphaBlending);

    return NULL;
}


extern "C" {static PyObject *meth_ColorMap_createMap(PyObject *, PyObject *);}
static PyObject *meth_ColorMap_createMap(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        ColorMap *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_ColorMap,&sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->createMap();

            return PyInt_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_ColorMap,sipNm_BALL_createMap);

    return NULL;
}


extern "C" {static PyObject *meth_ColorMap_setMinMaxColors(PyObject *, PyObject *);}
static PyObject *meth_ColorMap_setMinMaxColors(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        ColorRGBA * a0;
        ColorRGBA * a1;
        ColorMap *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJAJA",&sipSelf,sipClass_ColorMap,&sipCpp,sipClass_ColorRGBA,&a0,sipClass_ColorRGBA,&a1))
        {
            sipCpp->setMinMaxColors(*a0,*a1);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_ColorMap,sipNm_BALL_setMinMaxColors);

    return NULL;
}


extern "C" {static PyObject *meth_ColorMap_setRange(PyObject *, PyObject *);}
static PyObject *meth_ColorMap_setRange(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        float a0;
        float a1;
        ColorMap *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bff",&sipSelf,sipClass_ColorMap,&sipCpp,&a0,&a1))
        {
            sipCpp->setRange(a0,a1);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_ColorMap,sipNm_BALL_setRange);

    return NULL;
}


extern "C" {static PyObject *meth_ColorMap_map(PyObject *, PyObject *);}
static PyObject *meth_ColorMap_map(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        float a0;
        ColorMap *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bf",&sipSelf,sipClass_ColorMap,&sipCpp,&a0))
        {
            ColorRGBA *sipRes;

            sipRes = &sipCpp->map(a0);

            return sipConvertFromInstance(sipRes,sipClass_ColorRGBA,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_ColorMap,sipNm_BALL_map);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_ColorMap(void *, sipWrapperType *);}
static void *cast_ColorMap(void *ptr,sipWrapperType *targetClass)
{
    if (targetClass == sipClass_ColorMap)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_ColorMap(void *, int);}
static void release_ColorMap(void *ptr,int)
{
    delete reinterpret_cast<ColorMap *>(ptr);
}


extern "C" {static void dealloc_ColorMap(sipWrapper *);}
static void dealloc_ColorMap(sipWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_ColorMap(sipSelf->u.cppPtr,0);
    }
}


extern "C" {static void *init_ColorMap(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_ColorMap(sipWrapper *,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    ColorMap *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            sipCpp = new ColorMap();
        }
    }

    if (!sipCpp)
    {
        int a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"i",&a0))
        {
            sipCpp = new ColorMap(a0);
        }
    }

    if (!sipCpp)
    {
        const ColorMap * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_ColorMap,&a0))
        {
            sipCpp = new ColorMap(*a0);
        }
    }

    if (!sipCpp)
    {
        int a0;
        const ColorRGBA * a1;
        bool a2 = 0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"iJA|b",&a0,sipClass_ColorRGBA,&a1,&a2))
        {
            sipCpp = new ColorMap(a0,*a1,a2);
        }
    }

    if (!sipCpp)
    {
        const ColorMap * a0;
        Index * a1;
        int a1State = 0;
        Index * a2;
        int a2State = 0;
        bool a3 = 0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JAM1M1|b",sipClass_ColorMap,&a0,sipMappedType_Index,&a1,&a1State,sipMappedType_Index,&a2,&a2State,&a3))
        {
            sipCpp = new ColorMap(*a0,*a1,*a2,a3);

            sipReleaseMappedType(a1,sipMappedType_Index,a1State);
            sipReleaseMappedType(a2,sipMappedType_Index,a2State);
        }
    }

    if (!sipCpp)
    {
        const ColorRGBA * a0;
        int a1;
        bool a2 = 0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"J@i|b",sipClass_ColorRGBA,&a0,&a1,&a2))
        {
            sipCpp = new ColorMap(a0,a1,a2);
        }
    }

    return sipCpp;
}


extern "C" {static void *forceConvertTo_ColorMap(PyObject *, int *);}
static void *forceConvertTo_ColorMap(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_ColorMap))
        return sipConvertToCpp(valobj,sipClass_ColorMap,iserrp);

    sipBadClass(sipNm_BALL_ColorMap);

    *iserrp = 1;

    return NULL;
}


static PyMethodDef methods_ColorMap[] = {
    {sipNm_BALL_createMap, meth_ColorMap_createMap, METH_VARARGS, NULL},
    {sipNm_BALL_getAlphaBlending, meth_ColorMap_getAlphaBlending, METH_VARARGS, NULL},
    {sipNm_BALL_getNumberOfColors, meth_ColorMap_getNumberOfColors, METH_VARARGS, NULL},
    {sipNm_BALL_map, meth_ColorMap_map, METH_VARARGS, NULL},
    {sipNm_BALL_setAlphaBlending, meth_ColorMap_setAlphaBlending, METH_VARARGS, NULL},
    {sipNm_BALL_setBaseColors, meth_ColorMap_setBaseColors, METH_VARARGS, NULL},
    {sipNm_BALL_setMinMaxColors, meth_ColorMap_setMinMaxColors, METH_VARARGS, NULL},
    {sipNm_BALL_setNumberOfColors, meth_ColorMap_setNumberOfColors, METH_VARARGS, NULL},
    {sipNm_BALL_setRange, meth_ColorMap_setRange, METH_VARARGS, NULL}
};


sipTypeDef sipType_BALL_ColorMap = {
    0,
    0,
    "BALL.ColorMap",
    0,
    {0, 0, 1},
    0,
    0,
    9, methods_ColorMap,
    0, 0,
    0,
    init_ColorMap,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_ColorMap,
    cast_ColorMap,
    release_ColorMap,
    forceConvertTo_ColorMap,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
