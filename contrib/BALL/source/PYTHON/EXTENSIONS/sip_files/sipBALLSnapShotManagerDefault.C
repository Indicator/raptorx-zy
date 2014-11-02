/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLSnapShotManagerDefault.h"


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_SnapShotManager_Default(void *, sipWrapperType *);}
static void *cast_SnapShotManager_Default(void *ptr,sipWrapperType *targetClass)
{
    if (targetClass == sipClass_SnapShotManager_Default)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_SnapShotManager_Default(void *, int);}
static void release_SnapShotManager_Default(void *ptr,int)
{
    delete reinterpret_cast<SnapShotManager::Default *>(ptr);
}


extern "C" {static void dealloc_SnapShotManager_Default(sipWrapper *);}
static void dealloc_SnapShotManager_Default(sipWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_SnapShotManager_Default(sipSelf->u.cppPtr,0);
    }
}


extern "C" {static void *init_SnapShotManager_Default(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_SnapShotManager_Default(sipWrapper *,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    SnapShotManager::Default *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            try
            {
            sipCpp = new SnapShotManager::Default();
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
        const SnapShotManager::Default * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_SnapShotManager_Default,&a0))
        {
            try
            {
            sipCpp = new SnapShotManager::Default(*a0);
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


extern "C" {static void *forceConvertTo_SnapShotManager_Default(PyObject *, int *);}
static void *forceConvertTo_SnapShotManager_Default(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_SnapShotManager_Default))
        return sipConvertToCpp(valobj,sipClass_SnapShotManager_Default,iserrp);

    sipBadClass(sipNm_BALL_Default);

    *iserrp = 1;

    return NULL;
}


/* Define the ints to be added to this type dictionary. */
static sipIntInstanceDef intInstances_SnapShotManager_Default[] = {
    {sipNm_BALL_FLUSH_TO_DISK_FREQUENCY, SnapShotManager::Default::FLUSH_TO_DISK_FREQUENCY},
    {0, 0}
};


sipTypeDef sipType_BALL_SnapShotManager_Default = {
    0,
    0,
    "BALL.SnapShotManager.Default",
    0,
    {100, 255, 0},
    0,
    0,
    0, 0,
    0, 0,
    0,
    init_SnapShotManager_Default,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_SnapShotManager_Default,
    cast_SnapShotManager_Default,
    release_SnapShotManager_Default,
    forceConvertTo_SnapShotManager_Default,
    0,
    0,
    {0, 0, 0, 0, intInstances_SnapShotManager_Default, 0, 0, 0, 0, 0, 0},
    0
};
