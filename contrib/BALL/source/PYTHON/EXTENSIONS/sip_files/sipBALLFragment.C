/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLFragment.h"

#include "sipBALLAtomContainer.h"
#include "sipBALLString.h"
#include "sipBALLFragment.h"
#include "sipBALLAtomProcessor.h"
#include "sipBALLCompositeProcessor.h"
#include "sipBALLFragmentProcessor.h"
#include "sipBALLResidueProcessor.h"
#include "sipBALLAtom.h"
#include "sipBALLComposite.h"
#include "sipBALLPosition.h"
#include "sipBALLPreciseTime.h"
#include "sipBALLIndex.h"
#include "sipBALLObject.h"
#include "sipBALLSelectable.h"
#include "sipBALLPropertyManager.h"
#include "sipBALLNamedProperty.h"
#include "sipBALLPersistentObject.h"


sipFragment::sipFragment(): Fragment(), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,5);
}

sipFragment::sipFragment(const Fragment& a0,bool a1): Fragment(a0,a1), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,5);
}

sipFragment::sipFragment(const String& a0): Fragment(a0), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,5);
}

sipFragment::sipFragment(const Fragment& a0): Fragment(a0), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,5);
}

sipFragment::~sipFragment() throw()
{
    sipCommonDtor(sipPySelf);
}

void sipFragment::clear() throw()
{
    extern void sipVH_BALL_0(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipNm_BALL_clear);

    if (!meth)
    {
        AtomContainer::clear();
        return;
    }

    sipVH_BALL_0(sipGILState,meth);
}

void sipFragment::destroy() throw()
{
    extern void sipVH_BALL_0(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,NULL,sipNm_BALL_destroy);

    if (!meth)
    {
        AtomContainer::destroy();
        return;
    }

    sipVH_BALL_0(sipGILState,meth);
}

bool sipFragment::isValid() const throw()
{
    extern bool sipVH_BALL_4(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<sipMethodCache *>(&sipPyMethods[2]),sipPySelf,NULL,sipNm_BALL_isValid);

    if (!meth)
        return AtomContainer::isValid();

    return sipVH_BALL_4(sipGILState,meth);
}

void sipFragment::select() throw()
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

void sipFragment::deselect() throw()
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


extern "C" {static PyObject *slot_Fragment___str__(PyObject *sipSelf);}
static PyObject *slot_Fragment___str__(PyObject *sipSelf)
{
    Fragment *sipCpp = reinterpret_cast<Fragment *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_Fragment));

    if (!sipCpp)
        return 0;


    {
        {
            PyObject * sipRes = 0;

#line 34 "fragment.sip"
	sipRes = PyString_FromString(String(String("Fragment ") + sipCpp->getName()
    			    + " { " + String(sipCpp->countAtoms()) + " atoms }").c_str());
#line 162 "sipBALLFragment.C"

            return sipRes;
        }
    }
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_Fragment(void *, sipWrapperType *);}
static void *cast_Fragment(void *ptr,sipWrapperType *targetClass)
{
    void *res;

    if (targetClass == sipClass_Fragment)
        return ptr;

    if ((res = sipCast_AtomContainer((AtomContainer *)(Fragment *)ptr,targetClass)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_Fragment(void *, int);}
static void release_Fragment(void *ptr,int state)
{
    if (state & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipFragment *>(ptr);
    else
        delete reinterpret_cast<Fragment *>(ptr);
}


extern "C" {static void dealloc_Fragment(sipWrapper *);}
static void dealloc_Fragment(sipWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipFragment *>(sipSelf->u.cppPtr)->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_Fragment(sipSelf->u.cppPtr,sipSelf->flags);
    }
}


extern "C" {static void *init_Fragment(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_Fragment(sipWrapper *sipSelf,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    sipFragment *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            try
            {
            sipCpp = new sipFragment();
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
        const Fragment * a0;
        bool a1 = 1;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA|b",sipClass_Fragment,&a0,&a1))
        {
            try
            {
            sipCpp = new sipFragment(*a0,a1);
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
            sipCpp = new sipFragment(*a0);
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
        const Fragment * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_Fragment,&a0))
        {
            try
            {
            sipCpp = new sipFragment(*a0);
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


extern "C" {static void *forceConvertTo_Fragment(PyObject *, int *);}
static void *forceConvertTo_Fragment(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_Fragment))
        return sipConvertToCpp(valobj,sipClass_Fragment,iserrp);

    sipBadClass(sipNm_BALL_Fragment);

    *iserrp = 1;

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedClassDef supers_Fragment[] = {{226, 255, 1}};


/* Define this type's Python slots. */
static sipPySlotDef slots_Fragment[] = {
    {(void *)slot_Fragment___str__, str_slot},
    {0, (sipPySlotType)0}
};

static sipEnumMemberDef enummembers_Fragment[] = {
    {sipNm_BALL_NUMBER_OF_PROPERTIES, Fragment::NUMBER_OF_PROPERTIES, 25},
};


sipTypeDef sipType_BALL_Fragment = {
    0,
    0,
    "BALL.Fragment",
    0,
    {0, 0, 1},
    supers_Fragment,
    slots_Fragment,
    0, 0,
    1, enummembers_Fragment,
    0,
    init_Fragment,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_Fragment,
    cast_Fragment,
    release_Fragment,
    forceConvertTo_Fragment,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
