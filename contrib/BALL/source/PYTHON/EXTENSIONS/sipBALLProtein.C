/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLProtein.h"

#include "sipBALLMolecule.h"
#include "sipBALLString.h"
#include "sipBALLProtein.h"
#include "sipBALLPDBAtom.h"
#include "sipBALLResidue.h"
#include "sipBALLSecondaryStructure.h"
#include "sipBALLChain.h"
#include "sipBALLAtomContainer.h"
#include "sipBALLAtom.h"
#include "sipBALLComposite.h"
#include "sipBALLSystem.h"
#include "sipBALLAtomProcessor.h"
#include "sipBALLCompositeProcessor.h"
#include "sipBALLFragmentProcessor.h"
#include "sipBALLResidueProcessor.h"
#include "sipBALLPosition.h"
#include "sipBALLPreciseTime.h"
#include "sipBALLIndex.h"
#include "sipBALLObject.h"
#include "sipBALLSelectable.h"
#include "sipBALLPropertyManager.h"
#include "sipBALLNamedProperty.h"
#include "sipBALLPersistentObject.h"


sipProtein::sipProtein(): Protein(), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,5);
}

sipProtein::sipProtein(const Protein& a0,bool a1): Protein(a0,a1), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,5);
}

sipProtein::sipProtein(const String& a0,const String& a1): Protein(a0,a1), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,5);
}

sipProtein::sipProtein(const Protein& a0): Protein(a0), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,5);
}

sipProtein::~sipProtein() throw()
{
    sipCommonDtor(sipPySelf);
}

void sipProtein::clear() throw()
{
    extern void sipVH_BALL_0(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipNm_BALL_clear);

    if (!meth)
    {
        Protein::clear();
        return;
    }

    sipVH_BALL_0(sipGILState,meth);
}

void sipProtein::destroy() throw()
{
    extern void sipVH_BALL_0(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,NULL,sipNm_BALL_destroy);

    if (!meth)
    {
        Protein::destroy();
        return;
    }

    sipVH_BALL_0(sipGILState,meth);
}

bool sipProtein::isValid() const throw()
{
    extern bool sipVH_BALL_4(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<sipMethodCache *>(&sipPyMethods[2]),sipPySelf,NULL,sipNm_BALL_isValid);

    if (!meth)
        return Protein::isValid();

    return sipVH_BALL_4(sipGILState,meth);
}

void sipProtein::select() throw()
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

void sipProtein::deselect() throw()
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


extern "C" {static PyObject *meth_Protein_clear(PyObject *, PyObject *);}
static PyObject *meth_Protein_clear(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        Protein *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Protein,&sipCpp))
        {
            (sipSelfWasArg ? sipCpp->Protein::clear() : sipCpp->clear());

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Protein,sipNm_BALL_clear);

    return NULL;
}


extern "C" {static PyObject *meth_Protein_destroy(PyObject *, PyObject *);}
static PyObject *meth_Protein_destroy(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        Protein *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Protein,&sipCpp))
        {
            (sipSelfWasArg ? sipCpp->Protein::destroy() : sipCpp->destroy());

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Protein,sipNm_BALL_destroy);

    return NULL;
}


extern "C" {static PyObject *meth_Protein_set(PyObject *, PyObject *);}
static PyObject *meth_Protein_set(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const Protein * a0;
        bool a1 = 1;
        Protein *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA|b",&sipSelf,sipClass_Protein,&sipCpp,sipClass_Protein,&a0,&a1))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Protein,sipNm_BALL_set);

    return NULL;
}


extern "C" {static PyObject *meth_Protein_get(PyObject *, PyObject *);}
static PyObject *meth_Protein_get(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Protein * a0;
        bool a1 = 1;
        Protein *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA|b",&sipSelf,sipClass_Protein,&sipCpp,sipClass_Protein,&a0,&a1))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Protein,sipNm_BALL_get);

    return NULL;
}


extern "C" {static PyObject *meth_Protein_swap(PyObject *, PyObject *);}
static PyObject *meth_Protein_swap(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Protein * a0;
        Protein *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_Protein,&sipCpp,sipClass_Protein,&a0))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Protein,sipNm_BALL_swap);

    return NULL;
}


extern "C" {static PyObject *meth_Protein_getChain(PyObject *, PyObject *);}
static PyObject *meth_Protein_getChain(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        int a0;
        Protein *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bi",&sipSelf,sipClass_Protein,&sipCpp,&a0))
        {
            Chain *sipRes;

            try
            {
            sipRes = sipCpp->getChain(a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Protein,sipNm_BALL_getChain);

    return NULL;
}


extern "C" {static PyObject *meth_Protein_getSecondaryStructure(PyObject *, PyObject *);}
static PyObject *meth_Protein_getSecondaryStructure(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        int a0;
        Protein *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bi",&sipSelf,sipClass_Protein,&sipCpp,&a0))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Protein,sipNm_BALL_getSecondaryStructure);

    return NULL;
}


extern "C" {static PyObject *meth_Protein_getResidue(PyObject *, PyObject *);}
static PyObject *meth_Protein_getResidue(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        int a0;
        Protein *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bi",&sipSelf,sipClass_Protein,&sipCpp,&a0))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Protein,sipNm_BALL_getResidue);

    return NULL;
}


extern "C" {static PyObject *meth_Protein_getNTerminal(PyObject *, PyObject *);}
static PyObject *meth_Protein_getNTerminal(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Protein *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Protein,&sipCpp))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Protein,sipNm_BALL_getNTerminal);

    return NULL;
}


extern "C" {static PyObject *meth_Protein_getCTerminal(PyObject *, PyObject *);}
static PyObject *meth_Protein_getCTerminal(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Protein *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Protein,&sipCpp))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Protein,sipNm_BALL_getCTerminal);

    return NULL;
}


extern "C" {static PyObject *meth_Protein_getPDBAtom(PyObject *, PyObject *);}
static PyObject *meth_Protein_getPDBAtom(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        int a0;
        Protein *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bi",&sipSelf,sipClass_Protein,&sipCpp,&a0))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Protein,sipNm_BALL_getPDBAtom);

    return NULL;
}


extern "C" {static PyObject *meth_Protein_setID(PyObject *, PyObject *);}
static PyObject *meth_Protein_setID(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const String * a0;
        int a0State = 0;
        Protein *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ1",&sipSelf,sipClass_Protein,&sipCpp,sipClass_String,&a0,&a0State))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Protein,sipNm_BALL_setID);

    return NULL;
}


extern "C" {static PyObject *meth_Protein_getID(PyObject *, PyObject *);}
static PyObject *meth_Protein_getID(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Protein *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Protein,&sipCpp))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Protein,sipNm_BALL_getID);

    return NULL;
}


extern "C" {static PyObject *meth_Protein_countChains(PyObject *, PyObject *);}
static PyObject *meth_Protein_countChains(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Protein *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Protein,&sipCpp))
        {
            int sipRes;

            try
            {
            sipRes = sipCpp->countChains();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Protein,sipNm_BALL_countChains);

    return NULL;
}


extern "C" {static PyObject *meth_Protein_countSecondaryStructures(PyObject *, PyObject *);}
static PyObject *meth_Protein_countSecondaryStructures(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Protein *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Protein,&sipCpp))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Protein,sipNm_BALL_countSecondaryStructures);

    return NULL;
}


extern "C" {static PyObject *meth_Protein_countResidues(PyObject *, PyObject *);}
static PyObject *meth_Protein_countResidues(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Protein *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Protein,&sipCpp))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Protein,sipNm_BALL_countResidues);

    return NULL;
}


extern "C" {static PyObject *meth_Protein_countPDBAtoms(PyObject *, PyObject *);}
static PyObject *meth_Protein_countPDBAtoms(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Protein *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Protein,&sipCpp))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Protein,sipNm_BALL_countPDBAtoms);

    return NULL;
}


extern "C" {static PyObject *meth_Protein_isValid(PyObject *, PyObject *);}
static PyObject *meth_Protein_isValid(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        Protein *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Protein,&sipCpp))
        {
            bool sipRes;

            sipRes = (sipSelfWasArg ? sipCpp->Protein::isValid() : sipCpp->isValid());

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Protein,sipNm_BALL_isValid);

    return NULL;
}


extern "C" {static PyObject *slot_Protein___str__(PyObject *sipSelf);}
static PyObject *slot_Protein___str__(PyObject *sipSelf)
{
    Protein *sipCpp = reinterpret_cast<Protein *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_Protein));

    if (!sipCpp)
        return 0;


    {
        {
            PyObject * sipRes = 0;

#line 60 "protein.sip"
	sipRes = PyString_FromString(String(String("Protein ") + sipCpp->getName() 
						+ " { " + String(sipCpp->countResidues()) + " residues }").c_str());
#line 750 "sipBALLProtein.C"

            return sipRes;
        }
    }
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_Protein(void *, sipWrapperType *);}
static void *cast_Protein(void *ptr,sipWrapperType *targetClass)
{
    void *res;

    if (targetClass == sipClass_Protein)
        return ptr;

    if ((res = sipCast_Molecule((Molecule *)(Protein *)ptr,targetClass)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_Protein(void *, int);}
static void release_Protein(void *ptr,int state)
{
    if (state & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipProtein *>(ptr);
    else
        delete reinterpret_cast<Protein *>(ptr);
}


extern "C" {static void dealloc_Protein(sipWrapper *);}
static void dealloc_Protein(sipWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipProtein *>(sipSelf->u.cppPtr)->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_Protein(sipSelf->u.cppPtr,sipSelf->flags);
    }
}


extern "C" {static void *init_Protein(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_Protein(sipWrapper *sipSelf,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    sipProtein *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            try
            {
            sipCpp = new sipProtein();
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
        const Protein * a0;
        bool a1 = 1;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA|b",sipClass_Protein,&a0,&a1))
        {
            try
            {
            sipCpp = new sipProtein(*a0,a1);
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

        if (sipParseArgs(sipArgsParsed,sipArgs,"J1|J1",sipClass_String,&a0,&a0State,sipClass_String,&a1,&a1State))
        {
            try
            {
            sipCpp = new sipProtein(*a0,*a1);
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
        const Protein * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_Protein,&a0))
        {
            try
            {
            sipCpp = new sipProtein(*a0);
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


extern "C" {static void *forceConvertTo_Protein(PyObject *, int *);}
static void *forceConvertTo_Protein(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_Protein))
        return sipConvertToCpp(valobj,sipClass_Protein,iserrp);

    sipBadClass(sipNm_BALL_Protein);

    *iserrp = 1;

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedClassDef supers_Protein[] = {{229, 255, 1}};


/* Define this type's Python slots. */
static sipPySlotDef slots_Protein[] = {
    {(void *)slot_Protein___str__, str_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_Protein[] = {
    {sipNm_BALL_clear, meth_Protein_clear, METH_VARARGS, NULL},
    {sipNm_BALL_countChains, meth_Protein_countChains, METH_VARARGS, NULL},
    {sipNm_BALL_countPDBAtoms, meth_Protein_countPDBAtoms, METH_VARARGS, NULL},
    {sipNm_BALL_countResidues, meth_Protein_countResidues, METH_VARARGS, NULL},
    {sipNm_BALL_countSecondaryStructures, meth_Protein_countSecondaryStructures, METH_VARARGS, NULL},
    {sipNm_BALL_destroy, meth_Protein_destroy, METH_VARARGS, NULL},
    {sipNm_BALL_get, meth_Protein_get, METH_VARARGS, NULL},
    {sipNm_BALL_getCTerminal, meth_Protein_getCTerminal, METH_VARARGS, NULL},
    {sipNm_BALL_getChain, meth_Protein_getChain, METH_VARARGS, NULL},
    {sipNm_BALL_getID, meth_Protein_getID, METH_VARARGS, NULL},
    {sipNm_BALL_getNTerminal, meth_Protein_getNTerminal, METH_VARARGS, NULL},
    {sipNm_BALL_getPDBAtom, meth_Protein_getPDBAtom, METH_VARARGS, NULL},
    {sipNm_BALL_getResidue, meth_Protein_getResidue, METH_VARARGS, NULL},
    {sipNm_BALL_getSecondaryStructure, meth_Protein_getSecondaryStructure, METH_VARARGS, NULL},
    {sipNm_BALL_isValid, meth_Protein_isValid, METH_VARARGS, NULL},
    {sipNm_BALL_set, meth_Protein_set, METH_VARARGS, NULL},
    {sipNm_BALL_setID, meth_Protein_setID, METH_VARARGS, NULL},
    {sipNm_BALL_swap, meth_Protein_swap, METH_VARARGS, NULL}
};


sipTypeDef sipType_BALL_Protein = {
    0,
    0,
    "BALL.Protein",
    0,
    {0, 0, 1},
    supers_Protein,
    slots_Protein,
    18, methods_Protein,
    0, 0,
    0,
    init_Protein,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_Protein,
    cast_Protein,
    release_Protein,
    forceConvertTo_Protein,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
