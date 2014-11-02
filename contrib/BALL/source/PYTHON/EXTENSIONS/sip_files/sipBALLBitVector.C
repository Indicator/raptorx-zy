/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLBitVector.h"

#include "sipBALLOutOfMemory.h"
#include "sipBALLIndexUnderflow.h"
#include "sipBALLIndexOverflow.h"
#include "sipBALLBitVector.h"
#include "sipBALLIndex.h"



extern "C" {static PyObject *meth_BitVector_clear(PyObject *, PyObject *);}
static PyObject *meth_BitVector_clear(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        BitVector *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_BitVector,&sipCpp))
        {
            sipCpp->clear();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_BitVector,sipNm_BALL_clear);

    return NULL;
}


extern "C" {static PyObject *meth_BitVector_set(PyObject *, PyObject *);}
static PyObject *meth_BitVector_set(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const BitVector * a0;
        BitVector *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_BitVector,&sipCpp,sipClass_BitVector,&a0))
        {
            try
            {
            sipCpp->set(*a0);
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

    {
        const char * a0;
        BitVector *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bs",&sipSelf,sipClass_BitVector,&sipCpp,&a0))
        {
            try
            {
            sipCpp->set(a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_BitVector,sipNm_BALL_set);

    return NULL;
}


extern "C" {static PyObject *meth_BitVector_get(PyObject *, PyObject *);}
static PyObject *meth_BitVector_get(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        BitVector * a0;
        BitVector *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_BitVector,&sipCpp,sipClass_BitVector,&a0))
        {
            try
            {
            sipCpp->get(*a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_BitVector,sipNm_BALL_get);

    return NULL;
}


extern "C" {static PyObject *meth_BitVector_setSize(PyObject *, PyObject *);}
static PyObject *meth_BitVector_setSize(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        int a0;
        bool a1 = 1;
        BitVector *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bi|b",&sipSelf,sipClass_BitVector,&sipCpp,&a0,&a1))
        {
            try
            {
            sipCpp->setSize(a0,a1);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_BitVector,sipNm_BALL_setSize);

    return NULL;
}


extern "C" {static PyObject *meth_BitVector_getSize(PyObject *, PyObject *);}
static PyObject *meth_BitVector_getSize(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        BitVector *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_BitVector,&sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->getSize();

            return PyInt_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_BitVector,sipNm_BALL_getSize);

    return NULL;
}


extern "C" {static PyObject *meth_BitVector_countValue(PyObject *, PyObject *);}
static PyObject *meth_BitVector_countValue(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        bool a0;
        BitVector *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bb",&sipSelf,sipClass_BitVector,&sipCpp,&a0))
        {
            int sipRes;

            sipRes = sipCpp->countValue(a0);

            return PyInt_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_BitVector,sipNm_BALL_countValue);

    return NULL;
}


extern "C" {static PyObject *meth_BitVector_setBit(PyObject *, PyObject *);}
static PyObject *meth_BitVector_setBit(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Index * a0;
        int a0State = 0;
        bool a1 = 1;
        BitVector *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BM1|b",&sipSelf,sipClass_BitVector,&sipCpp,sipMappedType_Index,&a0,&a0State,&a1))
        {
            try
            {
            sipCpp->setBit(*a0,a1);
            }
            catch (IndexUnderflow &sipExceptionRef)
            {

            sipReleaseMappedType(a0,sipMappedType_Index,a0State);
                /* Hope that there is a valid copy ctor. */
                IndexUnderflow *sipExceptionCopy = new IndexUnderflow(sipExceptionRef);

                sipRaiseClassException(sipClass_IndexUnderflow,sipExceptionCopy);

                return NULL;
            }
            catch (OutOfMemory &sipExceptionRef)
            {

            sipReleaseMappedType(a0,sipMappedType_Index,a0State);
                /* Hope that there is a valid copy ctor. */
                OutOfMemory *sipExceptionCopy = new OutOfMemory(sipExceptionRef);

                sipRaiseClassException(sipClass_OutOfMemory,sipExceptionCopy);

                return NULL;
            }

            sipReleaseMappedType(a0,sipMappedType_Index,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_BitVector,sipNm_BALL_setBit);

    return NULL;
}


extern "C" {static PyObject *meth_BitVector_getBit(PyObject *, PyObject *);}
static PyObject *meth_BitVector_getBit(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Index * a0;
        int a0State = 0;
        BitVector *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BM1",&sipSelf,sipClass_BitVector,&sipCpp,sipMappedType_Index,&a0,&a0State))
        {
            bool sipRes;

            try
            {
            sipRes = sipCpp->getBit(*a0);
            }
            catch (IndexUnderflow &sipExceptionRef)
            {

            sipReleaseMappedType(a0,sipMappedType_Index,a0State);
                /* Hope that there is a valid copy ctor. */
                IndexUnderflow *sipExceptionCopy = new IndexUnderflow(sipExceptionRef);

                sipRaiseClassException(sipClass_IndexUnderflow,sipExceptionCopy);

                return NULL;
            }
            catch (IndexOverflow &sipExceptionRef)
            {

            sipReleaseMappedType(a0,sipMappedType_Index,a0State);
                /* Hope that there is a valid copy ctor. */
                IndexOverflow *sipExceptionCopy = new IndexOverflow(sipExceptionRef);

                sipRaiseClassException(sipClass_IndexOverflow,sipExceptionCopy);

                return NULL;
            }

            sipReleaseMappedType(a0,sipMappedType_Index,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_BitVector,sipNm_BALL_getBit);

    return NULL;
}


extern "C" {static PyObject *meth_BitVector_toggleBit(PyObject *, PyObject *);}
static PyObject *meth_BitVector_toggleBit(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Index * a0;
        int a0State = 0;
        BitVector *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BM1",&sipSelf,sipClass_BitVector,&sipCpp,sipMappedType_Index,&a0,&a0State))
        {
            try
            {
            sipCpp->toggleBit(*a0);
            }
            catch (IndexUnderflow &sipExceptionRef)
            {

            sipReleaseMappedType(a0,sipMappedType_Index,a0State);
                /* Hope that there is a valid copy ctor. */
                IndexUnderflow *sipExceptionCopy = new IndexUnderflow(sipExceptionRef);

                sipRaiseClassException(sipClass_IndexUnderflow,sipExceptionCopy);

                return NULL;
            }
            catch (OutOfMemory &sipExceptionRef)
            {

            sipReleaseMappedType(a0,sipMappedType_Index,a0State);
                /* Hope that there is a valid copy ctor. */
                OutOfMemory *sipExceptionCopy = new OutOfMemory(sipExceptionRef);

                sipRaiseClassException(sipClass_OutOfMemory,sipExceptionCopy);

                return NULL;
            }

            sipReleaseMappedType(a0,sipMappedType_Index,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_BitVector,sipNm_BALL_toggleBit);

    return NULL;
}


extern "C" {static PyObject *meth_BitVector_fill(PyObject *, PyObject *);}
static PyObject *meth_BitVector_fill(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        bool a0 = 1;
        Index a1def = 0;
        Index * a1 = &a1def;
        int a1State = 0;
        Index a2def = -1;
        Index * a2 = &a2def;
        int a2State = 0;
        BitVector *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B|bM1M1",&sipSelf,sipClass_BitVector,&sipCpp,&a0,sipMappedType_Index,&a1,&a1State,sipMappedType_Index,&a2,&a2State))
        {
            try
            {
            sipCpp->fill(a0,*a1,*a2);
            }
            catch (IndexUnderflow &sipExceptionRef)
            {

            sipReleaseMappedType(a1,sipMappedType_Index,a1State);
            sipReleaseMappedType(a2,sipMappedType_Index,a2State);
                /* Hope that there is a valid copy ctor. */
                IndexUnderflow *sipExceptionCopy = new IndexUnderflow(sipExceptionRef);

                sipRaiseClassException(sipClass_IndexUnderflow,sipExceptionCopy);

                return NULL;
            }
            catch (OutOfMemory &sipExceptionRef)
            {

            sipReleaseMappedType(a1,sipMappedType_Index,a1State);
            sipReleaseMappedType(a2,sipMappedType_Index,a2State);
                /* Hope that there is a valid copy ctor. */
                OutOfMemory *sipExceptionCopy = new OutOfMemory(sipExceptionRef);

                sipRaiseClassException(sipClass_OutOfMemory,sipExceptionCopy);

                return NULL;
            }

            sipReleaseMappedType(a1,sipMappedType_Index,a1State);
            sipReleaseMappedType(a2,sipMappedType_Index,a2State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_BitVector,sipNm_BALL_fill);

    return NULL;
}


extern "C" {static PyObject *meth_BitVector_toggle(PyObject *, PyObject *);}
static PyObject *meth_BitVector_toggle(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Index a0def = 0;
        Index * a0 = &a0def;
        int a0State = 0;
        Index a1def = -1;
        Index * a1 = &a1def;
        int a1State = 0;
        BitVector *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B|M1M1",&sipSelf,sipClass_BitVector,&sipCpp,sipMappedType_Index,&a0,&a0State,sipMappedType_Index,&a1,&a1State))
        {
            try
            {
            sipCpp->toggle(*a0,*a1);
            }
            catch (IndexUnderflow &sipExceptionRef)
            {

            sipReleaseMappedType(a0,sipMappedType_Index,a0State);
            sipReleaseMappedType(a1,sipMappedType_Index,a1State);
                /* Hope that there is a valid copy ctor. */
                IndexUnderflow *sipExceptionCopy = new IndexUnderflow(sipExceptionRef);

                sipRaiseClassException(sipClass_IndexUnderflow,sipExceptionCopy);

                return NULL;
            }
            catch (OutOfMemory &sipExceptionRef)
            {

            sipReleaseMappedType(a0,sipMappedType_Index,a0State);
            sipReleaseMappedType(a1,sipMappedType_Index,a1State);
                /* Hope that there is a valid copy ctor. */
                OutOfMemory *sipExceptionCopy = new OutOfMemory(sipExceptionRef);

                sipRaiseClassException(sipClass_OutOfMemory,sipExceptionCopy);

                return NULL;
            }

            sipReleaseMappedType(a0,sipMappedType_Index,a0State);
            sipReleaseMappedType(a1,sipMappedType_Index,a1State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_BitVector,sipNm_BALL_toggle);

    return NULL;
}


extern "C" {static PyObject *meth_BitVector_setUnsignedChar(PyObject *, PyObject *);}
static PyObject *meth_BitVector_setUnsignedChar(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        unsigned char a0;
        BitVector *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bc",&sipSelf,sipClass_BitVector,&sipCpp,&a0))
        {
            sipCpp->setUnsignedChar(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_BitVector,sipNm_BALL_setUnsignedChar);

    return NULL;
}


extern "C" {static PyObject *meth_BitVector_getUnsignedChar(PyObject *, PyObject *);}
static PyObject *meth_BitVector_getUnsignedChar(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        BitVector *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_BitVector,&sipCpp))
        {
            unsigned char sipRes;

            sipRes = sipCpp->getUnsignedChar();

            return PyString_FromStringAndSize((char *)&sipRes,1);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_BitVector,sipNm_BALL_getUnsignedChar);

    return NULL;
}


extern "C" {static PyObject *meth_BitVector_setUnsignedShort(PyObject *, PyObject *);}
static PyObject *meth_BitVector_setUnsignedShort(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        unsigned short a0;
        BitVector *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bt",&sipSelf,sipClass_BitVector,&sipCpp,&a0))
        {
            sipCpp->setUnsignedShort(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_BitVector,sipNm_BALL_setUnsignedShort);

    return NULL;
}


extern "C" {static PyObject *meth_BitVector_getUnsignedShort(PyObject *, PyObject *);}
static PyObject *meth_BitVector_getUnsignedShort(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        BitVector *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_BitVector,&sipCpp))
        {
            unsigned short sipRes;

            sipRes = sipCpp->getUnsignedShort();

            return PyLong_FromUnsignedLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_BitVector,sipNm_BALL_getUnsignedShort);

    return NULL;
}


extern "C" {static PyObject *meth_BitVector_setUnsignedLong(PyObject *, PyObject *);}
static PyObject *meth_BitVector_setUnsignedLong(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        unsigned long a0;
        BitVector *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bm",&sipSelf,sipClass_BitVector,&sipCpp,&a0))
        {
            sipCpp->setUnsignedLong(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_BitVector,sipNm_BALL_setUnsignedLong);

    return NULL;
}


extern "C" {static PyObject *meth_BitVector_getUnsignedLong(PyObject *, PyObject *);}
static PyObject *meth_BitVector_getUnsignedLong(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        BitVector *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_BitVector,&sipCpp))
        {
            unsigned long sipRes;

            sipRes = sipCpp->getUnsignedLong();

            return PyLong_FromUnsignedLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_BitVector,sipNm_BALL_getUnsignedLong);

    return NULL;
}


extern "C" {static PyObject *meth_BitVector_bitwiseOr(PyObject *, PyObject *);}
static PyObject *meth_BitVector_bitwiseOr(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const BitVector * a0;
        BitVector *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_BitVector,&sipCpp,sipClass_BitVector,&a0))
        {
            try
            {
            sipCpp->bitwiseOr(*a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_BitVector,sipNm_BALL_bitwiseOr);

    return NULL;
}


extern "C" {static PyObject *meth_BitVector_bitwiseXor(PyObject *, PyObject *);}
static PyObject *meth_BitVector_bitwiseXor(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const BitVector * a0;
        BitVector *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_BitVector,&sipCpp,sipClass_BitVector,&a0))
        {
            try
            {
            sipCpp->bitwiseXor(*a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_BitVector,sipNm_BALL_bitwiseXor);

    return NULL;
}


extern "C" {static PyObject *meth_BitVector_bitwiseAnd(PyObject *, PyObject *);}
static PyObject *meth_BitVector_bitwiseAnd(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const BitVector * a0;
        BitVector *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_BitVector,&sipCpp,sipClass_BitVector,&a0))
        {
            try
            {
            sipCpp->bitwiseAnd(*a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_BitVector,sipNm_BALL_bitwiseAnd);

    return NULL;
}


extern "C" {static PyObject *meth_BitVector_isAnyBit(PyObject *, PyObject *);}
static PyObject *meth_BitVector_isAnyBit(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        bool a0;
        Index a1def = 0;
        Index * a1 = &a1def;
        int a1State = 0;
        Index a2def = -1;
        Index * a2 = &a2def;
        int a2State = 0;
        BitVector *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bb|M1M1",&sipSelf,sipClass_BitVector,&sipCpp,&a0,sipMappedType_Index,&a1,&a1State,sipMappedType_Index,&a2,&a2State))
        {
            bool sipRes;

            try
            {
            sipRes = sipCpp->isAnyBit(a0,*a1,*a2);
            }
            catch (IndexUnderflow &sipExceptionRef)
            {

            sipReleaseMappedType(a1,sipMappedType_Index,a1State);
            sipReleaseMappedType(a2,sipMappedType_Index,a2State);
                /* Hope that there is a valid copy ctor. */
                IndexUnderflow *sipExceptionCopy = new IndexUnderflow(sipExceptionRef);

                sipRaiseClassException(sipClass_IndexUnderflow,sipExceptionCopy);

                return NULL;
            }
            catch (IndexOverflow &sipExceptionRef)
            {

            sipReleaseMappedType(a1,sipMappedType_Index,a1State);
            sipReleaseMappedType(a2,sipMappedType_Index,a2State);
                /* Hope that there is a valid copy ctor. */
                IndexOverflow *sipExceptionCopy = new IndexOverflow(sipExceptionRef);

                sipRaiseClassException(sipClass_IndexOverflow,sipExceptionCopy);

                return NULL;
            }

            sipReleaseMappedType(a1,sipMappedType_Index,a1State);
            sipReleaseMappedType(a2,sipMappedType_Index,a2State);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_BitVector,sipNm_BALL_isAnyBit);

    return NULL;
}


extern "C" {static PyObject *meth_BitVector_isEveryBit(PyObject *, PyObject *);}
static PyObject *meth_BitVector_isEveryBit(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        bool a0;
        Index a1def = 0;
        Index * a1 = &a1def;
        int a1State = 0;
        Index a2def = -1;
        Index * a2 = &a2def;
        int a2State = 0;
        BitVector *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bb|M1M1",&sipSelf,sipClass_BitVector,&sipCpp,&a0,sipMappedType_Index,&a1,&a1State,sipMappedType_Index,&a2,&a2State))
        {
            bool sipRes;

            try
            {
            sipRes = sipCpp->isEveryBit(a0,*a1,*a2);
            }
            catch (IndexUnderflow &sipExceptionRef)
            {

            sipReleaseMappedType(a1,sipMappedType_Index,a1State);
            sipReleaseMappedType(a2,sipMappedType_Index,a2State);
                /* Hope that there is a valid copy ctor. */
                IndexUnderflow *sipExceptionCopy = new IndexUnderflow(sipExceptionRef);

                sipRaiseClassException(sipClass_IndexUnderflow,sipExceptionCopy);

                return NULL;
            }
            catch (IndexOverflow &sipExceptionRef)
            {

            sipReleaseMappedType(a1,sipMappedType_Index,a1State);
            sipReleaseMappedType(a2,sipMappedType_Index,a2State);
                /* Hope that there is a valid copy ctor. */
                IndexOverflow *sipExceptionCopy = new IndexOverflow(sipExceptionRef);

                sipRaiseClassException(sipClass_IndexOverflow,sipExceptionCopy);

                return NULL;
            }

            sipReleaseMappedType(a1,sipMappedType_Index,a1State);
            sipReleaseMappedType(a2,sipMappedType_Index,a2State);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_BitVector,sipNm_BALL_isEveryBit);

    return NULL;
}


extern "C" {static PyObject *meth_BitVector_isValid(PyObject *, PyObject *);}
static PyObject *meth_BitVector_isValid(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        BitVector *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_BitVector,&sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isValid();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_BitVector,sipNm_BALL_isValid);

    return NULL;
}


extern "C" {static PyObject *slot_BitVector___ne__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_BitVector___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    BitVector *sipCpp = reinterpret_cast<BitVector *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_BitVector));

    if (!sipCpp)
        return 0;

    int sipArgsParsed = 0;

    {
        const BitVector * a0;

        if (sipParseArgs(&sipArgsParsed,sipArg,"JA",sipClass_BitVector,&a0))
        {
            bool sipRes;

            sipRes = ((*sipCpp) != *a0);

            return PyBool_FromLong(sipRes);
        }
    }

    return sipPySlotExtend(&sipModuleAPI_BALL,ne_slot,sipClass_BitVector,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_BitVector___eq__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_BitVector___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    BitVector *sipCpp = reinterpret_cast<BitVector *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_BitVector));

    if (!sipCpp)
        return 0;

    int sipArgsParsed = 0;

    {
        const BitVector * a0;

        if (sipParseArgs(&sipArgsParsed,sipArg,"JA",sipClass_BitVector,&a0))
        {
            bool sipRes;

            sipRes = ((*sipCpp) == *a0);

            return PyBool_FromLong(sipRes);
        }
    }

    return sipPySlotExtend(&sipModuleAPI_BALL,eq_slot,sipClass_BitVector,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_BitVector___ixor__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_BitVector___ixor__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf,(PyTypeObject *)sipClass_BitVector))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    BitVector *sipCpp = reinterpret_cast<BitVector *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_BitVector));

    if (!sipCpp)
        return 0;

    int sipArgsParsed = 0;

    {
        const BitVector * a0;

        if (sipParseArgs(&sipArgsParsed,sipArg,"JA",sipClass_BitVector,&a0))
        {
            try
            {
            ((*sipCpp) ^= *a0);
            }
            catch (OutOfMemory &sipExceptionRef)
            {
                /* Hope that there is a valid copy ctor. */
                OutOfMemory *sipExceptionCopy = new OutOfMemory(sipExceptionRef);

                sipRaiseClassException(sipClass_OutOfMemory,sipExceptionCopy);

                return NULL;
            }

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    PyErr_Clear();

    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}


extern "C" {static PyObject *slot_BitVector___xor__(PyObject *sipArg0,PyObject *sipArg1);}
static PyObject *slot_BitVector___xor__(PyObject *sipArg0,PyObject *sipArg1)
{
    int sipArgsParsed = 0;

    {
        BitVector * a0;
        const BitVector * a1;

        if (sipParsePair(&sipArgsParsed,sipArg0,sipArg1,"JAJA",sipClass_BitVector,&a0,sipClass_BitVector,&a1))
        {
            BitVector *sipRes;

            try
            {
            sipRes = new BitVector((*a0 ^ *a1));
            }
            catch (OutOfMemory &sipExceptionRef)
            {
                /* Hope that there is a valid copy ctor. */
                OutOfMemory *sipExceptionCopy = new OutOfMemory(sipExceptionRef);

                sipRaiseClassException(sipClass_OutOfMemory,sipExceptionCopy);

                return NULL;
            }

            return sipConvertFromNewInstance(sipRes,sipClass_BitVector,NULL);
        }
    }

    return sipPySlotExtend(&sipModuleAPI_BALL,xor_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_BitVector___iand__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_BitVector___iand__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf,(PyTypeObject *)sipClass_BitVector))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    BitVector *sipCpp = reinterpret_cast<BitVector *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_BitVector));

    if (!sipCpp)
        return 0;

    int sipArgsParsed = 0;

    {
        const BitVector * a0;

        if (sipParseArgs(&sipArgsParsed,sipArg,"JA",sipClass_BitVector,&a0))
        {
            try
            {
            ((*sipCpp) &= *a0);
            }
            catch (OutOfMemory &sipExceptionRef)
            {
                /* Hope that there is a valid copy ctor. */
                OutOfMemory *sipExceptionCopy = new OutOfMemory(sipExceptionRef);

                sipRaiseClassException(sipClass_OutOfMemory,sipExceptionCopy);

                return NULL;
            }

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    PyErr_Clear();

    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}


extern "C" {static PyObject *slot_BitVector___and__(PyObject *sipArg0,PyObject *sipArg1);}
static PyObject *slot_BitVector___and__(PyObject *sipArg0,PyObject *sipArg1)
{
    int sipArgsParsed = 0;

    {
        BitVector * a0;
        const BitVector * a1;

        if (sipParsePair(&sipArgsParsed,sipArg0,sipArg1,"JAJA",sipClass_BitVector,&a0,sipClass_BitVector,&a1))
        {
            BitVector *sipRes;

            try
            {
            sipRes = new BitVector((*a0 & *a1));
            }
            catch (OutOfMemory &sipExceptionRef)
            {
                /* Hope that there is a valid copy ctor. */
                OutOfMemory *sipExceptionCopy = new OutOfMemory(sipExceptionRef);

                sipRaiseClassException(sipClass_OutOfMemory,sipExceptionCopy);

                return NULL;
            }

            return sipConvertFromNewInstance(sipRes,sipClass_BitVector,NULL);
        }
    }

    return sipPySlotExtend(&sipModuleAPI_BALL,and_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_BitVector___ior__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_BitVector___ior__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf,(PyTypeObject *)sipClass_BitVector))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    BitVector *sipCpp = reinterpret_cast<BitVector *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_BitVector));

    if (!sipCpp)
        return 0;

    int sipArgsParsed = 0;

    {
        const BitVector * a0;

        if (sipParseArgs(&sipArgsParsed,sipArg,"JA",sipClass_BitVector,&a0))
        {
            try
            {
            ((*sipCpp) |= *a0);
            }
            catch (OutOfMemory &sipExceptionRef)
            {
                /* Hope that there is a valid copy ctor. */
                OutOfMemory *sipExceptionCopy = new OutOfMemory(sipExceptionRef);

                sipRaiseClassException(sipClass_OutOfMemory,sipExceptionCopy);

                return NULL;
            }

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    PyErr_Clear();

    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}


extern "C" {static PyObject *slot_BitVector___or__(PyObject *sipArg0,PyObject *sipArg1);}
static PyObject *slot_BitVector___or__(PyObject *sipArg0,PyObject *sipArg1)
{
    int sipArgsParsed = 0;

    {
        BitVector * a0;
        const BitVector * a1;

        if (sipParsePair(&sipArgsParsed,sipArg0,sipArg1,"JAJA",sipClass_BitVector,&a0,sipClass_BitVector,&a1))
        {
            BitVector *sipRes;

            try
            {
            sipRes = new BitVector((*a0 | *a1));
            }
            catch (OutOfMemory &sipExceptionRef)
            {
                /* Hope that there is a valid copy ctor. */
                OutOfMemory *sipExceptionCopy = new OutOfMemory(sipExceptionRef);

                sipRaiseClassException(sipClass_OutOfMemory,sipExceptionCopy);

                return NULL;
            }

            return sipConvertFromNewInstance(sipRes,sipClass_BitVector,NULL);
        }
    }

    return sipPySlotExtend(&sipModuleAPI_BALL,or_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_BitVector___getitem__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_BitVector___getitem__(PyObject *sipSelf,PyObject *sipArg)
{
    BitVector *sipCpp = reinterpret_cast<BitVector *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_BitVector));

    if (!sipCpp)
        return 0;

    int sipArgsParsed = 0;

    {
        Index * a0;
        int a0State = 0;

        if (sipParseArgs(&sipArgsParsed,sipArg,"M1",sipMappedType_Index,&a0,&a0State))
        {
            bool sipRes = 0;

#line 71 "bitVector.sip"
	sipRes = sipCpp->operator[](*a0);
#line 1246 "sipBALLBitVector.C"

            sipReleaseMappedType(a0,sipMappedType_Index,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_BitVector,sipNm_BALL___getitem__);

    return 0;
}


extern "C" {static PyObject *slot_BitVector___call__(PyObject *sipSelf,PyObject *sipArgs);}
static PyObject *slot_BitVector___call__(PyObject *sipSelf,PyObject *sipArgs)
{
    BitVector *sipCpp = reinterpret_cast<BitVector *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_BitVector));

    if (!sipCpp)
        return 0;

    int sipArgsParsed = 0;

    {
        Index * a0;
        int a0State = 0;
        Index * a1;
        int a1State = 0;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"M1M1",sipMappedType_Index,&a0,&a0State,sipMappedType_Index,&a1,&a1State))
        {
            BitVector *sipRes = 0;

#line 61 "bitVector.sip"
	sipRes = new BitVector(sipCpp->operator() (*a0, *a1));
#line 1283 "sipBALLBitVector.C"

            sipReleaseMappedType(a0,sipMappedType_Index,a0State);
            sipReleaseMappedType(a1,sipMappedType_Index,a1State);

            return sipConvertFromNewInstance(sipRes,sipClass_BitVector,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_BitVector,sipNm_BALL___call__);

    return 0;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_BitVector(void *, sipWrapperType *);}
static void *cast_BitVector(void *ptr,sipWrapperType *targetClass)
{
    if (targetClass == sipClass_BitVector)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_BitVector(void *, int);}
static void release_BitVector(void *ptr,int)
{
    delete reinterpret_cast<BitVector *>(ptr);
}


extern "C" {static void dealloc_BitVector(sipWrapper *);}
static void dealloc_BitVector(sipWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_BitVector(sipSelf->u.cppPtr,0);
    }
}


extern "C" {static void *init_BitVector(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_BitVector(sipWrapper *,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    BitVector *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            sipCpp = new BitVector();
        }
    }

    if (!sipCpp)
    {
        int a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"i",&a0))
        {
            try
            {
            sipCpp = new BitVector(a0);
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
        const BitVector * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_BitVector,&a0))
        {
            try
            {
            sipCpp = new BitVector(*a0);
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
        const char * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"s",&a0))
        {
            try
            {
            sipCpp = new BitVector(a0);
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


extern "C" {static void *forceConvertTo_BitVector(PyObject *, int *);}
static void *forceConvertTo_BitVector(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_BitVector))
        return sipConvertToCpp(valobj,sipClass_BitVector,iserrp);

    sipBadClass(sipNm_BALL_BitVector);

    *iserrp = 1;

    return NULL;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_BitVector[] = {
    {(void *)slot_BitVector___ne__, ne_slot},
    {(void *)slot_BitVector___eq__, eq_slot},
    {(void *)slot_BitVector___ixor__, ixor_slot},
    {(void *)slot_BitVector___xor__, xor_slot},
    {(void *)slot_BitVector___iand__, iand_slot},
    {(void *)slot_BitVector___and__, and_slot},
    {(void *)slot_BitVector___ior__, ior_slot},
    {(void *)slot_BitVector___or__, or_slot},
    {(void *)slot_BitVector___getitem__, getitem_slot},
    {(void *)slot_BitVector___call__, call_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_BitVector[] = {
    {sipNm_BALL_bitwiseAnd, meth_BitVector_bitwiseAnd, METH_VARARGS, NULL},
    {sipNm_BALL_bitwiseOr, meth_BitVector_bitwiseOr, METH_VARARGS, NULL},
    {sipNm_BALL_bitwiseXor, meth_BitVector_bitwiseXor, METH_VARARGS, NULL},
    {sipNm_BALL_clear, meth_BitVector_clear, METH_VARARGS, NULL},
    {sipNm_BALL_countValue, meth_BitVector_countValue, METH_VARARGS, NULL},
    {sipNm_BALL_fill, meth_BitVector_fill, METH_VARARGS, NULL},
    {sipNm_BALL_get, meth_BitVector_get, METH_VARARGS, NULL},
    {sipNm_BALL_getBit, meth_BitVector_getBit, METH_VARARGS, NULL},
    {sipNm_BALL_getSize, meth_BitVector_getSize, METH_VARARGS, NULL},
    {sipNm_BALL_getUnsignedChar, meth_BitVector_getUnsignedChar, METH_VARARGS, NULL},
    {sipNm_BALL_getUnsignedLong, meth_BitVector_getUnsignedLong, METH_VARARGS, NULL},
    {sipNm_BALL_getUnsignedShort, meth_BitVector_getUnsignedShort, METH_VARARGS, NULL},
    {sipNm_BALL_isAnyBit, meth_BitVector_isAnyBit, METH_VARARGS, NULL},
    {sipNm_BALL_isEveryBit, meth_BitVector_isEveryBit, METH_VARARGS, NULL},
    {sipNm_BALL_isValid, meth_BitVector_isValid, METH_VARARGS, NULL},
    {sipNm_BALL_set, meth_BitVector_set, METH_VARARGS, NULL},
    {sipNm_BALL_setBit, meth_BitVector_setBit, METH_VARARGS, NULL},
    {sipNm_BALL_setSize, meth_BitVector_setSize, METH_VARARGS, NULL},
    {sipNm_BALL_setUnsignedChar, meth_BitVector_setUnsignedChar, METH_VARARGS, NULL},
    {sipNm_BALL_setUnsignedLong, meth_BitVector_setUnsignedLong, METH_VARARGS, NULL},
    {sipNm_BALL_setUnsignedShort, meth_BitVector_setUnsignedShort, METH_VARARGS, NULL},
    {sipNm_BALL_toggle, meth_BitVector_toggle, METH_VARARGS, NULL},
    {sipNm_BALL_toggleBit, meth_BitVector_toggleBit, METH_VARARGS, NULL}
};


sipTypeDef sipType_BALL_BitVector = {
    0,
    0,
    "BALL.BitVector",
    0,
    {0, 0, 1},
    0,
    slots_BitVector,
    23, methods_BitVector,
    0, 0,
    0,
    init_BitVector,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_BitVector,
    cast_BitVector,
    release_BitVector,
    forceConvertTo_BitVector,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
