/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLForceField.h"

#include "sipBALLFileNotFound.h"
#include "sipBALLTooManyErrors.h"
#include "sipBALLPeriodicBoundary.h"
#include "sipBALLOptions.h"
#include "sipBALLSystem.h"
#include "sipBALLForceField.h"
#include "sipBALLForceFieldComponent.h"
#include "sipBALLString.h"
#include "sipBALLAtomVector.h"


sipForceField::sipForceField(): ForceField(), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,1);
}

sipForceField::sipForceField(System& a0): ForceField(a0), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,1);
}

sipForceField::sipForceField(System& a0,Options& a1): ForceField(a0,a1), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,1);
}

sipForceField::sipForceField(const ForceField& a0): ForceField(a0), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,1);
}

sipForceField::~sipForceField()
{
    sipCommonDtor(sipPySelf);
}

bool sipForceField::specificSetup() throw(TooManyErrors)
{
    extern bool sipVH_BALL_4(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipNm_BALL_specificSetup);

    if (!meth)
        return ForceField::specificSetup();

    return sipVH_BALL_4(sipGILState,meth);
}


extern "C" {static PyObject *meth_ForceField_isValid(PyObject *, PyObject *);}
static PyObject *meth_ForceField_isValid(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        ForceField *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_ForceField,&sipCpp))
        {
            bool sipRes;

            try
            {
            sipRes = sipCpp->isValid();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_ForceField,sipNm_BALL_isValid);

    return NULL;
}


extern "C" {static PyObject *meth_ForceField_setup(PyObject *, PyObject *);}
static PyObject *meth_ForceField_setup(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        System * a0;
        ForceField *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_ForceField,&sipCpp,sipClass_System,&a0))
        {
            bool sipRes;

            try
            {
            sipRes = sipCpp->setup(*a0);
            }
            catch (FileNotFound &sipExceptionRef)
            {
                /* Hope that there is a valid copy ctor. */
                FileNotFound *sipExceptionCopy = new FileNotFound(sipExceptionRef);

                sipRaiseClassException(sipClass_FileNotFound,sipExceptionCopy);

                return NULL;
            }

            return PyBool_FromLong(sipRes);
        }
    }

    {
        System * a0;
        Options * a1;
        ForceField *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJAJA",&sipSelf,sipClass_ForceField,&sipCpp,sipClass_System,&a0,sipClass_Options,&a1))
        {
            bool sipRes;

            try
            {
            sipRes = sipCpp->setup(*a0,*a1);
            }
            catch (FileNotFound &sipExceptionRef)
            {
                /* Hope that there is a valid copy ctor. */
                FileNotFound *sipExceptionCopy = new FileNotFound(sipExceptionRef);

                sipRaiseClassException(sipClass_FileNotFound,sipExceptionCopy);

                return NULL;
            }

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_ForceField,sipNm_BALL_setup);

    return NULL;
}


extern "C" {static PyObject *meth_ForceField_specificSetup(PyObject *, PyObject *);}
static PyObject *meth_ForceField_specificSetup(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        ForceField *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_ForceField,&sipCpp))
        {
            bool sipRes;

            try
            {
            sipRes = (sipSelfWasArg ? sipCpp->ForceField::specificSetup() : sipCpp->specificSetup());
            }
            catch (TooManyErrors &sipExceptionRef)
            {
                /* Hope that there is a valid copy ctor. */
                TooManyErrors *sipExceptionCopy = new TooManyErrors(sipExceptionRef);

                sipRaiseClassException(sipClass_TooManyErrors,sipExceptionCopy);

                return NULL;
            }

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_ForceField,sipNm_BALL_specificSetup);

    return NULL;
}


extern "C" {static PyObject *meth_ForceField_setName(PyObject *, PyObject *);}
static PyObject *meth_ForceField_setName(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const String * a0;
        int a0State = 0;
        ForceField *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ1",&sipSelf,sipClass_ForceField,&sipCpp,sipClass_String,&a0,&a0State))
        {
            try
            {
            sipCpp->setName(*a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_ForceField,sipNm_BALL_setName);

    return NULL;
}


extern "C" {static PyObject *meth_ForceField_getName(PyObject *, PyObject *);}
static PyObject *meth_ForceField_getName(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        ForceField *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_ForceField,&sipCpp))
        {
            String *sipRes;

            try
            {
            sipRes = new String(sipCpp->getName());
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return sipConvertFromNewInstance(sipRes,sipClass_String,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_ForceField,sipNm_BALL_getName);

    return NULL;
}


extern "C" {static PyObject *meth_ForceField_getNumberOfAtoms(PyObject *, PyObject *);}
static PyObject *meth_ForceField_getNumberOfAtoms(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        ForceField *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_ForceField,&sipCpp))
        {
            int sipRes;

            try
            {
            sipRes = sipCpp->getNumberOfAtoms();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_ForceField,sipNm_BALL_getNumberOfAtoms);

    return NULL;
}


extern "C" {static PyObject *meth_ForceField_getNumberOfMovableAtoms(PyObject *, PyObject *);}
static PyObject *meth_ForceField_getNumberOfMovableAtoms(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        ForceField *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_ForceField,&sipCpp))
        {
            int sipRes;

            try
            {
            sipRes = sipCpp->getNumberOfMovableAtoms();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_ForceField,sipNm_BALL_getNumberOfMovableAtoms);

    return NULL;
}


extern "C" {static PyObject *meth_ForceField_getAtoms(PyObject *, PyObject *);}
static PyObject *meth_ForceField_getAtoms(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        ForceField *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_ForceField,&sipCpp))
        {
            const AtomVector *sipRes;

            try
            {
            sipRes = &sipCpp->getAtoms();
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return sipConvertFromInstance(const_cast<AtomVector *>(sipRes),sipClass_AtomVector,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_ForceField,sipNm_BALL_getAtoms);

    return NULL;
}


extern "C" {static PyObject *meth_ForceField_getSystem(PyObject *, PyObject *);}
static PyObject *meth_ForceField_getSystem(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        ForceField *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_ForceField,&sipCpp))
        {
            System *sipRes;

            try
            {
            sipRes = sipCpp->getSystem();
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return sipConvertFromInstance(sipRes,sipClass_System,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_ForceField,sipNm_BALL_getSystem);

    return NULL;
}


extern "C" {static PyObject *meth_ForceField_getUseSelection(PyObject *, PyObject *);}
static PyObject *meth_ForceField_getUseSelection(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        ForceField *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_ForceField,&sipCpp))
        {
            bool sipRes;

            try
            {
            sipRes = sipCpp->getUseSelection();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_ForceField,sipNm_BALL_getUseSelection);

    return NULL;
}


extern "C" {static PyObject *meth_ForceField_disableSelection(PyObject *, PyObject *);}
static PyObject *meth_ForceField_disableSelection(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        ForceField *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_ForceField,&sipCpp))
        {
            sipCpp->disableSelection();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_ForceField,sipNm_BALL_disableSelection);

    return NULL;
}


extern "C" {static PyObject *meth_ForceField_enableSelection(PyObject *, PyObject *);}
static PyObject *meth_ForceField_enableSelection(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        ForceField *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_ForceField,&sipCpp))
        {
            sipCpp->enableSelection();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_ForceField,sipNm_BALL_enableSelection);

    return NULL;
}


extern "C" {static PyObject *meth_ForceField_countComponents(PyObject *, PyObject *);}
static PyObject *meth_ForceField_countComponents(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        ForceField *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_ForceField,&sipCpp))
        {
            int sipRes;

            try
            {
            sipRes = sipCpp->countComponents();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_ForceField,sipNm_BALL_countComponents);

    return NULL;
}


extern "C" {static PyObject *meth_ForceField_insertComponent(PyObject *, PyObject *);}
static PyObject *meth_ForceField_insertComponent(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        ForceFieldComponent * a0;
        ForceField *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ@",&sipSelf,sipClass_ForceField,&sipCpp,sipClass_ForceFieldComponent,&a0))
        {
            try
            {
            sipCpp->insertComponent(a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_ForceField,sipNm_BALL_insertComponent);

    return NULL;
}


extern "C" {static PyObject *meth_ForceField_removeComponent(PyObject *, PyObject *);}
static PyObject *meth_ForceField_removeComponent(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const ForceFieldComponent * a0;
        ForceField *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ@",&sipSelf,sipClass_ForceField,&sipCpp,sipClass_ForceFieldComponent,&a0))
        {
            try
            {
            sipCpp->removeComponent(a0);
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

    {
        const String * a0;
        int a0State = 0;
        ForceField *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ1",&sipSelf,sipClass_ForceField,&sipCpp,sipClass_String,&a0,&a0State))
        {
            try
            {
            sipCpp->removeComponent(*a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_ForceField,sipNm_BALL_removeComponent);

    return NULL;
}


extern "C" {static PyObject *meth_ForceField_getComponent(PyObject *, PyObject *);}
static PyObject *meth_ForceField_getComponent(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        int a0;
        ForceField *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bi",&sipSelf,sipClass_ForceField,&sipCpp,&a0))
        {
            ForceFieldComponent *sipRes;

            try
            {
            sipRes = sipCpp->getComponent(a0);
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return sipConvertFromInstance(sipRes,sipClass_ForceFieldComponent,NULL);
        }
    }

    {
        String * a0;
        int a0State = 0;
        ForceField *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ1",&sipSelf,sipClass_ForceField,&sipCpp,sipClass_String,&a0,&a0State))
        {
            ForceFieldComponent *sipRes;

            try
            {
            sipRes = sipCpp->getComponent(*a0);
            }
            catch (...)
            {

            sipReleaseInstance(a0,sipClass_String,a0State);
                sipRaiseUnknownException();
                return NULL;
            }

            sipReleaseInstance(a0,sipClass_String,a0State);

            return sipConvertFromInstance(sipRes,sipClass_ForceFieldComponent,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_ForceField,sipNm_BALL_getComponent);

    return NULL;
}


extern "C" {static PyObject *meth_ForceField_getEnergy(PyObject *, PyObject *);}
static PyObject *meth_ForceField_getEnergy(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        ForceField *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_ForceField,&sipCpp))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_ForceField,sipNm_BALL_getEnergy);

    return NULL;
}


extern "C" {static PyObject *meth_ForceField_updateEnergy(PyObject *, PyObject *);}
static PyObject *meth_ForceField_updateEnergy(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        ForceField *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_ForceField,&sipCpp))
        {
            double sipRes;

            try
            {
            sipRes = sipCpp->updateEnergy();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_ForceField,sipNm_BALL_updateEnergy);

    return NULL;
}


extern "C" {static PyObject *meth_ForceField_updateForces(PyObject *, PyObject *);}
static PyObject *meth_ForceField_updateForces(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        ForceField *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_ForceField,&sipCpp))
        {
            try
            {
            sipCpp->updateForces();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_ForceField,sipNm_BALL_updateForces);

    return NULL;
}


extern "C" {static PyObject *meth_ForceField_getRMSGradient(PyObject *, PyObject *);}
static PyObject *meth_ForceField_getRMSGradient(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        ForceField *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_ForceField,&sipCpp))
        {
            double sipRes;

            try
            {
            sipRes = sipCpp->getRMSGradient();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_ForceField,sipNm_BALL_getRMSGradient);

    return NULL;
}


extern "C" {static PyObject *meth_ForceField_getUpdateFrequency(PyObject *, PyObject *);}
static PyObject *meth_ForceField_getUpdateFrequency(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        ForceField *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_ForceField,&sipCpp))
        {
            int sipRes;

            try
            {
            sipRes = sipCpp->getUpdateFrequency();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_ForceField,sipNm_BALL_getUpdateFrequency);

    return NULL;
}


extern "C" {static PyObject *meth_ForceField_update(PyObject *, PyObject *);}
static PyObject *meth_ForceField_update(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        ForceField *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_ForceField,&sipCpp))
        {
            try
            {
            sipCpp->update();
            }
            catch (TooManyErrors &sipExceptionRef)
            {
                /* Hope that there is a valid copy ctor. */
                TooManyErrors *sipExceptionCopy = new TooManyErrors(sipExceptionRef);

                sipRaiseClassException(sipClass_TooManyErrors,sipExceptionCopy);

                return NULL;
            }

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_ForceField,sipNm_BALL_update);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_ForceField(void *, sipWrapperType *);}
static void *cast_ForceField(void *ptr,sipWrapperType *targetClass)
{
    if (targetClass == sipClass_ForceField)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_ForceField(void *, int);}
static void release_ForceField(void *ptr,int state)
{
    if (state & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipForceField *>(ptr);
    else
        delete reinterpret_cast<ForceField *>(ptr);
}


extern "C" {static void dealloc_ForceField(sipWrapper *);}
static void dealloc_ForceField(sipWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipForceField *>(sipSelf->u.cppPtr)->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_ForceField(sipSelf->u.cppPtr,sipSelf->flags);
    }
}


extern "C" {static void *init_ForceField(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_ForceField(sipWrapper *sipSelf,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    sipForceField *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            try
            {
            sipCpp = new sipForceField();
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
            sipCpp = new sipForceField(*a0);
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
            sipCpp = new sipForceField(*a0,*a1);
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
        const ForceField * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_ForceField,&a0))
        {
            try
            {
            sipCpp = new sipForceField(*a0);
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


extern "C" {static PyObject *var_ForceField_periodic_boundary(PyObject *, PyObject *);}
static PyObject *var_ForceField_periodic_boundary(PyObject *sipSelf,PyObject *sipPy)
{
    int sipIsErr = 0;
   PeriodicBoundary *sipVal;
    ForceField *sipCpp = reinterpret_cast<ForceField *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_ForceField));

    if (!sipCpp)
        return NULL;

    if (sipPy == NULL)
    {
        sipVal = &sipCpp->periodic_boundary;

        sipPy = sipConvertFromInstance(sipVal,sipClass_PeriodicBoundary,NULL);

        return sipPy;
    }

    sipVal = reinterpret_cast<PeriodicBoundary *>(sipForceConvertToInstance(sipPy,sipClass_PeriodicBoundary,NULL,SIP_NOT_NONE,NULL,&sipIsErr));

    if (sipIsErr)
        return NULL;

    sipCpp->periodic_boundary = *sipVal;

    Py_INCREF(Py_None);
    return Py_None;
}


extern "C" {static PyObject *var_ForceField_options(PyObject *, PyObject *);}
static PyObject *var_ForceField_options(PyObject *sipSelf,PyObject *sipPy)
{
    int sipIsErr = 0;
   Options *sipVal;
    ForceField *sipCpp = reinterpret_cast<ForceField *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_ForceField));

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

PyMethodDef variables_ForceField[] = {
    {sipNm_BALL_periodic_boundary, var_ForceField_periodic_boundary, 0, NULL},
    {sipNm_BALL_options, var_ForceField_options, 0, NULL},
    {0, 0, 0, 0}
};


extern "C" {static void *forceConvertTo_ForceField(PyObject *, int *);}
static void *forceConvertTo_ForceField(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_ForceField))
        return sipConvertToCpp(valobj,sipClass_ForceField,iserrp);

    sipBadClass(sipNm_BALL_ForceField);

    *iserrp = 1;

    return NULL;
}


static PyMethodDef methods_ForceField[] = {
    {sipNm_BALL_countComponents, meth_ForceField_countComponents, METH_VARARGS, NULL},
    {sipNm_BALL_disableSelection, meth_ForceField_disableSelection, METH_VARARGS, NULL},
    {sipNm_BALL_enableSelection, meth_ForceField_enableSelection, METH_VARARGS, NULL},
    {sipNm_BALL_getAtoms, meth_ForceField_getAtoms, METH_VARARGS, NULL},
    {sipNm_BALL_getComponent, meth_ForceField_getComponent, METH_VARARGS, NULL},
    {sipNm_BALL_getEnergy, meth_ForceField_getEnergy, METH_VARARGS, NULL},
    {sipNm_BALL_getName, meth_ForceField_getName, METH_VARARGS, NULL},
    {sipNm_BALL_getNumberOfAtoms, meth_ForceField_getNumberOfAtoms, METH_VARARGS, NULL},
    {sipNm_BALL_getNumberOfMovableAtoms, meth_ForceField_getNumberOfMovableAtoms, METH_VARARGS, NULL},
    {sipNm_BALL_getRMSGradient, meth_ForceField_getRMSGradient, METH_VARARGS, NULL},
    {sipNm_BALL_getSystem, meth_ForceField_getSystem, METH_VARARGS, NULL},
    {sipNm_BALL_getUpdateFrequency, meth_ForceField_getUpdateFrequency, METH_VARARGS, NULL},
    {sipNm_BALL_getUseSelection, meth_ForceField_getUseSelection, METH_VARARGS, NULL},
    {sipNm_BALL_insertComponent, meth_ForceField_insertComponent, METH_VARARGS, NULL},
    {sipNm_BALL_isValid, meth_ForceField_isValid, METH_VARARGS, NULL},
    {sipNm_BALL_removeComponent, meth_ForceField_removeComponent, METH_VARARGS, NULL},
    {sipNm_BALL_setName, meth_ForceField_setName, METH_VARARGS, NULL},
    {sipNm_BALL_setup, meth_ForceField_setup, METH_VARARGS, NULL},
    {sipNm_BALL_specificSetup, meth_ForceField_specificSetup, METH_VARARGS, NULL},
    {sipNm_BALL_update, meth_ForceField_update, METH_VARARGS, NULL},
    {sipNm_BALL_updateEnergy, meth_ForceField_updateEnergy, METH_VARARGS, NULL},
    {sipNm_BALL_updateForces, meth_ForceField_updateForces, METH_VARARGS, NULL}
};


sipTypeDef sipType_BALL_ForceField = {
    0,
    0,
    "BALL.ForceField",
    0,
    {0, 0, 1},
    0,
    0,
    22, methods_ForceField,
    0, 0,
    variables_ForceField,
    init_ForceField,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_ForceField,
    cast_ForceField,
    release_ForceField,
    forceConvertTo_ForceField,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
