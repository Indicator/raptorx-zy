/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLParameters.h"

#include "sipBALLString.h"
#include "sipBALLParameters.h"
#include "sipBALLINIFile.h"


sipParameters::sipParameters(): Parameters(), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,2);
}

sipParameters::sipParameters(const String& a0): Parameters(a0), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,2);
}

sipParameters::sipParameters(const Parameters& a0): Parameters(a0), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,2);
}

sipParameters::~sipParameters()
{
    sipCommonDtor(sipPySelf);
}

void sipParameters::clear() throw()
{
    extern void sipVH_BALL_0(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipNm_BALL_clear);

    if (!meth)
    {
        Parameters::clear();
        return;
    }

    sipVH_BALL_0(sipGILState,meth);
}

bool sipParameters::isValid() const
{
    extern bool sipVH_BALL_4(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<sipMethodCache *>(&sipPyMethods[1]),sipPySelf,NULL,sipNm_BALL_isValid);

    if (!meth)
        return Parameters::isValid();

    return sipVH_BALL_4(sipGILState,meth);
}


extern "C" {static PyObject *meth_Parameters_clear(PyObject *, PyObject *);}
static PyObject *meth_Parameters_clear(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        Parameters *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Parameters,&sipCpp))
        {
            (sipSelfWasArg ? sipCpp->Parameters::clear() : sipCpp->clear());

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Parameters,sipNm_BALL_clear);

    return NULL;
}


extern "C" {static PyObject *meth_Parameters_setFilename(PyObject *, PyObject *);}
static PyObject *meth_Parameters_setFilename(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const String * a0;
        int a0State = 0;
        Parameters *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ1",&sipSelf,sipClass_Parameters,&sipCpp,sipClass_String,&a0,&a0State))
        {
            try
            {
            sipCpp->setFilename(*a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Parameters,sipNm_BALL_setFilename);

    return NULL;
}


extern "C" {static PyObject *meth_Parameters_getFilename(PyObject *, PyObject *);}
static PyObject *meth_Parameters_getFilename(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Parameters *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Parameters,&sipCpp))
        {
            const String *sipRes;

            try
            {
            sipRes = &sipCpp->getFilename();
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return sipConvertFromInstance(const_cast<String *>(sipRes),sipClass_String,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Parameters,sipNm_BALL_getFilename);

    return NULL;
}


extern "C" {static PyObject *meth_Parameters_getParameterFile(PyObject *, PyObject *);}
static PyObject *meth_Parameters_getParameterFile(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Parameters *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Parameters,&sipCpp))
        {
            INIFile *sipRes;

            try
            {
            sipRes = &sipCpp->getParameterFile();
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return sipConvertFromInstance(sipRes,sipClass_INIFile,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Parameters,sipNm_BALL_getParameterFile);

    return NULL;
}


extern "C" {static PyObject *meth_Parameters_init(PyObject *, PyObject *);}
static PyObject *meth_Parameters_init(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Parameters *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Parameters,&sipCpp))
        {
            bool sipRes;

            try
            {
            sipRes = sipCpp->init();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Parameters,sipNm_BALL_init);

    return NULL;
}


extern "C" {static PyObject *meth_Parameters_isValid(PyObject *, PyObject *);}
static PyObject *meth_Parameters_isValid(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        Parameters *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Parameters,&sipCpp))
        {
            bool sipRes;

            try
            {
            sipRes = (sipSelfWasArg ? sipCpp->Parameters::isValid() : sipCpp->isValid());
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Parameters,sipNm_BALL_isValid);

    return NULL;
}


extern "C" {static PyObject *slot_Parameters___eq__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_Parameters___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    Parameters *sipCpp = reinterpret_cast<Parameters *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_Parameters));

    if (!sipCpp)
        return 0;

    int sipArgsParsed = 0;

    {
        const Parameters * a0;

        if (sipParseArgs(&sipArgsParsed,sipArg,"JA",sipClass_Parameters,&a0))
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

    return sipPySlotExtend(&sipModuleAPI_BALL,eq_slot,sipClass_Parameters,sipSelf,sipArg);
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_Parameters(void *, sipWrapperType *);}
static void *cast_Parameters(void *ptr,sipWrapperType *targetClass)
{
    if (targetClass == sipClass_Parameters)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_Parameters(void *, int);}
static void release_Parameters(void *ptr,int state)
{
    if (state & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipParameters *>(ptr);
    else
        delete reinterpret_cast<Parameters *>(ptr);
}


extern "C" {static void dealloc_Parameters(sipWrapper *);}
static void dealloc_Parameters(sipWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipParameters *>(sipSelf->u.cppPtr)->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_Parameters(sipSelf->u.cppPtr,sipSelf->flags);
    }
}


extern "C" {static void *init_Parameters(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_Parameters(sipWrapper *sipSelf,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    sipParameters *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            try
            {
            sipCpp = new sipParameters();
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
        const String * a0;
        int a0State = 0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"J1",sipClass_String,&a0,&a0State))
        {
            try
            {
            sipCpp = new sipParameters(*a0);
            }
            catch (...)
            {

            sipReleaseInstance(const_cast<String *>(a0),sipClass_String,a0State);
                sipRaiseUnknownException();
                return NULL;
            }

            sipReleaseInstance(const_cast<String *>(a0),sipClass_String,a0State);
        }
    }

    if (!sipCpp)
    {
        const Parameters * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_Parameters,&a0))
        {
            try
            {
            sipCpp = new sipParameters(*a0);
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


extern "C" {static void *forceConvertTo_Parameters(PyObject *, int *);}
static void *forceConvertTo_Parameters(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_Parameters))
        return sipConvertToCpp(valobj,sipClass_Parameters,iserrp);

    sipBadClass(sipNm_BALL_Parameters);

    *iserrp = 1;

    return NULL;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_Parameters[] = {
    {(void *)slot_Parameters___eq__, eq_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_Parameters[] = {
    {sipNm_BALL_clear, meth_Parameters_clear, METH_VARARGS, NULL},
    {sipNm_BALL_getFilename, meth_Parameters_getFilename, METH_VARARGS, NULL},
    {sipNm_BALL_getParameterFile, meth_Parameters_getParameterFile, METH_VARARGS, NULL},
    {sipNm_BALL_init, meth_Parameters_init, METH_VARARGS, NULL},
    {sipNm_BALL_isValid, meth_Parameters_isValid, METH_VARARGS, NULL},
    {sipNm_BALL_setFilename, meth_Parameters_setFilename, METH_VARARGS, NULL}
};


sipTypeDef sipType_BALL_Parameters = {
    0,
    0,
    "BALL.Parameters",
    0,
    {0, 0, 1},
    0,
    slots_Parameters,
    6, methods_Parameters,
    0, 0,
    0,
    init_Parameters,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_Parameters,
    cast_Parameters,
    release_Parameters,
    forceConvertTo_Parameters,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
