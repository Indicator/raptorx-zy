/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLAssignRadiusProcessor.h"

#include "sipBALLAtomProcessor.h"
#include "sipBALLString.h"
#include "sipBALLAssignRadiusProcessor.h"
#include "sipBALLProcessor.h"
#include "sipBALLAtom.h"


sipAssignRadiusProcessor::sipAssignRadiusProcessor(): AssignRadiusProcessor(), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,2);
}

sipAssignRadiusProcessor::sipAssignRadiusProcessor(const String& a0): AssignRadiusProcessor(a0), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,2);
}

sipAssignRadiusProcessor::sipAssignRadiusProcessor(const AssignRadiusProcessor& a0): AssignRadiusProcessor(a0), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,2);
}

sipAssignRadiusProcessor::~sipAssignRadiusProcessor()
{
    sipCommonDtor(sipPySelf);
}

bool sipAssignRadiusProcessor::start()
{
    extern bool sipVH_BALL_4(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipNm_BALL_start);

    if (!meth)
        return AssignRadiusProcessor::start();

    return sipVH_BALL_4(sipGILState,meth);
}

bool sipAssignRadiusProcessor::finish()
{
    extern bool sipVH_BALL_4(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,NULL,sipNm_BALL_finish);

    if (!meth)
        return AssignRadiusProcessor::finish();

    return sipVH_BALL_4(sipGILState,meth);
}


extern "C" {static PyObject *meth_AssignRadiusProcessor_start(PyObject *, PyObject *);}
static PyObject *meth_AssignRadiusProcessor_start(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        AssignRadiusProcessor *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_AssignRadiusProcessor,&sipCpp))
        {
            bool sipRes;

            try
            {
            sipRes = (sipSelfWasArg ? sipCpp->AssignRadiusProcessor::start() : sipCpp->start());
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_AssignRadiusProcessor,sipNm_BALL_start);

    return NULL;
}


extern "C" {static PyObject *meth_AssignRadiusProcessor_finish(PyObject *, PyObject *);}
static PyObject *meth_AssignRadiusProcessor_finish(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        AssignRadiusProcessor *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_AssignRadiusProcessor,&sipCpp))
        {
            bool sipRes;

            try
            {
            sipRes = (sipSelfWasArg ? sipCpp->AssignRadiusProcessor::finish() : sipCpp->finish());
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_AssignRadiusProcessor,sipNm_BALL_finish);

    return NULL;
}


extern "C" {static PyObject *meth_AssignRadiusProcessor_setFilename(PyObject *, PyObject *);}
static PyObject *meth_AssignRadiusProcessor_setFilename(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const String * a0;
        int a0State = 0;
        AssignRadiusProcessor *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ1",&sipSelf,sipClass_AssignRadiusProcessor,&sipCpp,sipClass_String,&a0,&a0State))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_AssignRadiusProcessor,sipNm_BALL_setFilename);

    return NULL;
}


extern "C" {static PyObject *meth_AssignRadiusProcessor_getFilename(PyObject *, PyObject *);}
static PyObject *meth_AssignRadiusProcessor_getFilename(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        AssignRadiusProcessor *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_AssignRadiusProcessor,&sipCpp))
        {
            String *sipRes;

            try
            {
            sipRes = &sipCpp->getFilename();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_AssignRadiusProcessor,sipNm_BALL_getFilename);

    return NULL;
}


extern "C" {static PyObject *meth_AssignRadiusProcessor_getNumberOfAssignments(PyObject *, PyObject *);}
static PyObject *meth_AssignRadiusProcessor_getNumberOfAssignments(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        AssignRadiusProcessor *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_AssignRadiusProcessor,&sipCpp))
        {
            int sipRes;

            try
            {
            sipRes = sipCpp->getNumberOfAssignments();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_AssignRadiusProcessor,sipNm_BALL_getNumberOfAssignments);

    return NULL;
}


extern "C" {static PyObject *meth_AssignRadiusProcessor_getNumberOfErrors(PyObject *, PyObject *);}
static PyObject *meth_AssignRadiusProcessor_getNumberOfErrors(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        AssignRadiusProcessor *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_AssignRadiusProcessor,&sipCpp))
        {
            int sipRes;

            try
            {
            sipRes = sipCpp->getNumberOfErrors();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_AssignRadiusProcessor,sipNm_BALL_getNumberOfErrors);

    return NULL;
}


extern "C" {static PyObject *slot_AssignRadiusProcessor___call__(PyObject *sipSelf,PyObject *sipArgs);}
static PyObject *slot_AssignRadiusProcessor___call__(PyObject *sipSelf,PyObject *sipArgs)
{
    AssignRadiusProcessor *sipCpp = reinterpret_cast<AssignRadiusProcessor *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_AssignRadiusProcessor));

    if (!sipCpp)
        return 0;

    int sipArgsParsed = 0;

    {
        Atom * a0;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"JA",sipClass_Atom,&a0))
        {
            Processor::Result sipRes = (Processor::Result)0;

#line 55 "defaultProcessors.sip"
  sipRes = sipCpp->operator () (*a0);
#line 296 "sipBALLAssignRadiusProcessor.C"

            return sipConvertFromNamedEnum(sipRes,sipEnum_Processor_Result);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_AssignRadiusProcessor,sipNm_BALL___call__);

    return 0;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_AssignRadiusProcessor(void *, sipWrapperType *);}
static void *cast_AssignRadiusProcessor(void *ptr,sipWrapperType *targetClass)
{
    void *res;

    if (targetClass == sipClass_AssignRadiusProcessor)
        return ptr;

    if ((res = sipCast_AtomProcessor((AtomProcessor *)(AssignRadiusProcessor *)ptr,targetClass)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_AssignRadiusProcessor(void *, int);}
static void release_AssignRadiusProcessor(void *ptr,int state)
{
    if (state & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipAssignRadiusProcessor *>(ptr);
    else
        delete reinterpret_cast<AssignRadiusProcessor *>(ptr);
}


extern "C" {static void dealloc_AssignRadiusProcessor(sipWrapper *);}
static void dealloc_AssignRadiusProcessor(sipWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipAssignRadiusProcessor *>(sipSelf->u.cppPtr)->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_AssignRadiusProcessor(sipSelf->u.cppPtr,sipSelf->flags);
    }
}


extern "C" {static void *init_AssignRadiusProcessor(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_AssignRadiusProcessor(sipWrapper *sipSelf,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    sipAssignRadiusProcessor *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            try
            {
            sipCpp = new sipAssignRadiusProcessor();
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
            sipCpp = new sipAssignRadiusProcessor(*a0);
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
        const AssignRadiusProcessor * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_AssignRadiusProcessor,&a0))
        {
            try
            {
            sipCpp = new sipAssignRadiusProcessor(*a0);
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


extern "C" {static void *forceConvertTo_AssignRadiusProcessor(PyObject *, int *);}
static void *forceConvertTo_AssignRadiusProcessor(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_AssignRadiusProcessor))
        return sipConvertToCpp(valobj,sipClass_AssignRadiusProcessor,iserrp);

    sipBadClass(sipNm_BALL_AssignRadiusProcessor);

    *iserrp = 1;

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedClassDef supers_AssignRadiusProcessor[] = {{107, 255, 1}};


/* Define this type's Python slots. */
static sipPySlotDef slots_AssignRadiusProcessor[] = {
    {(void *)slot_AssignRadiusProcessor___call__, call_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_AssignRadiusProcessor[] = {
    {sipNm_BALL_finish, meth_AssignRadiusProcessor_finish, METH_VARARGS, NULL},
    {sipNm_BALL_getFilename, meth_AssignRadiusProcessor_getFilename, METH_VARARGS, NULL},
    {sipNm_BALL_getNumberOfAssignments, meth_AssignRadiusProcessor_getNumberOfAssignments, METH_VARARGS, NULL},
    {sipNm_BALL_getNumberOfErrors, meth_AssignRadiusProcessor_getNumberOfErrors, METH_VARARGS, NULL},
    {sipNm_BALL_setFilename, meth_AssignRadiusProcessor_setFilename, METH_VARARGS, NULL},
    {sipNm_BALL_start, meth_AssignRadiusProcessor_start, METH_VARARGS, NULL}
};


sipTypeDef sipType_BALL_AssignRadiusProcessor = {
    0,
    0,
    "BALL.AssignRadiusProcessor",
    0,
    {0, 0, 1},
    supers_AssignRadiusProcessor,
    slots_AssignRadiusProcessor,
    6, methods_AssignRadiusProcessor,
    0, 0,
    0,
    init_AssignRadiusProcessor,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_AssignRadiusProcessor,
    cast_AssignRadiusProcessor,
    release_AssignRadiusProcessor,
    forceConvertTo_AssignRadiusProcessor,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
