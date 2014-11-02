/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLAminoAcidDescriptor.h"

#include "sipBALLString.h"
#include "sipBALLAngle.h"
#include "sipBALLAminoAcidDescriptor.h"


sipAminoAcidDescriptor::sipAminoAcidDescriptor(): AminoAcidDescriptor(), sipPySelf(0)
{
    sipCommonCtor(NULL,0);
}

sipAminoAcidDescriptor::sipAminoAcidDescriptor(const String& a0,const Angle& a1,const Angle& a2,const Angle& a3): AminoAcidDescriptor(a0,a1,a2,a3), sipPySelf(0)
{
    sipCommonCtor(NULL,0);
}

sipAminoAcidDescriptor::sipAminoAcidDescriptor(const AminoAcidDescriptor& a0): AminoAcidDescriptor(a0), sipPySelf(0)
{
    sipCommonCtor(NULL,0);
}

sipAminoAcidDescriptor::~sipAminoAcidDescriptor()
{
    sipCommonDtor(sipPySelf);
}


extern "C" {static PyObject *meth_AminoAcidDescriptor_setAminoAcidType(PyObject *, PyObject *);}
static PyObject *meth_AminoAcidDescriptor_setAminoAcidType(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const String * a0;
        int a0State = 0;
        AminoAcidDescriptor *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ1",&sipSelf,sipClass_AminoAcidDescriptor,&sipCpp,sipClass_String,&a0,&a0State))
        {
            try
            {
            sipCpp->setAminoAcidType(*a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_AminoAcidDescriptor,sipNm_BALL_setAminoAcidType);

    return NULL;
}


extern "C" {static PyObject *meth_AminoAcidDescriptor_setPhi(PyObject *, PyObject *);}
static PyObject *meth_AminoAcidDescriptor_setPhi(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const Angle * a0;
        AminoAcidDescriptor *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_AminoAcidDescriptor,&sipCpp,sipClass_Angle,&a0))
        {
            try
            {
            sipCpp->setPhi(*a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_AminoAcidDescriptor,sipNm_BALL_setPhi);

    return NULL;
}


extern "C" {static PyObject *meth_AminoAcidDescriptor_setPsi(PyObject *, PyObject *);}
static PyObject *meth_AminoAcidDescriptor_setPsi(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const Angle * a0;
        AminoAcidDescriptor *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_AminoAcidDescriptor,&sipCpp,sipClass_Angle,&a0))
        {
            try
            {
            sipCpp->setPsi(*a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_AminoAcidDescriptor,sipNm_BALL_setPsi);

    return NULL;
}


extern "C" {static PyObject *meth_AminoAcidDescriptor_setOmega(PyObject *, PyObject *);}
static PyObject *meth_AminoAcidDescriptor_setOmega(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const Angle * a0;
        AminoAcidDescriptor *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_AminoAcidDescriptor,&sipCpp,sipClass_Angle,&a0))
        {
            try
            {
            sipCpp->setOmega(*a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_AminoAcidDescriptor,sipNm_BALL_setOmega);

    return NULL;
}


extern "C" {static PyObject *meth_AminoAcidDescriptor_getType(PyObject *, PyObject *);}
static PyObject *meth_AminoAcidDescriptor_getType(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        AminoAcidDescriptor *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_AminoAcidDescriptor,&sipCpp))
        {
            const String *sipRes;

            try
            {
            sipRes = &sipCpp->getType();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_AminoAcidDescriptor,sipNm_BALL_getType);

    return NULL;
}


extern "C" {static PyObject *meth_AminoAcidDescriptor_getPhi(PyObject *, PyObject *);}
static PyObject *meth_AminoAcidDescriptor_getPhi(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        AminoAcidDescriptor *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_AminoAcidDescriptor,&sipCpp))
        {
            const Angle *sipRes;

            try
            {
            sipRes = &sipCpp->getPhi();
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return sipConvertFromInstance(const_cast<Angle *>(sipRes),sipClass_Angle,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_AminoAcidDescriptor,sipNm_BALL_getPhi);

    return NULL;
}


extern "C" {static PyObject *meth_AminoAcidDescriptor_getPsi(PyObject *, PyObject *);}
static PyObject *meth_AminoAcidDescriptor_getPsi(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        AminoAcidDescriptor *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_AminoAcidDescriptor,&sipCpp))
        {
            const Angle *sipRes;

            try
            {
            sipRes = &sipCpp->getPsi();
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return sipConvertFromInstance(const_cast<Angle *>(sipRes),sipClass_Angle,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_AminoAcidDescriptor,sipNm_BALL_getPsi);

    return NULL;
}


extern "C" {static PyObject *meth_AminoAcidDescriptor_getOmega(PyObject *, PyObject *);}
static PyObject *meth_AminoAcidDescriptor_getOmega(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        AminoAcidDescriptor *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_AminoAcidDescriptor,&sipCpp))
        {
            const Angle *sipRes;

            try
            {
            sipRes = &sipCpp->getOmega();
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return sipConvertFromInstance(const_cast<Angle *>(sipRes),sipClass_Angle,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_AminoAcidDescriptor,sipNm_BALL_getOmega);

    return NULL;
}


extern "C" {static PyObject *slot_AminoAcidDescriptor___str__(PyObject *sipSelf);}
static PyObject *slot_AminoAcidDescriptor___str__(PyObject *sipSelf)
{
    AminoAcidDescriptor *sipCpp = reinterpret_cast<AminoAcidDescriptor *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_AminoAcidDescriptor));

    if (!sipCpp)
        return 0;


    {
        {
            PyObject * sipRes = 0;

#line 45 "peptideBuilder.sip"
	sipRes = PyString_FromString((String("{ ") + sipCpp->getType() + " " + 
			String(sipCpp->getPhi().toDegree()) + " " + 
			String(sipCpp->getPsi().toDegree()) + " " + 
			String(sipCpp->getOmega().toDegree()) + " }").c_str());
#line 327 "sipBALLAminoAcidDescriptor.C"

            return sipRes;
        }
    }
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_AminoAcidDescriptor(void *, sipWrapperType *);}
static void *cast_AminoAcidDescriptor(void *ptr,sipWrapperType *targetClass)
{
    if (targetClass == sipClass_AminoAcidDescriptor)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_AminoAcidDescriptor(void *, int);}
static void release_AminoAcidDescriptor(void *ptr,int state)
{
    if (state & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipAminoAcidDescriptor *>(ptr);
    else
        delete reinterpret_cast<AminoAcidDescriptor *>(ptr);
}


extern "C" {static void dealloc_AminoAcidDescriptor(sipWrapper *);}
static void dealloc_AminoAcidDescriptor(sipWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipAminoAcidDescriptor *>(sipSelf->u.cppPtr)->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_AminoAcidDescriptor(sipSelf->u.cppPtr,sipSelf->flags);
    }
}


extern "C" {static void *init_AminoAcidDescriptor(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_AminoAcidDescriptor(sipWrapper *sipSelf,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    sipAminoAcidDescriptor *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            try
            {
            sipCpp = new sipAminoAcidDescriptor();
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
        const Angle * a1;
        const Angle * a2;
        const Angle * a3;

        if (sipParseArgs(sipArgsParsed,sipArgs,"J1JAJAJA",sipClass_String,&a0,&a0State,sipClass_Angle,&a1,sipClass_Angle,&a2,sipClass_Angle,&a3))
        {
            try
            {
            sipCpp = new sipAminoAcidDescriptor(*a0,*a1,*a2,*a3);
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
        const AminoAcidDescriptor * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_AminoAcidDescriptor,&a0))
        {
            try
            {
            sipCpp = new sipAminoAcidDescriptor(*a0);
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


extern "C" {static void *forceConvertTo_AminoAcidDescriptor(PyObject *, int *);}
static void *forceConvertTo_AminoAcidDescriptor(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_AminoAcidDescriptor))
        return sipConvertToCpp(valobj,sipClass_AminoAcidDescriptor,iserrp);

    sipBadClass(sipNm_BALL_AminoAcidDescriptor);

    *iserrp = 1;

    return NULL;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_AminoAcidDescriptor[] = {
    {(void *)slot_AminoAcidDescriptor___str__, str_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_AminoAcidDescriptor[] = {
    {sipNm_BALL_getOmega, meth_AminoAcidDescriptor_getOmega, METH_VARARGS, NULL},
    {sipNm_BALL_getPhi, meth_AminoAcidDescriptor_getPhi, METH_VARARGS, NULL},
    {sipNm_BALL_getPsi, meth_AminoAcidDescriptor_getPsi, METH_VARARGS, NULL},
    {sipNm_BALL_getType, meth_AminoAcidDescriptor_getType, METH_VARARGS, NULL},
    {sipNm_BALL_setAminoAcidType, meth_AminoAcidDescriptor_setAminoAcidType, METH_VARARGS, NULL},
    {sipNm_BALL_setOmega, meth_AminoAcidDescriptor_setOmega, METH_VARARGS, NULL},
    {sipNm_BALL_setPhi, meth_AminoAcidDescriptor_setPhi, METH_VARARGS, NULL},
    {sipNm_BALL_setPsi, meth_AminoAcidDescriptor_setPsi, METH_VARARGS, NULL}
};


sipTypeDef sipType_BALL_AminoAcidDescriptor = {
    0,
    0,
    "BALL.AminoAcidDescriptor",
    0,
    {0, 0, 1},
    0,
    slots_AminoAcidDescriptor,
    8, methods_AminoAcidDescriptor,
    0, 0,
    0,
    init_AminoAcidDescriptor,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_AminoAcidDescriptor,
    cast_AminoAcidDescriptor,
    release_AminoAcidDescriptor,
    forceConvertTo_AminoAcidDescriptor,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
