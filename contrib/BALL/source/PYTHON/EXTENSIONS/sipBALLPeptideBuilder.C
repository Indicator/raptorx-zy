/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLPeptideBuilder.h"

#include "sipBALLString.h"
#include "sipBALLAngle.h"
#include "sipBALLPeptideBuilder.h"
#include "sipBALLFragmentDB.h"
#include "sipBALLProtein.h"
#include "sipBALLAminoAcidDescriptor.h"


sipPeptideBuilder::sipPeptideBuilder(): PeptideBuilder(), sipPySelf(0)
{
    sipCommonCtor(NULL,0);
}

sipPeptideBuilder::sipPeptideBuilder(const String& a0,const Angle& a1,const Angle& a2,const Angle& a3): PeptideBuilder(a0,a1,a2,a3), sipPySelf(0)
{
    sipCommonCtor(NULL,0);
}

sipPeptideBuilder::sipPeptideBuilder(const PeptideBuilder& a0): PeptideBuilder(a0), sipPySelf(0)
{
    sipCommonCtor(NULL,0);
}

sipPeptideBuilder::~sipPeptideBuilder()
{
    sipCommonDtor(sipPySelf);
}


extern "C" {static PyObject *meth_PeptideBuilder_addAminoAcid(PyObject *, PyObject *);}
static PyObject *meth_PeptideBuilder_addAminoAcid(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const String * a0;
        int a0State = 0;
        const Angle * a1;
        const Angle * a2;
        const Angle * a3;
        PeptideBuilder *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ1JAJAJA",&sipSelf,sipClass_PeptideBuilder,&sipCpp,sipClass_String,&a0,&a0State,sipClass_Angle,&a1,sipClass_Angle,&a2,sipClass_Angle,&a3))
        {
            try
            {
            sipCpp->addAminoAcid(*a0,*a1,*a2,*a3);
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

    {
        const AminoAcidDescriptor * a0;
        PeptideBuilder *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_PeptideBuilder,&sipCpp,sipClass_AminoAcidDescriptor,&a0))
        {
            try
            {
            sipCpp->addAminoAcid(*a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_PeptideBuilder,sipNm_BALL_addAminoAcid);

    return NULL;
}


extern "C" {static PyObject *meth_PeptideBuilder_setChainName(PyObject *, PyObject *);}
static PyObject *meth_PeptideBuilder_setChainName(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const String * a0;
        int a0State = 0;
        PeptideBuilder *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ1",&sipSelf,sipClass_PeptideBuilder,&sipCpp,sipClass_String,&a0,&a0State))
        {
            try
            {
            sipCpp->setChainName(*a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_PeptideBuilder,sipNm_BALL_setChainName);

    return NULL;
}


extern "C" {static PyObject *meth_PeptideBuilder_getChainName(PyObject *, PyObject *);}
static PyObject *meth_PeptideBuilder_getChainName(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        PeptideBuilder *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_PeptideBuilder,&sipCpp))
        {
            const String *sipRes;

            try
            {
            sipRes = &sipCpp->getChainName();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_PeptideBuilder,sipNm_BALL_getChainName);

    return NULL;
}


extern "C" {static PyObject *meth_PeptideBuilder_setProteinName(PyObject *, PyObject *);}
static PyObject *meth_PeptideBuilder_setProteinName(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const String * a0;
        int a0State = 0;
        PeptideBuilder *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ1",&sipSelf,sipClass_PeptideBuilder,&sipCpp,sipClass_String,&a0,&a0State))
        {
            try
            {
            sipCpp->setProteinName(*a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_PeptideBuilder,sipNm_BALL_setProteinName);

    return NULL;
}


extern "C" {static PyObject *meth_PeptideBuilder_getProteinName(PyObject *, PyObject *);}
static PyObject *meth_PeptideBuilder_getProteinName(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        PeptideBuilder *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_PeptideBuilder,&sipCpp))
        {
            const String *sipRes;

            try
            {
            sipRes = &sipCpp->getProteinName();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_PeptideBuilder,sipNm_BALL_getProteinName);

    return NULL;
}


extern "C" {static PyObject *meth_PeptideBuilder_construct(PyObject *, PyObject *);}
static PyObject *meth_PeptideBuilder_construct(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        PeptideBuilder *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_PeptideBuilder,&sipCpp))
        {
            Protein *sipRes;

            try
            {
            sipRes = sipCpp->construct();
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return sipConvertFromInstance(sipRes,sipClass_Protein,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_PeptideBuilder,sipNm_BALL_construct);

    return NULL;
}


extern "C" {static PyObject *meth_PeptideBuilder_setFragmentDB(PyObject *, PyObject *);}
static PyObject *meth_PeptideBuilder_setFragmentDB(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const FragmentDB * a0;
        PeptideBuilder *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ@",&sipSelf,sipClass_PeptideBuilder,&sipCpp,sipClass_FragmentDB,&a0))
        {
            sipCpp->setFragmentDB(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_PeptideBuilder,sipNm_BALL_setFragmentDB);

    return NULL;
}


extern "C" {static PyObject *meth_PeptideBuilder_getFragmentDB(PyObject *, PyObject *);}
static PyObject *meth_PeptideBuilder_getFragmentDB(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        PeptideBuilder *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_PeptideBuilder,&sipCpp))
        {
            const FragmentDB *sipRes;

            sipRes = sipCpp->getFragmentDB();

            return sipConvertFromInstance(const_cast<FragmentDB *>(sipRes),sipClass_FragmentDB,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_PeptideBuilder,sipNm_BALL_getFragmentDB);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_PeptideBuilder(void *, sipWrapperType *);}
static void *cast_PeptideBuilder(void *ptr,sipWrapperType *targetClass)
{
    if (targetClass == sipClass_PeptideBuilder)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_PeptideBuilder(void *, int);}
static void release_PeptideBuilder(void *ptr,int state)
{
    if (state & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipPeptideBuilder *>(ptr);
    else
        delete reinterpret_cast<PeptideBuilder *>(ptr);
}


extern "C" {static void dealloc_PeptideBuilder(sipWrapper *);}
static void dealloc_PeptideBuilder(sipWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipPeptideBuilder *>(sipSelf->u.cppPtr)->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_PeptideBuilder(sipSelf->u.cppPtr,sipSelf->flags);
    }
}


extern "C" {static void *init_PeptideBuilder(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_PeptideBuilder(sipWrapper *sipSelf,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    sipPeptideBuilder *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            try
            {
            sipCpp = new sipPeptideBuilder();
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
            sipCpp = new sipPeptideBuilder(*a0,*a1,*a2,*a3);
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
        const PeptideBuilder * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_PeptideBuilder,&a0))
        {
            try
            {
            sipCpp = new sipPeptideBuilder(*a0);
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


extern "C" {static void *forceConvertTo_PeptideBuilder(PyObject *, int *);}
static void *forceConvertTo_PeptideBuilder(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_PeptideBuilder))
        return sipConvertToCpp(valobj,sipClass_PeptideBuilder,iserrp);

    sipBadClass(sipNm_BALL_PeptideBuilder);

    *iserrp = 1;

    return NULL;
}


static PyMethodDef methods_PeptideBuilder[] = {
    {sipNm_BALL_addAminoAcid, meth_PeptideBuilder_addAminoAcid, METH_VARARGS, NULL},
    {sipNm_BALL_construct, meth_PeptideBuilder_construct, METH_VARARGS, NULL},
    {sipNm_BALL_getChainName, meth_PeptideBuilder_getChainName, METH_VARARGS, NULL},
    {sipNm_BALL_getFragmentDB, meth_PeptideBuilder_getFragmentDB, METH_VARARGS, NULL},
    {sipNm_BALL_getProteinName, meth_PeptideBuilder_getProteinName, METH_VARARGS, NULL},
    {sipNm_BALL_setChainName, meth_PeptideBuilder_setChainName, METH_VARARGS, NULL},
    {sipNm_BALL_setFragmentDB, meth_PeptideBuilder_setFragmentDB, METH_VARARGS, NULL},
    {sipNm_BALL_setProteinName, meth_PeptideBuilder_setProteinName, METH_VARARGS, NULL}
};


sipTypeDef sipType_BALL_PeptideBuilder = {
    0,
    0,
    "BALL.PeptideBuilder",
    0,
    {0, 0, 1},
    0,
    0,
    8, methods_PeptideBuilder,
    0, 0,
    0,
    init_PeptideBuilder,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_PeptideBuilder,
    cast_PeptideBuilder,
    release_PeptideBuilder,
    forceConvertTo_PeptideBuilder,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
