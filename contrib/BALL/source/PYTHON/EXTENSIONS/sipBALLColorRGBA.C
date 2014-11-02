/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLColorRGBA.h"

#include "sipBALLInvalidRange.h"
#include "sipBALLNotInHexFormat.h"
#include "sipBALLString.h"
#include "sipBALLColorRGBA.h"
#include "sipBALLColorUnit.h"



extern "C" {static PyObject *meth_ColorRGBA_clear(PyObject *, PyObject *);}
static PyObject *meth_ColorRGBA_clear(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        ColorRGBA *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_ColorRGBA,&sipCpp))
        {
            sipCpp->clear();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_ColorRGBA,sipNm_BALL_clear);

    return NULL;
}


extern "C" {static PyObject *meth_ColorRGBA_set(PyObject *, PyObject *);}
static PyObject *meth_ColorRGBA_set(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const ColorRGBA * a0;
        ColorRGBA *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_ColorRGBA,&sipCpp,sipClass_ColorRGBA,&a0))
        {
            sipCpp->set(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    {
        const char * a0;
        ColorRGBA *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bs",&sipSelf,sipClass_ColorRGBA,&sipCpp,&a0))
        {
            try
            {
            sipCpp->set(a0);
            }
            catch (InvalidRange &sipExceptionRef)
            {
                /* Hope that there is a valid copy ctor. */
                InvalidRange *sipExceptionCopy = new InvalidRange(sipExceptionRef);

                sipRaiseClassException(sipClass_InvalidRange,sipExceptionCopy);

                return NULL;
            }
            catch (NotInHexFormat &sipExceptionRef)
            {
                /* Hope that there is a valid copy ctor. */
                NotInHexFormat *sipExceptionCopy = new NotInHexFormat(sipExceptionRef);

                sipRaiseClassException(sipClass_NotInHexFormat,sipExceptionCopy);

                return NULL;
            }

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    {
        const String * a0;
        int a0State = 0;
        ColorRGBA *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ1",&sipSelf,sipClass_ColorRGBA,&sipCpp,sipClass_String,&a0,&a0State))
        {
            try
            {
            sipCpp->set(*a0);
            }
            catch (InvalidRange &sipExceptionRef)
            {

            sipReleaseInstance(const_cast<String *>(a0),sipClass_String,a0State);
                /* Hope that there is a valid copy ctor. */
                InvalidRange *sipExceptionCopy = new InvalidRange(sipExceptionRef);

                sipRaiseClassException(sipClass_InvalidRange,sipExceptionCopy);

                return NULL;
            }
            catch (NotInHexFormat &sipExceptionRef)
            {

            sipReleaseInstance(const_cast<String *>(a0),sipClass_String,a0State);
                /* Hope that there is a valid copy ctor. */
                NotInHexFormat *sipExceptionCopy = new NotInHexFormat(sipExceptionRef);

                sipRaiseClassException(sipClass_NotInHexFormat,sipExceptionCopy);

                return NULL;
            }

            sipReleaseInstance(const_cast<String *>(a0),sipClass_String,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    {
        const ColorUnit * a0;
        const ColorUnit * a1;
        const ColorUnit * a2;
        const ColorUnit& a3def = 1;
        const ColorUnit * a3 = &a3def;
        ColorRGBA *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJAJAJA|JA",&sipSelf,sipClass_ColorRGBA,&sipCpp,sipClass_ColorUnit,&a0,sipClass_ColorUnit,&a1,sipClass_ColorUnit,&a2,sipClass_ColorUnit,&a3))
        {
            sipCpp->set(*a0,*a1,*a2,*a3);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_ColorRGBA,sipNm_BALL_set);

    return NULL;
}


extern "C" {static PyObject *meth_ColorRGBA_get(PyObject *, PyObject *);}
static PyObject *meth_ColorRGBA_get(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        char * a0;
        ColorRGBA *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bs",&sipSelf,sipClass_ColorRGBA,&sipCpp,&a0))
        {
            sipCpp->get(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    {
        String * a0;
        int a0State = 0;
        ColorRGBA *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ1",&sipSelf,sipClass_ColorRGBA,&sipCpp,sipClass_String,&a0,&a0State))
        {
            sipCpp->get(*a0);

            sipReleaseInstance(a0,sipClass_String,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    {
        ColorUnit * a0;
        ColorUnit * a1;
        ColorUnit * a2;
        ColorUnit * a3;
        ColorRGBA *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJAJAJAJA",&sipSelf,sipClass_ColorRGBA,&sipCpp,sipClass_ColorUnit,&a0,sipClass_ColorUnit,&a1,sipClass_ColorUnit,&a2,sipClass_ColorUnit,&a3))
        {
            sipCpp->get(*a0,*a1,*a2,*a3);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    {
        ColorUnit * a0;
        ColorUnit * a1;
        ColorUnit * a2;
        ColorRGBA *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJAJAJA",&sipSelf,sipClass_ColorRGBA,&sipCpp,sipClass_ColorUnit,&a0,sipClass_ColorUnit,&a1,sipClass_ColorUnit,&a2))
        {
            sipCpp->get(*a0,*a1,*a2);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_ColorRGBA,sipNm_BALL_get);

    return NULL;
}


extern "C" {static PyObject *meth_ColorRGBA_swap(PyObject *, PyObject *);}
static PyObject *meth_ColorRGBA_swap(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        ColorRGBA * a0;
        ColorRGBA *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_ColorRGBA,&sipCpp,sipClass_ColorRGBA,&a0))
        {
            sipCpp->swap(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_ColorRGBA,sipNm_BALL_swap);

    return NULL;
}


extern "C" {static PyObject *meth_ColorRGBA_setRed(PyObject *, PyObject *);}
static PyObject *meth_ColorRGBA_setRed(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const ColorUnit * a0;
        ColorRGBA *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_ColorRGBA,&sipCpp,sipClass_ColorUnit,&a0))
        {
            sipCpp->setRed(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_ColorRGBA,sipNm_BALL_setRed);

    return NULL;
}


extern "C" {static PyObject *meth_ColorRGBA_getRed(PyObject *, PyObject *);}
static PyObject *meth_ColorRGBA_getRed(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        ColorRGBA *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_ColorRGBA,&sipCpp))
        {
            ColorUnit *sipRes;

            sipRes = &sipCpp->getRed();

            return sipConvertFromInstance(sipRes,sipClass_ColorUnit,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_ColorRGBA,sipNm_BALL_getRed);

    return NULL;
}


extern "C" {static PyObject *meth_ColorRGBA_setGreen(PyObject *, PyObject *);}
static PyObject *meth_ColorRGBA_setGreen(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const ColorUnit * a0;
        ColorRGBA *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_ColorRGBA,&sipCpp,sipClass_ColorUnit,&a0))
        {
            sipCpp->setGreen(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_ColorRGBA,sipNm_BALL_setGreen);

    return NULL;
}


extern "C" {static PyObject *meth_ColorRGBA_getGreen(PyObject *, PyObject *);}
static PyObject *meth_ColorRGBA_getGreen(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        ColorRGBA *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_ColorRGBA,&sipCpp))
        {
            ColorUnit *sipRes;

            sipRes = &sipCpp->getGreen();

            return sipConvertFromInstance(sipRes,sipClass_ColorUnit,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_ColorRGBA,sipNm_BALL_getGreen);

    return NULL;
}


extern "C" {static PyObject *meth_ColorRGBA_setBlue(PyObject *, PyObject *);}
static PyObject *meth_ColorRGBA_setBlue(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const ColorUnit * a0;
        ColorRGBA *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_ColorRGBA,&sipCpp,sipClass_ColorUnit,&a0))
        {
            sipCpp->setBlue(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_ColorRGBA,sipNm_BALL_setBlue);

    return NULL;
}


extern "C" {static PyObject *meth_ColorRGBA_getBlue(PyObject *, PyObject *);}
static PyObject *meth_ColorRGBA_getBlue(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        ColorRGBA *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_ColorRGBA,&sipCpp))
        {
            ColorUnit *sipRes;

            sipRes = &sipCpp->getBlue();

            return sipConvertFromInstance(sipRes,sipClass_ColorUnit,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_ColorRGBA,sipNm_BALL_getBlue);

    return NULL;
}


extern "C" {static PyObject *meth_ColorRGBA_setAlpha(PyObject *, PyObject *);}
static PyObject *meth_ColorRGBA_setAlpha(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const ColorUnit * a0;
        ColorRGBA *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_ColorRGBA,&sipCpp,sipClass_ColorUnit,&a0))
        {
            sipCpp->setAlpha(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_ColorRGBA,sipNm_BALL_setAlpha);

    return NULL;
}


extern "C" {static PyObject *meth_ColorRGBA_getAlpha(PyObject *, PyObject *);}
static PyObject *meth_ColorRGBA_getAlpha(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        ColorRGBA *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_ColorRGBA,&sipCpp))
        {
            ColorUnit *sipRes;

            sipRes = &sipCpp->getAlpha();

            return sipConvertFromInstance(sipRes,sipClass_ColorUnit,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_ColorRGBA,sipNm_BALL_getAlpha);

    return NULL;
}


extern "C" {static PyObject *slot_ColorRGBA___repr__(PyObject *sipSelf);}
static PyObject *slot_ColorRGBA___repr__(PyObject *sipSelf)
{
    ColorRGBA *sipCpp = reinterpret_cast<ColorRGBA *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_ColorRGBA));

    if (!sipCpp)
        return 0;


    {
        {
            PyObject * sipRes = 0;

#line 81 "colorRGBA.sip"
	String s("ColorRGBA {");
	s += (String) *sipCpp;
	s += " }";
	sipRes = PyString_FromString(s.c_str());
#line 478 "sipBALLColorRGBA.C"

            return sipRes;
        }
    }
}


extern "C" {static PyObject *slot_ColorRGBA___str__(PyObject *sipSelf);}
static PyObject *slot_ColorRGBA___str__(PyObject *sipSelf)
{
    ColorRGBA *sipCpp = reinterpret_cast<ColorRGBA *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_ColorRGBA));

    if (!sipCpp)
        return 0;


    {
        {
            PyObject * sipRes = 0;

#line 73 "colorRGBA.sip"
	String s("ColorRGBA {");
	s += (String) *sipCpp;
	s += " }";
	sipRes = PyString_FromString(s.c_str());
#line 504 "sipBALLColorRGBA.C"

            return sipRes;
        }
    }
}


extern "C" {static PyObject *slot_ColorRGBA___ge__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_ColorRGBA___ge__(PyObject *sipSelf,PyObject *sipArg)
{
    ColorRGBA *sipCpp = reinterpret_cast<ColorRGBA *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_ColorRGBA));

    if (!sipCpp)
        return 0;

    int sipArgsParsed = 0;

    {
        const ColorRGBA * a0;

        if (sipParseArgs(&sipArgsParsed,sipArg,"JA",sipClass_ColorRGBA,&a0))
        {
            bool sipRes;

            sipRes = ((*sipCpp) >= *a0);

            return PyBool_FromLong(sipRes);
        }
    }

    return sipPySlotExtend(&sipModuleAPI_BALL,ge_slot,sipClass_ColorRGBA,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_ColorRGBA___gt__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_ColorRGBA___gt__(PyObject *sipSelf,PyObject *sipArg)
{
    ColorRGBA *sipCpp = reinterpret_cast<ColorRGBA *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_ColorRGBA));

    if (!sipCpp)
        return 0;

    int sipArgsParsed = 0;

    {
        const ColorRGBA * a0;

        if (sipParseArgs(&sipArgsParsed,sipArg,"JA",sipClass_ColorRGBA,&a0))
        {
            bool sipRes;

            sipRes = ((*sipCpp) > *a0);

            return PyBool_FromLong(sipRes);
        }
    }

    return sipPySlotExtend(&sipModuleAPI_BALL,gt_slot,sipClass_ColorRGBA,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_ColorRGBA___le__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_ColorRGBA___le__(PyObject *sipSelf,PyObject *sipArg)
{
    ColorRGBA *sipCpp = reinterpret_cast<ColorRGBA *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_ColorRGBA));

    if (!sipCpp)
        return 0;

    int sipArgsParsed = 0;

    {
        const ColorRGBA * a0;

        if (sipParseArgs(&sipArgsParsed,sipArg,"JA",sipClass_ColorRGBA,&a0))
        {
            bool sipRes;

            sipRes = ((*sipCpp) <= *a0);

            return PyBool_FromLong(sipRes);
        }
    }

    return sipPySlotExtend(&sipModuleAPI_BALL,le_slot,sipClass_ColorRGBA,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_ColorRGBA___lt__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_ColorRGBA___lt__(PyObject *sipSelf,PyObject *sipArg)
{
    ColorRGBA *sipCpp = reinterpret_cast<ColorRGBA *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_ColorRGBA));

    if (!sipCpp)
        return 0;

    int sipArgsParsed = 0;

    {
        const ColorRGBA * a0;

        if (sipParseArgs(&sipArgsParsed,sipArg,"JA",sipClass_ColorRGBA,&a0))
        {
            bool sipRes;

            sipRes = ((*sipCpp) < *a0);

            return PyBool_FromLong(sipRes);
        }
    }

    return sipPySlotExtend(&sipModuleAPI_BALL,lt_slot,sipClass_ColorRGBA,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_ColorRGBA___ne__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_ColorRGBA___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    ColorRGBA *sipCpp = reinterpret_cast<ColorRGBA *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_ColorRGBA));

    if (!sipCpp)
        return 0;

    int sipArgsParsed = 0;

    {
        const ColorRGBA * a0;

        if (sipParseArgs(&sipArgsParsed,sipArg,"JA",sipClass_ColorRGBA,&a0))
        {
            bool sipRes;

            sipRes = ((*sipCpp) != *a0);

            return PyBool_FromLong(sipRes);
        }
    }

    return sipPySlotExtend(&sipModuleAPI_BALL,ne_slot,sipClass_ColorRGBA,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_ColorRGBA___eq__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_ColorRGBA___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    ColorRGBA *sipCpp = reinterpret_cast<ColorRGBA *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_ColorRGBA));

    if (!sipCpp)
        return 0;

    int sipArgsParsed = 0;

    {
        const ColorRGBA * a0;

        if (sipParseArgs(&sipArgsParsed,sipArg,"JA",sipClass_ColorRGBA,&a0))
        {
            bool sipRes;

            sipRes = ((*sipCpp) == *a0);

            return PyBool_FromLong(sipRes);
        }
    }

    return sipPySlotExtend(&sipModuleAPI_BALL,eq_slot,sipClass_ColorRGBA,sipSelf,sipArg);
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_ColorRGBA(void *, sipWrapperType *);}
static void *cast_ColorRGBA(void *ptr,sipWrapperType *targetClass)
{
    if (targetClass == sipClass_ColorRGBA)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_ColorRGBA(void *, int);}
static void release_ColorRGBA(void *ptr,int)
{
    delete reinterpret_cast<ColorRGBA *>(ptr);
}


extern "C" {static void dealloc_ColorRGBA(sipWrapper *);}
static void dealloc_ColorRGBA(sipWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_ColorRGBA(sipSelf->u.cppPtr,0);
    }
}


extern "C" {static void *init_ColorRGBA(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_ColorRGBA(sipWrapper *,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    ColorRGBA *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            sipCpp = new ColorRGBA();
        }
    }

    if (!sipCpp)
    {
        const ColorRGBA * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_ColorRGBA,&a0))
        {
            sipCpp = new ColorRGBA(*a0);
        }
    }

    if (!sipCpp)
    {
        const char * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"s",&a0))
        {
            try
            {
            sipCpp = new ColorRGBA(a0);
            }
            catch (InvalidRange &sipExceptionRef)
            {
                /* Hope that there is a valid copy ctor. */
                InvalidRange *sipExceptionCopy = new InvalidRange(sipExceptionRef);

                sipRaiseClassException(sipClass_InvalidRange,sipExceptionCopy);

                return NULL;
            }
            catch (NotInHexFormat &sipExceptionRef)
            {
                /* Hope that there is a valid copy ctor. */
                NotInHexFormat *sipExceptionCopy = new NotInHexFormat(sipExceptionRef);

                sipRaiseClassException(sipClass_NotInHexFormat,sipExceptionCopy);

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
            sipCpp = new ColorRGBA(*a0);
            }
            catch (InvalidRange &sipExceptionRef)
            {

            sipReleaseInstance(const_cast<String *>(a0),sipClass_String,a0State);
                /* Hope that there is a valid copy ctor. */
                InvalidRange *sipExceptionCopy = new InvalidRange(sipExceptionRef);

                sipRaiseClassException(sipClass_InvalidRange,sipExceptionCopy);

                return NULL;
            }
            catch (NotInHexFormat &sipExceptionRef)
            {

            sipReleaseInstance(const_cast<String *>(a0),sipClass_String,a0State);
                /* Hope that there is a valid copy ctor. */
                NotInHexFormat *sipExceptionCopy = new NotInHexFormat(sipExceptionRef);

                sipRaiseClassException(sipClass_NotInHexFormat,sipExceptionCopy);

                return NULL;
            }

            sipReleaseInstance(const_cast<String *>(a0),sipClass_String,a0State);
        }
    }

    if (!sipCpp)
    {
        float a0;
        float a1;
        float a2;
        float a3 = 1;

        if (sipParseArgs(sipArgsParsed,sipArgs,"fff|f",&a0,&a1,&a2,&a3))
        {
            sipCpp = new ColorRGBA(a0,a1,a2,a3);
        }
    }

    return sipCpp;
}


extern "C" {static void *forceConvertTo_ColorRGBA(PyObject *, int *);}
static void *forceConvertTo_ColorRGBA(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_ColorRGBA))
        return sipConvertToCpp(valobj,sipClass_ColorRGBA,iserrp);

    sipBadClass(sipNm_BALL_ColorRGBA);

    *iserrp = 1;

    return NULL;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_ColorRGBA[] = {
    {(void *)slot_ColorRGBA___repr__, repr_slot},
    {(void *)slot_ColorRGBA___str__, str_slot},
    {(void *)slot_ColorRGBA___ge__, ge_slot},
    {(void *)slot_ColorRGBA___gt__, gt_slot},
    {(void *)slot_ColorRGBA___le__, le_slot},
    {(void *)slot_ColorRGBA___lt__, lt_slot},
    {(void *)slot_ColorRGBA___ne__, ne_slot},
    {(void *)slot_ColorRGBA___eq__, eq_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_ColorRGBA[] = {
    {sipNm_BALL_clear, meth_ColorRGBA_clear, METH_VARARGS, NULL},
    {sipNm_BALL_get, meth_ColorRGBA_get, METH_VARARGS, NULL},
    {sipNm_BALL_getAlpha, meth_ColorRGBA_getAlpha, METH_VARARGS, NULL},
    {sipNm_BALL_getBlue, meth_ColorRGBA_getBlue, METH_VARARGS, NULL},
    {sipNm_BALL_getGreen, meth_ColorRGBA_getGreen, METH_VARARGS, NULL},
    {sipNm_BALL_getRed, meth_ColorRGBA_getRed, METH_VARARGS, NULL},
    {sipNm_BALL_set, meth_ColorRGBA_set, METH_VARARGS, NULL},
    {sipNm_BALL_setAlpha, meth_ColorRGBA_setAlpha, METH_VARARGS, NULL},
    {sipNm_BALL_setBlue, meth_ColorRGBA_setBlue, METH_VARARGS, NULL},
    {sipNm_BALL_setGreen, meth_ColorRGBA_setGreen, METH_VARARGS, NULL},
    {sipNm_BALL_setRed, meth_ColorRGBA_setRed, METH_VARARGS, NULL},
    {sipNm_BALL_swap, meth_ColorRGBA_swap, METH_VARARGS, NULL}
};


sipTypeDef sipType_BALL_ColorRGBA = {
    0,
    0,
    "BALL.ColorRGBA",
    0,
    {0, 0, 1},
    0,
    slots_ColorRGBA,
    12, methods_ColorRGBA,
    0, 0,
    0,
    init_ColorRGBA,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_ColorRGBA,
    cast_ColorRGBA,
    release_ColorRGBA,
    forceConvertTo_ColorRGBA,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
