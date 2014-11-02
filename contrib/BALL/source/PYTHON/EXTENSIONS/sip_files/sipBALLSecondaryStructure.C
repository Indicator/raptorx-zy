/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLSecondaryStructure.h"

#include "sipBALLAtomContainer.h"
#include "sipBALLString.h"
#include "sipBALLSecondaryStructure.h"
#include "sipBALLResidue.h"
#include "sipBALLComposite.h"
#include "sipBALLPDBAtom.h"
#include "sipBALLChain.h"
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


sipSecondaryStructure::sipSecondaryStructure(): SecondaryStructure(), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,5);
}

sipSecondaryStructure::sipSecondaryStructure(const SecondaryStructure& a0,bool a1): SecondaryStructure(a0,a1), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,5);
}

sipSecondaryStructure::sipSecondaryStructure(const String& a0): SecondaryStructure(a0), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,5);
}

sipSecondaryStructure::sipSecondaryStructure(const SecondaryStructure& a0): SecondaryStructure(a0), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,5);
}

sipSecondaryStructure::~sipSecondaryStructure() throw()
{
    sipCommonDtor(sipPySelf);
}

void sipSecondaryStructure::clear() throw()
{
    extern void sipVH_BALL_0(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipNm_BALL_clear);

    if (!meth)
    {
        SecondaryStructure::clear();
        return;
    }

    sipVH_BALL_0(sipGILState,meth);
}

void sipSecondaryStructure::destroy() throw()
{
    extern void sipVH_BALL_0(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,NULL,sipNm_BALL_destroy);

    if (!meth)
    {
        SecondaryStructure::destroy();
        return;
    }

    sipVH_BALL_0(sipGILState,meth);
}

bool sipSecondaryStructure::isValid() const throw()
{
    extern bool sipVH_BALL_4(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<sipMethodCache *>(&sipPyMethods[2]),sipPySelf,NULL,sipNm_BALL_isValid);

    if (!meth)
        return SecondaryStructure::isValid();

    return sipVH_BALL_4(sipGILState,meth);
}

void sipSecondaryStructure::select() throw()
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

void sipSecondaryStructure::deselect() throw()
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


extern "C" {static PyObject *meth_SecondaryStructure_clear(PyObject *, PyObject *);}
static PyObject *meth_SecondaryStructure_clear(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        SecondaryStructure *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_SecondaryStructure,&sipCpp))
        {
            (sipSelfWasArg ? sipCpp->SecondaryStructure::clear() : sipCpp->clear());

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_SecondaryStructure,sipNm_BALL_clear);

    return NULL;
}


extern "C" {static PyObject *meth_SecondaryStructure_destroy(PyObject *, PyObject *);}
static PyObject *meth_SecondaryStructure_destroy(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        SecondaryStructure *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_SecondaryStructure,&sipCpp))
        {
            (sipSelfWasArg ? sipCpp->SecondaryStructure::destroy() : sipCpp->destroy());

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_SecondaryStructure,sipNm_BALL_destroy);

    return NULL;
}


extern "C" {static PyObject *meth_SecondaryStructure_set(PyObject *, PyObject *);}
static PyObject *meth_SecondaryStructure_set(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const SecondaryStructure * a0;
        bool a1 = 1;
        SecondaryStructure *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA|b",&sipSelf,sipClass_SecondaryStructure,&sipCpp,sipClass_SecondaryStructure,&a0,&a1))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_SecondaryStructure,sipNm_BALL_set);

    return NULL;
}


extern "C" {static PyObject *meth_SecondaryStructure_get(PyObject *, PyObject *);}
static PyObject *meth_SecondaryStructure_get(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        SecondaryStructure * a0;
        bool a1 = 1;
        SecondaryStructure *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA|b",&sipSelf,sipClass_SecondaryStructure,&sipCpp,sipClass_SecondaryStructure,&a0,&a1))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_SecondaryStructure,sipNm_BALL_get);

    return NULL;
}


extern "C" {static PyObject *meth_SecondaryStructure_swap(PyObject *, PyObject *);}
static PyObject *meth_SecondaryStructure_swap(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        SecondaryStructure * a0;
        SecondaryStructure *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_SecondaryStructure,&sipCpp,sipClass_SecondaryStructure,&a0))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_SecondaryStructure,sipNm_BALL_swap);

    return NULL;
}


extern "C" {static PyObject *meth_SecondaryStructure_getType(PyObject *, PyObject *);}
static PyObject *meth_SecondaryStructure_getType(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        SecondaryStructure *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_SecondaryStructure,&sipCpp))
        {
            SecondaryStructure::Type sipRes;

            sipRes = sipCpp->getType();

            return sipConvertFromNamedEnum(sipRes,sipEnum_SecondaryStructure_Type);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_SecondaryStructure,sipNm_BALL_getType);

    return NULL;
}


extern "C" {static PyObject *meth_SecondaryStructure_setType(PyObject *, PyObject *);}
static PyObject *meth_SecondaryStructure_setType(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        SecondaryStructure::Type a0;
        SecondaryStructure *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BE",&sipSelf,sipClass_SecondaryStructure,&sipCpp,sipEnum_SecondaryStructure_Type,&a0))
        {
            sipCpp->setType(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_SecondaryStructure,sipNm_BALL_setType);

    return NULL;
}


extern "C" {static PyObject *meth_SecondaryStructure_getProtein(PyObject *, PyObject *);}
static PyObject *meth_SecondaryStructure_getProtein(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        SecondaryStructure *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_SecondaryStructure,&sipCpp))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_SecondaryStructure,sipNm_BALL_getProtein);

    return NULL;
}


extern "C" {static PyObject *meth_SecondaryStructure_getChain(PyObject *, PyObject *);}
static PyObject *meth_SecondaryStructure_getChain(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        SecondaryStructure *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_SecondaryStructure,&sipCpp))
        {
            Chain *sipRes;

            try
            {
            sipRes = sipCpp->getChain();
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return sipConvertFromInstance(sipRes,sipClass_Chain,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_SecondaryStructure,sipNm_BALL_getChain);

    return NULL;
}


extern "C" {static PyObject *meth_SecondaryStructure_getResidue(PyObject *, PyObject *);}
static PyObject *meth_SecondaryStructure_getResidue(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        int a0;
        SecondaryStructure *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bi",&sipSelf,sipClass_SecondaryStructure,&sipCpp,&a0))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_SecondaryStructure,sipNm_BALL_getResidue);

    return NULL;
}


extern "C" {static PyObject *meth_SecondaryStructure_getNTerminal(PyObject *, PyObject *);}
static PyObject *meth_SecondaryStructure_getNTerminal(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        SecondaryStructure *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_SecondaryStructure,&sipCpp))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_SecondaryStructure,sipNm_BALL_getNTerminal);

    return NULL;
}


extern "C" {static PyObject *meth_SecondaryStructure_getCTerminal(PyObject *, PyObject *);}
static PyObject *meth_SecondaryStructure_getCTerminal(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        SecondaryStructure *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_SecondaryStructure,&sipCpp))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_SecondaryStructure,sipNm_BALL_getCTerminal);

    return NULL;
}


extern "C" {static PyObject *meth_SecondaryStructure_getPDBAtom(PyObject *, PyObject *);}
static PyObject *meth_SecondaryStructure_getPDBAtom(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        int a0;
        SecondaryStructure *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bi",&sipSelf,sipClass_SecondaryStructure,&sipCpp,&a0))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_SecondaryStructure,sipNm_BALL_getPDBAtom);

    return NULL;
}


extern "C" {static PyObject *meth_SecondaryStructure_countResidues(PyObject *, PyObject *);}
static PyObject *meth_SecondaryStructure_countResidues(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        SecondaryStructure *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_SecondaryStructure,&sipCpp))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_SecondaryStructure,sipNm_BALL_countResidues);

    return NULL;
}


extern "C" {static PyObject *meth_SecondaryStructure_countPDBAtoms(PyObject *, PyObject *);}
static PyObject *meth_SecondaryStructure_countPDBAtoms(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        SecondaryStructure *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_SecondaryStructure,&sipCpp))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_SecondaryStructure,sipNm_BALL_countPDBAtoms);

    return NULL;
}


extern "C" {static PyObject *meth_SecondaryStructure_prepend(PyObject *, PyObject *);}
static PyObject *meth_SecondaryStructure_prepend(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Residue * a0;
        SecondaryStructure *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJC",&sipSelf,sipClass_SecondaryStructure,&sipCpp,sipClass_Residue,&a0))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_SecondaryStructure,sipNm_BALL_prepend);

    return NULL;
}


extern "C" {static PyObject *meth_SecondaryStructure_append(PyObject *, PyObject *);}
static PyObject *meth_SecondaryStructure_append(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Residue * a0;
        SecondaryStructure *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJC",&sipSelf,sipClass_SecondaryStructure,&sipCpp,sipClass_Residue,&a0))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_SecondaryStructure,sipNm_BALL_append);

    return NULL;
}


extern "C" {static PyObject *meth_SecondaryStructure_insert(PyObject *, PyObject *);}
static PyObject *meth_SecondaryStructure_insert(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Residue * a0;
        SecondaryStructure *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJC",&sipSelf,sipClass_SecondaryStructure,&sipCpp,sipClass_Residue,&a0))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_SecondaryStructure,sipNm_BALL_insert);

    return NULL;
}


extern "C" {static PyObject *meth_SecondaryStructure_insertBefore(PyObject *, PyObject *);}
static PyObject *meth_SecondaryStructure_insertBefore(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Residue * a0;
        Composite * a1;
        SecondaryStructure *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJCJA",&sipSelf,sipClass_SecondaryStructure,&sipCpp,sipClass_Residue,&a0,sipClass_Composite,&a1))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_SecondaryStructure,sipNm_BALL_insertBefore);

    return NULL;
}


extern "C" {static PyObject *meth_SecondaryStructure_insertAfter(PyObject *, PyObject *);}
static PyObject *meth_SecondaryStructure_insertAfter(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Residue * a0;
        Composite * a1;
        SecondaryStructure *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJCJA",&sipSelf,sipClass_SecondaryStructure,&sipCpp,sipClass_Residue,&a0,sipClass_Composite,&a1))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_SecondaryStructure,sipNm_BALL_insertAfter);

    return NULL;
}


extern "C" {static PyObject *meth_SecondaryStructure_remove(PyObject *, PyObject *);}
static PyObject *meth_SecondaryStructure_remove(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Residue * a0;
        SecondaryStructure *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_SecondaryStructure,&sipCpp,sipClass_Residue,&a0))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_SecondaryStructure,sipNm_BALL_remove);

    return NULL;
}


extern "C" {static PyObject *meth_SecondaryStructure_spliceBefore(PyObject *, PyObject *);}
static PyObject *meth_SecondaryStructure_spliceBefore(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        SecondaryStructure * a0;
        SecondaryStructure *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_SecondaryStructure,&sipCpp,sipClass_SecondaryStructure,&a0))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_SecondaryStructure,sipNm_BALL_spliceBefore);

    return NULL;
}


extern "C" {static PyObject *meth_SecondaryStructure_spliceAfter(PyObject *, PyObject *);}
static PyObject *meth_SecondaryStructure_spliceAfter(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        SecondaryStructure * a0;
        SecondaryStructure *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_SecondaryStructure,&sipCpp,sipClass_SecondaryStructure,&a0))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_SecondaryStructure,sipNm_BALL_spliceAfter);

    return NULL;
}


extern "C" {static PyObject *meth_SecondaryStructure_splice(PyObject *, PyObject *);}
static PyObject *meth_SecondaryStructure_splice(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        SecondaryStructure * a0;
        SecondaryStructure *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_SecondaryStructure,&sipCpp,sipClass_SecondaryStructure,&a0))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_SecondaryStructure,sipNm_BALL_splice);

    return NULL;
}


extern "C" {static PyObject *meth_SecondaryStructure_isValid(PyObject *, PyObject *);}
static PyObject *meth_SecondaryStructure_isValid(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        SecondaryStructure *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_SecondaryStructure,&sipCpp))
        {
            bool sipRes;

            sipRes = (sipSelfWasArg ? sipCpp->SecondaryStructure::isValid() : sipCpp->isValid());

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_SecondaryStructure,sipNm_BALL_isValid);

    return NULL;
}


extern "C" {static PyObject *slot_SecondaryStructure___repr__(PyObject *sipSelf);}
static PyObject *slot_SecondaryStructure___repr__(PyObject *sipSelf)
{
    SecondaryStructure *sipCpp = reinterpret_cast<SecondaryStructure *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_SecondaryStructure));

    if (!sipCpp)
        return 0;


    {
        {
            PyObject * sipRes = 0;

#line 83 "secondaryStructure.sip"
	return PyString_FromString(String(String("SecondaryStructure ") + sipCpp->getName() 
						+ " { " + String(sipCpp->countResidues()) + " residues }").c_str());
#line 959 "sipBALLSecondaryStructure.C"

            return sipRes;
        }
    }
}


extern "C" {static PyObject *slot_SecondaryStructure___str__(PyObject *sipSelf);}
static PyObject *slot_SecondaryStructure___str__(PyObject *sipSelf)
{
    SecondaryStructure *sipCpp = reinterpret_cast<SecondaryStructure *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_SecondaryStructure));

    if (!sipCpp)
        return 0;


    {
        {
            PyObject * sipRes = 0;

#line 77 "secondaryStructure.sip"
	return PyString_FromString(String(String("SecondaryStructure ") + sipCpp->getName() 
						+ " { " + String(sipCpp->countResidues()) + " residues }").c_str());
#line 983 "sipBALLSecondaryStructure.C"

            return sipRes;
        }
    }
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_SecondaryStructure(void *, sipWrapperType *);}
static void *cast_SecondaryStructure(void *ptr,sipWrapperType *targetClass)
{
    void *res;

    if (targetClass == sipClass_SecondaryStructure)
        return ptr;

    if ((res = sipCast_AtomContainer((AtomContainer *)(SecondaryStructure *)ptr,targetClass)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_SecondaryStructure(void *, int);}
static void release_SecondaryStructure(void *ptr,int state)
{
    if (state & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipSecondaryStructure *>(ptr);
    else
        delete reinterpret_cast<SecondaryStructure *>(ptr);
}


extern "C" {static void dealloc_SecondaryStructure(sipWrapper *);}
static void dealloc_SecondaryStructure(sipWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipSecondaryStructure *>(sipSelf->u.cppPtr)->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_SecondaryStructure(sipSelf->u.cppPtr,sipSelf->flags);
    }
}


extern "C" {static void *init_SecondaryStructure(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_SecondaryStructure(sipWrapper *sipSelf,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    sipSecondaryStructure *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            try
            {
            sipCpp = new sipSecondaryStructure();
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
        const SecondaryStructure * a0;
        bool a1 = 1;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA|b",sipClass_SecondaryStructure,&a0,&a1))
        {
            try
            {
            sipCpp = new sipSecondaryStructure(*a0,a1);
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
            sipCpp = new sipSecondaryStructure(*a0);
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
        const SecondaryStructure * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_SecondaryStructure,&a0))
        {
            try
            {
            sipCpp = new sipSecondaryStructure(*a0);
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


extern "C" {static void *forceConvertTo_SecondaryStructure(PyObject *, int *);}
static void *forceConvertTo_SecondaryStructure(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_SecondaryStructure))
        return sipConvertToCpp(valobj,sipClass_SecondaryStructure,iserrp);

    sipBadClass(sipNm_BALL_SecondaryStructure);

    *iserrp = 1;

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedClassDef supers_SecondaryStructure[] = {{226, 255, 1}};


/* Define this type's Python slots. */
static sipPySlotDef slots_SecondaryStructure[] = {
    {(void *)slot_SecondaryStructure___repr__, repr_slot},
    {(void *)slot_SecondaryStructure___str__, str_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_SecondaryStructure[] = {
    {sipNm_BALL_append, meth_SecondaryStructure_append, METH_VARARGS, NULL},
    {sipNm_BALL_clear, meth_SecondaryStructure_clear, METH_VARARGS, NULL},
    {sipNm_BALL_countPDBAtoms, meth_SecondaryStructure_countPDBAtoms, METH_VARARGS, NULL},
    {sipNm_BALL_countResidues, meth_SecondaryStructure_countResidues, METH_VARARGS, NULL},
    {sipNm_BALL_destroy, meth_SecondaryStructure_destroy, METH_VARARGS, NULL},
    {sipNm_BALL_get, meth_SecondaryStructure_get, METH_VARARGS, NULL},
    {sipNm_BALL_getCTerminal, meth_SecondaryStructure_getCTerminal, METH_VARARGS, NULL},
    {sipNm_BALL_getChain, meth_SecondaryStructure_getChain, METH_VARARGS, NULL},
    {sipNm_BALL_getNTerminal, meth_SecondaryStructure_getNTerminal, METH_VARARGS, NULL},
    {sipNm_BALL_getPDBAtom, meth_SecondaryStructure_getPDBAtom, METH_VARARGS, NULL},
    {sipNm_BALL_getProtein, meth_SecondaryStructure_getProtein, METH_VARARGS, NULL},
    {sipNm_BALL_getResidue, meth_SecondaryStructure_getResidue, METH_VARARGS, NULL},
    {sipNm_BALL_getType, meth_SecondaryStructure_getType, METH_VARARGS, NULL},
    {sipNm_BALL_insert, meth_SecondaryStructure_insert, METH_VARARGS, NULL},
    {sipNm_BALL_insertAfter, meth_SecondaryStructure_insertAfter, METH_VARARGS, NULL},
    {sipNm_BALL_insertBefore, meth_SecondaryStructure_insertBefore, METH_VARARGS, NULL},
    {sipNm_BALL_isValid, meth_SecondaryStructure_isValid, METH_VARARGS, NULL},
    {sipNm_BALL_prepend, meth_SecondaryStructure_prepend, METH_VARARGS, NULL},
    {sipNm_BALL_remove, meth_SecondaryStructure_remove, METH_VARARGS, NULL},
    {sipNm_BALL_set, meth_SecondaryStructure_set, METH_VARARGS, NULL},
    {sipNm_BALL_setType, meth_SecondaryStructure_setType, METH_VARARGS, NULL},
    {sipNm_BALL_splice, meth_SecondaryStructure_splice, METH_VARARGS, NULL},
    {sipNm_BALL_spliceAfter, meth_SecondaryStructure_spliceAfter, METH_VARARGS, NULL},
    {sipNm_BALL_spliceBefore, meth_SecondaryStructure_spliceBefore, METH_VARARGS, NULL},
    {sipNm_BALL_swap, meth_SecondaryStructure_swap, METH_VARARGS, NULL}
};

static sipEnumMemberDef enummembers_SecondaryStructure[] = {
    {sipNm_BALL_COIL, SecondaryStructure::COIL, 22},
    {sipNm_BALL_HELIX, SecondaryStructure::HELIX, 22},
    {sipNm_BALL_NUMBER_OF_TYPES, SecondaryStructure::NUMBER_OF_TYPES, 22},
    {sipNm_BALL_STRAND, SecondaryStructure::STRAND, 22},
    {sipNm_BALL_TURN, SecondaryStructure::TURN, 22},
    {sipNm_BALL_UNKNOWN, SecondaryStructure::UNKNOWN, 22},
};


sipTypeDef sipType_BALL_SecondaryStructure = {
    0,
    0,
    "BALL.SecondaryStructure",
    0,
    {0, 0, 1},
    supers_SecondaryStructure,
    slots_SecondaryStructure,
    25, methods_SecondaryStructure,
    6, enummembers_SecondaryStructure,
    0,
    init_SecondaryStructure,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_SecondaryStructure,
    cast_SecondaryStructure,
    release_SecondaryStructure,
    forceConvertTo_SecondaryStructure,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
