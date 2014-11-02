/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLConstant.h"


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_Constant(void *, sipWrapperType *);}
static void *cast_Constant(void *ptr,sipWrapperType *targetClass)
{
    if (targetClass == sipClass_Constant)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_Constant(void *, int);}
static void release_Constant(void *ptr,int)
{
    delete reinterpret_cast<Constant *>(ptr);
}


extern "C" {static void dealloc_Constant(sipWrapper *);}
static void dealloc_Constant(sipWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_Constant(sipSelf->u.cppPtr,0);
    }
}


extern "C" {static void *init_Constant(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_Constant(sipWrapper *,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    Constant *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            try
            {
            sipCpp = new Constant();
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
        const Constant * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_Constant,&a0))
        {
            try
            {
            sipCpp = new Constant(*a0);
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


extern "C" {static PyObject *var_Constant_CAL_PER_JOULE(PyObject *, PyObject *);}
static PyObject *var_Constant_CAL_PER_JOULE(PyObject *,PyObject *sipPy)
{
   double sipVal;

    if (sipPy == NULL)
    {
        sipVal = Constant::CAL_PER_JOULE;

        sipPy = PyFloat_FromDouble(sipVal);

        return sipPy;
    }

	sipVal = PyFloat_AsDouble(sipPy);

    if (PyErr_Occurred() != NULL)
    {
        sipBadSetType(sipNm_BALL_Constant,sipNm_BALL_CAL_PER_JOULE);
        return NULL;
    }

    Constant::CAL_PER_JOULE = sipVal;

    Py_INCREF(Py_None);
    return Py_None;
}


extern "C" {static PyObject *var_Constant_JOULE_PER_CAL(PyObject *, PyObject *);}
static PyObject *var_Constant_JOULE_PER_CAL(PyObject *,PyObject *sipPy)
{
   double sipVal;

    if (sipPy == NULL)
    {
        sipVal = Constant::JOULE_PER_CAL;

        sipPy = PyFloat_FromDouble(sipVal);

        return sipPy;
    }

	sipVal = PyFloat_AsDouble(sipPy);

    if (PyErr_Occurred() != NULL)
    {
        sipBadSetType(sipNm_BALL_Constant,sipNm_BALL_JOULE_PER_CAL);
        return NULL;
    }

    Constant::JOULE_PER_CAL = sipVal;

    Py_INCREF(Py_None);
    return Py_None;
}


extern "C" {static PyObject *var_Constant_M_PER_FOOT(PyObject *, PyObject *);}
static PyObject *var_Constant_M_PER_FOOT(PyObject *,PyObject *sipPy)
{
   double sipVal;

    if (sipPy == NULL)
    {
        sipVal = Constant::M_PER_FOOT;

        sipPy = PyFloat_FromDouble(sipVal);

        return sipPy;
    }

	sipVal = PyFloat_AsDouble(sipPy);

    if (PyErr_Occurred() != NULL)
    {
        sipBadSetType(sipNm_BALL_Constant,sipNm_BALL_M_PER_FOOT);
        return NULL;
    }

    Constant::M_PER_FOOT = sipVal;

    Py_INCREF(Py_None);
    return Py_None;
}


extern "C" {static PyObject *var_Constant_MM_PER_INCH(PyObject *, PyObject *);}
static PyObject *var_Constant_MM_PER_INCH(PyObject *,PyObject *sipPy)
{
   double sipVal;

    if (sipPy == NULL)
    {
        sipVal = Constant::MM_PER_INCH;

        sipPy = PyFloat_FromDouble(sipVal);

        return sipPy;
    }

	sipVal = PyFloat_AsDouble(sipPy);

    if (PyErr_Occurred() != NULL)
    {
        sipBadSetType(sipNm_BALL_Constant,sipNm_BALL_MM_PER_INCH);
        return NULL;
    }

    Constant::MM_PER_INCH = sipVal;

    Py_INCREF(Py_None);
    return Py_None;
}


extern "C" {static PyObject *var_Constant_RAD_PER_DEG(PyObject *, PyObject *);}
static PyObject *var_Constant_RAD_PER_DEG(PyObject *,PyObject *sipPy)
{
   double sipVal;

    if (sipPy == NULL)
    {
        sipVal = Constant::RAD_PER_DEG;

        sipPy = PyFloat_FromDouble(sipVal);

        return sipPy;
    }

	sipVal = PyFloat_AsDouble(sipPy);

    if (PyErr_Occurred() != NULL)
    {
        sipBadSetType(sipNm_BALL_Constant,sipNm_BALL_RAD_PER_DEG);
        return NULL;
    }

    Constant::RAD_PER_DEG = sipVal;

    Py_INCREF(Py_None);
    return Py_None;
}


extern "C" {static PyObject *var_Constant_DEG_PER_RAD(PyObject *, PyObject *);}
static PyObject *var_Constant_DEG_PER_RAD(PyObject *,PyObject *sipPy)
{
   double sipVal;

    if (sipPy == NULL)
    {
        sipVal = Constant::DEG_PER_RAD;

        sipPy = PyFloat_FromDouble(sipVal);

        return sipPy;
    }

	sipVal = PyFloat_AsDouble(sipPy);

    if (PyErr_Occurred() != NULL)
    {
        sipBadSetType(sipNm_BALL_Constant,sipNm_BALL_DEG_PER_RAD);
        return NULL;
    }

    Constant::DEG_PER_RAD = sipVal;

    Py_INCREF(Py_None);
    return Py_None;
}


extern "C" {static PyObject *var_Constant_FINE_STRUCTURE_CONSTANT(PyObject *, PyObject *);}
static PyObject *var_Constant_FINE_STRUCTURE_CONSTANT(PyObject *,PyObject *sipPy)
{
   double sipVal;

    if (sipPy == NULL)
    {
        sipVal = Constant::FINE_STRUCTURE_CONSTANT;

        sipPy = PyFloat_FromDouble(sipVal);

        return sipPy;
    }

	sipVal = PyFloat_AsDouble(sipPy);

    if (PyErr_Occurred() != NULL)
    {
        sipBadSetType(sipNm_BALL_Constant,sipNm_BALL_FINE_STRUCTURE_CONSTANT);
        return NULL;
    }

    Constant::FINE_STRUCTURE_CONSTANT = sipVal;

    Py_INCREF(Py_None);
    return Py_None;
}


extern "C" {static PyObject *var_Constant_GRAVITATIONAL_CONSTANT(PyObject *, PyObject *);}
static PyObject *var_Constant_GRAVITATIONAL_CONSTANT(PyObject *,PyObject *sipPy)
{
   double sipVal;

    if (sipPy == NULL)
    {
        sipVal = Constant::GRAVITATIONAL_CONSTANT;

        sipPy = PyFloat_FromDouble(sipVal);

        return sipPy;
    }

	sipVal = PyFloat_AsDouble(sipPy);

    if (PyErr_Occurred() != NULL)
    {
        sipBadSetType(sipNm_BALL_Constant,sipNm_BALL_GRAVITATIONAL_CONSTANT);
        return NULL;
    }

    Constant::GRAVITATIONAL_CONSTANT = sipVal;

    Py_INCREF(Py_None);
    return Py_None;
}


extern "C" {static PyObject *var_Constant_c(PyObject *, PyObject *);}
static PyObject *var_Constant_c(PyObject *,PyObject *sipPy)
{
   double sipVal;

    if (sipPy == NULL)
    {
        sipVal = Constant::c;

        sipPy = PyFloat_FromDouble(sipVal);

        return sipPy;
    }

	sipVal = PyFloat_AsDouble(sipPy);

    if (PyErr_Occurred() != NULL)
    {
        sipBadSetType(sipNm_BALL_Constant,sipNm_BALL_c);
        return NULL;
    }

    Constant::c = sipVal;

    Py_INCREF(Py_None);
    return Py_None;
}


extern "C" {static PyObject *var_Constant_SPEED_OF_LIGHT(PyObject *, PyObject *);}
static PyObject *var_Constant_SPEED_OF_LIGHT(PyObject *,PyObject *sipPy)
{
   double sipVal;

    if (sipPy == NULL)
    {
        sipVal = Constant::SPEED_OF_LIGHT;

        sipPy = PyFloat_FromDouble(sipVal);

        return sipPy;
    }

	sipVal = PyFloat_AsDouble(sipPy);

    if (PyErr_Occurred() != NULL)
    {
        sipBadSetType(sipNm_BALL_Constant,sipNm_BALL_SPEED_OF_LIGHT);
        return NULL;
    }

    Constant::SPEED_OF_LIGHT = sipVal;

    Py_INCREF(Py_None);
    return Py_None;
}


extern "C" {static PyObject *var_Constant_VACUUM_PERMEABILITY(PyObject *, PyObject *);}
static PyObject *var_Constant_VACUUM_PERMEABILITY(PyObject *,PyObject *sipPy)
{
   double sipVal;

    if (sipPy == NULL)
    {
        sipVal = Constant::VACUUM_PERMEABILITY;

        sipPy = PyFloat_FromDouble(sipVal);

        return sipPy;
    }

	sipVal = PyFloat_AsDouble(sipPy);

    if (PyErr_Occurred() != NULL)
    {
        sipBadSetType(sipNm_BALL_Constant,sipNm_BALL_VACUUM_PERMEABILITY);
        return NULL;
    }

    Constant::VACUUM_PERMEABILITY = sipVal;

    Py_INCREF(Py_None);
    return Py_None;
}


extern "C" {static PyObject *var_Constant_VACUUM_PERMITTIVITY(PyObject *, PyObject *);}
static PyObject *var_Constant_VACUUM_PERMITTIVITY(PyObject *,PyObject *sipPy)
{
   double sipVal;

    if (sipPy == NULL)
    {
        sipVal = Constant::VACUUM_PERMITTIVITY;

        sipPy = PyFloat_FromDouble(sipVal);

        return sipPy;
    }

	sipVal = PyFloat_AsDouble(sipPy);

    if (PyErr_Occurred() != NULL)
    {
        sipBadSetType(sipNm_BALL_Constant,sipNm_BALL_VACUUM_PERMITTIVITY);
        return NULL;
    }

    Constant::VACUUM_PERMITTIVITY = sipVal;

    Py_INCREF(Py_None);
    return Py_None;
}


extern "C" {static PyObject *var_Constant_a0(PyObject *, PyObject *);}
static PyObject *var_Constant_a0(PyObject *,PyObject *sipPy)
{
   double sipVal;

    if (sipPy == NULL)
    {
        sipVal = Constant::a0;

        sipPy = PyFloat_FromDouble(sipVal);

        return sipPy;
    }

	sipVal = PyFloat_AsDouble(sipPy);

    if (PyErr_Occurred() != NULL)
    {
        sipBadSetType(sipNm_BALL_Constant,sipNm_BALL_a0);
        return NULL;
    }

    Constant::a0 = sipVal;

    Py_INCREF(Py_None);
    return Py_None;
}


extern "C" {static PyObject *var_Constant_BOHR_RADIUS(PyObject *, PyObject *);}
static PyObject *var_Constant_BOHR_RADIUS(PyObject *,PyObject *sipPy)
{
   double sipVal;

    if (sipPy == NULL)
    {
        sipVal = Constant::BOHR_RADIUS;

        sipPy = PyFloat_FromDouble(sipVal);

        return sipPy;
    }

	sipVal = PyFloat_AsDouble(sipPy);

    if (PyErr_Occurred() != NULL)
    {
        sipBadSetType(sipNm_BALL_Constant,sipNm_BALL_BOHR_RADIUS);
        return NULL;
    }

    Constant::BOHR_RADIUS = sipVal;

    Py_INCREF(Py_None);
    return Py_None;
}


extern "C" {static PyObject *var_Constant_F(PyObject *, PyObject *);}
static PyObject *var_Constant_F(PyObject *,PyObject *sipPy)
{
   double sipVal;

    if (sipPy == NULL)
    {
        sipVal = Constant::F;

        sipPy = PyFloat_FromDouble(sipVal);

        return sipPy;
    }

	sipVal = PyFloat_AsDouble(sipPy);

    if (PyErr_Occurred() != NULL)
    {
        sipBadSetType(sipNm_BALL_Constant,sipNm_BALL_F);
        return NULL;
    }

    Constant::F = sipVal;

    Py_INCREF(Py_None);
    return Py_None;
}


extern "C" {static PyObject *var_Constant_FARADAY(PyObject *, PyObject *);}
static PyObject *var_Constant_FARADAY(PyObject *,PyObject *sipPy)
{
   double sipVal;

    if (sipPy == NULL)
    {
        sipVal = Constant::FARADAY;

        sipPy = PyFloat_FromDouble(sipVal);

        return sipPy;
    }

	sipVal = PyFloat_AsDouble(sipPy);

    if (PyErr_Occurred() != NULL)
    {
        sipBadSetType(sipNm_BALL_Constant,sipNm_BALL_FARADAY);
        return NULL;
    }

    Constant::FARADAY = sipVal;

    Py_INCREF(Py_None);
    return Py_None;
}


extern "C" {static PyObject *var_Constant_R(PyObject *, PyObject *);}
static PyObject *var_Constant_R(PyObject *,PyObject *sipPy)
{
   double sipVal;

    if (sipPy == NULL)
    {
        sipVal = Constant::R;

        sipPy = PyFloat_FromDouble(sipVal);

        return sipPy;
    }

	sipVal = PyFloat_AsDouble(sipPy);

    if (PyErr_Occurred() != NULL)
    {
        sipBadSetType(sipNm_BALL_Constant,sipNm_BALL_R);
        return NULL;
    }

    Constant::R = sipVal;

    Py_INCREF(Py_None);
    return Py_None;
}


extern "C" {static PyObject *var_Constant_GAS_CONSTANT(PyObject *, PyObject *);}
static PyObject *var_Constant_GAS_CONSTANT(PyObject *,PyObject *sipPy)
{
   double sipVal;

    if (sipPy == NULL)
    {
        sipVal = Constant::GAS_CONSTANT;

        sipPy = PyFloat_FromDouble(sipVal);

        return sipPy;
    }

	sipVal = PyFloat_AsDouble(sipPy);

    if (PyErr_Occurred() != NULL)
    {
        sipBadSetType(sipNm_BALL_Constant,sipNm_BALL_GAS_CONSTANT);
        return NULL;
    }

    Constant::GAS_CONSTANT = sipVal;

    Py_INCREF(Py_None);
    return Py_None;
}


extern "C" {static PyObject *var_Constant_h(PyObject *, PyObject *);}
static PyObject *var_Constant_h(PyObject *,PyObject *sipPy)
{
   double sipVal;

    if (sipPy == NULL)
    {
        sipVal = Constant::h;

        sipPy = PyFloat_FromDouble(sipVal);

        return sipPy;
    }

	sipVal = PyFloat_AsDouble(sipPy);

    if (PyErr_Occurred() != NULL)
    {
        sipBadSetType(sipNm_BALL_Constant,sipNm_BALL_h);
        return NULL;
    }

    Constant::h = sipVal;

    Py_INCREF(Py_None);
    return Py_None;
}


extern "C" {static PyObject *var_Constant_PLANCK(PyObject *, PyObject *);}
static PyObject *var_Constant_PLANCK(PyObject *,PyObject *sipPy)
{
   double sipVal;

    if (sipPy == NULL)
    {
        sipVal = Constant::PLANCK;

        sipPy = PyFloat_FromDouble(sipVal);

        return sipPy;
    }

	sipVal = PyFloat_AsDouble(sipPy);

    if (PyErr_Occurred() != NULL)
    {
        sipBadSetType(sipNm_BALL_Constant,sipNm_BALL_PLANCK);
        return NULL;
    }

    Constant::PLANCK = sipVal;

    Py_INCREF(Py_None);
    return Py_None;
}


extern "C" {static PyObject *var_Constant_k(PyObject *, PyObject *);}
static PyObject *var_Constant_k(PyObject *,PyObject *sipPy)
{
   double sipVal;

    if (sipPy == NULL)
    {
        sipVal = Constant::k;

        sipPy = PyFloat_FromDouble(sipVal);

        return sipPy;
    }

	sipVal = PyFloat_AsDouble(sipPy);

    if (PyErr_Occurred() != NULL)
    {
        sipBadSetType(sipNm_BALL_Constant,sipNm_BALL_k);
        return NULL;
    }

    Constant::k = sipVal;

    Py_INCREF(Py_None);
    return Py_None;
}


extern "C" {static PyObject *var_Constant_BOLTZMANN(PyObject *, PyObject *);}
static PyObject *var_Constant_BOLTZMANN(PyObject *,PyObject *sipPy)
{
   double sipVal;

    if (sipPy == NULL)
    {
        sipVal = Constant::BOLTZMANN;

        sipPy = PyFloat_FromDouble(sipVal);

        return sipPy;
    }

	sipVal = PyFloat_AsDouble(sipPy);

    if (PyErr_Occurred() != NULL)
    {
        sipBadSetType(sipNm_BALL_Constant,sipNm_BALL_BOLTZMANN);
        return NULL;
    }

    Constant::BOLTZMANN = sipVal;

    Py_INCREF(Py_None);
    return Py_None;
}


extern "C" {static PyObject *var_Constant_MOL(PyObject *, PyObject *);}
static PyObject *var_Constant_MOL(PyObject *,PyObject *sipPy)
{
   double sipVal;

    if (sipPy == NULL)
    {
        sipVal = Constant::MOL;

        sipPy = PyFloat_FromDouble(sipVal);

        return sipPy;
    }

	sipVal = PyFloat_AsDouble(sipPy);

    if (PyErr_Occurred() != NULL)
    {
        sipBadSetType(sipNm_BALL_Constant,sipNm_BALL_MOL);
        return NULL;
    }

    Constant::MOL = sipVal;

    Py_INCREF(Py_None);
    return Py_None;
}


extern "C" {static PyObject *var_Constant_NA(PyObject *, PyObject *);}
static PyObject *var_Constant_NA(PyObject *,PyObject *sipPy)
{
   double sipVal;

    if (sipPy == NULL)
    {
        sipVal = Constant::NA;

        sipPy = PyFloat_FromDouble(sipVal);

        return sipPy;
    }

	sipVal = PyFloat_AsDouble(sipPy);

    if (PyErr_Occurred() != NULL)
    {
        sipBadSetType(sipNm_BALL_Constant,sipNm_BALL_NA);
        return NULL;
    }

    Constant::NA = sipVal;

    Py_INCREF(Py_None);
    return Py_None;
}


extern "C" {static PyObject *var_Constant_AVOGADRO(PyObject *, PyObject *);}
static PyObject *var_Constant_AVOGADRO(PyObject *,PyObject *sipPy)
{
   double sipVal;

    if (sipPy == NULL)
    {
        sipVal = Constant::AVOGADRO;

        sipPy = PyFloat_FromDouble(sipVal);

        return sipPy;
    }

	sipVal = PyFloat_AsDouble(sipPy);

    if (PyErr_Occurred() != NULL)
    {
        sipBadSetType(sipNm_BALL_Constant,sipNm_BALL_AVOGADRO);
        return NULL;
    }

    Constant::AVOGADRO = sipVal;

    Py_INCREF(Py_None);
    return Py_None;
}


extern "C" {static PyObject *var_Constant_NEUTRON_MASS(PyObject *, PyObject *);}
static PyObject *var_Constant_NEUTRON_MASS(PyObject *,PyObject *sipPy)
{
   double sipVal;

    if (sipPy == NULL)
    {
        sipVal = Constant::NEUTRON_MASS;

        sipPy = PyFloat_FromDouble(sipVal);

        return sipPy;
    }

	sipVal = PyFloat_AsDouble(sipPy);

    if (PyErr_Occurred() != NULL)
    {
        sipBadSetType(sipNm_BALL_Constant,sipNm_BALL_NEUTRON_MASS);
        return NULL;
    }

    Constant::NEUTRON_MASS = sipVal;

    Py_INCREF(Py_None);
    return Py_None;
}


extern "C" {static PyObject *var_Constant_PROTON_MASS(PyObject *, PyObject *);}
static PyObject *var_Constant_PROTON_MASS(PyObject *,PyObject *sipPy)
{
   double sipVal;

    if (sipPy == NULL)
    {
        sipVal = Constant::PROTON_MASS;

        sipPy = PyFloat_FromDouble(sipVal);

        return sipPy;
    }

	sipVal = PyFloat_AsDouble(sipPy);

    if (PyErr_Occurred() != NULL)
    {
        sipBadSetType(sipNm_BALL_Constant,sipNm_BALL_PROTON_MASS);
        return NULL;
    }

    Constant::PROTON_MASS = sipVal;

    Py_INCREF(Py_None);
    return Py_None;
}


extern "C" {static PyObject *var_Constant_ELECTRON_MASS(PyObject *, PyObject *);}
static PyObject *var_Constant_ELECTRON_MASS(PyObject *,PyObject *sipPy)
{
   double sipVal;

    if (sipPy == NULL)
    {
        sipVal = Constant::ELECTRON_MASS;

        sipPy = PyFloat_FromDouble(sipVal);

        return sipPy;
    }

	sipVal = PyFloat_AsDouble(sipPy);

    if (PyErr_Occurred() != NULL)
    {
        sipBadSetType(sipNm_BALL_Constant,sipNm_BALL_ELECTRON_MASS);
        return NULL;
    }

    Constant::ELECTRON_MASS = sipVal;

    Py_INCREF(Py_None);
    return Py_None;
}


extern "C" {static PyObject *var_Constant_e0(PyObject *, PyObject *);}
static PyObject *var_Constant_e0(PyObject *,PyObject *sipPy)
{
   double sipVal;

    if (sipPy == NULL)
    {
        sipVal = Constant::e0;

        sipPy = PyFloat_FromDouble(sipVal);

        return sipPy;
    }

	sipVal = PyFloat_AsDouble(sipPy);

    if (PyErr_Occurred() != NULL)
    {
        sipBadSetType(sipNm_BALL_Constant,sipNm_BALL_e0);
        return NULL;
    }

    Constant::e0 = sipVal;

    Py_INCREF(Py_None);
    return Py_None;
}


extern "C" {static PyObject *var_Constant_ELEMENTARY_CHARGE(PyObject *, PyObject *);}
static PyObject *var_Constant_ELEMENTARY_CHARGE(PyObject *,PyObject *sipPy)
{
   double sipVal;

    if (sipPy == NULL)
    {
        sipVal = Constant::ELEMENTARY_CHARGE;

        sipPy = PyFloat_FromDouble(sipVal);

        return sipPy;
    }

	sipVal = PyFloat_AsDouble(sipPy);

    if (PyErr_Occurred() != NULL)
    {
        sipBadSetType(sipNm_BALL_Constant,sipNm_BALL_ELEMENTARY_CHARGE);
        return NULL;
    }

    Constant::ELEMENTARY_CHARGE = sipVal;

    Py_INCREF(Py_None);
    return Py_None;
}


extern "C" {static PyObject *var_Constant_EPSILON(PyObject *, PyObject *);}
static PyObject *var_Constant_EPSILON(PyObject *,PyObject *sipPy)
{
   double sipVal;

    if (sipPy == NULL)
    {
        sipVal = Constant::EPSILON;

        sipPy = PyFloat_FromDouble(sipVal);

        return sipPy;
    }

	sipVal = PyFloat_AsDouble(sipPy);

    if (PyErr_Occurred() != NULL)
    {
        sipBadSetType(sipNm_BALL_Constant,sipNm_BALL_EPSILON);
        return NULL;
    }

    Constant::EPSILON = sipVal;

    Py_INCREF(Py_None);
    return Py_None;
}


extern "C" {static PyObject *var_Constant_E(PyObject *, PyObject *);}
static PyObject *var_Constant_E(PyObject *,PyObject *sipPy)
{
   double sipVal;

    if (sipPy == NULL)
    {
        sipVal = Constant::E;

        sipPy = PyFloat_FromDouble(sipVal);

        return sipPy;
    }

	sipVal = PyFloat_AsDouble(sipPy);

    if (PyErr_Occurred() != NULL)
    {
        sipBadSetType(sipNm_BALL_Constant,sipNm_BALL_E);
        return NULL;
    }

    Constant::E = sipVal;

    Py_INCREF(Py_None);
    return Py_None;
}


extern "C" {static PyObject *var_Constant_PI(PyObject *, PyObject *);}
static PyObject *var_Constant_PI(PyObject *,PyObject *sipPy)
{
   double sipVal;

    if (sipPy == NULL)
    {
        sipVal = Constant::PI;

        sipPy = PyFloat_FromDouble(sipVal);

        return sipPy;
    }

	sipVal = PyFloat_AsDouble(sipPy);

    if (PyErr_Occurred() != NULL)
    {
        sipBadSetType(sipNm_BALL_Constant,sipNm_BALL_PI);
        return NULL;
    }

    Constant::PI = sipVal;

    Py_INCREF(Py_None);
    return Py_None;
}

PyMethodDef variables_Constant[] = {
    {sipNm_BALL_CAL_PER_JOULE, var_Constant_CAL_PER_JOULE, METH_STATIC, NULL},
    {sipNm_BALL_JOULE_PER_CAL, var_Constant_JOULE_PER_CAL, METH_STATIC, NULL},
    {sipNm_BALL_M_PER_FOOT, var_Constant_M_PER_FOOT, METH_STATIC, NULL},
    {sipNm_BALL_MM_PER_INCH, var_Constant_MM_PER_INCH, METH_STATIC, NULL},
    {sipNm_BALL_RAD_PER_DEG, var_Constant_RAD_PER_DEG, METH_STATIC, NULL},
    {sipNm_BALL_DEG_PER_RAD, var_Constant_DEG_PER_RAD, METH_STATIC, NULL},
    {sipNm_BALL_FINE_STRUCTURE_CONSTANT, var_Constant_FINE_STRUCTURE_CONSTANT, METH_STATIC, NULL},
    {sipNm_BALL_GRAVITATIONAL_CONSTANT, var_Constant_GRAVITATIONAL_CONSTANT, METH_STATIC, NULL},
    {sipNm_BALL_c, var_Constant_c, METH_STATIC, NULL},
    {sipNm_BALL_SPEED_OF_LIGHT, var_Constant_SPEED_OF_LIGHT, METH_STATIC, NULL},
    {sipNm_BALL_VACUUM_PERMEABILITY, var_Constant_VACUUM_PERMEABILITY, METH_STATIC, NULL},
    {sipNm_BALL_VACUUM_PERMITTIVITY, var_Constant_VACUUM_PERMITTIVITY, METH_STATIC, NULL},
    {sipNm_BALL_a0, var_Constant_a0, METH_STATIC, NULL},
    {sipNm_BALL_BOHR_RADIUS, var_Constant_BOHR_RADIUS, METH_STATIC, NULL},
    {sipNm_BALL_F, var_Constant_F, METH_STATIC, NULL},
    {sipNm_BALL_FARADAY, var_Constant_FARADAY, METH_STATIC, NULL},
    {sipNm_BALL_R, var_Constant_R, METH_STATIC, NULL},
    {sipNm_BALL_GAS_CONSTANT, var_Constant_GAS_CONSTANT, METH_STATIC, NULL},
    {sipNm_BALL_h, var_Constant_h, METH_STATIC, NULL},
    {sipNm_BALL_PLANCK, var_Constant_PLANCK, METH_STATIC, NULL},
    {sipNm_BALL_k, var_Constant_k, METH_STATIC, NULL},
    {sipNm_BALL_BOLTZMANN, var_Constant_BOLTZMANN, METH_STATIC, NULL},
    {sipNm_BALL_MOL, var_Constant_MOL, METH_STATIC, NULL},
    {sipNm_BALL_NA, var_Constant_NA, METH_STATIC, NULL},
    {sipNm_BALL_AVOGADRO, var_Constant_AVOGADRO, METH_STATIC, NULL},
    {sipNm_BALL_NEUTRON_MASS, var_Constant_NEUTRON_MASS, METH_STATIC, NULL},
    {sipNm_BALL_PROTON_MASS, var_Constant_PROTON_MASS, METH_STATIC, NULL},
    {sipNm_BALL_ELECTRON_MASS, var_Constant_ELECTRON_MASS, METH_STATIC, NULL},
    {sipNm_BALL_e0, var_Constant_e0, METH_STATIC, NULL},
    {sipNm_BALL_ELEMENTARY_CHARGE, var_Constant_ELEMENTARY_CHARGE, METH_STATIC, NULL},
    {sipNm_BALL_EPSILON, var_Constant_EPSILON, METH_STATIC, NULL},
    {sipNm_BALL_E, var_Constant_E, METH_STATIC, NULL},
    {sipNm_BALL_PI, var_Constant_PI, METH_STATIC, NULL},
    {0, 0, 0, 0}
};


extern "C" {static void *forceConvertTo_Constant(PyObject *, int *);}
static void *forceConvertTo_Constant(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_Constant))
        return sipConvertToCpp(valobj,sipClass_Constant,iserrp);

    sipBadClass(sipNm_BALL_Constant);

    *iserrp = 1;

    return NULL;
}


sipTypeDef sipType_BALL_Constant = {
    0,
    0,
    "BALL.Constant",
    0,
    {0, 0, 1},
    0,
    0,
    0, 0,
    0, 0,
    variables_Constant,
    init_Constant,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_Constant,
    cast_Constant,
    release_Constant,
    forceConvertTo_Constant,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
