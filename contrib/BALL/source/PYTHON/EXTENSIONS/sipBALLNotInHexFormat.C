/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLNotInHexFormat.h"

#include "sipBALLString.h"



/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_NotInHexFormat(void *, sipWrapperType *);}
static void *cast_NotInHexFormat(void *ptr,sipWrapperType *targetClass)
{
    if (targetClass == sipClass_NotInHexFormat)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_NotInHexFormat(void *, int);}
static void release_NotInHexFormat(void *ptr,int)
{
    delete reinterpret_cast<NotInHexFormat *>(ptr);
}


extern "C" {static void dealloc_NotInHexFormat(sipWrapper *);}
static void dealloc_NotInHexFormat(sipWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_NotInHexFormat(sipSelf->u.cppPtr,0);
    }
}


extern "C" {static void *init_NotInHexFormat(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_NotInHexFormat(sipWrapper *,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    NotInHexFormat *sipCpp = 0;

    if (!sipCpp)
    {
        const char * a0;
        int a1;
        const String * a2;
        int a2State = 0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"siJ1",&a0,&a1,sipClass_String,&a2,&a2State))
        {
            sipCpp = new NotInHexFormat(a0,a1,*a2);

            sipReleaseInstance(const_cast<String *>(a2),sipClass_String,a2State);
        }
    }

    if (!sipCpp)
    {
        const NotInHexFormat * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_NotInHexFormat,&a0))
        {
            try
            {
            sipCpp = new NotInHexFormat(*a0);
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


extern "C" {static void *forceConvertTo_NotInHexFormat(PyObject *, int *);}
static void *forceConvertTo_NotInHexFormat(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_NotInHexFormat))
        return sipConvertToCpp(valobj,sipClass_NotInHexFormat,iserrp);

    sipBadClass(sipNm_BALL_NotInHexFormat);

    *iserrp = 1;

    return NULL;
}


sipTypeDef sipType_BALL_NotInHexFormat = {
    0,
    0,
    "BALL.NotInHexFormat",
    0,
    {0, 0, 1},
    0,
    0,
    0, 0,
    0, 0,
    0,
    init_NotInHexFormat,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_NotInHexFormat,
    cast_NotInHexFormat,
    release_NotInHexFormat,
    forceConvertTo_NotInHexFormat,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
