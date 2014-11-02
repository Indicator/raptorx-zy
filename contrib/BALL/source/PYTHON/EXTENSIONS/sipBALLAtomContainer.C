/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLAtomContainer.h"

#include "sipBALLComposite.h"
#include "sipBALLPropertyManager.h"
#include "sipBALLString.h"
#include "sipBALLAtomContainer.h"
#include "sipBALLAtomProcessor.h"
#include "sipBALLCompositeProcessor.h"
#include "sipBALLFragmentProcessor.h"
#include "sipBALLResidueProcessor.h"
#include "sipBALLAtom.h"
#include "sipBALLPosition.h"
#include "sipBALLPreciseTime.h"
#include "sipBALLIndex.h"
#include "sipBALLObject.h"
#include "sipBALLSelectable.h"
#include "sipBALLNamedProperty.h"
#include "sipBALLPersistentObject.h"


sipAtomContainer::sipAtomContainer(): AtomContainer(), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,5);
}

sipAtomContainer::sipAtomContainer(const AtomContainer& a0,bool a1): AtomContainer(a0,a1), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,5);
}

sipAtomContainer::sipAtomContainer(const String& a0): AtomContainer(a0), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,5);
}

sipAtomContainer::sipAtomContainer(const AtomContainer& a0): AtomContainer(a0), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,5);
}

sipAtomContainer::~sipAtomContainer() throw()
{
    sipCommonDtor(sipPySelf);
}

void sipAtomContainer::clear() throw()
{
    extern void sipVH_BALL_0(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipNm_BALL_clear);

    if (!meth)
    {
        AtomContainer::clear();
        return;
    }

    sipVH_BALL_0(sipGILState,meth);
}

void sipAtomContainer::destroy() throw()
{
    extern void sipVH_BALL_0(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,NULL,sipNm_BALL_destroy);

    if (!meth)
    {
        AtomContainer::destroy();
        return;
    }

    sipVH_BALL_0(sipGILState,meth);
}

bool sipAtomContainer::isValid() const throw()
{
    extern bool sipVH_BALL_4(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<sipMethodCache *>(&sipPyMethods[2]),sipPySelf,NULL,sipNm_BALL_isValid);

    if (!meth)
        return AtomContainer::isValid();

    return sipVH_BALL_4(sipGILState,meth);
}

void sipAtomContainer::select() throw()
{
    extern void sipVH_BALL_0(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[3],sipPySelf,NULL,sipNm_BALL_select);

    if (!meth)
    {
        Composite::select();
        return;
    }

    sipVH_BALL_0(sipGILState,meth);
}

void sipAtomContainer::deselect() throw()
{
    extern void sipVH_BALL_0(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[4],sipPySelf,NULL,sipNm_BALL_deselect);

    if (!meth)
    {
        Composite::deselect();
        return;
    }

    sipVH_BALL_0(sipGILState,meth);
}


extern "C" {static PyObject *meth_AtomContainer_clear(PyObject *, PyObject *);}
static PyObject *meth_AtomContainer_clear(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        AtomContainer *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_AtomContainer,&sipCpp))
        {
            (sipSelfWasArg ? sipCpp->AtomContainer::clear() : sipCpp->clear());

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_AtomContainer,sipNm_BALL_clear);

    return NULL;
}


extern "C" {static PyObject *meth_AtomContainer_destroy(PyObject *, PyObject *);}
static PyObject *meth_AtomContainer_destroy(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        AtomContainer *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_AtomContainer,&sipCpp))
        {
            (sipSelfWasArg ? sipCpp->AtomContainer::destroy() : sipCpp->destroy());

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_AtomContainer,sipNm_BALL_destroy);

    return NULL;
}


extern "C" {static PyObject *meth_AtomContainer_set(PyObject *, PyObject *);}
static PyObject *meth_AtomContainer_set(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const AtomContainer * a0;
        bool a1 = 1;
        AtomContainer *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA|b",&sipSelf,sipClass_AtomContainer,&sipCpp,sipClass_AtomContainer,&a0,&a1))
        {
            try
            {
            sipCpp->set(*a0,a1);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_AtomContainer,sipNm_BALL_set);

    return NULL;
}


extern "C" {static PyObject *meth_AtomContainer_get(PyObject *, PyObject *);}
static PyObject *meth_AtomContainer_get(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        AtomContainer * a0;
        bool a1 = 1;
        AtomContainer *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA|b",&sipSelf,sipClass_AtomContainer,&sipCpp,sipClass_AtomContainer,&a0,&a1))
        {
            try
            {
            sipCpp->get(*a0,a1);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_AtomContainer,sipNm_BALL_get);

    return NULL;
}


extern "C" {static PyObject *meth_AtomContainer_swap(PyObject *, PyObject *);}
static PyObject *meth_AtomContainer_swap(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        AtomContainer * a0;
        AtomContainer *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_AtomContainer,&sipCpp,sipClass_AtomContainer,&a0))
        {
            try
            {
            sipCpp->swap(*a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_AtomContainer,sipNm_BALL_swap);

    return NULL;
}


extern "C" {static PyObject *meth_AtomContainer_setName(PyObject *, PyObject *);}
static PyObject *meth_AtomContainer_setName(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const String * a0;
        int a0State = 0;
        AtomContainer *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ1",&sipSelf,sipClass_AtomContainer,&sipCpp,sipClass_String,&a0,&a0State))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_AtomContainer,sipNm_BALL_setName);

    return NULL;
}


extern "C" {static PyObject *meth_AtomContainer_getName(PyObject *, PyObject *);}
static PyObject *meth_AtomContainer_getName(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        AtomContainer *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_AtomContainer,&sipCpp))
        {
            const String *sipRes;

            try
            {
            sipRes = &sipCpp->getName();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_AtomContainer,sipNm_BALL_getName);

    return NULL;
}


extern "C" {static PyObject *meth_AtomContainer_getSuperAtomContainer(PyObject *, PyObject *);}
static PyObject *meth_AtomContainer_getSuperAtomContainer(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        AtomContainer *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_AtomContainer,&sipCpp))
        {
            AtomContainer *sipRes;

            try
            {
            sipRes = sipCpp->getSuperAtomContainer();
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return sipConvertFromInstance(sipRes,sipClass_AtomContainer,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_AtomContainer,sipNm_BALL_getSuperAtomContainer);

    return NULL;
}


extern "C" {static PyObject *meth_AtomContainer_getAtomContainer(PyObject *, PyObject *);}
static PyObject *meth_AtomContainer_getAtomContainer(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Position * a0;
        int a0State = 0;
        AtomContainer *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BM1",&sipSelf,sipClass_AtomContainer,&sipCpp,sipMappedType_Position,&a0,&a0State))
        {
            AtomContainer *sipRes;

            try
            {
            sipRes = sipCpp->getAtomContainer(*a0);
            }
            catch (...)
            {

            sipReleaseMappedType(a0,sipMappedType_Position,a0State);
                sipRaiseUnknownException();
                return NULL;
            }

            sipReleaseMappedType(a0,sipMappedType_Position,a0State);

            return sipConvertFromInstance(sipRes,sipClass_AtomContainer,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_AtomContainer,sipNm_BALL_getAtomContainer);

    return NULL;
}


extern "C" {static PyObject *meth_AtomContainer_getAtom(PyObject *, PyObject *);}
static PyObject *meth_AtomContainer_getAtom(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Position * a0;
        int a0State = 0;
        AtomContainer *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BM1",&sipSelf,sipClass_AtomContainer,&sipCpp,sipMappedType_Position,&a0,&a0State))
        {
            Atom *sipRes;

            try
            {
            sipRes = sipCpp->getAtom(*a0);
            }
            catch (...)
            {

            sipReleaseMappedType(a0,sipMappedType_Position,a0State);
                sipRaiseUnknownException();
                return NULL;
            }

            sipReleaseMappedType(a0,sipMappedType_Position,a0State);

            return sipConvertFromInstance(sipRes,sipClass_Atom,NULL);
        }
    }

    {
        const String * a0;
        int a0State = 0;
        AtomContainer *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ1",&sipSelf,sipClass_AtomContainer,&sipCpp,sipClass_String,&a0,&a0State))
        {
            Atom *sipRes;

            try
            {
            sipRes = sipCpp->getAtom(*a0);
            }
            catch (...)
            {

            sipReleaseInstance(const_cast<String *>(a0),sipClass_String,a0State);
                sipRaiseUnknownException();
                return NULL;
            }

            sipReleaseInstance(const_cast<String *>(a0),sipClass_String,a0State);

            return sipConvertFromInstance(sipRes,sipClass_Atom,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_AtomContainer,sipNm_BALL_getAtom);

    return NULL;
}


extern "C" {static PyObject *meth_AtomContainer_countAtomContainers(PyObject *, PyObject *);}
static PyObject *meth_AtomContainer_countAtomContainers(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        AtomContainer *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_AtomContainer,&sipCpp))
        {
            int sipRes;

            try
            {
            sipRes = sipCpp->countAtomContainers();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_AtomContainer,sipNm_BALL_countAtomContainers);

    return NULL;
}


extern "C" {static PyObject *meth_AtomContainer_countAtoms(PyObject *, PyObject *);}
static PyObject *meth_AtomContainer_countAtoms(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        AtomContainer *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_AtomContainer,&sipCpp))
        {
            int sipRes;

            try
            {
            sipRes = sipCpp->countAtoms();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_AtomContainer,sipNm_BALL_countAtoms);

    return NULL;
}


extern "C" {static PyObject *meth_AtomContainer_countBonds(PyObject *, PyObject *);}
static PyObject *meth_AtomContainer_countBonds(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        AtomContainer *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_AtomContainer,&sipCpp))
        {
            int sipRes;

            try
            {
            sipRes = sipCpp->countBonds();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_AtomContainer,sipNm_BALL_countBonds);

    return NULL;
}


extern "C" {static PyObject *meth_AtomContainer_countInterBonds(PyObject *, PyObject *);}
static PyObject *meth_AtomContainer_countInterBonds(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        AtomContainer *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_AtomContainer,&sipCpp))
        {
            int sipRes;

            try
            {
            sipRes = sipCpp->countInterBonds();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_AtomContainer,sipNm_BALL_countInterBonds);

    return NULL;
}


extern "C" {static PyObject *meth_AtomContainer_countIntraBonds(PyObject *, PyObject *);}
static PyObject *meth_AtomContainer_countIntraBonds(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        AtomContainer *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_AtomContainer,&sipCpp))
        {
            int sipRes;

            try
            {
            sipRes = sipCpp->countIntraBonds();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_AtomContainer,sipNm_BALL_countIntraBonds);

    return NULL;
}


extern "C" {static PyObject *meth_AtomContainer_prepend(PyObject *, PyObject *);}
static PyObject *meth_AtomContainer_prepend(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Atom * a0;
        AtomContainer *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_AtomContainer,&sipCpp,sipClass_Atom,&a0))
        {
            try
            {
            sipCpp->prepend(*a0);
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
        AtomContainer * a0;
        AtomContainer *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_AtomContainer,&sipCpp,sipClass_AtomContainer,&a0))
        {
            try
            {
            sipCpp->prepend(*a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_AtomContainer,sipNm_BALL_prepend);

    return NULL;
}


extern "C" {static PyObject *meth_AtomContainer_append(PyObject *, PyObject *);}
static PyObject *meth_AtomContainer_append(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Atom * a0;
        AtomContainer *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_AtomContainer,&sipCpp,sipClass_Atom,&a0))
        {
            try
            {
            sipCpp->append(*a0);
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
        AtomContainer * a0;
        AtomContainer *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_AtomContainer,&sipCpp,sipClass_AtomContainer,&a0))
        {
            try
            {
            sipCpp->append(*a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_AtomContainer,sipNm_BALL_append);

    return NULL;
}


extern "C" {static PyObject *meth_AtomContainer_insert(PyObject *, PyObject *);}
static PyObject *meth_AtomContainer_insert(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Atom * a0;
        AtomContainer *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_AtomContainer,&sipCpp,sipClass_Atom,&a0))
        {
            try
            {
            sipCpp->insert(*a0);
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
        AtomContainer * a0;
        AtomContainer *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_AtomContainer,&sipCpp,sipClass_AtomContainer,&a0))
        {
            try
            {
            sipCpp->insert(*a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_AtomContainer,sipNm_BALL_insert);

    return NULL;
}


extern "C" {static PyObject *meth_AtomContainer_insertBefore(PyObject *, PyObject *);}
static PyObject *meth_AtomContainer_insertBefore(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Atom * a0;
        Composite * a1;
        AtomContainer *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJAJA",&sipSelf,sipClass_AtomContainer,&sipCpp,sipClass_Atom,&a0,sipClass_Composite,&a1))
        {
            try
            {
            sipCpp->insertBefore(*a0,*a1);
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
        AtomContainer * a0;
        Composite * a1;
        AtomContainer *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJAJA",&sipSelf,sipClass_AtomContainer,&sipCpp,sipClass_AtomContainer,&a0,sipClass_Composite,&a1))
        {
            try
            {
            sipCpp->insertBefore(*a0,*a1);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_AtomContainer,sipNm_BALL_insertBefore);

    return NULL;
}


extern "C" {static PyObject *meth_AtomContainer_insertAfter(PyObject *, PyObject *);}
static PyObject *meth_AtomContainer_insertAfter(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Atom * a0;
        Composite * a1;
        AtomContainer *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJAJA",&sipSelf,sipClass_AtomContainer,&sipCpp,sipClass_Atom,&a0,sipClass_Composite,&a1))
        {
            try
            {
            sipCpp->insertAfter(*a0,*a1);
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
        AtomContainer * a0;
        Composite * a1;
        AtomContainer *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJAJA",&sipSelf,sipClass_AtomContainer,&sipCpp,sipClass_AtomContainer,&a0,sipClass_Composite,&a1))
        {
            try
            {
            sipCpp->insertAfter(*a0,*a1);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_AtomContainer,sipNm_BALL_insertAfter);

    return NULL;
}


extern "C" {static PyObject *meth_AtomContainer_remove(PyObject *, PyObject *);}
static PyObject *meth_AtomContainer_remove(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Atom * a0;
        AtomContainer *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_AtomContainer,&sipCpp,sipClass_Atom,&a0))
        {
            bool sipRes;

            try
            {
            sipRes = sipCpp->remove(*a0);
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
        AtomContainer * a0;
        AtomContainer *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_AtomContainer,&sipCpp,sipClass_AtomContainer,&a0))
        {
            bool sipRes;

            try
            {
            sipRes = sipCpp->remove(*a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_AtomContainer,sipNm_BALL_remove);

    return NULL;
}


extern "C" {static PyObject *meth_AtomContainer_spliceBefore(PyObject *, PyObject *);}
static PyObject *meth_AtomContainer_spliceBefore(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        AtomContainer * a0;
        AtomContainer *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_AtomContainer,&sipCpp,sipClass_AtomContainer,&a0))
        {
            try
            {
            sipCpp->spliceBefore(*a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_AtomContainer,sipNm_BALL_spliceBefore);

    return NULL;
}


extern "C" {static PyObject *meth_AtomContainer_spliceAfter(PyObject *, PyObject *);}
static PyObject *meth_AtomContainer_spliceAfter(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        AtomContainer * a0;
        AtomContainer *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_AtomContainer,&sipCpp,sipClass_AtomContainer,&a0))
        {
            try
            {
            sipCpp->spliceAfter(*a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_AtomContainer,sipNm_BALL_spliceAfter);

    return NULL;
}


extern "C" {static PyObject *meth_AtomContainer_splice(PyObject *, PyObject *);}
static PyObject *meth_AtomContainer_splice(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        AtomContainer * a0;
        AtomContainer *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_AtomContainer,&sipCpp,sipClass_AtomContainer,&a0))
        {
            try
            {
            sipCpp->splice(*a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_AtomContainer,sipNm_BALL_splice);

    return NULL;
}


extern "C" {static PyObject *meth_AtomContainer_destroyBonds(PyObject *, PyObject *);}
static PyObject *meth_AtomContainer_destroyBonds(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        AtomContainer *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_AtomContainer,&sipCpp))
        {
            try
            {
            sipCpp->destroyBonds();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_AtomContainer,sipNm_BALL_destroyBonds);

    return NULL;
}


extern "C" {static PyObject *meth_AtomContainer_isSubAtomContainerOf(PyObject *, PyObject *);}
static PyObject *meth_AtomContainer_isSubAtomContainerOf(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const AtomContainer * a0;
        AtomContainer *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_AtomContainer,&sipCpp,sipClass_AtomContainer,&a0))
        {
            bool sipRes;

            try
            {
            sipRes = sipCpp->isSubAtomContainerOf(*a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_AtomContainer,sipNm_BALL_isSubAtomContainerOf);

    return NULL;
}


extern "C" {static PyObject *meth_AtomContainer_isSuperAtomContainerOf(PyObject *, PyObject *);}
static PyObject *meth_AtomContainer_isSuperAtomContainerOf(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const AtomContainer * a0;
        AtomContainer *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_AtomContainer,&sipCpp,sipClass_AtomContainer,&a0))
        {
            bool sipRes;

            try
            {
            sipRes = sipCpp->isSuperAtomContainerOf(*a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_AtomContainer,sipNm_BALL_isSuperAtomContainerOf);

    return NULL;
}


extern "C" {static PyObject *meth_AtomContainer_isValid(PyObject *, PyObject *);}
static PyObject *meth_AtomContainer_isValid(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        AtomContainer *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_AtomContainer,&sipCpp))
        {
            bool sipRes;

            sipRes = (sipSelfWasArg ? sipCpp->AtomContainer::isValid() : sipCpp->isValid());

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_AtomContainer,sipNm_BALL_isValid);

    return NULL;
}


extern "C" {static PyObject *meth_AtomContainer_apply(PyObject *, PyObject *);}
static PyObject *meth_AtomContainer_apply(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        AtomProcessor * a0;
        AtomContainer *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_AtomContainer,&sipCpp,sipClass_AtomProcessor,&a0))
        {
            bool sipRes;

            try
            {
            sipRes = sipCpp->apply(*a0);
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
        CompositeProcessor * a0;
        AtomContainer *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_AtomContainer,&sipCpp,sipClass_CompositeProcessor,&a0))
        {
            bool sipRes;

            try
            {
            sipRes = sipCpp->apply(*a0);
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
        FragmentProcessor * a0;
        AtomContainer *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_AtomContainer,&sipCpp,sipClass_FragmentProcessor,&a0))
        {
            bool sipRes;

            try
            {
            sipRes = sipCpp->apply(*a0);
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
        ResidueProcessor * a0;
        AtomContainer *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_AtomContainer,&sipCpp,sipClass_ResidueProcessor,&a0))
        {
            bool sipRes;

            try
            {
            sipRes = sipCpp->apply(*a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_AtomContainer,sipNm_BALL_apply);

    return NULL;
}


extern "C" {static PyObject *slot_AtomContainer___str__(PyObject *sipSelf);}
static PyObject *slot_AtomContainer___str__(PyObject *sipSelf)
{
    AtomContainer *sipCpp = reinterpret_cast<AtomContainer *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_AtomContainer));

    if (!sipCpp)
        return 0;


    {
        {
            PyObject * sipRes = 0;

#line 85 "atomContainer.sip"
	sipRes = PyString_FromString(String(String("AtomContainer ") + sipCpp->getName() 
						+ " { " + String(sipCpp->countAtoms()) + " atoms }").c_str());
#line 1341 "sipBALLAtomContainer.C"

            return sipRes;
        }
    }
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_AtomContainer(void *, sipWrapperType *);}
static void *cast_AtomContainer(void *ptr,sipWrapperType *targetClass)
{
    void *res;

    if (targetClass == sipClass_AtomContainer)
        return ptr;

    if ((res = sipCast_Composite((Composite *)(AtomContainer *)ptr,targetClass)) != NULL)
        return res;

    if ((res = sipCast_PropertyManager((PropertyManager *)(AtomContainer *)ptr,targetClass)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_AtomContainer(void *, int);}
static void release_AtomContainer(void *ptr,int state)
{
    if (state & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipAtomContainer *>(ptr);
    else
        delete reinterpret_cast<AtomContainer *>(ptr);
}


extern "C" {static void dealloc_AtomContainer(sipWrapper *);}
static void dealloc_AtomContainer(sipWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipAtomContainer *>(sipSelf->u.cppPtr)->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_AtomContainer(sipSelf->u.cppPtr,sipSelf->flags);
    }
}


extern "C" {static void *init_AtomContainer(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_AtomContainer(sipWrapper *sipSelf,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    sipAtomContainer *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            try
            {
            sipCpp = new sipAtomContainer();
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
        const AtomContainer * a0;
        bool a1 = 1;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA|b",sipClass_AtomContainer,&a0,&a1))
        {
            try
            {
            sipCpp = new sipAtomContainer(*a0,a1);
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
            sipCpp = new sipAtomContainer(*a0);
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
        const AtomContainer * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_AtomContainer,&a0))
        {
            try
            {
            sipCpp = new sipAtomContainer(*a0);
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


extern "C" {static void *forceConvertTo_AtomContainer(PyObject *, int *);}
static void *forceConvertTo_AtomContainer(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_AtomContainer))
        return sipConvertToCpp(valobj,sipClass_AtomContainer,iserrp);

    sipBadClass(sipNm_BALL_AtomContainer);

    *iserrp = 1;

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedClassDef supers_AtomContainer[] = {{224, 255, 0}, {191, 255, 1}};


/* Define this type's Python slots. */
static sipPySlotDef slots_AtomContainer[] = {
    {(void *)slot_AtomContainer___str__, str_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_AtomContainer[] = {
    {sipNm_BALL_append, meth_AtomContainer_append, METH_VARARGS, NULL},
    {sipNm_BALL_apply, meth_AtomContainer_apply, METH_VARARGS, NULL},
    {sipNm_BALL_clear, meth_AtomContainer_clear, METH_VARARGS, NULL},
    {sipNm_BALL_countAtomContainers, meth_AtomContainer_countAtomContainers, METH_VARARGS, NULL},
    {sipNm_BALL_countAtoms, meth_AtomContainer_countAtoms, METH_VARARGS, NULL},
    {sipNm_BALL_countBonds, meth_AtomContainer_countBonds, METH_VARARGS, NULL},
    {sipNm_BALL_countInterBonds, meth_AtomContainer_countInterBonds, METH_VARARGS, NULL},
    {sipNm_BALL_countIntraBonds, meth_AtomContainer_countIntraBonds, METH_VARARGS, NULL},
    {sipNm_BALL_destroy, meth_AtomContainer_destroy, METH_VARARGS, NULL},
    {sipNm_BALL_destroyBonds, meth_AtomContainer_destroyBonds, METH_VARARGS, NULL},
    {sipNm_BALL_get, meth_AtomContainer_get, METH_VARARGS, NULL},
    {sipNm_BALL_getAtom, meth_AtomContainer_getAtom, METH_VARARGS, NULL},
    {sipNm_BALL_getAtomContainer, meth_AtomContainer_getAtomContainer, METH_VARARGS, NULL},
    {sipNm_BALL_getName, meth_AtomContainer_getName, METH_VARARGS, NULL},
    {sipNm_BALL_getSuperAtomContainer, meth_AtomContainer_getSuperAtomContainer, METH_VARARGS, NULL},
    {sipNm_BALL_insert, meth_AtomContainer_insert, METH_VARARGS, NULL},
    {sipNm_BALL_insertAfter, meth_AtomContainer_insertAfter, METH_VARARGS, NULL},
    {sipNm_BALL_insertBefore, meth_AtomContainer_insertBefore, METH_VARARGS, NULL},
    {sipNm_BALL_isSubAtomContainerOf, meth_AtomContainer_isSubAtomContainerOf, METH_VARARGS, NULL},
    {sipNm_BALL_isSuperAtomContainerOf, meth_AtomContainer_isSuperAtomContainerOf, METH_VARARGS, NULL},
    {sipNm_BALL_isValid, meth_AtomContainer_isValid, METH_VARARGS, NULL},
    {sipNm_BALL_prepend, meth_AtomContainer_prepend, METH_VARARGS, NULL},
    {sipNm_BALL_remove, meth_AtomContainer_remove, METH_VARARGS, NULL},
    {sipNm_BALL_set, meth_AtomContainer_set, METH_VARARGS, NULL},
    {sipNm_BALL_setName, meth_AtomContainer_setName, METH_VARARGS, NULL},
    {sipNm_BALL_splice, meth_AtomContainer_splice, METH_VARARGS, NULL},
    {sipNm_BALL_spliceAfter, meth_AtomContainer_spliceAfter, METH_VARARGS, NULL},
    {sipNm_BALL_spliceBefore, meth_AtomContainer_spliceBefore, METH_VARARGS, NULL},
    {sipNm_BALL_swap, meth_AtomContainer_swap, METH_VARARGS, NULL}
};

static sipEnumMemberDef enummembers_AtomContainer[] = {
    {sipNm_BALL_NUMBER_OF_PROPERTIES, AtomContainer::NUMBER_OF_PROPERTIES, 29},
};


sipTypeDef sipType_BALL_AtomContainer = {
    0,
    0,
    "BALL.AtomContainer",
    0,
    {0, 0, 1},
    supers_AtomContainer,
    slots_AtomContainer,
    29, methods_AtomContainer,
    1, enummembers_AtomContainer,
    0,
    init_AtomContainer,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_AtomContainer,
    cast_AtomContainer,
    release_AtomContainer,
    forceConvertTo_AtomContainer,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
