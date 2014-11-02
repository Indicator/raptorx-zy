/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLMolecule.h"

#include "sipBALLAtomContainer.h"
#include "sipBALLString.h"
#include "sipBALLMolecule.h"
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


sipMolecule::sipMolecule(): Molecule(), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,5);
}

sipMolecule::sipMolecule(const Molecule& a0,bool a1): Molecule(a0,a1), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,5);
}

sipMolecule::sipMolecule(const String& a0): Molecule(a0), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,5);
}

sipMolecule::sipMolecule(const Molecule& a0): Molecule(a0), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,5);
}

sipMolecule::~sipMolecule() throw()
{
    sipCommonDtor(sipPySelf);
}

void sipMolecule::clear() throw()
{
    extern void sipVH_BALL_0(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipNm_BALL_clear);

    if (!meth)
    {
        Molecule::clear();
        return;
    }

    sipVH_BALL_0(sipGILState,meth);
}

void sipMolecule::destroy() throw()
{
    extern void sipVH_BALL_0(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,NULL,sipNm_BALL_destroy);

    if (!meth)
    {
        Molecule::destroy();
        return;
    }

    sipVH_BALL_0(sipGILState,meth);
}

bool sipMolecule::isValid() const throw()
{
    extern bool sipVH_BALL_4(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<sipMethodCache *>(&sipPyMethods[2]),sipPySelf,NULL,sipNm_BALL_isValid);

    if (!meth)
        return Molecule::isValid();

    return sipVH_BALL_4(sipGILState,meth);
}

void sipMolecule::select() throw()
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

void sipMolecule::deselect() throw()
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


extern "C" {static PyObject *meth_Molecule_clear(PyObject *, PyObject *);}
static PyObject *meth_Molecule_clear(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        Molecule *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Molecule,&sipCpp))
        {
            (sipSelfWasArg ? sipCpp->Molecule::clear() : sipCpp->clear());

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Molecule,sipNm_BALL_clear);

    return NULL;
}


extern "C" {static PyObject *meth_Molecule_destroy(PyObject *, PyObject *);}
static PyObject *meth_Molecule_destroy(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        Molecule *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Molecule,&sipCpp))
        {
            (sipSelfWasArg ? sipCpp->Molecule::destroy() : sipCpp->destroy());

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Molecule,sipNm_BALL_destroy);

    return NULL;
}


extern "C" {static PyObject *meth_Molecule_set(PyObject *, PyObject *);}
static PyObject *meth_Molecule_set(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const Molecule * a0;
        bool a1 = 1;
        Molecule *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA|b",&sipSelf,sipClass_Molecule,&sipCpp,sipClass_Molecule,&a0,&a1))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Molecule,sipNm_BALL_set);

    return NULL;
}


extern "C" {static PyObject *meth_Molecule_get(PyObject *, PyObject *);}
static PyObject *meth_Molecule_get(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Molecule * a0;
        bool a1 = 1;
        Molecule *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA|b",&sipSelf,sipClass_Molecule,&sipCpp,sipClass_Molecule,&a0,&a1))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Molecule,sipNm_BALL_get);

    return NULL;
}


extern "C" {static PyObject *meth_Molecule_swap(PyObject *, PyObject *);}
static PyObject *meth_Molecule_swap(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Molecule * a0;
        Molecule *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_Molecule,&sipCpp,sipClass_Molecule,&a0))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Molecule,sipNm_BALL_swap);

    return NULL;
}


extern "C" {static PyObject *meth_Molecule_getSystem(PyObject *, PyObject *);}
static PyObject *meth_Molecule_getSystem(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Molecule *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Molecule,&sipCpp))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Molecule,sipNm_BALL_getSystem);

    return NULL;
}


extern "C" {static PyObject *meth_Molecule_prepend(PyObject *, PyObject *);}
static PyObject *meth_Molecule_prepend(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Atom * a0;
        Molecule *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJC",&sipSelf,sipClass_Molecule,&sipCpp,sipClass_Atom,&a0))
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
        Molecule *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJC",&sipSelf,sipClass_Molecule,&sipCpp,sipClass_AtomContainer,&a0))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Molecule,sipNm_BALL_prepend);

    return NULL;
}


extern "C" {static PyObject *meth_Molecule_append(PyObject *, PyObject *);}
static PyObject *meth_Molecule_append(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Atom * a0;
        Molecule *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJC",&sipSelf,sipClass_Molecule,&sipCpp,sipClass_Atom,&a0))
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
        Molecule *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJC",&sipSelf,sipClass_Molecule,&sipCpp,sipClass_AtomContainer,&a0))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Molecule,sipNm_BALL_append);

    return NULL;
}


extern "C" {static PyObject *meth_Molecule_insert(PyObject *, PyObject *);}
static PyObject *meth_Molecule_insert(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Atom * a0;
        Molecule *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJC",&sipSelf,sipClass_Molecule,&sipCpp,sipClass_Atom,&a0))
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
        Molecule *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJC",&sipSelf,sipClass_Molecule,&sipCpp,sipClass_AtomContainer,&a0))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Molecule,sipNm_BALL_insert);

    return NULL;
}


extern "C" {static PyObject *meth_Molecule_insertBefore(PyObject *, PyObject *);}
static PyObject *meth_Molecule_insertBefore(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Atom * a0;
        Composite * a1;
        Molecule *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJCJA",&sipSelf,sipClass_Molecule,&sipCpp,sipClass_Atom,&a0,sipClass_Composite,&a1))
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
        Molecule *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJCJA",&sipSelf,sipClass_Molecule,&sipCpp,sipClass_AtomContainer,&a0,sipClass_Composite,&a1))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Molecule,sipNm_BALL_insertBefore);

    return NULL;
}


extern "C" {static PyObject *meth_Molecule_insertAfter(PyObject *, PyObject *);}
static PyObject *meth_Molecule_insertAfter(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Atom * a0;
        Composite * a1;
        Molecule *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJCJA",&sipSelf,sipClass_Molecule,&sipCpp,sipClass_Atom,&a0,sipClass_Composite,&a1))
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
        Molecule *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJCJA",&sipSelf,sipClass_Molecule,&sipCpp,sipClass_AtomContainer,&a0,sipClass_Composite,&a1))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Molecule,sipNm_BALL_insertAfter);

    return NULL;
}


extern "C" {static PyObject *meth_Molecule_remove(PyObject *, PyObject *);}
static PyObject *meth_Molecule_remove(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Atom * a0;
        Molecule *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_Molecule,&sipCpp,sipClass_Atom,&a0))
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
        Molecule *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_Molecule,&sipCpp,sipClass_AtomContainer,&a0))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Molecule,sipNm_BALL_remove);

    return NULL;
}


extern "C" {static PyObject *meth_Molecule_spliceBefore(PyObject *, PyObject *);}
static PyObject *meth_Molecule_spliceBefore(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        AtomContainer * a0;
        Molecule *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_Molecule,&sipCpp,sipClass_AtomContainer,&a0))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Molecule,sipNm_BALL_spliceBefore);

    return NULL;
}


extern "C" {static PyObject *meth_Molecule_spliceAfter(PyObject *, PyObject *);}
static PyObject *meth_Molecule_spliceAfter(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        AtomContainer * a0;
        Molecule *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_Molecule,&sipCpp,sipClass_AtomContainer,&a0))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Molecule,sipNm_BALL_spliceAfter);

    return NULL;
}


extern "C" {static PyObject *meth_Molecule_splice(PyObject *, PyObject *);}
static PyObject *meth_Molecule_splice(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        AtomContainer * a0;
        Molecule *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_Molecule,&sipCpp,sipClass_AtomContainer,&a0))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Molecule,sipNm_BALL_splice);

    return NULL;
}


extern "C" {static PyObject *meth_Molecule_isValid(PyObject *, PyObject *);}
static PyObject *meth_Molecule_isValid(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        Molecule *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Molecule,&sipCpp))
        {
            bool sipRes;

            sipRes = (sipSelfWasArg ? sipCpp->Molecule::isValid() : sipCpp->isValid());

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Molecule,sipNm_BALL_isValid);

    return NULL;
}


extern "C" {static PyObject *slot_Molecule___repr__(PyObject *sipSelf);}
static PyObject *slot_Molecule___repr__(PyObject *sipSelf)
{
    Molecule *sipCpp = reinterpret_cast<Molecule *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_Molecule));

    if (!sipCpp)
        return 0;


    {
        {
            PyObject * sipRes = 0;

#line 53 "molecule.sip"
	sipRes = PyString_FromString(String(String("Molecule ") + sipCpp->getName() 
						+ " { " + String(sipCpp->countAtoms()) + " atoms }").c_str());
#line 802 "sipBALLMolecule.C"

            return sipRes;
        }
    }
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_Molecule(void *, sipWrapperType *);}
static void *cast_Molecule(void *ptr,sipWrapperType *targetClass)
{
    void *res;

    if (targetClass == sipClass_Molecule)
        return ptr;

    if ((res = sipCast_AtomContainer((AtomContainer *)(Molecule *)ptr,targetClass)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_Molecule(void *, int);}
static void release_Molecule(void *ptr,int state)
{
    if (state & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipMolecule *>(ptr);
    else
        delete reinterpret_cast<Molecule *>(ptr);
}


extern "C" {static void dealloc_Molecule(sipWrapper *);}
static void dealloc_Molecule(sipWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipMolecule *>(sipSelf->u.cppPtr)->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_Molecule(sipSelf->u.cppPtr,sipSelf->flags);
    }
}


extern "C" {static void *init_Molecule(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_Molecule(sipWrapper *sipSelf,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    sipMolecule *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            try
            {
            sipCpp = new sipMolecule();
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
        const Molecule * a0;
        bool a1 = 1;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA|b",sipClass_Molecule,&a0,&a1))
        {
            try
            {
            sipCpp = new sipMolecule(*a0,a1);
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
            sipCpp = new sipMolecule(*a0);
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
        const Molecule * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_Molecule,&a0))
        {
            try
            {
            sipCpp = new sipMolecule(*a0);
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


extern "C" {static void *forceConvertTo_Molecule(PyObject *, int *);}
static void *forceConvertTo_Molecule(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_Molecule))
        return sipConvertToCpp(valobj,sipClass_Molecule,iserrp);

    sipBadClass(sipNm_BALL_Molecule);

    *iserrp = 1;

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedClassDef supers_Molecule[] = {{226, 255, 1}};


/* Define this type's Python slots. */
static sipPySlotDef slots_Molecule[] = {
    {(void *)slot_Molecule___repr__, repr_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_Molecule[] = {
    {sipNm_BALL_append, meth_Molecule_append, METH_VARARGS, NULL},
    {sipNm_BALL_clear, meth_Molecule_clear, METH_VARARGS, NULL},
    {sipNm_BALL_destroy, meth_Molecule_destroy, METH_VARARGS, NULL},
    {sipNm_BALL_get, meth_Molecule_get, METH_VARARGS, NULL},
    {sipNm_BALL_getSystem, meth_Molecule_getSystem, METH_VARARGS, NULL},
    {sipNm_BALL_insert, meth_Molecule_insert, METH_VARARGS, NULL},
    {sipNm_BALL_insertAfter, meth_Molecule_insertAfter, METH_VARARGS, NULL},
    {sipNm_BALL_insertBefore, meth_Molecule_insertBefore, METH_VARARGS, NULL},
    {sipNm_BALL_isValid, meth_Molecule_isValid, METH_VARARGS, NULL},
    {sipNm_BALL_prepend, meth_Molecule_prepend, METH_VARARGS, NULL},
    {sipNm_BALL_remove, meth_Molecule_remove, METH_VARARGS, NULL},
    {sipNm_BALL_set, meth_Molecule_set, METH_VARARGS, NULL},
    {sipNm_BALL_splice, meth_Molecule_splice, METH_VARARGS, NULL},
    {sipNm_BALL_spliceAfter, meth_Molecule_spliceAfter, METH_VARARGS, NULL},
    {sipNm_BALL_spliceBefore, meth_Molecule_spliceBefore, METH_VARARGS, NULL},
    {sipNm_BALL_swap, meth_Molecule_swap, METH_VARARGS, NULL}
};


sipTypeDef sipType_BALL_Molecule = {
    0,
    0,
    "BALL.Molecule",
    0,
    {0, 0, 1},
    supers_Molecule,
    slots_Molecule,
    16, methods_Molecule,
    0, 0,
    0,
    init_Molecule,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_Molecule,
    cast_Molecule,
    release_Molecule,
    forceConvertTo_Molecule,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
