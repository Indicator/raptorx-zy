/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLPDBRecords.h"

#include "sipBALLPDBRecords.h"
#include "sipBALLString.h"


sipPDBRecords::sipPDBRecords() throw(): PDBRecords(), sipPySelf(0)
{
    sipCommonCtor(NULL,0);
}

sipPDBRecords::sipPDBRecords(const PDBRecords& a0) throw(): PDBRecords(a0), sipPySelf(0)
{
    sipCommonCtor(NULL,0);
}

sipPDBRecords::~sipPDBRecords() throw()
{
    sipCommonDtor(sipPySelf);
}


extern "C" {static PyObject *meth_PDBRecords_size(PyObject *, PyObject *);}
static PyObject *meth_PDBRecords_size(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        PDBRecords *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_PDBRecords,&sipCpp))
        {
            int sipRes;

            try
            {
            sipRes = sipCpp->size();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_PDBRecords,sipNm_BALL_size);

    return NULL;
}


extern "C" {static PyObject *meth_PDBRecords_max_size(PyObject *, PyObject *);}
static PyObject *meth_PDBRecords_max_size(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        PDBRecords *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_PDBRecords,&sipCpp))
        {
            int sipRes;

            try
            {
            sipRes = sipCpp->max_size();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_PDBRecords,sipNm_BALL_max_size);

    return NULL;
}


extern "C" {static PyObject *meth_PDBRecords_capacity(PyObject *, PyObject *);}
static PyObject *meth_PDBRecords_capacity(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        PDBRecords *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_PDBRecords,&sipCpp))
        {
            int sipRes;

            try
            {
            sipRes = sipCpp->capacity();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_PDBRecords,sipNm_BALL_capacity);

    return NULL;
}


extern "C" {static PyObject *meth_PDBRecords_empty(PyObject *, PyObject *);}
static PyObject *meth_PDBRecords_empty(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        PDBRecords *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_PDBRecords,&sipCpp))
        {
            bool sipRes;

            try
            {
            sipRes = sipCpp->empty();
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_PDBRecords,sipNm_BALL_empty);

    return NULL;
}


extern "C" {static PyObject *meth_PDBRecords_clear(PyObject *, PyObject *);}
static PyObject *meth_PDBRecords_clear(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        PDBRecords *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_PDBRecords,&sipCpp))
        {
            try
            {
            sipCpp->clear();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_PDBRecords,sipNm_BALL_clear);

    return NULL;
}


extern "C" {static PyObject *meth_PDBRecords_resize(PyObject *, PyObject *);}
static PyObject *meth_PDBRecords_resize(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        int a0;
        String a1def = String();
        String * a1 = &a1def;
        int a1State = 0;
        PDBRecords *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bi|J1",&sipSelf,sipClass_PDBRecords,&sipCpp,&a0,sipClass_String,&a1,&a1State))
        {
            try
            {
            sipCpp->resize(a0,*a1);
            }
            catch (...)
            {

            sipReleaseInstance(a1,sipClass_String,a1State);
                sipRaiseUnknownException();
                return NULL;
            }

            sipReleaseInstance(a1,sipClass_String,a1State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_PDBRecords,sipNm_BALL_resize);

    return NULL;
}


extern "C" {static PyObject *meth_PDBRecords_front(PyObject *, PyObject *);}
static PyObject *meth_PDBRecords_front(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        PDBRecords *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_PDBRecords,&sipCpp))
        {
            String *sipRes;

            try
            {
            sipRes = &sipCpp->front();
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return sipConvertFromInstance(sipRes,sipClass_String,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_PDBRecords,sipNm_BALL_front);

    return NULL;
}


extern "C" {static PyObject *meth_PDBRecords_back(PyObject *, PyObject *);}
static PyObject *meth_PDBRecords_back(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        PDBRecords *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_PDBRecords,&sipCpp))
        {
            String *sipRes;

            try
            {
            sipRes = &sipCpp->back();
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return sipConvertFromInstance(sipRes,sipClass_String,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_PDBRecords,sipNm_BALL_back);

    return NULL;
}


extern "C" {static PyObject *meth_PDBRecords_push_back(PyObject *, PyObject *);}
static PyObject *meth_PDBRecords_push_back(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const String * a0;
        int a0State = 0;
        PDBRecords *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ1",&sipSelf,sipClass_PDBRecords,&sipCpp,sipClass_String,&a0,&a0State))
        {
            try
            {
            sipCpp->push_back(*a0);
            }
            catch (...)
            {

            sipReleaseInstance(const_cast<String *>(a0),sipClass_String,a0State);
                sipRaiseUnknownException();
                return NULL;
            }

            sipReleaseInstance(const_cast<String *>(a0),sipClass_String,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_PDBRecords,sipNm_BALL_push_back);

    return NULL;
}


extern "C" {static PyObject *meth_PDBRecords_pop_back(PyObject *, PyObject *);}
static PyObject *meth_PDBRecords_pop_back(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        PDBRecords *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_PDBRecords,&sipCpp))
        {
            try
            {
            sipCpp->pop_back();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_PDBRecords,sipNm_BALL_pop_back);

    return NULL;
}


extern "C" {static PyObject *meth_PDBRecords_swap(PyObject *, PyObject *);}
static PyObject *meth_PDBRecords_swap(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        PDBRecords * a0;
        PDBRecords *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_PDBRecords,&sipCpp,sipClass_PDBRecords,&a0))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_PDBRecords,sipNm_BALL_swap);

    return NULL;
}


extern "C" {static PyObject *slot_PDBRecords___ge__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_PDBRecords___ge__(PyObject *sipSelf,PyObject *sipArg)
{
    PDBRecords *sipCpp = reinterpret_cast<PDBRecords *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_PDBRecords));

    if (!sipCpp)
        return 0;

    int sipArgsParsed = 0;

    {
        const PDBRecords * a0;

        if (sipParseArgs(&sipArgsParsed,sipArg,"JA",sipClass_PDBRecords,&a0))
        {
            bool sipRes;

            try
            {
            sipRes = ((*sipCpp) >= *a0);
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return PyBool_FromLong(sipRes);
        }
    }

    return sipPySlotExtend(&sipModuleAPI_BALL,ge_slot,sipClass_PDBRecords,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_PDBRecords___le__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_PDBRecords___le__(PyObject *sipSelf,PyObject *sipArg)
{
    PDBRecords *sipCpp = reinterpret_cast<PDBRecords *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_PDBRecords));

    if (!sipCpp)
        return 0;

    int sipArgsParsed = 0;

    {
        const PDBRecords * a0;

        if (sipParseArgs(&sipArgsParsed,sipArg,"JA",sipClass_PDBRecords,&a0))
        {
            bool sipRes;

            try
            {
            sipRes = ((*sipCpp) <= *a0);
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return PyBool_FromLong(sipRes);
        }
    }

    return sipPySlotExtend(&sipModuleAPI_BALL,le_slot,sipClass_PDBRecords,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_PDBRecords___gt__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_PDBRecords___gt__(PyObject *sipSelf,PyObject *sipArg)
{
    PDBRecords *sipCpp = reinterpret_cast<PDBRecords *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_PDBRecords));

    if (!sipCpp)
        return 0;

    int sipArgsParsed = 0;

    {
        const PDBRecords * a0;

        if (sipParseArgs(&sipArgsParsed,sipArg,"JA",sipClass_PDBRecords,&a0))
        {
            bool sipRes;

            try
            {
            sipRes = ((*sipCpp) > *a0);
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return PyBool_FromLong(sipRes);
        }
    }

    return sipPySlotExtend(&sipModuleAPI_BALL,gt_slot,sipClass_PDBRecords,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_PDBRecords___lt__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_PDBRecords___lt__(PyObject *sipSelf,PyObject *sipArg)
{
    PDBRecords *sipCpp = reinterpret_cast<PDBRecords *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_PDBRecords));

    if (!sipCpp)
        return 0;

    int sipArgsParsed = 0;

    {
        const PDBRecords * a0;

        if (sipParseArgs(&sipArgsParsed,sipArg,"JA",sipClass_PDBRecords,&a0))
        {
            bool sipRes;

            try
            {
            sipRes = ((*sipCpp) < *a0);
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return PyBool_FromLong(sipRes);
        }
    }

    return sipPySlotExtend(&sipModuleAPI_BALL,lt_slot,sipClass_PDBRecords,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_PDBRecords___ne__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_PDBRecords___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    PDBRecords *sipCpp = reinterpret_cast<PDBRecords *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_PDBRecords));

    if (!sipCpp)
        return 0;

    int sipArgsParsed = 0;

    {
        const PDBRecords * a0;

        if (sipParseArgs(&sipArgsParsed,sipArg,"JA",sipClass_PDBRecords,&a0))
        {
            bool sipRes;

            try
            {
            sipRes = ((*sipCpp) != *a0);
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return PyBool_FromLong(sipRes);
        }
    }

    return sipPySlotExtend(&sipModuleAPI_BALL,ne_slot,sipClass_PDBRecords,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_PDBRecords___eq__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_PDBRecords___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    PDBRecords *sipCpp = reinterpret_cast<PDBRecords *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_PDBRecords));

    if (!sipCpp)
        return 0;

    int sipArgsParsed = 0;

    {
        const PDBRecords * a0;

        if (sipParseArgs(&sipArgsParsed,sipArg,"JA",sipClass_PDBRecords,&a0))
        {
            bool sipRes;

            try
            {
            sipRes = ((*sipCpp) == *a0);
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return PyBool_FromLong(sipRes);
        }
    }

    return sipPySlotExtend(&sipModuleAPI_BALL,eq_slot,sipClass_PDBRecords,sipSelf,sipArg);
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_PDBRecords(void *, sipWrapperType *);}
static void *cast_PDBRecords(void *ptr,sipWrapperType *targetClass)
{
    if (targetClass == sipClass_PDBRecords)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_PDBRecords(void *, int);}
static void release_PDBRecords(void *ptr,int state)
{
    if (state & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipPDBRecords *>(ptr);
    else
        delete reinterpret_cast<PDBRecords *>(ptr);
}


extern "C" {static void dealloc_PDBRecords(sipWrapper *);}
static void dealloc_PDBRecords(sipWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipPDBRecords *>(sipSelf->u.cppPtr)->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_PDBRecords(sipSelf->u.cppPtr,sipSelf->flags);
    }
}


extern "C" {static void *init_PDBRecords(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_PDBRecords(sipWrapper *sipSelf,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    sipPDBRecords *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            sipCpp = new sipPDBRecords();
        }
    }

    if (!sipCpp)
    {
        const PDBRecords * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_PDBRecords,&a0))
        {
            sipCpp = new sipPDBRecords(*a0);
        }
    }

    if (sipCpp)
        sipCpp->sipPySelf = sipSelf;

    return sipCpp;
}


extern "C" {static void *forceConvertTo_PDBRecords(PyObject *, int *);}
static void *forceConvertTo_PDBRecords(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_PDBRecords))
        return sipConvertToCpp(valobj,sipClass_PDBRecords,iserrp);

    sipBadClass(sipNm_BALL_PDBRecords);

    *iserrp = 1;

    return NULL;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_PDBRecords[] = {
    {(void *)slot_PDBRecords___ge__, ge_slot},
    {(void *)slot_PDBRecords___le__, le_slot},
    {(void *)slot_PDBRecords___gt__, gt_slot},
    {(void *)slot_PDBRecords___lt__, lt_slot},
    {(void *)slot_PDBRecords___ne__, ne_slot},
    {(void *)slot_PDBRecords___eq__, eq_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_PDBRecords[] = {
    {sipNm_BALL_back, meth_PDBRecords_back, METH_VARARGS, NULL},
    {sipNm_BALL_capacity, meth_PDBRecords_capacity, METH_VARARGS, NULL},
    {sipNm_BALL_clear, meth_PDBRecords_clear, METH_VARARGS, NULL},
    {sipNm_BALL_empty, meth_PDBRecords_empty, METH_VARARGS, NULL},
    {sipNm_BALL_front, meth_PDBRecords_front, METH_VARARGS, NULL},
    {sipNm_BALL_max_size, meth_PDBRecords_max_size, METH_VARARGS, NULL},
    {sipNm_BALL_pop_back, meth_PDBRecords_pop_back, METH_VARARGS, NULL},
    {sipNm_BALL_push_back, meth_PDBRecords_push_back, METH_VARARGS, NULL},
    {sipNm_BALL_resize, meth_PDBRecords_resize, METH_VARARGS, NULL},
    {sipNm_BALL_size, meth_PDBRecords_size, METH_VARARGS, NULL},
    {sipNm_BALL_swap, meth_PDBRecords_swap, METH_VARARGS, NULL}
};


sipTypeDef sipType_BALL_PDBRecords = {
    0,
    0,
    "BALL.PDBRecords",
    0,
    {0, 0, 1},
    0,
    slots_PDBRecords,
    11, methods_PDBRecords,
    0, 0,
    0,
    init_PDBRecords,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_PDBRecords,
    cast_PDBRecords,
    release_PDBRecords,
    forceConvertTo_PDBRecords,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
