/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLSnapShot.h"

#include "sipBALLOutOfMemory.h"
#include "sipBALLSnapShot.h"
#include "sipBALLSystem.h"


sipSnapShot::sipSnapShot() throw(): SnapShot(), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,1);
}

sipSnapShot::sipSnapShot(const SnapShot& a0) throw(): SnapShot(a0), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,1);
}

sipSnapShot::~sipSnapShot() throw()
{
    sipCommonDtor(sipPySelf);
}

void sipSnapShot::clear() throw()
{
    extern void sipVH_BALL_0(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipNm_BALL_clear);

    if (!meth)
    {
        SnapShot::clear();
        return;
    }

    sipVH_BALL_0(sipGILState,meth);
}


extern "C" {static PyObject *meth_SnapShot_clear(PyObject *, PyObject *);}
static PyObject *meth_SnapShot_clear(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        SnapShot *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_SnapShot,&sipCpp))
        {
            (sipSelfWasArg ? sipCpp->SnapShot::clear() : sipCpp->clear());

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_SnapShot,sipNm_BALL_clear);

    return NULL;
}


extern "C" {static PyObject *meth_SnapShot_isValid(PyObject *, PyObject *);}
static PyObject *meth_SnapShot_isValid(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        SnapShot *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_SnapShot,&sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isValid();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_SnapShot,sipNm_BALL_isValid);

    return NULL;
}


extern "C" {static PyObject *meth_SnapShot_setIndex(PyObject *, PyObject *);}
static PyObject *meth_SnapShot_setIndex(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        int a0;
        SnapShot *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bi",&sipSelf,sipClass_SnapShot,&sipCpp,&a0))
        {
            sipCpp->setIndex(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_SnapShot,sipNm_BALL_setIndex);

    return NULL;
}


extern "C" {static PyObject *meth_SnapShot_getIndex(PyObject *, PyObject *);}
static PyObject *meth_SnapShot_getIndex(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        SnapShot *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_SnapShot,&sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->getIndex();

            return PyInt_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_SnapShot,sipNm_BALL_getIndex);

    return NULL;
}


extern "C" {static PyObject *meth_SnapShot_setNumberOfAtoms(PyObject *, PyObject *);}
static PyObject *meth_SnapShot_setNumberOfAtoms(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        int a0;
        SnapShot *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bi",&sipSelf,sipClass_SnapShot,&sipCpp,&a0))
        {
            sipCpp->setNumberOfAtoms(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_SnapShot,sipNm_BALL_setNumberOfAtoms);

    return NULL;
}


extern "C" {static PyObject *meth_SnapShot_getNumberOfAtoms(PyObject *, PyObject *);}
static PyObject *meth_SnapShot_getNumberOfAtoms(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        SnapShot *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_SnapShot,&sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->getNumberOfAtoms();

            return PyInt_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_SnapShot,sipNm_BALL_getNumberOfAtoms);

    return NULL;
}


extern "C" {static PyObject *meth_SnapShot_setPotentialEnergy(PyObject *, PyObject *);}
static PyObject *meth_SnapShot_setPotentialEnergy(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        double a0;
        SnapShot *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bd",&sipSelf,sipClass_SnapShot,&sipCpp,&a0))
        {
            sipCpp->setPotentialEnergy(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_SnapShot,sipNm_BALL_setPotentialEnergy);

    return NULL;
}


extern "C" {static PyObject *meth_SnapShot_getPotentialEnergy(PyObject *, PyObject *);}
static PyObject *meth_SnapShot_getPotentialEnergy(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        SnapShot *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_SnapShot,&sipCpp))
        {
            double sipRes;

            sipRes = sipCpp->getPotentialEnergy();

            return PyFloat_FromDouble(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_SnapShot,sipNm_BALL_getPotentialEnergy);

    return NULL;
}


extern "C" {static PyObject *meth_SnapShot_setKineticEnergy(PyObject *, PyObject *);}
static PyObject *meth_SnapShot_setKineticEnergy(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        double a0;
        SnapShot *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bd",&sipSelf,sipClass_SnapShot,&sipCpp,&a0))
        {
            sipCpp->setKineticEnergy(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_SnapShot,sipNm_BALL_setKineticEnergy);

    return NULL;
}


extern "C" {static PyObject *meth_SnapShot_getKineticEnergy(PyObject *, PyObject *);}
static PyObject *meth_SnapShot_getKineticEnergy(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        SnapShot *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_SnapShot,&sipCpp))
        {
            double sipRes;

            sipRes = sipCpp->getKineticEnergy();

            return PyFloat_FromDouble(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_SnapShot,sipNm_BALL_getKineticEnergy);

    return NULL;
}


extern "C" {static PyObject *meth_SnapShot_takeSnapShot(PyObject *, PyObject *);}
static PyObject *meth_SnapShot_takeSnapShot(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const System * a0;
        SnapShot *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_SnapShot,&sipCpp,sipClass_System,&a0))
        {
            try
            {
            sipCpp->takeSnapShot(*a0);
            }
            catch (OutOfMemory &sipExceptionRef)
            {
                /* Hope that there is a valid copy ctor. */
                OutOfMemory *sipExceptionCopy = new OutOfMemory(sipExceptionRef);

                sipRaiseClassException(sipClass_OutOfMemory,sipExceptionCopy);

                return NULL;
            }

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_SnapShot,sipNm_BALL_takeSnapShot);

    return NULL;
}


extern "C" {static PyObject *meth_SnapShot_applySnapShot(PyObject *, PyObject *);}
static PyObject *meth_SnapShot_applySnapShot(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        System * a0;
        SnapShot *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_SnapShot,&sipCpp,sipClass_System,&a0))
        {
            sipCpp->applySnapShot(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_SnapShot,sipNm_BALL_applySnapShot);

    return NULL;
}


extern "C" {static PyObject *meth_SnapShot_getAtomPositions(PyObject *, PyObject *);}
static PyObject *meth_SnapShot_getAtomPositions(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const System * a0;
        SnapShot *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_SnapShot,&sipCpp,sipClass_System,&a0))
        {
            try
            {
            sipCpp->getAtomPositions(*a0);
            }
            catch (OutOfMemory &sipExceptionRef)
            {
                /* Hope that there is a valid copy ctor. */
                OutOfMemory *sipExceptionCopy = new OutOfMemory(sipExceptionRef);

                sipRaiseClassException(sipClass_OutOfMemory,sipExceptionCopy);

                return NULL;
            }

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_SnapShot,sipNm_BALL_getAtomPositions);

    return NULL;
}


extern "C" {static PyObject *meth_SnapShot_setAtomPositions(PyObject *, PyObject *);}
static PyObject *meth_SnapShot_setAtomPositions(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        System * a0;
        SnapShot *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_SnapShot,&sipCpp,sipClass_System,&a0))
        {
            sipCpp->setAtomPositions(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_SnapShot,sipNm_BALL_setAtomPositions);

    return NULL;
}


extern "C" {static PyObject *meth_SnapShot_getAtomVelocities(PyObject *, PyObject *);}
static PyObject *meth_SnapShot_getAtomVelocities(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const System * a0;
        SnapShot *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_SnapShot,&sipCpp,sipClass_System,&a0))
        {
            try
            {
            sipCpp->getAtomVelocities(*a0);
            }
            catch (OutOfMemory &sipExceptionRef)
            {
                /* Hope that there is a valid copy ctor. */
                OutOfMemory *sipExceptionCopy = new OutOfMemory(sipExceptionRef);

                sipRaiseClassException(sipClass_OutOfMemory,sipExceptionCopy);

                return NULL;
            }

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_SnapShot,sipNm_BALL_getAtomVelocities);

    return NULL;
}


extern "C" {static PyObject *meth_SnapShot_setAtomVelocitites(PyObject *, PyObject *);}
static PyObject *meth_SnapShot_setAtomVelocitites(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        System * a0;
        SnapShot *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_SnapShot,&sipCpp,sipClass_System,&a0))
        {
            sipCpp->setAtomVelocitites(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_SnapShot,sipNm_BALL_setAtomVelocitites);

    return NULL;
}


extern "C" {static PyObject *meth_SnapShot_getAtomForces(PyObject *, PyObject *);}
static PyObject *meth_SnapShot_getAtomForces(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const System * a0;
        SnapShot *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_SnapShot,&sipCpp,sipClass_System,&a0))
        {
            try
            {
            sipCpp->getAtomForces(*a0);
            }
            catch (OutOfMemory &sipExceptionRef)
            {
                /* Hope that there is a valid copy ctor. */
                OutOfMemory *sipExceptionCopy = new OutOfMemory(sipExceptionRef);

                sipRaiseClassException(sipClass_OutOfMemory,sipExceptionCopy);

                return NULL;
            }

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_SnapShot,sipNm_BALL_getAtomForces);

    return NULL;
}


extern "C" {static PyObject *meth_SnapShot_setAtomForces(PyObject *, PyObject *);}
static PyObject *meth_SnapShot_setAtomForces(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        System * a0;
        SnapShot *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_SnapShot,&sipCpp,sipClass_System,&a0))
        {
            sipCpp->setAtomForces(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_SnapShot,sipNm_BALL_setAtomForces);

    return NULL;
}


extern "C" {static PyObject *slot_SnapShot___eq__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_SnapShot___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    SnapShot *sipCpp = reinterpret_cast<SnapShot *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_SnapShot));

    if (!sipCpp)
        return 0;

    int sipArgsParsed = 0;

    {
        const SnapShot * a0;

        if (sipParseArgs(&sipArgsParsed,sipArg,"JA",sipClass_SnapShot,&a0))
        {
            bool sipRes;

            sipRes = ((*sipCpp) == *a0);

            return PyBool_FromLong(sipRes);
        }
    }

    return sipPySlotExtend(&sipModuleAPI_BALL,eq_slot,sipClass_SnapShot,sipSelf,sipArg);
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_SnapShot(void *, sipWrapperType *);}
static void *cast_SnapShot(void *ptr,sipWrapperType *targetClass)
{
    if (targetClass == sipClass_SnapShot)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_SnapShot(void *, int);}
static void release_SnapShot(void *ptr,int state)
{
    if (state & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipSnapShot *>(ptr);
    else
        delete reinterpret_cast<SnapShot *>(ptr);
}


extern "C" {static void dealloc_SnapShot(sipWrapper *);}
static void dealloc_SnapShot(sipWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipSnapShot *>(sipSelf->u.cppPtr)->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_SnapShot(sipSelf->u.cppPtr,sipSelf->flags);
    }
}


extern "C" {static void *init_SnapShot(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_SnapShot(sipWrapper *sipSelf,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    sipSnapShot *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            sipCpp = new sipSnapShot();
        }
    }

    if (!sipCpp)
    {
        const SnapShot * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_SnapShot,&a0))
        {
            sipCpp = new sipSnapShot(*a0);
        }
    }

    if (sipCpp)
        sipCpp->sipPySelf = sipSelf;

    return sipCpp;
}


extern "C" {static void *forceConvertTo_SnapShot(PyObject *, int *);}
static void *forceConvertTo_SnapShot(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_SnapShot))
        return sipConvertToCpp(valobj,sipClass_SnapShot,iserrp);

    sipBadClass(sipNm_BALL_SnapShot);

    *iserrp = 1;

    return NULL;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_SnapShot[] = {
    {(void *)slot_SnapShot___eq__, eq_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_SnapShot[] = {
    {sipNm_BALL_applySnapShot, meth_SnapShot_applySnapShot, METH_VARARGS, NULL},
    {sipNm_BALL_clear, meth_SnapShot_clear, METH_VARARGS, NULL},
    {sipNm_BALL_getAtomForces, meth_SnapShot_getAtomForces, METH_VARARGS, NULL},
    {sipNm_BALL_getAtomPositions, meth_SnapShot_getAtomPositions, METH_VARARGS, NULL},
    {sipNm_BALL_getAtomVelocities, meth_SnapShot_getAtomVelocities, METH_VARARGS, NULL},
    {sipNm_BALL_getIndex, meth_SnapShot_getIndex, METH_VARARGS, NULL},
    {sipNm_BALL_getKineticEnergy, meth_SnapShot_getKineticEnergy, METH_VARARGS, NULL},
    {sipNm_BALL_getNumberOfAtoms, meth_SnapShot_getNumberOfAtoms, METH_VARARGS, NULL},
    {sipNm_BALL_getPotentialEnergy, meth_SnapShot_getPotentialEnergy, METH_VARARGS, NULL},
    {sipNm_BALL_isValid, meth_SnapShot_isValid, METH_VARARGS, NULL},
    {sipNm_BALL_setAtomForces, meth_SnapShot_setAtomForces, METH_VARARGS, NULL},
    {sipNm_BALL_setAtomPositions, meth_SnapShot_setAtomPositions, METH_VARARGS, NULL},
    {sipNm_BALL_setAtomVelocitites, meth_SnapShot_setAtomVelocitites, METH_VARARGS, NULL},
    {sipNm_BALL_setIndex, meth_SnapShot_setIndex, METH_VARARGS, NULL},
    {sipNm_BALL_setKineticEnergy, meth_SnapShot_setKineticEnergy, METH_VARARGS, NULL},
    {sipNm_BALL_setNumberOfAtoms, meth_SnapShot_setNumberOfAtoms, METH_VARARGS, NULL},
    {sipNm_BALL_setPotentialEnergy, meth_SnapShot_setPotentialEnergy, METH_VARARGS, NULL},
    {sipNm_BALL_takeSnapShot, meth_SnapShot_takeSnapShot, METH_VARARGS, NULL}
};


sipTypeDef sipType_BALL_SnapShot = {
    0,
    0,
    "BALL.SnapShot",
    0,
    {0, 0, 1},
    0,
    slots_SnapShot,
    18, methods_SnapShot,
    0, 0,
    0,
    init_SnapShot,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_SnapShot,
    cast_SnapShot,
    release_SnapShot,
    forceConvertTo_SnapShot,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
