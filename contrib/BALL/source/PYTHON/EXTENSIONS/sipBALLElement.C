/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLElement.h"

#include "sipBALLPropertyManager.h"
#include "sipBALLElement.h"
#include "sipBALLString.h"
#include "sipBALLNamedProperty.h"
#include "sipBALLPosition.h"
#include "sipBALLPersistentObject.h"



extern "C" {static PyObject *meth_Element_setName(PyObject *, PyObject *);}
static PyObject *meth_Element_setName(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const String * a0;
        int a0State = 0;
        Element *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ1",&sipSelf,sipClass_Element,&sipCpp,sipClass_String,&a0,&a0State))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Element,sipNm_BALL_setName);

    return NULL;
}


extern "C" {static PyObject *meth_Element_getName(PyObject *, PyObject *);}
static PyObject *meth_Element_getName(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Element *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Element,&sipCpp))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Element,sipNm_BALL_getName);

    return NULL;
}


extern "C" {static PyObject *meth_Element_setSymbol(PyObject *, PyObject *);}
static PyObject *meth_Element_setSymbol(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const String * a0;
        int a0State = 0;
        Element *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ1",&sipSelf,sipClass_Element,&sipCpp,sipClass_String,&a0,&a0State))
        {
            try
            {
            sipCpp->setSymbol(*a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Element,sipNm_BALL_setSymbol);

    return NULL;
}


extern "C" {static PyObject *meth_Element_getSymbol(PyObject *, PyObject *);}
static PyObject *meth_Element_getSymbol(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Element *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Element,&sipCpp))
        {
            const String *sipRes;

            try
            {
            sipRes = &sipCpp->getSymbol();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Element,sipNm_BALL_getSymbol);

    return NULL;
}


extern "C" {static PyObject *meth_Element_setGroup(PyObject *, PyObject *);}
static PyObject *meth_Element_setGroup(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        int a0;
        Element *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bi",&sipSelf,sipClass_Element,&sipCpp,&a0))
        {
            try
            {
            sipCpp->setGroup(a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Element,sipNm_BALL_setGroup);

    return NULL;
}


extern "C" {static PyObject *meth_Element_getGroup(PyObject *, PyObject *);}
static PyObject *meth_Element_getGroup(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Element *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Element,&sipCpp))
        {
            int sipRes;

            try
            {
            sipRes = sipCpp->getGroup();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Element,sipNm_BALL_getGroup);

    return NULL;
}


extern "C" {static PyObject *meth_Element_setPeriod(PyObject *, PyObject *);}
static PyObject *meth_Element_setPeriod(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        int a0;
        Element *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bi",&sipSelf,sipClass_Element,&sipCpp,&a0))
        {
            try
            {
            sipCpp->setPeriod(a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Element,sipNm_BALL_setPeriod);

    return NULL;
}


extern "C" {static PyObject *meth_Element_getPeriod(PyObject *, PyObject *);}
static PyObject *meth_Element_getPeriod(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Element *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Element,&sipCpp))
        {
            int sipRes;

            try
            {
            sipRes = sipCpp->getPeriod();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Element,sipNm_BALL_getPeriod);

    return NULL;
}


extern "C" {static PyObject *meth_Element_setAtomicNumber(PyObject *, PyObject *);}
static PyObject *meth_Element_setAtomicNumber(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        int a0;
        Element *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bi",&sipSelf,sipClass_Element,&sipCpp,&a0))
        {
            try
            {
            sipCpp->setAtomicNumber(a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Element,sipNm_BALL_setAtomicNumber);

    return NULL;
}


extern "C" {static PyObject *meth_Element_getAtomicNumber(PyObject *, PyObject *);}
static PyObject *meth_Element_getAtomicNumber(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Element *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Element,&sipCpp))
        {
            int sipRes;

            try
            {
            sipRes = sipCpp->getAtomicNumber();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Element,sipNm_BALL_getAtomicNumber);

    return NULL;
}


extern "C" {static PyObject *meth_Element_setAtomicWeight(PyObject *, PyObject *);}
static PyObject *meth_Element_setAtomicWeight(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        float a0;
        Element *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bf",&sipSelf,sipClass_Element,&sipCpp,&a0))
        {
            try
            {
            sipCpp->setAtomicWeight(a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Element,sipNm_BALL_setAtomicWeight);

    return NULL;
}


extern "C" {static PyObject *meth_Element_getAtomicWeight(PyObject *, PyObject *);}
static PyObject *meth_Element_getAtomicWeight(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Element *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Element,&sipCpp))
        {
            float sipRes;

            try
            {
            sipRes = sipCpp->getAtomicWeight();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Element,sipNm_BALL_getAtomicWeight);

    return NULL;
}


extern "C" {static PyObject *meth_Element_setAtomicRadius(PyObject *, PyObject *);}
static PyObject *meth_Element_setAtomicRadius(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        float a0;
        Element *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bf",&sipSelf,sipClass_Element,&sipCpp,&a0))
        {
            try
            {
            sipCpp->setAtomicRadius(a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Element,sipNm_BALL_setAtomicRadius);

    return NULL;
}


extern "C" {static PyObject *meth_Element_getAtomicRadius(PyObject *, PyObject *);}
static PyObject *meth_Element_getAtomicRadius(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Element *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Element,&sipCpp))
        {
            float sipRes;

            try
            {
            sipRes = sipCpp->getAtomicRadius();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Element,sipNm_BALL_getAtomicRadius);

    return NULL;
}


extern "C" {static PyObject *meth_Element_setCovalentRadius(PyObject *, PyObject *);}
static PyObject *meth_Element_setCovalentRadius(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        float a0;
        Element *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bf",&sipSelf,sipClass_Element,&sipCpp,&a0))
        {
            try
            {
            sipCpp->setCovalentRadius(a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Element,sipNm_BALL_setCovalentRadius);

    return NULL;
}


extern "C" {static PyObject *meth_Element_getCovalentRadius(PyObject *, PyObject *);}
static PyObject *meth_Element_getCovalentRadius(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Element *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Element,&sipCpp))
        {
            float sipRes;

            try
            {
            sipRes = sipCpp->getCovalentRadius();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Element,sipNm_BALL_getCovalentRadius);

    return NULL;
}


extern "C" {static PyObject *meth_Element_setVanDerWaalsRadius(PyObject *, PyObject *);}
static PyObject *meth_Element_setVanDerWaalsRadius(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        float a0;
        Element *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bf",&sipSelf,sipClass_Element,&sipCpp,&a0))
        {
            try
            {
            sipCpp->setVanDerWaalsRadius(a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Element,sipNm_BALL_setVanDerWaalsRadius);

    return NULL;
}


extern "C" {static PyObject *meth_Element_getVanDerWaalsRadius(PyObject *, PyObject *);}
static PyObject *meth_Element_getVanDerWaalsRadius(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Element *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Element,&sipCpp))
        {
            float sipRes;

            try
            {
            sipRes = sipCpp->getVanDerWaalsRadius();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Element,sipNm_BALL_getVanDerWaalsRadius);

    return NULL;
}


extern "C" {static PyObject *meth_Element_setElectronegativity(PyObject *, PyObject *);}
static PyObject *meth_Element_setElectronegativity(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        float a0;
        Element *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bf",&sipSelf,sipClass_Element,&sipCpp,&a0))
        {
            try
            {
            sipCpp->setElectronegativity(a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Element,sipNm_BALL_setElectronegativity);

    return NULL;
}


extern "C" {static PyObject *meth_Element_getElectronegativity(PyObject *, PyObject *);}
static PyObject *meth_Element_getElectronegativity(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Element *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Element,&sipCpp))
        {
            float sipRes;

            try
            {
            sipRes = sipCpp->getElectronegativity();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Element,sipNm_BALL_getElectronegativity);

    return NULL;
}


extern "C" {static PyObject *meth_Element_isUnknown(PyObject *, PyObject *);}
static PyObject *meth_Element_isUnknown(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Element *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_Element,&sipCpp))
        {
            bool sipRes;

            try
            {
            sipRes = sipCpp->isUnknown();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_Element,sipNm_BALL_isUnknown);

    return NULL;
}


extern "C" {static PyObject *slot_Element___gt__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_Element___gt__(PyObject *sipSelf,PyObject *sipArg)
{
    Element *sipCpp = reinterpret_cast<Element *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_Element));

    if (!sipCpp)
        return 0;

    int sipArgsParsed = 0;

    {
        const Element * a0;

        if (sipParseArgs(&sipArgsParsed,sipArg,"JA",sipClass_Element,&a0))
        {
            bool sipRes;

            try
            {
            sipRes = ((*sipCpp) > *a0);
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return PyBool_FromLong(sipRes);
        }
    }

    return sipPySlotExtend(&sipModuleAPI_BALL,gt_slot,sipClass_Element,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_Element___ge__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_Element___ge__(PyObject *sipSelf,PyObject *sipArg)
{
    Element *sipCpp = reinterpret_cast<Element *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_Element));

    if (!sipCpp)
        return 0;

    int sipArgsParsed = 0;

    {
        const Element * a0;

        if (sipParseArgs(&sipArgsParsed,sipArg,"JA",sipClass_Element,&a0))
        {
            bool sipRes;

            try
            {
            sipRes = ((*sipCpp) >= *a0);
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return PyBool_FromLong(sipRes);
        }
    }

    return sipPySlotExtend(&sipModuleAPI_BALL,ge_slot,sipClass_Element,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_Element___le__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_Element___le__(PyObject *sipSelf,PyObject *sipArg)
{
    Element *sipCpp = reinterpret_cast<Element *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_Element));

    if (!sipCpp)
        return 0;

    int sipArgsParsed = 0;

    {
        const Element * a0;

        if (sipParseArgs(&sipArgsParsed,sipArg,"JA",sipClass_Element,&a0))
        {
            bool sipRes;

            try
            {
            sipRes = ((*sipCpp) <= *a0);
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return PyBool_FromLong(sipRes);
        }
    }

    return sipPySlotExtend(&sipModuleAPI_BALL,le_slot,sipClass_Element,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_Element___lt__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_Element___lt__(PyObject *sipSelf,PyObject *sipArg)
{
    Element *sipCpp = reinterpret_cast<Element *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_Element));

    if (!sipCpp)
        return 0;

    int sipArgsParsed = 0;

    {
        const Element * a0;

        if (sipParseArgs(&sipArgsParsed,sipArg,"JA",sipClass_Element,&a0))
        {
            bool sipRes;

            try
            {
            sipRes = ((*sipCpp) < *a0);
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return PyBool_FromLong(sipRes);
        }
    }

    return sipPySlotExtend(&sipModuleAPI_BALL,lt_slot,sipClass_Element,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_Element___ne__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_Element___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    Element *sipCpp = reinterpret_cast<Element *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_Element));

    if (!sipCpp)
        return 0;

    int sipArgsParsed = 0;

    {
        const Element * a0;

        if (sipParseArgs(&sipArgsParsed,sipArg,"JA",sipClass_Element,&a0))
        {
            bool sipRes;

            try
            {
            sipRes = ((*sipCpp) != *a0);
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return PyBool_FromLong(sipRes);
        }
    }

    return sipPySlotExtend(&sipModuleAPI_BALL,ne_slot,sipClass_Element,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_Element___eq__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_Element___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    Element *sipCpp = reinterpret_cast<Element *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_Element));

    if (!sipCpp)
        return 0;

    int sipArgsParsed = 0;

    {
        const Element * a0;

        if (sipParseArgs(&sipArgsParsed,sipArg,"JA",sipClass_Element,&a0))
        {
            bool sipRes;

            try
            {
            sipRes = ((*sipCpp) == *a0);
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return PyBool_FromLong(sipRes);
        }
    }

    return sipPySlotExtend(&sipModuleAPI_BALL,eq_slot,sipClass_Element,sipSelf,sipArg);
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_Element(void *, sipWrapperType *);}
static void *cast_Element(void *ptr,sipWrapperType *targetClass)
{
    void *res;

    if (targetClass == sipClass_Element)
        return ptr;

    if ((res = sipCast_PropertyManager((PropertyManager *)(Element *)ptr,targetClass)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_Element(void *, int);}
static void release_Element(void *ptr,int)
{
    delete reinterpret_cast<Element *>(ptr);
}


extern "C" {static void dealloc_Element(sipWrapper *);}
static void dealloc_Element(sipWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_Element(sipSelf->u.cppPtr,0);
    }
}


extern "C" {static void *init_Element(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_Element(sipWrapper *,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    Element *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            try
            {
            sipCpp = new Element();
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
        const Element * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_Element,&a0))
        {
            try
            {
            sipCpp = new Element(*a0);
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


extern "C" {static PyObject *var_Element_UNKNOWN(PyObject *, PyObject *);}
static PyObject *var_Element_UNKNOWN(PyObject *,PyObject *sipPy)
{
    int sipIsErr = 0;
   Element *sipVal;

    if (sipPy == NULL)
    {
        sipVal = &Element::UNKNOWN;

        sipPy = sipConvertFromInstance(sipVal,sipClass_Element,NULL);

        return sipPy;
    }

    sipVal = reinterpret_cast<Element *>(sipForceConvertToInstance(sipPy,sipClass_Element,NULL,SIP_NOT_NONE,NULL,&sipIsErr));

    if (sipIsErr)
        return NULL;

    Element::UNKNOWN = *sipVal;

    Py_INCREF(Py_None);
    return Py_None;
}

PyMethodDef variables_Element[] = {
    {sipNm_BALL_UNKNOWN, var_Element_UNKNOWN, METH_STATIC, NULL},
    {0, 0, 0, 0}
};


extern "C" {static void *forceConvertTo_Element(PyObject *, int *);}
static void *forceConvertTo_Element(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_Element))
        return sipConvertToCpp(valobj,sipClass_Element,iserrp);

    sipBadClass(sipNm_BALL_Element);

    *iserrp = 1;

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedClassDef supers_Element[] = {{191, 255, 1}};


/* Define this type's Python slots. */
static sipPySlotDef slots_Element[] = {
    {(void *)slot_Element___gt__, gt_slot},
    {(void *)slot_Element___ge__, ge_slot},
    {(void *)slot_Element___le__, le_slot},
    {(void *)slot_Element___lt__, lt_slot},
    {(void *)slot_Element___ne__, ne_slot},
    {(void *)slot_Element___eq__, eq_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_Element[] = {
    {sipNm_BALL_getAtomicNumber, meth_Element_getAtomicNumber, METH_VARARGS, NULL},
    {sipNm_BALL_getAtomicRadius, meth_Element_getAtomicRadius, METH_VARARGS, NULL},
    {sipNm_BALL_getAtomicWeight, meth_Element_getAtomicWeight, METH_VARARGS, NULL},
    {sipNm_BALL_getCovalentRadius, meth_Element_getCovalentRadius, METH_VARARGS, NULL},
    {sipNm_BALL_getElectronegativity, meth_Element_getElectronegativity, METH_VARARGS, NULL},
    {sipNm_BALL_getGroup, meth_Element_getGroup, METH_VARARGS, NULL},
    {sipNm_BALL_getName, meth_Element_getName, METH_VARARGS, NULL},
    {sipNm_BALL_getPeriod, meth_Element_getPeriod, METH_VARARGS, NULL},
    {sipNm_BALL_getSymbol, meth_Element_getSymbol, METH_VARARGS, NULL},
    {sipNm_BALL_getVanDerWaalsRadius, meth_Element_getVanDerWaalsRadius, METH_VARARGS, NULL},
    {sipNm_BALL_isUnknown, meth_Element_isUnknown, METH_VARARGS, NULL},
    {sipNm_BALL_setAtomicNumber, meth_Element_setAtomicNumber, METH_VARARGS, NULL},
    {sipNm_BALL_setAtomicRadius, meth_Element_setAtomicRadius, METH_VARARGS, NULL},
    {sipNm_BALL_setAtomicWeight, meth_Element_setAtomicWeight, METH_VARARGS, NULL},
    {sipNm_BALL_setCovalentRadius, meth_Element_setCovalentRadius, METH_VARARGS, NULL},
    {sipNm_BALL_setElectronegativity, meth_Element_setElectronegativity, METH_VARARGS, NULL},
    {sipNm_BALL_setGroup, meth_Element_setGroup, METH_VARARGS, NULL},
    {sipNm_BALL_setName, meth_Element_setName, METH_VARARGS, NULL},
    {sipNm_BALL_setPeriod, meth_Element_setPeriod, METH_VARARGS, NULL},
    {sipNm_BALL_setSymbol, meth_Element_setSymbol, METH_VARARGS, NULL},
    {sipNm_BALL_setVanDerWaalsRadius, meth_Element_setVanDerWaalsRadius, METH_VARARGS, NULL}
};


sipTypeDef sipType_BALL_Element = {
    0,
    0,
    "BALL.Element",
    0,
    {0, 0, 1},
    supers_Element,
    slots_Element,
    21, methods_Element,
    0, 0,
    variables_Element,
    init_Element,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_Element,
    cast_Element,
    release_Element,
    forceConvertTo_Element,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
