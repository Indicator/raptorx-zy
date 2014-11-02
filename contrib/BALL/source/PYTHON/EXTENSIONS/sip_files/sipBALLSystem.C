/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLSystem.h"

#include "sipBALLAtomContainer.h"
#include "sipBALLPropertyManager.h"
#include "sipBALLString.h"
#include "sipBALLSystem.h"
#include "sipBALLMolecule.h"
#include "sipBALLComposite.h"
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


sipSystem::sipSystem(): System(), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,5);
}

sipSystem::sipSystem(const System& a0,bool a1): System(a0,a1), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,5);
}

sipSystem::sipSystem(const String& a0): System(a0), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,5);
}

sipSystem::sipSystem(const System& a0): System(a0), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,5);
}

sipSystem::~sipSystem() throw()
{
    sipCommonDtor(sipPySelf);
}

void sipSystem::clear() throw()
{
    extern void sipVH_BALL_0(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipNm_BALL_clear);

    if (!meth)
    {
        System::clear();
        return;
    }

    sipVH_BALL_0(sipGILState,meth);
}

void sipSystem::destroy() throw()
{
    extern void sipVH_BALL_0(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,NULL,sipNm_BALL_destroy);

    if (!meth)
    {
        System::destroy();
        return;
    }

    sipVH_BALL_0(sipGILState,meth);
}

bool sipSystem::isValid() const throw()
{
    extern bool sipVH_BALL_4(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<sipMethodCache *>(&sipPyMethods[2]),sipPySelf,NULL,sipNm_BALL_isValid);

    if (!meth)
        return System::isValid();

    return sipVH_BALL_4(sipGILState,meth);
}

void sipSystem::select() throw()
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

void sipSystem::deselect() throw()
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


extern "C" {static PyObject *meth_System_clear(PyObject *, PyObject *);}
static PyObject *meth_System_clear(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        System *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_System,&sipCpp))
        {
            (sipSelfWasArg ? sipCpp->System::clear() : sipCpp->clear());

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_System,sipNm_BALL_clear);

    return NULL;
}


extern "C" {static PyObject *meth_System_destroy(PyObject *, PyObject *);}
static PyObject *meth_System_destroy(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        System *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_System,&sipCpp))
        {
            (sipSelfWasArg ? sipCpp->System::destroy() : sipCpp->destroy());

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_System,sipNm_BALL_destroy);

    return NULL;
}


extern "C" {static PyObject *meth_System_set(PyObject *, PyObject *);}
static PyObject *meth_System_set(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const System * a0;
        bool a1 = 1;
        System *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA|b",&sipSelf,sipClass_System,&sipCpp,sipClass_System,&a0,&a1))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_System,sipNm_BALL_set);

    return NULL;
}


extern "C" {static PyObject *meth_System_get(PyObject *, PyObject *);}
static PyObject *meth_System_get(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        System * a0;
        bool a1 = 1;
        System *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA|b",&sipSelf,sipClass_System,&sipCpp,sipClass_System,&a0,&a1))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_System,sipNm_BALL_get);

    return NULL;
}


extern "C" {static PyObject *meth_System_swap(PyObject *, PyObject *);}
static PyObject *meth_System_swap(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        System * a0;
        System *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_System,&sipCpp,sipClass_System,&a0))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_System,sipNm_BALL_swap);

    return NULL;
}


extern "C" {static PyObject *meth_System_setName(PyObject *, PyObject *);}
static PyObject *meth_System_setName(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const String * a0;
        int a0State = 0;
        System *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ1",&sipSelf,sipClass_System,&sipCpp,sipClass_String,&a0,&a0State))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_System,sipNm_BALL_setName);

    return NULL;
}


extern "C" {static PyObject *meth_System_getName(PyObject *, PyObject *);}
static PyObject *meth_System_getName(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        System *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_System,&sipCpp))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_System,sipNm_BALL_getName);

    return NULL;
}


extern "C" {static PyObject *meth_System_countMolecules(PyObject *, PyObject *);}
static PyObject *meth_System_countMolecules(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        System *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_System,&sipCpp))
        {
            int sipRes;

            try
            {
            sipRes = sipCpp->countMolecules();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_System,sipNm_BALL_countMolecules);

    return NULL;
}


extern "C" {static PyObject *meth_System_countFragments(PyObject *, PyObject *);}
static PyObject *meth_System_countFragments(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        System *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_System,&sipCpp))
        {
            int sipRes;

            try
            {
            sipRes = sipCpp->countFragments();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_System,sipNm_BALL_countFragments);

    return NULL;
}


extern "C" {static PyObject *meth_System_countAtoms(PyObject *, PyObject *);}
static PyObject *meth_System_countAtoms(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        System *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_System,&sipCpp))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_System,sipNm_BALL_countAtoms);

    return NULL;
}


extern "C" {static PyObject *meth_System_countSecondaryStructures(PyObject *, PyObject *);}
static PyObject *meth_System_countSecondaryStructures(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        System *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_System,&sipCpp))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_System,sipNm_BALL_countSecondaryStructures);

    return NULL;
}


extern "C" {static PyObject *meth_System_countResidues(PyObject *, PyObject *);}
static PyObject *meth_System_countResidues(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        System *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_System,&sipCpp))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_System,sipNm_BALL_countResidues);

    return NULL;
}


extern "C" {static PyObject *meth_System_prepend(PyObject *, PyObject *);}
static PyObject *meth_System_prepend(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Molecule * a0;
        System *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJC",&sipSelf,sipClass_System,&sipCpp,sipClass_Molecule,&a0))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_System,sipNm_BALL_prepend);

    return NULL;
}


extern "C" {static PyObject *meth_System_append(PyObject *, PyObject *);}
static PyObject *meth_System_append(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Molecule * a0;
        System *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJC",&sipSelf,sipClass_System,&sipCpp,sipClass_Molecule,&a0))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_System,sipNm_BALL_append);

    return NULL;
}


extern "C" {static PyObject *meth_System_insert(PyObject *, PyObject *);}
static PyObject *meth_System_insert(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Molecule * a0;
        System *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJC",&sipSelf,sipClass_System,&sipCpp,sipClass_Molecule,&a0))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_System,sipNm_BALL_insert);

    return NULL;
}


extern "C" {static PyObject *meth_System_insertBefore(PyObject *, PyObject *);}
static PyObject *meth_System_insertBefore(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Molecule * a0;
        Composite * a1;
        System *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJCJA",&sipSelf,sipClass_System,&sipCpp,sipClass_Molecule,&a0,sipClass_Composite,&a1))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_System,sipNm_BALL_insertBefore);

    return NULL;
}


extern "C" {static PyObject *meth_System_insertAfter(PyObject *, PyObject *);}
static PyObject *meth_System_insertAfter(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Molecule * a0;
        Composite * a1;
        System *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJCJA",&sipSelf,sipClass_System,&sipCpp,sipClass_Molecule,&a0,sipClass_Composite,&a1))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_System,sipNm_BALL_insertAfter);

    return NULL;
}


extern "C" {static PyObject *meth_System_remove(PyObject *, PyObject *);}
static PyObject *meth_System_remove(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Molecule * a0;
        System *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_System,&sipCpp,sipClass_Molecule,&a0))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_System,sipNm_BALL_remove);

    return NULL;
}


extern "C" {static PyObject *meth_System_spliceBefore(PyObject *, PyObject *);}
static PyObject *meth_System_spliceBefore(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        System * a0;
        System *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_System,&sipCpp,sipClass_System,&a0))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_System,sipNm_BALL_spliceBefore);

    return NULL;
}


extern "C" {static PyObject *meth_System_spliceAfter(PyObject *, PyObject *);}
static PyObject *meth_System_spliceAfter(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        System * a0;
        System *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_System,&sipCpp,sipClass_System,&a0))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_System,sipNm_BALL_spliceAfter);

    return NULL;
}


extern "C" {static PyObject *meth_System_splice(PyObject *, PyObject *);}
static PyObject *meth_System_splice(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        System * a0;
        System *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_System,&sipCpp,sipClass_System,&a0))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_System,sipNm_BALL_splice);

    return NULL;
}


extern "C" {static PyObject *meth_System_destroyBonds(PyObject *, PyObject *);}
static PyObject *meth_System_destroyBonds(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        System *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_System,&sipCpp))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_System,sipNm_BALL_destroyBonds);

    return NULL;
}


extern "C" {static PyObject *meth_System_isValid(PyObject *, PyObject *);}
static PyObject *meth_System_isValid(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        System *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_System,&sipCpp))
        {
            bool sipRes;

            sipRes = (sipSelfWasArg ? sipCpp->System::isValid() : sipCpp->isValid());

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_System,sipNm_BALL_isValid);

    return NULL;
}


extern "C" {static PyObject *slot_System___str__(PyObject *sipSelf);}
static PyObject *slot_System___str__(PyObject *sipSelf)
{
    System *sipCpp = reinterpret_cast<System *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_System));

    if (!sipCpp)
        return 0;


    {
        {
            PyObject * sipRes = 0;

#line 55 "system.sip"
	sipRes = PyString_FromString(String(String("System ") + sipCpp->getName() 
							+ " { " + String(sipCpp->countMolecules()) + " molecules,  " 
							+ String(sipCpp->countAtoms()) + " atoms }").c_str());
#line 909 "sipBALLSystem.C"

            return sipRes;
        }
    }
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_System(void *, sipWrapperType *);}
static void *cast_System(void *ptr,sipWrapperType *targetClass)
{
    void *res;

    if (targetClass == sipClass_System)
        return ptr;

    if ((res = sipCast_AtomContainer((AtomContainer *)(System *)ptr,targetClass)) != NULL)
        return res;

    if ((res = sipCast_PropertyManager((PropertyManager *)(System *)ptr,targetClass)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_System(void *, int);}
static void release_System(void *ptr,int state)
{
    if (state & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipSystem *>(ptr);
    else
        delete reinterpret_cast<System *>(ptr);
}


extern "C" {static void dealloc_System(sipWrapper *);}
static void dealloc_System(sipWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipSystem *>(sipSelf->u.cppPtr)->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_System(sipSelf->u.cppPtr,sipSelf->flags);
    }
}


extern "C" {static void *init_System(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_System(sipWrapper *sipSelf,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    sipSystem *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            try
            {
            sipCpp = new sipSystem();
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
        const System * a0;
        bool a1 = 1;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA|b",sipClass_System,&a0,&a1))
        {
            try
            {
            sipCpp = new sipSystem(*a0,a1);
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
            sipCpp = new sipSystem(*a0);
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
        const System * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_System,&a0))
        {
            try
            {
            sipCpp = new sipSystem(*a0);
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


extern "C" {static void *forceConvertTo_System(PyObject *, int *);}
static void *forceConvertTo_System(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_System))
        return sipConvertToCpp(valobj,sipClass_System,iserrp);

    sipBadClass(sipNm_BALL_System);

    *iserrp = 1;

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedClassDef supers_System[] = {{226, 255, 0}, {191, 255, 1}};


/* Define this type's Python slots. */
static sipPySlotDef slots_System[] = {
    {(void *)slot_System___str__, str_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_System[] = {
    {sipNm_BALL_append, meth_System_append, METH_VARARGS, NULL},
    {sipNm_BALL_clear, meth_System_clear, METH_VARARGS, NULL},
    {sipNm_BALL_countAtoms, meth_System_countAtoms, METH_VARARGS, NULL},
    {sipNm_BALL_countFragments, meth_System_countFragments, METH_VARARGS, NULL},
    {sipNm_BALL_countMolecules, meth_System_countMolecules, METH_VARARGS, NULL},
    {sipNm_BALL_countResidues, meth_System_countResidues, METH_VARARGS, NULL},
    {sipNm_BALL_countSecondaryStructures, meth_System_countSecondaryStructures, METH_VARARGS, NULL},
    {sipNm_BALL_destroy, meth_System_destroy, METH_VARARGS, NULL},
    {sipNm_BALL_destroyBonds, meth_System_destroyBonds, METH_VARARGS, NULL},
    {sipNm_BALL_get, meth_System_get, METH_VARARGS, NULL},
    {sipNm_BALL_getName, meth_System_getName, METH_VARARGS, NULL},
    {sipNm_BALL_insert, meth_System_insert, METH_VARARGS, NULL},
    {sipNm_BALL_insertAfter, meth_System_insertAfter, METH_VARARGS, NULL},
    {sipNm_BALL_insertBefore, meth_System_insertBefore, METH_VARARGS, NULL},
    {sipNm_BALL_isValid, meth_System_isValid, METH_VARARGS, NULL},
    {sipNm_BALL_prepend, meth_System_prepend, METH_VARARGS, NULL},
    {sipNm_BALL_remove, meth_System_remove, METH_VARARGS, NULL},
    {sipNm_BALL_set, meth_System_set, METH_VARARGS, NULL},
    {sipNm_BALL_setName, meth_System_setName, METH_VARARGS, NULL},
    {sipNm_BALL_splice, meth_System_splice, METH_VARARGS, NULL},
    {sipNm_BALL_spliceAfter, meth_System_spliceAfter, METH_VARARGS, NULL},
    {sipNm_BALL_spliceBefore, meth_System_spliceBefore, METH_VARARGS, NULL},
    {sipNm_BALL_swap, meth_System_swap, METH_VARARGS, NULL}
};


sipTypeDef sipType_BALL_System = {
    0,
    0,
    "BALL.System",
    0,
    {0, 0, 1},
    supers_System,
    slots_System,
    23, methods_System,
    0, 0,
    0,
    init_System,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_System,
    cast_System,
    release_System,
    forceConvertTo_System,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
