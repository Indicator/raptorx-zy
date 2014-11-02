/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLComposite.h"

#include "sipBALLPersistentObject.h"
#include "sipBALLObject.h"
#include "sipBALLSelectable.h"
#include "sipBALLComposite.h"
#include "sipBALLPreciseTime.h"
#include "sipBALLIndex.h"


sipComposite::sipComposite(): Composite(), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,5);
}

sipComposite::sipComposite(const Composite& a0,bool a1): Composite(a0,a1), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,5);
}

sipComposite::sipComposite(const Composite& a0): Composite(a0), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,5);
}

sipComposite::~sipComposite() throw()
{
    sipCommonDtor(sipPySelf);
}

void sipComposite::clear() throw()
{
    extern void sipVH_BALL_0(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipNm_BALL_clear);

    if (!meth)
    {
        Composite::clear();
        return;
    }

    sipVH_BALL_0(sipGILState,meth);
}

void sipComposite::destroy() throw()
{
    extern void sipVH_BALL_0(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,NULL,sipNm_BALL_destroy);

    if (!meth)
    {
        Composite::destroy();
        return;
    }

    sipVH_BALL_0(sipGILState,meth);
}

void sipComposite::select() throw()
{
    extern void sipVH_BALL_0(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[2],sipPySelf,NULL,sipNm_BALL_select);

    if (!meth)
    {
        Composite::select();
        return;
    }

    sipVH_BALL_0(sipGILState,meth);
}

void sipComposite::deselect() throw()
{
    extern void sipVH_BALL_0(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[3],sipPySelf,NULL,sipNm_BALL_deselect);

    if (!meth)
    {
        Composite::deselect();
        return;
    }

    sipVH_BALL_0(sipGILState,meth);
}

bool sipComposite::isValid() const throw()
{
    extern bool sipVH_BALL_4(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<sipMethodCache *>(&sipPyMethods[4]),sipPySelf,NULL,sipNm_BALL_isValid);

    if (!meth)
        return Composite::isValid();

    return sipVH_BALL_4(sipGILState,meth);
}


extern "C" {static PyObject *meth_Composite_clear(PyObject *, PyObject *);}
static PyObject *meth_Composite_clear(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        Composite *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Composite,&sipCpp))
        {
            (sipSelfWasArg ? sipCpp->Composite::clear() : sipCpp->clear());

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Composite,sipNm_BALL_clear);

    return NULL;
}


extern "C" {static PyObject *meth_Composite_destroy(PyObject *, PyObject *);}
static PyObject *meth_Composite_destroy(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        Composite *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Composite,&sipCpp))
        {
            (sipSelfWasArg ? sipCpp->Composite::destroy() : sipCpp->destroy());

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    {
        bool a0;
        Composite *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bb",&sipSelf,sipClass_Composite,&sipCpp,&a0))
        {
            try
            {
            sipCpp->destroy(a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Composite,sipNm_BALL_destroy);

    return NULL;
}


extern "C" {static PyObject *meth_Composite_set(PyObject *, PyObject *);}
static PyObject *meth_Composite_set(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const Composite * a0;
        bool a1 = 1;
        Composite *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA|b",&sipSelf,sipClass_Composite,&sipCpp,sipClass_Composite,&a0,&a1))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Composite,sipNm_BALL_set);

    return NULL;
}


extern "C" {static PyObject *meth_Composite_get(PyObject *, PyObject *);}
static PyObject *meth_Composite_get(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Composite * a0;
        bool a1 = 1;
        Composite *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA|b",&sipSelf,sipClass_Composite,&sipCpp,sipClass_Composite,&a0,&a1))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Composite,sipNm_BALL_get);

    return NULL;
}


extern "C" {static PyObject *meth_Composite_getDegree(PyObject *, PyObject *);}
static PyObject *meth_Composite_getDegree(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Composite *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Composite,&sipCpp))
        {
            int sipRes;

            try
            {
            sipRes = sipCpp->getDegree();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Composite,sipNm_BALL_getDegree);

    return NULL;
}


extern "C" {static PyObject *meth_Composite_countDescendants(PyObject *, PyObject *);}
static PyObject *meth_Composite_countDescendants(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Composite *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Composite,&sipCpp))
        {
            int sipRes;

            try
            {
            sipRes = sipCpp->countDescendants();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Composite,sipNm_BALL_countDescendants);

    return NULL;
}


extern "C" {static PyObject *meth_Composite_getPathLength(PyObject *, PyObject *);}
static PyObject *meth_Composite_getPathLength(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const Composite * a0;
        Composite *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_Composite,&sipCpp,sipClass_Composite,&a0))
        {
            int sipRes;

            try
            {
            sipRes = sipCpp->getPathLength(*a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Composite,sipNm_BALL_getPathLength);

    return NULL;
}


extern "C" {static PyObject *meth_Composite_getDepth(PyObject *, PyObject *);}
static PyObject *meth_Composite_getDepth(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Composite *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Composite,&sipCpp))
        {
            int sipRes;

            try
            {
            sipRes = sipCpp->getDepth();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Composite,sipNm_BALL_getDepth);

    return NULL;
}


extern "C" {static PyObject *meth_Composite_getHeight(PyObject *, PyObject *);}
static PyObject *meth_Composite_getHeight(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Composite *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Composite,&sipCpp))
        {
            int sipRes;

            try
            {
            sipRes = sipCpp->getHeight();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Composite,sipNm_BALL_getHeight);

    return NULL;
}


extern "C" {static PyObject *meth_Composite_getRoot(PyObject *, PyObject *);}
static PyObject *meth_Composite_getRoot(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Composite *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Composite,&sipCpp))
        {
            Composite *sipRes;

            try
            {
            sipRes = &sipCpp->getRoot();
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return sipConvertFromInstance(sipRes,sipClass_Composite,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Composite,sipNm_BALL_getRoot);

    return NULL;
}


extern "C" {static PyObject *meth_Composite_getLowestCommonAncestor(PyObject *, PyObject *);}
static PyObject *meth_Composite_getLowestCommonAncestor(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Composite * a0;
        Composite *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_Composite,&sipCpp,sipClass_Composite,&a0))
        {
            Composite *sipRes;

            try
            {
            sipRes = sipCpp->getLowestCommonAncestor(*a0);
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return sipConvertFromInstance(sipRes,sipClass_Composite,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Composite,sipNm_BALL_getLowestCommonAncestor);

    return NULL;
}


extern "C" {static PyObject *meth_Composite_getParent(PyObject *, PyObject *);}
static PyObject *meth_Composite_getParent(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Composite *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Composite,&sipCpp))
        {
            Composite *sipRes;

            try
            {
            sipRes = sipCpp->getParent();
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return sipConvertFromInstance(sipRes,sipClass_Composite,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Composite,sipNm_BALL_getParent);

    return NULL;
}


extern "C" {static PyObject *meth_Composite_getChild(PyObject *, PyObject *);}
static PyObject *meth_Composite_getChild(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Index * a0;
        int a0State = 0;
        Composite *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BM1",&sipSelf,sipClass_Composite,&sipCpp,sipMappedType_Index,&a0,&a0State))
        {
            Composite *sipRes;

            try
            {
            sipRes = sipCpp->getChild(*a0);
            }
            catch (...)
            {

            sipReleaseMappedType(a0,sipMappedType_Index,a0State);
                sipRaiseUnknownException();
                return NULL;
            }

            sipReleaseMappedType(a0,sipMappedType_Index,a0State);

            return sipConvertFromInstance(sipRes,sipClass_Composite,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Composite,sipNm_BALL_getChild);

    return NULL;
}


extern "C" {static PyObject *meth_Composite_getSibling(PyObject *, PyObject *);}
static PyObject *meth_Composite_getSibling(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Index * a0;
        int a0State = 0;
        Composite *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BM1",&sipSelf,sipClass_Composite,&sipCpp,sipMappedType_Index,&a0,&a0State))
        {
            Composite *sipRes;

            try
            {
            sipRes = sipCpp->getSibling(*a0);
            }
            catch (...)
            {

            sipReleaseMappedType(a0,sipMappedType_Index,a0State);
                sipRaiseUnknownException();
                return NULL;
            }

            sipReleaseMappedType(a0,sipMappedType_Index,a0State);

            return sipConvertFromInstance(sipRes,sipClass_Composite,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Composite,sipNm_BALL_getSibling);

    return NULL;
}


extern "C" {static PyObject *meth_Composite_getFirstChild(PyObject *, PyObject *);}
static PyObject *meth_Composite_getFirstChild(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Composite *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Composite,&sipCpp))
        {
            Composite *sipRes;

            try
            {
            sipRes = sipCpp->getFirstChild();
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return sipConvertFromInstance(sipRes,sipClass_Composite,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Composite,sipNm_BALL_getFirstChild);

    return NULL;
}


extern "C" {static PyObject *meth_Composite_getLastChild(PyObject *, PyObject *);}
static PyObject *meth_Composite_getLastChild(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Composite *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Composite,&sipCpp))
        {
            Composite *sipRes;

            try
            {
            sipRes = sipCpp->getLastChild();
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return sipConvertFromInstance(sipRes,sipClass_Composite,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Composite,sipNm_BALL_getLastChild);

    return NULL;
}


extern "C" {static PyObject *meth_Composite_getModificationTime(PyObject *, PyObject *);}
static PyObject *meth_Composite_getModificationTime(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Composite *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Composite,&sipCpp))
        {
            const PreciseTime *sipRes;

            sipRes = &sipCpp->getModificationTime();

            return sipConvertFromInstance(const_cast<PreciseTime *>(sipRes),sipClass_PreciseTime,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Composite,sipNm_BALL_getModificationTime);

    return NULL;
}


extern "C" {static PyObject *meth_Composite_getSelectionTime(PyObject *, PyObject *);}
static PyObject *meth_Composite_getSelectionTime(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Composite *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Composite,&sipCpp))
        {
            const PreciseTime *sipRes;

            sipRes = &sipCpp->getSelectionTime();

            return sipConvertFromInstance(const_cast<PreciseTime *>(sipRes),sipClass_PreciseTime,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Composite,sipNm_BALL_getSelectionTime);

    return NULL;
}


extern "C" {static PyObject *meth_Composite_prependChild(PyObject *, PyObject *);}
static PyObject *meth_Composite_prependChild(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Composite * a0;
        Composite *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJC",&sipSelf,sipClass_Composite,&sipCpp,sipClass_Composite,&a0))
        {
            try
            {
            sipCpp->prependChild(*a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Composite,sipNm_BALL_prependChild);

    return NULL;
}


extern "C" {static PyObject *meth_Composite_appendChild(PyObject *, PyObject *);}
static PyObject *meth_Composite_appendChild(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Composite * a0;
        Composite *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJC",&sipSelf,sipClass_Composite,&sipCpp,sipClass_Composite,&a0))
        {
            try
            {
            sipCpp->appendChild(*a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Composite,sipNm_BALL_appendChild);

    return NULL;
}


extern "C" {static PyObject *meth_Composite_insertParent(PyObject *, PyObject *);}
static PyObject *meth_Composite_insertParent(PyObject *,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Composite * a0;
        Composite * a1;
        Composite * a2;
        bool a3 = 1;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"JAJAJA|b",sipClass_Composite,&a0,sipClass_Composite,&a1,sipClass_Composite,&a2,&a3))
        {
            bool sipRes;

            try
            {
            sipRes = Composite::insertParent(*a0,*a1,*a2,a3);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Composite,sipNm_BALL_insertParent);

    return NULL;
}


extern "C" {static PyObject *meth_Composite_insertBefore(PyObject *, PyObject *);}
static PyObject *meth_Composite_insertBefore(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Composite * a0;
        Composite *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJC",&sipSelf,sipClass_Composite,&sipCpp,sipClass_Composite,&a0))
        {
            try
            {
            sipCpp->insertBefore(*a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Composite,sipNm_BALL_insertBefore);

    return NULL;
}


extern "C" {static PyObject *meth_Composite_insertAfter(PyObject *, PyObject *);}
static PyObject *meth_Composite_insertAfter(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Composite * a0;
        Composite *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJC",&sipSelf,sipClass_Composite,&sipCpp,sipClass_Composite,&a0))
        {
            try
            {
            sipCpp->insertAfter(*a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Composite,sipNm_BALL_insertAfter);

    return NULL;
}


extern "C" {static PyObject *meth_Composite_spliceBefore(PyObject *, PyObject *);}
static PyObject *meth_Composite_spliceBefore(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Composite * a0;
        Composite *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_Composite,&sipCpp,sipClass_Composite,&a0))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Composite,sipNm_BALL_spliceBefore);

    return NULL;
}


extern "C" {static PyObject *meth_Composite_spliceAfter(PyObject *, PyObject *);}
static PyObject *meth_Composite_spliceAfter(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Composite * a0;
        Composite *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_Composite,&sipCpp,sipClass_Composite,&a0))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Composite,sipNm_BALL_spliceAfter);

    return NULL;
}


extern "C" {static PyObject *meth_Composite_splice(PyObject *, PyObject *);}
static PyObject *meth_Composite_splice(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Composite * a0;
        Composite *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_Composite,&sipCpp,sipClass_Composite,&a0))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Composite,sipNm_BALL_splice);

    return NULL;
}


extern "C" {static PyObject *meth_Composite_removeChild(PyObject *, PyObject *);}
static PyObject *meth_Composite_removeChild(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Composite * a0;
        Composite *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_Composite,&sipCpp,sipClass_Composite,&a0))
        {
            bool sipRes;

            try
            {
            sipRes = sipCpp->removeChild(*a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Composite,sipNm_BALL_removeChild);

    return NULL;
}


extern "C" {static PyObject *meth_Composite_removeSelected(PyObject *, PyObject *);}
static PyObject *meth_Composite_removeSelected(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Composite *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Composite,&sipCpp))
        {
            bool sipRes;

            try
            {
            sipRes = sipCpp->removeSelected();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Composite,sipNm_BALL_removeSelected);

    return NULL;
}


extern "C" {static PyObject *meth_Composite_replace(PyObject *, PyObject *);}
static PyObject *meth_Composite_replace(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Composite * a0;
        Composite *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_Composite,&sipCpp,sipClass_Composite,&a0))
        {
            try
            {
            sipCpp->replace(*a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Composite,sipNm_BALL_replace);

    return NULL;
}


extern "C" {static PyObject *meth_Composite_swap(PyObject *, PyObject *);}
static PyObject *meth_Composite_swap(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Composite * a0;
        Composite *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_Composite,&sipCpp,sipClass_Composite,&a0))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Composite,sipNm_BALL_swap);

    return NULL;
}


extern "C" {static PyObject *meth_Composite_select(PyObject *, PyObject *);}
static PyObject *meth_Composite_select(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        Composite *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Composite,&sipCpp))
        {
            (sipSelfWasArg ? sipCpp->Composite::select() : sipCpp->select());

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Composite,sipNm_BALL_select);

    return NULL;
}


extern "C" {static PyObject *meth_Composite_deselect(PyObject *, PyObject *);}
static PyObject *meth_Composite_deselect(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        Composite *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Composite,&sipCpp))
        {
            (sipSelfWasArg ? sipCpp->Composite::deselect() : sipCpp->deselect());

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Composite,sipNm_BALL_deselect);

    return NULL;
}


extern "C" {static PyObject *meth_Composite_isEmpty(PyObject *, PyObject *);}
static PyObject *meth_Composite_isEmpty(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Composite *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Composite,&sipCpp))
        {
            bool sipRes;

            try
            {
            sipRes = sipCpp->isEmpty();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Composite,sipNm_BALL_isEmpty);

    return NULL;
}


extern "C" {static PyObject *meth_Composite_isRoot(PyObject *, PyObject *);}
static PyObject *meth_Composite_isRoot(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Composite *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Composite,&sipCpp))
        {
            bool sipRes;

            try
            {
            sipRes = sipCpp->isRoot();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Composite,sipNm_BALL_isRoot);

    return NULL;
}


extern "C" {static PyObject *meth_Composite_isRootOf(PyObject *, PyObject *);}
static PyObject *meth_Composite_isRootOf(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const Composite * a0;
        Composite *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_Composite,&sipCpp,sipClass_Composite,&a0))
        {
            bool sipRes;

            try
            {
            sipRes = sipCpp->isRootOf(*a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Composite,sipNm_BALL_isRootOf);

    return NULL;
}


extern "C" {static PyObject *meth_Composite_isInterior(PyObject *, PyObject *);}
static PyObject *meth_Composite_isInterior(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Composite *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Composite,&sipCpp))
        {
            bool sipRes;

            try
            {
            sipRes = sipCpp->isInterior();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Composite,sipNm_BALL_isInterior);

    return NULL;
}


extern "C" {static PyObject *meth_Composite_hasChild(PyObject *, PyObject *);}
static PyObject *meth_Composite_hasChild(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Composite *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Composite,&sipCpp))
        {
            bool sipRes;

            try
            {
            sipRes = sipCpp->hasChild();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Composite,sipNm_BALL_hasChild);

    return NULL;
}


extern "C" {static PyObject *meth_Composite_isChildOf(PyObject *, PyObject *);}
static PyObject *meth_Composite_isChildOf(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const Composite * a0;
        Composite *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_Composite,&sipCpp,sipClass_Composite,&a0))
        {
            bool sipRes;

            try
            {
            sipRes = sipCpp->isChildOf(*a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Composite,sipNm_BALL_isChildOf);

    return NULL;
}


extern "C" {static PyObject *meth_Composite_isFirstChild(PyObject *, PyObject *);}
static PyObject *meth_Composite_isFirstChild(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Composite *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Composite,&sipCpp))
        {
            bool sipRes;

            try
            {
            sipRes = sipCpp->isFirstChild();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Composite,sipNm_BALL_isFirstChild);

    return NULL;
}


extern "C" {static PyObject *meth_Composite_isFirstChildOf(PyObject *, PyObject *);}
static PyObject *meth_Composite_isFirstChildOf(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const Composite * a0;
        Composite *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_Composite,&sipCpp,sipClass_Composite,&a0))
        {
            bool sipRes;

            try
            {
            sipRes = sipCpp->isFirstChildOf(*a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Composite,sipNm_BALL_isFirstChildOf);

    return NULL;
}


extern "C" {static PyObject *meth_Composite_isLastChild(PyObject *, PyObject *);}
static PyObject *meth_Composite_isLastChild(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Composite *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Composite,&sipCpp))
        {
            bool sipRes;

            try
            {
            sipRes = sipCpp->isLastChild();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Composite,sipNm_BALL_isLastChild);

    return NULL;
}


extern "C" {static PyObject *meth_Composite_isLastChildOf(PyObject *, PyObject *);}
static PyObject *meth_Composite_isLastChildOf(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const Composite * a0;
        Composite *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_Composite,&sipCpp,sipClass_Composite,&a0))
        {
            bool sipRes;

            try
            {
            sipRes = sipCpp->isLastChildOf(*a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Composite,sipNm_BALL_isLastChildOf);

    return NULL;
}


extern "C" {static PyObject *meth_Composite_hasParent(PyObject *, PyObject *);}
static PyObject *meth_Composite_hasParent(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Composite *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Composite,&sipCpp))
        {
            bool sipRes;

            try
            {
            sipRes = sipCpp->hasParent();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Composite,sipNm_BALL_hasParent);

    return NULL;
}


extern "C" {static PyObject *meth_Composite_isParentOf(PyObject *, PyObject *);}
static PyObject *meth_Composite_isParentOf(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const Composite * a0;
        Composite *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_Composite,&sipCpp,sipClass_Composite,&a0))
        {
            bool sipRes;

            try
            {
            sipRes = sipCpp->isParentOf(*a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Composite,sipNm_BALL_isParentOf);

    return NULL;
}


extern "C" {static PyObject *meth_Composite_hasSibling(PyObject *, PyObject *);}
static PyObject *meth_Composite_hasSibling(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Composite *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Composite,&sipCpp))
        {
            bool sipRes;

            try
            {
            sipRes = sipCpp->hasSibling();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Composite,sipNm_BALL_hasSibling);

    return NULL;
}


extern "C" {static PyObject *meth_Composite_isSiblingOf(PyObject *, PyObject *);}
static PyObject *meth_Composite_isSiblingOf(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const Composite * a0;
        Composite *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_Composite,&sipCpp,sipClass_Composite,&a0))
        {
            bool sipRes;

            try
            {
            sipRes = sipCpp->isSiblingOf(*a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Composite,sipNm_BALL_isSiblingOf);

    return NULL;
}


extern "C" {static PyObject *meth_Composite_hasPreviousSibling(PyObject *, PyObject *);}
static PyObject *meth_Composite_hasPreviousSibling(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Composite *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Composite,&sipCpp))
        {
            bool sipRes;

            try
            {
            sipRes = sipCpp->hasPreviousSibling();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Composite,sipNm_BALL_hasPreviousSibling);

    return NULL;
}


extern "C" {static PyObject *meth_Composite_isPreviousSiblingOf(PyObject *, PyObject *);}
static PyObject *meth_Composite_isPreviousSiblingOf(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const Composite * a0;
        Composite *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_Composite,&sipCpp,sipClass_Composite,&a0))
        {
            bool sipRes;

            try
            {
            sipRes = sipCpp->isPreviousSiblingOf(*a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Composite,sipNm_BALL_isPreviousSiblingOf);

    return NULL;
}


extern "C" {static PyObject *meth_Composite_hasNextSibling(PyObject *, PyObject *);}
static PyObject *meth_Composite_hasNextSibling(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Composite *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Composite,&sipCpp))
        {
            bool sipRes;

            try
            {
            sipRes = sipCpp->hasNextSibling();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Composite,sipNm_BALL_hasNextSibling);

    return NULL;
}


extern "C" {static PyObject *meth_Composite_isNextSiblingOf(PyObject *, PyObject *);}
static PyObject *meth_Composite_isNextSiblingOf(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const Composite * a0;
        Composite *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_Composite,&sipCpp,sipClass_Composite,&a0))
        {
            bool sipRes;

            try
            {
            sipRes = sipCpp->isNextSiblingOf(*a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Composite,sipNm_BALL_isNextSiblingOf);

    return NULL;
}


extern "C" {static PyObject *meth_Composite_isDescendantOf(PyObject *, PyObject *);}
static PyObject *meth_Composite_isDescendantOf(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const Composite * a0;
        Composite *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_Composite,&sipCpp,sipClass_Composite,&a0))
        {
            bool sipRes;

            try
            {
            sipRes = sipCpp->isDescendantOf(*a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Composite,sipNm_BALL_isDescendantOf);

    return NULL;
}


extern "C" {static PyObject *meth_Composite_isAncestorOf(PyObject *, PyObject *);}
static PyObject *meth_Composite_isAncestorOf(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const Composite * a0;
        Composite *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_Composite,&sipCpp,sipClass_Composite,&a0))
        {
            bool sipRes;

            try
            {
            sipRes = sipCpp->isAncestorOf(*a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Composite,sipNm_BALL_isAncestorOf);

    return NULL;
}


extern "C" {static PyObject *meth_Composite_isRelatedWith(PyObject *, PyObject *);}
static PyObject *meth_Composite_isRelatedWith(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const Composite * a0;
        Composite *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_Composite,&sipCpp,sipClass_Composite,&a0))
        {
            bool sipRes;

            try
            {
            sipRes = sipCpp->isRelatedWith(*a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Composite,sipNm_BALL_isRelatedWith);

    return NULL;
}


extern "C" {static PyObject *meth_Composite_isHomomorph(PyObject *, PyObject *);}
static PyObject *meth_Composite_isHomomorph(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const Composite * a0;
        Composite *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_Composite,&sipCpp,sipClass_Composite,&a0))
        {
            bool sipRes;

            try
            {
            sipRes = sipCpp->isHomomorph(*a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Composite,sipNm_BALL_isHomomorph);

    return NULL;
}


extern "C" {static PyObject *meth_Composite_containsSelection(PyObject *, PyObject *);}
static PyObject *meth_Composite_containsSelection(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Composite *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Composite,&sipCpp))
        {
            bool sipRes;

            try
            {
            sipRes = sipCpp->containsSelection();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Composite,sipNm_BALL_containsSelection);

    return NULL;
}


extern "C" {static PyObject *meth_Composite_isValid(PyObject *, PyObject *);}
static PyObject *meth_Composite_isValid(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        Composite *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Composite,&sipCpp))
        {
            bool sipRes;

            sipRes = (sipSelfWasArg ? sipCpp->Composite::isValid() : sipCpp->isValid());

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_Composite,sipNm_BALL_isValid);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_Composite(void *, sipWrapperType *);}
static void *cast_Composite(void *ptr,sipWrapperType *targetClass)
{
    void *res;

    if (targetClass == sipClass_Composite)
        return ptr;

    if ((res = sipCast_PersistentObject((PersistentObject *)(Composite *)ptr,targetClass)) != NULL)
        return res;

    if ((res = sipCast_Object((Object *)(Composite *)ptr,targetClass)) != NULL)
        return res;

    if ((res = sipCast_Selectable((Selectable *)(Composite *)ptr,targetClass)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_Composite(void *, int);}
static void release_Composite(void *ptr,int state)
{
    if (state & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipComposite *>(ptr);
    else
        delete reinterpret_cast<Composite *>(ptr);
}


extern "C" {static void dealloc_Composite(sipWrapper *);}
static void dealloc_Composite(sipWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipComposite *>(sipSelf->u.cppPtr)->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_Composite(sipSelf->u.cppPtr,sipSelf->flags);
    }
}


extern "C" {static void *init_Composite(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_Composite(sipWrapper *sipSelf,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    sipComposite *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            try
            {
            sipCpp = new sipComposite();
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
        const Composite * a0;
        bool a1 = 1;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA|b",sipClass_Composite,&a0,&a1))
        {
            try
            {
            sipCpp = new sipComposite(*a0,a1);
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
        const Composite * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_Composite,&a0))
        {
            try
            {
            sipCpp = new sipComposite(*a0);
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


extern "C" {static void *forceConvertTo_Composite(PyObject *, int *);}
static void *forceConvertTo_Composite(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_Composite))
        return sipConvertToCpp(valobj,sipClass_Composite,iserrp);

    sipBadClass(sipNm_BALL_Composite);

    *iserrp = 1;

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedClassDef supers_Composite[] = {{220, 255, 0}, {219, 255, 0}, {218, 255, 1}};


static PyMethodDef methods_Composite[] = {
    {sipNm_BALL_appendChild, meth_Composite_appendChild, METH_VARARGS, NULL},
    {sipNm_BALL_clear, meth_Composite_clear, METH_VARARGS, NULL},
    {sipNm_BALL_containsSelection, meth_Composite_containsSelection, METH_VARARGS, NULL},
    {sipNm_BALL_countDescendants, meth_Composite_countDescendants, METH_VARARGS, NULL},
    {sipNm_BALL_deselect, meth_Composite_deselect, METH_VARARGS, NULL},
    {sipNm_BALL_destroy, meth_Composite_destroy, METH_VARARGS, NULL},
    {sipNm_BALL_get, meth_Composite_get, METH_VARARGS, NULL},
    {sipNm_BALL_getChild, meth_Composite_getChild, METH_VARARGS, NULL},
    {sipNm_BALL_getDegree, meth_Composite_getDegree, METH_VARARGS, NULL},
    {sipNm_BALL_getDepth, meth_Composite_getDepth, METH_VARARGS, NULL},
    {sipNm_BALL_getFirstChild, meth_Composite_getFirstChild, METH_VARARGS, NULL},
    {sipNm_BALL_getHeight, meth_Composite_getHeight, METH_VARARGS, NULL},
    {sipNm_BALL_getLastChild, meth_Composite_getLastChild, METH_VARARGS, NULL},
    {sipNm_BALL_getLowestCommonAncestor, meth_Composite_getLowestCommonAncestor, METH_VARARGS, NULL},
    {sipNm_BALL_getModificationTime, meth_Composite_getModificationTime, METH_VARARGS, NULL},
    {sipNm_BALL_getParent, meth_Composite_getParent, METH_VARARGS, NULL},
    {sipNm_BALL_getPathLength, meth_Composite_getPathLength, METH_VARARGS, NULL},
    {sipNm_BALL_getRoot, meth_Composite_getRoot, METH_VARARGS, NULL},
    {sipNm_BALL_getSelectionTime, meth_Composite_getSelectionTime, METH_VARARGS, NULL},
    {sipNm_BALL_getSibling, meth_Composite_getSibling, METH_VARARGS, NULL},
    {sipNm_BALL_hasChild, meth_Composite_hasChild, METH_VARARGS, NULL},
    {sipNm_BALL_hasNextSibling, meth_Composite_hasNextSibling, METH_VARARGS, NULL},
    {sipNm_BALL_hasParent, meth_Composite_hasParent, METH_VARARGS, NULL},
    {sipNm_BALL_hasPreviousSibling, meth_Composite_hasPreviousSibling, METH_VARARGS, NULL},
    {sipNm_BALL_hasSibling, meth_Composite_hasSibling, METH_VARARGS, NULL},
    {sipNm_BALL_insertAfter, meth_Composite_insertAfter, METH_VARARGS, NULL},
    {sipNm_BALL_insertBefore, meth_Composite_insertBefore, METH_VARARGS, NULL},
    {sipNm_BALL_insertParent, meth_Composite_insertParent, METH_VARARGS, NULL},
    {sipNm_BALL_isAncestorOf, meth_Composite_isAncestorOf, METH_VARARGS, NULL},
    {sipNm_BALL_isChildOf, meth_Composite_isChildOf, METH_VARARGS, NULL},
    {sipNm_BALL_isDescendantOf, meth_Composite_isDescendantOf, METH_VARARGS, NULL},
    {sipNm_BALL_isEmpty, meth_Composite_isEmpty, METH_VARARGS, NULL},
    {sipNm_BALL_isFirstChild, meth_Composite_isFirstChild, METH_VARARGS, NULL},
    {sipNm_BALL_isFirstChildOf, meth_Composite_isFirstChildOf, METH_VARARGS, NULL},
    {sipNm_BALL_isHomomorph, meth_Composite_isHomomorph, METH_VARARGS, NULL},
    {sipNm_BALL_isInterior, meth_Composite_isInterior, METH_VARARGS, NULL},
    {sipNm_BALL_isLastChild, meth_Composite_isLastChild, METH_VARARGS, NULL},
    {sipNm_BALL_isLastChildOf, meth_Composite_isLastChildOf, METH_VARARGS, NULL},
    {sipNm_BALL_isNextSiblingOf, meth_Composite_isNextSiblingOf, METH_VARARGS, NULL},
    {sipNm_BALL_isParentOf, meth_Composite_isParentOf, METH_VARARGS, NULL},
    {sipNm_BALL_isPreviousSiblingOf, meth_Composite_isPreviousSiblingOf, METH_VARARGS, NULL},
    {sipNm_BALL_isRelatedWith, meth_Composite_isRelatedWith, METH_VARARGS, NULL},
    {sipNm_BALL_isRoot, meth_Composite_isRoot, METH_VARARGS, NULL},
    {sipNm_BALL_isRootOf, meth_Composite_isRootOf, METH_VARARGS, NULL},
    {sipNm_BALL_isSiblingOf, meth_Composite_isSiblingOf, METH_VARARGS, NULL},
    {sipNm_BALL_isValid, meth_Composite_isValid, METH_VARARGS, NULL},
    {sipNm_BALL_prependChild, meth_Composite_prependChild, METH_VARARGS, NULL},
    {sipNm_BALL_removeChild, meth_Composite_removeChild, METH_VARARGS, NULL},
    {sipNm_BALL_removeSelected, meth_Composite_removeSelected, METH_VARARGS, NULL},
    {sipNm_BALL_replace, meth_Composite_replace, METH_VARARGS, NULL},
    {sipNm_BALL_select, meth_Composite_select, METH_VARARGS, NULL},
    {sipNm_BALL_set, meth_Composite_set, METH_VARARGS, NULL},
    {sipNm_BALL_splice, meth_Composite_splice, METH_VARARGS, NULL},
    {sipNm_BALL_spliceAfter, meth_Composite_spliceAfter, METH_VARARGS, NULL},
    {sipNm_BALL_spliceBefore, meth_Composite_spliceBefore, METH_VARARGS, NULL},
    {sipNm_BALL_swap, meth_Composite_swap, METH_VARARGS, NULL}
};


sipTypeDef sipType_BALL_Composite = {
    0,
    0,
    "BALL.Composite",
    0,
    {0, 0, 1},
    supers_Composite,
    0,
    56, methods_Composite,
    0, 0,
    0,
    init_Composite,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_Composite,
    cast_Composite,
    release_Composite,
    forceConvertTo_Composite,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
