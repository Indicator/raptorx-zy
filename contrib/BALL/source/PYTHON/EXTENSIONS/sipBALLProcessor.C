/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLProcessor.h"


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_Processor(void *, sipWrapperType *);}
static void *cast_Processor(void *ptr,sipWrapperType *targetClass)
{
    if (targetClass == sipClass_Processor)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_Processor(void *, int);}
static void release_Processor(void *ptr,int)
{
    delete reinterpret_cast<Processor *>(ptr);
}


extern "C" {static void dealloc_Processor(sipWrapper *);}
static void dealloc_Processor(sipWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_Processor(sipSelf->u.cppPtr,0);
    }
}


extern "C" {static void *init_Processor(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_Processor(sipWrapper *,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    Processor *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            try
            {
            sipCpp = new Processor();
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
        const Processor * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_Processor,&a0))
        {
            try
            {
            sipCpp = new Processor(*a0);
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


extern "C" {static void *forceConvertTo_Processor(PyObject *, int *);}
static void *forceConvertTo_Processor(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_Processor))
        return sipConvertToCpp(valobj,sipClass_Processor,iserrp);

    sipBadClass(sipNm_BALL_Processor);

    *iserrp = 1;

    return NULL;
}

static sipEnumMemberDef enummembers_Processor[] = {
    {sipNm_BALL_ABORT, Processor::ABORT, 34},
    {sipNm_BALL_BREAK, Processor::BREAK, 34},
    {sipNm_BALL_CONTINUE, Processor::CONTINUE, 34},
};


sipTypeDef sipType_BALL_Processor = {
    0,
    0,
    "BALL.Processor",
    0,
    {0, 0, 1},
    0,
    0,
    0, 0,
    3, enummembers_Processor,
    0,
    init_Processor,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_Processor,
    cast_Processor,
    release_Processor,
    forceConvertTo_Processor,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
