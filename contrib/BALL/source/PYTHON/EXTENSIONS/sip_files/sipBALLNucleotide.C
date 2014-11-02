/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLNucleotide.h"

#include "sipBALLFragment.h"
#include "sipBALLString.h"
#include "sipBALLNucleotide.h"
#include "sipBALLAtom.h"
#include "sipBALLComposite.h"
#include "sipBALLNucleicAcid.h"
#include "sipBALLAtomContainer.h"
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


sipNucleotide::sipNucleotide(): Nucleotide(), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,5);
}

sipNucleotide::sipNucleotide(const Nucleotide& a0,bool a1): Nucleotide(a0,a1), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,5);
}

sipNucleotide::sipNucleotide(const String& a0,const String& a1,char a2): Nucleotide(a0,a1,a2), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,5);
}

sipNucleotide::sipNucleotide(const Nucleotide& a0): Nucleotide(a0), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,5);
}

sipNucleotide::~sipNucleotide() throw()
{
    sipCommonDtor(sipPySelf);
}

void sipNucleotide::clear() throw()
{
    extern void sipVH_BALL_0(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipNm_BALL_clear);

    if (!meth)
    {
        Nucleotide::clear();
        return;
    }

    sipVH_BALL_0(sipGILState,meth);
}

void sipNucleotide::destroy() throw()
{
    extern void sipVH_BALL_0(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,NULL,sipNm_BALL_destroy);

    if (!meth)
    {
        Nucleotide::destroy();
        return;
    }

    sipVH_BALL_0(sipGILState,meth);
}

bool sipNucleotide::isValid() const throw()
{
    extern bool sipVH_BALL_4(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<sipMethodCache *>(&sipPyMethods[2]),sipPySelf,NULL,sipNm_BALL_isValid);

    if (!meth)
        return Nucleotide::isValid();

    return sipVH_BALL_4(sipGILState,meth);
}

void sipNucleotide::select() throw()
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

void sipNucleotide::deselect() throw()
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


extern "C" {static PyObject *meth_Nucleotide_clear(PyObject *, PyObject *);}
static PyObject *meth_Nucleotide_clear(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        Nucleotide *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Nucleotide,&sipCpp))
        {
            (sipSelfWasArg ? sipCpp->Nucleotide::clear() : sipCpp->clear());

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Nucleotide,sipNm_BALL_clear);

    return NULL;
}


extern "C" {static PyObject *meth_Nucleotide_destroy(PyObject *, PyObject *);}
static PyObject *meth_Nucleotide_destroy(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        Nucleotide *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Nucleotide,&sipCpp))
        {
            (sipSelfWasArg ? sipCpp->Nucleotide::destroy() : sipCpp->destroy());

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Nucleotide,sipNm_BALL_destroy);

    return NULL;
}


extern "C" {static PyObject *meth_Nucleotide_set(PyObject *, PyObject *);}
static PyObject *meth_Nucleotide_set(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const Nucleotide * a0;
        bool a1 = 1;
        Nucleotide *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA|b",&sipSelf,sipClass_Nucleotide,&sipCpp,sipClass_Nucleotide,&a0,&a1))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Nucleotide,sipNm_BALL_set);

    return NULL;
}


extern "C" {static PyObject *meth_Nucleotide_get(PyObject *, PyObject *);}
static PyObject *meth_Nucleotide_get(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Nucleotide * a0;
        bool a1 = 1;
        Nucleotide *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA|b",&sipSelf,sipClass_Nucleotide,&sipCpp,sipClass_Nucleotide,&a0,&a1))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Nucleotide,sipNm_BALL_get);

    return NULL;
}


extern "C" {static PyObject *meth_Nucleotide_swap(PyObject *, PyObject *);}
static PyObject *meth_Nucleotide_swap(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Nucleotide * a0;
        Nucleotide *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_Nucleotide,&sipCpp,sipClass_Nucleotide,&a0))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Nucleotide,sipNm_BALL_swap);

    return NULL;
}


extern "C" {static PyObject *meth_Nucleotide_getNucleicAcid(PyObject *, PyObject *);}
static PyObject *meth_Nucleotide_getNucleicAcid(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Nucleotide *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Nucleotide,&sipCpp))
        {
            NucleicAcid *sipRes;

            try
            {
            sipRes = sipCpp->getNucleicAcid();
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return sipConvertFromInstance(sipRes,sipClass_NucleicAcid,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Nucleotide,sipNm_BALL_getNucleicAcid);

    return NULL;
}


extern "C" {static PyObject *meth_Nucleotide_setID(PyObject *, PyObject *);}
static PyObject *meth_Nucleotide_setID(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const String * a0;
        int a0State = 0;
        Nucleotide *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ1",&sipSelf,sipClass_Nucleotide,&sipCpp,sipClass_String,&a0,&a0State))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Nucleotide,sipNm_BALL_setID);

    return NULL;
}


extern "C" {static PyObject *meth_Nucleotide_getID(PyObject *, PyObject *);}
static PyObject *meth_Nucleotide_getID(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Nucleotide *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Nucleotide,&sipCpp))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Nucleotide,sipNm_BALL_getID);

    return NULL;
}


extern "C" {static PyObject *meth_Nucleotide_setInsertionCode(PyObject *, PyObject *);}
static PyObject *meth_Nucleotide_setInsertionCode(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        char a0;
        Nucleotide *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bc",&sipSelf,sipClass_Nucleotide,&sipCpp,&a0))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Nucleotide,sipNm_BALL_setInsertionCode);

    return NULL;
}


extern "C" {static PyObject *meth_Nucleotide_getInsertionCode(PyObject *, PyObject *);}
static PyObject *meth_Nucleotide_getInsertionCode(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Nucleotide *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Nucleotide,&sipCpp))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Nucleotide,sipNm_BALL_getInsertionCode);

    return NULL;
}


extern "C" {static PyObject *meth_Nucleotide_prepend(PyObject *, PyObject *);}
static PyObject *meth_Nucleotide_prepend(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Atom * a0;
        Nucleotide *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJC",&sipSelf,sipClass_Nucleotide,&sipCpp,sipClass_Atom,&a0))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Nucleotide,sipNm_BALL_prepend);

    return NULL;
}


extern "C" {static PyObject *meth_Nucleotide_append(PyObject *, PyObject *);}
static PyObject *meth_Nucleotide_append(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Atom * a0;
        Nucleotide *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJC",&sipSelf,sipClass_Nucleotide,&sipCpp,sipClass_Atom,&a0))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Nucleotide,sipNm_BALL_append);

    return NULL;
}


extern "C" {static PyObject *meth_Nucleotide_insert(PyObject *, PyObject *);}
static PyObject *meth_Nucleotide_insert(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Atom * a0;
        Nucleotide *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJC",&sipSelf,sipClass_Nucleotide,&sipCpp,sipClass_Atom,&a0))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Nucleotide,sipNm_BALL_insert);

    return NULL;
}


extern "C" {static PyObject *meth_Nucleotide_insertBefore(PyObject *, PyObject *);}
static PyObject *meth_Nucleotide_insertBefore(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Atom * a0;
        Composite * a1;
        Nucleotide *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJCJA",&sipSelf,sipClass_Nucleotide,&sipCpp,sipClass_Atom,&a0,sipClass_Composite,&a1))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Nucleotide,sipNm_BALL_insertBefore);

    return NULL;
}


extern "C" {static PyObject *meth_Nucleotide_insertAfter(PyObject *, PyObject *);}
static PyObject *meth_Nucleotide_insertAfter(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Atom * a0;
        Composite * a1;
        Nucleotide *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJCJA",&sipSelf,sipClass_Nucleotide,&sipCpp,sipClass_Atom,&a0,sipClass_Composite,&a1))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Nucleotide,sipNm_BALL_insertAfter);

    return NULL;
}


extern "C" {static PyObject *meth_Nucleotide_remove(PyObject *, PyObject *);}
static PyObject *meth_Nucleotide_remove(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Atom * a0;
        Nucleotide *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_Nucleotide,&sipCpp,sipClass_Atom,&a0))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Nucleotide,sipNm_BALL_remove);

    return NULL;
}


extern "C" {static PyObject *meth_Nucleotide_spliceBefore(PyObject *, PyObject *);}
static PyObject *meth_Nucleotide_spliceBefore(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Nucleotide * a0;
        Nucleotide *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_Nucleotide,&sipCpp,sipClass_Nucleotide,&a0))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Nucleotide,sipNm_BALL_spliceBefore);

    return NULL;
}


extern "C" {static PyObject *meth_Nucleotide_spliceAfter(PyObject *, PyObject *);}
static PyObject *meth_Nucleotide_spliceAfter(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Nucleotide * a0;
        Nucleotide *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_Nucleotide,&sipCpp,sipClass_Nucleotide,&a0))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Nucleotide,sipNm_BALL_spliceAfter);

    return NULL;
}


extern "C" {static PyObject *meth_Nucleotide_splice(PyObject *, PyObject *);}
static PyObject *meth_Nucleotide_splice(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Nucleotide * a0;
        Nucleotide *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_Nucleotide,&sipCpp,sipClass_Nucleotide,&a0))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Nucleotide,sipNm_BALL_splice);

    return NULL;
}


extern "C" {static PyObject *meth_Nucleotide_isTerminal(PyObject *, PyObject *);}
static PyObject *meth_Nucleotide_isTerminal(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Nucleotide *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Nucleotide,&sipCpp))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Nucleotide,sipNm_BALL_isTerminal);

    return NULL;
}


extern "C" {static PyObject *meth_Nucleotide_is3Prime(PyObject *, PyObject *);}
static PyObject *meth_Nucleotide_is3Prime(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Nucleotide *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Nucleotide,&sipCpp))
        {
            bool sipRes;

            try
            {
            sipRes = sipCpp->is3Prime();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Nucleotide,sipNm_BALL_is3Prime);

    return NULL;
}


extern "C" {static PyObject *meth_Nucleotide_is5Prime(PyObject *, PyObject *);}
static PyObject *meth_Nucleotide_is5Prime(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Nucleotide *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Nucleotide,&sipCpp))
        {
            bool sipRes;

            try
            {
            sipRes = sipCpp->is5Prime();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Nucleotide,sipNm_BALL_is5Prime);

    return NULL;
}


extern "C" {static PyObject *meth_Nucleotide_isValid(PyObject *, PyObject *);}
static PyObject *meth_Nucleotide_isValid(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        Nucleotide *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Nucleotide,&sipCpp))
        {
            bool sipRes;

            sipRes = (sipSelfWasArg ? sipCpp->Nucleotide::isValid() : sipCpp->isValid());

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Nucleotide,sipNm_BALL_isValid);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_Nucleotide(void *, sipWrapperType *);}
static void *cast_Nucleotide(void *ptr,sipWrapperType *targetClass)
{
    void *res;

    if (targetClass == sipClass_Nucleotide)
        return ptr;

    if ((res = sipCast_Fragment((Fragment *)(Nucleotide *)ptr,targetClass)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_Nucleotide(void *, int);}
static void release_Nucleotide(void *ptr,int state)
{
    if (state & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipNucleotide *>(ptr);
    else
        delete reinterpret_cast<Nucleotide *>(ptr);
}


extern "C" {static void dealloc_Nucleotide(sipWrapper *);}
static void dealloc_Nucleotide(sipWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipNucleotide *>(sipSelf->u.cppPtr)->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_Nucleotide(sipSelf->u.cppPtr,sipSelf->flags);
    }
}


extern "C" {static void *init_Nucleotide(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_Nucleotide(sipWrapper *sipSelf,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    sipNucleotide *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            try
            {
            sipCpp = new sipNucleotide();
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
        const Nucleotide * a0;
        bool a1 = 1;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA|b",sipClass_Nucleotide,&a0,&a1))
        {
            try
            {
            sipCpp = new sipNucleotide(*a0,a1);
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
            sipCpp = new sipNucleotide(*a0,*a1,a2);
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
        const Nucleotide * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_Nucleotide,&a0))
        {
            try
            {
            sipCpp = new sipNucleotide(*a0);
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


extern "C" {static void *forceConvertTo_Nucleotide(PyObject *, int *);}
static void *forceConvertTo_Nucleotide(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_Nucleotide))
        return sipConvertToCpp(valobj,sipClass_Nucleotide,iserrp);

    sipBadClass(sipNm_BALL_Nucleotide);

    *iserrp = 1;

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedClassDef supers_Nucleotide[] = {{232, 255, 1}};


static PyMethodDef methods_Nucleotide[] = {
    {sipNm_BALL_append, meth_Nucleotide_append, METH_VARARGS, NULL},
    {sipNm_BALL_clear, meth_Nucleotide_clear, METH_VARARGS, NULL},
    {sipNm_BALL_destroy, meth_Nucleotide_destroy, METH_VARARGS, NULL},
    {sipNm_BALL_get, meth_Nucleotide_get, METH_VARARGS, NULL},
    {sipNm_BALL_getID, meth_Nucleotide_getID, METH_VARARGS, NULL},
    {sipNm_BALL_getInsertionCode, meth_Nucleotide_getInsertionCode, METH_VARARGS, NULL},
    {sipNm_BALL_getNucleicAcid, meth_Nucleotide_getNucleicAcid, METH_VARARGS, NULL},
    {sipNm_BALL_insert, meth_Nucleotide_insert, METH_VARARGS, NULL},
    {sipNm_BALL_insertAfter, meth_Nucleotide_insertAfter, METH_VARARGS, NULL},
    {sipNm_BALL_insertBefore, meth_Nucleotide_insertBefore, METH_VARARGS, NULL},
    {sipNm_BALL_is3Prime, meth_Nucleotide_is3Prime, METH_VARARGS, NULL},
    {sipNm_BALL_is5Prime, meth_Nucleotide_is5Prime, METH_VARARGS, NULL},
    {sipNm_BALL_isTerminal, meth_Nucleotide_isTerminal, METH_VARARGS, NULL},
    {sipNm_BALL_isValid, meth_Nucleotide_isValid, METH_VARARGS, NULL},
    {sipNm_BALL_prepend, meth_Nucleotide_prepend, METH_VARARGS, NULL},
    {sipNm_BALL_remove, meth_Nucleotide_remove, METH_VARARGS, NULL},
    {sipNm_BALL_set, meth_Nucleotide_set, METH_VARARGS, NULL},
    {sipNm_BALL_setID, meth_Nucleotide_setID, METH_VARARGS, NULL},
    {sipNm_BALL_setInsertionCode, meth_Nucleotide_setInsertionCode, METH_VARARGS, NULL},
    {sipNm_BALL_splice, meth_Nucleotide_splice, METH_VARARGS, NULL},
    {sipNm_BALL_spliceAfter, meth_Nucleotide_spliceAfter, METH_VARARGS, NULL},
    {sipNm_BALL_spliceBefore, meth_Nucleotide_spliceBefore, METH_VARARGS, NULL},
    {sipNm_BALL_swap, meth_Nucleotide_swap, METH_VARARGS, NULL}
};


sipTypeDef sipType_BALL_Nucleotide = {
    0,
    0,
    "BALL.Nucleotide",
    0,
    {0, 0, 1},
    supers_Nucleotide,
    0,
    23, methods_Nucleotide,
    0, 0,
    0,
    init_Nucleotide,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_Nucleotide,
    cast_Nucleotide,
    release_Nucleotide,
    forceConvertTo_Nucleotide,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
