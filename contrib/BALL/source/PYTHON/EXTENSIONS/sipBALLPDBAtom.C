/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLPDBAtom.h"

#include "sipBALLAtom.h"
#include "sipBALLElement.h"
#include "sipBALLString.h"
#include "sipBALLAtomType.h"
#include "sipBALLVector3.h"
#include "sipBALLPDBAtom.h"
#include "sipBALLResidue.h"
#include "sipBALLChain.h"
#include "sipBALLProtein.h"
#include "sipBALLBondProcessor.h"
#include "sipBALLBond.h"
#include "sipBALLPosition.h"
#include "sipBALLMolecule.h"
#include "sipBALLSecondaryStructure.h"
#include "sipBALLFragment.h"
#include "sipBALLIndex.h"
#include "sipBALLComposite.h"
#include "sipBALLPreciseTime.h"
#include "sipBALLObject.h"
#include "sipBALLSelectable.h"
#include "sipBALLPropertyManager.h"
#include "sipBALLNamedProperty.h"
#include "sipBALLPersistentObject.h"


sipPDBAtom::sipPDBAtom(): PDBAtom(), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,5);
}

sipPDBAtom::sipPDBAtom(const PDBAtom& a0,bool a1): PDBAtom(a0,a1), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,5);
}

sipPDBAtom::sipPDBAtom(Element& a0,const String& a1,const String& a2,AtomType a3,const Vector3& a4,const Vector3& a5,const Vector3& a6,float a7,float a8,char a9,char a10,char a11,float a12,float a13): PDBAtom(a0,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,5);
}

sipPDBAtom::sipPDBAtom(const PDBAtom& a0): PDBAtom(a0), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,5);
}

sipPDBAtom::~sipPDBAtom() throw()
{
    sipCommonDtor(sipPySelf);
}

void sipPDBAtom::clear() throw()
{
    extern void sipVH_BALL_0(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipNm_BALL_clear);

    if (!meth)
    {
        PDBAtom::clear();
        return;
    }

    sipVH_BALL_0(sipGILState,meth);
}

void sipPDBAtom::destroy() throw()
{
    extern void sipVH_BALL_0(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,NULL,sipNm_BALL_destroy);

    if (!meth)
    {
        PDBAtom::destroy();
        return;
    }

    sipVH_BALL_0(sipGILState,meth);
}

bool sipPDBAtom::isValid() const throw()
{
    extern bool sipVH_BALL_4(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<sipMethodCache *>(&sipPyMethods[2]),sipPySelf,NULL,sipNm_BALL_isValid);

    if (!meth)
        return PDBAtom::isValid();

    return sipVH_BALL_4(sipGILState,meth);
}

void sipPDBAtom::select() throw()
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

void sipPDBAtom::deselect() throw()
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


extern "C" {static PyObject *meth_PDBAtom_clear(PyObject *, PyObject *);}
static PyObject *meth_PDBAtom_clear(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        PDBAtom *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_PDBAtom,&sipCpp))
        {
            (sipSelfWasArg ? sipCpp->PDBAtom::clear() : sipCpp->clear());

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_PDBAtom,sipNm_BALL_clear);

    return NULL;
}


extern "C" {static PyObject *meth_PDBAtom_destroy(PyObject *, PyObject *);}
static PyObject *meth_PDBAtom_destroy(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        PDBAtom *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_PDBAtom,&sipCpp))
        {
            (sipSelfWasArg ? sipCpp->PDBAtom::destroy() : sipCpp->destroy());

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_PDBAtom,sipNm_BALL_destroy);

    return NULL;
}


extern "C" {static PyObject *meth_PDBAtom_set(PyObject *, PyObject *);}
static PyObject *meth_PDBAtom_set(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const PDBAtom * a0;
        bool a1 = 1;
        PDBAtom *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA|b",&sipSelf,sipClass_PDBAtom,&sipCpp,sipClass_PDBAtom,&a0,&a1))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_PDBAtom,sipNm_BALL_set);

    return NULL;
}


extern "C" {static PyObject *meth_PDBAtom_get(PyObject *, PyObject *);}
static PyObject *meth_PDBAtom_get(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        PDBAtom * a0;
        bool a1 = 1;
        PDBAtom *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA|b",&sipSelf,sipClass_PDBAtom,&sipCpp,sipClass_PDBAtom,&a0,&a1))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_PDBAtom,sipNm_BALL_get);

    return NULL;
}


extern "C" {static PyObject *meth_PDBAtom_swap(PyObject *, PyObject *);}
static PyObject *meth_PDBAtom_swap(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        PDBAtom * a0;
        PDBAtom *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_PDBAtom,&sipCpp,sipClass_PDBAtom,&a0))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_PDBAtom,sipNm_BALL_swap);

    return NULL;
}


extern "C" {static PyObject *meth_PDBAtom_getProtein(PyObject *, PyObject *);}
static PyObject *meth_PDBAtom_getProtein(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        PDBAtom *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_PDBAtom,&sipCpp))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_PDBAtom,sipNm_BALL_getProtein);

    return NULL;
}


extern "C" {static PyObject *meth_PDBAtom_getChain(PyObject *, PyObject *);}
static PyObject *meth_PDBAtom_getChain(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        PDBAtom *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_PDBAtom,&sipCpp))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_PDBAtom,sipNm_BALL_getChain);

    return NULL;
}


extern "C" {static PyObject *meth_PDBAtom_getResidue(PyObject *, PyObject *);}
static PyObject *meth_PDBAtom_getResidue(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        PDBAtom *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_PDBAtom,&sipCpp))
        {
            Residue *sipRes;

            try
            {
            sipRes = sipCpp->getResidue();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_PDBAtom,sipNm_BALL_getResidue);

    return NULL;
}


extern "C" {static PyObject *meth_PDBAtom_setBranchDesignator(PyObject *, PyObject *);}
static PyObject *meth_PDBAtom_setBranchDesignator(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        char a0;
        PDBAtom *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bc",&sipSelf,sipClass_PDBAtom,&sipCpp,&a0))
        {
            try
            {
            sipCpp->setBranchDesignator(a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_PDBAtom,sipNm_BALL_setBranchDesignator);

    return NULL;
}


extern "C" {static PyObject *meth_PDBAtom_getBranchDesignator(PyObject *, PyObject *);}
static PyObject *meth_PDBAtom_getBranchDesignator(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        PDBAtom *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_PDBAtom,&sipCpp))
        {
            char sipRes;

            try
            {
            sipRes = sipCpp->getBranchDesignator();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_PDBAtom,sipNm_BALL_getBranchDesignator);

    return NULL;
}


extern "C" {static PyObject *meth_PDBAtom_setRemotenessIndicator(PyObject *, PyObject *);}
static PyObject *meth_PDBAtom_setRemotenessIndicator(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        char a0;
        PDBAtom *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bc",&sipSelf,sipClass_PDBAtom,&sipCpp,&a0))
        {
            try
            {
            sipCpp->setRemotenessIndicator(a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_PDBAtom,sipNm_BALL_setRemotenessIndicator);

    return NULL;
}


extern "C" {static PyObject *meth_PDBAtom_getRemotenessIndicator(PyObject *, PyObject *);}
static PyObject *meth_PDBAtom_getRemotenessIndicator(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        PDBAtom *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_PDBAtom,&sipCpp))
        {
            char sipRes;

            try
            {
            sipRes = sipCpp->getRemotenessIndicator();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_PDBAtom,sipNm_BALL_getRemotenessIndicator);

    return NULL;
}


extern "C" {static PyObject *meth_PDBAtom_setAlternateLocationIndicator(PyObject *, PyObject *);}
static PyObject *meth_PDBAtom_setAlternateLocationIndicator(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        char a0;
        PDBAtom *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bc",&sipSelf,sipClass_PDBAtom,&sipCpp,&a0))
        {
            try
            {
            sipCpp->setAlternateLocationIndicator(a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_PDBAtom,sipNm_BALL_setAlternateLocationIndicator);

    return NULL;
}


extern "C" {static PyObject *meth_PDBAtom_getAlternateLocationIndicator(PyObject *, PyObject *);}
static PyObject *meth_PDBAtom_getAlternateLocationIndicator(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        PDBAtom *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_PDBAtom,&sipCpp))
        {
            char sipRes;

            try
            {
            sipRes = sipCpp->getAlternateLocationIndicator();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_PDBAtom,sipNm_BALL_getAlternateLocationIndicator);

    return NULL;
}


extern "C" {static PyObject *meth_PDBAtom_setOccupancy(PyObject *, PyObject *);}
static PyObject *meth_PDBAtom_setOccupancy(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        float a0;
        PDBAtom *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bf",&sipSelf,sipClass_PDBAtom,&sipCpp,&a0))
        {
            try
            {
            sipCpp->setOccupancy(a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_PDBAtom,sipNm_BALL_setOccupancy);

    return NULL;
}


extern "C" {static PyObject *meth_PDBAtom_getOccupancy(PyObject *, PyObject *);}
static PyObject *meth_PDBAtom_getOccupancy(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        PDBAtom *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_PDBAtom,&sipCpp))
        {
            float sipRes;

            try
            {
            sipRes = sipCpp->getOccupancy();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_PDBAtom,sipNm_BALL_getOccupancy);

    return NULL;
}


extern "C" {static PyObject *meth_PDBAtom_setTemperatureFactor(PyObject *, PyObject *);}
static PyObject *meth_PDBAtom_setTemperatureFactor(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        float a0;
        PDBAtom *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bf",&sipSelf,sipClass_PDBAtom,&sipCpp,&a0))
        {
            try
            {
            sipCpp->setTemperatureFactor(a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_PDBAtom,sipNm_BALL_setTemperatureFactor);

    return NULL;
}


extern "C" {static PyObject *meth_PDBAtom_getTemperatureFactor(PyObject *, PyObject *);}
static PyObject *meth_PDBAtom_getTemperatureFactor(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        PDBAtom *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_PDBAtom,&sipCpp))
        {
            float sipRes;

            try
            {
            sipRes = sipCpp->getTemperatureFactor();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_PDBAtom,sipNm_BALL_getTemperatureFactor);

    return NULL;
}


extern "C" {static PyObject *meth_PDBAtom_isValid(PyObject *, PyObject *);}
static PyObject *meth_PDBAtom_isValid(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        PDBAtom *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_PDBAtom,&sipCpp))
        {
            bool sipRes;

            sipRes = (sipSelfWasArg ? sipCpp->PDBAtom::isValid() : sipCpp->isValid());

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_PDBAtom,sipNm_BALL_isValid);

    return NULL;
}


extern "C" {static PyObject *slot_PDBAtom___str__(PyObject *sipSelf);}
static PyObject *slot_PDBAtom___str__(PyObject *sipSelf)
{
    PDBAtom *sipCpp = reinterpret_cast<PDBAtom *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_PDBAtom));

    if (!sipCpp)
        return 0;


    {
        {
            PyObject * sipRes = 0;

#line 68 "PDBAtom.sip"
	sipRes = PyString_FromString(String(String("PDBAtom ") + sipCpp->getName()
        + " { " + sipCpp->getElement().getSymbol() + " @ ("
        + String(sipCpp->getPosition().x) + " " + String(sipCpp->getPosition().y) + " "
        + String(sipCpp->getPosition().z) + " }").c_str());
#line 776 "sipBALLPDBAtom.C"

            return sipRes;
        }
    }
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_PDBAtom(void *, sipWrapperType *);}
static void *cast_PDBAtom(void *ptr,sipWrapperType *targetClass)
{
    void *res;

    if (targetClass == sipClass_PDBAtom)
        return ptr;

    if ((res = sipCast_Atom((Atom *)(PDBAtom *)ptr,targetClass)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_PDBAtom(void *, int);}
static void release_PDBAtom(void *ptr,int state)
{
    if (state & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipPDBAtom *>(ptr);
    else
        delete reinterpret_cast<PDBAtom *>(ptr);
}


extern "C" {static void dealloc_PDBAtom(sipWrapper *);}
static void dealloc_PDBAtom(sipWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipPDBAtom *>(sipSelf->u.cppPtr)->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_PDBAtom(sipSelf->u.cppPtr,sipSelf->flags);
    }
}


extern "C" {static void *init_PDBAtom(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_PDBAtom(sipWrapper *sipSelf,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    sipPDBAtom *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            try
            {
            sipCpp = new sipPDBAtom();
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
        const PDBAtom * a0;
        bool a1 = 1;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA|b",sipClass_PDBAtom,&a0,&a1))
        {
            try
            {
            sipCpp = new sipPDBAtom(*a0,a1);
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
        Element * a0;
        const String * a1;
        int a1State = 0;
        const String * a2;
        int a2State = 0;
        AtomType * a3;
        int a3State = 0;
        const Vector3 * a4;
        const Vector3 * a5;
        const Vector3 * a6;
        float a7;
        float a8;
        char a9;
        char a10;
        char a11;
        float a12;
        float a13;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JAJ1J1J1JAJAJAffcccff",sipClass_Element,&a0,sipClass_String,&a1,&a1State,sipClass_String,&a2,&a2State,sipClass_AtomType,&a3,&a3State,sipClass_Vector3,&a4,sipClass_Vector3,&a5,sipClass_Vector3,&a6,&a7,&a8,&a9,&a10,&a11,&a12,&a13))
        {
            try
            {
            sipCpp = new sipPDBAtom(*a0,*a1,*a2,*a3,*a4,*a5,*a6,a7,a8,a9,a10,a11,a12,a13);
            }
            catch (...)
            {

            sipReleaseInstance(const_cast<String *>(a1),sipClass_String,a1State);
            sipReleaseInstance(const_cast<String *>(a2),sipClass_String,a2State);
            sipReleaseInstance(a3,sipClass_AtomType,a3State);
                sipRaiseUnknownException();
                return NULL;
            }

            sipReleaseInstance(const_cast<String *>(a1),sipClass_String,a1State);
            sipReleaseInstance(const_cast<String *>(a2),sipClass_String,a2State);
            sipReleaseInstance(a3,sipClass_AtomType,a3State);
        }
    }

    if (!sipCpp)
    {
        const PDBAtom * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_PDBAtom,&a0))
        {
            try
            {
            sipCpp = new sipPDBAtom(*a0);
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


extern "C" {static void *forceConvertTo_PDBAtom(PyObject *, int *);}
static void *forceConvertTo_PDBAtom(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_PDBAtom))
        return sipConvertToCpp(valobj,sipClass_PDBAtom,iserrp);

    sipBadClass(sipNm_BALL_PDBAtom);

    *iserrp = 1;

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedClassDef supers_PDBAtom[] = {{236, 255, 1}};


/* Define this type's Python slots. */
static sipPySlotDef slots_PDBAtom[] = {
    {(void *)slot_PDBAtom___str__, str_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_PDBAtom[] = {
    {sipNm_BALL_clear, meth_PDBAtom_clear, METH_VARARGS, NULL},
    {sipNm_BALL_destroy, meth_PDBAtom_destroy, METH_VARARGS, NULL},
    {sipNm_BALL_get, meth_PDBAtom_get, METH_VARARGS, NULL},
    {sipNm_BALL_getAlternateLocationIndicator, meth_PDBAtom_getAlternateLocationIndicator, METH_VARARGS, NULL},
    {sipNm_BALL_getBranchDesignator, meth_PDBAtom_getBranchDesignator, METH_VARARGS, NULL},
    {sipNm_BALL_getChain, meth_PDBAtom_getChain, METH_VARARGS, NULL},
    {sipNm_BALL_getOccupancy, meth_PDBAtom_getOccupancy, METH_VARARGS, NULL},
    {sipNm_BALL_getProtein, meth_PDBAtom_getProtein, METH_VARARGS, NULL},
    {sipNm_BALL_getRemotenessIndicator, meth_PDBAtom_getRemotenessIndicator, METH_VARARGS, NULL},
    {sipNm_BALL_getResidue, meth_PDBAtom_getResidue, METH_VARARGS, NULL},
    {sipNm_BALL_getTemperatureFactor, meth_PDBAtom_getTemperatureFactor, METH_VARARGS, NULL},
    {sipNm_BALL_isValid, meth_PDBAtom_isValid, METH_VARARGS, NULL},
    {sipNm_BALL_set, meth_PDBAtom_set, METH_VARARGS, NULL},
    {sipNm_BALL_setAlternateLocationIndicator, meth_PDBAtom_setAlternateLocationIndicator, METH_VARARGS, NULL},
    {sipNm_BALL_setBranchDesignator, meth_PDBAtom_setBranchDesignator, METH_VARARGS, NULL},
    {sipNm_BALL_setOccupancy, meth_PDBAtom_setOccupancy, METH_VARARGS, NULL},
    {sipNm_BALL_setRemotenessIndicator, meth_PDBAtom_setRemotenessIndicator, METH_VARARGS, NULL},
    {sipNm_BALL_setTemperatureFactor, meth_PDBAtom_setTemperatureFactor, METH_VARARGS, NULL},
    {sipNm_BALL_swap, meth_PDBAtom_swap, METH_VARARGS, NULL}
};


sipTypeDef sipType_BALL_PDBAtom = {
    0,
    0,
    "BALL.PDBAtom",
    0,
    {0, 0, 1},
    supers_PDBAtom,
    slots_PDBAtom,
    19, methods_PDBAtom,
    0, 0,
    0,
    init_PDBAtom,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_PDBAtom,
    cast_PDBAtom,
    release_PDBAtom,
    forceConvertTo_PDBAtom,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
