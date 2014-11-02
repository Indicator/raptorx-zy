/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLResidue.h"

#include "sipBALLFragment.h"
#include "sipBALLString.h"
#include "sipBALLResidue.h"
#include "sipBALLPDBAtom.h"
#include "sipBALLComposite.h"
#include "sipBALLSecondaryStructure.h"
#include "sipBALLPosition.h"
#include "sipBALLChain.h"
#include "sipBALLProtein.h"
#include "sipBALLAngle.h"
#include "sipBALLAtomContainer.h"
#include "sipBALLAtomProcessor.h"
#include "sipBALLCompositeProcessor.h"
#include "sipBALLFragmentProcessor.h"
#include "sipBALLResidueProcessor.h"
#include "sipBALLAtom.h"
#include "sipBALLPreciseTime.h"
#include "sipBALLIndex.h"
#include "sipBALLObject.h"
#include "sipBALLSelectable.h"
#include "sipBALLPropertyManager.h"
#include "sipBALLNamedProperty.h"
#include "sipBALLPersistentObject.h"


sipResidue::sipResidue(): Residue(), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,5);
}

sipResidue::sipResidue(const Residue& a0,bool a1): Residue(a0,a1), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,5);
}

sipResidue::sipResidue(const String& a0,const String& a1,char a2): Residue(a0,a1,a2), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,5);
}

sipResidue::sipResidue(const Residue& a0): Residue(a0), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,5);
}

sipResidue::~sipResidue() throw()
{
    sipCommonDtor(sipPySelf);
}

void sipResidue::clear() throw()
{
    extern void sipVH_BALL_0(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipNm_BALL_clear);

    if (!meth)
    {
        Residue::clear();
        return;
    }

    sipVH_BALL_0(sipGILState,meth);
}

void sipResidue::destroy() throw()
{
    extern void sipVH_BALL_0(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,NULL,sipNm_BALL_destroy);

    if (!meth)
    {
        Residue::destroy();
        return;
    }

    sipVH_BALL_0(sipGILState,meth);
}

bool sipResidue::isValid() const throw()
{
    extern bool sipVH_BALL_4(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<sipMethodCache *>(&sipPyMethods[2]),sipPySelf,NULL,sipNm_BALL_isValid);

    if (!meth)
        return Residue::isValid();

    return sipVH_BALL_4(sipGILState,meth);
}

void sipResidue::select() throw()
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

void sipResidue::deselect() throw()
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


extern "C" {static PyObject *meth_Residue_clear(PyObject *, PyObject *);}
static PyObject *meth_Residue_clear(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        Residue *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Residue,&sipCpp))
        {
            (sipSelfWasArg ? sipCpp->Residue::clear() : sipCpp->clear());

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Residue,sipNm_BALL_clear);

    return NULL;
}


extern "C" {static PyObject *meth_Residue_destroy(PyObject *, PyObject *);}
static PyObject *meth_Residue_destroy(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        Residue *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Residue,&sipCpp))
        {
            (sipSelfWasArg ? sipCpp->Residue::destroy() : sipCpp->destroy());

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Residue,sipNm_BALL_destroy);

    return NULL;
}


extern "C" {static PyObject *meth_Residue_set(PyObject *, PyObject *);}
static PyObject *meth_Residue_set(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const Residue * a0;
        bool a1 = 1;
        Residue *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA|b",&sipSelf,sipClass_Residue,&sipCpp,sipClass_Residue,&a0,&a1))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Residue,sipNm_BALL_set);

    return NULL;
}


extern "C" {static PyObject *meth_Residue_get(PyObject *, PyObject *);}
static PyObject *meth_Residue_get(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Residue * a0;
        bool a1 = 1;
        Residue *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA|b",&sipSelf,sipClass_Residue,&sipCpp,sipClass_Residue,&a0,&a1))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Residue,sipNm_BALL_get);

    return NULL;
}


extern "C" {static PyObject *meth_Residue_swap(PyObject *, PyObject *);}
static PyObject *meth_Residue_swap(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Residue * a0;
        Residue *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_Residue,&sipCpp,sipClass_Residue,&a0))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Residue,sipNm_BALL_swap);

    return NULL;
}


extern "C" {static PyObject *meth_Residue_getFullName(PyObject *, PyObject *);}
static PyObject *meth_Residue_getFullName(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Residue::FullNameType a0 = Residue::ADD_VARIANT_EXTENSIONS;
        Residue *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B|E",&sipSelf,sipClass_Residue,&sipCpp,sipEnum_Residue_FullNameType,&a0))
        {
            String *sipRes;

            try
            {
            sipRes = new String(sipCpp->getFullName(a0));
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Residue,sipNm_BALL_getFullName);

    return NULL;
}


extern "C" {static PyObject *meth_Residue_hasTorsionPhi(PyObject *, PyObject *);}
static PyObject *meth_Residue_hasTorsionPhi(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Residue *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Residue,&sipCpp))
        {
            bool sipRes;

            try
            {
            sipRes = sipCpp->hasTorsionPhi();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Residue,sipNm_BALL_hasTorsionPhi);

    return NULL;
}


extern "C" {static PyObject *meth_Residue_getTorsionPhi(PyObject *, PyObject *);}
static PyObject *meth_Residue_getTorsionPhi(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Residue *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Residue,&sipCpp))
        {
            Angle *sipRes;

            try
            {
            sipRes = new Angle(sipCpp->getTorsionPhi());
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return sipConvertFromNewInstance(sipRes,sipClass_Angle,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Residue,sipNm_BALL_getTorsionPhi);

    return NULL;
}


extern "C" {static PyObject *meth_Residue_hasTorsionPsi(PyObject *, PyObject *);}
static PyObject *meth_Residue_hasTorsionPsi(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Residue *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Residue,&sipCpp))
        {
            bool sipRes;

            try
            {
            sipRes = sipCpp->hasTorsionPsi();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Residue,sipNm_BALL_hasTorsionPsi);

    return NULL;
}


extern "C" {static PyObject *meth_Residue_getTorsionPsi(PyObject *, PyObject *);}
static PyObject *meth_Residue_getTorsionPsi(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Residue *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Residue,&sipCpp))
        {
            Angle *sipRes;

            try
            {
            sipRes = new Angle(sipCpp->getTorsionPsi());
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return sipConvertFromNewInstance(sipRes,sipClass_Angle,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Residue,sipNm_BALL_getTorsionPsi);

    return NULL;
}


extern "C" {static PyObject *meth_Residue_getProtein(PyObject *, PyObject *);}
static PyObject *meth_Residue_getProtein(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Residue *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Residue,&sipCpp))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Residue,sipNm_BALL_getProtein);

    return NULL;
}


extern "C" {static PyObject *meth_Residue_getChain(PyObject *, PyObject *);}
static PyObject *meth_Residue_getChain(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Residue *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Residue,&sipCpp))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Residue,sipNm_BALL_getChain);

    return NULL;
}


extern "C" {static PyObject *meth_Residue_getPDBAtom(PyObject *, PyObject *);}
static PyObject *meth_Residue_getPDBAtom(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Position * a0;
        int a0State = 0;
        Residue *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BM1",&sipSelf,sipClass_Residue,&sipCpp,sipMappedType_Position,&a0,&a0State))
        {
            PDBAtom *sipRes;

            try
            {
            sipRes = sipCpp->getPDBAtom(*a0);
            }
            catch (...)
            {

            sipReleaseMappedType(a0,sipMappedType_Position,a0State);
                sipRaiseUnknownException();
                return NULL;
            }

            sipReleaseMappedType(a0,sipMappedType_Position,a0State);

            return sipConvertFromInstance(sipRes,sipClass_PDBAtom,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Residue,sipNm_BALL_getPDBAtom);

    return NULL;
}


extern "C" {static PyObject *meth_Residue_getSecondaryStructure(PyObject *, PyObject *);}
static PyObject *meth_Residue_getSecondaryStructure(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Residue *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Residue,&sipCpp))
        {
            SecondaryStructure *sipRes;

            sipRes = sipCpp->getSecondaryStructure();

            return sipConvertFromInstance(sipRes,sipClass_SecondaryStructure,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Residue,sipNm_BALL_getSecondaryStructure);

    return NULL;
}


extern "C" {static PyObject *meth_Residue_setID(PyObject *, PyObject *);}
static PyObject *meth_Residue_setID(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const String * a0;
        int a0State = 0;
        Residue *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ1",&sipSelf,sipClass_Residue,&sipCpp,sipClass_String,&a0,&a0State))
        {
            try
            {
            sipCpp->setID(*a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Residue,sipNm_BALL_setID);

    return NULL;
}


extern "C" {static PyObject *meth_Residue_getID(PyObject *, PyObject *);}
static PyObject *meth_Residue_getID(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Residue *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Residue,&sipCpp))
        {
            const String *sipRes;

            try
            {
            sipRes = &sipCpp->getID();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Residue,sipNm_BALL_getID);

    return NULL;
}


extern "C" {static PyObject *meth_Residue_setInsertionCode(PyObject *, PyObject *);}
static PyObject *meth_Residue_setInsertionCode(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        char a0;
        Residue *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bc",&sipSelf,sipClass_Residue,&sipCpp,&a0))
        {
            try
            {
            sipCpp->setInsertionCode(a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Residue,sipNm_BALL_setInsertionCode);

    return NULL;
}


extern "C" {static PyObject *meth_Residue_getInsertionCode(PyObject *, PyObject *);}
static PyObject *meth_Residue_getInsertionCode(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Residue *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Residue,&sipCpp))
        {
            char sipRes;

            try
            {
            sipRes = sipCpp->getInsertionCode();
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return PyString_FromStringAndSize(&sipRes,1);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Residue,sipNm_BALL_getInsertionCode);

    return NULL;
}


extern "C" {static PyObject *meth_Residue_countPDBAtoms(PyObject *, PyObject *);}
static PyObject *meth_Residue_countPDBAtoms(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Residue *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Residue,&sipCpp))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Residue,sipNm_BALL_countPDBAtoms);

    return NULL;
}


extern "C" {static PyObject *meth_Residue_prepend(PyObject *, PyObject *);}
static PyObject *meth_Residue_prepend(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        PDBAtom * a0;
        Residue *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJC",&sipSelf,sipClass_Residue,&sipCpp,sipClass_PDBAtom,&a0))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Residue,sipNm_BALL_prepend);

    return NULL;
}


extern "C" {static PyObject *meth_Residue_append(PyObject *, PyObject *);}
static PyObject *meth_Residue_append(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        PDBAtom * a0;
        Residue *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJC",&sipSelf,sipClass_Residue,&sipCpp,sipClass_PDBAtom,&a0))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Residue,sipNm_BALL_append);

    return NULL;
}


extern "C" {static PyObject *meth_Residue_insert(PyObject *, PyObject *);}
static PyObject *meth_Residue_insert(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        PDBAtom * a0;
        Residue *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJC",&sipSelf,sipClass_Residue,&sipCpp,sipClass_PDBAtom,&a0))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Residue,sipNm_BALL_insert);

    return NULL;
}


extern "C" {static PyObject *meth_Residue_insertBefore(PyObject *, PyObject *);}
static PyObject *meth_Residue_insertBefore(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        PDBAtom * a0;
        Composite * a1;
        Residue *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJCJA",&sipSelf,sipClass_Residue,&sipCpp,sipClass_PDBAtom,&a0,sipClass_Composite,&a1))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Residue,sipNm_BALL_insertBefore);

    return NULL;
}


extern "C" {static PyObject *meth_Residue_insertAfter(PyObject *, PyObject *);}
static PyObject *meth_Residue_insertAfter(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        PDBAtom * a0;
        Composite * a1;
        Residue *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJCJA",&sipSelf,sipClass_Residue,&sipCpp,sipClass_PDBAtom,&a0,sipClass_Composite,&a1))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Residue,sipNm_BALL_insertAfter);

    return NULL;
}


extern "C" {static PyObject *meth_Residue_remove(PyObject *, PyObject *);}
static PyObject *meth_Residue_remove(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        PDBAtom * a0;
        Residue *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_Residue,&sipCpp,sipClass_PDBAtom,&a0))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Residue,sipNm_BALL_remove);

    return NULL;
}


extern "C" {static PyObject *meth_Residue_spliceBefore(PyObject *, PyObject *);}
static PyObject *meth_Residue_spliceBefore(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Residue * a0;
        Residue *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_Residue,&sipCpp,sipClass_Residue,&a0))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Residue,sipNm_BALL_spliceBefore);

    return NULL;
}


extern "C" {static PyObject *meth_Residue_spliceAfter(PyObject *, PyObject *);}
static PyObject *meth_Residue_spliceAfter(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Residue * a0;
        Residue *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_Residue,&sipCpp,sipClass_Residue,&a0))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Residue,sipNm_BALL_spliceAfter);

    return NULL;
}


extern "C" {static PyObject *meth_Residue_splice(PyObject *, PyObject *);}
static PyObject *meth_Residue_splice(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Residue * a0;
        Residue *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_Residue,&sipCpp,sipClass_Residue,&a0))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Residue,sipNm_BALL_splice);

    return NULL;
}


extern "C" {static PyObject *meth_Residue_isAminoAcid(PyObject *, PyObject *);}
static PyObject *meth_Residue_isAminoAcid(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Residue *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Residue,&sipCpp))
        {
            bool sipRes;

            try
            {
            sipRes = sipCpp->isAminoAcid();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Residue,sipNm_BALL_isAminoAcid);

    return NULL;
}


extern "C" {static PyObject *meth_Residue_isTerminal(PyObject *, PyObject *);}
static PyObject *meth_Residue_isTerminal(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Residue *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Residue,&sipCpp))
        {
            bool sipRes;

            try
            {
            sipRes = sipCpp->isTerminal();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Residue,sipNm_BALL_isTerminal);

    return NULL;
}


extern "C" {static PyObject *meth_Residue_isNTerminal(PyObject *, PyObject *);}
static PyObject *meth_Residue_isNTerminal(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Residue *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Residue,&sipCpp))
        {
            bool sipRes;

            try
            {
            sipRes = sipCpp->isNTerminal();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Residue,sipNm_BALL_isNTerminal);

    return NULL;
}


extern "C" {static PyObject *meth_Residue_isCTerminal(PyObject *, PyObject *);}
static PyObject *meth_Residue_isCTerminal(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Residue *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Residue,&sipCpp))
        {
            bool sipRes;

            try
            {
            sipRes = sipCpp->isCTerminal();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Residue,sipNm_BALL_isCTerminal);

    return NULL;
}


extern "C" {static PyObject *meth_Residue_isValid(PyObject *, PyObject *);}
static PyObject *meth_Residue_isValid(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        Residue *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Residue,&sipCpp))
        {
            bool sipRes;

            sipRes = (sipSelfWasArg ? sipCpp->Residue::isValid() : sipCpp->isValid());

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Residue,sipNm_BALL_isValid);

    return NULL;
}


extern "C" {static PyObject *slot_Residue___str__(PyObject *sipSelf);}
static PyObject *slot_Residue___str__(PyObject *sipSelf)
{
    Residue *sipCpp = reinterpret_cast<Residue *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_Residue));

    if (!sipCpp)
        return 0;


    {
        {
            PyObject * sipRes = 0;

#line 88 "residue.sip"
	sipRes = PyString_FromString(String(String("Residue ") + sipCpp->getName() + sipCpp->getID()
    			    + " { " + String(sipCpp->countAtoms()) + " atoms }").c_str());
#line 1243 "sipBALLResidue.C"

            return sipRes;
        }
    }
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_Residue(void *, sipWrapperType *);}
static void *cast_Residue(void *ptr,sipWrapperType *targetClass)
{
    void *res;

    if (targetClass == sipClass_Residue)
        return ptr;

    if ((res = sipCast_Fragment((Fragment *)(Residue *)ptr,targetClass)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_Residue(void *, int);}
static void release_Residue(void *ptr,int state)
{
    if (state & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipResidue *>(ptr);
    else
        delete reinterpret_cast<Residue *>(ptr);
}


extern "C" {static void dealloc_Residue(sipWrapper *);}
static void dealloc_Residue(sipWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipResidue *>(sipSelf->u.cppPtr)->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_Residue(sipSelf->u.cppPtr,sipSelf->flags);
    }
}


extern "C" {static void *init_Residue(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_Residue(sipWrapper *sipSelf,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    sipResidue *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            try
            {
            sipCpp = new sipResidue();
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
        const Residue * a0;
        bool a1 = 1;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA|b",sipClass_Residue,&a0,&a1))
        {
            try
            {
            sipCpp = new sipResidue(*a0,a1);
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
        const String& a1def = "";
        const String * a1 = &a1def;
        int a1State = 0;
        char a2 = ' ';

        if (sipParseArgs(sipArgsParsed,sipArgs,"J1|J1c",sipClass_String,&a0,&a0State,sipClass_String,&a1,&a1State,&a2))
        {
            try
            {
            sipCpp = new sipResidue(*a0,*a1,a2);
            }
            catch (...)
            {

            sipReleaseInstance(const_cast<String *>(a0),sipClass_String,a0State);
            sipReleaseInstance(const_cast<String *>(a1),sipClass_String,a1State);
                sipRaiseUnknownException();
                return NULL;
            }

            sipReleaseInstance(const_cast<String *>(a0),sipClass_String,a0State);
            sipReleaseInstance(const_cast<String *>(a1),sipClass_String,a1State);
        }
    }

    if (!sipCpp)
    {
        const Residue * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_Residue,&a0))
        {
            try
            {
            sipCpp = new sipResidue(*a0);
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


extern "C" {static void *forceConvertTo_Residue(PyObject *, int *);}
static void *forceConvertTo_Residue(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_Residue))
        return sipConvertToCpp(valobj,sipClass_Residue,iserrp);

    sipBadClass(sipNm_BALL_Residue);

    *iserrp = 1;

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedClassDef supers_Residue[] = {{232, 255, 1}};


/* Define this type's Python slots. */
static sipPySlotDef slots_Residue[] = {
    {(void *)slot_Residue___str__, str_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_Residue[] = {
    {sipNm_BALL_append, meth_Residue_append, METH_VARARGS, NULL},
    {sipNm_BALL_clear, meth_Residue_clear, METH_VARARGS, NULL},
    {sipNm_BALL_countPDBAtoms, meth_Residue_countPDBAtoms, METH_VARARGS, NULL},
    {sipNm_BALL_destroy, meth_Residue_destroy, METH_VARARGS, NULL},
    {sipNm_BALL_get, meth_Residue_get, METH_VARARGS, NULL},
    {sipNm_BALL_getChain, meth_Residue_getChain, METH_VARARGS, NULL},
    {sipNm_BALL_getFullName, meth_Residue_getFullName, METH_VARARGS, NULL},
    {sipNm_BALL_getID, meth_Residue_getID, METH_VARARGS, NULL},
    {sipNm_BALL_getInsertionCode, meth_Residue_getInsertionCode, METH_VARARGS, NULL},
    {sipNm_BALL_getPDBAtom, meth_Residue_getPDBAtom, METH_VARARGS, NULL},
    {sipNm_BALL_getProtein, meth_Residue_getProtein, METH_VARARGS, NULL},
    {sipNm_BALL_getSecondaryStructure, meth_Residue_getSecondaryStructure, METH_VARARGS, NULL},
    {sipNm_BALL_getTorsionPhi, meth_Residue_getTorsionPhi, METH_VARARGS, NULL},
    {sipNm_BALL_getTorsionPsi, meth_Residue_getTorsionPsi, METH_VARARGS, NULL},
    {sipNm_BALL_hasTorsionPhi, meth_Residue_hasTorsionPhi, METH_VARARGS, NULL},
    {sipNm_BALL_hasTorsionPsi, meth_Residue_hasTorsionPsi, METH_VARARGS, NULL},
    {sipNm_BALL_insert, meth_Residue_insert, METH_VARARGS, NULL},
    {sipNm_BALL_insertAfter, meth_Residue_insertAfter, METH_VARARGS, NULL},
    {sipNm_BALL_insertBefore, meth_Residue_insertBefore, METH_VARARGS, NULL},
    {sipNm_BALL_isAminoAcid, meth_Residue_isAminoAcid, METH_VARARGS, NULL},
    {sipNm_BALL_isCTerminal, meth_Residue_isCTerminal, METH_VARARGS, NULL},
    {sipNm_BALL_isNTerminal, meth_Residue_isNTerminal, METH_VARARGS, NULL},
    {sipNm_BALL_isTerminal, meth_Residue_isTerminal, METH_VARARGS, NULL},
    {sipNm_BALL_isValid, meth_Residue_isValid, METH_VARARGS, NULL},
    {sipNm_BALL_prepend, meth_Residue_prepend, METH_VARARGS, NULL},
    {sipNm_BALL_remove, meth_Residue_remove, METH_VARARGS, NULL},
    {sipNm_BALL_set, meth_Residue_set, METH_VARARGS, NULL},
    {sipNm_BALL_setID, meth_Residue_setID, METH_VARARGS, NULL},
    {sipNm_BALL_setInsertionCode, meth_Residue_setInsertionCode, METH_VARARGS, NULL},
    {sipNm_BALL_splice, meth_Residue_splice, METH_VARARGS, NULL},
    {sipNm_BALL_spliceAfter, meth_Residue_spliceAfter, METH_VARARGS, NULL},
    {sipNm_BALL_spliceBefore, meth_Residue_spliceBefore, METH_VARARGS, NULL},
    {sipNm_BALL_swap, meth_Residue_swap, METH_VARARGS, NULL}
};

static sipEnumMemberDef enummembers_Residue[] = {
    {sipNm_BALL_ADD_VARIANT_EXTENSIONS, Residue::ADD_VARIANT_EXTENSIONS, 23},
    {sipNm_BALL_NO_VARIANT_EXTENSIONS, Residue::NO_VARIANT_EXTENSIONS, 23},
    {sipNm_BALL_NUMBER_OF_PROPERTIES, Residue::NUMBER_OF_PROPERTIES, 24},
    {sipNm_BALL_PROPERTY__AMINO_ACID, Residue::PROPERTY__AMINO_ACID, 24},
    {sipNm_BALL_PROPERTY__CYCLIC, Residue::PROPERTY__CYCLIC, 24},
    {sipNm_BALL_PROPERTY__C_TERMINAL, Residue::PROPERTY__C_TERMINAL, 24},
    {sipNm_BALL_PROPERTY__HAS_SSBOND, Residue::PROPERTY__HAS_SSBOND, 24},
    {sipNm_BALL_PROPERTY__NON_STANDARD, Residue::PROPERTY__NON_STANDARD, 24},
    {sipNm_BALL_PROPERTY__N_TERMINAL, Residue::PROPERTY__N_TERMINAL, 24},
    {sipNm_BALL_PROPERTY__WATER, Residue::PROPERTY__WATER, 24},
};


sipTypeDef sipType_BALL_Residue = {
    0,
    0,
    "BALL.Residue",
    0,
    {0, 0, 1},
    supers_Residue,
    slots_Residue,
    33, methods_Residue,
    10, enummembers_Residue,
    0,
    init_Residue,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_Residue,
    cast_Residue,
    release_Residue,
    forceConvertTo_Residue,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
