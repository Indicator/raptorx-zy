/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLParameterSection.h"

#include "sipBALLOptions.h"
#include "sipBALLString.h"
#include "sipBALLParameterSection.h"
#include "sipBALLPosition.h"
#include "sipBALLParameters.h"


sipParameterSection::sipParameterSection() throw(): ParameterSection(), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,2);
}

sipParameterSection::sipParameterSection(const ParameterSection& a0) throw(): ParameterSection(a0), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,2);
}

sipParameterSection::~sipParameterSection() throw()
{
    sipCommonDtor(sipPySelf);
}

void sipParameterSection::clear() throw()
{
    extern void sipVH_BALL_0(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipNm_BALL_clear);

    if (!meth)
    {
        ParameterSection::clear();
        return;
    }

    sipVH_BALL_0(sipGILState,meth);
}

bool sipParameterSection::isValid() const throw()
{
    extern bool sipVH_BALL_4(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<sipMethodCache *>(&sipPyMethods[1]),sipPySelf,NULL,sipNm_BALL_isValid);

    if (!meth)
        return ParameterSection::isValid();

    return sipVH_BALL_4(sipGILState,meth);
}


extern "C" {static PyObject *meth_ParameterSection_extractSection(PyObject *, PyObject *);}
static PyObject *meth_ParameterSection_extractSection(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Parameters * a0;
        const String * a1;
        int a1State = 0;
        ParameterSection *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJAJ1",&sipSelf,sipClass_ParameterSection,&sipCpp,sipClass_Parameters,&a0,sipClass_String,&a1,&a1State))
        {
            bool sipRes;

            sipRes = sipCpp->extractSection(*a0,*a1);

            sipReleaseInstance(const_cast<String *>(a1),sipClass_String,a1State);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_ParameterSection,sipNm_BALL_extractSection);

    return NULL;
}


extern "C" {static PyObject *meth_ParameterSection_getSectionName(PyObject *, PyObject *);}
static PyObject *meth_ParameterSection_getSectionName(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        ParameterSection *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_ParameterSection,&sipCpp))
        {
            const String *sipRes;

            sipRes = &sipCpp->getSectionName();

            return sipConvertFromInstance(const_cast<String *>(sipRes),sipClass_String,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_ParameterSection,sipNm_BALL_getSectionName);

    return NULL;
}


extern "C" {static PyObject *meth_ParameterSection_getValue(PyObject *, PyObject *);}
static PyObject *meth_ParameterSection_getValue(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const String * a0;
        int a0State = 0;
        const String * a1;
        int a1State = 0;
        ParameterSection *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ1J1",&sipSelf,sipClass_ParameterSection,&sipCpp,sipClass_String,&a0,&a0State,sipClass_String,&a1,&a1State))
        {
            const String *sipRes;

            sipRes = &sipCpp->getValue(*a0,*a1);

            sipReleaseInstance(const_cast<String *>(a0),sipClass_String,a0State);
            sipReleaseInstance(const_cast<String *>(a1),sipClass_String,a1State);

            return sipConvertFromInstance(const_cast<String *>(sipRes),sipClass_String,NULL);
        }
    }

    {
        Position * a0;
        int a0State = 0;
        Position * a1;
        int a1State = 0;
        ParameterSection *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BM1M1",&sipSelf,sipClass_ParameterSection,&sipCpp,sipMappedType_Position,&a0,&a0State,sipMappedType_Position,&a1,&a1State))
        {
            const String *sipRes;

            sipRes = &sipCpp->getValue(*a0,*a1);

            sipReleaseMappedType(a0,sipMappedType_Position,a0State);
            sipReleaseMappedType(a1,sipMappedType_Position,a1State);

            return sipConvertFromInstance(const_cast<String *>(sipRes),sipClass_String,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_ParameterSection,sipNm_BALL_getValue);

    return NULL;
}


extern "C" {static PyObject *meth_ParameterSection_has(PyObject *, PyObject *);}
static PyObject *meth_ParameterSection_has(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const String * a0;
        int a0State = 0;
        const String * a1;
        int a1State = 0;
        ParameterSection *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ1J1",&sipSelf,sipClass_ParameterSection,&sipCpp,sipClass_String,&a0,&a0State,sipClass_String,&a1,&a1State))
        {
            bool sipRes;

            sipRes = sipCpp->has(*a0,*a1);

            sipReleaseInstance(const_cast<String *>(a0),sipClass_String,a0State);
            sipReleaseInstance(const_cast<String *>(a1),sipClass_String,a1State);

            return PyBool_FromLong(sipRes);
        }
    }

    {
        const String * a0;
        int a0State = 0;
        ParameterSection *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ1",&sipSelf,sipClass_ParameterSection,&sipCpp,sipClass_String,&a0,&a0State))
        {
            bool sipRes;

            sipRes = sipCpp->has(*a0);

            sipReleaseInstance(const_cast<String *>(a0),sipClass_String,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_ParameterSection,sipNm_BALL_has);

    return NULL;
}


extern "C" {static PyObject *meth_ParameterSection_hasVariable(PyObject *, PyObject *);}
static PyObject *meth_ParameterSection_hasVariable(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const String * a0;
        int a0State = 0;
        ParameterSection *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ1",&sipSelf,sipClass_ParameterSection,&sipCpp,sipClass_String,&a0,&a0State))
        {
            bool sipRes;

            sipRes = sipCpp->hasVariable(*a0);

            sipReleaseInstance(const_cast<String *>(a0),sipClass_String,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_ParameterSection,sipNm_BALL_hasVariable);

    return NULL;
}


extern "C" {static PyObject *meth_ParameterSection_getColumnIndex(PyObject *, PyObject *);}
static PyObject *meth_ParameterSection_getColumnIndex(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const String * a0;
        int a0State = 0;
        ParameterSection *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ1",&sipSelf,sipClass_ParameterSection,&sipCpp,sipClass_String,&a0,&a0State))
        {
            Position *sipRes;

            sipRes = new Position(sipCpp->getColumnIndex(*a0));

            sipReleaseInstance(const_cast<String *>(a0),sipClass_String,a0State);

            PyObject *sipResObj = sipConvertFromMappedType(sipRes,sipMappedType_Position,NULL);
            delete sipRes;

            return sipResObj;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_ParameterSection,sipNm_BALL_getColumnIndex);

    return NULL;
}


extern "C" {static PyObject *meth_ParameterSection_getNumberOfVariables(PyObject *, PyObject *);}
static PyObject *meth_ParameterSection_getNumberOfVariables(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        ParameterSection *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_ParameterSection,&sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->getNumberOfVariables();

            return PyInt_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_ParameterSection,sipNm_BALL_getNumberOfVariables);

    return NULL;
}


extern "C" {static PyObject *meth_ParameterSection_getNumberOfKeys(PyObject *, PyObject *);}
static PyObject *meth_ParameterSection_getNumberOfKeys(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        ParameterSection *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_ParameterSection,&sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->getNumberOfKeys();

            return PyInt_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_ParameterSection,sipNm_BALL_getNumberOfKeys);

    return NULL;
}


extern "C" {static PyObject *meth_ParameterSection_getKey(PyObject *, PyObject *);}
static PyObject *meth_ParameterSection_getKey(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Position * a0;
        int a0State = 0;
        ParameterSection *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BM1",&sipSelf,sipClass_ParameterSection,&sipCpp,sipMappedType_Position,&a0,&a0State))
        {
            const String *sipRes;

            sipRes = &sipCpp->getKey(*a0);

            sipReleaseMappedType(a0,sipMappedType_Position,a0State);

            return sipConvertFromInstance(const_cast<String *>(sipRes),sipClass_String,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_ParameterSection,sipNm_BALL_getKey);

    return NULL;
}


extern "C" {static PyObject *meth_ParameterSection_clear(PyObject *, PyObject *);}
static PyObject *meth_ParameterSection_clear(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        ParameterSection *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_ParameterSection,&sipCpp))
        {
            (sipSelfWasArg ? sipCpp->ParameterSection::clear() : sipCpp->clear());

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_ParameterSection,sipNm_BALL_clear);

    return NULL;
}


extern "C" {static PyObject *meth_ParameterSection_isValid(PyObject *, PyObject *);}
static PyObject *meth_ParameterSection_isValid(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        ParameterSection *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_ParameterSection,&sipCpp))
        {
            bool sipRes;

            sipRes = (sipSelfWasArg ? sipCpp->ParameterSection::isValid() : sipCpp->isValid());

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_ParameterSection,sipNm_BALL_isValid);

    return NULL;
}


extern "C" {static PyObject *slot_ParameterSection___eq__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_ParameterSection___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    ParameterSection *sipCpp = reinterpret_cast<ParameterSection *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_ParameterSection));

    if (!sipCpp)
        return 0;

    int sipArgsParsed = 0;

    {
        const ParameterSection * a0;

        if (sipParseArgs(&sipArgsParsed,sipArg,"JA",sipClass_ParameterSection,&a0))
        {
            bool sipRes;

            sipRes = ((*sipCpp) == *a0);

            return PyBool_FromLong(sipRes);
        }
    }

    return sipPySlotExtend(&sipModuleAPI_BALL,eq_slot,sipClass_ParameterSection,sipSelf,sipArg);
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_ParameterSection(void *, sipWrapperType *);}
static void *cast_ParameterSection(void *ptr,sipWrapperType *targetClass)
{
    if (targetClass == sipClass_ParameterSection)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_ParameterSection(void *, int);}
static void release_ParameterSection(void *ptr,int state)
{
    if (state & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipParameterSection *>(ptr);
    else
        delete reinterpret_cast<ParameterSection *>(ptr);
}


extern "C" {static void dealloc_ParameterSection(sipWrapper *);}
static void dealloc_ParameterSection(sipWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipParameterSection *>(sipSelf->u.cppPtr)->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_ParameterSection(sipSelf->u.cppPtr,sipSelf->flags);
    }
}


extern "C" {static void *init_ParameterSection(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_ParameterSection(sipWrapper *sipSelf,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    sipParameterSection *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            sipCpp = new sipParameterSection();
        }
    }

    if (!sipCpp)
    {
        const ParameterSection * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_ParameterSection,&a0))
        {
            sipCpp = new sipParameterSection(*a0);
        }
    }

    if (sipCpp)
        sipCpp->sipPySelf = sipSelf;

    return sipCpp;
}


extern "C" {static PyObject *var_ParameterSection_options(PyObject *, PyObject *);}
static PyObject *var_ParameterSection_options(PyObject *sipSelf,PyObject *sipPy)
{
    int sipIsErr = 0;
   Options *sipVal;
    ParameterSection *sipCpp = reinterpret_cast<ParameterSection *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_ParameterSection));

    if (!sipCpp)
        return NULL;

    if (sipPy == NULL)
    {
        sipVal = &sipCpp->options;

        sipPy = sipConvertFromInstance(sipVal,sipClass_Options,NULL);

        return sipPy;
    }

    sipVal = reinterpret_cast<Options *>(sipForceConvertToInstance(sipPy,sipClass_Options,NULL,SIP_NOT_NONE,NULL,&sipIsErr));

    if (sipIsErr)
        return NULL;

    sipCpp->options = *sipVal;

    Py_INCREF(Py_None);
    return Py_None;
}

PyMethodDef variables_ParameterSection[] = {
    {sipNm_BALL_options, var_ParameterSection_options, 0, NULL},
    {0, 0, 0, 0}
};


extern "C" {static void *forceConvertTo_ParameterSection(PyObject *, int *);}
static void *forceConvertTo_ParameterSection(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_ParameterSection))
        return sipConvertToCpp(valobj,sipClass_ParameterSection,iserrp);

    sipBadClass(sipNm_BALL_ParameterSection);

    *iserrp = 1;

    return NULL;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_ParameterSection[] = {
    {(void *)slot_ParameterSection___eq__, eq_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_ParameterSection[] = {
    {sipNm_BALL_clear, meth_ParameterSection_clear, METH_VARARGS, NULL},
    {sipNm_BALL_extractSection, meth_ParameterSection_extractSection, METH_VARARGS, NULL},
    {sipNm_BALL_getColumnIndex, meth_ParameterSection_getColumnIndex, METH_VARARGS, NULL},
    {sipNm_BALL_getKey, meth_ParameterSection_getKey, METH_VARARGS, NULL},
    {sipNm_BALL_getNumberOfKeys, meth_ParameterSection_getNumberOfKeys, METH_VARARGS, NULL},
    {sipNm_BALL_getNumberOfVariables, meth_ParameterSection_getNumberOfVariables, METH_VARARGS, NULL},
    {sipNm_BALL_getSectionName, meth_ParameterSection_getSectionName, METH_VARARGS, NULL},
    {sipNm_BALL_getValue, meth_ParameterSection_getValue, METH_VARARGS, NULL},
    {sipNm_BALL_has, meth_ParameterSection_has, METH_VARARGS, NULL},
    {sipNm_BALL_hasVariable, meth_ParameterSection_hasVariable, METH_VARARGS, NULL},
    {sipNm_BALL_isValid, meth_ParameterSection_isValid, METH_VARARGS, NULL}
};

static sipEnumMemberDef enummembers_ParameterSection[] = {
    {sipNm_BALL_MAX_FIELDS, ParameterSection::MAX_FIELDS, -1},
};


sipTypeDef sipType_BALL_ParameterSection = {
    0,
    0,
    "BALL.ParameterSection",
    0,
    {0, 0, 1},
    0,
    slots_ParameterSection,
    11, methods_ParameterSection,
    1, enummembers_ParameterSection,
    variables_ParameterSection,
    init_ParameterSection,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_ParameterSection,
    cast_ParameterSection,
    release_ParameterSection,
    forceConvertTo_ParameterSection,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
