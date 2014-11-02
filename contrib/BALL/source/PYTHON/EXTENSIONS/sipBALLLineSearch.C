/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLLineSearch.h"

#include "sipBALLEnergyMinimizer.h"
#include "sipBALLLineSearch.h"


sipLineSearch::sipLineSearch(): LineSearch(), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,2);
}

sipLineSearch::sipLineSearch(EnergyMinimizer& a0): LineSearch(a0), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,2);
}

sipLineSearch::sipLineSearch(const LineSearch& a0): LineSearch(a0), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,2);
}

sipLineSearch::~sipLineSearch() throw()
{
    sipCommonDtor(sipPySelf);
}

void sipLineSearch::takeStep(double& a0,double& a1,double& a2,double& a3,double& a4,double& a5,double& a6,double a7,double a8,double a9,double a10)
{
    extern void sipVH_BALL_32(sip_gilstate_t,PyObject *,double&,double&,double&,double&,double&,double&,double&,double,double,double,double);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipNm_BALL_takeStep);

    if (!meth)
    {
        LineSearch::takeStep(a0,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10);
        return;
    }

    sipVH_BALL_32(sipGILState,meth,a0,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10);
}

bool sipLineSearch::minimize(double& a0,bool a1)
{
    extern bool sipVH_BALL_31(sip_gilstate_t,PyObject *,double&,bool);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,NULL,sipNm_BALL_minimize);

    if (!meth)
        return LineSearch::minimize(a0,a1);

    return sipVH_BALL_31(sipGILState,meth,a0,a1);
}


extern "C" {static PyObject *meth_LineSearch_setAlpha(PyObject *, PyObject *);}
static PyObject *meth_LineSearch_setAlpha(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        double a0;
        LineSearch *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bd",&sipSelf,sipClass_LineSearch,&sipCpp,&a0))
        {
            try
            {
            sipCpp->setAlpha(a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_LineSearch,sipNm_BALL_setAlpha);

    return NULL;
}


extern "C" {static PyObject *meth_LineSearch_setBeta(PyObject *, PyObject *);}
static PyObject *meth_LineSearch_setBeta(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        double a0;
        LineSearch *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bd",&sipSelf,sipClass_LineSearch,&sipCpp,&a0))
        {
            try
            {
            sipCpp->setBeta(a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_LineSearch,sipNm_BALL_setBeta);

    return NULL;
}


extern "C" {static PyObject *meth_LineSearch_getAlpha(PyObject *, PyObject *);}
static PyObject *meth_LineSearch_getAlpha(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        LineSearch *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_LineSearch,&sipCpp))
        {
            double sipRes;

            try
            {
            sipRes = sipCpp->getAlpha();
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return PyFloat_FromDouble(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_LineSearch,sipNm_BALL_getAlpha);

    return NULL;
}


extern "C" {static PyObject *meth_LineSearch_getBeta(PyObject *, PyObject *);}
static PyObject *meth_LineSearch_getBeta(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        LineSearch *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_LineSearch,&sipCpp))
        {
            double sipRes;

            try
            {
            sipRes = sipCpp->getBeta();
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return PyFloat_FromDouble(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_LineSearch,sipNm_BALL_getBeta);

    return NULL;
}


extern "C" {static PyObject *meth_LineSearch_getMaxSteps(PyObject *, PyObject *);}
static PyObject *meth_LineSearch_getMaxSteps(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        LineSearch *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_LineSearch,&sipCpp))
        {
            int sipRes;

            try
            {
            sipRes = sipCpp->getMaxSteps();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_LineSearch,sipNm_BALL_getMaxSteps);

    return NULL;
}


extern "C" {static PyObject *meth_LineSearch_setMaxSteps(PyObject *, PyObject *);}
static PyObject *meth_LineSearch_setMaxSteps(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        int a0;
        LineSearch *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bi",&sipSelf,sipClass_LineSearch,&sipCpp,&a0))
        {
            try
            {
            sipCpp->setMaxSteps(a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_LineSearch,sipNm_BALL_setMaxSteps);

    return NULL;
}


extern "C" {static PyObject *meth_LineSearch_setLowerBound(PyObject *, PyObject *);}
static PyObject *meth_LineSearch_setLowerBound(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        double a0;
        LineSearch *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bd",&sipSelf,sipClass_LineSearch,&sipCpp,&a0))
        {
            try
            {
            sipCpp->setLowerBound(a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_LineSearch,sipNm_BALL_setLowerBound);

    return NULL;
}


extern "C" {static PyObject *meth_LineSearch_getLowerBound(PyObject *, PyObject *);}
static PyObject *meth_LineSearch_getLowerBound(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        LineSearch *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_LineSearch,&sipCpp))
        {
            double sipRes;

            try
            {
            sipRes = sipCpp->getLowerBound();
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return PyFloat_FromDouble(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_LineSearch,sipNm_BALL_getLowerBound);

    return NULL;
}


extern "C" {static PyObject *meth_LineSearch_setXTol(PyObject *, PyObject *);}
static PyObject *meth_LineSearch_setXTol(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        double a0;
        LineSearch *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bd",&sipSelf,sipClass_LineSearch,&sipCpp,&a0))
        {
            try
            {
            sipCpp->setXTol(a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_LineSearch,sipNm_BALL_setXTol);

    return NULL;
}


extern "C" {static PyObject *meth_LineSearch_getXTol(PyObject *, PyObject *);}
static PyObject *meth_LineSearch_getXTol(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        LineSearch *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_LineSearch,&sipCpp))
        {
            double sipRes;

            try
            {
            sipRes = sipCpp->getXTol();
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return PyFloat_FromDouble(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_LineSearch,sipNm_BALL_getXTol);

    return NULL;
}


extern "C" {static PyObject *meth_LineSearch_setBracketedFlag(PyObject *, PyObject *);}
static PyObject *meth_LineSearch_setBracketedFlag(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        bool a0;
        LineSearch *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bb",&sipSelf,sipClass_LineSearch,&sipCpp,&a0))
        {
            try
            {
            sipCpp->setBracketedFlag(a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_LineSearch,sipNm_BALL_setBracketedFlag);

    return NULL;
}


extern "C" {static PyObject *meth_LineSearch_isBracketed(PyObject *, PyObject *);}
static PyObject *meth_LineSearch_isBracketed(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        LineSearch *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_LineSearch,&sipCpp))
        {
            bool sipRes;

            try
            {
            sipRes = sipCpp->isBracketed();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_LineSearch,sipNm_BALL_isBracketed);

    return NULL;
}


extern "C" {static PyObject *meth_LineSearch_setMinimizer(PyObject *, PyObject *);}
static PyObject *meth_LineSearch_setMinimizer(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        EnergyMinimizer * a0;
        LineSearch *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_LineSearch,&sipCpp,sipClass_EnergyMinimizer,&a0))
        {
            try
            {
            sipCpp->setMinimizer(*a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_LineSearch,sipNm_BALL_setMinimizer);

    return NULL;
}


extern "C" {static PyObject *meth_LineSearch_takeStep(PyObject *, PyObject *);}
static PyObject *meth_LineSearch_takeStep(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        double a0;
        double a1;
        double a2;
        double a3;
        double a4;
        double a5;
        double a6;
        double a7;
        double a8;
        double a9;
        double a10;
        LineSearch *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bdddd",&sipSelf,sipClass_LineSearch,&sipCpp,&a7,&a8,&a9,&a10))
        {
            try
            {
            (sipSelfWasArg ? sipCpp->LineSearch::takeStep(a0,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10) : sipCpp->takeStep(a0,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10));
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return sipBuildResult(0,"(ddddddd)",a0,a1,a2,a3,a4,a5,a6);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_LineSearch,sipNm_BALL_takeStep);

    return NULL;
}


extern "C" {static PyObject *meth_LineSearch_minimize(PyObject *, PyObject *);}
static PyObject *meth_LineSearch_minimize(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        double a0;
        bool a1 = 0;
        LineSearch *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B|b",&sipSelf,sipClass_LineSearch,&sipCpp,&a1))
        {
            bool sipRes;

            try
            {
            sipRes = (sipSelfWasArg ? sipCpp->LineSearch::minimize(a0,a1) : sipCpp->minimize(a0,a1));
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return sipBuildResult(0,"(bd)",sipRes,a0);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_LineSearch,sipNm_BALL_minimize);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_LineSearch(void *, sipWrapperType *);}
static void *cast_LineSearch(void *ptr,sipWrapperType *targetClass)
{
    if (targetClass == sipClass_LineSearch)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_LineSearch(void *, int);}
static void release_LineSearch(void *ptr,int state)
{
    if (state & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipLineSearch *>(ptr);
    else
        delete reinterpret_cast<LineSearch *>(ptr);
}


extern "C" {static void dealloc_LineSearch(sipWrapper *);}
static void dealloc_LineSearch(sipWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipLineSearch *>(sipSelf->u.cppPtr)->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_LineSearch(sipSelf->u.cppPtr,sipSelf->flags);
    }
}


extern "C" {static void *init_LineSearch(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_LineSearch(sipWrapper *sipSelf,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    sipLineSearch *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            try
            {
            sipCpp = new sipLineSearch();
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
        EnergyMinimizer * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_EnergyMinimizer,&a0))
        {
            try
            {
            sipCpp = new sipLineSearch(*a0);
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
        const LineSearch * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_LineSearch,&a0))
        {
            try
            {
            sipCpp = new sipLineSearch(*a0);
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


extern "C" {static void *forceConvertTo_LineSearch(PyObject *, int *);}
static void *forceConvertTo_LineSearch(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_LineSearch))
        return sipConvertToCpp(valobj,sipClass_LineSearch,iserrp);

    sipBadClass(sipNm_BALL_LineSearch);

    *iserrp = 1;

    return NULL;
}


static PyMethodDef methods_LineSearch[] = {
    {sipNm_BALL_getAlpha, meth_LineSearch_getAlpha, METH_VARARGS, NULL},
    {sipNm_BALL_getBeta, meth_LineSearch_getBeta, METH_VARARGS, NULL},
    {sipNm_BALL_getLowerBound, meth_LineSearch_getLowerBound, METH_VARARGS, NULL},
    {sipNm_BALL_getMaxSteps, meth_LineSearch_getMaxSteps, METH_VARARGS, NULL},
    {sipNm_BALL_getXTol, meth_LineSearch_getXTol, METH_VARARGS, NULL},
    {sipNm_BALL_isBracketed, meth_LineSearch_isBracketed, METH_VARARGS, NULL},
    {sipNm_BALL_minimize, meth_LineSearch_minimize, METH_VARARGS, NULL},
    {sipNm_BALL_setAlpha, meth_LineSearch_setAlpha, METH_VARARGS, NULL},
    {sipNm_BALL_setBeta, meth_LineSearch_setBeta, METH_VARARGS, NULL},
    {sipNm_BALL_setBracketedFlag, meth_LineSearch_setBracketedFlag, METH_VARARGS, NULL},
    {sipNm_BALL_setLowerBound, meth_LineSearch_setLowerBound, METH_VARARGS, NULL},
    {sipNm_BALL_setMaxSteps, meth_LineSearch_setMaxSteps, METH_VARARGS, NULL},
    {sipNm_BALL_setMinimizer, meth_LineSearch_setMinimizer, METH_VARARGS, NULL},
    {sipNm_BALL_setXTol, meth_LineSearch_setXTol, METH_VARARGS, NULL},
    {sipNm_BALL_takeStep, meth_LineSearch_takeStep, METH_VARARGS, NULL}
};


sipTypeDef sipType_BALL_LineSearch = {
    0,
    0,
    "BALL.LineSearch",
    0,
    {0, 0, 1},
    0,
    0,
    15, methods_LineSearch,
    0, 0,
    0,
    init_LineSearch,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_LineSearch,
    cast_LineSearch,
    release_LineSearch,
    forceConvertTo_LineSearch,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
