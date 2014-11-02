/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLMolecularInformation.h"

#include "sipBALLMolecularInformation.h"
#include "sipBALLComposite.h"
#include "sipBALLString.h"


sipMolecularInformation::sipMolecularInformation() throw(): MolecularInformation(), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,2);
}

sipMolecularInformation::sipMolecularInformation(const MolecularInformation& a0): MolecularInformation(a0), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,2);
}

sipMolecularInformation::~sipMolecularInformation() throw()
{
    sipCommonDtor(sipPySelf);
}

void sipMolecularInformation::clear() throw()
{
    extern void sipVH_BALL_0(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipNm_BALL_clear);

    if (!meth)
    {
        MolecularInformation::clear();
        return;
    }

    sipVH_BALL_0(sipGILState,meth);
}

void sipMolecularInformation::visit(Composite& a0)
{
    extern void sipVH_BALL_2(sip_gilstate_t,PyObject *,Composite&);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,NULL,sipNm_BALL_visit);

    if (!meth)
    {
        MolecularInformation::visit(a0);
        return;
    }

    sipVH_BALL_2(sipGILState,meth,a0);
}


extern "C" {static PyObject *meth_MolecularInformation_clear(PyObject *, PyObject *);}
static PyObject *meth_MolecularInformation_clear(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        MolecularInformation *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_MolecularInformation,&sipCpp))
        {
            (sipSelfWasArg ? sipCpp->MolecularInformation::clear() : sipCpp->clear());

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_MolecularInformation,sipNm_BALL_clear);

    return NULL;
}


extern "C" {static PyObject *meth_MolecularInformation_getType(PyObject *, PyObject *);}
static PyObject *meth_MolecularInformation_getType(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        MolecularInformation *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_MolecularInformation,&sipCpp))
        {
            MolecularInformation::Type sipRes;

            sipRes = sipCpp->getType();

            return sipConvertFromNamedEnum(sipRes,sipEnum_MolecularInformation_Type);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_MolecularInformation,sipNm_BALL_getType);

    return NULL;
}


extern "C" {static PyObject *meth_MolecularInformation_getName(PyObject *, PyObject *);}
static PyObject *meth_MolecularInformation_getName(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        MolecularInformation *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_MolecularInformation,&sipCpp))
        {
            String *sipRes;

            sipRes = new String(sipCpp->getName());

            return sipConvertFromNewInstance(sipRes,sipClass_String,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_MolecularInformation,sipNm_BALL_getName);

    return NULL;
}


extern "C" {static PyObject *meth_MolecularInformation_getTypeName(PyObject *, PyObject *);}
static PyObject *meth_MolecularInformation_getTypeName(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        MolecularInformation *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_MolecularInformation,&sipCpp))
        {
            String *sipRes;

            sipRes = new String(sipCpp->getTypeName());

            return sipConvertFromNewInstance(sipRes,sipClass_String,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_MolecularInformation,sipNm_BALL_getTypeName);

    return NULL;
}


extern "C" {static PyObject *meth_MolecularInformation_visit(PyObject *, PyObject *);}
static PyObject *meth_MolecularInformation_visit(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        Composite * a0;
        MolecularInformation *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_MolecularInformation,&sipCpp,sipClass_Composite,&a0))
        {
            try
            {
            (sipSelfWasArg ? sipCpp->MolecularInformation::visit(*a0) : sipCpp->visit(*a0));
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_MolecularInformation,sipNm_BALL_visit);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_MolecularInformation(void *, sipWrapperType *);}
static void *cast_MolecularInformation(void *ptr,sipWrapperType *targetClass)
{
    if (targetClass == sipClass_MolecularInformation)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_MolecularInformation(void *, int);}
static void release_MolecularInformation(void *ptr,int state)
{
    if (state & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipMolecularInformation *>(ptr);
    else
        delete reinterpret_cast<MolecularInformation *>(ptr);
}


extern "C" {static void dealloc_MolecularInformation(sipWrapper *);}
static void dealloc_MolecularInformation(sipWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipMolecularInformation *>(sipSelf->u.cppPtr)->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_MolecularInformation(sipSelf->u.cppPtr,sipSelf->flags);
    }
}


extern "C" {static void *init_MolecularInformation(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_MolecularInformation(sipWrapper *sipSelf,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    sipMolecularInformation *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            sipCpp = new sipMolecularInformation();
        }
    }

    if (!sipCpp)
    {
        const MolecularInformation * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_MolecularInformation,&a0))
        {
            try
            {
            sipCpp = new sipMolecularInformation(*a0);
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }
        }
    }

    if (sipCpp)
        sipCpp->sipPySelf = sipSelf;

    return sipCpp;
}


extern "C" {static void *forceConvertTo_MolecularInformation(PyObject *, int *);}
static void *forceConvertTo_MolecularInformation(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_MolecularInformation))
        return sipConvertToCpp(valobj,sipClass_MolecularInformation,iserrp);

    sipBadClass(sipNm_BALL_MolecularInformation);

    *iserrp = 1;

    return NULL;
}


static PyMethodDef methods_MolecularInformation[] = {
    {sipNm_BALL_clear, meth_MolecularInformation_clear, METH_VARARGS, NULL},
    {sipNm_BALL_getName, meth_MolecularInformation_getName, METH_VARARGS, NULL},
    {sipNm_BALL_getType, meth_MolecularInformation_getType, METH_VARARGS, NULL},
    {sipNm_BALL_getTypeName, meth_MolecularInformation_getTypeName, METH_VARARGS, NULL},
    {sipNm_BALL_visit, meth_MolecularInformation_visit, METH_VARARGS, NULL}
};

static sipEnumMemberDef enummembers_MolecularInformation[] = {
    {sipNm_BALL_TYPE__ATOM, MolecularInformation::TYPE__ATOM, 35},
    {sipNm_BALL_TYPE__BOND, MolecularInformation::TYPE__BOND, 35},
    {sipNm_BALL_TYPE__CHAIN, MolecularInformation::TYPE__CHAIN, 35},
    {sipNm_BALL_TYPE__FRAGMENT, MolecularInformation::TYPE__FRAGMENT, 35},
    {sipNm_BALL_TYPE__MOLECULE, MolecularInformation::TYPE__MOLECULE, 35},
    {sipNm_BALL_TYPE__PROTEIN, MolecularInformation::TYPE__PROTEIN, 35},
    {sipNm_BALL_TYPE__RESIDUE, MolecularInformation::TYPE__RESIDUE, 35},
    {sipNm_BALL_TYPE__SECONDARY_STRUCTURE, MolecularInformation::TYPE__SECONDARY_STRUCTURE, 35},
    {sipNm_BALL_TYPE__SYSTEM, MolecularInformation::TYPE__SYSTEM, 35},
    {sipNm_BALL_TYPE__UNKNOWN, MolecularInformation::TYPE__UNKNOWN, 35},
};


sipTypeDef sipType_BALL_MolecularInformation = {
    0,
    0,
    "BALL.MolecularInformation",
    0,
    {0, 0, 1},
    0,
    0,
    5, methods_MolecularInformation,
    10, enummembers_MolecularInformation,
    0,
    init_MolecularInformation,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_MolecularInformation,
    cast_MolecularInformation,
    release_MolecularInformation,
    forceConvertTo_MolecularInformation,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
