/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLRegularData2D.h"

#include "sipBALLOutOfMemory.h"
#include "sipBALLOutOfGrid.h"
#include "sipBALLVector2.h"
#include "sipBALLRegularData2DIndexType.h"
#include "sipBALLRegularData2D.h"
#include "sipBALLString.h"
#include "sipBALLPosition.h"



extern "C" {static PyObject *meth_RegularData2D_clear(PyObject *, PyObject *);}
static PyObject *meth_RegularData2D_clear(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        RegularData2D *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_RegularData2D,&sipCpp))
        {
            sipCpp->clear();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_RegularData2D,sipNm_BALL_clear);

    return NULL;
}


extern "C" {static PyObject *meth_RegularData2D_empty(PyObject *, PyObject *);}
static PyObject *meth_RegularData2D_empty(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        RegularData2D *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_RegularData2D,&sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->empty();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_RegularData2D,sipNm_BALL_empty);

    return NULL;
}


extern "C" {static PyObject *meth_RegularData2D_isInside(PyObject *, PyObject *);}
static PyObject *meth_RegularData2D_isInside(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const Vector2 * a0;
        RegularData2D *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_RegularData2D,&sipCpp,sipClass_Vector2,&a0))
        {
            bool sipRes;

            sipRes = sipCpp->isInside(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_RegularData2D,sipNm_BALL_isInside);

    return NULL;
}


extern "C" {static PyObject *meth_RegularData2D_swap(PyObject *, PyObject *);}
static PyObject *meth_RegularData2D_swap(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        RegularData2D * a0;
        RegularData2D *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_RegularData2D,&sipCpp,sipClass_RegularData2D,&a0))
        {
            sipCpp->swap(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_RegularData2D,sipNm_BALL_swap);

    return NULL;
}


extern "C" {static PyObject *meth_RegularData2D_getData(PyObject *, PyObject *);}
static PyObject *meth_RegularData2D_getData(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const RegularData2D::IndexType * a0;
        RegularData2D *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_RegularData2D,&sipCpp,sipClass_RegularData2D_IndexType,&a0))
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

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_RegularData2D,sipNm_BALL_getData);

    return NULL;
}


extern "C" {static PyObject *meth_RegularData2D_getInterpolatedValue(PyObject *, PyObject *);}
static PyObject *meth_RegularData2D_getInterpolatedValue(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const Vector2 * a0;
        RegularData2D *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_RegularData2D,&sipCpp,sipClass_Vector2,&a0))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_RegularData2D,sipNm_BALL_getInterpolatedValue);

    return NULL;
}


extern "C" {static PyObject *meth_RegularData2D_getClosestValue(PyObject *, PyObject *);}
static PyObject *meth_RegularData2D_getClosestValue(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const Vector2 * a0;
        RegularData2D *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_RegularData2D,&sipCpp,sipClass_Vector2,&a0))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_RegularData2D,sipNm_BALL_getClosestValue);

    return NULL;
}


extern "C" {static PyObject *meth_RegularData2D_getLowerIndex(PyObject *, PyObject *);}
static PyObject *meth_RegularData2D_getLowerIndex(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const Vector2 * a0;
        RegularData2D *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_RegularData2D,&sipCpp,sipClass_Vector2,&a0))
        {
            RegularData2D::IndexType *sipRes;

            try
            {
            sipRes = new RegularData2D::IndexType(sipCpp->getLowerIndex(*a0));
            }
            catch (OutOfGrid &sipExceptionRef)
            {
                /* Hope that there is a valid copy ctor. */
                OutOfGrid *sipExceptionCopy = new OutOfGrid(sipExceptionRef);

                sipRaiseClassException(sipClass_OutOfGrid,sipExceptionCopy);

                return NULL;
            }

            return sipConvertFromNewInstance(sipRes,sipClass_RegularData2D_IndexType,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_RegularData2D,sipNm_BALL_getLowerIndex);

    return NULL;
}


extern "C" {static PyObject *meth_RegularData2D_getClosestIndex(PyObject *, PyObject *);}
static PyObject *meth_RegularData2D_getClosestIndex(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const Vector2 * a0;
        RegularData2D *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_RegularData2D,&sipCpp,sipClass_Vector2,&a0))
        {
            RegularData2D::IndexType *sipRes;

            try
            {
            sipRes = new RegularData2D::IndexType(sipCpp->getClosestIndex(*a0));
            }
            catch (OutOfGrid &sipExceptionRef)
            {
                /* Hope that there is a valid copy ctor. */
                OutOfGrid *sipExceptionCopy = new OutOfGrid(sipExceptionRef);

                sipRaiseClassException(sipClass_OutOfGrid,sipExceptionCopy);

                return NULL;
            }

            return sipConvertFromNewInstance(sipRes,sipClass_RegularData2D_IndexType,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_RegularData2D,sipNm_BALL_getClosestIndex);

    return NULL;
}


extern "C" {static PyObject *meth_RegularData2D_getSize(PyObject *, PyObject *);}
static PyObject *meth_RegularData2D_getSize(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        RegularData2D *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_RegularData2D,&sipCpp))
        {
            const RegularData2D::IndexType *sipRes;

            sipRes = &sipCpp->getSize();

            return sipConvertFromInstance(const_cast<RegularData2D::IndexType *>(sipRes),sipClass_RegularData2D_IndexType,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_RegularData2D,sipNm_BALL_getSize);

    return NULL;
}


extern "C" {static PyObject *meth_RegularData2D_getOrigin(PyObject *, PyObject *);}
static PyObject *meth_RegularData2D_getOrigin(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        RegularData2D *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_RegularData2D,&sipCpp))
        {
            const Vector2 *sipRes;

            sipRes = &sipCpp->getOrigin();

            return sipConvertFromInstance(const_cast<Vector2 *>(sipRes),sipClass_Vector2,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_RegularData2D,sipNm_BALL_getOrigin);

    return NULL;
}


extern "C" {static PyObject *meth_RegularData2D_getSpacing(PyObject *, PyObject *);}
static PyObject *meth_RegularData2D_getSpacing(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        RegularData2D *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_RegularData2D,&sipCpp))
        {
            const Vector2 *sipRes;

            sipRes = &sipCpp->getSpacing();

            return sipConvertFromInstance(const_cast<Vector2 *>(sipRes),sipClass_Vector2,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_RegularData2D,sipNm_BALL_getSpacing);

    return NULL;
}


extern "C" {static PyObject *meth_RegularData2D_setOrigin(PyObject *, PyObject *);}
static PyObject *meth_RegularData2D_setOrigin(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const Vector2 * a0;
        RegularData2D *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_RegularData2D,&sipCpp,sipClass_Vector2,&a0))
        {
            sipCpp->setOrigin(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_RegularData2D,sipNm_BALL_setOrigin);

    return NULL;
}


extern "C" {static PyObject *meth_RegularData2D_getDimension(PyObject *, PyObject *);}
static PyObject *meth_RegularData2D_getDimension(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        RegularData2D *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_RegularData2D,&sipCpp))
        {
            const Vector2 *sipRes;

            sipRes = &sipCpp->getDimension();

            return sipConvertFromInstance(const_cast<Vector2 *>(sipRes),sipClass_Vector2,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_RegularData2D,sipNm_BALL_getDimension);

    return NULL;
}


extern "C" {static PyObject *meth_RegularData2D_setDimension(PyObject *, PyObject *);}
static PyObject *meth_RegularData2D_setDimension(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const Vector2 * a0;
        RegularData2D *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_RegularData2D,&sipCpp,sipClass_Vector2,&a0))
        {
            sipCpp->setDimension(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_RegularData2D,sipNm_BALL_setDimension);

    return NULL;
}


extern "C" {static PyObject *meth_RegularData2D_resize(PyObject *, PyObject *);}
static PyObject *meth_RegularData2D_resize(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const RegularData2D::IndexType * a0;
        RegularData2D *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_RegularData2D,&sipCpp,sipClass_RegularData2D_IndexType,&a0))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_RegularData2D,sipNm_BALL_resize);

    return NULL;
}


extern "C" {static PyObject *meth_RegularData2D_rescale(PyObject *, PyObject *);}
static PyObject *meth_RegularData2D_rescale(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const RegularData2D::IndexType * a0;
        RegularData2D *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_RegularData2D,&sipCpp,sipClass_RegularData2D_IndexType,&a0))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_RegularData2D,sipNm_BALL_rescale);

    return NULL;
}


extern "C" {static PyObject *meth_RegularData2D_getCoordinates(PyObject *, PyObject *);}
static PyObject *meth_RegularData2D_getCoordinates(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const RegularData2D::IndexType * a0;
        RegularData2D *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_RegularData2D,&sipCpp,sipClass_RegularData2D_IndexType,&a0))
        {
            Vector2 *sipRes;

            try
            {
            sipRes = new Vector2(sipCpp->getCoordinates(*a0));
            }
            catch (OutOfGrid &sipExceptionRef)
            {
                /* Hope that there is a valid copy ctor. */
                OutOfGrid *sipExceptionCopy = new OutOfGrid(sipExceptionRef);

                sipRaiseClassException(sipClass_OutOfGrid,sipExceptionCopy);

                return NULL;
            }

            return sipConvertFromNewInstance(sipRes,sipClass_Vector2,NULL);
        }
    }

    {
        Position * a0;
        int a0State = 0;
        RegularData2D *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BM1",&sipSelf,sipClass_RegularData2D,&sipCpp,sipMappedType_Position,&a0,&a0State))
        {
            Vector2 *sipRes;

            try
            {
            sipRes = new Vector2(sipCpp->getCoordinates(*a0));
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

            return sipConvertFromNewInstance(sipRes,sipClass_Vector2,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_RegularData2D,sipNm_BALL_getCoordinates);

    return NULL;
}


extern "C" {static PyObject *meth_RegularData2D_getEnclosingIndices(PyObject *, PyObject *);}
static PyObject *meth_RegularData2D_getEnclosingIndices(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const Vector2 * a0;
        Position * a1;
        int a1State = 0;
        Position * a2;
        int a2State = 0;
        Position * a3;
        int a3State = 0;
        Position * a4;
        int a4State = 0;
        RegularData2D *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJAM1M1M1M1",&sipSelf,sipClass_RegularData2D,&sipCpp,sipClass_Vector2,&a0,sipMappedType_Position,&a1,&a1State,sipMappedType_Position,&a2,&a2State,sipMappedType_Position,&a3,&a3State,sipMappedType_Position,&a4,&a4State))
        {
            try
            {
            sipCpp->getEnclosingIndices(*a0,*a1,*a2,*a3,*a4);
            }
            catch (OutOfGrid &sipExceptionRef)
            {

            sipReleaseMappedType(a1,sipMappedType_Position,a1State);
            sipReleaseMappedType(a2,sipMappedType_Position,a2State);
            sipReleaseMappedType(a3,sipMappedType_Position,a3State);
            sipReleaseMappedType(a4,sipMappedType_Position,a4State);
                /* Hope that there is a valid copy ctor. */
                OutOfGrid *sipExceptionCopy = new OutOfGrid(sipExceptionRef);

                sipRaiseClassException(sipClass_OutOfGrid,sipExceptionCopy);

                return NULL;
            }

            sipReleaseMappedType(a1,sipMappedType_Position,a1State);
            sipReleaseMappedType(a2,sipMappedType_Position,a2State);
            sipReleaseMappedType(a3,sipMappedType_Position,a3State);
            sipReleaseMappedType(a4,sipMappedType_Position,a4State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_RegularData2D,sipNm_BALL_getEnclosingIndices);

    return NULL;
}


extern "C" {static PyObject *meth_RegularData2D_getEnclosingValues(PyObject *, PyObject *);}
static PyObject *meth_RegularData2D_getEnclosingValues(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const Vector2 * a0;
        float a1;
        float a2;
        float a3;
        float a4;
        RegularData2D *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJAffff",&sipSelf,sipClass_RegularData2D,&sipCpp,sipClass_Vector2,&a0,&a1,&a2,&a3,&a4))
        {
            try
            {
            sipCpp->getEnclosingValues(*a0,a1,a2,a3,a4);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_RegularData2D,sipNm_BALL_getEnclosingValues);

    return NULL;
}


extern "C" {static PyObject *meth_RegularData2D_binaryWrite(PyObject *, PyObject *);}
static PyObject *meth_RegularData2D_binaryWrite(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const String * a0;
        int a0State = 0;
        RegularData2D *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ1",&sipSelf,sipClass_RegularData2D,&sipCpp,sipClass_String,&a0,&a0State))
        {
            sipCpp->binaryWrite(*a0);

            sipReleaseInstance(const_cast<String *>(a0),sipClass_String,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_RegularData2D,sipNm_BALL_binaryWrite);

    return NULL;
}


extern "C" {static PyObject *meth_RegularData2D_binaryRead(PyObject *, PyObject *);}
static PyObject *meth_RegularData2D_binaryRead(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const String * a0;
        int a0State = 0;
        RegularData2D *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ1",&sipSelf,sipClass_RegularData2D,&sipCpp,sipClass_String,&a0,&a0State))
        {
            sipCpp->binaryRead(*a0);

            sipReleaseInstance(const_cast<String *>(a0),sipClass_String,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_RegularData2D,sipNm_BALL_binaryRead);

    return NULL;
}


extern "C" {static PyObject *slot_RegularData2D___call__(PyObject *sipSelf,PyObject *sipArgs);}
static PyObject *slot_RegularData2D___call__(PyObject *sipSelf,PyObject *sipArgs)
{
    RegularData2D *sipCpp = reinterpret_cast<RegularData2D *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_RegularData2D));

    if (!sipCpp)
        return 0;

    int sipArgsParsed = 0;

    {
        const Vector2 * a0;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"JA",sipClass_Vector2,&a0))
        {
            float sipRes = 0;

#line 75 "regularData2D.sip"
  sipRes = sipCpp->operator () (*a0);
#line 778 "sipBALLRegularData2D.C"

            return PyFloat_FromDouble((double)sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_RegularData2D,sipNm_BALL___call__);

    return 0;
}


extern "C" {static PyObject *slot_RegularData2D___getitem__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_RegularData2D___getitem__(PyObject *sipSelf,PyObject *sipArg)
{
    RegularData2D *sipCpp = reinterpret_cast<RegularData2D *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_RegularData2D));

    if (!sipCpp)
        return 0;

    int sipArgsParsed = 0;

    {
        const RegularData2D::IndexType * a0;

        if (sipParseArgs(&sipArgsParsed,sipArg,"JA",sipClass_RegularData2D_IndexType,&a0))
        {
            float sipRes = 0;

#line 67 "regularData2D.sip"
  sipRes = sipCpp->operator [] (*a0);
#line 810 "sipBALLRegularData2D.C"

            return PyFloat_FromDouble((double)sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_RegularData2D,sipNm_BALL___getitem__);

    return 0;
}


extern "C" {static PyObject *slot_RegularData2D___ne__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_RegularData2D___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    RegularData2D *sipCpp = reinterpret_cast<RegularData2D *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_RegularData2D));

    if (!sipCpp)
        return 0;

    int sipArgsParsed = 0;

    {
        const RegularData2D * a0;

        if (sipParseArgs(&sipArgsParsed,sipArg,"JA",sipClass_RegularData2D,&a0))
        {
            bool sipRes;

            sipRes = ((*sipCpp) != *a0);

            return PyBool_FromLong(sipRes);
        }
    }

    return sipPySlotExtend(&sipModuleAPI_BALL,ne_slot,sipClass_RegularData2D,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_RegularData2D___eq__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_RegularData2D___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    RegularData2D *sipCpp = reinterpret_cast<RegularData2D *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_RegularData2D));

    if (!sipCpp)
        return 0;

    int sipArgsParsed = 0;

    {
        const RegularData2D * a0;

        if (sipParseArgs(&sipArgsParsed,sipArg,"JA",sipClass_RegularData2D,&a0))
        {
            bool sipRes;

            sipRes = ((*sipCpp) == *a0);

            return PyBool_FromLong(sipRes);
        }
    }

    return sipPySlotExtend(&sipModuleAPI_BALL,eq_slot,sipClass_RegularData2D,sipSelf,sipArg);
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_RegularData2D(void *, sipWrapperType *);}
static void *cast_RegularData2D(void *ptr,sipWrapperType *targetClass)
{
    if (targetClass == sipClass_RegularData2D)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_RegularData2D(void *, int);}
static void release_RegularData2D(void *ptr,int)
{
    delete reinterpret_cast<RegularData2D *>(ptr);
}


extern "C" {static void dealloc_RegularData2D(sipWrapper *);}
static void dealloc_RegularData2D(sipWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_RegularData2D(sipSelf->u.cppPtr,0);
    }
}


extern "C" {static void *init_RegularData2D(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_RegularData2D(sipWrapper *,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    RegularData2D *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            sipCpp = new RegularData2D();
        }
    }

    if (!sipCpp)
    {
        const RegularData2D * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_RegularData2D,&a0))
        {
            try
            {
            sipCpp = new RegularData2D(*a0);
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

    if (!sipCpp)
    {
        const Vector2 * a0;
        const Vector2 * a1;
        const Vector2 * a2;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JAJAJA",sipClass_Vector2,&a0,sipClass_Vector2,&a1,sipClass_Vector2,&a2))
        {
            try
            {
            sipCpp = new RegularData2D(*a0,*a1,*a2);
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

    if (!sipCpp)
    {
        const RegularData2D::IndexType * a0;
        const Vector2 * a1;
        const Vector2 * a2;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JAJAJA",sipClass_RegularData2D_IndexType,&a0,sipClass_Vector2,&a1,sipClass_Vector2,&a2))
        {
            try
            {
            sipCpp = new RegularData2D(*a0,*a1,*a2);
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


extern "C" {static void *forceConvertTo_RegularData2D(PyObject *, int *);}
static void *forceConvertTo_RegularData2D(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_RegularData2D))
        return sipConvertToCpp(valobj,sipClass_RegularData2D,iserrp);

    sipBadClass(sipNm_BALL_RegularData2D);

    *iserrp = 1;

    return NULL;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_RegularData2D[] = {
    {(void *)slot_RegularData2D___call__, call_slot},
    {(void *)slot_RegularData2D___getitem__, getitem_slot},
    {(void *)slot_RegularData2D___ne__, ne_slot},
    {(void *)slot_RegularData2D___eq__, eq_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_RegularData2D[] = {
    {sipNm_BALL_binaryRead, meth_RegularData2D_binaryRead, METH_VARARGS, NULL},
    {sipNm_BALL_binaryWrite, meth_RegularData2D_binaryWrite, METH_VARARGS, NULL},
    {sipNm_BALL_clear, meth_RegularData2D_clear, METH_VARARGS, NULL},
    {sipNm_BALL_empty, meth_RegularData2D_empty, METH_VARARGS, NULL},
    {sipNm_BALL_getClosestIndex, meth_RegularData2D_getClosestIndex, METH_VARARGS, NULL},
    {sipNm_BALL_getClosestValue, meth_RegularData2D_getClosestValue, METH_VARARGS, NULL},
    {sipNm_BALL_getCoordinates, meth_RegularData2D_getCoordinates, METH_VARARGS, NULL},
    {sipNm_BALL_getData, meth_RegularData2D_getData, METH_VARARGS, NULL},
    {sipNm_BALL_getDimension, meth_RegularData2D_getDimension, METH_VARARGS, NULL},
    {sipNm_BALL_getEnclosingIndices, meth_RegularData2D_getEnclosingIndices, METH_VARARGS, NULL},
    {sipNm_BALL_getEnclosingValues, meth_RegularData2D_getEnclosingValues, METH_VARARGS, NULL},
    {sipNm_BALL_getInterpolatedValue, meth_RegularData2D_getInterpolatedValue, METH_VARARGS, NULL},
    {sipNm_BALL_getLowerIndex, meth_RegularData2D_getLowerIndex, METH_VARARGS, NULL},
    {sipNm_BALL_getOrigin, meth_RegularData2D_getOrigin, METH_VARARGS, NULL},
    {sipNm_BALL_getSize, meth_RegularData2D_getSize, METH_VARARGS, NULL},
    {sipNm_BALL_getSpacing, meth_RegularData2D_getSpacing, METH_VARARGS, NULL},
    {sipNm_BALL_isInside, meth_RegularData2D_isInside, METH_VARARGS, NULL},
    {sipNm_BALL_rescale, meth_RegularData2D_rescale, METH_VARARGS, NULL},
    {sipNm_BALL_resize, meth_RegularData2D_resize, METH_VARARGS, NULL},
    {sipNm_BALL_setDimension, meth_RegularData2D_setDimension, METH_VARARGS, NULL},
    {sipNm_BALL_setOrigin, meth_RegularData2D_setOrigin, METH_VARARGS, NULL},
    {sipNm_BALL_swap, meth_RegularData2D_swap, METH_VARARGS, NULL}
};


sipTypeDef sipType_BALL_RegularData2D = {
    0,
    0,
    "BALL.RegularData2D",
    0,
    {0, 0, 1},
    0,
    slots_RegularData2D,
    22, methods_RegularData2D,
    0, 0,
    0,
    init_RegularData2D,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_RegularData2D,
    cast_RegularData2D,
    release_RegularData2D,
    forceConvertTo_RegularData2D,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
