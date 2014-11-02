/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLVersionInfo.h"

#include "sipBALLVersionInfo.h"



extern "C" {static PyObject *meth_VersionInfo_getVersion(PyObject *, PyObject *);}
static PyObject *meth_VersionInfo_getVersion(PyObject *,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        if (sipParseArgs(&sipArgsParsed,sipArgs,""))
        {
            const char *sipRes;

            try
            {
            sipRes = VersionInfo::getVersion();
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            if (sipRes == NULL)
            {
                Py_INCREF(Py_None);
                return Py_None;
            }

            return PyString_FromString(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_VersionInfo,sipNm_BALL_getVersion);

    return NULL;
}


extern "C" {static PyObject *meth_VersionInfo_getMajorRevision(PyObject *, PyObject *);}
static PyObject *meth_VersionInfo_getMajorRevision(PyObject *,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        if (sipParseArgs(&sipArgsParsed,sipArgs,""))
        {
            int sipRes;

            try
            {
            sipRes = VersionInfo::getMajorRevision();
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return PyInt_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_VersionInfo,sipNm_BALL_getMajorRevision);

    return NULL;
}


extern "C" {static PyObject *meth_VersionInfo_getMinorRevision(PyObject *, PyObject *);}
static PyObject *meth_VersionInfo_getMinorRevision(PyObject *,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        if (sipParseArgs(&sipArgsParsed,sipArgs,""))
        {
            int sipRes;

            try
            {
            sipRes = VersionInfo::getMinorRevision();
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return PyInt_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_VersionInfo,sipNm_BALL_getMinorRevision);

    return NULL;
}


extern "C" {static PyObject *meth_VersionInfo_getType(PyObject *, PyObject *);}
static PyObject *meth_VersionInfo_getType(PyObject *,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        if (sipParseArgs(&sipArgsParsed,sipArgs,""))
        {
            VersionInfo::Type sipRes;

            try
            {
            sipRes = VersionInfo::getType();
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return sipConvertFromNamedEnum(sipRes,sipEnum_VersionInfo_Type);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_VersionInfo,sipNm_BALL_getType);

    return NULL;
}


extern "C" {static PyObject *slot_VersionInfo___str__(PyObject *sipSelf);}
static PyObject *slot_VersionInfo___str__(PyObject *sipSelf)
{
    VersionInfo *sipCpp = reinterpret_cast<VersionInfo *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_VersionInfo));

    if (!sipCpp)
        return 0;


    {
        {
            PyObject * sipRes = 0;

#line 29 "version.sip"
  return PyString_FromString(VersionInfo::getVersion());  	
#line 163 "sipBALLVersionInfo.C"

            return sipRes;
        }
    }
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_VersionInfo(void *, sipWrapperType *);}
static void *cast_VersionInfo(void *ptr,sipWrapperType *targetClass)
{
    if (targetClass == sipClass_VersionInfo)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_VersionInfo(void *, int);}
static void release_VersionInfo(void *ptr,int)
{
    delete reinterpret_cast<VersionInfo *>(ptr);
}


extern "C" {static void dealloc_VersionInfo(sipWrapper *);}
static void dealloc_VersionInfo(sipWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_VersionInfo(sipSelf->u.cppPtr,0);
    }
}


extern "C" {static void *init_VersionInfo(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_VersionInfo(sipWrapper *,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    VersionInfo *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            try
            {
            sipCpp = new VersionInfo();
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }
        }
    }

    if (!sipCpp)
    {
        const VersionInfo * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_VersionInfo,&a0))
        {
            try
            {
            sipCpp = new VersionInfo(*a0);
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }
        }
    }

    return sipCpp;
}


extern "C" {static void *forceConvertTo_VersionInfo(PyObject *, int *);}
static void *forceConvertTo_VersionInfo(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_VersionInfo))
        return sipConvertToCpp(valobj,sipClass_VersionInfo,iserrp);

    sipBadClass(sipNm_BALL_VersionInfo);

    *iserrp = 1;

    return NULL;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_VersionInfo[] = {
    {(void *)slot_VersionInfo___str__, str_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_VersionInfo[] = {
    {sipNm_BALL_getMajorRevision, meth_VersionInfo_getMajorRevision, METH_VARARGS, NULL},
    {sipNm_BALL_getMinorRevision, meth_VersionInfo_getMinorRevision, METH_VARARGS, NULL},
    {sipNm_BALL_getType, meth_VersionInfo_getType, METH_VARARGS, NULL},
    {sipNm_BALL_getVersion, meth_VersionInfo_getVersion, METH_VARARGS, NULL}
};

static sipEnumMemberDef enummembers_VersionInfo[] = {
    {sipNm_BALL_ALPHA, VersionInfo::ALPHA, 37},
    {sipNm_BALL_BETA, VersionInfo::BETA, 37},
    {sipNm_BALL_NONPUBLIC, VersionInfo::NONPUBLIC, 37},
    {sipNm_BALL_STABLE, VersionInfo::STABLE, 37},
    {sipNm_BALL_UNKNOWN, VersionInfo::UNKNOWN, 37},
};


sipTypeDef sipType_BALL_VersionInfo = {
    0,
    0,
    "BALL.VersionInfo",
    0,
    {0, 0, 1},
    0,
    slots_VersionInfo,
    4, methods_VersionInfo,
    5, enummembers_VersionInfo,
    0,
    init_VersionInfo,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_VersionInfo,
    cast_VersionInfo,
    release_VersionInfo,
    forceConvertTo_VersionInfo,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
