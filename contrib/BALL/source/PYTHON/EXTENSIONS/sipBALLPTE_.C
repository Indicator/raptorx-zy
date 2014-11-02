/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLPTE_.h"

#include "sipBALLPropertyManager.h"
#include "sipBALLPTE_.h"
#include "sipBALLElement.h"
#include "sipBALLString.h"
#include "sipBALLIndex.h"
#include "sipBALLNamedProperty.h"
#include "sipBALLPosition.h"
#include "sipBALLPersistentObject.h"



extern "C" {static PyObject *meth_PTE__getElement(PyObject *, PyObject *);}
static PyObject *meth_PTE__getElement(PyObject *,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        int a0;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"i",&a0))
        {
            Element *sipRes;

            try
            {
            sipRes = &PTE_::getElement(a0);
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return sipConvertFromInstance(sipRes,sipClass_Element,NULL);
        }
    }

    {
        const String * a0;
        int a0State = 0;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"J1",sipClass_String,&a0,&a0State))
        {
            Element *sipRes;

            try
            {
            sipRes = &PTE_::getElement(*a0);
            }
            catch (...)
            {

            sipReleaseInstance(const_cast<String *>(a0),sipClass_String,a0State);
                sipRaiseUnknownException();
                return NULL;
            }

            sipReleaseInstance(const_cast<String *>(a0),sipClass_String,a0State);

            return sipConvertFromInstance(sipRes,sipClass_Element,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_PTE_,sipNm_BALL_getElement);

    return NULL;
}


extern "C" {static PyObject *slot_PTE____getitem__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_PTE____getitem__(PyObject *sipSelf,PyObject *sipArg)
{
    PTE_ *sipCpp = reinterpret_cast<PTE_ *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_PTE_));

    if (!sipCpp)
        return 0;

    int sipArgsParsed = 0;

    {
        const String * a0;
        int a0State = 0;

        if (sipParseArgs(&sipArgsParsed,sipArg,"J1",sipClass_String,&a0,&a0State))
        {
            const Element *sipRes;

            try
            {
            sipRes = &(*sipCpp)[*a0];
            }
            catch (...)
            {

            sipReleaseInstance(const_cast<String *>(a0),sipClass_String,a0State);
                sipRaiseUnknownException();
                return NULL;
            }

            sipReleaseInstance(const_cast<String *>(a0),sipClass_String,a0State);

            return sipConvertFromInstance(const_cast<Element *>(sipRes),sipClass_Element,NULL);
        }
    }

    {
        Index * a0;
        int a0State = 0;

        if (sipParseArgs(&sipArgsParsed,sipArg,"M1",sipMappedType_Index,&a0,&a0State))
        {
            const Element *sipRes = 0;

#line 76 "PTE_.sip"
  sipRes = &sipCpp->operator [] (*a0);
#line 130 "sipBALLPTE_.C"

            sipReleaseMappedType(a0,sipMappedType_Index,a0State);

            return sipConvertFromInstance(const_cast<Element *>(sipRes),sipClass_Element,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_PTE_,sipNm_BALL___getitem__);

    return 0;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_PTE_(void *, sipWrapperType *);}
static void *cast_PTE_(void *ptr,sipWrapperType *targetClass)
{
    void *res;

    if (targetClass == sipClass_PTE_)
        return ptr;

    if ((res = sipCast_PropertyManager((PropertyManager *)(PTE_ *)ptr,targetClass)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_PTE_(void *, int);}
static void release_PTE_(void *ptr,int)
{
    delete reinterpret_cast<PTE_ *>(ptr);
}


extern "C" {static void dealloc_PTE_(sipWrapper *);}
static void dealloc_PTE_(sipWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_PTE_(sipSelf->u.cppPtr,0);
    }
}


extern "C" {static void *init_PTE_(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_PTE_(sipWrapper *,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    PTE_ *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            try
            {
            sipCpp = new PTE_();
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
        const PTE_ * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_PTE_,&a0))
        {
            try
            {
            sipCpp = new PTE_(*a0);
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


extern "C" {static void *forceConvertTo_PTE_(PyObject *, int *);}
static void *forceConvertTo_PTE_(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_PTE_))
        return sipConvertToCpp(valobj,sipClass_PTE_,iserrp);

    sipBadClass(sipNm_BALL_PTE_);

    *iserrp = 1;

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedClassDef supers_PTE_[] = {{191, 255, 1}};


/* Define this type's Python slots. */
static sipPySlotDef slots_PTE_[] = {
    {(void *)slot_PTE____getitem__, getitem_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_PTE_[] = {
    {sipNm_BALL_getElement, meth_PTE__getElement, METH_VARARGS, NULL}
};


sipTypeDef sipType_BALL_PTE_ = {
    0,
    0,
    "BALL.PTE_",
    0,
    {0, 0, 1},
    supers_PTE_,
    slots_PTE_,
    1, methods_PTE_,
    0, 0,
    0,
    init_PTE_,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_PTE_,
    cast_PTE_,
    release_PTE_,
    forceConvertTo_PTE_,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
