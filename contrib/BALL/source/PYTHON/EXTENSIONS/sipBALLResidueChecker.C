/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLResidueChecker.h"

#include "sipBALLResidueProcessor.h"
#include "sipBALLFragmentDB.h"
#include "sipBALLResidueChecker.h"
#include "sipBALLProcessor.h"
#include "sipBALLResidue.h"



extern "C" {static PyObject *meth_ResidueChecker_enable(PyObject *, PyObject *);}
static PyObject *meth_ResidueChecker_enable(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        ResidueChecker::TestType a0;
        ResidueChecker *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BE",&sipSelf,sipClass_ResidueChecker,&sipCpp,sipEnum_ResidueChecker_TestType,&a0))
        {
            sipCpp->enable(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_ResidueChecker,sipNm_BALL_enable);

    return NULL;
}


extern "C" {static PyObject *meth_ResidueChecker_disable(PyObject *, PyObject *);}
static PyObject *meth_ResidueChecker_disable(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        ResidueChecker::TestType a0;
        ResidueChecker *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BE",&sipSelf,sipClass_ResidueChecker,&sipCpp,sipEnum_ResidueChecker_TestType,&a0))
        {
            sipCpp->disable(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_ResidueChecker,sipNm_BALL_disable);

    return NULL;
}


extern "C" {static PyObject *meth_ResidueChecker_isEnabled(PyObject *, PyObject *);}
static PyObject *meth_ResidueChecker_isEnabled(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        ResidueChecker::TestType a0;
        ResidueChecker *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BE",&sipSelf,sipClass_ResidueChecker,&sipCpp,sipEnum_ResidueChecker_TestType,&a0))
        {
            bool sipRes;

            sipRes = sipCpp->isEnabled(a0);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_ResidueChecker,sipNm_BALL_isEnabled);

    return NULL;
}


extern "C" {static PyObject *meth_ResidueChecker_getStatus(PyObject *, PyObject *);}
static PyObject *meth_ResidueChecker_getStatus(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        ResidueChecker *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_ResidueChecker,&sipCpp))
        {
            bool sipRes;

            try
            {
            sipRes = sipCpp->getStatus();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_ResidueChecker,sipNm_BALL_getStatus);

    return NULL;
}


extern "C" {static PyObject *meth_ResidueChecker_start(PyObject *, PyObject *);}
static PyObject *meth_ResidueChecker_start(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        ResidueChecker *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_ResidueChecker,&sipCpp))
        {
            bool sipRes;

            try
            {
            sipRes = sipCpp->start();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_ResidueChecker,sipNm_BALL_start);

    return NULL;
}


extern "C" {static PyObject *meth_ResidueChecker_finish(PyObject *, PyObject *);}
static PyObject *meth_ResidueChecker_finish(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        ResidueChecker *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_ResidueChecker,&sipCpp))
        {
            bool sipRes;

            try
            {
            sipRes = sipCpp->finish();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_ResidueChecker,sipNm_BALL_finish);

    return NULL;
}


extern "C" {static PyObject *slot_ResidueChecker___call__(PyObject *sipSelf,PyObject *sipArgs);}
static PyObject *slot_ResidueChecker___call__(PyObject *sipSelf,PyObject *sipArgs)
{
    ResidueChecker *sipCpp = reinterpret_cast<ResidueChecker *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_ResidueChecker));

    if (!sipCpp)
        return 0;

    int sipArgsParsed = 0;

    {
        Residue * a0;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"JA",sipClass_Residue,&a0))
        {
            Processor::Result sipRes = (Processor::Result)0;

#line 47 "residueChecker.sip"
  sipRes = sipCpp->operator () (*a0);
#line 216 "sipBALLResidueChecker.C"

            return sipConvertFromNamedEnum(sipRes,sipEnum_Processor_Result);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_ResidueChecker,sipNm_BALL___call__);

    return 0;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_ResidueChecker(void *, sipWrapperType *);}
static void *cast_ResidueChecker(void *ptr,sipWrapperType *targetClass)
{
    void *res;

    if (targetClass == sipClass_ResidueChecker)
        return ptr;

    if ((res = sipCast_ResidueProcessor((ResidueProcessor *)(ResidueChecker *)ptr,targetClass)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_ResidueChecker(void *, int);}
static void release_ResidueChecker(void *ptr,int)
{
    delete reinterpret_cast<ResidueChecker *>(ptr);
}


extern "C" {static void dealloc_ResidueChecker(sipWrapper *);}
static void dealloc_ResidueChecker(sipWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_ResidueChecker(sipSelf->u.cppPtr,0);
    }
}


extern "C" {static void *init_ResidueChecker(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_ResidueChecker(sipWrapper *,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    ResidueChecker *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            try
            {
            sipCpp = new ResidueChecker();
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
        FragmentDB * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_FragmentDB,&a0))
        {
            try
            {
            sipCpp = new ResidueChecker(*a0);
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
        const ResidueChecker * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_ResidueChecker,&a0))
        {
            try
            {
            sipCpp = new ResidueChecker(*a0);
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


extern "C" {static void *forceConvertTo_ResidueChecker(PyObject *, int *);}
static void *forceConvertTo_ResidueChecker(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_ResidueChecker))
        return sipConvertToCpp(valobj,sipClass_ResidueChecker,iserrp);

    sipBadClass(sipNm_BALL_ResidueChecker);

    *iserrp = 1;

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedClassDef supers_ResidueChecker[] = {{84, 255, 1}};


/* Define this type's Python slots. */
static sipPySlotDef slots_ResidueChecker[] = {
    {(void *)slot_ResidueChecker___call__, call_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_ResidueChecker[] = {
    {sipNm_BALL_disable, meth_ResidueChecker_disable, METH_VARARGS, NULL},
    {sipNm_BALL_enable, meth_ResidueChecker_enable, METH_VARARGS, NULL},
    {sipNm_BALL_finish, meth_ResidueChecker_finish, METH_VARARGS, NULL},
    {sipNm_BALL_getStatus, meth_ResidueChecker_getStatus, METH_VARARGS, NULL},
    {sipNm_BALL_isEnabled, meth_ResidueChecker_isEnabled, METH_VARARGS, NULL},
    {sipNm_BALL_start, meth_ResidueChecker_start, METH_VARARGS, NULL}
};

static sipEnumMemberDef enummembers_ResidueChecker[] = {
    {sipNm_BALL_DUPLICATE_ATOM_NAMES, ResidueChecker::DUPLICATE_ATOM_NAMES, 14},
    {sipNm_BALL_ELEMENTS, ResidueChecker::ELEMENTS, 14},
    {sipNm_BALL_EXTRA_ATOMS, ResidueChecker::EXTRA_ATOMS, 14},
    {sipNm_BALL_LARGE_CHARGES, ResidueChecker::LARGE_CHARGES, 14},
    {sipNm_BALL_LARGE_NET_CHARGE, ResidueChecker::LARGE_NET_CHARGE, 14},
    {sipNm_BALL_MISSING_ATOMS, ResidueChecker::MISSING_ATOMS, 14},
    {sipNm_BALL_NAN_POSITIONS, ResidueChecker::NAN_POSITIONS, 14},
    {sipNm_BALL_NON_INTEGRAL_NET_CHARGE, ResidueChecker::NON_INTEGRAL_NET_CHARGE, 14},
    {sipNm_BALL_NUMBER_OF_TESTS, ResidueChecker::NUMBER_OF_TESTS, 14},
    {sipNm_BALL_OVERLAPPING_ATOMS, ResidueChecker::OVERLAPPING_ATOMS, 14},
    {sipNm_BALL_SUSPECT_BOND_LENGTHS, ResidueChecker::SUSPECT_BOND_LENGTHS, 14},
    {sipNm_BALL_UNKNOWN_RESIDUES, ResidueChecker::UNKNOWN_RESIDUES, 14},
};


sipTypeDef sipType_BALL_ResidueChecker = {
    0,
    0,
    "BALL.ResidueChecker",
    0,
    {0, 0, 1},
    supers_ResidueChecker,
    slots_ResidueChecker,
    6, methods_ResidueChecker,
    12, enummembers_ResidueChecker,
    0,
    init_ResidueChecker,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_ResidueChecker,
    cast_ResidueChecker,
    release_ResidueChecker,
    forceConvertTo_ResidueChecker,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
