/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLFragmentDB.h"

#include "sipBALLResourceEntry.h"
#include "sipBALLBuildBondsProcessor.h"
#include "sipBALLReconstructFragmentProcessor.h"
#include "sipBALLNormalizeNamesProcessor.h"
#include "sipBALLString.h"
#include "sipBALLFragmentDB.h"
#include "sipBALLResidue.h"
#include "sipBALLMolecule.h"
#include "sipBALLFragment.h"



extern "C" {static PyObject *meth_FragmentDB_destroy(PyObject *, PyObject *);}
static PyObject *meth_FragmentDB_destroy(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        FragmentDB *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_FragmentDB,&sipCpp))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_FragmentDB,sipNm_BALL_destroy);

    return NULL;
}


extern "C" {static PyObject *meth_FragmentDB_init(PyObject *, PyObject *);}
static PyObject *meth_FragmentDB_init(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        FragmentDB *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_FragmentDB,&sipCpp))
        {
            try
            {
            sipCpp->init();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_FragmentDB,sipNm_BALL_init);

    return NULL;
}


extern "C" {static PyObject *meth_FragmentDB_setFilename(PyObject *, PyObject *);}
static PyObject *meth_FragmentDB_setFilename(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const String * a0;
        int a0State = 0;
        FragmentDB *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ1",&sipSelf,sipClass_FragmentDB,&sipCpp,sipClass_String,&a0,&a0State))
        {
            try
            {
            sipCpp->setFilename(*a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_FragmentDB,sipNm_BALL_setFilename);

    return NULL;
}


extern "C" {static PyObject *meth_FragmentDB_getFilename(PyObject *, PyObject *);}
static PyObject *meth_FragmentDB_getFilename(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        FragmentDB *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_FragmentDB,&sipCpp))
        {
            const String *sipRes;

            try
            {
            sipRes = &sipCpp->getFilename();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_FragmentDB,sipNm_BALL_getFilename);

    return NULL;
}


extern "C" {static PyObject *meth_FragmentDB_has(PyObject *, PyObject *);}
static PyObject *meth_FragmentDB_has(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const String * a0;
        int a0State = 0;
        FragmentDB *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ1",&sipSelf,sipClass_FragmentDB,&sipCpp,sipClass_String,&a0,&a0State))
        {
            bool sipRes;

            try
            {
            sipRes = sipCpp->has(*a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_FragmentDB,sipNm_BALL_has);

    return NULL;
}


extern "C" {static PyObject *meth_FragmentDB_getFragmentType(PyObject *, PyObject *);}
static PyObject *meth_FragmentDB_getFragmentType(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const String * a0;
        int a0State = 0;
        FragmentDB *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ1",&sipSelf,sipClass_FragmentDB,&sipCpp,sipClass_String,&a0,&a0State))
        {
            short sipRes;

            try
            {
            sipRes = sipCpp->getFragmentType(*a0);
            }
            catch (...)
            {

            sipReleaseInstance(const_cast<String *>(a0),sipClass_String,a0State);
                sipRaiseUnknownException();
                return NULL;
            }

            sipReleaseInstance(const_cast<String *>(a0),sipClass_String,a0State);

            return PyInt_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_FragmentDB,sipNm_BALL_getFragmentType);

    return NULL;
}


extern "C" {static PyObject *meth_FragmentDB_getFragment(PyObject *, PyObject *);}
static PyObject *meth_FragmentDB_getFragment(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const String * a0;
        int a0State = 0;
        FragmentDB *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ1",&sipSelf,sipClass_FragmentDB,&sipCpp,sipClass_String,&a0,&a0State))
        {
            const Fragment *sipRes;

            try
            {
            sipRes = sipCpp->getFragment(*a0);
            }
            catch (...)
            {

            sipReleaseInstance(const_cast<String *>(a0),sipClass_String,a0State);
                sipRaiseUnknownException();
                return NULL;
            }

            sipReleaseInstance(const_cast<String *>(a0),sipClass_String,a0State);

            return sipConvertFromInstance(const_cast<Fragment *>(sipRes),sipClass_Fragment,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_FragmentDB,sipNm_BALL_getFragment);

    return NULL;
}


extern "C" {static PyObject *meth_FragmentDB_getReferenceFragment(PyObject *, PyObject *);}
static PyObject *meth_FragmentDB_getReferenceFragment(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const Fragment * a0;
        FragmentDB *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_FragmentDB,&sipCpp,sipClass_Fragment,&a0))
        {
            const Fragment *sipRes;

            try
            {
            sipRes = sipCpp->getReferenceFragment(*a0);
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return sipConvertFromInstance(const_cast<Fragment *>(sipRes),sipClass_Fragment,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_FragmentDB,sipNm_BALL_getReferenceFragment);

    return NULL;
}


extern "C" {static PyObject *meth_FragmentDB_getResidue(PyObject *, PyObject *);}
static PyObject *meth_FragmentDB_getResidue(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const String * a0;
        int a0State = 0;
        FragmentDB *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ1",&sipSelf,sipClass_FragmentDB,&sipCpp,sipClass_String,&a0,&a0State))
        {
            const Residue *sipRes;

            try
            {
            sipRes = sipCpp->getResidue(*a0);
            }
            catch (...)
            {

            sipReleaseInstance(const_cast<String *>(a0),sipClass_String,a0State);
                sipRaiseUnknownException();
                return NULL;
            }

            sipReleaseInstance(const_cast<String *>(a0),sipClass_String,a0State);

            return sipConvertFromInstance(const_cast<Residue *>(sipRes),sipClass_Residue,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_FragmentDB,sipNm_BALL_getResidue);

    return NULL;
}


extern "C" {static PyObject *meth_FragmentDB_getFragmentCopy(PyObject *, PyObject *);}
static PyObject *meth_FragmentDB_getFragmentCopy(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const String * a0;
        int a0State = 0;
        FragmentDB *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ1",&sipSelf,sipClass_FragmentDB,&sipCpp,sipClass_String,&a0,&a0State))
        {
            Fragment *sipRes;

            try
            {
            sipRes = sipCpp->getFragmentCopy(*a0);
            }
            catch (...)
            {

            sipReleaseInstance(const_cast<String *>(a0),sipClass_String,a0State);
                sipRaiseUnknownException();
                return NULL;
            }

            sipReleaseInstance(const_cast<String *>(a0),sipClass_String,a0State);

            return sipConvertFromInstance(sipRes,sipClass_Fragment,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_FragmentDB,sipNm_BALL_getFragmentCopy);

    return NULL;
}


extern "C" {static PyObject *meth_FragmentDB_getMoleculeCopy(PyObject *, PyObject *);}
static PyObject *meth_FragmentDB_getMoleculeCopy(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const String * a0;
        int a0State = 0;
        FragmentDB *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ1",&sipSelf,sipClass_FragmentDB,&sipCpp,sipClass_String,&a0,&a0State))
        {
            Molecule *sipRes;

            try
            {
            sipRes = sipCpp->getMoleculeCopy(*a0);
            }
            catch (...)
            {

            sipReleaseInstance(const_cast<String *>(a0),sipClass_String,a0State);
                sipRaiseUnknownException();
                return NULL;
            }

            sipReleaseInstance(const_cast<String *>(a0),sipClass_String,a0State);

            return sipConvertFromInstance(sipRes,sipClass_Molecule,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_FragmentDB,sipNm_BALL_getMoleculeCopy);

    return NULL;
}


extern "C" {static PyObject *meth_FragmentDB_getResidueCopy(PyObject *, PyObject *);}
static PyObject *meth_FragmentDB_getResidueCopy(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const String * a0;
        int a0State = 0;
        FragmentDB *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ1",&sipSelf,sipClass_FragmentDB,&sipCpp,sipClass_String,&a0,&a0State))
        {
            Residue *sipRes;

            try
            {
            sipRes = sipCpp->getResidueCopy(*a0);
            }
            catch (...)
            {

            sipReleaseInstance(const_cast<String *>(a0),sipClass_String,a0State);
                sipRaiseUnknownException();
                return NULL;
            }

            sipReleaseInstance(const_cast<String *>(a0),sipClass_String,a0State);

            return sipConvertFromInstance(sipRes,sipClass_Residue,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_FragmentDB,sipNm_BALL_getResidueCopy);

    return NULL;
}


extern "C" {static PyObject *meth_FragmentDB_getDefaultNamingStandard(PyObject *, PyObject *);}
static PyObject *meth_FragmentDB_getDefaultNamingStandard(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        FragmentDB *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_FragmentDB,&sipCpp))
        {
            const String *sipRes;

            try
            {
            sipRes = &sipCpp->getDefaultNamingStandard();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_FragmentDB,sipNm_BALL_getDefaultNamingStandard);

    return NULL;
}


extern "C" {static PyObject *meth_FragmentDB_isValid(PyObject *, PyObject *);}
static PyObject *meth_FragmentDB_isValid(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        FragmentDB *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_FragmentDB,&sipCpp))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_FragmentDB,sipNm_BALL_isValid);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_FragmentDB(void *, sipWrapperType *);}
static void *cast_FragmentDB(void *ptr,sipWrapperType *targetClass)
{
    if (targetClass == sipClass_FragmentDB)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_FragmentDB(void *, int);}
static void release_FragmentDB(void *ptr,int)
{
    delete reinterpret_cast<FragmentDB *>(ptr);
}


extern "C" {static void dealloc_FragmentDB(sipWrapper *);}
static void dealloc_FragmentDB(sipWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_FragmentDB(sipSelf->u.cppPtr,0);
    }
}


extern "C" {static void *init_FragmentDB(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_FragmentDB(sipWrapper *,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    FragmentDB *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            try
            {
            sipCpp = new FragmentDB();
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
            sipCpp = new FragmentDB(*a0);
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
        const FragmentDB * a0;
        bool a1 = 1;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA|b",sipClass_FragmentDB,&a0,&a1))
        {
            try
            {
            sipCpp = new FragmentDB(*a0,a1);
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
        const FragmentDB * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_FragmentDB,&a0))
        {
            try
            {
            sipCpp = new FragmentDB(*a0);
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


extern "C" {static PyObject *var_FragmentDB_tree(PyObject *, PyObject *);}
static PyObject *var_FragmentDB_tree(PyObject *sipSelf,PyObject *sipPy)
{
    int sipIsErr = 0;
   ResourceEntry *sipVal;
    FragmentDB *sipCpp = reinterpret_cast<FragmentDB *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_FragmentDB));

    if (!sipCpp)
        return NULL;

    if (sipPy == NULL)
    {
        sipVal = sipCpp->tree;

        sipPy = sipConvertFromInstance(sipVal,sipClass_ResourceEntry,NULL);

        return sipPy;
    }

    sipVal = reinterpret_cast<ResourceEntry *>(sipForceConvertToInstance(sipPy,sipClass_ResourceEntry,NULL,0,NULL,&sipIsErr));

    if (sipIsErr)
        return NULL;

    sipCpp->tree = sipVal;

    Py_INCREF(Py_None);
    return Py_None;
}


extern "C" {static PyObject *var_FragmentDB_build_bonds(PyObject *, PyObject *);}
static PyObject *var_FragmentDB_build_bonds(PyObject *sipSelf,PyObject *sipPy)
{
    int sipIsErr = 0;
   BuildBondsProcessor *sipVal;
    FragmentDB *sipCpp = reinterpret_cast<FragmentDB *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_FragmentDB));

    if (!sipCpp)
        return NULL;

    if (sipPy == NULL)
    {
        sipVal = &sipCpp->build_bonds;

        sipPy = sipConvertFromInstance(sipVal,sipClass_BuildBondsProcessor,NULL);

        return sipPy;
    }

    sipVal = reinterpret_cast<BuildBondsProcessor *>(sipForceConvertToInstance(sipPy,sipClass_BuildBondsProcessor,NULL,SIP_NOT_NONE,NULL,&sipIsErr));

    if (sipIsErr)
        return NULL;

    sipCpp->build_bonds = *sipVal;

    Py_INCREF(Py_None);
    return Py_None;
}


extern "C" {static PyObject *var_FragmentDB_add_hydrogens(PyObject *, PyObject *);}
static PyObject *var_FragmentDB_add_hydrogens(PyObject *sipSelf,PyObject *sipPy)
{
    int sipIsErr = 0;
   ReconstructFragmentProcessor *sipVal;
    FragmentDB *sipCpp = reinterpret_cast<FragmentDB *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_FragmentDB));

    if (!sipCpp)
        return NULL;

    if (sipPy == NULL)
    {
        sipVal = &sipCpp->add_hydrogens;

        sipPy = sipConvertFromInstance(sipVal,sipClass_ReconstructFragmentProcessor,NULL);

        return sipPy;
    }

    sipVal = reinterpret_cast<ReconstructFragmentProcessor *>(sipForceConvertToInstance(sipPy,sipClass_ReconstructFragmentProcessor,NULL,SIP_NOT_NONE,NULL,&sipIsErr));

    if (sipIsErr)
        return NULL;

    sipCpp->add_hydrogens = *sipVal;

    Py_INCREF(Py_None);
    return Py_None;
}


extern "C" {static PyObject *var_FragmentDB_normalize_names(PyObject *, PyObject *);}
static PyObject *var_FragmentDB_normalize_names(PyObject *sipSelf,PyObject *sipPy)
{
    int sipIsErr = 0;
   NormalizeNamesProcessor *sipVal;
    FragmentDB *sipCpp = reinterpret_cast<FragmentDB *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_FragmentDB));

    if (!sipCpp)
        return NULL;

    if (sipPy == NULL)
    {
        sipVal = &sipCpp->normalize_names;

        sipPy = sipConvertFromInstance(sipVal,sipClass_NormalizeNamesProcessor,NULL);

        return sipPy;
    }

    sipVal = reinterpret_cast<NormalizeNamesProcessor *>(sipForceConvertToInstance(sipPy,sipClass_NormalizeNamesProcessor,NULL,SIP_NOT_NONE,NULL,&sipIsErr));

    if (sipIsErr)
        return NULL;

    sipCpp->normalize_names = *sipVal;

    Py_INCREF(Py_None);
    return Py_None;
}

PyMethodDef variables_FragmentDB[] = {
    {sipNm_BALL_tree, var_FragmentDB_tree, 0, NULL},
    {sipNm_BALL_build_bonds, var_FragmentDB_build_bonds, 0, NULL},
    {sipNm_BALL_add_hydrogens, var_FragmentDB_add_hydrogens, 0, NULL},
    {sipNm_BALL_normalize_names, var_FragmentDB_normalize_names, 0, NULL},
    {0, 0, 0, 0}
};


extern "C" {static void *forceConvertTo_FragmentDB(PyObject *, int *);}
static void *forceConvertTo_FragmentDB(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_FragmentDB))
        return sipConvertToCpp(valobj,sipClass_FragmentDB,iserrp);

    sipBadClass(sipNm_BALL_FragmentDB);

    *iserrp = 1;

    return NULL;
}


static PyMethodDef methods_FragmentDB[] = {
    {sipNm_BALL_destroy, meth_FragmentDB_destroy, METH_VARARGS, NULL},
    {sipNm_BALL_getDefaultNamingStandard, meth_FragmentDB_getDefaultNamingStandard, METH_VARARGS, NULL},
    {sipNm_BALL_getFilename, meth_FragmentDB_getFilename, METH_VARARGS, NULL},
    {sipNm_BALL_getFragment, meth_FragmentDB_getFragment, METH_VARARGS, NULL},
    {sipNm_BALL_getFragmentCopy, meth_FragmentDB_getFragmentCopy, METH_VARARGS, NULL},
    {sipNm_BALL_getFragmentType, meth_FragmentDB_getFragmentType, METH_VARARGS, NULL},
    {sipNm_BALL_getMoleculeCopy, meth_FragmentDB_getMoleculeCopy, METH_VARARGS, NULL},
    {sipNm_BALL_getReferenceFragment, meth_FragmentDB_getReferenceFragment, METH_VARARGS, NULL},
    {sipNm_BALL_getResidue, meth_FragmentDB_getResidue, METH_VARARGS, NULL},
    {sipNm_BALL_getResidueCopy, meth_FragmentDB_getResidueCopy, METH_VARARGS, NULL},
    {sipNm_BALL_has, meth_FragmentDB_has, METH_VARARGS, NULL},
    {sipNm_BALL_init, meth_FragmentDB_init, METH_VARARGS, NULL},
    {sipNm_BALL_isValid, meth_FragmentDB_isValid, METH_VARARGS, NULL},
    {sipNm_BALL_setFilename, meth_FragmentDB_setFilename, METH_VARARGS, NULL}
};

static sipEnumMemberDef enummembers_FragmentDB[] = {
    {sipNm_BALL_TYPE__FRAGMENT, FragmentDB::TYPE__FRAGMENT, 15},
    {sipNm_BALL_TYPE__MOLECULE, FragmentDB::TYPE__MOLECULE, 15},
    {sipNm_BALL_TYPE__RESIDUE, FragmentDB::TYPE__RESIDUE, 15},
    {sipNm_BALL_TYPE__UNKNOWN, FragmentDB::TYPE__UNKNOWN, 15},
};


sipTypeDef sipType_BALL_FragmentDB = {
    0,
    0,
    "BALL.FragmentDB",
    0,
    {0, 0, 1},
    0,
    0,
    14, methods_FragmentDB,
    4, enummembers_FragmentDB,
    variables_FragmentDB,
    init_FragmentDB,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_FragmentDB,
    cast_FragmentDB,
    release_FragmentDB,
    forceConvertTo_FragmentDB,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
