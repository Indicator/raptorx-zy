/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLSysInfo.h"

#include "sipBALLIndex.h"
#include "sipBALLTime.h"
#include "sipBALLLongIndex.h"



extern "C" {static PyObject *meth_SysInfo_getNumberOfProcessors(PyObject *,PyObject *);}
static PyObject *meth_SysInfo_getNumberOfProcessors(PyObject *,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        if (sipParseArgs(&sipArgsParsed,sipArgs,""))
        {
            Index *sipRes;

            try
            {
            sipRes = new Index(SysInfo::getNumberOfProcessors());
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            PyObject *sipResObj = sipConvertFromMappedType(sipRes,sipMappedType_Index,NULL);
            delete sipRes;

            return sipResObj;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoFunction(sipArgsParsed,sipNm_BALL_getNumberOfProcessors);

    return NULL;
}


extern "C" {static PyObject *meth_SysInfo_getUptime(PyObject *,PyObject *);}
static PyObject *meth_SysInfo_getUptime(PyObject *,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        if (sipParseArgs(&sipArgsParsed,sipArgs,""))
        {
            Time *sipRes;

            try
            {
            sipRes = new Time(SysInfo::getUptime());
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            PyObject *sipResObj = sipConvertFromMappedType(sipRes,sipMappedType_Time,NULL);
            delete sipRes;

            return sipResObj;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoFunction(sipArgsParsed,sipNm_BALL_getUptime);

    return NULL;
}


extern "C" {static PyObject *meth_SysInfo_getFreeSwapSpace(PyObject *,PyObject *);}
static PyObject *meth_SysInfo_getFreeSwapSpace(PyObject *,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        if (sipParseArgs(&sipArgsParsed,sipArgs,""))
        {
            LongIndex *sipRes;

            try
            {
            sipRes = new LongIndex(SysInfo::getFreeSwapSpace());
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            PyObject *sipResObj = sipConvertFromMappedType(sipRes,sipMappedType_LongIndex,NULL);
            delete sipRes;

            return sipResObj;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoFunction(sipArgsParsed,sipNm_BALL_getFreeSwapSpace);

    return NULL;
}


extern "C" {static PyObject *meth_SysInfo_getBufferedMemory(PyObject *,PyObject *);}
static PyObject *meth_SysInfo_getBufferedMemory(PyObject *,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        if (sipParseArgs(&sipArgsParsed,sipArgs,""))
        {
            LongIndex *sipRes;

            try
            {
            sipRes = new LongIndex(SysInfo::getBufferedMemory());
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            PyObject *sipResObj = sipConvertFromMappedType(sipRes,sipMappedType_LongIndex,NULL);
            delete sipRes;

            return sipResObj;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoFunction(sipArgsParsed,sipNm_BALL_getBufferedMemory);

    return NULL;
}


extern "C" {static PyObject *meth_SysInfo_getTotalMemory(PyObject *,PyObject *);}
static PyObject *meth_SysInfo_getTotalMemory(PyObject *,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        if (sipParseArgs(&sipArgsParsed,sipArgs,""))
        {
            LongIndex *sipRes;

            try
            {
            sipRes = new LongIndex(SysInfo::getTotalMemory());
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            PyObject *sipResObj = sipConvertFromMappedType(sipRes,sipMappedType_LongIndex,NULL);
            delete sipRes;

            return sipResObj;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoFunction(sipArgsParsed,sipNm_BALL_getTotalMemory);

    return NULL;
}


extern "C" {static PyObject *meth_SysInfo_getFreeMemory(PyObject *,PyObject *);}
static PyObject *meth_SysInfo_getFreeMemory(PyObject *,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        if (sipParseArgs(&sipArgsParsed,sipArgs,""))
        {
            LongIndex *sipRes;

            try
            {
            sipRes = new LongIndex(SysInfo::getFreeMemory());
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            PyObject *sipResObj = sipConvertFromMappedType(sipRes,sipMappedType_LongIndex,NULL);
            delete sipRes;

            return sipResObj;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoFunction(sipArgsParsed,sipNm_BALL_getFreeMemory);

    return NULL;
}


extern "C" {static PyObject *meth_SysInfo_getAvailableMemory(PyObject *,PyObject *);}
static PyObject *meth_SysInfo_getAvailableMemory(PyObject *,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        if (sipParseArgs(&sipArgsParsed,sipArgs,""))
        {
            LongIndex *sipRes;

            try
            {
            sipRes = new LongIndex(SysInfo::getAvailableMemory());
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            PyObject *sipResObj = sipConvertFromMappedType(sipRes,sipMappedType_LongIndex,NULL);
            delete sipRes;

            return sipResObj;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoFunction(sipArgsParsed,sipNm_BALL_getAvailableMemory);

    return NULL;
}


static PyMethodDef methods_SysInfo[] = {
    {sipNm_BALL_getAvailableMemory, meth_SysInfo_getAvailableMemory, METH_VARARGS, NULL},
    {sipNm_BALL_getBufferedMemory, meth_SysInfo_getBufferedMemory, METH_VARARGS, NULL},
    {sipNm_BALL_getFreeMemory, meth_SysInfo_getFreeMemory, METH_VARARGS, NULL},
    {sipNm_BALL_getFreeSwapSpace, meth_SysInfo_getFreeSwapSpace, METH_VARARGS, NULL},
    {sipNm_BALL_getNumberOfProcessors, meth_SysInfo_getNumberOfProcessors, METH_VARARGS, NULL},
    {sipNm_BALL_getTotalMemory, meth_SysInfo_getTotalMemory, METH_VARARGS, NULL},
    {sipNm_BALL_getUptime, meth_SysInfo_getUptime, METH_VARARGS, NULL}
};


sipTypeDef sipType_BALL_SysInfo = {
    0,
    0,
    "BALL.SysInfo",
    0,
    {0, 0, 1},
    0,
    0,
    7, methods_SysInfo,
    0, 0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
