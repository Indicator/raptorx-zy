/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLPDBInfo.h"

#include "sipBALLPDBInfo.h"
#include "sipBALLPyIndexList.h"
#include "sipBALLPDB.h"
#include "sipBALLString.h"
#include "sipBALLPosition.h"
#include "sipBALLPDBRecords.h"


sipPDBInfo::sipPDBInfo() throw(): PDBInfo(), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,1);
}

sipPDBInfo::sipPDBInfo(const PDBInfo& a0) throw(): PDBInfo(a0), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,1);
}

sipPDBInfo::~sipPDBInfo() throw()
{
    sipCommonDtor(sipPySelf);
}

void sipPDBInfo::clear()
{
    extern void sipVH_BALL_0(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipNm_BALL_clear);

    if (!meth)
    {
        PDBInfo::clear();
        return;
    }

    sipVH_BALL_0(sipGILState,meth);
}


extern "C" {static PyObject *meth_PDBInfo_clear(PyObject *, PyObject *);}
static PyObject *meth_PDBInfo_clear(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = !sipSelf;

    {
        PDBInfo *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_PDBInfo,&sipCpp))
        {
            try
            {
            (sipSelfWasArg ? sipCpp->PDBInfo::clear() : sipCpp->clear());
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_PDBInfo,sipNm_BALL_clear);

    return NULL;
}


extern "C" {static PyObject *meth_PDBInfo_getSkippedRecords(PyObject *, PyObject *);}
static PyObject *meth_PDBInfo_getSkippedRecords(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        PDBInfo *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_PDBInfo,&sipCpp))
        {
            PDBRecords *sipRes;

            try
            {
            sipRes = &sipCpp->getSkippedRecords();
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return sipConvertFromInstance(sipRes,sipClass_PDBRecords,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_PDBInfo,sipNm_BALL_getSkippedRecords);

    return NULL;
}


extern "C" {static PyObject *meth_PDBInfo_getInvalidRecords(PyObject *, PyObject *);}
static PyObject *meth_PDBInfo_getInvalidRecords(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        PDBInfo *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_PDBInfo,&sipCpp))
        {
            PDBRecords *sipRes;

            try
            {
            sipRes = &sipCpp->getInvalidRecords();
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return sipConvertFromInstance(sipRes,sipClass_PDBRecords,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_PDBInfo,sipNm_BALL_getInvalidRecords);

    return NULL;
}


extern "C" {static PyObject *meth_PDBInfo_getFilename(PyObject *, PyObject *);}
static PyObject *meth_PDBInfo_getFilename(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        PDBInfo *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_PDBInfo,&sipCpp))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_PDBInfo,sipNm_BALL_getFilename);

    return NULL;
}


extern "C" {static PyObject *meth_PDBInfo_setFilename(PyObject *, PyObject *);}
static PyObject *meth_PDBInfo_setFilename(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const String * a0;
        int a0State = 0;
        PDBInfo *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ1",&sipSelf,sipClass_PDBInfo,&sipCpp,sipClass_String,&a0,&a0State))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_PDBInfo,sipNm_BALL_setFilename);

    return NULL;
}


extern "C" {static PyObject *meth_PDBInfo_getID(PyObject *, PyObject *);}
static PyObject *meth_PDBInfo_getID(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        PDBInfo *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_PDBInfo,&sipCpp))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_PDBInfo,sipNm_BALL_getID);

    return NULL;
}


extern "C" {static PyObject *meth_PDBInfo_setID(PyObject *, PyObject *);}
static PyObject *meth_PDBInfo_setID(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const String * a0;
        int a0State = 0;
        PDBInfo *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ1",&sipSelf,sipClass_PDBInfo,&sipCpp,sipClass_String,&a0,&a0State))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_PDBInfo,sipNm_BALL_setID);

    return NULL;
}


extern "C" {static PyObject *meth_PDBInfo_getNumberOfRecords(PyObject *, PyObject *);}
static PyObject *meth_PDBInfo_getNumberOfRecords(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        PDBInfo *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_PDBInfo,&sipCpp))
        {
            int sipRes;

            try
            {
            sipRes = sipCpp->getNumberOfRecords();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_PDBInfo,sipNm_BALL_getNumberOfRecords);

    return NULL;
}


extern "C" {static PyObject *meth_PDBInfo_setNumberOfRecords(PyObject *, PyObject *);}
static PyObject *meth_PDBInfo_setNumberOfRecords(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        int a0;
        PDBInfo *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bi",&sipSelf,sipClass_PDBInfo,&sipCpp,&a0))
        {
            try
            {
            sipCpp->setNumberOfRecords(a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_PDBInfo,sipNm_BALL_setNumberOfRecords);

    return NULL;
}


extern "C" {static PyObject *meth_PDBInfo_getNumberOfModels(PyObject *, PyObject *);}
static PyObject *meth_PDBInfo_getNumberOfModels(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        PDBInfo *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_PDBInfo,&sipCpp))
        {
            int sipRes;

            try
            {
            sipRes = sipCpp->getNumberOfModels();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_PDBInfo,sipNm_BALL_getNumberOfModels);

    return NULL;
}


extern "C" {static PyObject *meth_PDBInfo_setNumberOfModels(PyObject *, PyObject *);}
static PyObject *meth_PDBInfo_setNumberOfModels(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        int a0;
        PDBInfo *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bi",&sipSelf,sipClass_PDBInfo,&sipCpp,&a0))
        {
            try
            {
            sipCpp->setNumberOfModels(a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_PDBInfo,sipNm_BALL_setNumberOfModels);

    return NULL;
}


extern "C" {static PyObject *meth_PDBInfo_getCurrentModel(PyObject *, PyObject *);}
static PyObject *meth_PDBInfo_getCurrentModel(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        PDBInfo *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_PDBInfo,&sipCpp))
        {
            Position *sipRes;

            try
            {
            sipRes = new Position(sipCpp->getCurrentModel());
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            PyObject *sipResObj = sipConvertFromMappedType(sipRes,sipMappedType_Position,NULL);
            delete sipRes;

            return sipResObj;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_PDBInfo,sipNm_BALL_getCurrentModel);

    return NULL;
}


extern "C" {static PyObject *meth_PDBInfo_setCurrentModel(PyObject *, PyObject *);}
static PyObject *meth_PDBInfo_setCurrentModel(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Position * a0;
        int a0State = 0;
        PDBInfo *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BM1",&sipSelf,sipClass_PDBInfo,&sipCpp,sipMappedType_Position,&a0,&a0State))
        {
            try
            {
            sipCpp->setCurrentModel(*a0);
            }
            catch (...)
            {

            sipReleaseMappedType(a0,sipMappedType_Position,a0State);
                sipRaiseUnknownException();
                return NULL;
            }

            sipReleaseMappedType(a0,sipMappedType_Position,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_PDBInfo,sipNm_BALL_setCurrentModel);

    return NULL;
}


extern "C" {static PyObject *meth_PDBInfo_getNumberOfATOMRecords(PyObject *, PyObject *);}
static PyObject *meth_PDBInfo_getNumberOfATOMRecords(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        PDBInfo *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_PDBInfo,&sipCpp))
        {
            int sipRes;

            try
            {
            sipRes = sipCpp->getNumberOfATOMRecords();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_PDBInfo,sipNm_BALL_getNumberOfATOMRecords);

    return NULL;
}


extern "C" {static PyObject *meth_PDBInfo_setNumberOfATOMRecords(PyObject *, PyObject *);}
static PyObject *meth_PDBInfo_setNumberOfATOMRecords(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        int a0;
        PDBInfo *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bi",&sipSelf,sipClass_PDBInfo,&sipCpp,&a0))
        {
            try
            {
            sipCpp->setNumberOfATOMRecords(a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_PDBInfo,sipNm_BALL_setNumberOfATOMRecords);

    return NULL;
}


extern "C" {static PyObject *meth_PDBInfo_getNumberOfHETATMRecords(PyObject *, PyObject *);}
static PyObject *meth_PDBInfo_getNumberOfHETATMRecords(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        PDBInfo *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_PDBInfo,&sipCpp))
        {
            int sipRes;

            try
            {
            sipRes = sipCpp->getNumberOfHETATMRecords();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_PDBInfo,sipNm_BALL_getNumberOfHETATMRecords);

    return NULL;
}


extern "C" {static PyObject *meth_PDBInfo_setNumberOfHETATMRecords(PyObject *, PyObject *);}
static PyObject *meth_PDBInfo_setNumberOfHETATMRecords(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        int a0;
        PDBInfo *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bi",&sipSelf,sipClass_PDBInfo,&sipCpp,&a0))
        {
            try
            {
            sipCpp->setNumberOfHETATMRecords(a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_PDBInfo,sipNm_BALL_setNumberOfHETATMRecords);

    return NULL;
}


extern "C" {static PyObject *meth_PDBInfo_getName(PyObject *, PyObject *);}
static PyObject *meth_PDBInfo_getName(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        PDBInfo *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_PDBInfo,&sipCpp))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_PDBInfo,sipNm_BALL_getName);

    return NULL;
}


extern "C" {static PyObject *meth_PDBInfo_setName(PyObject *, PyObject *);}
static PyObject *meth_PDBInfo_setName(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const String * a0;
        int a0State = 0;
        PDBInfo *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ1",&sipSelf,sipClass_PDBInfo,&sipCpp,sipClass_String,&a0,&a0State))
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_PDBInfo,sipNm_BALL_setName);

    return NULL;
}


extern "C" {static PyObject *meth_PDBInfo_getRecordIndices(PyObject *, PyObject *);}
static PyObject *meth_PDBInfo_getRecordIndices(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        PDB::RecordType a0;
        PDBInfo *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BE",&sipSelf,sipClass_PDBInfo,&sipCpp,sipEnum_PDB_RecordType,&a0))
        {
            PyIndexList *sipRes;

            try
            {
            sipRes = new PyIndexList(sipCpp->getRecordIndices(a0));
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            PyObject *sipResObj = sipConvertFromMappedType(sipRes,sipMappedType_PyIndexList,NULL);
            delete sipRes;

            return sipResObj;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_PDBInfo,sipNm_BALL_getRecordIndices);

    return NULL;
}


extern "C" {static PyObject *slot_PDBInfo___ne__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_PDBInfo___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    PDBInfo *sipCpp = reinterpret_cast<PDBInfo *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_PDBInfo));

    if (!sipCpp)
        return 0;

    int sipArgsParsed = 0;

    {
        const PDBInfo * a0;

        if (sipParseArgs(&sipArgsParsed,sipArg,"JA",sipClass_PDBInfo,&a0))
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

    return sipPySlotExtend(&sipModuleAPI_BALL,ne_slot,sipClass_PDBInfo,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_PDBInfo___eq__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_PDBInfo___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    PDBInfo *sipCpp = reinterpret_cast<PDBInfo *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_PDBInfo));

    if (!sipCpp)
        return 0;

    int sipArgsParsed = 0;

    {
        const PDBInfo * a0;

        if (sipParseArgs(&sipArgsParsed,sipArg,"JA",sipClass_PDBInfo,&a0))
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

    return sipPySlotExtend(&sipModuleAPI_BALL,eq_slot,sipClass_PDBInfo,sipSelf,sipArg);
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_PDBInfo(void *, sipWrapperType *);}
static void *cast_PDBInfo(void *ptr,sipWrapperType *targetClass)
{
    if (targetClass == sipClass_PDBInfo)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_PDBInfo(void *, int);}
static void release_PDBInfo(void *ptr,int state)
{
    if (state & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipPDBInfo *>(ptr);
    else
        delete reinterpret_cast<PDBInfo *>(ptr);
}


extern "C" {static void dealloc_PDBInfo(sipWrapper *);}
static void dealloc_PDBInfo(sipWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipPDBInfo *>(sipSelf->u.cppPtr)->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_PDBInfo(sipSelf->u.cppPtr,sipSelf->flags);
    }
}


extern "C" {static void *init_PDBInfo(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_PDBInfo(sipWrapper *sipSelf,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    sipPDBInfo *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            sipCpp = new sipPDBInfo();
        }
    }

    if (!sipCpp)
    {
        const PDBInfo * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_PDBInfo,&a0))
        {
            sipCpp = new sipPDBInfo(*a0);
        }
    }

    if (sipCpp)
        sipCpp->sipPySelf = sipSelf;

    return sipCpp;
}


extern "C" {static void *forceConvertTo_PDBInfo(PyObject *, int *);}
static void *forceConvertTo_PDBInfo(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_PDBInfo))
        return sipConvertToCpp(valobj,sipClass_PDBInfo,iserrp);

    sipBadClass(sipNm_BALL_PDBInfo);

    *iserrp = 1;

    return NULL;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_PDBInfo[] = {
    {(void *)slot_PDBInfo___ne__, ne_slot},
    {(void *)slot_PDBInfo___eq__, eq_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_PDBInfo[] = {
    {sipNm_BALL_clear, meth_PDBInfo_clear, METH_VARARGS, NULL},
    {sipNm_BALL_getCurrentModel, meth_PDBInfo_getCurrentModel, METH_VARARGS, NULL},
    {sipNm_BALL_getFilename, meth_PDBInfo_getFilename, METH_VARARGS, NULL},
    {sipNm_BALL_getID, meth_PDBInfo_getID, METH_VARARGS, NULL},
    {sipNm_BALL_getInvalidRecords, meth_PDBInfo_getInvalidRecords, METH_VARARGS, NULL},
    {sipNm_BALL_getName, meth_PDBInfo_getName, METH_VARARGS, NULL},
    {sipNm_BALL_getNumberOfATOMRecords, meth_PDBInfo_getNumberOfATOMRecords, METH_VARARGS, NULL},
    {sipNm_BALL_getNumberOfHETATMRecords, meth_PDBInfo_getNumberOfHETATMRecords, METH_VARARGS, NULL},
    {sipNm_BALL_getNumberOfModels, meth_PDBInfo_getNumberOfModels, METH_VARARGS, NULL},
    {sipNm_BALL_getNumberOfRecords, meth_PDBInfo_getNumberOfRecords, METH_VARARGS, NULL},
    {sipNm_BALL_getRecordIndices, meth_PDBInfo_getRecordIndices, METH_VARARGS, NULL},
    {sipNm_BALL_getSkippedRecords, meth_PDBInfo_getSkippedRecords, METH_VARARGS, NULL},
    {sipNm_BALL_setCurrentModel, meth_PDBInfo_setCurrentModel, METH_VARARGS, NULL},
    {sipNm_BALL_setFilename, meth_PDBInfo_setFilename, METH_VARARGS, NULL},
    {sipNm_BALL_setID, meth_PDBInfo_setID, METH_VARARGS, NULL},
    {sipNm_BALL_setName, meth_PDBInfo_setName, METH_VARARGS, NULL},
    {sipNm_BALL_setNumberOfATOMRecords, meth_PDBInfo_setNumberOfATOMRecords, METH_VARARGS, NULL},
    {sipNm_BALL_setNumberOfHETATMRecords, meth_PDBInfo_setNumberOfHETATMRecords, METH_VARARGS, NULL},
    {sipNm_BALL_setNumberOfModels, meth_PDBInfo_setNumberOfModels, METH_VARARGS, NULL},
    {sipNm_BALL_setNumberOfRecords, meth_PDBInfo_setNumberOfRecords, METH_VARARGS, NULL}
};


sipTypeDef sipType_BALL_PDBInfo = {
    0,
    0,
    "BALL.PDBInfo",
    0,
    {0, 0, 1},
    0,
    slots_PDBInfo,
    20, methods_PDBInfo,
    0, 0,
    0,
    init_PDBInfo,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_PDBInfo,
    cast_PDBInfo,
    release_PDBInfo,
    forceConvertTo_PDBInfo,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
