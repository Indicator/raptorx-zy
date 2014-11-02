/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLPyColorRGBAVector.h"


/* Call the mapped type's destructor. */
extern "C" {static void release_PyColorRGBAVector(void *, int);}
static void release_PyColorRGBAVector(void *ptr, int)
{
    delete reinterpret_cast<PyColorRGBAVector *>(ptr);
}



extern "C" {static int convertTo_PyColorRGBAVector(PyObject *, void **, int *, PyObject *);}
static int convertTo_PyColorRGBAVector(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *)
{
    PyColorRGBAVector **sipCppPtr = reinterpret_cast<PyColorRGBAVector **>(sipCppPtrV);

#line 37 "colorRGBAVector.sip"
	// Convert a Python list of ColorRGBA instances to an ColorRGBAVector object on the heap.
	
	if (sipIsErr == NULL) return PyList_Check(sipPy);
 
	PyColorRGBAVector* cl = new PyColorRGBAVector;
 
	for (int i = 0; i < PyList_GET_SIZE(sipPy); ++i)
	{
		ColorRGBA* c = reinterpret_cast<ColorRGBA*>(sipForceConvertTo_ColorRGBA(PyList_GET_ITEM(sipPy,i),sipIsErr));
 
		if (*sipIsErr)
		{
			delete cl;
			return 0;
		}
 
		cl-> push_back(*c);
	}
 
	*sipCppPtr = cl;

	return 1;
#line 52 "sipBALLPyColorRGBAVector.C"
}


extern "C" {static void *forceConvertTo_PyColorRGBAVector(PyObject *, int *);}
static void *forceConvertTo_PyColorRGBAVector(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (convertTo_PyColorRGBAVector(valobj,NULL,NULL,NULL))
    {
        void *val;

        /*
         * Note that we throw away the flag that says if the value
         * has just been created on the heap or not.
         */
        convertTo_PyColorRGBAVector(valobj,&val,iserrp,NULL);

        return val;
    }

    sipBadClass("PyColorRGBAVector");

    *iserrp = 1;

    return NULL;
}


extern "C" {static PyObject *convertFrom_PyColorRGBAVector(void *, PyObject *);}
static PyObject *convertFrom_PyColorRGBAVector(void *sipCppV,PyObject *)
{
   PyColorRGBAVector *sipCpp = reinterpret_cast<PyColorRGBAVector *>(sipCppV);

#line 15 "colorRGBAVector.sip"
	PyObject* pl = PyList_New(0);

	if (pl == NULL) return NULL;

	// Convert the list.

	PyColorRGBAVector::ConstIterator it = sipCpp->begin();
	for (; it != sipCpp->end(); ++it)
	{
		ColorRGBA& obj = *(ColorRGBA*)&*it;
		PyObject *inst = sipConvertFromInstance(&obj, sipClass_ColorRGBA, 0);
		if (inst == NULL || PyList_Append(pl,inst) < 0)
		{
			Py_DECREF(pl);
			return NULL;
		}
	}

	return pl;
#line 108 "sipBALLPyColorRGBAVector.C"
}


sipMappedType sipMappedTypeDef_PyColorRGBAVector = {
    "PyColorRGBAVector",
    release_PyColorRGBAVector,
    forceConvertTo_PyColorRGBAVector,
    convertTo_PyColorRGBAVector,
    convertFrom_PyColorRGBAVector
};
