/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLNucleicAcid.h"

#include "sipBALLMolecule.h"
#include "sipBALLString.h"
#include "sipBALLNucleicAcid.h"
#include "sipBALLNucleotide.h"
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


sipNucleicAcid::sipNucleicAcid(): NucleicAcid(), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,5);
}

sipNucleicAcid::sipNucleicAcid(const NucleicAcid& a0,bool a1): NucleicAcid(a0,a1), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,5);
}

sipNucleicAcid::sipNucleicAcid(const String& a0,const String& a1): NucleicAcid(a0,a1), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,5);
}

sipNucleicAcid::sipNucleicAcid(const NucleicAcid& a0): NucleicAcid(a0), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,5);
}

sipNucleicAcid::~sipNucleicAcid() throw()
{
    sipCommonDtor(sipPySelf);
}

void sipNucleicAcid::clear() throw()
{
    extern void sipVH_BALL_0(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipNm_BALL_clear);

    if (!meth)
    {
        NucleicAcid::clear();
        return;
    }

    sipVH_BALL_0(sipGILState,meth);
}

void sipNucleicAcid::destroy() throw()
{
    extern void sipVH_BALL_0(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,NULL,sipNm_BALL_destroy);

    if (!meth)
    {
        NucleicAcid::destroy();
        return;
    }

    sipVH_BALL_0(sipGILState,meth);
}

bool sipNucleicAcid::isValid() const throw()
{
    extern bool sipVH_BALL_4(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<sipMethodCache *>(&sipPyMethods[2]),sipPySelf,NULL,sipNm_BALL_isValid);

    if (!meth)
        return NucleicAcid::isValid();

    return sipVH_BALL_4(sipGILState,meth);
}

void sipNucleicAcid::select() throw()
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

void sipNucleicAcid::deselect() throw()
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


extern "C" {static PyObject *meth_NucleicAcid_clear(PyObject *, PyObject *);}
static PyObject *meth_NucleicAcid_clear(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        NucleicAcid *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_NucleicAcid,&sipCpp))
        {
            (sipSelfWasArg ? sipCpp->NucleicAcid::clear() : sipCpp->clear());

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_NucleicAcid,sipNm_BALL_clear);

    return NULL;
}


extern "C" {static PyObject *meth_NucleicAcid_destroy(PyObject *, PyObject *);}
static PyObject *meth_NucleicAcid_destroy(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        NucleicAcid *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_NucleicAcid,&sipCpp))
        {
            (sipSelfWasArg ? sipCpp->NucleicAcid::destroy() : sipCpp->destroy());

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_NucleicAcid,sipNm_BALL_destroy);

    return NULL;
}


extern "C" {static PyObject *meth_NucleicAcid_set(PyObject *, PyObject *);}
static PyObject *meth_NucleicAcid_set(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const NucleicAcid * a0;
        bool a1 = 1;
        NucleicAcid *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA|b",&sipSelf,sipClass_NucleicAcid,&sipCpp,sipClass_NucleicAcid,&a0,&a1))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_NucleicAcid,sipNm_BALL_set);

    return NULL;
}


extern "C" {static PyObject *meth_NucleicAcid_get(PyObject *, PyObject *);}
static PyObject *meth_NucleicAcid_get(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        NucleicAcid * a0;
        bool a1 = 1;
        NucleicAcid *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA|b",&sipSelf,sipClass_NucleicAcid,&sipCpp,sipClass_NucleicAcid,&a0,&a1))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_NucleicAcid,sipNm_BALL_get);

    return NULL;
}


extern "C" {static PyObject *meth_NucleicAcid_swap(PyObject *, PyObject *);}
static PyObject *meth_NucleicAcid_swap(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        NucleicAcid * a0;
        NucleicAcid *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_NucleicAcid,&sipCpp,sipClass_NucleicAcid,&a0))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_NucleicAcid,sipNm_BALL_swap);

    return NULL;
}


extern "C" {static PyObject *meth_NucleicAcid_getNucleotide(PyObject *, PyObject *);}
static PyObject *meth_NucleicAcid_getNucleotide(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        int a0;
        NucleicAcid *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bi",&sipSelf,sipClass_NucleicAcid,&sipCpp,&a0))
        {
            Nucleotide *sipRes;

            try
            {
            sipRes = sipCpp->getNucleotide(a0);
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return sipConvertFromInstance(sipRes,sipClass_Nucleotide,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_NucleicAcid,sipNm_BALL_getNucleotide);

    return NULL;
}


extern "C" {static PyObject *meth_NucleicAcid_get3Prime(PyObject *, PyObject *);}
static PyObject *meth_NucleicAcid_get3Prime(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        NucleicAcid *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_NucleicAcid,&sipCpp))
        {
            Nucleotide *sipRes;

            try
            {
            sipRes = sipCpp->get3Prime();
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return sipConvertFromInstance(sipRes,sipClass_Nucleotide,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_NucleicAcid,sipNm_BALL_get3Prime);

    return NULL;
}


extern "C" {static PyObject *meth_NucleicAcid_get5Prime(PyObject *, PyObject *);}
static PyObject *meth_NucleicAcid_get5Prime(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        NucleicAcid *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_NucleicAcid,&sipCpp))
        {
            Nucleotide *sipRes;

            try
            {
            sipRes = sipCpp->get5Prime();
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return sipConvertFromInstance(sipRes,sipClass_Nucleotide,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_NucleicAcid,sipNm_BALL_get5Prime);

    return NULL;
}


extern "C" {static PyObject *meth_NucleicAcid_setID(PyObject *, PyObject *);}
static PyObject *meth_NucleicAcid_setID(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const String * a0;
        int a0State = 0;
        NucleicAcid *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ1",&sipSelf,sipClass_NucleicAcid,&sipCpp,sipClass_String,&a0,&a0State))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_NucleicAcid,sipNm_BALL_setID);

    return NULL;
}


extern "C" {static PyObject *meth_NucleicAcid_getID(PyObject *, PyObject *);}
static PyObject *meth_NucleicAcid_getID(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        NucleicAcid *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_NucleicAcid,&sipCpp))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_NucleicAcid,sipNm_BALL_getID);

    return NULL;
}


extern "C" {static PyObject *meth_NucleicAcid_countNucleotides(PyObject *, PyObject *);}
static PyObject *meth_NucleicAcid_countNucleotides(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        NucleicAcid *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_NucleicAcid,&sipCpp))
        {
            int sipRes;

            try
            {
            sipRes = sipCpp->countNucleotides();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_NucleicAcid,sipNm_BALL_countNucleotides);

    return NULL;
}


extern "C" {static PyObject *meth_NucleicAcid_isValid(PyObject *, PyObject *);}
static PyObject *meth_NucleicAcid_isValid(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        NucleicAcid *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_NucleicAcid,&sipCpp))
        {
            bool sipRes;

            sipRes = (sipSelfWasArg ? sipCpp->NucleicAcid::isValid() : sipCpp->isValid());

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_NucleicAcid,sipNm_BALL_isValid);

    return NULL;
}


extern "C" {static PyObject *slot_NucleicAcid___repr__(PyObject *sipSelf);}
static PyObject *slot_NucleicAcid___repr__(PyObject *sipSelf)
{
    NucleicAcid *sipCpp = reinterpret_cast<NucleicAcid *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_NucleicAcid));

    if (!sipCpp)
        return 0;


    {
        {
            PyObject * sipRes = 0;

#line 56 "nucleicAcid.sip"
	sipRes = PyString_FromString(String(String("NucleicAcid ") + sipCpp->getName() 
							+ " { " + String(sipCpp->countNucleotides()) + " nucleotides,  " 
							+ String(sipCpp->countAtoms()) + " atoms }").c_str());
#line 547 "sipBALLNucleicAcid.C"

            return sipRes;
        }
    }
}


extern "C" {static PyObject *slot_NucleicAcid___str__(PyObject *sipSelf);}
static PyObject *slot_NucleicAcid___str__(PyObject *sipSelf)
{
    NucleicAcid *sipCpp = reinterpret_cast<NucleicAcid *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_NucleicAcid));

    if (!sipCpp)
        return 0;


    {
        {
            PyObject * sipRes = 0;

#line 49 "nucleicAcid.sip"
	sipRes = PyString_FromString(String(String("NucleicAcid ") + sipCpp->getName() 
							+ " { " + String(sipCpp->countNucleotides()) + " nucleotides,  " 
							+ String(sipCpp->countAtoms()) + " atoms }").c_str());
#line 572 "sipBALLNucleicAcid.C"

            return sipRes;
        }
    }
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_NucleicAcid(void *, sipWrapperType *);}
static void *cast_NucleicAcid(void *ptr,sipWrapperType *targetClass)
{
    void *res;

    if (targetClass == sipClass_NucleicAcid)
        return ptr;

    if ((res = sipCast_Molecule((Molecule *)(NucleicAcid *)ptr,targetClass)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_NucleicAcid(void *, int);}
static void release_NucleicAcid(void *ptr,int state)
{
    if (state & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipNucleicAcid *>(ptr);
    else
        delete reinterpret_cast<NucleicAcid *>(ptr);
}


extern "C" {static void dealloc_NucleicAcid(sipWrapper *);}
static void dealloc_NucleicAcid(sipWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipNucleicAcid *>(sipSelf->u.cppPtr)->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_NucleicAcid(sipSelf->u.cppPtr,sipSelf->flags);
    }
}


extern "C" {static void *init_NucleicAcid(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_NucleicAcid(sipWrapper *sipSelf,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    sipNucleicAcid *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            try
            {
            sipCpp = new sipNucleicAcid();
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
        const NucleicAcid * a0;
        bool a1 = 1;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA|b",sipClass_NucleicAcid,&a0,&a1))
        {
            try
            {
            sipCpp = new sipNucleicAcid(*a0,a1);
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
            sipCpp = new sipNucleicAcid(*a0,*a1);
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
        const NucleicAcid * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_NucleicAcid,&a0))
        {
            try
            {
            sipCpp = new sipNucleicAcid(*a0);
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


extern "C" {static void *forceConvertTo_NucleicAcid(PyObject *, int *);}
static void *forceConvertTo_NucleicAcid(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_NucleicAcid))
        return sipConvertToCpp(valobj,sipClass_NucleicAcid,iserrp);

    sipBadClass(sipNm_BALL_NucleicAcid);

    *iserrp = 1;

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedClassDef supers_NucleicAcid[] = {{229, 255, 1}};


/* Define this type's Python slots. */
static sipPySlotDef slots_NucleicAcid[] = {
    {(void *)slot_NucleicAcid___repr__, repr_slot},
    {(void *)slot_NucleicAcid___str__, str_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_NucleicAcid[] = {
    {sipNm_BALL_clear, meth_NucleicAcid_clear, METH_VARARGS, NULL},
    {sipNm_BALL_countNucleotides, meth_NucleicAcid_countNucleotides, METH_VARARGS, NULL},
    {sipNm_BALL_destroy, meth_NucleicAcid_destroy, METH_VARARGS, NULL},
    {sipNm_BALL_get, meth_NucleicAcid_get, METH_VARARGS, NULL},
    {sipNm_BALL_get3Prime, meth_NucleicAcid_get3Prime, METH_VARARGS, NULL},
    {sipNm_BALL_get5Prime, meth_NucleicAcid_get5Prime, METH_VARARGS, NULL},
    {sipNm_BALL_getID, meth_NucleicAcid_getID, METH_VARARGS, NULL},
    {sipNm_BALL_getNucleotide, meth_NucleicAcid_getNucleotide, METH_VARARGS, NULL},
    {sipNm_BALL_isValid, meth_NucleicAcid_isValid, METH_VARARGS, NULL},
    {sipNm_BALL_set, meth_NucleicAcid_set, METH_VARARGS, NULL},
    {sipNm_BALL_setID, meth_NucleicAcid_setID, METH_VARARGS, NULL},
    {sipNm_BALL_swap, meth_NucleicAcid_swap, METH_VARARGS, NULL}
};


sipTypeDef sipType_BALL_NucleicAcid = {
    0,
    0,
    "BALL.NucleicAcid",
    0,
    {0, 0, 1},
    supers_NucleicAcid,
    slots_NucleicAcid,
    12, methods_NucleicAcid,
    0, 0,
    0,
    init_NucleicAcid,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_NucleicAcid,
    cast_NucleicAcid,
    release_NucleicAcid,
    forceConvertTo_NucleicAcid,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
