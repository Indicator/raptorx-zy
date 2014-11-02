/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLBond.h"

#include "sipBALLComposite.h"
#include "sipBALLPropertyManager.h"
#include "sipBALLString.h"
#include "sipBALLAtom.h"
#include "sipBALLBond.h"
#include "sipBALLAtomContainer.h"
#include "sipBALLSystem.h"
#include "sipBALLPreciseTime.h"
#include "sipBALLIndex.h"
#include "sipBALLObject.h"
#include "sipBALLSelectable.h"
#include "sipBALLNamedProperty.h"
#include "sipBALLPosition.h"
#include "sipBALLPersistentObject.h"


sipBond::sipBond(): Bond(), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,5);
}

sipBond::sipBond(const Bond& a0,bool a1): Bond(a0,a1), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,5);
}

sipBond::sipBond(const String& a0,Atom& a1,Atom& a2,short a3,short a4): Bond(a0,a1,a2,a3,a4), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,5);
}

sipBond::sipBond(const Bond& a0): Bond(a0), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,5);
}

sipBond::~sipBond() throw()
{
    sipCommonDtor(sipPySelf);
}

void sipBond::clear() throw()
{
    extern void sipVH_BALL_0(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipNm_BALL_clear);

    if (!meth)
    {
        Bond::clear();
        return;
    }

    sipVH_BALL_0(sipGILState,meth);
}

void sipBond::destroy() throw()
{
    extern void sipVH_BALL_0(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,NULL,sipNm_BALL_destroy);

    if (!meth)
    {
        Bond::destroy();
        return;
    }

    sipVH_BALL_0(sipGILState,meth);
}

bool sipBond::isValid() const throw()
{
    extern bool sipVH_BALL_4(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<sipMethodCache *>(&sipPyMethods[2]),sipPySelf,NULL,sipNm_BALL_isValid);

    if (!meth)
        return Bond::isValid();

    return sipVH_BALL_4(sipGILState,meth);
}

void sipBond::select() throw()
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

void sipBond::deselect() throw()
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


extern "C" {static PyObject *meth_Bond_createBond(PyObject *, PyObject *);}
static PyObject *meth_Bond_createBond(PyObject *,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Bond * a0;
        Atom * a1;
        Atom * a2;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"JAJAJA",sipClass_Bond,&a0,sipClass_Atom,&a1,sipClass_Atom,&a2))
        {
            Bond *sipRes;

            try
            {
            sipRes = Bond::createBond(*a0,*a1,*a2);
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return sipConvertFromInstance(sipRes,sipClass_Bond,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Bond,sipNm_BALL_createBond);

    return NULL;
}


extern "C" {static PyObject *meth_Bond_clear(PyObject *, PyObject *);}
static PyObject *meth_Bond_clear(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        Bond *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Bond,&sipCpp))
        {
            (sipSelfWasArg ? sipCpp->Bond::clear() : sipCpp->clear());

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Bond,sipNm_BALL_clear);

    return NULL;
}


extern "C" {static PyObject *meth_Bond_destroy(PyObject *, PyObject *);}
static PyObject *meth_Bond_destroy(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        Bond *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Bond,&sipCpp))
        {
            (sipSelfWasArg ? sipCpp->Bond::destroy() : sipCpp->destroy());

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Bond,sipNm_BALL_destroy);

    return NULL;
}


extern "C" {static PyObject *meth_Bond_finalize(PyObject *, PyObject *);}
static PyObject *meth_Bond_finalize(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Bond *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Bond,&sipCpp))
        {
            try
            {
            sipCpp->finalize();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Bond,sipNm_BALL_finalize);

    return NULL;
}


extern "C" {static PyObject *meth_Bond_swap(PyObject *, PyObject *);}
static PyObject *meth_Bond_swap(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Bond * a0;
        Bond *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_Bond,&sipCpp,sipClass_Bond,&a0))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Bond,sipNm_BALL_swap);

    return NULL;
}


extern "C" {static PyObject *meth_Bond_setFirstAtom(PyObject *, PyObject *);}
static PyObject *meth_Bond_setFirstAtom(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Atom * a0;
        Bond *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ@",&sipSelf,sipClass_Bond,&sipCpp,sipClass_Atom,&a0))
        {
            try
            {
            sipCpp->setFirstAtom(a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Bond,sipNm_BALL_setFirstAtom);

    return NULL;
}


extern "C" {static PyObject *meth_Bond_getFirstAtom(PyObject *, PyObject *);}
static PyObject *meth_Bond_getFirstAtom(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Bond *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Bond,&sipCpp))
        {
            const Atom *sipRes;

            try
            {
            sipRes = sipCpp->getFirstAtom();
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return sipConvertFromInstance(const_cast<Atom *>(sipRes),sipClass_Atom,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Bond,sipNm_BALL_getFirstAtom);

    return NULL;
}


extern "C" {static PyObject *meth_Bond_getPartner(PyObject *, PyObject *);}
static PyObject *meth_Bond_getPartner(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const Atom * a0;
        Bond *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_Bond,&sipCpp,sipClass_Atom,&a0))
        {
            Atom *sipRes;

            try
            {
            sipRes = sipCpp->getPartner(*a0);
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return sipConvertFromInstance(sipRes,sipClass_Atom,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Bond,sipNm_BALL_getPartner);

    return NULL;
}


extern "C" {static PyObject *meth_Bond_setSecondAtom(PyObject *, PyObject *);}
static PyObject *meth_Bond_setSecondAtom(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Atom * a0;
        Bond *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ@",&sipSelf,sipClass_Bond,&sipCpp,sipClass_Atom,&a0))
        {
            try
            {
            sipCpp->setSecondAtom(a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Bond,sipNm_BALL_setSecondAtom);

    return NULL;
}


extern "C" {static PyObject *meth_Bond_getSecondAtom(PyObject *, PyObject *);}
static PyObject *meth_Bond_getSecondAtom(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Bond *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Bond,&sipCpp))
        {
            const Atom *sipRes;

            try
            {
            sipRes = sipCpp->getSecondAtom();
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return sipConvertFromInstance(const_cast<Atom *>(sipRes),sipClass_Atom,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Bond,sipNm_BALL_getSecondAtom);

    return NULL;
}


extern "C" {static PyObject *meth_Bond_setName(PyObject *, PyObject *);}
static PyObject *meth_Bond_setName(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const String * a0;
        int a0State = 0;
        Bond *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ1",&sipSelf,sipClass_Bond,&sipCpp,sipClass_String,&a0,&a0State))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Bond,sipNm_BALL_setName);

    return NULL;
}


extern "C" {static PyObject *meth_Bond_getName(PyObject *, PyObject *);}
static PyObject *meth_Bond_getName(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Bond *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Bond,&sipCpp))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Bond,sipNm_BALL_getName);

    return NULL;
}


extern "C" {static PyObject *meth_Bond_setOrder(PyObject *, PyObject *);}
static PyObject *meth_Bond_setOrder(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        short a0;
        Bond *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bh",&sipSelf,sipClass_Bond,&sipCpp,&a0))
        {
            try
            {
            sipCpp->setOrder(a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Bond,sipNm_BALL_setOrder);

    return NULL;
}


extern "C" {static PyObject *meth_Bond_getOrder(PyObject *, PyObject *);}
static PyObject *meth_Bond_getOrder(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Bond *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Bond,&sipCpp))
        {
            short sipRes;

            try
            {
            sipRes = sipCpp->getOrder();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Bond,sipNm_BALL_getOrder);

    return NULL;
}


extern "C" {static PyObject *meth_Bond_setType(PyObject *, PyObject *);}
static PyObject *meth_Bond_setType(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        short a0;
        Bond *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bh",&sipSelf,sipClass_Bond,&sipCpp,&a0))
        {
            try
            {
            sipCpp->setType(a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Bond,sipNm_BALL_setType);

    return NULL;
}


extern "C" {static PyObject *meth_Bond_getType(PyObject *, PyObject *);}
static PyObject *meth_Bond_getType(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Bond *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Bond,&sipCpp))
        {
            short sipRes;

            try
            {
            sipRes = sipCpp->getType();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Bond,sipNm_BALL_getType);

    return NULL;
}


extern "C" {static PyObject *meth_Bond_getLength(PyObject *, PyObject *);}
static PyObject *meth_Bond_getLength(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Bond *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Bond,&sipCpp))
        {
            float sipRes;

            try
            {
            sipRes = sipCpp->getLength();
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return PyFloat_FromDouble((double)sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Bond,sipNm_BALL_getLength);

    return NULL;
}


extern "C" {static PyObject *meth_Bond_getBoundAtom(PyObject *, PyObject *);}
static PyObject *meth_Bond_getBoundAtom(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const Atom * a0;
        Bond *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_Bond,&sipCpp,sipClass_Atom,&a0))
        {
            const Atom *sipRes;

            try
            {
            sipRes = sipCpp->getBoundAtom(*a0);
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return sipConvertFromInstance(const_cast<Atom *>(sipRes),sipClass_Atom,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Bond,sipNm_BALL_getBoundAtom);

    return NULL;
}


extern "C" {static PyObject *meth_Bond_isBondOf(PyObject *, PyObject *);}
static PyObject *meth_Bond_isBondOf(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const Atom * a0;
        Bond *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_Bond,&sipCpp,sipClass_Atom,&a0))
        {
            bool sipRes;

            try
            {
            sipRes = sipCpp->isBondOf(*a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Bond,sipNm_BALL_isBondOf);

    return NULL;
}


extern "C" {static PyObject *meth_Bond_isBound(PyObject *, PyObject *);}
static PyObject *meth_Bond_isBound(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Bond *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Bond,&sipCpp))
        {
            bool sipRes;

            try
            {
            sipRes = sipCpp->isBound();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Bond,sipNm_BALL_isBound);

    return NULL;
}


extern "C" {static PyObject *meth_Bond_isInterBond(PyObject *, PyObject *);}
static PyObject *meth_Bond_isInterBond(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Bond *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Bond,&sipCpp))
        {
            bool sipRes;

            try
            {
            sipRes = sipCpp->isInterBond();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Bond,sipNm_BALL_isInterBond);

    return NULL;
}


extern "C" {static PyObject *meth_Bond_isInterBondOf(PyObject *, PyObject *);}
static PyObject *meth_Bond_isInterBondOf(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const AtomContainer * a0;
        Bond *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_Bond,&sipCpp,sipClass_AtomContainer,&a0))
        {
            bool sipRes;

            try
            {
            sipRes = sipCpp->isInterBondOf(*a0);
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
        const System * a0;
        Bond *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_Bond,&sipCpp,sipClass_System,&a0))
        {
            bool sipRes;

            try
            {
            sipRes = sipCpp->isInterBondOf(*a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Bond,sipNm_BALL_isInterBondOf);

    return NULL;
}


extern "C" {static PyObject *meth_Bond_isIntraBond(PyObject *, PyObject *);}
static PyObject *meth_Bond_isIntraBond(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Bond *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Bond,&sipCpp))
        {
            bool sipRes;

            try
            {
            sipRes = sipCpp->isIntraBond();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Bond,sipNm_BALL_isIntraBond);

    return NULL;
}


extern "C" {static PyObject *meth_Bond_isIntraBondOf(PyObject *, PyObject *);}
static PyObject *meth_Bond_isIntraBondOf(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const AtomContainer * a0;
        Bond *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_Bond,&sipCpp,sipClass_AtomContainer,&a0))
        {
            bool sipRes;

            try
            {
            sipRes = sipCpp->isIntraBondOf(*a0);
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
        const System * a0;
        Bond *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_Bond,&sipCpp,sipClass_System,&a0))
        {
            bool sipRes;

            try
            {
            sipRes = sipCpp->isIntraBondOf(*a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Bond,sipNm_BALL_isIntraBondOf);

    return NULL;
}


extern "C" {static PyObject *meth_Bond_isValid(PyObject *, PyObject *);}
static PyObject *meth_Bond_isValid(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        Bond *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Bond,&sipCpp))
        {
            bool sipRes;

            sipRes = (sipSelfWasArg ? sipCpp->Bond::isValid() : sipCpp->isValid());

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Bond,sipNm_BALL_isValid);

    return NULL;
}


extern "C" {static PyObject *slot_Bond___str__(PyObject *sipSelf);}
static PyObject *slot_Bond___str__(PyObject *sipSelf)
{
    Bond *sipCpp = reinterpret_cast<Bond *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_Bond));

    if (!sipCpp)
        return 0;


    {
        {
            PyObject * sipRes = 0;

#line 87 "bond.sip"
	const Atom* a1 = sipCpp->getFirstAtom();
	const Atom* a2 = sipCpp->getSecondAtom();
	String tmp("Bond {");
	if ((a1 != 0) && (a2 != 0))
	{
		tmp += a1->getFullName();
		tmp += " - ";
		tmp += a2->getFullName();
		tmp += ", ";
		tmp += String(sipCpp->getLength());
		tmp += " A";
		switch (sipCpp->getOrder())
		{
			case Bond::ORDER__SINGLE:
				tmp += ", single";
				break;
			case Bond::ORDER__DOUBLE:
				tmp += ", double";
				break;
			case Bond::ORDER__AROMATIC:
				tmp += ", aromatic";
				break;
			case Bond::ORDER__TRIPLE:
				tmp += ", triple";
				break;
			default:
				tmp += ", unknown";
		}
		tmp += " }";
	}
	return PyString_FromString(tmp.c_str());
#line 1045 "sipBALLBond.C"

            return sipRes;
        }
    }
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_Bond(void *, sipWrapperType *);}
static void *cast_Bond(void *ptr,sipWrapperType *targetClass)
{
    void *res;

    if (targetClass == sipClass_Bond)
        return ptr;

    if ((res = sipCast_Composite((Composite *)(Bond *)ptr,targetClass)) != NULL)
        return res;

    if ((res = sipCast_PropertyManager((PropertyManager *)(Bond *)ptr,targetClass)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_Bond(void *, int);}
static void release_Bond(void *ptr,int state)
{
    if (state & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipBond *>(ptr);
    else
        delete reinterpret_cast<Bond *>(ptr);
}


extern "C" {static void dealloc_Bond(sipWrapper *);}
static void dealloc_Bond(sipWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipBond *>(sipSelf->u.cppPtr)->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_Bond(sipSelf->u.cppPtr,sipSelf->flags);
    }
}


extern "C" {static void *init_Bond(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_Bond(sipWrapper *sipSelf,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    sipBond *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            try
            {
            sipCpp = new sipBond();
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
        const Bond * a0;
        bool a1 = 1;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA|b",sipClass_Bond,&a0,&a1))
        {
            try
            {
            sipCpp = new sipBond(*a0,a1);
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
        Atom * a1;
        Atom * a2;
        short a3 = Bond::ORDER__UNKNOWN;
        short a4 = Bond::TYPE__UNKNOWN;

        if (sipParseArgs(sipArgsParsed,sipArgs,"J1JAJA|hh",sipClass_String,&a0,&a0State,sipClass_Atom,&a1,sipClass_Atom,&a2,&a3,&a4))
        {
            try
            {
            sipCpp = new sipBond(*a0,*a1,*a2,a3,a4);
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
        const Bond * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_Bond,&a0))
        {
            try
            {
            sipCpp = new sipBond(*a0);
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


extern "C" {static void *forceConvertTo_Bond(PyObject *, int *);}
static void *forceConvertTo_Bond(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_Bond))
        return sipConvertToCpp(valobj,sipClass_Bond,iserrp);

    sipBadClass(sipNm_BALL_Bond);

    *iserrp = 1;

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedClassDef supers_Bond[] = {{224, 255, 0}, {191, 255, 1}};


/* Define this type's Python slots. */
static sipPySlotDef slots_Bond[] = {
    {(void *)slot_Bond___str__, str_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_Bond[] = {
    {sipNm_BALL_clear, meth_Bond_clear, METH_VARARGS, NULL},
    {sipNm_BALL_createBond, meth_Bond_createBond, METH_VARARGS, NULL},
    {sipNm_BALL_destroy, meth_Bond_destroy, METH_VARARGS, NULL},
    {sipNm_BALL_finalize, meth_Bond_finalize, METH_VARARGS, NULL},
    {sipNm_BALL_getBoundAtom, meth_Bond_getBoundAtom, METH_VARARGS, NULL},
    {sipNm_BALL_getFirstAtom, meth_Bond_getFirstAtom, METH_VARARGS, NULL},
    {sipNm_BALL_getLength, meth_Bond_getLength, METH_VARARGS, NULL},
    {sipNm_BALL_getName, meth_Bond_getName, METH_VARARGS, NULL},
    {sipNm_BALL_getOrder, meth_Bond_getOrder, METH_VARARGS, NULL},
    {sipNm_BALL_getPartner, meth_Bond_getPartner, METH_VARARGS, NULL},
    {sipNm_BALL_getSecondAtom, meth_Bond_getSecondAtom, METH_VARARGS, NULL},
    {sipNm_BALL_getType, meth_Bond_getType, METH_VARARGS, NULL},
    {sipNm_BALL_isBondOf, meth_Bond_isBondOf, METH_VARARGS, NULL},
    {sipNm_BALL_isBound, meth_Bond_isBound, METH_VARARGS, NULL},
    {sipNm_BALL_isInterBond, meth_Bond_isInterBond, METH_VARARGS, NULL},
    {sipNm_BALL_isInterBondOf, meth_Bond_isInterBondOf, METH_VARARGS, NULL},
    {sipNm_BALL_isIntraBond, meth_Bond_isIntraBond, METH_VARARGS, NULL},
    {sipNm_BALL_isIntraBondOf, meth_Bond_isIntraBondOf, METH_VARARGS, NULL},
    {sipNm_BALL_isValid, meth_Bond_isValid, METH_VARARGS, NULL},
    {sipNm_BALL_setFirstAtom, meth_Bond_setFirstAtom, METH_VARARGS, NULL},
    {sipNm_BALL_setName, meth_Bond_setName, METH_VARARGS, NULL},
    {sipNm_BALL_setOrder, meth_Bond_setOrder, METH_VARARGS, NULL},
    {sipNm_BALL_setSecondAtom, meth_Bond_setSecondAtom, METH_VARARGS, NULL},
    {sipNm_BALL_setType, meth_Bond_setType, METH_VARARGS, NULL},
    {sipNm_BALL_swap, meth_Bond_swap, METH_VARARGS, NULL}
};

static sipEnumMemberDef enummembers_Bond[] = {
    {sipNm_BALL_NUMBER_OF_BOND_ORDERS, Bond::NUMBER_OF_BOND_ORDERS, 28},
    {sipNm_BALL_NUMBER_OF_BOND_TYPES, Bond::NUMBER_OF_BOND_TYPES, 27},
    {sipNm_BALL_NUMBER_OF_PROPERTIES, Bond::NUMBER_OF_PROPERTIES, 26},
    {sipNm_BALL_ORDER__AROMATIC, Bond::ORDER__AROMATIC, 28},
    {sipNm_BALL_ORDER__DOUBLE, Bond::ORDER__DOUBLE, 28},
    {sipNm_BALL_ORDER__QUADRUPLE, Bond::ORDER__QUADRUPLE, 28},
    {sipNm_BALL_ORDER__SINGLE, Bond::ORDER__SINGLE, 28},
    {sipNm_BALL_ORDER__TRIPLE, Bond::ORDER__TRIPLE, 28},
    {sipNm_BALL_ORDER__UNKNOWN, Bond::ORDER__UNKNOWN, 28},
    {sipNm_BALL_TYPE__COVALENT, Bond::TYPE__COVALENT, 27},
    {sipNm_BALL_TYPE__DISULPHIDE_BRIDGE, Bond::TYPE__DISULPHIDE_BRIDGE, 27},
    {sipNm_BALL_TYPE__HYDROGEN, Bond::TYPE__HYDROGEN, 27},
    {sipNm_BALL_TYPE__PEPTIDE, Bond::TYPE__PEPTIDE, 27},
    {sipNm_BALL_TYPE__SALT_BRIDGE, Bond::TYPE__SALT_BRIDGE, 27},
    {sipNm_BALL_TYPE__UNKNOWN, Bond::TYPE__UNKNOWN, 27},
};


sipTypeDef sipType_BALL_Bond = {
    0,
    0,
    "BALL.Bond",
    0,
    {0, 0, 1},
    supers_Bond,
    slots_Bond,
    25, methods_Bond,
    15, enummembers_Bond,
    0,
    init_Bond,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_Bond,
    cast_Bond,
    release_Bond,
    forceConvertTo_Bond,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
