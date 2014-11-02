/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLPyIndexList.h"


/* Call the mapped type's destructor. */
extern "C" {static void release_PyIndexList(void *, int);}
static void release_PyIndexList(void *ptr, int)
{
    delete reinterpret_cast<PyIndexList *>(ptr);
}



extern "C" {static int convertTo_PyIndexList(PyObject *, void **, int *, PyObject *);}
static int convertTo_PyIndexList(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *)
{
    PyIndexList **sipCppPtr = reinterpret_cast<PyIndexList **>(sipCppPtrV);

#line 36 "pyIndexList.sip"
	// Convert a Python list of Index instances to an IndexList object on the
	// heap.
 
	if (sipIsErr == NULL)
	{
		return PyList_Check(sipPy);
	}
 
	PyIndexList* index_list = new PyIndexList;
 
	for (int i = 0; i < PyList_GET_SIZE(sipPy); ++i)
	{
		Index index = PyInt_AsLong(PyList_GET_ITEM(sipPy,i));
		index_list -> push_back(index);
	}
 
	*sipCppPtr = index_list;

	return 1;
#line 49 "sipBALLPyIndexList.C"
}


extern "C" {static void *forceConvertTo_PyIndexList(PyObject *, int *);}
static void *forceConvertTo_PyIndexList(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (convertTo_PyIndexList(valobj,NULL,NULL,NULL))
    {
        void *val;

        /*
         * Note that we throw away the flag that says if the value
         * has just been created on the heap or not.
         */
        convertTo_PyIndexList(valobj,&val,iserrp,NULL);

        return val;
    }

    sipBadClass("PyIndexList");

    *iserrp = 1;

    return NULL;
}


extern "C" {static PyObject *convertFrom_PyIndexList(void *, PyObject *);}
static PyObject *convertFrom_PyIndexList(void *sipCppV,PyObject *)
{
   PyIndexList *sipCpp = reinterpret_cast<PyIndexList *>(sipCppV);

#line 15 "pyIndexList.sip"
	PyObject *pl;

	if ((pl = PyList_New(0)) == NULL)
	{
		return NULL;
	}

	// Convert the list.
	for (PyIndexList::ConstIterator it = sipCpp->begin(); it != sipCpp->end(); ++it)
	{
		if (PyList_Append(pl, PyInt_FromLong(*it)) < 0)
		{
			Py_DECREF(pl);
			return NULL;
		}
	}

	return pl;
#line 104 "sipBALLPyIndexList.C"
}


sipMappedType sipMappedTypeDef_PyIndexList = {
    "PyIndexList",
    release_PyIndexList,
    forceConvertTo_PyIndexList,
    convertTo_PyIndexList,
    convertFrom_PyIndexList
};
