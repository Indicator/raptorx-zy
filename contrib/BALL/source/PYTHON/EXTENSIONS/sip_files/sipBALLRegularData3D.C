/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLRegularData3D.h"

#include "sipBALLOutOfMemory.h"
#include "sipBALLOutOfGrid.h"
#include "sipBALLRegularData3D.h"
#include "sipBALLString.h"
#include "sipBALLVector3.h"
#include "sipBALLPosition.h"
#include "sipBALLRegularData3DIndexType.h"



extern "C" {static PyObject *meth_RegularData3D_clear(PyObject *, PyObject *);}
static PyObject *meth_RegularData3D_clear(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        RegularData3D *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_RegularData3D,&sipCpp))
        {
            sipCpp->clear();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_RegularData3D,sipNm_BALL_clear);

    return NULL;
}


extern "C" {static PyObject *meth_RegularData3D_empty(PyObject *, PyObject *);}
static PyObject *meth_RegularData3D_empty(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        RegularData3D *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_RegularData3D,&sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->empty();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_RegularData3D,sipNm_BALL_empty);

    return NULL;
}


extern "C" {static PyObject *meth_RegularData3D_isInside(PyObject *, PyObject *);}
static PyObject *meth_RegularData3D_isInside(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const Vector3 * a0;
        RegularData3D *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_RegularData3D,&sipCpp,sipClass_Vector3,&a0))
        {
            bool sipRes;

            sipRes = sipCpp->isInside(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_RegularData3D,sipNm_BALL_isInside);

    return NULL;
}


extern "C" {static PyObject *meth_RegularData3D_swap(PyObject *, PyObject *);}
static PyObject *meth_RegularData3D_swap(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        RegularData3D * a0;
        RegularData3D *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_RegularData3D,&sipCpp,sipClass_RegularData3D,&a0))
        {
            try
            {
            sipCpp->swap(*a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_RegularData3D,sipNm_BALL_swap);

    return NULL;
}


extern "C" {static PyObject *meth_RegularData3D_getData(PyObject *, PyObject *);}
static PyObject *meth_RegularData3D_getData(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const RegularData3D::IndexType * a0;
        RegularData3D *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_RegularData3D,&sipCpp,sipClass_RegularData3D_IndexType,&a0))
        {
            float sipRes;

            try
            {
            sipRes = sipCpp->getData(*a0);
            }
            catch (OutOfGrid &sipExceptionRef)
            {
                /* Hope that there is a valid copy ctor. */
                OutOfGrid *sipExceptionCopy = new OutOfGrid(sipExceptionRef);

                sipRaiseClassException(sipClass_OutOfGrid,sipExceptionCopy);

                return NULL;
            }

            return PyFloat_FromDouble((double)sipRes);
        }
    }

    {
        Position * a0;
        int a0State = 0;
        RegularData3D *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BM1",&sipSelf,sipClass_RegularData3D,&sipCpp,sipMappedType_Position,&a0,&a0State))
        {
            float sipRes;

            try
            {
            sipRes = sipCpp->getData(*a0);
            }
            catch (OutOfGrid &sipExceptionRef)
            {

            sipReleaseMappedType(a0,sipMappedType_Position,a0State);
                /* Hope that there is a valid copy ctor. */
                OutOfGrid *sipExceptionCopy = new OutOfGrid(sipExceptionRef);

                sipRaiseClassException(sipClass_OutOfGrid,sipExceptionCopy);

                return NULL;
            }

            sipReleaseMappedType(a0,sipMappedType_Position,a0State);

            return PyFloat_FromDouble((double)sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_RegularData3D,sipNm_BALL_getData);

    return NULL;
}


extern "C" {static PyObject *meth_RegularData3D_getInterpolatedValue(PyObject *, PyObject *);}
static PyObject *meth_RegularData3D_getInterpolatedValue(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const Vector3 * a0;
        RegularData3D *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_RegularData3D,&sipCpp,sipClass_Vector3,&a0))
        {
            float sipRes;

            try
            {
            sipRes = sipCpp->getInterpolatedValue(*a0);
            }
            catch (OutOfGrid &sipExceptionRef)
            {
                /* Hope that there is a valid copy ctor. */
                OutOfGrid *sipExceptionCopy = new OutOfGrid(sipExceptionRef);

                sipRaiseClassException(sipClass_OutOfGrid,sipExceptionCopy);

                return NULL;
            }

            return PyFloat_FromDouble((double)sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_RegularData3D,sipNm_BALL_getInterpolatedValue);

    return NULL;
}


extern "C" {static PyObject *meth_RegularData3D_getClosestValue(PyObject *, PyObject *);}
static PyObject *meth_RegularData3D_getClosestValue(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const Vector3 * a0;
        RegularData3D *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_RegularData3D,&sipCpp,sipClass_Vector3,&a0))
        {
            float sipRes;

            try
            {
            sipRes = sipCpp->getClosestValue(*a0);
            }
            catch (OutOfGrid &sipExceptionRef)
            {
                /* Hope that there is a valid copy ctor. */
                OutOfGrid *sipExceptionCopy = new OutOfGrid(sipExceptionRef);

                sipRaiseClassException(sipClass_OutOfGrid,sipExceptionCopy);

                return NULL;
            }

            return PyFloat_FromDouble((double)sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_RegularData3D,sipNm_BALL_getClosestValue);

    return NULL;
}


extern "C" {static PyObject *meth_RegularData3D_getClosestIndex(PyObject *, PyObject *);}
static PyObject *meth_RegularData3D_getClosestIndex(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const Vector3 * a0;
        RegularData3D *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_RegularData3D,&sipCpp,sipClass_Vector3,&a0))
        {
            RegularData3D::IndexType *sipRes;

            try
            {
            sipRes = new RegularData3D::IndexType(sipCpp->getClosestIndex(*a0));
            }
            catch (OutOfGrid &sipExceptionRef)
            {
                /* Hope that there is a valid copy ctor. */
                OutOfGrid *sipExceptionCopy = new OutOfGrid(sipExceptionRef);

                sipRaiseClassException(sipClass_OutOfGrid,sipExceptionCopy);

                return NULL;
            }

            return sipConvertFromNewInstance(sipRes,sipClass_RegularData3D_IndexType,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_RegularData3D,sipNm_BALL_getClosestIndex);

    return NULL;
}


extern "C" {static PyObject *meth_RegularData3D_getLowerIndex(PyObject *, PyObject *);}
static PyObject *meth_RegularData3D_getLowerIndex(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const Vector3 * a0;
        RegularData3D *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_RegularData3D,&sipCpp,sipClass_Vector3,&a0))
        {
            RegularData3D::IndexType *sipRes;

            try
            {
            sipRes = new RegularData3D::IndexType(sipCpp->getLowerIndex(*a0));
            }
            catch (OutOfGrid &sipExceptionRef)
            {
                /* Hope that there is a valid copy ctor. */
                OutOfGrid *sipExceptionCopy = new OutOfGrid(sipExceptionRef);

                sipRaiseClassException(sipClass_OutOfGrid,sipExceptionCopy);

                return NULL;
            }

            return sipConvertFromNewInstance(sipRes,sipClass_RegularData3D_IndexType,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_RegularData3D,sipNm_BALL_getLowerIndex);

    return NULL;
}


extern "C" {static PyObject *meth_RegularData3D_getSize(PyObject *, PyObject *);}
static PyObject *meth_RegularData3D_getSize(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        RegularData3D *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_RegularData3D,&sipCpp))
        {
            const RegularData3D::IndexType *sipRes;

            sipRes = &sipCpp->getSize();

            return sipConvertFromInstance(const_cast<RegularData3D::IndexType *>(sipRes),sipClass_RegularData3D_IndexType,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_RegularData3D,sipNm_BALL_getSize);

    return NULL;
}


extern "C" {static PyObject *meth_RegularData3D_getOrigin(PyObject *, PyObject *);}
static PyObject *meth_RegularData3D_getOrigin(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        RegularData3D *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_RegularData3D,&sipCpp))
        {
            const Vector3 *sipRes;

            sipRes = &sipCpp->getOrigin();

            return sipConvertFromInstance(const_cast<Vector3 *>(sipRes),sipClass_Vector3,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_RegularData3D,sipNm_BALL_getOrigin);

    return NULL;
}


extern "C" {static PyObject *meth_RegularData3D_getSpacing(PyObject *, PyObject *);}
static PyObject *meth_RegularData3D_getSpacing(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        RegularData3D *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_RegularData3D,&sipCpp))
        {
            const Vector3 *sipRes;

            sipRes = &sipCpp->getSpacing();

            return sipConvertFromInstance(const_cast<Vector3 *>(sipRes),sipClass_Vector3,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_RegularData3D,sipNm_BALL_getSpacing);

    return NULL;
}


extern "C" {static PyObject *meth_RegularData3D_setOrigin(PyObject *, PyObject *);}
static PyObject *meth_RegularData3D_setOrigin(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const Vector3 * a0;
        RegularData3D *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_RegularData3D,&sipCpp,sipClass_Vector3,&a0))
        {
            sipCpp->setOrigin(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_RegularData3D,sipNm_BALL_setOrigin);

    return NULL;
}


extern "C" {static PyObject *meth_RegularData3D_getDimension(PyObject *, PyObject *);}
static PyObject *meth_RegularData3D_getDimension(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        RegularData3D *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_RegularData3D,&sipCpp))
        {
            const Vector3 *sipRes;

            sipRes = &sipCpp->getDimension();

            return sipConvertFromInstance(const_cast<Vector3 *>(sipRes),sipClass_Vector3,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_RegularData3D,sipNm_BALL_getDimension);

    return NULL;
}


extern "C" {static PyObject *meth_RegularData3D_setDimension(PyObject *, PyObject *);}
static PyObject *meth_RegularData3D_setDimension(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const Vector3 * a0;
        RegularData3D *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_RegularData3D,&sipCpp,sipClass_Vector3,&a0))
        {
            sipCpp->setDimension(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_RegularData3D,sipNm_BALL_setDimension);

    return NULL;
}


extern "C" {static PyObject *meth_RegularData3D_resize(PyObject *, PyObject *);}
static PyObject *meth_RegularData3D_resize(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const RegularData3D::IndexType * a0;
        RegularData3D *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_RegularData3D,&sipCpp,sipClass_RegularData3D_IndexType,&a0))
        {
            try
            {
            sipCpp->resize(*a0);
            }
            catch (OutOfMemory &sipExceptionRef)
            {
                /* Hope that there is a valid copy ctor. */
                OutOfMemory *sipExceptionCopy = new OutOfMemory(sipExceptionRef);

                sipRaiseClassException(sipClass_OutOfMemory,sipExceptionCopy);

                return NULL;
            }

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_RegularData3D,sipNm_BALL_resize);

    return NULL;
}


extern "C" {static PyObject *meth_RegularData3D_rescale(PyObject *, PyObject *);}
static PyObject *meth_RegularData3D_rescale(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const RegularData3D::IndexType * a0;
        RegularData3D *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_RegularData3D,&sipCpp,sipClass_RegularData3D_IndexType,&a0))
        {
            try
            {
            sipCpp->rescale(*a0);
            }
            catch (OutOfMemory &sipExceptionRef)
            {
                /* Hope that there is a valid copy ctor. */
                OutOfMemory *sipExceptionCopy = new OutOfMemory(sipExceptionRef);

                sipRaiseClassException(sipClass_OutOfMemory,sipExceptionCopy);

                return NULL;
            }

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_RegularData3D,sipNm_BALL_rescale);

    return NULL;
}


extern "C" {static PyObject *meth_RegularData3D_getCoordinates(PyObject *, PyObject *);}
static PyObject *meth_RegularData3D_getCoordinates(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const RegularData3D::IndexType * a0;
        RegularData3D *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_RegularData3D,&sipCpp,sipClass_RegularData3D_IndexType,&a0))
        {
            Vector3 *sipRes;

            try
            {
            sipRes = new Vector3(sipCpp->getCoordinates(*a0));
            }
            catch (OutOfGrid &sipExceptionRef)
            {
                /* Hope that there is a valid copy ctor. */
                OutOfGrid *sipExceptionCopy = new OutOfGrid(sipExceptionRef);

                sipRaiseClassException(sipClass_OutOfGrid,sipExceptionCopy);

                return NULL;
            }

            return sipConvertFromNewInstance(sipRes,sipClass_Vector3,NULL);
        }
    }

    {
        Position * a0;
        int a0State = 0;
        RegularData3D *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BM1",&sipSelf,sipClass_RegularData3D,&sipCpp,sipMappedType_Position,&a0,&a0State))
        {
            Vector3 *sipRes;

            try
            {
            sipRes = new Vector3(sipCpp->getCoordinates(*a0));
            }
            catch (OutOfGrid &sipExceptionRef)
            {

            sipReleaseMappedType(a0,sipMappedType_Position,a0State);
                /* Hope that there is a valid copy ctor. */
                OutOfGrid *sipExceptionCopy = new OutOfGrid(sipExceptionRef);

                sipRaiseClassException(sipClass_OutOfGrid,sipExceptionCopy);

                return NULL;
            }

            sipReleaseMappedType(a0,sipMappedType_Position,a0State);

            return sipConvertFromNewInstance(sipRes,sipClass_Vector3,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_RegularData3D,sipNm_BALL_getCoordinates);

    return NULL;
}


extern "C" {static PyObject *meth_RegularData3D_getEnclosingValues(PyObject *, PyObject *);}
static PyObject *meth_RegularData3D_getEnclosingValues(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const Vector3 * a0;
        float a1;
        float a2;
        float a3;
        float a4;
        float a5;
        float a6;
        float a7;
        float a8;
        RegularData3D *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJAffffffff",&sipSelf,sipClass_RegularData3D,&sipCpp,sipClass_Vector3,&a0,&a1,&a2,&a3,&a4,&a5,&a6,&a7,&a8))
        {
            try
            {
            sipCpp->getEnclosingValues(*a0,a1,a2,a3,a4,a5,a6,a7,a8);
            }
            catch (OutOfGrid &sipExceptionRef)
            {
                /* Hope that there is a valid copy ctor. */
                OutOfGrid *sipExceptionCopy = new OutOfGrid(sipExceptionRef);

                sipRaiseClassException(sipClass_OutOfGrid,sipExceptionCopy);

                return NULL;
            }

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_RegularData3D,sipNm_BALL_getEnclosingValues);

    return NULL;
}


extern "C" {static PyObject *meth_RegularData3D_getEnclosingIndices(PyObject *, PyObject *);}
static PyObject *meth_RegularData3D_getEnclosingIndices(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const Vector3 * a0;
        Position * a1;
        int a1State = 0;
        Position * a2;
        int a2State = 0;
        Position * a3;
        int a3State = 0;
        Position * a4;
        int a4State = 0;
        Position * a5;
        int a5State = 0;
        Position * a6;
        int a6State = 0;
        Position * a7;
        int a7State = 0;
        Position * a8;
        int a8State = 0;
        RegularData3D *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJAM1M1M1M1M1M1M1M1",&sipSelf,sipClass_RegularData3D,&sipCpp,sipClass_Vector3,&a0,sipMappedType_Position,&a1,&a1State,sipMappedType_Position,&a2,&a2State,sipMappedType_Position,&a3,&a3State,sipMappedType_Position,&a4,&a4State,sipMappedType_Position,&a5,&a5State,sipMappedType_Position,&a6,&a6State,sipMappedType_Position,&a7,&a7State,sipMappedType_Position,&a8,&a8State))
        {
            try
            {
            sipCpp->getEnclosingIndices(*a0,*a1,*a2,*a3,*a4,*a5,*a6,*a7,*a8);
            }
            catch (OutOfGrid &sipExceptionRef)
            {

            sipReleaseMappedType(a1,sipMappedType_Position,a1State);
            sipReleaseMappedType(a2,sipMappedType_Position,a2State);
            sipReleaseMappedType(a3,sipMappedType_Position,a3State);
            sipReleaseMappedType(a4,sipMappedType_Position,a4State);
            sipReleaseMappedType(a5,sipMappedType_Position,a5State);
            sipReleaseMappedType(a6,sipMappedType_Position,a6State);
            sipReleaseMappedType(a7,sipMappedType_Position,a7State);
            sipReleaseMappedType(a8,sipMappedType_Position,a8State);
                /* Hope that there is a valid copy ctor. */
                OutOfGrid *sipExceptionCopy = new OutOfGrid(sipExceptionRef);

                sipRaiseClassException(sipClass_OutOfGrid,sipExceptionCopy);

                return NULL;
            }

            sipReleaseMappedType(a1,sipMappedType_Position,a1State);
            sipReleaseMappedType(a2,sipMappedType_Position,a2State);
            sipReleaseMappedType(a3,sipMappedType_Position,a3State);
            sipReleaseMappedType(a4,sipMappedType_Position,a4State);
            sipReleaseMappedType(a5,sipMappedType_Position,a5State);
            sipReleaseMappedType(a6,sipMappedType_Position,a6State);
            sipReleaseMappedType(a7,sipMappedType_Position,a7State);
            sipReleaseMappedType(a8,sipMappedType_Position,a8State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_RegularData3D,sipNm_BALL_getEnclosingIndices);

    return NULL;
}


extern "C" {static PyObject *meth_RegularData3D_binaryWrite(PyObject *, PyObject *);}
static PyObject *meth_RegularData3D_binaryWrite(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const String * a0;
        int a0State = 0;
        RegularData3D *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ1",&sipSelf,sipClass_RegularData3D,&sipCpp,sipClass_String,&a0,&a0State))
        {
            sipCpp->binaryWrite(*a0);

            sipReleaseInstance(const_cast<String *>(a0),sipClass_String,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_RegularData3D,sipNm_BALL_binaryWrite);

    return NULL;
}


extern "C" {static PyObject *meth_RegularData3D_binaryRead(PyObject *, PyObject *);}
static PyObject *meth_RegularData3D_binaryRead(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const String * a0;
        int a0State = 0;
        RegularData3D *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ1",&sipSelf,sipClass_RegularData3D,&sipCpp,sipClass_String,&a0,&a0State))
        {
            sipCpp->binaryRead(*a0);

            sipReleaseInstance(const_cast<String *>(a0),sipClass_String,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_RegularData3D,sipNm_BALL_binaryRead);

    return NULL;
}


extern "C" {static PyObject *slot_RegularData3D___call__(PyObject *sipSelf,PyObject *sipArgs);}
static PyObject *slot_RegularData3D___call__(PyObject *sipSelf,PyObject *sipArgs)
{
    RegularData3D *sipCpp = reinterpret_cast<RegularData3D *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_RegularData3D));

    if (!sipCpp)
        return 0;

    int sipArgsParsed = 0;

    {
        const Vector3 * a0;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"JA",sipClass_Vector3,&a0))
        {
            float sipRes = 0;

#line 87 "regularData3D.sip"
	sipRes = sipCpp->operator () (*a0);
#line 837 "sipBALLRegularData3D.C"

            return PyFloat_FromDouble((double)sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_RegularData3D,sipNm_BALL___call__);

    return 0;
}


extern "C" {static PyObject *slot_RegularData3D___getitem__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_RegularData3D___getitem__(PyObject *sipSelf,PyObject *sipArg)
{
    RegularData3D *sipCpp = reinterpret_cast<RegularData3D *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_RegularData3D));

    if (!sipCpp)
        return 0;

    int sipArgsParsed = 0;

    {
        Position * a0;
        int a0State = 0;

        if (sipParseArgs(&sipArgsParsed,sipArg,"M1",sipMappedType_Position,&a0,&a0State))
        {
            float sipRes = 0;

#line 82 "regularData3D.sip"
	sipRes = sipCpp->operator [] (*a0);
#line 870 "sipBALLRegularData3D.C"

            sipReleaseMappedType(a0,sipMappedType_Position,a0State);

            return PyFloat_FromDouble((double)sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_RegularData3D,sipNm_BALL___getitem__);

    return 0;
}


extern "C" {static PyObject *slot_RegularData3D___eq__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_RegularData3D___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    RegularData3D *sipCpp = reinterpret_cast<RegularData3D *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_RegularData3D));

    if (!sipCpp)
        return 0;

    int sipArgsParsed = 0;

    {
        const RegularData3D * a0;

        if (sipParseArgs(&sipArgsParsed,sipArg,"JA",sipClass_RegularData3D,&a0))
        {
            bool sipRes;

            sipRes = ((*sipCpp) == *a0);

            return PyBool_FromLong(sipRes);
        }
    }

    return sipPySlotExtend(&sipModuleAPI_BALL,eq_slot,sipClass_RegularData3D,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_RegularData3D___ne__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_RegularData3D___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    RegularData3D *sipCpp = reinterpret_cast<RegularData3D *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_RegularData3D));

    if (!sipCpp)
        return 0;

    int sipArgsParsed = 0;

    {
        const RegularData3D * a0;

        if (sipParseArgs(&sipArgsParsed,sipArg,"JA",sipClass_RegularData3D,&a0))
        {
            bool sipRes;

            sipRes = ((*sipCpp) != *a0);

            return PyBool_FromLong(sipRes);
        }
    }

    return sipPySlotExtend(&sipModuleAPI_BALL,ne_slot,sipClass_RegularData3D,sipSelf,sipArg);
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_RegularData3D(void *, sipWrapperType *);}
static void *cast_RegularData3D(void *ptr,sipWrapperType *targetClass)
{
    if (targetClass == sipClass_RegularData3D)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_RegularData3D(void *, int);}
static void release_RegularData3D(void *ptr,int)
{
    delete reinterpret_cast<RegularData3D *>(ptr);
}


extern "C" {static void dealloc_RegularData3D(sipWrapper *);}
static void dealloc_RegularData3D(sipWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_RegularData3D(sipSelf->u.cppPtr,0);
    }
}


extern "C" {static void *init_RegularData3D(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_RegularData3D(sipWrapper *,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    RegularData3D *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            sipCpp = new RegularData3D();
        }
    }

    if (!sipCpp)
    {
        const RegularData3D * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_RegularData3D,&a0))
        {
            try
            {
            sipCpp = new RegularData3D(*a0);
            }
            catch (OutOfMemory &sipExceptionRef)
            {
                /* Hope that there is a valid copy ctor. */
                OutOfMemory *sipExceptionCopy = new OutOfMemory(sipExceptionRef);

                sipRaiseClassException(sipClass_OutOfMemory,sipExceptionCopy);

                return NULL;
            }
        }
    }

    return sipCpp;
}


extern "C" {static void *forceConvertTo_RegularData3D(PyObject *, int *);}
static void *forceConvertTo_RegularData3D(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_RegularData3D))
        return sipConvertToCpp(valobj,sipClass_RegularData3D,iserrp);

    sipBadClass(sipNm_BALL_RegularData3D);

    *iserrp = 1;

    return NULL;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_RegularData3D[] = {
    {(void *)slot_RegularData3D___call__, call_slot},
    {(void *)slot_RegularData3D___getitem__, getitem_slot},
    {(void *)slot_RegularData3D___eq__, eq_slot},
    {(void *)slot_RegularData3D___ne__, ne_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_RegularData3D[] = {
    {sipNm_BALL_binaryRead, meth_RegularData3D_binaryRead, METH_VARARGS, NULL},
    {sipNm_BALL_binaryWrite, meth_RegularData3D_binaryWrite, METH_VARARGS, NULL},
    {sipNm_BALL_clear, meth_RegularData3D_clear, METH_VARARGS, NULL},
    {sipNm_BALL_empty, meth_RegularData3D_empty, METH_VARARGS, NULL},
    {sipNm_BALL_getClosestIndex, meth_RegularData3D_getClosestIndex, METH_VARARGS, NULL},
    {sipNm_BALL_getClosestValue, meth_RegularData3D_getClosestValue, METH_VARARGS, NULL},
    {sipNm_BALL_getCoordinates, meth_RegularData3D_getCoordinates, METH_VARARGS, NULL},
    {sipNm_BALL_getData, meth_RegularData3D_getData, METH_VARARGS, NULL},
    {sipNm_BALL_getDimension, meth_RegularData3D_getDimension, METH_VARARGS, NULL},
    {sipNm_BALL_getEnclosingIndices, meth_RegularData3D_getEnclosingIndices, METH_VARARGS, NULL},
    {sipNm_BALL_getEnclosingValues, meth_RegularData3D_getEnclosingValues, METH_VARARGS, NULL},
    {sipNm_BALL_getInterpolatedValue, meth_RegularData3D_getInterpolatedValue, METH_VARARGS, NULL},
    {sipNm_BALL_getLowerIndex, meth_RegularData3D_getLowerIndex, METH_VARARGS, NULL},
    {sipNm_BALL_getOrigin, meth_RegularData3D_getOrigin, METH_VARARGS, NULL},
    {sipNm_BALL_getSize, meth_RegularData3D_getSize, METH_VARARGS, NULL},
    {sipNm_BALL_getSpacing, meth_RegularData3D_getSpacing, METH_VARARGS, NULL},
    {sipNm_BALL_isInside, meth_RegularData3D_isInside, METH_VARARGS, NULL},
    {sipNm_BALL_rescale, meth_RegularData3D_rescale, METH_VARARGS, NULL},
    {sipNm_BALL_resize, meth_RegularData3D_resize, METH_VARARGS, NULL},
    {sipNm_BALL_setDimension, meth_RegularData3D_setDimension, METH_VARARGS, NULL},
    {sipNm_BALL_setOrigin, meth_RegularData3D_setOrigin, METH_VARARGS, NULL},
    {sipNm_BALL_swap, meth_RegularData3D_swap, METH_VARARGS, NULL}
};


sipTypeDef sipType_BALL_RegularData3D = {
    0,
    0,
    "BALL.RegularData3D",
    0,
    {0, 0, 1},
    0,
    slots_RegularData3D,
    22, methods_RegularData3D,
    0, 0,
    0,
    init_RegularData3D,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_RegularData3D,
    cast_RegularData3D,
    release_RegularData3D,
    forceConvertTo_RegularData3D,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
