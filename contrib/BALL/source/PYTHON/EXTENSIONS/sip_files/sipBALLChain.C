/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLChain.h"

#include "sipBALLAtomContainer.h"
#include "sipBALLString.h"
#include "sipBALLChain.h"
#include "sipBALLSecondaryStructure.h"
#include "sipBALLResidue.h"
#include "sipBALLComposite.h"
#include "sipBALLPDBAtom.h"
#include "sipBALLProtein.h"
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
#include "sipBALLPropertyManager.h"
#include "sipBALLNamedProperty.h"
#include "sipBALLPersistentObject.h"


sipChain::sipChain(): Chain(), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,5);
}

sipChain::sipChain(const Chain& a0,bool a1): Chain(a0,a1), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,5);
}

sipChain::sipChain(const String& a0): Chain(a0), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,5);
}

sipChain::sipChain(const Chain& a0): Chain(a0), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,5);
}

sipChain::~sipChain() throw()
{
    sipCommonDtor(sipPySelf);
}

void sipChain::clear() throw()
{
    extern void sipVH_BALL_0(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipNm_BALL_clear);

    if (!meth)
    {
        Chain::clear();
        return;
    }

    sipVH_BALL_0(sipGILState,meth);
}

void sipChain::destroy() throw()
{
    extern void sipVH_BALL_0(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,NULL,sipNm_BALL_destroy);

    if (!meth)
    {
        Chain::destroy();
        return;
    }

    sipVH_BALL_0(sipGILState,meth);
}

bool sipChain::isValid() const throw()
{
    extern bool sipVH_BALL_4(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<sipMethodCache *>(&sipPyMethods[2]),sipPySelf,NULL,sipNm_BALL_isValid);

    if (!meth)
        return Chain::isValid();

    return sipVH_BALL_4(sipGILState,meth);
}

void sipChain::select() throw()
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

void sipChain::deselect() throw()
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


extern "C" {static PyObject *meth_Chain_clear(PyObject *, PyObject *);}
static PyObject *meth_Chain_clear(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        Chain *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Chain,&sipCpp))
        {
            (sipSelfWasArg ? sipCpp->Chain::clear() : sipCpp->clear());

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Chain,sipNm_BALL_clear);

    return NULL;
}


extern "C" {static PyObject *meth_Chain_destroy(PyObject *, PyObject *);}
static PyObject *meth_Chain_destroy(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        Chain *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Chain,&sipCpp))
        {
            (sipSelfWasArg ? sipCpp->Chain::destroy() : sipCpp->destroy());

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Chain,sipNm_BALL_destroy);

    return NULL;
}


extern "C" {static PyObject *meth_Chain_set(PyObject *, PyObject *);}
static PyObject *meth_Chain_set(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const Chain * a0;
        bool a1 = 1;
        Chain *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA|b",&sipSelf,sipClass_Chain,&sipCpp,sipClass_Chain,&a0,&a1))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Chain,sipNm_BALL_set);

    return NULL;
}


extern "C" {static PyObject *meth_Chain_get(PyObject *, PyObject *);}
static PyObject *meth_Chain_get(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Chain * a0;
        bool a1 = 1;
        Chain *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA|b",&sipSelf,sipClass_Chain,&sipCpp,sipClass_Chain,&a0,&a1))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Chain,sipNm_BALL_get);

    return NULL;
}


extern "C" {static PyObject *meth_Chain_swap(PyObject *, PyObject *);}
static PyObject *meth_Chain_swap(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Chain * a0;
        Chain *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_Chain,&sipCpp,sipClass_Chain,&a0))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Chain,sipNm_BALL_swap);

    return NULL;
}


extern "C" {static PyObject *meth_Chain_getProtein(PyObject *, PyObject *);}
static PyObject *meth_Chain_getProtein(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Chain *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Chain,&sipCpp))
        {
            Protein *sipRes;

            try
            {
            sipRes = sipCpp->getProtein();
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return sipConvertFromInstance(sipRes,sipClass_Protein,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Chain,sipNm_BALL_getProtein);

    return NULL;
}


extern "C" {static PyObject *meth_Chain_getSecondaryStructure(PyObject *, PyObject *);}
static PyObject *meth_Chain_getSecondaryStructure(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        int a0;
        Chain *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bi",&sipSelf,sipClass_Chain,&sipCpp,&a0))
        {
            SecondaryStructure *sipRes;

            try
            {
            sipRes = sipCpp->getSecondaryStructure(a0);
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return sipConvertFromInstance(sipRes,sipClass_SecondaryStructure,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Chain,sipNm_BALL_getSecondaryStructure);

    return NULL;
}


extern "C" {static PyObject *meth_Chain_getResidue(PyObject *, PyObject *);}
static PyObject *meth_Chain_getResidue(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        int a0;
        Chain *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bi",&sipSelf,sipClass_Chain,&sipCpp,&a0))
        {
            Residue *sipRes;

            try
            {
            sipRes = sipCpp->getResidue(a0);
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return sipConvertFromInstance(sipRes,sipClass_Residue,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Chain,sipNm_BALL_getResidue);

    return NULL;
}


extern "C" {static PyObject *meth_Chain_getNTerminal(PyObject *, PyObject *);}
static PyObject *meth_Chain_getNTerminal(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Chain *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Chain,&sipCpp))
        {
            Residue *sipRes;

            try
            {
            sipRes = sipCpp->getNTerminal();
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return sipConvertFromInstance(sipRes,sipClass_Residue,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Chain,sipNm_BALL_getNTerminal);

    return NULL;
}


extern "C" {static PyObject *meth_Chain_getCTerminal(PyObject *, PyObject *);}
static PyObject *meth_Chain_getCTerminal(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Chain *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Chain,&sipCpp))
        {
            Residue *sipRes;

            try
            {
            sipRes = sipCpp->getCTerminal();
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return sipConvertFromInstance(sipRes,sipClass_Residue,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Chain,sipNm_BALL_getCTerminal);

    return NULL;
}


extern "C" {static PyObject *meth_Chain_getPDBAtom(PyObject *, PyObject *);}
static PyObject *meth_Chain_getPDBAtom(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        int a0;
        Chain *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bi",&sipSelf,sipClass_Chain,&sipCpp,&a0))
        {
            PDBAtom *sipRes;

            try
            {
            sipRes = sipCpp->getPDBAtom(a0);
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return sipConvertFromInstance(sipRes,sipClass_PDBAtom,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Chain,sipNm_BALL_getPDBAtom);

    return NULL;
}


extern "C" {static PyObject *meth_Chain_countSecondaryStructures(PyObject *, PyObject *);}
static PyObject *meth_Chain_countSecondaryStructures(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Chain *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Chain,&sipCpp))
        {
            int sipRes;

            try
            {
            sipRes = sipCpp->countSecondaryStructures();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Chain,sipNm_BALL_countSecondaryStructures);

    return NULL;
}


extern "C" {static PyObject *meth_Chain_countResidues(PyObject *, PyObject *);}
static PyObject *meth_Chain_countResidues(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Chain *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Chain,&sipCpp))
        {
            int sipRes;

            try
            {
            sipRes = sipCpp->countResidues();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Chain,sipNm_BALL_countResidues);

    return NULL;
}


extern "C" {static PyObject *meth_Chain_countPDBAtoms(PyObject *, PyObject *);}
static PyObject *meth_Chain_countPDBAtoms(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Chain *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Chain,&sipCpp))
        {
            int sipRes;

            try
            {
            sipRes = sipCpp->countPDBAtoms();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Chain,sipNm_BALL_countPDBAtoms);

    return NULL;
}


extern "C" {static PyObject *meth_Chain_prepend(PyObject *, PyObject *);}
static PyObject *meth_Chain_prepend(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        SecondaryStructure * a0;
        Chain *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJC",&sipSelf,sipClass_Chain,&sipCpp,sipClass_SecondaryStructure,&a0))
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
        Residue * a0;
        Chain *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJC",&sipSelf,sipClass_Chain,&sipCpp,sipClass_Residue,&a0))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Chain,sipNm_BALL_prepend);

    return NULL;
}


extern "C" {static PyObject *meth_Chain_append(PyObject *, PyObject *);}
static PyObject *meth_Chain_append(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        SecondaryStructure * a0;
        Chain *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJC",&sipSelf,sipClass_Chain,&sipCpp,sipClass_SecondaryStructure,&a0))
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
        Residue * a0;
        Chain *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJC",&sipSelf,sipClass_Chain,&sipCpp,sipClass_Residue,&a0))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Chain,sipNm_BALL_append);

    return NULL;
}


extern "C" {static PyObject *meth_Chain_insert(PyObject *, PyObject *);}
static PyObject *meth_Chain_insert(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        SecondaryStructure * a0;
        Chain *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJC",&sipSelf,sipClass_Chain,&sipCpp,sipClass_SecondaryStructure,&a0))
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
        Residue * a0;
        Chain *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJC",&sipSelf,sipClass_Chain,&sipCpp,sipClass_Residue,&a0))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Chain,sipNm_BALL_insert);

    return NULL;
}


extern "C" {static PyObject *meth_Chain_insertBefore(PyObject *, PyObject *);}
static PyObject *meth_Chain_insertBefore(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        SecondaryStructure * a0;
        Composite * a1;
        Chain *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJCJA",&sipSelf,sipClass_Chain,&sipCpp,sipClass_SecondaryStructure,&a0,sipClass_Composite,&a1))
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
        Residue * a0;
        Composite * a1;
        Chain *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJCJA",&sipSelf,sipClass_Chain,&sipCpp,sipClass_Residue,&a0,sipClass_Composite,&a1))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Chain,sipNm_BALL_insertBefore);

    return NULL;
}


extern "C" {static PyObject *meth_Chain_insertAfter(PyObject *, PyObject *);}
static PyObject *meth_Chain_insertAfter(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        SecondaryStructure * a0;
        Composite * a1;
        Chain *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJCJA",&sipSelf,sipClass_Chain,&sipCpp,sipClass_SecondaryStructure,&a0,sipClass_Composite,&a1))
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
        Residue * a0;
        Composite * a1;
        Chain *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJCJA",&sipSelf,sipClass_Chain,&sipCpp,sipClass_Residue,&a0,sipClass_Composite,&a1))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Chain,sipNm_BALL_insertAfter);

    return NULL;
}


extern "C" {static PyObject *meth_Chain_remove(PyObject *, PyObject *);}
static PyObject *meth_Chain_remove(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        SecondaryStructure * a0;
        Chain *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_Chain,&sipCpp,sipClass_SecondaryStructure,&a0))
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
        Residue * a0;
        Chain *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_Chain,&sipCpp,sipClass_Residue,&a0))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Chain,sipNm_BALL_remove);

    return NULL;
}


extern "C" {static PyObject *meth_Chain_spliceBefore(PyObject *, PyObject *);}
static PyObject *meth_Chain_spliceBefore(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Chain * a0;
        Chain *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_Chain,&sipCpp,sipClass_Chain,&a0))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Chain,sipNm_BALL_spliceBefore);

    return NULL;
}


extern "C" {static PyObject *meth_Chain_spliceAfter(PyObject *, PyObject *);}
static PyObject *meth_Chain_spliceAfter(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Chain * a0;
        Chain *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_Chain,&sipCpp,sipClass_Chain,&a0))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Chain,sipNm_BALL_spliceAfter);

    return NULL;
}


extern "C" {static PyObject *meth_Chain_splice(PyObject *, PyObject *);}
static PyObject *meth_Chain_splice(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Chain * a0;
        Chain *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_Chain,&sipCpp,sipClass_Chain,&a0))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Chain,sipNm_BALL_splice);

    return NULL;
}


extern "C" {static PyObject *meth_Chain_isValid(PyObject *, PyObject *);}
static PyObject *meth_Chain_isValid(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        Chain *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Chain,&sipCpp))
        {
            bool sipRes;

            sipRes = (sipSelfWasArg ? sipCpp->Chain::isValid() : sipCpp->isValid());

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Chain,sipNm_BALL_isValid);

    return NULL;
}


extern "C" {static PyObject *slot_Chain___str__(PyObject *sipSelf);}
static PyObject *slot_Chain___str__(PyObject *sipSelf)
{
    Chain *sipCpp = reinterpret_cast<Chain *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_Chain));

    if (!sipCpp)
        return 0;


    {
        {
            PyObject * sipRes = 0;

#line 71 "chain.sip"
	sipRes = PyString_FromString(String(String("Chain ") + sipCpp->getName()
						+ " { " + String(sipCpp->countResidues()) + " residues }").c_str());
#line 1072 "sipBALLChain.C"

            return sipRes;
        }
    }
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_Chain(void *, sipWrapperType *);}
static void *cast_Chain(void *ptr,sipWrapperType *targetClass)
{
    void *res;

    if (targetClass == sipClass_Chain)
        return ptr;

    if ((res = sipCast_AtomContainer((AtomContainer *)(Chain *)ptr,targetClass)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_Chain(void *, int);}
static void release_Chain(void *ptr,int state)
{
    if (state & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipChain *>(ptr);
    else
        delete reinterpret_cast<Chain *>(ptr);
}


extern "C" {static void dealloc_Chain(sipWrapper *);}
static void dealloc_Chain(sipWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipChain *>(sipSelf->u.cppPtr)->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_Chain(sipSelf->u.cppPtr,sipSelf->flags);
    }
}


extern "C" {static void *init_Chain(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_Chain(sipWrapper *sipSelf,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    sipChain *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            try
            {
            sipCpp = new sipChain();
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
        const Chain * a0;
        bool a1 = 1;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA|b",sipClass_Chain,&a0,&a1))
        {
            try
            {
            sipCpp = new sipChain(*a0,a1);
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
            sipCpp = new sipChain(*a0);
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
        const Chain * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_Chain,&a0))
        {
            try
            {
            sipCpp = new sipChain(*a0);
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


extern "C" {static void *forceConvertTo_Chain(PyObject *, int *);}
static void *forceConvertTo_Chain(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_Chain))
        return sipConvertToCpp(valobj,sipClass_Chain,iserrp);

    sipBadClass(sipNm_BALL_Chain);

    *iserrp = 1;

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedClassDef supers_Chain[] = {{226, 255, 1}};


/* Define this type's Python slots. */
static sipPySlotDef slots_Chain[] = {
    {(void *)slot_Chain___str__, str_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_Chain[] = {
    {sipNm_BALL_append, meth_Chain_append, METH_VARARGS, NULL},
    {sipNm_BALL_clear, meth_Chain_clear, METH_VARARGS, NULL},
    {sipNm_BALL_countPDBAtoms, meth_Chain_countPDBAtoms, METH_VARARGS, NULL},
    {sipNm_BALL_countResidues, meth_Chain_countResidues, METH_VARARGS, NULL},
    {sipNm_BALL_countSecondaryStructures, meth_Chain_countSecondaryStructures, METH_VARARGS, NULL},
    {sipNm_BALL_destroy, meth_Chain_destroy, METH_VARARGS, NULL},
    {sipNm_BALL_get, meth_Chain_get, METH_VARARGS, NULL},
    {sipNm_BALL_getCTerminal, meth_Chain_getCTerminal, METH_VARARGS, NULL},
    {sipNm_BALL_getNTerminal, meth_Chain_getNTerminal, METH_VARARGS, NULL},
    {sipNm_BALL_getPDBAtom, meth_Chain_getPDBAtom, METH_VARARGS, NULL},
    {sipNm_BALL_getProtein, meth_Chain_getProtein, METH_VARARGS, NULL},
    {sipNm_BALL_getResidue, meth_Chain_getResidue, METH_VARARGS, NULL},
    {sipNm_BALL_getSecondaryStructure, meth_Chain_getSecondaryStructure, METH_VARARGS, NULL},
    {sipNm_BALL_insert, meth_Chain_insert, METH_VARARGS, NULL},
    {sipNm_BALL_insertAfter, meth_Chain_insertAfter, METH_VARARGS, NULL},
    {sipNm_BALL_insertBefore, meth_Chain_insertBefore, METH_VARARGS, NULL},
    {sipNm_BALL_isValid, meth_Chain_isValid, METH_VARARGS, NULL},
    {sipNm_BALL_prepend, meth_Chain_prepend, METH_VARARGS, NULL},
    {sipNm_BALL_remove, meth_Chain_remove, METH_VARARGS, NULL},
    {sipNm_BALL_set, meth_Chain_set, METH_VARARGS, NULL},
    {sipNm_BALL_splice, meth_Chain_splice, METH_VARARGS, NULL},
    {sipNm_BALL_spliceAfter, meth_Chain_spliceAfter, METH_VARARGS, NULL},
    {sipNm_BALL_spliceBefore, meth_Chain_spliceBefore, METH_VARARGS, NULL},
    {sipNm_BALL_swap, meth_Chain_swap, METH_VARARGS, NULL}
};


sipTypeDef sipType_BALL_Chain = {
    0,
    0,
    "BALL.Chain",
    0,
    {0, 0, 1},
    supers_Chain,
    slots_Chain,
    24, methods_Chain,
    0, 0,
    0,
    init_Chain,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_Chain,
    cast_Chain,
    release_Chain,
    forceConvertTo_Chain,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
