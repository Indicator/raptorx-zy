/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLFDPB.h"

#include "sipBALLRegularData3D.h"
#include "sipBALLOptions.h"
#include "sipBALLSystem.h"
#include "sipBALLFDPB.h"
#include "sipBALLString.h"
#include "sipBALLIndex.h"



extern "C" {static PyObject *meth_FDPB_destroy(PyObject *, PyObject *);}
static PyObject *meth_FDPB_destroy(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        FDPB *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_FDPB,&sipCpp))
        {
            try
            {
            sipCpp->destroy();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_FDPB,sipNm_BALL_destroy);

    return NULL;
}


extern "C" {static PyObject *meth_FDPB_destroyGrids(PyObject *, PyObject *);}
static PyObject *meth_FDPB_destroyGrids(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        FDPB *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_FDPB,&sipCpp))
        {
            try
            {
            sipCpp->destroyGrids();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_FDPB,sipNm_BALL_destroyGrids);

    return NULL;
}


extern "C" {static PyObject *meth_FDPB_setup(PyObject *, PyObject *);}
static PyObject *meth_FDPB_setup(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        System * a0;
        FDPB *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_FDPB,&sipCpp,sipClass_System,&a0))
        {
            bool sipRes;

            try
            {
            sipRes = sipCpp->setup(*a0);
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return PyBool_FromLong(sipRes);
        }
    }

    {
        System * a0;
        Options * a1;
        FDPB *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJAJA",&sipSelf,sipClass_FDPB,&sipCpp,sipClass_System,&a0,sipClass_Options,&a1))
        {
            bool sipRes;

            try
            {
            sipRes = sipCpp->setup(*a0,*a1);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_FDPB,sipNm_BALL_setup);

    return NULL;
}


extern "C" {static PyObject *meth_FDPB_setupEpsGrid(PyObject *, PyObject *);}
static PyObject *meth_FDPB_setupEpsGrid(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        System * a0;
        FDPB *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_FDPB,&sipCpp,sipClass_System,&a0))
        {
            bool sipRes;

            try
            {
            sipRes = sipCpp->setupEpsGrid(*a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_FDPB,sipNm_BALL_setupEpsGrid);

    return NULL;
}


extern "C" {static PyObject *meth_FDPB_setupSASGrid(PyObject *, PyObject *);}
static PyObject *meth_FDPB_setupSASGrid(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        System * a0;
        FDPB *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_FDPB,&sipCpp,sipClass_System,&a0))
        {
            bool sipRes;

            try
            {
            sipRes = sipCpp->setupSASGrid(*a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_FDPB,sipNm_BALL_setupSASGrid);

    return NULL;
}


extern "C" {static PyObject *meth_FDPB_setupAtomArray(PyObject *, PyObject *);}
static PyObject *meth_FDPB_setupAtomArray(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        System * a0;
        FDPB *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_FDPB,&sipCpp,sipClass_System,&a0))
        {
            bool sipRes;

            try
            {
            sipRes = sipCpp->setupAtomArray(*a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_FDPB,sipNm_BALL_setupAtomArray);

    return NULL;
}


extern "C" {static PyObject *meth_FDPB_setupKappaGrid(PyObject *, PyObject *);}
static PyObject *meth_FDPB_setupKappaGrid(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        FDPB *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_FDPB,&sipCpp))
        {
            bool sipRes;

            try
            {
            sipRes = sipCpp->setupKappaGrid();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_FDPB,sipNm_BALL_setupKappaGrid);

    return NULL;
}


extern "C" {static PyObject *meth_FDPB_setupQGrid(PyObject *, PyObject *);}
static PyObject *meth_FDPB_setupQGrid(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        FDPB *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_FDPB,&sipCpp))
        {
            bool sipRes;

            try
            {
            sipRes = sipCpp->setupQGrid();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_FDPB,sipNm_BALL_setupQGrid);

    return NULL;
}


extern "C" {static PyObject *meth_FDPB_setupPhiGrid(PyObject *, PyObject *);}
static PyObject *meth_FDPB_setupPhiGrid(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        FDPB *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_FDPB,&sipCpp))
        {
            bool sipRes;

            try
            {
            sipRes = sipCpp->setupPhiGrid();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_FDPB,sipNm_BALL_setupPhiGrid);

    return NULL;
}


extern "C" {static PyObject *meth_FDPB_setupBoundary(PyObject *, PyObject *);}
static PyObject *meth_FDPB_setupBoundary(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        FDPB *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_FDPB,&sipCpp))
        {
            bool sipRes;

            try
            {
            sipRes = sipCpp->setupBoundary();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_FDPB,sipNm_BALL_setupBoundary);

    return NULL;
}


extern "C" {static PyObject *meth_FDPB_solve(PyObject *, PyObject *);}
static PyObject *meth_FDPB_solve(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        FDPB *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_FDPB,&sipCpp))
        {
            bool sipRes;

            try
            {
            sipRes = sipCpp->solve();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_FDPB,sipNm_BALL_solve);

    return NULL;
}


extern "C" {static PyObject *meth_FDPB_getEnergy(PyObject *, PyObject *);}
static PyObject *meth_FDPB_getEnergy(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        FDPB *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_FDPB,&sipCpp))
        {
            double sipRes;

            try
            {
            sipRes = sipCpp->getEnergy();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_FDPB,sipNm_BALL_getEnergy);

    return NULL;
}


extern "C" {static PyObject *meth_FDPB_getReactionFieldEnergy(PyObject *, PyObject *);}
static PyObject *meth_FDPB_getReactionFieldEnergy(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        FDPB *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_FDPB,&sipCpp))
        {
            double sipRes;

            try
            {
            sipRes = sipCpp->getReactionFieldEnergy();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_FDPB,sipNm_BALL_getReactionFieldEnergy);

    return NULL;
}


extern "C" {static PyObject *meth_FDPB_calculateReactionFieldEnergy(PyObject *, PyObject *);}
static PyObject *meth_FDPB_calculateReactionFieldEnergy(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        FDPB *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_FDPB,&sipCpp))
        {
            double sipRes;

            try
            {
            sipRes = sipCpp->calculateReactionFieldEnergy();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_FDPB,sipNm_BALL_calculateReactionFieldEnergy);

    return NULL;
}


extern "C" {static PyObject *meth_FDPB_getNumberOfIterations(PyObject *, PyObject *);}
static PyObject *meth_FDPB_getNumberOfIterations(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        FDPB *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_FDPB,&sipCpp))
        {
            int sipRes;

            try
            {
            sipRes = sipCpp->getNumberOfIterations();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_FDPB,sipNm_BALL_getNumberOfIterations);

    return NULL;
}


extern "C" {static PyObject *meth_FDPB_getErrorCode(PyObject *, PyObject *);}
static PyObject *meth_FDPB_getErrorCode(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        FDPB *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_FDPB,&sipCpp))
        {
            Index *sipRes;

            try
            {
            sipRes = new Index(sipCpp->getErrorCode());
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            PyObject *sipResObj = sipConvertFromMappedType(sipRes,sipMappedType_Index,NULL);
            delete sipRes;

            return sipResObj;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_FDPB,sipNm_BALL_getErrorCode);

    return NULL;
}


extern "C" {static PyObject *meth_FDPB_getErrorMessage(PyObject *, PyObject *);}
static PyObject *meth_FDPB_getErrorMessage(PyObject *,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Index * a0;
        int a0State = 0;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"M1",sipMappedType_Index,&a0,&a0State))
        {
            String *sipRes;

            try
            {
            sipRes = new String(FDPB::getErrorMessage(*a0));
            }
            catch (...)
            {

            sipReleaseMappedType(a0,sipMappedType_Index,a0State);
                sipRaiseUnknownException();
                return NULL;
            }

            sipReleaseMappedType(a0,sipMappedType_Index,a0State);

            return sipConvertFromNewInstance(sipRes,sipClass_String,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_FDPB,sipNm_BALL_getErrorMessage);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_FDPB(void *, sipWrapperType *);}
static void *cast_FDPB(void *ptr,sipWrapperType *targetClass)
{
    if (targetClass == sipClass_FDPB)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_FDPB(void *, int);}
static void release_FDPB(void *ptr,int)
{
    delete reinterpret_cast<FDPB *>(ptr);
}


extern "C" {static void dealloc_FDPB(sipWrapper *);}
static void dealloc_FDPB(sipWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_FDPB(sipSelf->u.cppPtr,0);
    }
}


extern "C" {static void *init_FDPB(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_FDPB(sipWrapper *,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    FDPB *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            try
            {
            sipCpp = new FDPB();
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
        const FDPB * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_FDPB,&a0))
        {
            try
            {
            sipCpp = new FDPB(*a0);
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
        System * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_System,&a0))
        {
            try
            {
            sipCpp = new FDPB(*a0);
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
        Options * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_Options,&a0))
        {
            try
            {
            sipCpp = new FDPB(*a0);
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
        System * a0;
        Options * a1;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JAJA",sipClass_System,&a0,sipClass_Options,&a1))
        {
            try
            {
            sipCpp = new FDPB(*a0,*a1);
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


extern "C" {static PyObject *var_FDPB_phi_grid(PyObject *, PyObject *);}
static PyObject *var_FDPB_phi_grid(PyObject *sipSelf,PyObject *sipPy)
{
    int sipIsErr = 0;
   RegularData3D *sipVal;
    FDPB *sipCpp = reinterpret_cast<FDPB *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_FDPB));

    if (!sipCpp)
        return NULL;

    if (sipPy == NULL)
    {
        sipVal = sipCpp->phi_grid;

        sipPy = sipConvertFromInstance(sipVal,sipClass_RegularData3D,NULL);

        return sipPy;
    }

    sipVal = reinterpret_cast<RegularData3D *>(sipForceConvertToInstance(sipPy,sipClass_RegularData3D,NULL,0,NULL,&sipIsErr));

    if (sipIsErr)
        return NULL;

    sipCpp->phi_grid = sipVal;

    Py_INCREF(Py_None);
    return Py_None;
}


extern "C" {static PyObject *var_FDPB_q_grid(PyObject *, PyObject *);}
static PyObject *var_FDPB_q_grid(PyObject *sipSelf,PyObject *sipPy)
{
    int sipIsErr = 0;
   RegularData3D *sipVal;
    FDPB *sipCpp = reinterpret_cast<FDPB *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_FDPB));

    if (!sipCpp)
        return NULL;

    if (sipPy == NULL)
    {
        sipVal = sipCpp->q_grid;

        sipPy = sipConvertFromInstance(sipVal,sipClass_RegularData3D,NULL);

        return sipPy;
    }

    sipVal = reinterpret_cast<RegularData3D *>(sipForceConvertToInstance(sipPy,sipClass_RegularData3D,NULL,0,NULL,&sipIsErr));

    if (sipIsErr)
        return NULL;

    sipCpp->q_grid = sipVal;

    Py_INCREF(Py_None);
    return Py_None;
}


extern "C" {static PyObject *var_FDPB_kappa_grid(PyObject *, PyObject *);}
static PyObject *var_FDPB_kappa_grid(PyObject *sipSelf,PyObject *sipPy)
{
    int sipIsErr = 0;
   RegularData3D *sipVal;
    FDPB *sipCpp = reinterpret_cast<FDPB *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_FDPB));

    if (!sipCpp)
        return NULL;

    if (sipPy == NULL)
    {
        sipVal = sipCpp->kappa_grid;

        sipPy = sipConvertFromInstance(sipVal,sipClass_RegularData3D,NULL);

        return sipPy;
    }

    sipVal = reinterpret_cast<RegularData3D *>(sipForceConvertToInstance(sipPy,sipClass_RegularData3D,NULL,0,NULL,&sipIsErr));

    if (sipIsErr)
        return NULL;

    sipCpp->kappa_grid = sipVal;

    Py_INCREF(Py_None);
    return Py_None;
}


extern "C" {static PyObject *var_FDPB_results(PyObject *, PyObject *);}
static PyObject *var_FDPB_results(PyObject *sipSelf,PyObject *sipPy)
{
    int sipIsErr = 0;
   Options *sipVal;
    FDPB *sipCpp = reinterpret_cast<FDPB *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_FDPB));

    if (!sipCpp)
        return NULL;

    if (sipPy == NULL)
    {
        sipVal = &sipCpp->results;

        sipPy = sipConvertFromInstance(sipVal,sipClass_Options,NULL);

        return sipPy;
    }

    sipVal = reinterpret_cast<Options *>(sipForceConvertToInstance(sipPy,sipClass_Options,NULL,SIP_NOT_NONE,NULL,&sipIsErr));

    if (sipIsErr)
        return NULL;

    sipCpp->results = *sipVal;

    Py_INCREF(Py_None);
    return Py_None;
}


extern "C" {static PyObject *var_FDPB_options(PyObject *, PyObject *);}
static PyObject *var_FDPB_options(PyObject *sipSelf,PyObject *sipPy)
{
    int sipIsErr = 0;
   Options *sipVal;
    FDPB *sipCpp = reinterpret_cast<FDPB *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_FDPB));

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

PyMethodDef variables_FDPB[] = {
    {sipNm_BALL_phi_grid, var_FDPB_phi_grid, 0, NULL},
    {sipNm_BALL_q_grid, var_FDPB_q_grid, 0, NULL},
    {sipNm_BALL_kappa_grid, var_FDPB_kappa_grid, 0, NULL},
    {sipNm_BALL_results, var_FDPB_results, 0, NULL},
    {sipNm_BALL_options, var_FDPB_options, 0, NULL},
    {0, 0, 0, 0}
};


extern "C" {static void *forceConvertTo_FDPB(PyObject *, int *);}
static void *forceConvertTo_FDPB(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_FDPB))
        return sipConvertToCpp(valobj,sipClass_FDPB,iserrp);

    sipBadClass(sipNm_BALL_FDPB);

    *iserrp = 1;

    return NULL;
}


static PyMethodDef methods_FDPB[] = {
    {sipNm_BALL_calculateReactionFieldEnergy, meth_FDPB_calculateReactionFieldEnergy, METH_VARARGS, NULL},
    {sipNm_BALL_destroy, meth_FDPB_destroy, METH_VARARGS, NULL},
    {sipNm_BALL_destroyGrids, meth_FDPB_destroyGrids, METH_VARARGS, NULL},
    {sipNm_BALL_getEnergy, meth_FDPB_getEnergy, METH_VARARGS, NULL},
    {sipNm_BALL_getErrorCode, meth_FDPB_getErrorCode, METH_VARARGS, NULL},
    {sipNm_BALL_getErrorMessage, meth_FDPB_getErrorMessage, METH_VARARGS, NULL},
    {sipNm_BALL_getNumberOfIterations, meth_FDPB_getNumberOfIterations, METH_VARARGS, NULL},
    {sipNm_BALL_getReactionFieldEnergy, meth_FDPB_getReactionFieldEnergy, METH_VARARGS, NULL},
    {sipNm_BALL_setup, meth_FDPB_setup, METH_VARARGS, NULL},
    {sipNm_BALL_setupAtomArray, meth_FDPB_setupAtomArray, METH_VARARGS, NULL},
    {sipNm_BALL_setupBoundary, meth_FDPB_setupBoundary, METH_VARARGS, NULL},
    {sipNm_BALL_setupEpsGrid, meth_FDPB_setupEpsGrid, METH_VARARGS, NULL},
    {sipNm_BALL_setupKappaGrid, meth_FDPB_setupKappaGrid, METH_VARARGS, NULL},
    {sipNm_BALL_setupPhiGrid, meth_FDPB_setupPhiGrid, METH_VARARGS, NULL},
    {sipNm_BALL_setupQGrid, meth_FDPB_setupQGrid, METH_VARARGS, NULL},
    {sipNm_BALL_setupSASGrid, meth_FDPB_setupSASGrid, METH_VARARGS, NULL},
    {sipNm_BALL_solve, meth_FDPB_solve, METH_VARARGS, NULL}
};

static sipEnumMemberDef enummembers_FDPB[] = {
    {sipNm_BALL_ERROR__ATOM_ARRAY_REQUIRED, FDPB::ERROR__ATOM_ARRAY_REQUIRED, 16},
    {sipNm_BALL_ERROR__CANNOT_CREATE_ATOM_ARRAY, FDPB::ERROR__CANNOT_CREATE_ATOM_ARRAY, 16},
    {sipNm_BALL_ERROR__CANNOT_CREATE_CHARGE_GRID, FDPB::ERROR__CANNOT_CREATE_CHARGE_GRID, 16},
    {sipNm_BALL_ERROR__CANNOT_CREATE_EPSILON_GRID, FDPB::ERROR__CANNOT_CREATE_EPSILON_GRID, 16},
    {sipNm_BALL_ERROR__CANNOT_CREATE_KAPPA_GRID, FDPB::ERROR__CANNOT_CREATE_KAPPA_GRID, 16},
    {sipNm_BALL_ERROR__CANNOT_CREATE_PHI_GRID, FDPB::ERROR__CANNOT_CREATE_PHI_GRID, 16},
    {sipNm_BALL_ERROR__CANNOT_CREATE_SAS_GRID, FDPB::ERROR__CANNOT_CREATE_SAS_GRID, 16},
    {sipNm_BALL_ERROR__EPSILON_GRID_REQUIRED, FDPB::ERROR__EPSILON_GRID_REQUIRED, 16},
    {sipNm_BALL_ERROR__ILLEGAL_VALUE_FOR_LOWER_UPPER, FDPB::ERROR__ILLEGAL_VALUE_FOR_LOWER_UPPER, 16},
    {sipNm_BALL_ERROR__NONE, FDPB::ERROR__NONE, 16},
    {sipNm_BALL_ERROR__NOT_A_VECTOR_IN_UPPER_LOWER, FDPB::ERROR__NOT_A_VECTOR_IN_UPPER_LOWER, 16},
    {sipNm_BALL_ERROR__NOT_IMPLEMENTED, FDPB::ERROR__NOT_IMPLEMENTED, 16},
    {sipNm_BALL_ERROR__OUT_OF_MEMORY, FDPB::ERROR__OUT_OF_MEMORY, 16},
    {sipNm_BALL_ERROR__PHI_GRID_REQUIRED, FDPB::ERROR__PHI_GRID_REQUIRED, 16},
    {sipNm_BALL_ERROR__SAS_GRID_REQUIRED, FDPB::ERROR__SAS_GRID_REQUIRED, 16},
    {sipNm_BALL_ERROR__SETUP_REQUIRED, FDPB::ERROR__SETUP_REQUIRED, 16},
    {sipNm_BALL_ERROR__UNKNOWN, FDPB::ERROR__UNKNOWN, 16},
    {sipNm_BALL_ERROR__UNKNOWN_BOUNDARY_CONDITION_TYPE, FDPB::ERROR__UNKNOWN_BOUNDARY_CONDITION_TYPE, 16},
    {sipNm_BALL_ERROR__UNKNOWN_CHARGE_DISTRIBUTION_METHOD, FDPB::ERROR__UNKNOWN_CHARGE_DISTRIBUTION_METHOD, 16},
    {sipNm_BALL_ERROR__UNKNOWN_DIELECTRIC_SMOOTHING_METHOD, FDPB::ERROR__UNKNOWN_DIELECTRIC_SMOOTHING_METHOD, 16},
    {sipNm_BALL_NUMBER_OF_ERRORS, FDPB::NUMBER_OF_ERRORS, 16},
};


sipTypeDef sipType_BALL_FDPB = {
    0,
    0,
    "BALL.FDPB",
    0,
    {0, 0, 1},
    0,
    0,
    17, methods_FDPB,
    21, enummembers_FDPB,
    variables_FDPB,
    init_FDPB,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_FDPB,
    cast_FDPB,
    release_FDPB,
    forceConvertTo_FDPB,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
