/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLPyAtomDict.h"


/* Call the mapped type's destructor. */
extern "C" {static void release_PyAtomDict(void *, int);}
static void release_PyAtomDict(void *ptr, int)
{
    delete reinterpret_cast<PyAtomDict *>(ptr);
}



extern "C" {static int convertTo_PyAtomDict(PyObject *, void **, int *, PyObject *);}
static int convertTo_PyAtomDict(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *)
{
    PyAtomDict **sipCppPtr = reinterpret_cast<PyAtomDict **>(sipCppPtrV);

#line 42 "pyAtomDict.sip"
	// Convert a Python dictionary to a PyAtomDict object on the
	// heap.
 
	// create a list of all keys
	PyObject* key_list = PyDict_Keys(sipPy);
	if (key_list == NULL)
	{
		return 0;
	}
		
	PyAtomDict* atom_dict = new PyAtomDict;
 
	for (int i = 0; i < PyList_GET_SIZE(key_list); ++i)
	{
		PyObject* key = PyList_GET_ITEM(key_list,i);
		if (key == NULL)
		{
			break;
		}
		Atom* atom = reinterpret_cast<Atom*>(sipForceConvertTo_Atom(key,sipIsErr));
		if (*sipIsErr)
		{
			break;
		}
		PyObject* float_obj = PyDict_GetItem(sipPy,key);
		if (!PyFloat_Check(float_obj))
		{
			break;
		}
		double value = PyFloat_AsDouble(float_obj);
		atom_dict -> insert(std::pair<Atom*,float>(atom, value));
	}
 
	*sipCppPtr = atom_dict;

	return 1;
#line 66 "sipBALLPyAtomDict.C"
}


extern "C" {static void *forceConvertTo_PyAtomDict(PyObject *, int *);}
static void *forceConvertTo_PyAtomDict(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (convertTo_PyAtomDict(valobj,NULL,NULL,NULL))
    {
        void *val;

        /*
         * Note that we throw away the flag that says if the value
         * has just been created on the heap or not.
         */
        convertTo_PyAtomDict(valobj,&val,iserrp,NULL);

        return val;
    }

    sipBadClass("PyAtomDict");

    *iserrp = 1;

    return NULL;
}


extern "C" {static PyObject *convertFrom_PyAtomDict(void *, PyObject *);}
static PyObject *convertFrom_PyAtomDict(void *sipCppV,PyObject *)
{
   PyAtomDict *sipCpp = reinterpret_cast<PyAtomDict *>(sipCppV);

#line 17 "pyAtomDict.sip"
	PyObject* dict = PyDict_New();

	if (dict == NULL)
	{
		return NULL;
	}

	// Convert the hash map to a dictionary.

	for (PyAtomDict::ConstIterator it = sipCpp->begin(); it != sipCpp->end(); ++it)
	{
		PyObject* key = pyMapBALLObjectToSip(const_cast<Atom&>(*(it->first)));
		PyObject* value = PyFloat_FromDouble(it->second);

		if ((key == NULL) || (value == NULL) || PyDict_SetItem(dict,key,value) < 0)
		{
			Py_DECREF(dict);
			return NULL;
		}
	}

	return dict;
#line 125 "sipBALLPyAtomDict.C"
}


sipMappedType sipMappedTypeDef_PyAtomDict = {
    "PyAtomDict",
    release_PyAtomDict,
    forceConvertTo_PyAtomDict,
    convertTo_PyAtomDict,
    convertFrom_PyAtomDict
};
