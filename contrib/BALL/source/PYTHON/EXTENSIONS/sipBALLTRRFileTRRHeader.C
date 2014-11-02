/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLTRRFileTRRHeader.h"

#include "sipBALLString.h"



/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_TRRFile_TRRHeader(void *, sipWrapperType *);}
static void *cast_TRRFile_TRRHeader(void *ptr,sipWrapperType *targetClass)
{
    if (targetClass == sipClass_TRRFile_TRRHeader)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_TRRFile_TRRHeader(void *, int);}
static void release_TRRFile_TRRHeader(void *ptr,int)
{
    delete reinterpret_cast<TRRFile::TRRHeader *>(ptr);
}


extern "C" {static void dealloc_TRRFile_TRRHeader(sipWrapper *);}
static void dealloc_TRRFile_TRRHeader(sipWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_TRRFile_TRRHeader(sipSelf->u.cppPtr,0);
    }
}


extern "C" {static void *init_TRRFile_TRRHeader(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_TRRFile_TRRHeader(sipWrapper *,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    TRRFile::TRRHeader *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            sipCpp = new TRRFile::TRRHeader();
        }
    }

    if (!sipCpp)
    {
        const TRRFile::TRRHeader * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"JA",sipClass_TRRFile_TRRHeader,&a0))
        {
            try
            {
            sipCpp = new TRRFile::TRRHeader(*a0);
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


extern "C" {static PyObject *var_TRRFile_TRRHeader_lambda(PyObject *, PyObject *);}
static PyObject *var_TRRFile_TRRHeader_lambda(PyObject *sipSelf,PyObject *sipPy)
{
   float sipVal;
    TRRFile::TRRHeader *sipCpp = reinterpret_cast<TRRFile::TRRHeader *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_TRRFile_TRRHeader));

    if (!sipCpp)
        return NULL;

    if (sipPy == NULL)
    {
        sipVal = sipCpp->lambda;

        sipPy = PyFloat_FromDouble((double)sipVal);

        return sipPy;
    }

	sipVal = (float)PyFloat_AsDouble(sipPy);

    if (PyErr_Occurred() != NULL)
    {
        sipBadSetType(sipNm_BALL_TRRHeader,sipNm_BALL_lambda);
        return NULL;
    }

    sipCpp->lambda = sipVal;

    Py_INCREF(Py_None);
    return Py_None;
}


extern "C" {static PyObject *var_TRRFile_TRRHeader_timestep_time(PyObject *, PyObject *);}
static PyObject *var_TRRFile_TRRHeader_timestep_time(PyObject *sipSelf,PyObject *sipPy)
{
   float sipVal;
    TRRFile::TRRHeader *sipCpp = reinterpret_cast<TRRFile::TRRHeader *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_TRRFile_TRRHeader));

    if (!sipCpp)
        return NULL;

    if (sipPy == NULL)
    {
        sipVal = sipCpp->timestep_time;

        sipPy = PyFloat_FromDouble((double)sipVal);

        return sipPy;
    }

	sipVal = (float)PyFloat_AsDouble(sipPy);

    if (PyErr_Occurred() != NULL)
    {
        sipBadSetType(sipNm_BALL_TRRHeader,sipNm_BALL_timestep_time);
        return NULL;
    }

    sipCpp->timestep_time = sipVal;

    Py_INCREF(Py_None);
    return Py_None;
}


extern "C" {static PyObject *var_TRRFile_TRRHeader_nre(PyObject *, PyObject *);}
static PyObject *var_TRRFile_TRRHeader_nre(PyObject *sipSelf,PyObject *sipPy)
{
   int sipVal;
    TRRFile::TRRHeader *sipCpp = reinterpret_cast<TRRFile::TRRHeader *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_TRRFile_TRRHeader));

    if (!sipCpp)
        return NULL;

    if (sipPy == NULL)
    {
        sipVal = sipCpp->nre;

        sipPy = PyInt_FromLong(sipVal);

        return sipPy;
    }

	sipVal = (int)PyInt_AsLong(sipPy);

    if (PyErr_Occurred() != NULL)
    {
        sipBadSetType(sipNm_BALL_TRRHeader,sipNm_BALL_nre);
        return NULL;
    }

    sipCpp->nre = sipVal;

    Py_INCREF(Py_None);
    return Py_None;
}


extern "C" {static PyObject *var_TRRFile_TRRHeader_timestep_index(PyObject *, PyObject *);}
static PyObject *var_TRRFile_TRRHeader_timestep_index(PyObject *sipSelf,PyObject *sipPy)
{
   int sipVal;
    TRRFile::TRRHeader *sipCpp = reinterpret_cast<TRRFile::TRRHeader *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_TRRFile_TRRHeader));

    if (!sipCpp)
        return NULL;

    if (sipPy == NULL)
    {
        sipVal = sipCpp->timestep_index;

        sipPy = PyInt_FromLong(sipVal);

        return sipPy;
    }

	sipVal = (int)PyInt_AsLong(sipPy);

    if (PyErr_Occurred() != NULL)
    {
        sipBadSetType(sipNm_BALL_TRRHeader,sipNm_BALL_timestep_index);
        return NULL;
    }

    sipCpp->timestep_index = sipVal;

    Py_INCREF(Py_None);
    return Py_None;
}


extern "C" {static PyObject *var_TRRFile_TRRHeader_number_of_atoms(PyObject *, PyObject *);}
static PyObject *var_TRRFile_TRRHeader_number_of_atoms(PyObject *sipSelf,PyObject *sipPy)
{
   int sipVal;
    TRRFile::TRRHeader *sipCpp = reinterpret_cast<TRRFile::TRRHeader *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_TRRFile_TRRHeader));

    if (!sipCpp)
        return NULL;

    if (sipPy == NULL)
    {
        sipVal = sipCpp->number_of_atoms;

        sipPy = PyInt_FromLong(sipVal);

        return sipPy;
    }

	sipVal = (int)PyInt_AsLong(sipPy);

    if (PyErr_Occurred() != NULL)
    {
        sipBadSetType(sipNm_BALL_TRRHeader,sipNm_BALL_number_of_atoms);
        return NULL;
    }

    sipCpp->number_of_atoms = sipVal;

    Py_INCREF(Py_None);
    return Py_None;
}


extern "C" {static PyObject *var_TRRFile_TRRHeader_force_data_size(PyObject *, PyObject *);}
static PyObject *var_TRRFile_TRRHeader_force_data_size(PyObject *sipSelf,PyObject *sipPy)
{
   int sipVal;
    TRRFile::TRRHeader *sipCpp = reinterpret_cast<TRRFile::TRRHeader *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_TRRFile_TRRHeader));

    if (!sipCpp)
        return NULL;

    if (sipPy == NULL)
    {
        sipVal = sipCpp->force_data_size;

        sipPy = PyInt_FromLong(sipVal);

        return sipPy;
    }

	sipVal = (int)PyInt_AsLong(sipPy);

    if (PyErr_Occurred() != NULL)
    {
        sipBadSetType(sipNm_BALL_TRRHeader,sipNm_BALL_force_data_size);
        return NULL;
    }

    sipCpp->force_data_size = sipVal;

    Py_INCREF(Py_None);
    return Py_None;
}


extern "C" {static PyObject *var_TRRFile_TRRHeader_velocity_data_size(PyObject *, PyObject *);}
static PyObject *var_TRRFile_TRRHeader_velocity_data_size(PyObject *sipSelf,PyObject *sipPy)
{
   int sipVal;
    TRRFile::TRRHeader *sipCpp = reinterpret_cast<TRRFile::TRRHeader *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_TRRFile_TRRHeader));

    if (!sipCpp)
        return NULL;

    if (sipPy == NULL)
    {
        sipVal = sipCpp->velocity_data_size;

        sipPy = PyInt_FromLong(sipVal);

        return sipPy;
    }

	sipVal = (int)PyInt_AsLong(sipPy);

    if (PyErr_Occurred() != NULL)
    {
        sipBadSetType(sipNm_BALL_TRRHeader,sipNm_BALL_velocity_data_size);
        return NULL;
    }

    sipCpp->velocity_data_size = sipVal;

    Py_INCREF(Py_None);
    return Py_None;
}


extern "C" {static PyObject *var_TRRFile_TRRHeader_position_data_size(PyObject *, PyObject *);}
static PyObject *var_TRRFile_TRRHeader_position_data_size(PyObject *sipSelf,PyObject *sipPy)
{
   int sipVal;
    TRRFile::TRRHeader *sipCpp = reinterpret_cast<TRRFile::TRRHeader *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_TRRFile_TRRHeader));

    if (!sipCpp)
        return NULL;

    if (sipPy == NULL)
    {
        sipVal = sipCpp->position_data_size;

        sipPy = PyInt_FromLong(sipVal);

        return sipPy;
    }

	sipVal = (int)PyInt_AsLong(sipPy);

    if (PyErr_Occurred() != NULL)
    {
        sipBadSetType(sipNm_BALL_TRRHeader,sipNm_BALL_position_data_size);
        return NULL;
    }

    sipCpp->position_data_size = sipVal;

    Py_INCREF(Py_None);
    return Py_None;
}


extern "C" {static PyObject *var_TRRFile_TRRHeader_sym_size(PyObject *, PyObject *);}
static PyObject *var_TRRFile_TRRHeader_sym_size(PyObject *sipSelf,PyObject *sipPy)
{
   int sipVal;
    TRRFile::TRRHeader *sipCpp = reinterpret_cast<TRRFile::TRRHeader *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_TRRFile_TRRHeader));

    if (!sipCpp)
        return NULL;

    if (sipPy == NULL)
    {
        sipVal = sipCpp->sym_size;

        sipPy = PyInt_FromLong(sipVal);

        return sipPy;
    }

	sipVal = (int)PyInt_AsLong(sipPy);

    if (PyErr_Occurred() != NULL)
    {
        sipBadSetType(sipNm_BALL_TRRHeader,sipNm_BALL_sym_size);
        return NULL;
    }

    sipCpp->sym_size = sipVal;

    Py_INCREF(Py_None);
    return Py_None;
}


extern "C" {static PyObject *var_TRRFile_TRRHeader_top_size(PyObject *, PyObject *);}
static PyObject *var_TRRFile_TRRHeader_top_size(PyObject *sipSelf,PyObject *sipPy)
{
   int sipVal;
    TRRFile::TRRHeader *sipCpp = reinterpret_cast<TRRFile::TRRHeader *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_TRRFile_TRRHeader));

    if (!sipCpp)
        return NULL;

    if (sipPy == NULL)
    {
        sipVal = sipCpp->top_size;

        sipPy = PyInt_FromLong(sipVal);

        return sipPy;
    }

	sipVal = (int)PyInt_AsLong(sipPy);

    if (PyErr_Occurred() != NULL)
    {
        sipBadSetType(sipNm_BALL_TRRHeader,sipNm_BALL_top_size);
        return NULL;
    }

    sipCpp->top_size = sipVal;

    Py_INCREF(Py_None);
    return Py_None;
}


extern "C" {static PyObject *var_TRRFile_TRRHeader_pres_size(PyObject *, PyObject *);}
static PyObject *var_TRRFile_TRRHeader_pres_size(PyObject *sipSelf,PyObject *sipPy)
{
   int sipVal;
    TRRFile::TRRHeader *sipCpp = reinterpret_cast<TRRFile::TRRHeader *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_TRRFile_TRRHeader));

    if (!sipCpp)
        return NULL;

    if (sipPy == NULL)
    {
        sipVal = sipCpp->pres_size;

        sipPy = PyInt_FromLong(sipVal);

        return sipPy;
    }

	sipVal = (int)PyInt_AsLong(sipPy);

    if (PyErr_Occurred() != NULL)
    {
        sipBadSetType(sipNm_BALL_TRRHeader,sipNm_BALL_pres_size);
        return NULL;
    }

    sipCpp->pres_size = sipVal;

    Py_INCREF(Py_None);
    return Py_None;
}


extern "C" {static PyObject *var_TRRFile_TRRHeader_vir_size(PyObject *, PyObject *);}
static PyObject *var_TRRFile_TRRHeader_vir_size(PyObject *sipSelf,PyObject *sipPy)
{
   int sipVal;
    TRRFile::TRRHeader *sipCpp = reinterpret_cast<TRRFile::TRRHeader *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_TRRFile_TRRHeader));

    if (!sipCpp)
        return NULL;

    if (sipPy == NULL)
    {
        sipVal = sipCpp->vir_size;

        sipPy = PyInt_FromLong(sipVal);

        return sipPy;
    }

	sipVal = (int)PyInt_AsLong(sipPy);

    if (PyErr_Occurred() != NULL)
    {
        sipBadSetType(sipNm_BALL_TRRHeader,sipNm_BALL_vir_size);
        return NULL;
    }

    sipCpp->vir_size = sipVal;

    Py_INCREF(Py_None);
    return Py_None;
}


extern "C" {static PyObject *var_TRRFile_TRRHeader_bounding_box_data_size(PyObject *, PyObject *);}
static PyObject *var_TRRFile_TRRHeader_bounding_box_data_size(PyObject *sipSelf,PyObject *sipPy)
{
   int sipVal;
    TRRFile::TRRHeader *sipCpp = reinterpret_cast<TRRFile::TRRHeader *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_TRRFile_TRRHeader));

    if (!sipCpp)
        return NULL;

    if (sipPy == NULL)
    {
        sipVal = sipCpp->bounding_box_data_size;

        sipPy = PyInt_FromLong(sipVal);

        return sipPy;
    }

	sipVal = (int)PyInt_AsLong(sipPy);

    if (PyErr_Occurred() != NULL)
    {
        sipBadSetType(sipNm_BALL_TRRHeader,sipNm_BALL_bounding_box_data_size);
        return NULL;
    }

    sipCpp->bounding_box_data_size = sipVal;

    Py_INCREF(Py_None);
    return Py_None;
}


extern "C" {static PyObject *var_TRRFile_TRRHeader_e_size(PyObject *, PyObject *);}
static PyObject *var_TRRFile_TRRHeader_e_size(PyObject *sipSelf,PyObject *sipPy)
{
   int sipVal;
    TRRFile::TRRHeader *sipCpp = reinterpret_cast<TRRFile::TRRHeader *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_TRRFile_TRRHeader));

    if (!sipCpp)
        return NULL;

    if (sipPy == NULL)
    {
        sipVal = sipCpp->e_size;

        sipPy = PyInt_FromLong(sipVal);

        return sipPy;
    }

	sipVal = (int)PyInt_AsLong(sipPy);

    if (PyErr_Occurred() != NULL)
    {
        sipBadSetType(sipNm_BALL_TRRHeader,sipNm_BALL_e_size);
        return NULL;
    }

    sipCpp->e_size = sipVal;

    Py_INCREF(Py_None);
    return Py_None;
}


extern "C" {static PyObject *var_TRRFile_TRRHeader_ir_size(PyObject *, PyObject *);}
static PyObject *var_TRRFile_TRRHeader_ir_size(PyObject *sipSelf,PyObject *sipPy)
{
   int sipVal;
    TRRFile::TRRHeader *sipCpp = reinterpret_cast<TRRFile::TRRHeader *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_TRRFile_TRRHeader));

    if (!sipCpp)
        return NULL;

    if (sipPy == NULL)
    {
        sipVal = sipCpp->ir_size;

        sipPy = PyInt_FromLong(sipVal);

        return sipPy;
    }

	sipVal = (int)PyInt_AsLong(sipPy);

    if (PyErr_Occurred() != NULL)
    {
        sipBadSetType(sipNm_BALL_TRRHeader,sipNm_BALL_ir_size);
        return NULL;
    }

    sipCpp->ir_size = sipVal;

    Py_INCREF(Py_None);
    return Py_None;
}


extern "C" {static PyObject *var_TRRFile_TRRHeader_title_string(PyObject *, PyObject *);}
static PyObject *var_TRRFile_TRRHeader_title_string(PyObject *sipSelf,PyObject *sipPy)
{
    int sipIsErr = 0;
    int sipValState;
   String *sipVal;
    TRRFile::TRRHeader *sipCpp = reinterpret_cast<TRRFile::TRRHeader *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_TRRFile_TRRHeader));

    if (!sipCpp)
        return NULL;

    if (sipPy == NULL)
    {
        sipVal = &sipCpp->title_string;

        sipPy = sipConvertFromInstance(sipVal,sipClass_String,NULL);

        return sipPy;
    }

    sipVal = reinterpret_cast<String *>(sipForceConvertToInstance(sipPy,sipClass_String,NULL,SIP_NOT_NONE,&sipValState,&sipIsErr));

    if (sipIsErr)
        return NULL;

    sipCpp->title_string = *sipVal;

    sipReleaseInstance(sipVal,sipClass_String,sipValState);

    Py_INCREF(Py_None);
    return Py_None;
}


extern "C" {static PyObject *var_TRRFile_TRRHeader_title_string_length(PyObject *, PyObject *);}
static PyObject *var_TRRFile_TRRHeader_title_string_length(PyObject *sipSelf,PyObject *sipPy)
{
   int sipVal;
    TRRFile::TRRHeader *sipCpp = reinterpret_cast<TRRFile::TRRHeader *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_TRRFile_TRRHeader));

    if (!sipCpp)
        return NULL;

    if (sipPy == NULL)
    {
        sipVal = sipCpp->title_string_length;

        sipPy = PyInt_FromLong(sipVal);

        return sipPy;
    }

	sipVal = (int)PyInt_AsLong(sipPy);

    if (PyErr_Occurred() != NULL)
    {
        sipBadSetType(sipNm_BALL_TRRHeader,sipNm_BALL_title_string_length);
        return NULL;
    }

    sipCpp->title_string_length = sipVal;

    Py_INCREF(Py_None);
    return Py_None;
}


extern "C" {static PyObject *var_TRRFile_TRRHeader_VERSION(PyObject *, PyObject *);}
static PyObject *var_TRRFile_TRRHeader_VERSION(PyObject *sipSelf,PyObject *sipPy)
{
   int sipVal;
    TRRFile::TRRHeader *sipCpp = reinterpret_cast<TRRFile::TRRHeader *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_TRRFile_TRRHeader));

    if (!sipCpp)
        return NULL;

    if (sipPy == NULL)
    {
        sipVal = sipCpp->VERSION;

        sipPy = PyInt_FromLong(sipVal);

        return sipPy;
    }

	sipVal = (int)PyInt_AsLong(sipPy);

    if (PyErr_Occurred() != NULL)
    {
        sipBadSetType(sipNm_BALL_TRRHeader,sipNm_BALL_VERSION);
        return NULL;
    }

    sipCpp->VERSION = sipVal;

    Py_INCREF(Py_None);
    return Py_None;
}


extern "C" {static PyObject *var_TRRFile_TRRHeader_MAGIC(PyObject *, PyObject *);}
static PyObject *var_TRRFile_TRRHeader_MAGIC(PyObject *sipSelf,PyObject *sipPy)
{
   int sipVal;
    TRRFile::TRRHeader *sipCpp = reinterpret_cast<TRRFile::TRRHeader *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_TRRFile_TRRHeader));

    if (!sipCpp)
        return NULL;

    if (sipPy == NULL)
    {
        sipVal = sipCpp->MAGIC;

        sipPy = PyInt_FromLong(sipVal);

        return sipPy;
    }

	sipVal = (int)PyInt_AsLong(sipPy);

    if (PyErr_Occurred() != NULL)
    {
        sipBadSetType(sipNm_BALL_TRRHeader,sipNm_BALL_MAGIC);
        return NULL;
    }

    sipCpp->MAGIC = sipVal;

    Py_INCREF(Py_None);
    return Py_None;
}

PyMethodDef variables_TRRFile_TRRHeader[] = {
    {sipNm_BALL_lambda, var_TRRFile_TRRHeader_lambda, 0, NULL},
    {sipNm_BALL_timestep_time, var_TRRFile_TRRHeader_timestep_time, 0, NULL},
    {sipNm_BALL_nre, var_TRRFile_TRRHeader_nre, 0, NULL},
    {sipNm_BALL_timestep_index, var_TRRFile_TRRHeader_timestep_index, 0, NULL},
    {sipNm_BALL_number_of_atoms, var_TRRFile_TRRHeader_number_of_atoms, 0, NULL},
    {sipNm_BALL_force_data_size, var_TRRFile_TRRHeader_force_data_size, 0, NULL},
    {sipNm_BALL_velocity_data_size, var_TRRFile_TRRHeader_velocity_data_size, 0, NULL},
    {sipNm_BALL_position_data_size, var_TRRFile_TRRHeader_position_data_size, 0, NULL},
    {sipNm_BALL_sym_size, var_TRRFile_TRRHeader_sym_size, 0, NULL},
    {sipNm_BALL_top_size, var_TRRFile_TRRHeader_top_size, 0, NULL},
    {sipNm_BALL_pres_size, var_TRRFile_TRRHeader_pres_size, 0, NULL},
    {sipNm_BALL_vir_size, var_TRRFile_TRRHeader_vir_size, 0, NULL},
    {sipNm_BALL_bounding_box_data_size, var_TRRFile_TRRHeader_bounding_box_data_size, 0, NULL},
    {sipNm_BALL_e_size, var_TRRFile_TRRHeader_e_size, 0, NULL},
    {sipNm_BALL_ir_size, var_TRRFile_TRRHeader_ir_size, 0, NULL},
    {sipNm_BALL_title_string, var_TRRFile_TRRHeader_title_string, 0, NULL},
    {sipNm_BALL_title_string_length, var_TRRFile_TRRHeader_title_string_length, 0, NULL},
    {sipNm_BALL_VERSION, var_TRRFile_TRRHeader_VERSION, 0, NULL},
    {sipNm_BALL_MAGIC, var_TRRFile_TRRHeader_MAGIC, 0, NULL},
    {0, 0, 0, 0}
};


extern "C" {static void *forceConvertTo_TRRFile_TRRHeader(PyObject *, int *);}
static void *forceConvertTo_TRRFile_TRRHeader(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (valobj == Py_None || sipIsSubClassInstance(valobj,sipClass_TRRFile_TRRHeader))
        return sipConvertToCpp(valobj,sipClass_TRRFile_TRRHeader,iserrp);

    sipBadClass(sipNm_BALL_TRRHeader);

    *iserrp = 1;

    return NULL;
}


sipTypeDef sipType_BALL_TRRFile_TRRHeader = {
    0,
    0,
    "BALL.TRRFile.TRRHeader",
    0,
    {175, 255, 0},
    0,
    0,
    0, 0,
    0, 0,
    variables_TRRFile_TRRHeader,
    init_TRRFile_TRRHeader,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_TRRFile_TRRHeader,
    cast_TRRFile_TRRHeader,
    release_TRRFile_TRRHeader,
    forceConvertTo_TRRFile_TRRHeader,
    0,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
