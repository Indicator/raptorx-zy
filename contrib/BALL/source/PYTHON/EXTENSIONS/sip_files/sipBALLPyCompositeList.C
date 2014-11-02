/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLPyCompositeList.h"


/* Call the mapped type's destructor. */
extern "C" {static void release_PyCompositeList(void *, int);}
static void release_PyCompositeList(void *ptr, int)
{
    delete reinterpret_cast<PyCompositeList *>(ptr);
}



extern "C" {static int convertTo_PyCompositeList(PyObject *, void **, int *, PyObject *);}
static int convertTo_PyCompositeList(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *)
{
    PyCompositeList **sipCppPtr = reinterpret_cast<PyCompositeList **>(sipCppPtrV);

#line 41 "pyCompositeList.sip"
	// Convert a Python list of Composite instances to an CompositeList object on the
	// heap.
	//
	
	if (sipIsErr == NULL)
	{
		return PyList_Check(sipPy);
	}
 
	PyCompositeList *composite_list = new PyCompositeList;
 
	for (int i = 0; i < PyList_GET_SIZE(sipPy); ++i)
	{
		Composite* composite;
 
		composite = reinterpret_cast<Composite*>(sipForceConvertTo_Composite(PyList_GET_ITEM(sipPy,i),sipIsErr));
 
		if (*sipIsErr)
		{
			delete composite_list;
			return 0;
		}
 
		composite_list -> push_back(composite);
	}
 
	*sipCppPtr = composite_list;

	return 1;
#line 59 "sipBALLPyCompositeList.C"
}


extern "C" {static void *forceConvertTo_PyCompositeList(PyObject *, int *);}
static void *forceConvertTo_PyCompositeList(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (convertTo_PyCompositeList(valobj,NULL,NULL,NULL))
    {
        void *val;

        /*
         * Note that we throw away the flag that says if the value
         * has just been created on the heap or not.
         */
        convertTo_PyCompositeList(valobj,&val,iserrp,NULL);

        return val;
    }

    sipBadClass("PyCompositeList");

    *iserrp = 1;

    return NULL;
}


extern "C" {static PyObject *convertFrom_PyCompositeList(void *, PyObject *);}
static PyObject *convertFrom_PyCompositeList(void *sipCppV,PyObject *)
{
   PyCompositeList *sipCpp = reinterpret_cast<PyCompositeList *>(sipCppV);

#line 16 "pyCompositeList.sip"
	PyObject *pl;

	if ((pl = PyList_New(0)) == NULL)
	{
		return NULL;
	}

	// Convert the list.

	for (PyCompositeList::ConstIterator it = sipCpp->begin(); it != sipCpp->end(); ++it)
	{
		Composite& obj = **it;
		PyObject *inst;

		if ((inst = pyMapBALLObjectToSip(obj)) == NULL || PyList_Append(pl,inst) < 0)
		{
			Py_DECREF(pl);
			return NULL;
		}
	}

	return pl;
#line 118 "sipBALLPyCompositeList.C"
}


sipMappedType sipMappedTypeDef_PyCompositeList = {
    "PyCompositeList",
    release_PyCompositeList,
    forceConvertTo_PyCompositeList,
    convertTo_PyCompositeList,
    convertFrom_PyCompositeList
};
