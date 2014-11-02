/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLRepresentationManager.h"

#include "sipBALLMainControl.h"
#include "sipBALLRepresentationManager.h"
#include "sipBALLRepresentation.h"
#include "sipBALLINIFile.h"
#include "sipBALLClippingPlane.h"
#include "sipBALLRepresentationList.h"
#include "sipBALLComposite.h"



extern "C" {static PyObject *meth_RepresentationManager_clear(PyObject *, PyObject *);}
static PyObject *meth_RepresentationManager_clear(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        RepresentationManager *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_RepresentationManager,&sipCpp))
        {
            sipCpp->clear();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_RepresentationManager,sipNm_BALL_clear);

    return NULL;
}


extern "C" {static PyObject *meth_RepresentationManager_remove(PyObject *, PyObject *);}
static PyObject *meth_RepresentationManager_remove(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Representation * a0;
        bool a1 = 1;
        RepresentationManager *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA|b",&sipSelf,sipClass_RepresentationManager,&sipCpp,sipClass_Representation,&a0,&a1))
        {
            sipCpp->remove(*a0,a1);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_RepresentationManager,sipNm_BALL_remove);

    return NULL;
}


extern "C" {static PyObject *meth_RepresentationManager_insert(PyObject *, PyObject *);}
static PyObject *meth_RepresentationManager_insert(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Representation * a0;
        bool a1 = 1;
        RepresentationManager *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA|b",&sipSelf,sipClass_RepresentationManager,&sipCpp,sipClass_Representation,&a0,&a1))
        {
            sipCpp->insert(*a0,a1);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_RepresentationManager,sipNm_BALL_insert);

    return NULL;
}


extern "C" {static PyObject *meth_RepresentationManager_getRepresentations(PyObject *, PyObject *);}
static PyObject *meth_RepresentationManager_getRepresentations(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        RepresentationManager *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_RepresentationManager,&sipCpp))
        {
            const RepresentationList *sipRes;

            sipRes = &sipCpp->getRepresentations();

            PyObject *sipResObj = sipConvertFromMappedType(const_cast<RepresentationList *>(sipRes),sipMappedType_RepresentationList,NULL);

            return sipResObj;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_RepresentationManager,sipNm_BALL_getRepresentations);

    return NULL;
}


extern "C" {static PyObject *meth_RepresentationManager_getNumberOfRepresentations(PyObject *, PyObject *);}
static PyObject *meth_RepresentationManager_getNumberOfRepresentations(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        RepresentationManager *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_RepresentationManager,&sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->getNumberOfRepresentations();

            return PyInt_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_RepresentationManager,sipNm_BALL_getNumberOfRepresentations);

    return NULL;
}


extern "C" {static PyObject *meth_RepresentationManager_createRepresentation(PyObject *, PyObject *);}
static PyObject *meth_RepresentationManager_createRepresentation(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        RepresentationManager *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_RepresentationManager,&sipCpp))
        {
            Representation *sipRes;

            sipRes = sipCpp->createRepresentation();

            return sipConvertFromInstance(sipRes,sipClass_Representation,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_RepresentationManager,sipNm_BALL_createRepresentation);

    return NULL;
}


extern "C" {static PyObject *meth_RepresentationManager_has(PyObject *, PyObject *);}
static PyObject *meth_RepresentationManager_has(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const Representation * a0;
        RepresentationManager *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_RepresentationManager,&sipCpp,sipClass_Representation,&a0))
        {
            bool sipRes;

            sipRes = sipCpp->has(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_RepresentationManager,sipNm_BALL_has);

    return NULL;
}


extern "C" {static PyObject *meth_RepresentationManager_removedComposite(PyObject *, PyObject *);}
static PyObject *meth_RepresentationManager_removedComposite(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const Composite * a0;
        bool a1 = 1;
        RepresentationManager *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA|b",&sipSelf,sipClass_RepresentationManager,&sipCpp,sipClass_Composite,&a0,&a1))
        {
            RepresentationList *sipRes;

            sipRes = new RepresentationList(sipCpp->removedComposite(*a0,a1));

            PyObject *sipResObj = sipConvertFromMappedType(sipRes,sipMappedType_RepresentationList,NULL);
            delete sipRes;

            return sipResObj;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_RepresentationManager,sipNm_BALL_removedComposite);

    return NULL;
}


extern "C" {static PyObject *meth_RepresentationManager_getRepresentationsOf(PyObject *, PyObject *);}
static PyObject *meth_RepresentationManager_getRepresentationsOf(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const Composite * a0;
        RepresentationManager *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_RepresentationManager,&sipCpp,sipClass_Composite,&a0))
        {
            RepresentationList *sipRes;

            sipRes = new RepresentationList(sipCpp->getRepresentationsOf(*a0));

            PyObject *sipResObj = sipConvertFromMappedType(sipRes,sipMappedType_RepresentationList,NULL);
            delete sipRes;

            return sipResObj;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_RepresentationManager,sipNm_BALL_getRepresentationsOf);

    return NULL;
}


extern "C" {static PyObject *meth_RepresentationManager_rebuildAllRepresentations(PyObject *, PyObject *);}
static PyObject *meth_RepresentationManager_rebuildAllRepresentations(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        RepresentationManager *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_RepresentationManager,&sipCpp))
        {
            sipCpp->rebuildAllRepresentations();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_RepresentationManager,sipNm_BALL_rebuildAllRepresentations);

    return NULL;
}


extern "C" {static PyObject *meth_RepresentationManager_removeClippingPlane(PyObject *, PyObject *);}
static PyObject *meth_RepresentationManager_removeClippingPlane(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        ClippingPlane * a0;
        RepresentationManager *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ@",&sipSelf,sipClass_RepresentationManager,&sipCpp,sipClass_ClippingPlane,&a0))
        {
            bool sipRes;

            try
            {
            sipRes = sipCpp->removeClippingPlane(a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_RepresentationManager,sipNm_BALL_removeClippingPlane);

    return NULL;
}


extern "C" {static PyObject *meth_RepresentationManager_insertClippingPlane(PyObject *, PyObject *);}
static PyObject *meth_RepresentationManager_insertClippingPlane(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        ClippingPlane * a0;
        RepresentationManager *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ@",&sipSelf,sipClass_RepresentationManager,&sipCpp,sipClass_ClippingPlane,&a0))
        {
            try
            {
            sipCpp->insertClippingPlane(a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_RepresentationManager,sipNm_BALL_insertClippingPlane);

    return NULL;
}


extern "C" {static PyObject *meth_RepresentationManager_storeRepresentations(PyObject *, PyObject *);}
static PyObject *meth_RepresentationManager_storeRepresentations(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        INIFile * a0;
        RepresentationManager *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_RepresentationManager,&sipCpp,sipClass_INIFile,&a0))
        {
            try
            {
            sipCpp->storeRepresentations(*a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_RepresentationManager,sipNm_BALL_storeRepresentations);

    return NULL;
}


extern "C" {static PyObject *meth_RepresentationManager_focusRepresentation(PyObject *, PyObject *);}
static PyObject *meth_RepresentationManager_focusRepresentation(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const Representation * a0;
        RepresentationManager *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_RepresentationManager,&sipCpp,sipClass_Representation,&a0))
        {
            try
            {
            sipCpp->focusRepresentation(*a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_RepresentationManager,sipNm_BALL_focusRepresentation);

    return NULL;
}


extern "C" {static PyObject *meth_RepresentationManager_willBeUpdated(PyObject *, PyObject *);}
static PyObject *meth_RepresentationManager_willBeUpdated(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const Representation * a0;
        RepresentationManager *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_RepresentationManager,&sipCpp,sipClass_Representation,&a0))
        {
            bool sipRes;

            sipRes = sipCpp->willBeUpdated(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_RepresentationManager,sipNm_BALL_willBeUpdated);

    return NULL;
}


extern "C" {static PyObject *meth_RepresentationManager_updateRunning(PyObject *, PyObject *);}
static PyObject *meth_RepresentationManager_updateRunning(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        RepresentationManager *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_RepresentationManager,&sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->updateRunning();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_RepresentationManager,sipNm_BALL_updateRunning);

    return NULL;
}


extern "C" {static PyObject *meth_RepresentationManager_isBeeingRendered(PyObject *, PyObject *);}
static PyObject *meth_RepresentationManager_isBeeingRendered(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const Representation * a0;
        RepresentationManager *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ@",&sipSelf,sipClass_RepresentationManager,&sipCpp,sipClass_Representation,&a0))
        {
            bool sipRes;

            try
            {
            sipRes = sipCpp->isBeeingRendered(a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_RepresentationManager,sipNm_BALL_isBeeingRendered);

    return NULL;
}


extern "C" {static PyObject *meth_RepresentationManager_startRendering(PyObject *, PyObject *);}
static PyObject *meth_RepresentationManager_startRendering(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Representation * a0;
        RepresentationManager *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ@",&sipSelf,sipClass_RepresentationManager,&sipCpp,sipClass_Representation,&a0))
        {
            bool sipRes;

            try
            {
            sipRes = sipCpp->startRendering(a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_RepresentationManager,sipNm_BALL_startRendering);

    return NULL;
}


extern "C" {static PyObject *meth_RepresentationManager_finishedRendering(PyObject *, PyObject *);}
static PyObject *meth_RepresentationManager_finishedRendering(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Representation * a0;
        RepresentationManager *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ@",&sipSelf,sipClass_RepresentationManager,&sipCpp,sipClass_Representation,&a0))
        {
            try
            {
            sipCpp->finishedRendering(a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_RepresentationManager,sipNm_BALL_finishedRendering);

    return NULL;
}


extern "C" {static PyObject *slot_RepresentationManager___eq__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_RepresentationManager___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    RepresentationManager *sipCpp = reinterpret_cast<RepresentationManager *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_RepresentationManager));

    if (!sipCpp)
        return 0;

    int sipArgsParsed = 0;

    {
        const RepresentationManager * a0;

        if (sipParseArgs(&sipArgsParsed,sipArg,"JA",sipClass_RepresentationManager,&a0))
        {
            bool sipRes;

            sipRes = ((*sipCpp) == *a0);

            return PyBool_FromLong(sipRes);
        }
    }

    return sipPySlotExtend(&sipModuleAPI_BALL,eq_slot,sipClass_RepresentationManager,sipSelf,sipArg);
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_RepresentationManager(void *, sipWrapperType *);}
static void *cast_RepresentationManager(void *ptr,sipWrapperType *targetClass)
{
    if (targetClass == sipClass_RepresentationManager)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_RepresentationManager(void *, int);}
static void release_RepresentationManager(void *ptr,int)
{
    delete reinterpret_cast<RepresentationManager *>(ptr);
}


extern "C" {static void dealloc_RepresentationManager(sipWrapper *);}
static void dealloc_RepresentationManager(sipWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_RepresentationManager(sipSelf->u.cppPtr,0);
    }
}


extern "C" {static void *init_RepresentationManager(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_RepresentationManager(sipWrapper *,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    RepresentationManager *sipCpp = 0;

    if (!sipCpp)
    {
        MainControl * a0 = 0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"|J@",sipClass_MainControl,&a0))
        {
            sipCpp = new RepresentationManager(a0);
        }
    }

    if (!sipCpp)
    {
        const RepresentationManager * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_RepresentationManager,&a0))
        {
            sipCpp = new RepresentationManager(*a0);
        }
    }

    return sipCpp;
}


extern "C" {static void *forceConvertTo_RepresentationManager(PyObject *, int *);}
static void *forceConvertTo_RepresentationManager(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_RepresentationManager))
        return sipConvertToCpp(valobj,sipClass_RepresentationManager,iserrp);

    sipBadClass(sipNm_BALL_RepresentationManager);

    *iserrp = 1;

    return NULL;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_RepresentationManager[] = {
    {(void *)slot_RepresentationManager___eq__, eq_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_RepresentationManager[] = {
    {sipNm_BALL_clear, meth_RepresentationManager_clear, METH_VARARGS, NULL},
    {sipNm_BALL_createRepresentation, meth_RepresentationManager_createRepresentation, METH_VARARGS, NULL},
    {sipNm_BALL_finishedRendering, meth_RepresentationManager_finishedRendering, METH_VARARGS, NULL},
    {sipNm_BALL_focusRepresentation, meth_RepresentationManager_focusRepresentation, METH_VARARGS, NULL},
    {sipNm_BALL_getNumberOfRepresentations, meth_RepresentationManager_getNumberOfRepresentations, METH_VARARGS, NULL},
    {sipNm_BALL_getRepresentations, meth_RepresentationManager_getRepresentations, METH_VARARGS, NULL},
    {sipNm_BALL_getRepresentationsOf, meth_RepresentationManager_getRepresentationsOf, METH_VARARGS, NULL},
    {sipNm_BALL_has, meth_RepresentationManager_has, METH_VARARGS, NULL},
    {sipNm_BALL_insert, meth_RepresentationManager_insert, METH_VARARGS, NULL},
    {sipNm_BALL_insertClippingPlane, meth_RepresentationManager_insertClippingPlane, METH_VARARGS, NULL},
    {sipNm_BALL_isBeeingRendered, meth_RepresentationManager_isBeeingRendered, METH_VARARGS, NULL},
    {sipNm_BALL_rebuildAllRepresentations, meth_RepresentationManager_rebuildAllRepresentations, METH_VARARGS, NULL},
    {sipNm_BALL_remove, meth_RepresentationManager_remove, METH_VARARGS, NULL},
    {sipNm_BALL_removeClippingPlane, meth_RepresentationManager_removeClippingPlane, METH_VARARGS, NULL},
    {sipNm_BALL_removedComposite, meth_RepresentationManager_removedComposite, METH_VARARGS, NULL},
    {sipNm_BALL_startRendering, meth_RepresentationManager_startRendering, METH_VARARGS, NULL},
    {sipNm_BALL_storeRepresentations, meth_RepresentationManager_storeRepresentations, METH_VARARGS, NULL},
    {sipNm_BALL_updateRunning, meth_RepresentationManager_updateRunning, METH_VARARGS, NULL},
    {sipNm_BALL_willBeUpdated, meth_RepresentationManager_willBeUpdated, METH_VARARGS, NULL}
};


sipTypeDef sipType_BALL_RepresentationManager = {
    0,
    0,
    "BALL.RepresentationManager",
    0,
    {0, 0, 1},
    0,
    slots_RepresentationManager,
    19, methods_RepresentationManager,
    0, 0,
    0,
    init_RepresentationManager,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_RepresentationManager,
    cast_RepresentationManager,
    release_RepresentationManager,
    forceConvertTo_RepresentationManager,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
