/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLGridVisualisation.h"

#include "sipBALLGeometricObject.h"
#include "sipBALLVector3.h"
#include "sipBALLGridVisualisation.h"
#include "sipBALLPosition.h"
#include "sipBALLRegularData3D.h"
#include "sipBALLColorRGBA.h"
#include "sipBALLColorUnit.h"
#include "sipBALLComposite.h"


sipGridVisualisation::sipGridVisualisation() throw(): GridVisualisation(), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,2);
}

sipGridVisualisation::sipGridVisualisation(const GridVisualisation& a0) throw(): GridVisualisation(a0), sipPySelf(0)
{
    sipCommonCtor(sipPyMethods,2);
}

sipGridVisualisation::~sipGridVisualisation() throw()
{
    sipCommonDtor(sipPySelf);
}

void sipGridVisualisation::clear() throw()
{
    extern void sipVH_BALL_0(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipNm_BALL_clear);

    if (!meth)
    {
        GeometricObject::clear();
        return;
    }

    sipVH_BALL_0(sipGILState,meth);
}

bool sipGridVisualisation::isValid() const throw()
{
    extern bool sipVH_BALL_4(sip_gilstate_t,PyObject *);

    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<sipMethodCache *>(&sipPyMethods[1]),sipPySelf,NULL,sipNm_BALL_isValid);

    if (!meth)
        return GeometricObject::isValid();

    return sipVH_BALL_4(sipGILState,meth);
}


extern "C" {static PyObject *meth_GridVisualisation_getNormal(PyObject *, PyObject *);}
static PyObject *meth_GridVisualisation_getNormal(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        GridVisualisation *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_GridVisualisation,&sipCpp))
        {
            const Vector3 *sipRes;

            try
            {
            sipRes = &sipCpp->getNormal();
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return sipConvertFromInstance(const_cast<Vector3 *>(sipRes),sipClass_Vector3,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_GridVisualisation,sipNm_BALL_getNormal);

    return NULL;
}


extern "C" {static PyObject *meth_GridVisualisation_setNormal(PyObject *, PyObject *);}
static PyObject *meth_GridVisualisation_setNormal(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const Vector3 * a0;
        GridVisualisation *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_GridVisualisation,&sipCpp,sipClass_Vector3,&a0))
        {
            try
            {
            sipCpp->setNormal(*a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_GridVisualisation,sipNm_BALL_setNormal);

    return NULL;
}


extern "C" {static PyObject *meth_GridVisualisation_getPoint(PyObject *, PyObject *);}
static PyObject *meth_GridVisualisation_getPoint(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        GridVisualisation *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_GridVisualisation,&sipCpp))
        {
            const Vector3 *sipRes;

            try
            {
            sipRes = &sipCpp->getPoint();
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return sipConvertFromInstance(const_cast<Vector3 *>(sipRes),sipClass_Vector3,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_GridVisualisation,sipNm_BALL_getPoint);

    return NULL;
}


extern "C" {static PyObject *meth_GridVisualisation_setPoint(PyObject *, PyObject *);}
static PyObject *meth_GridVisualisation_setPoint(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const Vector3 * a0;
        GridVisualisation *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJA",&sipSelf,sipClass_GridVisualisation,&sipCpp,sipClass_Vector3,&a0))
        {
            try
            {
            sipCpp->setPoint(*a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_GridVisualisation,sipNm_BALL_setPoint);

    return NULL;
}


extern "C" {static PyObject *meth_GridVisualisation_setGrid(PyObject *, PyObject *);}
static PyObject *meth_GridVisualisation_setGrid(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const RegularData3D * a0;
        GridVisualisation *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ@",&sipSelf,sipClass_GridVisualisation,&sipCpp,sipClass_RegularData3D,&a0))
        {
            try
            {
            sipCpp->setGrid(a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_GridVisualisation,sipNm_BALL_setGrid);

    return NULL;
}


extern "C" {static PyObject *meth_GridVisualisation_getGrid(PyObject *, PyObject *);}
static PyObject *meth_GridVisualisation_getGrid(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        GridVisualisation *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_GridVisualisation,&sipCpp))
        {
            const RegularData3D *sipRes;

            try
            {
            sipRes = sipCpp->getGrid();
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            return sipConvertFromInstance(const_cast<RegularData3D *>(sipRes),sipClass_RegularData3D,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipNm_BALL_GridVisualisation,sipNm_BALL_getGrid);

    return NULL;
}


extern "C" {static PyObject *meth_GridVisualisation_getTexture(PyObject *, PyObject *);}
static PyObject *meth_GridVisualisation_getTexture(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        GridVisualisation *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_GridVisualisation,&sipCpp))
        {
            Position *sipRes;

            try
            {
            sipRes = new Position(sipCpp->getTexture());
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_GridVisualisation,sipNm_BALL_getTexture);

    return NULL;
}


extern "C" {static PyObject *meth_GridVisualisation_setTexture(PyObject *, PyObject *);}
static PyObject *meth_GridVisualisation_setTexture(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Position * a0;
        int a0State = 0;
        GridVisualisation *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BM1",&sipSelf,sipClass_GridVisualisation,&sipCpp,sipMappedType_Position,&a0,&a0State))
        {
            try
            {
            sipCpp->setTexture(*a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_GridVisualisation,sipNm_BALL_setTexture);

    return NULL;
}


extern "C" {static PyObject *meth_GridVisualisation_setDotSize(PyObject *, PyObject *);}
static PyObject *meth_GridVisualisation_setDotSize(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        int a0;
        GridVisualisation *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bi",&sipSelf,sipClass_GridVisualisation,&sipCpp,&a0))
        {
            try
            {
            sipCpp->setDotSize(a0);
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_GridVisualisation,sipNm_BALL_setDotSize);

    return NULL;
}


extern "C" {static PyObject *meth_GridVisualisation_getDotSize(PyObject *, PyObject *);}
static PyObject *meth_GridVisualisation_getDotSize(PyObject *sipSelf,PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        GridVisualisation *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipClass_GridVisualisation,&sipCpp))
        {
            int sipRes;

            try
            {
            sipRes = sipCpp->getDotSize();
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
    sipNoMethod(sipArgsParsed,sipNm_BALL_GridVisualisation,sipNm_BALL_getDotSize);

    return NULL;
}


extern "C" {static PyObject *slot_GridVisualisation___repr__(PyObject *sipSelf);}
static PyObject *slot_GridVisualisation___repr__(PyObject *sipSelf)
{
    GridVisualisation *sipCpp = reinterpret_cast<GridVisualisation *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_GridVisualisation));

    if (!sipCpp)
        return 0;


    {
        {
            PyObject * sipRes = 0;

#line 62 "gridVisualisation.sip"
	sipRes = PyString_FromString(String(String("GridVisualisation ") 
						+ " { "
						+ "   Grid: " + String((long int)sipCpp->getGrid())
						+ "   Texture: " + String(sipCpp->getTexture())
						+ " }").c_str());
#line 430 "sipBALLGridVisualisation.C"

            return sipRes;
        }
    }
}


extern "C" {static PyObject *slot_GridVisualisation___str__(PyObject *sipSelf);}
static PyObject *slot_GridVisualisation___str__(PyObject *sipSelf)
{
    GridVisualisation *sipCpp = reinterpret_cast<GridVisualisation *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_GridVisualisation));

    if (!sipCpp)
        return 0;


    {
        {
            PyObject * sipRes = 0;

#line 53 "gridVisualisation.sip"
	sipRes = PyString_FromString(String(String("GridVisualisation ") 
						+ " { "
						+ "   Grid: " + String((long int)sipCpp->getGrid())
						+ "   Texture: " + String(sipCpp->getTexture())
						+ " }").c_str());
#line 457 "sipBALLGridVisualisation.C"

            return sipRes;
        }
    }
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_GridVisualisation(void *, sipWrapperType *);}
static void *cast_GridVisualisation(void *ptr,sipWrapperType *targetClass)
{
    void *res;

    if (targetClass == sipClass_GridVisualisation)
        return ptr;

    if ((res = sipCast_GeometricObject((GeometricObject *)(GridVisualisation *)ptr,targetClass)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_GridVisualisation(void *, int);}
static void release_GridVisualisation(void *ptr,int state)
{
    if (state & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipGridVisualisation *>(ptr);
    else
        delete reinterpret_cast<GridVisualisation *>(ptr);
}


extern "C" {static void dealloc_GridVisualisation(sipWrapper *);}
static void dealloc_GridVisualisation(sipWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipGridVisualisation *>(sipSelf->u.cppPtr)->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_GridVisualisation(sipSelf->u.cppPtr,sipSelf->flags);
    }
}


extern "C" {static void *init_GridVisualisation(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_GridVisualisation(sipWrapper *sipSelf,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    sipGridVisualisation *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            sipCpp = new sipGridVisualisation();
        }
    }

    if (!sipCpp)
    {
        const GridVisualisation * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_GridVisualisation,&a0))
        {
            sipCpp = new sipGridVisualisation(*a0);
        }
    }

    if (sipCpp)
        sipCpp->sipPySelf = sipSelf;

    return sipCpp;
}


extern "C" {static PyObject *var_GridVisualisation_draw_box(PyObject *, PyObject *);}
static PyObject *var_GridVisualisation_draw_box(PyObject *sipSelf,PyObject *sipPy)
{
   bool sipVal;
    GridVisualisation *sipCpp = reinterpret_cast<GridVisualisation *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_GridVisualisation));

    if (!sipCpp)
        return NULL;

    if (sipPy == NULL)
    {
        sipVal = sipCpp->draw_box;

        sipPy = PyBool_FromLong(sipVal);

        return sipPy;
    }

	sipVal = (bool)PyInt_AsLong(sipPy);

    if (PyErr_Occurred() != NULL)
    {
        sipBadSetType(sipNm_BALL_GridVisualisation,sipNm_BALL_draw_box);
        return NULL;
    }

    sipCpp->draw_box = sipVal;

    Py_INCREF(Py_None);
    return Py_None;
}


extern "C" {static PyObject *var_GridVisualisation_slices(PyObject *, PyObject *);}
static PyObject *var_GridVisualisation_slices(PyObject *sipSelf,PyObject *sipPy)
{
   int sipVal;
    GridVisualisation *sipCpp = reinterpret_cast<GridVisualisation *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_GridVisualisation));

    if (!sipCpp)
        return NULL;

    if (sipPy == NULL)
    {
        sipVal = sipCpp->slices;

        sipPy = PyInt_FromLong(sipVal);

        return sipPy;
    }

	sipVal = (int)PyInt_AsLong(sipPy);

    if (PyErr_Occurred() != NULL)
    {
        sipBadSetType(sipNm_BALL_GridVisualisation,sipNm_BALL_slices);
        return NULL;
    }

    sipCpp->slices = sipVal;

    Py_INCREF(Py_None);
    return Py_None;
}


extern "C" {static PyObject *var_GridVisualisation_max_dim(PyObject *, PyObject *);}
static PyObject *var_GridVisualisation_max_dim(PyObject *sipSelf,PyObject *sipPy)
{
   float sipVal;
    GridVisualisation *sipCpp = reinterpret_cast<GridVisualisation *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_GridVisualisation));

    if (!sipCpp)
        return NULL;

    if (sipPy == NULL)
    {
        sipVal = sipCpp->max_dim;

        sipPy = PyFloat_FromDouble((double)sipVal);

        return sipPy;
    }

	sipVal = (float)PyFloat_AsDouble(sipPy);

    if (PyErr_Occurred() != NULL)
    {
        sipBadSetType(sipNm_BALL_GridVisualisation,sipNm_BALL_max_dim);
        return NULL;
    }

    sipCpp->max_dim = sipVal;

    Py_INCREF(Py_None);
    return Py_None;
}


extern "C" {static PyObject *var_GridVisualisation_z(PyObject *, PyObject *);}
static PyObject *var_GridVisualisation_z(PyObject *sipSelf,PyObject *sipPy)
{
    int sipIsErr = 0;
   Vector3 *sipVal;
    GridVisualisation *sipCpp = reinterpret_cast<GridVisualisation *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_GridVisualisation));

    if (!sipCpp)
        return NULL;

    if (sipPy == NULL)
    {
        sipVal = &sipCpp->z;

        sipPy = sipConvertFromInstance(sipVal,sipClass_Vector3,NULL);

        return sipPy;
    }

    sipVal = reinterpret_cast<Vector3 *>(sipForceConvertToInstance(sipPy,sipClass_Vector3,NULL,SIP_NOT_NONE,NULL,&sipIsErr));

    if (sipIsErr)
        return NULL;

    sipCpp->z = *sipVal;

    Py_INCREF(Py_None);
    return Py_None;
}


extern "C" {static PyObject *var_GridVisualisation_y(PyObject *, PyObject *);}
static PyObject *var_GridVisualisation_y(PyObject *sipSelf,PyObject *sipPy)
{
    int sipIsErr = 0;
   Vector3 *sipVal;
    GridVisualisation *sipCpp = reinterpret_cast<GridVisualisation *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_GridVisualisation));

    if (!sipCpp)
        return NULL;

    if (sipPy == NULL)
    {
        sipVal = &sipCpp->y;

        sipPy = sipConvertFromInstance(sipVal,sipClass_Vector3,NULL);

        return sipPy;
    }

    sipVal = reinterpret_cast<Vector3 *>(sipForceConvertToInstance(sipPy,sipClass_Vector3,NULL,SIP_NOT_NONE,NULL,&sipIsErr));

    if (sipIsErr)
        return NULL;

    sipCpp->y = *sipVal;

    Py_INCREF(Py_None);
    return Py_None;
}


extern "C" {static PyObject *var_GridVisualisation_x(PyObject *, PyObject *);}
static PyObject *var_GridVisualisation_x(PyObject *sipSelf,PyObject *sipPy)
{
    int sipIsErr = 0;
   Vector3 *sipVal;
    GridVisualisation *sipCpp = reinterpret_cast<GridVisualisation *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_GridVisualisation));

    if (!sipCpp)
        return NULL;

    if (sipPy == NULL)
    {
        sipVal = &sipCpp->x;

        sipPy = sipConvertFromInstance(sipVal,sipClass_Vector3,NULL);

        return sipPy;
    }

    sipVal = reinterpret_cast<Vector3 *>(sipForceConvertToInstance(sipPy,sipClass_Vector3,NULL,SIP_NOT_NONE,NULL,&sipIsErr));

    if (sipIsErr)
        return NULL;

    sipCpp->x = *sipVal;

    Py_INCREF(Py_None);
    return Py_None;
}


extern "C" {static PyObject *var_GridVisualisation_origin(PyObject *, PyObject *);}
static PyObject *var_GridVisualisation_origin(PyObject *sipSelf,PyObject *sipPy)
{
    int sipIsErr = 0;
   Vector3 *sipVal;
    GridVisualisation *sipCpp = reinterpret_cast<GridVisualisation *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_GridVisualisation));

    if (!sipCpp)
        return NULL;

    if (sipPy == NULL)
    {
        sipVal = &sipCpp->origin;

        sipPy = sipConvertFromInstance(sipVal,sipClass_Vector3,NULL);

        return sipPy;
    }

    sipVal = reinterpret_cast<Vector3 *>(sipForceConvertToInstance(sipPy,sipClass_Vector3,NULL,SIP_NOT_NONE,NULL,&sipIsErr));

    if (sipIsErr)
        return NULL;

    sipCpp->origin = *sipVal;

    Py_INCREF(Py_None);
    return Py_None;
}

PyMethodDef variables_GridVisualisation[] = {
    {sipNm_BALL_draw_box, var_GridVisualisation_draw_box, 0, NULL},
    {sipNm_BALL_slices, var_GridVisualisation_slices, 0, NULL},
    {sipNm_BALL_max_dim, var_GridVisualisation_max_dim, 0, NULL},
    {sipNm_BALL_z, var_GridVisualisation_z, 0, NULL},
    {sipNm_BALL_y, var_GridVisualisation_y, 0, NULL},
    {sipNm_BALL_x, var_GridVisualisation_x, 0, NULL},
    {sipNm_BALL_origin, var_GridVisualisation_origin, 0, NULL},
    {0, 0, 0, 0}
};


extern "C" {static void *forceConvertTo_GridVisualisation(PyObject *, int *);}
static void *forceConvertTo_GridVisualisation(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_GridVisualisation))
        return sipConvertToCpp(valobj,sipClass_GridVisualisation,iserrp);

    sipBadClass(sipNm_BALL_GridVisualisation);

    *iserrp = 1;

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedClassDef supers_GridVisualisation[] = {{41, 255, 1}};


/* Define this type's Python slots. */
static sipPySlotDef slots_GridVisualisation[] = {
    {(void *)slot_GridVisualisation___repr__, repr_slot},
    {(void *)slot_GridVisualisation___str__, str_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_GridVisualisation[] = {
    {sipNm_BALL_getDotSize, meth_GridVisualisation_getDotSize, METH_VARARGS, NULL},
    {sipNm_BALL_getGrid, meth_GridVisualisation_getGrid, METH_VARARGS, NULL},
    {sipNm_BALL_getNormal, meth_GridVisualisation_getNormal, METH_VARARGS, NULL},
    {sipNm_BALL_getPoint, meth_GridVisualisation_getPoint, METH_VARARGS, NULL},
    {sipNm_BALL_getTexture, meth_GridVisualisation_getTexture, METH_VARARGS, NULL},
    {sipNm_BALL_setDotSize, meth_GridVisualisation_setDotSize, METH_VARARGS, NULL},
    {sipNm_BALL_setGrid, meth_GridVisualisation_setGrid, METH_VARARGS, NULL},
    {sipNm_BALL_setNormal, meth_GridVisualisation_setNormal, METH_VARARGS, NULL},
    {sipNm_BALL_setPoint, meth_GridVisualisation_setPoint, METH_VARARGS, NULL},
    {sipNm_BALL_setTexture, meth_GridVisualisation_setTexture, METH_VARARGS, NULL}
};

static sipEnumMemberDef enummembers_GridVisualisation[] = {
    {sipNm_BALL_DOTS, GridVisualisation::DOTS, -1},
    {sipNm_BALL_PLANE, GridVisualisation::PLANE, -1},
    {sipNm_BALL_SLICES, GridVisualisation::SLICES, -1},
};


sipTypeDef sipType_BALL_GridVisualisation = {
    0,
    SIP_TYPE_SCC,
    "BALL.GridVisualisation",
    0,
    {0, 0, 1},
    supers_GridVisualisation,
    slots_GridVisualisation,
    10, methods_GridVisualisation,
    3, enummembers_GridVisualisation,
    variables_GridVisualisation,
    init_GridVisualisation,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_GridVisualisation,
    cast_GridVisualisation,
    release_GridVisualisation,
    forceConvertTo_GridVisualisation,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
