/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLAtom.h"

#include "sipBALLComposite.h"
#include "sipBALLPropertyManager.h"
#include "sipBALLIndexOverflow.h"
#include "sipBALLTooManyBonds.h"
#include "sipBALLElement.h"
#include "sipBALLString.h"
#include "sipBALLVector3.h"
#include "sipBALLIndex.h"
#include "sipBALLAtom.h"
#include "sipBALLBondProcessor.h"
#include "sipBALLBond.h"
#include "sipBALLPosition.h"
#include "sipBALLAtomType.h"
#include "sipBALLMolecule.h"
#include "sipBALLSecondaryStructure.h"
#include "sipBALLChain.h"
#include "sipBALLResidue.h"
#include "sipBALLFragment.h"
#include "sipBALLPreciseTime.h"
#include "sipBALLObject.h"
#include "sipBALLSelectable.h"
#include "sipBALLNamedProperty.h"
#include "sipBALLPersistentObject.h"


sipAtom::sipAtom() throw(): Atom(), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,5);
}

sipAtom::sipAtom(const Atom& a0,bool a1) throw(): Atom(a0,a1), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,5);
}

sipAtom::sipAtom(Element& a0,const String& a1,const String& a2,int a3,const Vector3& a4,const Vector3& a5,const Vector3& a6,float a7,float a8,Index a9): Atom(a0,a1,a2,a3,a4,a5,a6,a7,a8,a9), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,5);
}

sipAtom::sipAtom(const Atom& a0): Atom(a0), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,5);
}

sipAtom::~sipAtom() throw()
{
    sipCommonDtor(sipPySelf);
}

void sipAtom::clear() throw()
{
    extern void sipVH_BALL_0(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipNm_BALL_clear);

    if (!meth)
    {
        Atom::clear();
        return;
    }

    sipVH_BALL_0(sipGILState,meth);
}

void sipAtom::destroy() throw()
{
    extern void sipVH_BALL_0(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,NULL,sipNm_BALL_destroy);

    if (!meth)
    {
        Atom::destroy();
        return;
    }

    sipVH_BALL_0(sipGILState,meth);
}

bool sipAtom::isValid() const throw()
{
    extern bool sipVH_BALL_4(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<sipMethodCache *>(&sipPyMethods[2]),sipPySelf,NULL,sipNm_BALL_isValid);

    if (!meth)
        return Atom::isValid();

    return sipVH_BALL_4(sipGILState,meth);
}

void sipAtom::select() throw()
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

void sipAtom::deselect() throw()
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


extern "C" {static PyObject *meth_Atom_clear(PyObject *, PyObject *);}
static PyObject *meth_Atom_clear(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        Atom *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Atom,&sipCpp))
        {
            (sipSelfWasArg ? sipCpp->Atom::clear() : sipCpp->clear());

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Atom,sipNm_BALL_clear);

    return NULL;
}


extern "C" {static PyObject *meth_Atom_destroy(PyObject *, PyObject *);}
static PyObject *meth_Atom_destroy(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        Atom *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Atom,&sipCpp))
        {
            (sipSelfWasArg ? sipCpp->Atom::destroy() : sipCpp->destroy());

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Atom,sipNm_BALL_destroy);

    return NULL;
}


extern "C" {static PyObject *meth_Atom_set(PyObject *, PyObject *);}
static PyObject *meth_Atom_set(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const Atom * a0;
        bool a1 = 1;
        Atom *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA|b",&sipSelf,sipClass_Atom,&sipCpp,sipClass_Atom,&a0,&a1))
        {
            sipCpp->set(*a0,a1);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Atom,sipNm_BALL_set);

    return NULL;
}


extern "C" {static PyObject *meth_Atom_get(PyObject *, PyObject *);}
static PyObject *meth_Atom_get(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Atom * a0;
        bool a1 = 1;
        Atom *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA|b",&sipSelf,sipClass_Atom,&sipCpp,sipClass_Atom,&a0,&a1))
        {
            sipCpp->get(*a0,a1);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Atom,sipNm_BALL_get);

    return NULL;
}


extern "C" {static PyObject *meth_Atom_swap(PyObject *, PyObject *);}
static PyObject *meth_Atom_swap(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Atom * a0;
        Atom *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_Atom,&sipCpp,sipClass_Atom,&a0))
        {
            sipCpp->swap(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Atom,sipNm_BALL_swap);

    return NULL;
}


extern "C" {static PyObject *meth_Atom_setElement(PyObject *, PyObject *);}
static PyObject *meth_Atom_setElement(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Element * a0;
        Atom *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_Atom,&sipCpp,sipClass_Element,&a0))
        {
            sipCpp->setElement(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Atom,sipNm_BALL_setElement);

    return NULL;
}


extern "C" {static PyObject *meth_Atom_getElement(PyObject *, PyObject *);}
static PyObject *meth_Atom_getElement(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Atom *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Atom,&sipCpp))
        {
            const Element *sipRes;

            sipRes = &sipCpp->getElement();

            return sipConvertFromInstance(const_cast<Element *>(sipRes),sipClass_Element,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Atom,sipNm_BALL_getElement);

    return NULL;
}


extern "C" {static PyObject *meth_Atom_setCharge(PyObject *, PyObject *);}
static PyObject *meth_Atom_setCharge(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        float a0;
        Atom *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bf",&sipSelf,sipClass_Atom,&sipCpp,&a0))
        {
            sipCpp->setCharge(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Atom,sipNm_BALL_setCharge);

    return NULL;
}


extern "C" {static PyObject *meth_Atom_getCharge(PyObject *, PyObject *);}
static PyObject *meth_Atom_getCharge(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Atom *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Atom,&sipCpp))
        {
            float sipRes;

            sipRes = sipCpp->getCharge();

            return PyFloat_FromDouble((double)sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Atom,sipNm_BALL_getCharge);

    return NULL;
}


extern "C" {static PyObject *meth_Atom_setFormalCharge(PyObject *, PyObject *);}
static PyObject *meth_Atom_setFormalCharge(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Index * a0;
        int a0State = 0;
        Atom *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BM1",&sipSelf,sipClass_Atom,&sipCpp,sipMappedType_Index,&a0,&a0State))
        {
            sipCpp->setFormalCharge(*a0);

            sipReleaseMappedType(a0,sipMappedType_Index,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Atom,sipNm_BALL_setFormalCharge);

    return NULL;
}


extern "C" {static PyObject *meth_Atom_getFormalCharge(PyObject *, PyObject *);}
static PyObject *meth_Atom_getFormalCharge(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Atom *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Atom,&sipCpp))
        {
            Index *sipRes;

            sipRes = new Index(sipCpp->getFormalCharge());

            PyObject *sipResObj = sipConvertFromMappedType(sipRes,sipMappedType_Index,NULL);
            delete sipRes;

            return sipResObj;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Atom,sipNm_BALL_getFormalCharge);

    return NULL;
}


extern "C" {static PyObject *meth_Atom_getFragment(PyObject *, PyObject *);}
static PyObject *meth_Atom_getFragment(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Atom *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Atom,&sipCpp))
        {
            Fragment *sipRes;

            sipRes = sipCpp->getFragment();

            return sipConvertFromInstance(sipRes,sipClass_Fragment,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Atom,sipNm_BALL_getFragment);

    return NULL;
}


extern "C" {static PyObject *meth_Atom_getResidue(PyObject *, PyObject *);}
static PyObject *meth_Atom_getResidue(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Atom *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Atom,&sipCpp))
        {
            Residue *sipRes;

            sipRes = sipCpp->getResidue();

            return sipConvertFromInstance(sipRes,sipClass_Residue,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Atom,sipNm_BALL_getResidue);

    return NULL;
}


extern "C" {static PyObject *meth_Atom_getChain(PyObject *, PyObject *);}
static PyObject *meth_Atom_getChain(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Atom *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Atom,&sipCpp))
        {
            Chain *sipRes;

            sipRes = sipCpp->getChain();

            return sipConvertFromInstance(sipRes,sipClass_Chain,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Atom,sipNm_BALL_getChain);

    return NULL;
}


extern "C" {static PyObject *meth_Atom_getSecondaryStructure(PyObject *, PyObject *);}
static PyObject *meth_Atom_getSecondaryStructure(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Atom *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Atom,&sipCpp))
        {
            SecondaryStructure *sipRes;

            sipRes = sipCpp->getSecondaryStructure();

            return sipConvertFromInstance(sipRes,sipClass_SecondaryStructure,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Atom,sipNm_BALL_getSecondaryStructure);

    return NULL;
}


extern "C" {static PyObject *meth_Atom_getMolecule(PyObject *, PyObject *);}
static PyObject *meth_Atom_getMolecule(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Atom *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Atom,&sipCpp))
        {
            Molecule *sipRes;

            sipRes = sipCpp->getMolecule();

            return sipConvertFromInstance(sipRes,sipClass_Molecule,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Atom,sipNm_BALL_getMolecule);

    return NULL;
}


extern "C" {static PyObject *meth_Atom_setName(PyObject *, PyObject *);}
static PyObject *meth_Atom_setName(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const String * a0;
        int a0State = 0;
        Atom *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ1",&sipSelf,sipClass_Atom,&sipCpp,sipClass_String,&a0,&a0State))
        {
            sipCpp->setName(*a0);

            sipReleaseInstance(const_cast<String *>(a0),sipClass_String,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Atom,sipNm_BALL_setName);

    return NULL;
}


extern "C" {static PyObject *meth_Atom_getName(PyObject *, PyObject *);}
static PyObject *meth_Atom_getName(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Atom *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Atom,&sipCpp))
        {
            const String *sipRes;

            sipRes = &sipCpp->getName();

            return sipConvertFromInstance(const_cast<String *>(sipRes),sipClass_String,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Atom,sipNm_BALL_getName);

    return NULL;
}


extern "C" {static PyObject *meth_Atom_getFullName(PyObject *, PyObject *);}
static PyObject *meth_Atom_getFullName(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Atom::FullNameType a0 = Atom::ADD_VARIANT_EXTENSIONS;
        Atom *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B|E",&sipSelf,sipClass_Atom,&sipCpp,sipEnum_Atom_FullNameType,&a0))
        {
            String *sipRes;

            sipRes = new String(sipCpp->getFullName(a0));

            return sipConvertFromNewInstance(sipRes,sipClass_String,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Atom,sipNm_BALL_getFullName);

    return NULL;
}


extern "C" {static PyObject *meth_Atom_setPosition(PyObject *, PyObject *);}
static PyObject *meth_Atom_setPosition(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const Vector3 * a0;
        Atom *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_Atom,&sipCpp,sipClass_Vector3,&a0))
        {
            sipCpp->setPosition(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Atom,sipNm_BALL_setPosition);

    return NULL;
}


extern "C" {static PyObject *meth_Atom_getPosition(PyObject *, PyObject *);}
static PyObject *meth_Atom_getPosition(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Atom *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Atom,&sipCpp))
        {
            const Vector3 *sipRes;

            sipRes = &sipCpp->getPosition();

            return sipConvertFromInstance(const_cast<Vector3 *>(sipRes),sipClass_Vector3,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Atom,sipNm_BALL_getPosition);

    return NULL;
}


extern "C" {static PyObject *meth_Atom_setRadius(PyObject *, PyObject *);}
static PyObject *meth_Atom_setRadius(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        float a0;
        Atom *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bf",&sipSelf,sipClass_Atom,&sipCpp,&a0))
        {
            sipCpp->setRadius(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Atom,sipNm_BALL_setRadius);

    return NULL;
}


extern "C" {static PyObject *meth_Atom_getRadius(PyObject *, PyObject *);}
static PyObject *meth_Atom_getRadius(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Atom *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Atom,&sipCpp))
        {
            float sipRes;

            sipRes = sipCpp->getRadius();

            return PyFloat_FromDouble((double)sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Atom,sipNm_BALL_getRadius);

    return NULL;
}


extern "C" {static PyObject *meth_Atom_setType(PyObject *, PyObject *);}
static PyObject *meth_Atom_setType(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        AtomType * a0;
        int a0State = 0;
        Atom *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ1",&sipSelf,sipClass_Atom,&sipCpp,sipClass_AtomType,&a0,&a0State))
        {
            try
            {
            sipCpp->setType(*a0);
            }
            catch (...)
            {

            sipReleaseInstance(a0,sipClass_AtomType,a0State);
                sipRaiseUnknownException();
                return NULL;
            }

            sipReleaseInstance(a0,sipClass_AtomType,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Atom,sipNm_BALL_setType);

    return NULL;
}


extern "C" {static PyObject *meth_Atom_getType(PyObject *, PyObject *);}
static PyObject *meth_Atom_getType(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Atom *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Atom,&sipCpp))
        {
            AtomType *sipRes;

            try
            {
            sipRes = new AtomType(sipCpp->getType());
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return sipConvertFromNewInstance(sipRes,sipClass_AtomType,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Atom,sipNm_BALL_getType);

    return NULL;
}


extern "C" {static PyObject *meth_Atom_getTypeName(PyObject *, PyObject *);}
static PyObject *meth_Atom_getTypeName(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Atom *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Atom,&sipCpp))
        {
            String *sipRes;

            sipRes = new String(sipCpp->getTypeName());

            return sipConvertFromNewInstance(sipRes,sipClass_String,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Atom,sipNm_BALL_getTypeName);

    return NULL;
}


extern "C" {static PyObject *meth_Atom_setTypeName(PyObject *, PyObject *);}
static PyObject *meth_Atom_setTypeName(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const String * a0;
        int a0State = 0;
        Atom *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ1",&sipSelf,sipClass_Atom,&sipCpp,sipClass_String,&a0,&a0State))
        {
            sipCpp->setTypeName(*a0);

            sipReleaseInstance(const_cast<String *>(a0),sipClass_String,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Atom,sipNm_BALL_setTypeName);

    return NULL;
}


extern "C" {static PyObject *meth_Atom_setVelocity(PyObject *, PyObject *);}
static PyObject *meth_Atom_setVelocity(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const Vector3 * a0;
        Atom *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_Atom,&sipCpp,sipClass_Vector3,&a0))
        {
            sipCpp->setVelocity(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Atom,sipNm_BALL_setVelocity);

    return NULL;
}


extern "C" {static PyObject *meth_Atom_getVelocity(PyObject *, PyObject *);}
static PyObject *meth_Atom_getVelocity(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Atom *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Atom,&sipCpp))
        {
            const Vector3 *sipRes;

            sipRes = &sipCpp->getVelocity();

            return sipConvertFromInstance(const_cast<Vector3 *>(sipRes),sipClass_Vector3,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Atom,sipNm_BALL_getVelocity);

    return NULL;
}


extern "C" {static PyObject *meth_Atom_setForce(PyObject *, PyObject *);}
static PyObject *meth_Atom_setForce(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const Vector3 * a0;
        Atom *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_Atom,&sipCpp,sipClass_Vector3,&a0))
        {
            sipCpp->setForce(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Atom,sipNm_BALL_setForce);

    return NULL;
}


extern "C" {static PyObject *meth_Atom_getForce(PyObject *, PyObject *);}
static PyObject *meth_Atom_getForce(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Atom *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Atom,&sipCpp))
        {
            const Vector3 *sipRes;

            sipRes = &sipCpp->getForce();

            return sipConvertFromInstance(const_cast<Vector3 *>(sipRes),sipClass_Vector3,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Atom,sipNm_BALL_getForce);

    return NULL;
}


extern "C" {static PyObject *meth_Atom_countBonds(PyObject *, PyObject *);}
static PyObject *meth_Atom_countBonds(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Atom *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Atom,&sipCpp))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Atom,sipNm_BALL_countBonds);

    return NULL;
}


extern "C" {static PyObject *meth_Atom_getBond(PyObject *, PyObject *);}
static PyObject *meth_Atom_getBond(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Position * a0;
        int a0State = 0;
        Atom *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BM1",&sipSelf,sipClass_Atom,&sipCpp,sipMappedType_Position,&a0,&a0State))
        {
            Bond *sipRes;

            try
            {
            sipRes = sipCpp->getBond(*a0);
            }
            catch (IndexOverflow &sipExceptionRef)
            {

            sipReleaseMappedType(a0,sipMappedType_Position,a0State);
                /* Hope that there is a valid copy ctor. */
                IndexOverflow *sipExceptionCopy = new IndexOverflow(sipExceptionRef);

                sipRaiseClassException(sipClass_IndexOverflow,sipExceptionCopy);

                return NULL;
            }

            sipReleaseMappedType(a0,sipMappedType_Position,a0State);

            return sipConvertFromInstance(sipRes,sipClass_Bond,NULL);
        }
    }

    {
        const Atom * a0;
        Atom *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_Atom,&sipCpp,sipClass_Atom,&a0))
        {
            Bond *sipRes;

            sipRes = sipCpp->getBond(*a0);

            return sipConvertFromInstance(sipRes,sipClass_Bond,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Atom,sipNm_BALL_getBond);

    return NULL;
}


extern "C" {static PyObject *meth_Atom_createBond(PyObject *, PyObject *);}
static PyObject *meth_Atom_createBond(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Atom * a0;
        Atom *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_Atom,&sipCpp,sipClass_Atom,&a0))
        {
            Bond *sipRes;

            try
            {
            sipRes = sipCpp->createBond(*a0);
            }
            catch (TooManyBonds &sipExceptionRef)
            {
                /* Hope that there is a valid copy ctor. */
                TooManyBonds *sipExceptionCopy = new TooManyBonds(sipExceptionRef);

                sipRaiseClassException(sipClass_TooManyBonds,sipExceptionCopy);

                return NULL;
            }

            return sipConvertFromInstance(sipRes,sipClass_Bond,NULL);
        }
    }

    {
        Bond * a0;
        Atom * a1;
        Atom *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJAJA",&sipSelf,sipClass_Atom,&sipCpp,sipClass_Bond,&a0,sipClass_Atom,&a1))
        {
            Bond *sipRes;

            try
            {
            sipRes = sipCpp->createBond(*a0,*a1);
            }
            catch (TooManyBonds &sipExceptionRef)
            {
                /* Hope that there is a valid copy ctor. */
                TooManyBonds *sipExceptionCopy = new TooManyBonds(sipExceptionRef);

                sipRaiseClassException(sipClass_TooManyBonds,sipExceptionCopy);

                return NULL;
            }

            return sipConvertFromInstance(sipRes,sipClass_Bond,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Atom,sipNm_BALL_createBond);

    return NULL;
}


extern "C" {static PyObject *meth_Atom_cloneBond(PyObject *, PyObject *);}
static PyObject *meth_Atom_cloneBond(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Bond * a0;
        Atom * a1;
        Atom *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJAJA",&sipSelf,sipClass_Atom,&sipCpp,sipClass_Bond,&a0,sipClass_Atom,&a1))
        {
            Bond *sipRes;

            sipRes = sipCpp->cloneBond(*a0,*a1);

            return sipConvertFromInstance(sipRes,sipClass_Bond,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Atom,sipNm_BALL_cloneBond);

    return NULL;
}


extern "C" {static PyObject *meth_Atom_destroyBond(PyObject *, PyObject *);}
static PyObject *meth_Atom_destroyBond(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const Atom * a0;
        Atom *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_Atom,&sipCpp,sipClass_Atom,&a0))
        {
            bool sipRes;

            sipRes = sipCpp->destroyBond(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Atom,sipNm_BALL_destroyBond);

    return NULL;
}


extern "C" {static PyObject *meth_Atom_destroyBonds(PyObject *, PyObject *);}
static PyObject *meth_Atom_destroyBonds(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Atom *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Atom,&sipCpp))
        {
            sipCpp->destroyBonds();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Atom,sipNm_BALL_destroyBonds);

    return NULL;
}


extern "C" {static PyObject *meth_Atom_hasBond(PyObject *, PyObject *);}
static PyObject *meth_Atom_hasBond(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const Bond * a0;
        Atom *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_Atom,&sipCpp,sipClass_Bond,&a0))
        {
            bool sipRes;

            sipRes = sipCpp->hasBond(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Atom,sipNm_BALL_hasBond);

    return NULL;
}


extern "C" {static PyObject *meth_Atom_isBoundTo(PyObject *, PyObject *);}
static PyObject *meth_Atom_isBoundTo(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const Atom * a0;
        Atom *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_Atom,&sipCpp,sipClass_Atom,&a0))
        {
            bool sipRes;

            sipRes = sipCpp->isBoundTo(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Atom,sipNm_BALL_isBoundTo);

    return NULL;
}


extern "C" {static PyObject *meth_Atom_isBound(PyObject *, PyObject *);}
static PyObject *meth_Atom_isBound(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Atom *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Atom,&sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isBound();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Atom,sipNm_BALL_isBound);

    return NULL;
}


extern "C" {static PyObject *meth_Atom_isGeminal(PyObject *, PyObject *);}
static PyObject *meth_Atom_isGeminal(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const Atom * a0;
        Atom *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_Atom,&sipCpp,sipClass_Atom,&a0))
        {
            bool sipRes;

            sipRes = sipCpp->isGeminal(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Atom,sipNm_BALL_isGeminal);

    return NULL;
}


extern "C" {static PyObject *meth_Atom_isVicinal(PyObject *, PyObject *);}
static PyObject *meth_Atom_isVicinal(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const Atom * a0;
        Atom *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_Atom,&sipCpp,sipClass_Atom,&a0))
        {
            bool sipRes;

            sipRes = sipCpp->isVicinal(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Atom,sipNm_BALL_isVicinal);

    return NULL;
}


extern "C" {static PyObject *meth_Atom_isValid(PyObject *, PyObject *);}
static PyObject *meth_Atom_isValid(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        Atom *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Atom,&sipCpp))
        {
            bool sipRes;

            sipRes = (sipSelfWasArg ? sipCpp->Atom::isValid() : sipCpp->isValid());

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Atom,sipNm_BALL_isValid);

    return NULL;
}


extern "C" {static PyObject *meth_Atom_applyBonds(PyObject *, PyObject *);}
static PyObject *meth_Atom_applyBonds(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        BondProcessor * a0;
        Atom *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_Atom,&sipCpp,sipClass_BondProcessor,&a0))
        {
            bool sipRes;

            sipRes = sipCpp->applyBonds(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Atom,sipNm_BALL_applyBonds);

    return NULL;
}


extern "C" {static PyObject *slot_Atom___repr__(PyObject *sipSelf);}
static PyObject *slot_Atom___repr__(PyObject *sipSelf)
{
    Atom *sipCpp = reinterpret_cast<Atom *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_Atom));

    if (!sipCpp)
        return 0;


    {
        {
            PyObject * sipRes = 0;

#line 183 "atom.sip"
	sipRes = PyString_FromString(String(String("Atom ") + sipCpp->getName() 
						+ " { " + sipCpp->getElement().getSymbol() + " @ (" 
						+ String(sipCpp->getPosition().x) + " " + String(sipCpp->getPosition().y) + " " 
						+ String(sipCpp->getPosition().z) + " }").c_str());
#line 1394 "sipBALLAtom.C"

            return sipRes;
        }
    }
}


extern "C" {static PyObject *slot_Atom___str__(PyObject *sipSelf);}
static PyObject *slot_Atom___str__(PyObject *sipSelf)
{
    Atom *sipCpp = reinterpret_cast<Atom *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_Atom));

    if (!sipCpp)
        return 0;


    {
        {
            PyObject * sipRes = 0;

#line 175 "atom.sip"
	sipRes = PyString_FromString(String(String("Atom ") + sipCpp->getName() 
						+ " { " + sipCpp->getElement().getSymbol() + " @ (" 
						+ String(sipCpp->getPosition().x) + " " + String(sipCpp->getPosition().y) + " " 
						+ String(sipCpp->getPosition().z) + ") }").c_str());
#line 1420 "sipBALLAtom.C"

            return sipRes;
        }
    }
}


extern "C" {static PyObject *slot_Atom___ne__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_Atom___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    Atom *sipCpp = reinterpret_cast<Atom *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_Atom));

    if (!sipCpp)
        return 0;

    int sipArgsParsed = 0;

    {
        const Atom * a0;

        if (sipParseArgs(&sipArgsParsed,sipArg,"JA",sipClass_Atom,&a0))
        {
            bool sipRes;

            sipRes = ((*sipCpp) != *a0);

            return PyBool_FromLong(sipRes);
        }
    }

    return sipPySlotExtend(&sipModuleAPI_BALL,ne_slot,sipClass_Atom,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_Atom___eq__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_Atom___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    Atom *sipCpp = reinterpret_cast<Atom *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_Atom));

    if (!sipCpp)
        return 0;

    int sipArgsParsed = 0;

    {
        const Atom * a0;

        if (sipParseArgs(&sipArgsParsed,sipArg,"JA",sipClass_Atom,&a0))
        {
            bool sipRes;

            sipRes = ((*sipCpp) == *a0);

            return PyBool_FromLong(sipRes);
        }
    }

    return sipPySlotExtend(&sipModuleAPI_BALL,eq_slot,sipClass_Atom,sipSelf,sipArg);
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_Atom(void *, sipWrapperType *);}
static void *cast_Atom(void *ptr,sipWrapperType *targetClass)
{
    void *res;

    if (targetClass == sipClass_Atom)
        return ptr;

    if ((res = sipCast_Composite((Composite *)(Atom *)ptr,targetClass)) != NULL)
        return res;

    if ((res = sipCast_PropertyManager((PropertyManager *)(Atom *)ptr,targetClass)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_Atom(void *, int);}
static void release_Atom(void *ptr,int state)
{
    if (state & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipAtom *>(ptr);
    else
        delete reinterpret_cast<Atom *>(ptr);
}


extern "C" {static void dealloc_Atom(sipWrapper *);}
static void dealloc_Atom(sipWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipAtom *>(sipSelf->u.cppPtr)->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_Atom(sipSelf->u.cppPtr,sipSelf->flags);
    }
}


extern "C" {static void *init_Atom(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_Atom(sipWrapper *sipSelf,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    sipAtom *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            sipCpp = new sipAtom();
        }
    }

    if (!sipCpp)
    {
        const Atom * a0;
        bool a1 = 1;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA|b",sipClass_Atom,&a0,&a1))
        {
            sipCpp = new sipAtom(*a0,a1);
        }
    }

    if (!sipCpp)
    {
        Element * a0;
        const String * a1;
        int a1State = 0;
        const String& a2def = "UNK";
        const String * a2 = &a2def;
        int a2State = 0;
        int a3 = Atom::UNKNOWN_TYPE;
        const Vector3& a4def = Vector3(0,0,0);
        const Vector3 * a4 = &a4def;
        const Vector3& a5def = Vector3(0,0,0);
        const Vector3 * a5 = &a5def;
        const Vector3& a6def = Vector3(0,0,0);
        const Vector3 * a6 = &a6def;
        float a7 = 0;
        float a8 = 0;
        Index a9def = 0;
        Index * a9 = &a9def;
        int a9State = 0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JAJ1|J1iJAJAJAffM1",sipClass_Element,&a0,sipClass_String,&a1,&a1State,sipClass_String,&a2,&a2State,&a3,sipClass_Vector3,&a4,sipClass_Vector3,&a5,sipClass_Vector3,&a6,&a7,&a8,sipMappedType_Index,&a9,&a9State))
        {
            try
            {
            sipCpp = new sipAtom(*a0,*a1,*a2,a3,*a4,*a5,*a6,a7,a8,*a9);
            }
            catch (...)
            {

            sipReleaseInstance(const_cast<String *>(a1),sipClass_String,a1State);
            sipReleaseInstance(const_cast<String *>(a2),sipClass_String,a2State);
            sipReleaseMappedType(a9,sipMappedType_Index,a9State);
                sipRaiseUnknownException();
                return NULL;
            }

            sipReleaseInstance(const_cast<String *>(a1),sipClass_String,a1State);
            sipReleaseInstance(const_cast<String *>(a2),sipClass_String,a2State);
            sipReleaseMappedType(a9,sipMappedType_Index,a9State);
        }
    }

    if (!sipCpp)
    {
        const Atom * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_Atom,&a0))
        {
            try
            {
            sipCpp = new sipAtom(*a0);
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


extern "C" {static void *forceConvertTo_Atom(PyObject *, int *);}
static void *forceConvertTo_Atom(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_Atom))
        return sipConvertToCpp(valobj,sipClass_Atom,iserrp);

    sipBadClass(sipNm_BALL_Atom);

    *iserrp = 1;

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedClassDef supers_Atom[] = {{224, 255, 0}, {191, 255, 1}};


/* Define this type's Python slots. */
static sipPySlotDef slots_Atom[] = {
    {(void *)slot_Atom___repr__, repr_slot},
    {(void *)slot_Atom___str__, str_slot},
    {(void *)slot_Atom___ne__, ne_slot},
    {(void *)slot_Atom___eq__, eq_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_Atom[] = {
    {sipNm_BALL_applyBonds, meth_Atom_applyBonds, METH_VARARGS, NULL},
    {sipNm_BALL_clear, meth_Atom_clear, METH_VARARGS, NULL},
    {sipNm_BALL_cloneBond, meth_Atom_cloneBond, METH_VARARGS, NULL},
    {sipNm_BALL_countBonds, meth_Atom_countBonds, METH_VARARGS, NULL},
    {sipNm_BALL_createBond, meth_Atom_createBond, METH_VARARGS, NULL},
    {sipNm_BALL_destroy, meth_Atom_destroy, METH_VARARGS, NULL},
    {sipNm_BALL_destroyBond, meth_Atom_destroyBond, METH_VARARGS, NULL},
    {sipNm_BALL_destroyBonds, meth_Atom_destroyBonds, METH_VARARGS, NULL},
    {sipNm_BALL_get, meth_Atom_get, METH_VARARGS, NULL},
    {sipNm_BALL_getBond, meth_Atom_getBond, METH_VARARGS, NULL},
    {sipNm_BALL_getChain, meth_Atom_getChain, METH_VARARGS, NULL},
    {sipNm_BALL_getCharge, meth_Atom_getCharge, METH_VARARGS, NULL},
    {sipNm_BALL_getElement, meth_Atom_getElement, METH_VARARGS, NULL},
    {sipNm_BALL_getForce, meth_Atom_getForce, METH_VARARGS, NULL},
    {sipNm_BALL_getFormalCharge, meth_Atom_getFormalCharge, METH_VARARGS, NULL},
    {sipNm_BALL_getFragment, meth_Atom_getFragment, METH_VARARGS, NULL},
    {sipNm_BALL_getFullName, meth_Atom_getFullName, METH_VARARGS, NULL},
    {sipNm_BALL_getMolecule, meth_Atom_getMolecule, METH_VARARGS, NULL},
    {sipNm_BALL_getName, meth_Atom_getName, METH_VARARGS, NULL},
    {sipNm_BALL_getPosition, meth_Atom_getPosition, METH_VARARGS, NULL},
    {sipNm_BALL_getRadius, meth_Atom_getRadius, METH_VARARGS, NULL},
    {sipNm_BALL_getResidue, meth_Atom_getResidue, METH_VARARGS, NULL},
    {sipNm_BALL_getSecondaryStructure, meth_Atom_getSecondaryStructure, METH_VARARGS, NULL},
    {sipNm_BALL_getType, meth_Atom_getType, METH_VARARGS, NULL},
    {sipNm_BALL_getTypeName, meth_Atom_getTypeName, METH_VARARGS, NULL},
    {sipNm_BALL_getVelocity, meth_Atom_getVelocity, METH_VARARGS, NULL},
    {sipNm_BALL_hasBond, meth_Atom_hasBond, METH_VARARGS, NULL},
    {sipNm_BALL_isBound, meth_Atom_isBound, METH_VARARGS, NULL},
    {sipNm_BALL_isBoundTo, meth_Atom_isBoundTo, METH_VARARGS, NULL},
    {sipNm_BALL_isGeminal, meth_Atom_isGeminal, METH_VARARGS, NULL},
    {sipNm_BALL_isValid, meth_Atom_isValid, METH_VARARGS, NULL},
    {sipNm_BALL_isVicinal, meth_Atom_isVicinal, METH_VARARGS, NULL},
    {sipNm_BALL_set, meth_Atom_set, METH_VARARGS, NULL},
    {sipNm_BALL_setCharge, meth_Atom_setCharge, METH_VARARGS, NULL},
    {sipNm_BALL_setElement, meth_Atom_setElement, METH_VARARGS, NULL},
    {sipNm_BALL_setForce, meth_Atom_setForce, METH_VARARGS, NULL},
    {sipNm_BALL_setFormalCharge, meth_Atom_setFormalCharge, METH_VARARGS, NULL},
    {sipNm_BALL_setName, meth_Atom_setName, METH_VARARGS, NULL},
    {sipNm_BALL_setPosition, meth_Atom_setPosition, METH_VARARGS, NULL},
    {sipNm_BALL_setRadius, meth_Atom_setRadius, METH_VARARGS, NULL},
    {sipNm_BALL_setType, meth_Atom_setType, METH_VARARGS, NULL},
    {sipNm_BALL_setTypeName, meth_Atom_setTypeName, METH_VARARGS, NULL},
    {sipNm_BALL_setVelocity, meth_Atom_setVelocity, METH_VARARGS, NULL},
    {sipNm_BALL_swap, meth_Atom_swap, METH_VARARGS, NULL}
};

static sipEnumMemberDef enummembers_Atom[] = {
    {sipNm_BALL_ADD_RESIDUE_ID, Atom::ADD_RESIDUE_ID, 30},
    {sipNm_BALL_ADD_VARIANT_EXTENSIONS, Atom::ADD_VARIANT_EXTENSIONS, 30},
    {sipNm_BALL_ADD_VARIANT_EXTENSIONS_AND_ID, Atom::ADD_VARIANT_EXTENSIONS_AND_ID, 30},
    {sipNm_BALL_ANY_TYPE, Atom::ANY_TYPE, -1},
    {sipNm_BALL_MAX_NUMBER_OF_BONDS, Atom::MAX_NUMBER_OF_BONDS, -1},
    {sipNm_BALL_NO_VARIANT_EXTENSIONS, Atom::NO_VARIANT_EXTENSIONS, 30},
    {sipNm_BALL_NUMBER_OF_PROPERTIES, Atom::NUMBER_OF_PROPERTIES, 31},
    {sipNm_BALL_UNKNOWN_TYPE, Atom::UNKNOWN_TYPE, -1},
};


sipTypeDef sipType_BALL_Atom = {
    0,
    0,
    "BALL.Atom",
    0,
    {0, 0, 1},
    supers_Atom,
    slots_Atom,
    44, methods_Atom,
    8, enummembers_Atom,
    0,
    init_Atom,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_Atom,
    cast_Atom,
    release_Atom,
    forceConvertTo_Atom,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
