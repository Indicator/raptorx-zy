/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLResourceEntry.h"

#include "sipBALLString.h"
#include "sipBALLResourceEntry.h"
#include "sipBALLPosition.h"



extern "C" {static PyObject *meth_ResourceEntry_clear(PyObject *, PyObject *);}
static PyObject *meth_ResourceEntry_clear(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        ResourceEntry *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_ResourceEntry,&sipCpp))
        {
            try
            {
            sipCpp->clear();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_ResourceEntry,sipNm_BALL_clear);

    return NULL;
}


extern "C" {static PyObject *meth_ResourceEntry_destroy(PyObject *, PyObject *);}
static PyObject *meth_ResourceEntry_destroy(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        ResourceEntry *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_ResourceEntry,&sipCpp))
        {
            try
            {
            sipCpp->destroy();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_ResourceEntry,sipNm_BALL_destroy);

    return NULL;
}


extern "C" {static PyObject *meth_ResourceEntry_set(PyObject *, PyObject *);}
static PyObject *meth_ResourceEntry_set(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const ResourceEntry * a0;
        bool a1 = 1;
        ResourceEntry *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA|b",&sipSelf,sipClass_ResourceEntry,&sipCpp,sipClass_ResourceEntry,&a0,&a1))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_ResourceEntry,sipNm_BALL_set);

    return NULL;
}


extern "C" {static PyObject *meth_ResourceEntry_get(PyObject *, PyObject *);}
static PyObject *meth_ResourceEntry_get(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        ResourceEntry * a0;
        bool a1 = 1;
        ResourceEntry *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA|b",&sipSelf,sipClass_ResourceEntry,&sipCpp,sipClass_ResourceEntry,&a0,&a1))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_ResourceEntry,sipNm_BALL_get);

    return NULL;
}


extern "C" {static PyObject *meth_ResourceEntry_getRoot(PyObject *, PyObject *);}
static PyObject *meth_ResourceEntry_getRoot(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        ResourceEntry *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_ResourceEntry,&sipCpp))
        {
            ResourceEntry *sipRes;

            try
            {
            sipRes = &sipCpp->getRoot();
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return sipConvertFromInstance(sipRes,sipClass_ResourceEntry,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_ResourceEntry,sipNm_BALL_getRoot);

    return NULL;
}


extern "C" {static PyObject *meth_ResourceEntry_getParent(PyObject *, PyObject *);}
static PyObject *meth_ResourceEntry_getParent(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        ResourceEntry *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_ResourceEntry,&sipCpp))
        {
            ResourceEntry *sipRes;

            try
            {
            sipRes = sipCpp->getParent();
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return sipConvertFromInstance(sipRes,sipClass_ResourceEntry,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_ResourceEntry,sipNm_BALL_getParent);

    return NULL;
}


extern "C" {static PyObject *meth_ResourceEntry_getChild(PyObject *, PyObject *);}
static PyObject *meth_ResourceEntry_getChild(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Position * a0;
        int a0State = 0;
        ResourceEntry *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BM1",&sipSelf,sipClass_ResourceEntry,&sipCpp,sipMappedType_Position,&a0,&a0State))
        {
            ResourceEntry *sipRes;

            try
            {
            sipRes = sipCpp->getChild(*a0);
            }
            catch (...)
            {

            sipReleaseMappedType(a0,sipMappedType_Position,a0State);
                sipRaiseUnknownException();
                return NULL;
            }

            sipReleaseMappedType(a0,sipMappedType_Position,a0State);

            return sipConvertFromInstance(sipRes,sipClass_ResourceEntry,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_ResourceEntry,sipNm_BALL_getChild);

    return NULL;
}


extern "C" {static PyObject *meth_ResourceEntry_getEntry(PyObject *, PyObject *);}
static PyObject *meth_ResourceEntry_getEntry(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const String * a0;
        int a0State = 0;
        ResourceEntry *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ1",&sipSelf,sipClass_ResourceEntry,&sipCpp,sipClass_String,&a0,&a0State))
        {
            ResourceEntry *sipRes;

            try
            {
            sipRes = sipCpp->getEntry(*a0);
            }
            catch (...)
            {

            sipReleaseInstance(const_cast<String *>(a0),sipClass_String,a0State);
                sipRaiseUnknownException();
                return NULL;
            }

            sipReleaseInstance(const_cast<String *>(a0),sipClass_String,a0State);

            return sipConvertFromInstance(sipRes,sipClass_ResourceEntry,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_ResourceEntry,sipNm_BALL_getEntry);

    return NULL;
}


extern "C" {static PyObject *meth_ResourceEntry_getKey(PyObject *, PyObject *);}
static PyObject *meth_ResourceEntry_getKey(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        ResourceEntry *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_ResourceEntry,&sipCpp))
        {
            const String *sipRes;

            try
            {
            sipRes = &sipCpp->getKey();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_ResourceEntry,sipNm_BALL_getKey);

    return NULL;
}


extern "C" {static PyObject *meth_ResourceEntry_setValue(PyObject *, PyObject *);}
static PyObject *meth_ResourceEntry_setValue(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const String * a0;
        int a0State = 0;
        ResourceEntry *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ1",&sipSelf,sipClass_ResourceEntry,&sipCpp,sipClass_String,&a0,&a0State))
        {
            try
            {
            sipCpp->setValue(*a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_ResourceEntry,sipNm_BALL_setValue);

    return NULL;
}


extern "C" {static PyObject *meth_ResourceEntry_getValue(PyObject *, PyObject *);}
static PyObject *meth_ResourceEntry_getValue(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        ResourceEntry *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_ResourceEntry,&sipCpp))
        {
            String *sipRes;

            try
            {
            sipRes = &sipCpp->getValue();
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return sipConvertFromInstance(sipRes,sipClass_String,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_ResourceEntry,sipNm_BALL_getValue);

    return NULL;
}


extern "C" {static PyObject *meth_ResourceEntry_getPath(PyObject *, PyObject *);}
static PyObject *meth_ResourceEntry_getPath(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        ResourceEntry *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_ResourceEntry,&sipCpp))
        {
            String *sipRes;

            try
            {
            sipRes = new String(sipCpp->getPath());
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_ResourceEntry,sipNm_BALL_getPath);

    return NULL;
}


extern "C" {static PyObject *meth_ResourceEntry_countChildren(PyObject *, PyObject *);}
static PyObject *meth_ResourceEntry_countChildren(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        ResourceEntry *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_ResourceEntry,&sipCpp))
        {
            int sipRes;

            try
            {
            sipRes = sipCpp->countChildren();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_ResourceEntry,sipNm_BALL_countChildren);

    return NULL;
}


extern "C" {static PyObject *meth_ResourceEntry_countDescendants(PyObject *, PyObject *);}
static PyObject *meth_ResourceEntry_countDescendants(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        ResourceEntry *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_ResourceEntry,&sipCpp))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_ResourceEntry,sipNm_BALL_countDescendants);

    return NULL;
}


extern "C" {static PyObject *meth_ResourceEntry_getSize(PyObject *, PyObject *);}
static PyObject *meth_ResourceEntry_getSize(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        ResourceEntry *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_ResourceEntry,&sipCpp))
        {
            int sipRes;

            try
            {
            sipRes = sipCpp->getSize();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_ResourceEntry,sipNm_BALL_getSize);

    return NULL;
}


extern "C" {static PyObject *meth_ResourceEntry_getDepth(PyObject *, PyObject *);}
static PyObject *meth_ResourceEntry_getDepth(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        ResourceEntry *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_ResourceEntry,&sipCpp))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_ResourceEntry,sipNm_BALL_getDepth);

    return NULL;
}


extern "C" {static PyObject *meth_ResourceEntry_insertChild(PyObject *, PyObject *);}
static PyObject *meth_ResourceEntry_insertChild(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const String * a0;
        int a0State = 0;
        const String * a1;
        int a1State = 0;
        bool a2 = 1;
        ResourceEntry *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ1J1|b",&sipSelf,sipClass_ResourceEntry,&sipCpp,sipClass_String,&a0,&a0State,sipClass_String,&a1,&a1State,&a2))
        {
            ResourceEntry *sipRes;

            try
            {
            sipRes = sipCpp->insertChild(*a0,*a1,a2);
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

            return sipConvertFromInstance(sipRes,sipClass_ResourceEntry,NULL);
        }
    }

    {
        ResourceEntry * a0;
        bool a1 = 1;
        ResourceEntry *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA|b",&sipSelf,sipClass_ResourceEntry,&sipCpp,sipClass_ResourceEntry,&a0,&a1))
        {
            ResourceEntry *sipRes;

            try
            {
            sipRes = sipCpp->insertChild(*a0,a1);
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return sipConvertFromInstance(sipRes,sipClass_ResourceEntry,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_ResourceEntry,sipNm_BALL_insertChild);

    return NULL;
}


extern "C" {static PyObject *meth_ResourceEntry_insertSibling(PyObject *, PyObject *);}
static PyObject *meth_ResourceEntry_insertSibling(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const String * a0;
        int a0State = 0;
        const String * a1;
        int a1State = 0;
        bool a2 = 1;
        ResourceEntry *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ1J1|b",&sipSelf,sipClass_ResourceEntry,&sipCpp,sipClass_String,&a0,&a0State,sipClass_String,&a1,&a1State,&a2))
        {
            ResourceEntry *sipRes;

            try
            {
            sipRes = sipCpp->insertSibling(*a0,*a1,a2);
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

            return sipConvertFromInstance(sipRes,sipClass_ResourceEntry,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_ResourceEntry,sipNm_BALL_insertSibling);

    return NULL;
}


extern "C" {static PyObject *meth_ResourceEntry_insert(PyObject *, PyObject *);}
static PyObject *meth_ResourceEntry_insert(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const String * a0;
        int a0State = 0;
        const String * a1;
        int a1State = 0;
        ResourceEntry *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ1J1",&sipSelf,sipClass_ResourceEntry,&sipCpp,sipClass_String,&a0,&a0State,sipClass_String,&a1,&a1State))
        {
            ResourceEntry *sipRes;

            try
            {
            sipRes = sipCpp->insert(*a0,*a1);
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

            return sipConvertFromInstance(sipRes,sipClass_ResourceEntry,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_ResourceEntry,sipNm_BALL_insert);

    return NULL;
}


extern "C" {static PyObject *meth_ResourceEntry_mergeChildrenOf(PyObject *, PyObject *);}
static PyObject *meth_ResourceEntry_mergeChildrenOf(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        ResourceEntry * a0;
        bool a1 = 1;
        ResourceEntry *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA|b",&sipSelf,sipClass_ResourceEntry,&sipCpp,sipClass_ResourceEntry,&a0,&a1))
        {
            bool sipRes;

            try
            {
            sipRes = sipCpp->mergeChildrenOf(*a0,a1);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_ResourceEntry,sipNm_BALL_mergeChildrenOf);

    return NULL;
}


extern "C" {static PyObject *meth_ResourceEntry_removeKey(PyObject *, PyObject *);}
static PyObject *meth_ResourceEntry_removeKey(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const String * a0;
        int a0State = 0;
        ResourceEntry *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ1",&sipSelf,sipClass_ResourceEntry,&sipCpp,sipClass_String,&a0,&a0State))
        {
            bool sipRes;

            try
            {
            sipRes = sipCpp->removeKey(*a0);
            }
            catch (...)
            {

            sipReleaseInstance(const_cast<String *>(a0),sipClass_String,a0State);
                sipRaiseUnknownException();
                return NULL;
            }

            sipReleaseInstance(const_cast<String *>(a0),sipClass_String,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_ResourceEntry,sipNm_BALL_removeKey);

    return NULL;
}


extern "C" {static PyObject *meth_ResourceEntry_findChild(PyObject *, PyObject *);}
static PyObject *meth_ResourceEntry_findChild(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const String * a0;
        int a0State = 0;
        ResourceEntry *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ1",&sipSelf,sipClass_ResourceEntry,&sipCpp,sipClass_String,&a0,&a0State))
        {
            ResourceEntry *sipRes;

            try
            {
            sipRes = sipCpp->findChild(*a0);
            }
            catch (...)
            {

            sipReleaseInstance(const_cast<String *>(a0),sipClass_String,a0State);
                sipRaiseUnknownException();
                return NULL;
            }

            sipReleaseInstance(const_cast<String *>(a0),sipClass_String,a0State);

            return sipConvertFromInstance(sipRes,sipClass_ResourceEntry,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_ResourceEntry,sipNm_BALL_findChild);

    return NULL;
}


extern "C" {static PyObject *meth_ResourceEntry_findDescendant(PyObject *, PyObject *);}
static PyObject *meth_ResourceEntry_findDescendant(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const String * a0;
        int a0State = 0;
        ResourceEntry *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ1",&sipSelf,sipClass_ResourceEntry,&sipCpp,sipClass_String,&a0,&a0State))
        {
            ResourceEntry *sipRes;

            try
            {
            sipRes = sipCpp->findDescendant(*a0);
            }
            catch (...)
            {

            sipReleaseInstance(const_cast<String *>(a0),sipClass_String,a0State);
                sipRaiseUnknownException();
                return NULL;
            }

            sipReleaseInstance(const_cast<String *>(a0),sipClass_String,a0State);

            return sipConvertFromInstance(sipRes,sipClass_ResourceEntry,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_ResourceEntry,sipNm_BALL_findDescendant);

    return NULL;
}


extern "C" {static PyObject *meth_ResourceEntry_findEntry(PyObject *, PyObject *);}
static PyObject *meth_ResourceEntry_findEntry(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const String * a0;
        int a0State = 0;
        ResourceEntry *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ1",&sipSelf,sipClass_ResourceEntry,&sipCpp,sipClass_String,&a0,&a0State))
        {
            ResourceEntry *sipRes;

            try
            {
            sipRes = sipCpp->findEntry(*a0);
            }
            catch (...)
            {

            sipReleaseInstance(const_cast<String *>(a0),sipClass_String,a0State);
                sipRaiseUnknownException();
                return NULL;
            }

            sipReleaseInstance(const_cast<String *>(a0),sipClass_String,a0State);

            return sipConvertFromInstance(sipRes,sipClass_ResourceEntry,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_ResourceEntry,sipNm_BALL_findEntry);

    return NULL;
}


extern "C" {static PyObject *meth_ResourceEntry_hasChild(PyObject *, PyObject *);}
static PyObject *meth_ResourceEntry_hasChild(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const String * a0;
        int a0State = 0;
        ResourceEntry *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ1",&sipSelf,sipClass_ResourceEntry,&sipCpp,sipClass_String,&a0,&a0State))
        {
            bool sipRes;

            try
            {
            sipRes = sipCpp->hasChild(*a0);
            }
            catch (...)
            {

            sipReleaseInstance(const_cast<String *>(a0),sipClass_String,a0State);
                sipRaiseUnknownException();
                return NULL;
            }

            sipReleaseInstance(const_cast<String *>(a0),sipClass_String,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_ResourceEntry,sipNm_BALL_hasChild);

    return NULL;
}


extern "C" {static PyObject *meth_ResourceEntry_isEmpty(PyObject *, PyObject *);}
static PyObject *meth_ResourceEntry_isEmpty(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        ResourceEntry *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_ResourceEntry,&sipCpp))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_ResourceEntry,sipNm_BALL_isEmpty);

    return NULL;
}


extern "C" {static PyObject *meth_ResourceEntry_isParentOf(PyObject *, PyObject *);}
static PyObject *meth_ResourceEntry_isParentOf(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const ResourceEntry * a0;
        ResourceEntry *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_ResourceEntry,&sipCpp,sipClass_ResourceEntry,&a0))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_ResourceEntry,sipNm_BALL_isParentOf);

    return NULL;
}


extern "C" {static PyObject *meth_ResourceEntry_isChildOf(PyObject *, PyObject *);}
static PyObject *meth_ResourceEntry_isChildOf(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const ResourceEntry * a0;
        ResourceEntry *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_ResourceEntry,&sipCpp,sipClass_ResourceEntry,&a0))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_ResourceEntry,sipNm_BALL_isChildOf);

    return NULL;
}


extern "C" {static PyObject *meth_ResourceEntry_isAncestorOf(PyObject *, PyObject *);}
static PyObject *meth_ResourceEntry_isAncestorOf(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const ResourceEntry * a0;
        ResourceEntry *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_ResourceEntry,&sipCpp,sipClass_ResourceEntry,&a0))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_ResourceEntry,sipNm_BALL_isAncestorOf);

    return NULL;
}


extern "C" {static PyObject *meth_ResourceEntry_isDescendantOf(PyObject *, PyObject *);}
static PyObject *meth_ResourceEntry_isDescendantOf(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const ResourceEntry * a0;
        ResourceEntry *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_ResourceEntry,&sipCpp,sipClass_ResourceEntry,&a0))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_ResourceEntry,sipNm_BALL_isDescendantOf);

    return NULL;
}


extern "C" {static PyObject *meth_ResourceEntry_isRelatedWith(PyObject *, PyObject *);}
static PyObject *meth_ResourceEntry_isRelatedWith(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const ResourceEntry * a0;
        ResourceEntry *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_ResourceEntry,&sipCpp,sipClass_ResourceEntry,&a0))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_ResourceEntry,sipNm_BALL_isRelatedWith);

    return NULL;
}


extern "C" {static PyObject *meth_ResourceEntry_isRoot(PyObject *, PyObject *);}
static PyObject *meth_ResourceEntry_isRoot(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        ResourceEntry *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_ResourceEntry,&sipCpp))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_ResourceEntry,sipNm_BALL_isRoot);

    return NULL;
}


extern "C" {static PyObject *meth_ResourceEntry_isValid(PyObject *, PyObject *);}
static PyObject *meth_ResourceEntry_isValid(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        ResourceEntry *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_ResourceEntry,&sipCpp))
        {
            bool sipRes;

            try
            {
            sipRes = sipCpp->isValid();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_ResourceEntry,sipNm_BALL_isValid);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_ResourceEntry(void *, sipWrapperType *);}
static void *cast_ResourceEntry(void *ptr,sipWrapperType *targetClass)
{
    if (targetClass == sipClass_ResourceEntry)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_ResourceEntry(void *, int);}
static void release_ResourceEntry(void *ptr,int)
{
    delete reinterpret_cast<ResourceEntry *>(ptr);
}


extern "C" {static void dealloc_ResourceEntry(sipWrapper *);}
static void dealloc_ResourceEntry(sipWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_ResourceEntry(sipSelf->u.cppPtr,0);
    }
}


extern "C" {static void *init_ResourceEntry(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_ResourceEntry(sipWrapper *,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    ResourceEntry *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            try
            {
            sipCpp = new ResourceEntry();
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
        const ResourceEntry * a0;
        bool a1 = 1;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA|b",sipClass_ResourceEntry,&a0,&a1))
        {
            try
            {
            sipCpp = new ResourceEntry(*a0,a1);
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
        const String * a1;
        int a1State = 0;
        ResourceEntry * a2 = 0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"J1J1|J@",sipClass_String,&a0,&a0State,sipClass_String,&a1,&a1State,sipClass_ResourceEntry,&a2))
        {
            try
            {
            sipCpp = new ResourceEntry(*a0,*a1,a2);
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
        const ResourceEntry * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_ResourceEntry,&a0))
        {
            try
            {
            sipCpp = new ResourceEntry(*a0);
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }
        }
    }

    return sipCpp;
}


extern "C" {static void *forceConvertTo_ResourceEntry(PyObject *, int *);}
static void *forceConvertTo_ResourceEntry(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_ResourceEntry))
        return sipConvertToCpp(valobj,sipClass_ResourceEntry,iserrp);

    sipBadClass(sipNm_BALL_ResourceEntry);

    *iserrp = 1;

    return NULL;
}


static PyMethodDef methods_ResourceEntry[] = {
    {sipNm_BALL_clear, meth_ResourceEntry_clear, METH_VARARGS, NULL},
    {sipNm_BALL_countChildren, meth_ResourceEntry_countChildren, METH_VARARGS, NULL},
    {sipNm_BALL_countDescendants, meth_ResourceEntry_countDescendants, METH_VARARGS, NULL},
    {sipNm_BALL_destroy, meth_ResourceEntry_destroy, METH_VARARGS, NULL},
    {sipNm_BALL_findChild, meth_ResourceEntry_findChild, METH_VARARGS, NULL},
    {sipNm_BALL_findDescendant, meth_ResourceEntry_findDescendant, METH_VARARGS, NULL},
    {sipNm_BALL_findEntry, meth_ResourceEntry_findEntry, METH_VARARGS, NULL},
    {sipNm_BALL_get, meth_ResourceEntry_get, METH_VARARGS, NULL},
    {sipNm_BALL_getChild, meth_ResourceEntry_getChild, METH_VARARGS, NULL},
    {sipNm_BALL_getDepth, meth_ResourceEntry_getDepth, METH_VARARGS, NULL},
    {sipNm_BALL_getEntry, meth_ResourceEntry_getEntry, METH_VARARGS, NULL},
    {sipNm_BALL_getKey, meth_ResourceEntry_getKey, METH_VARARGS, NULL},
    {sipNm_BALL_getParent, meth_ResourceEntry_getParent, METH_VARARGS, NULL},
    {sipNm_BALL_getPath, meth_ResourceEntry_getPath, METH_VARARGS, NULL},
    {sipNm_BALL_getRoot, meth_ResourceEntry_getRoot, METH_VARARGS, NULL},
    {sipNm_BALL_getSize, meth_ResourceEntry_getSize, METH_VARARGS, NULL},
    {sipNm_BALL_getValue, meth_ResourceEntry_getValue, METH_VARARGS, NULL},
    {sipNm_BALL_hasChild, meth_ResourceEntry_hasChild, METH_VARARGS, NULL},
    {sipNm_BALL_insert, meth_ResourceEntry_insert, METH_VARARGS, NULL},
    {sipNm_BALL_insertChild, meth_ResourceEntry_insertChild, METH_VARARGS, NULL},
    {sipNm_BALL_insertSibling, meth_ResourceEntry_insertSibling, METH_VARARGS, NULL},
    {sipNm_BALL_isAncestorOf, meth_ResourceEntry_isAncestorOf, METH_VARARGS, NULL},
    {sipNm_BALL_isChildOf, meth_ResourceEntry_isChildOf, METH_VARARGS, NULL},
    {sipNm_BALL_isDescendantOf, meth_ResourceEntry_isDescendantOf, METH_VARARGS, NULL},
    {sipNm_BALL_isEmpty, meth_ResourceEntry_isEmpty, METH_VARARGS, NULL},
    {sipNm_BALL_isParentOf, meth_ResourceEntry_isParentOf, METH_VARARGS, NULL},
    {sipNm_BALL_isRelatedWith, meth_ResourceEntry_isRelatedWith, METH_VARARGS, NULL},
    {sipNm_BALL_isRoot, meth_ResourceEntry_isRoot, METH_VARARGS, NULL},
    {sipNm_BALL_isValid, meth_ResourceEntry_isValid, METH_VARARGS, NULL},
    {sipNm_BALL_mergeChildrenOf, meth_ResourceEntry_mergeChildrenOf, METH_VARARGS, NULL},
    {sipNm_BALL_removeKey, meth_ResourceEntry_removeKey, METH_VARARGS, NULL},
    {sipNm_BALL_set, meth_ResourceEntry_set, METH_VARARGS, NULL},
    {sipNm_BALL_setValue, meth_ResourceEntry_setValue, METH_VARARGS, NULL}
};


sipTypeDef sipType_BALL_ResourceEntry = {
    0,
    0,
    "BALL.ResourceEntry",
    0,
    {0, 0, 1},
    0,
    0,
    33, methods_ResourceEntry,
    0, 0,
    0,
    init_ResourceEntry,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_ResourceEntry,
    cast_ResourceEntry,
    release_ResourceEntry,
    forceConvertTo_ResourceEntry,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
