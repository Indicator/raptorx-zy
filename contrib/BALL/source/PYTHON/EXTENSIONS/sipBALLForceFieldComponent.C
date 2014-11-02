/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLForceFieldComponent.h"

#include "sipBALLTooManyErrors.h"
#include "sipBALLForceField.h"
#include "sipBALLForceFieldComponent.h"
#include "sipBALLString.h"


sipForceFieldComponent::sipForceFieldComponent(): ForceFieldComponent(), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,4);
}

sipForceFieldComponent::sipForceFieldComponent(ForceField& a0): ForceFieldComponent(a0), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,4);
}

sipForceFieldComponent::sipForceFieldComponent(const ForceFieldComponent& a0): ForceFieldComponent(a0), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,4);
}

sipForceFieldComponent::~sipForceFieldComponent()
{
    sipCommonDtor(sipPySelf);
}

bool sipForceFieldComponent::setup() throw(TooManyErrors)
{
    extern bool sipVH_BALL_4(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipNm_BALL_setup);

    if (!meth)
        return ForceFieldComponent::setup();

    return sipVH_BALL_4(sipGILState,meth);
}

double sipForceFieldComponent::getEnergy() const
{
    extern double sipVH_BALL_30(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<sipMethodCache *>(&sipPyMethods[1]),sipPySelf,NULL,sipNm_BALL_getEnergy);

    if (!meth)
        return ForceFieldComponent::getEnergy();

    return sipVH_BALL_30(sipGILState,meth);
}

double sipForceFieldComponent::updateEnergy()
{
    extern double sipVH_BALL_30(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[2],sipPySelf,NULL,sipNm_BALL_updateEnergy);

    if (!meth)
        return ForceFieldComponent::updateEnergy();

    return sipVH_BALL_30(sipGILState,meth);
}

void sipForceFieldComponent::updateForces()
{
    extern void sipVH_BALL_0(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[3],sipPySelf,NULL,sipNm_BALL_updateForces);

    if (!meth)
    {
        ForceFieldComponent::updateForces();
        return;
    }

    sipVH_BALL_0(sipGILState,meth);
}


extern "C" {static PyObject *meth_ForceFieldComponent_setup(PyObject *, PyObject *);}
static PyObject *meth_ForceFieldComponent_setup(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        ForceFieldComponent *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_ForceFieldComponent,&sipCpp))
        {
            bool sipRes;

            try
            {
            sipRes = (sipSelfWasArg ? sipCpp->ForceFieldComponent::setup() : sipCpp->setup());
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_ForceFieldComponent,sipNm_BALL_setup);

    return NULL;
}


extern "C" {static PyObject *meth_ForceFieldComponent_getForceField(PyObject *, PyObject *);}
static PyObject *meth_ForceFieldComponent_getForceField(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        ForceFieldComponent *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_ForceFieldComponent,&sipCpp))
        {
            ForceField *sipRes;

            try
            {
            sipRes = sipCpp->getForceField();
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return sipConvertFromInstance(sipRes,sipClass_ForceField,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_ForceFieldComponent,sipNm_BALL_getForceField);

    return NULL;
}


extern "C" {static PyObject *meth_ForceFieldComponent_setForceField(PyObject *, PyObject *);}
static PyObject *meth_ForceFieldComponent_setForceField(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        ForceField * a0;
        ForceFieldComponent *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_ForceFieldComponent,&sipCpp,sipClass_ForceField,&a0))
        {
            try
            {
            sipCpp->setForceField(*a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_ForceFieldComponent,sipNm_BALL_setForceField);

    return NULL;
}


extern "C" {static PyObject *meth_ForceFieldComponent_setName(PyObject *, PyObject *);}
static PyObject *meth_ForceFieldComponent_setName(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const String * a0;
        int a0State = 0;
        ForceFieldComponent *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ1",&sipSelf,sipClass_ForceFieldComponent,&sipCpp,sipClass_String,&a0,&a0State))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_ForceFieldComponent,sipNm_BALL_setName);

    return NULL;
}


extern "C" {static PyObject *meth_ForceFieldComponent_getName(PyObject *, PyObject *);}
static PyObject *meth_ForceFieldComponent_getName(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        ForceFieldComponent *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_ForceFieldComponent,&sipCpp))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_ForceFieldComponent,sipNm_BALL_getName);

    return NULL;
}


extern "C" {static PyObject *meth_ForceFieldComponent_getEnergy(PyObject *, PyObject *);}
static PyObject *meth_ForceFieldComponent_getEnergy(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        ForceFieldComponent *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_ForceFieldComponent,&sipCpp))
        {
            double sipRes;

            try
            {
            sipRes = (sipSelfWasArg ? sipCpp->ForceFieldComponent::getEnergy() : sipCpp->getEnergy());
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_ForceFieldComponent,sipNm_BALL_getEnergy);

    return NULL;
}


extern "C" {static PyObject *meth_ForceFieldComponent_updateEnergy(PyObject *, PyObject *);}
static PyObject *meth_ForceFieldComponent_updateEnergy(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        ForceFieldComponent *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_ForceFieldComponent,&sipCpp))
        {
            double sipRes;

            try
            {
            sipRes = (sipSelfWasArg ? sipCpp->ForceFieldComponent::updateEnergy() : sipCpp->updateEnergy());
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_ForceFieldComponent,sipNm_BALL_updateEnergy);

    return NULL;
}


extern "C" {static PyObject *meth_ForceFieldComponent_updateForces(PyObject *, PyObject *);}
static PyObject *meth_ForceFieldComponent_updateForces(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        ForceFieldComponent *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_ForceFieldComponent,&sipCpp))
        {
            try
            {
            (sipSelfWasArg ? sipCpp->ForceFieldComponent::updateForces() : sipCpp->updateForces());
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_ForceFieldComponent,sipNm_BALL_updateForces);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_ForceFieldComponent(void *, sipWrapperType *);}
static void *cast_ForceFieldComponent(void *ptr,sipWrapperType *targetClass)
{
    if (targetClass == sipClass_ForceFieldComponent)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_ForceFieldComponent(void *, int);}
static void release_ForceFieldComponent(void *ptr,int state)
{
    if (state & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipForceFieldComponent *>(ptr);
    else
        delete reinterpret_cast<ForceFieldComponent *>(ptr);
}


extern "C" {static void dealloc_ForceFieldComponent(sipWrapper *);}
static void dealloc_ForceFieldComponent(sipWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipForceFieldComponent *>(sipSelf->u.cppPtr)->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_ForceFieldComponent(sipSelf->u.cppPtr,sipSelf->flags);
    }
}


extern "C" {static void *init_ForceFieldComponent(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_ForceFieldComponent(sipWrapper *sipSelf,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    sipForceFieldComponent *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            try
            {
            sipCpp = new sipForceFieldComponent();
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
        ForceField * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_ForceField,&a0))
        {
            try
            {
            sipCpp = new sipForceFieldComponent(*a0);
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
        const ForceFieldComponent * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_ForceFieldComponent,&a0))
        {
            try
            {
            sipCpp = new sipForceFieldComponent(*a0);
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


extern "C" {static void *forceConvertTo_ForceFieldComponent(PyObject *, int *);}
static void *forceConvertTo_ForceFieldComponent(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_ForceFieldComponent))
        return sipConvertToCpp(valobj,sipClass_ForceFieldComponent,iserrp);

    sipBadClass(sipNm_BALL_ForceFieldComponent);

    *iserrp = 1;

    return NULL;
}


static PyMethodDef methods_ForceFieldComponent[] = {
    {sipNm_BALL_getEnergy, meth_ForceFieldComponent_getEnergy, METH_VARARGS, NULL},
    {sipNm_BALL_getForceField, meth_ForceFieldComponent_getForceField, METH_VARARGS, NULL},
    {sipNm_BALL_getName, meth_ForceFieldComponent_getName, METH_VARARGS, NULL},
    {sipNm_BALL_setForceField, meth_ForceFieldComponent_setForceField, METH_VARARGS, NULL},
    {sipNm_BALL_setName, meth_ForceFieldComponent_setName, METH_VARARGS, NULL},
    {sipNm_BALL_setup, meth_ForceFieldComponent_setup, METH_VARARGS, NULL},
    {sipNm_BALL_updateEnergy, meth_ForceFieldComponent_updateEnergy, METH_VARARGS, NULL},
    {sipNm_BALL_updateForces, meth_ForceFieldComponent_updateForces, METH_VARARGS, NULL}
};


sipTypeDef sipType_BALL_ForceFieldComponent = {
    0,
    0,
    "BALL.ForceFieldComponent",
    0,
    {0, 0, 1},
    0,
    0,
    8, methods_ForceFieldComponent,
    0, 0,
    0,
    init_ForceFieldComponent,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_ForceFieldComponent,
    cast_ForceFieldComponent,
    release_ForceFieldComponent,
    forceConvertTo_ForceFieldComponent,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
