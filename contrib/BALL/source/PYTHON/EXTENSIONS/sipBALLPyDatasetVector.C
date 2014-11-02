/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLPyDatasetVector.h"


/* Call the mapped type's destructor. */
extern "C" {static void release_PyDatasetVector(void *, int);}
static void release_PyDatasetVector(void *ptr, int)
{
    delete reinterpret_cast<PyDatasetVector *>(ptr);
}



extern "C" {static int convertTo_PyDatasetVector(PyObject *, void **, int *, PyObject *);}
static int convertTo_PyDatasetVector(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *)
{
    PyDatasetVector **sipCppPtr = reinterpret_cast<PyDatasetVector **>(sipCppPtrV);

#line 39 "pyDatasetVector.sip"
	// Convert a Python list of Dataset instances to an DatasetVector object on the
	// heap.
	//
	
	if (sipIsErr == NULL)
	{
		return PyList_Check(sipPy);
	}
 
	PyDatasetVector *dvector = new PyDatasetVector;
 
	for (int i = 0; i < PyList_GET_SIZE(sipPy); ++i)
	{
		Dataset* set;
		set = reinterpret_cast<Dataset*>(sipForceConvertTo_Dataset(PyList_GET_ITEM(sipPy,i),sipIsErr));
 
		if (*sipIsErr)
		{
			delete dvector;
			return 0;
		}
 
		dvector -> push_back(set);
	}
 
	*sipCppPtr = dvector;

	return 1;
#line 58 "sipBALLPyDatasetVector.C"
}


extern "C" {static void *forceConvertTo_PyDatasetVector(PyObject *, int *);}
static void *forceConvertTo_PyDatasetVector(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (convertTo_PyDatasetVector(valobj,NULL,NULL,NULL))
    {
        void *val;

        /*
         * Note that we throw away the flag that says if the value
         * has just been created on the heap or not.
         */
        convertTo_PyDatasetVector(valobj,&val,iserrp,NULL);

        return val;
    }

    sipBadClass("PyDatasetVector");

    *iserrp = 1;

    return NULL;
}


extern "C" {static PyObject *convertFrom_PyDatasetVector(void *, PyObject *);}
static PyObject *convertFrom_PyDatasetVector(void *sipCppV,PyObject *)
{
   PyDatasetVector *sipCpp = reinterpret_cast<PyDatasetVector *>(sipCppV);

#line 15 "pyDatasetVector.sip"
	PyObject *pl;

	if ((pl = PyList_New(0)) == NULL)
	{
		return NULL;
	}

	// Convert the list.

	for (PyDatasetVector::ConstIterator it = sipCpp->begin(); it != sipCpp->end(); ++it)
	{
		Dataset* obj = *it;

		if (PyList_Append(pl, sipConvertFromInstance(obj, sipClass_Dataset, 0)) < 0)
		{
			Py_DECREF(pl);
			return NULL;
		}
	}

	return pl;
#line 116 "sipBALLPyDatasetVector.C"
}


sipMappedType sipMappedTypeDef_PyDatasetVector = {
    "PyDatasetVector",
    release_PyDatasetVector,
    forceConvertTo_PyDatasetVector,
    convertTo_PyDatasetVector,
    convertFrom_PyDatasetVector
};
