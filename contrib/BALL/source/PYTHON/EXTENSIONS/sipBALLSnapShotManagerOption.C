/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLSnapShotManagerOption.h"


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_SnapShotManager_Option(void *, sipWrapperType *);}
static void *cast_SnapShotManager_Option(void *ptr,sipWrapperType *targetClass)
{
    if (targetClass == sipClass_SnapShotManager_Option)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_SnapShotManager_Option(void *, int);}
static void release_SnapShotManager_Option(void *ptr,int)
{
    delete reinterpret_cast<SnapShotManager::Option *>(ptr);
}


extern "C" {static void dealloc_SnapShotManager_Option(sipWrapper *);}
static void dealloc_SnapShotManager_Option(sipWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_SnapShotManager_Option(sipSelf->u.cppPtr,0);
    }
}


extern "C" {static void *init_SnapShotManager_Option(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_SnapShotManager_Option(sipWrapper *,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    SnapShotManager::Option *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            try
            {
            sipCpp = new SnapShotManager::Option();
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
        const SnapShotManager::Option * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_SnapShotManager_Option,&a0))
        {
            try
            {
            sipCpp = new SnapShotManager::Option(*a0);
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


extern "C" {static PyObject *var_SnapShotManager_Option_FLUSH_TO_DISK_FREQUENCY(PyObject *, PyObject *);}
static PyObject *var_SnapShotManager_Option_FLUSH_TO_DISK_FREQUENCY(PyObject *,PyObject *sipPy)
{
   const char *sipVal;

    if (sipPy == NULL)
    {
        sipVal = SnapShotManager::Option::FLUSH_TO_DISK_FREQUENCY;

        sipPy = PyString_FromString(sipVal);

        return sipPy;
    }

	sipVal = PyString_AsString(sipPy);

    if (sipVal == NULL)
    {
        sipBadSetType(sipNm_BALL_Option,sipNm_BALL_FLUSH_TO_DISK_FREQUENCY);
        return NULL;
    }

    SnapShotManager::Option::FLUSH_TO_DISK_FREQUENCY = sipVal;

    Py_INCREF(Py_None);
    return Py_None;
}

PyMethodDef variables_SnapShotManager_Option[] = {
    {sipNm_BALL_FLUSH_TO_DISK_FREQUENCY, var_SnapShotManager_Option_FLUSH_TO_DISK_FREQUENCY, METH_STATIC, NULL},
    {0, 0, 0, 0}
};


extern "C" {static void *forceConvertTo_SnapShotManager_Option(PyObject *, int *);}
static void *forceConvertTo_SnapShotManager_Option(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_SnapShotManager_Option))
        return sipConvertToCpp(valobj,sipClass_SnapShotManager_Option,iserrp);

    sipBadClass(sipNm_BALL_Option);

    *iserrp = 1;

    return NULL;
}


sipTypeDef sipType_BALL_SnapShotManager_Option = {
    0,
    0,
    "BALL.SnapShotManager.Option",
    0,
    {100, 255, 0},
    0,
    0,
    0, 0,
    0, 0,
    variables_SnapShotManager_Option,
    init_SnapShotManager_Option,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_SnapShotManager_Option,
    cast_SnapShotManager_Option,
    release_SnapShotManager_Option,
    forceConvertTo_SnapShotManager_Option,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
