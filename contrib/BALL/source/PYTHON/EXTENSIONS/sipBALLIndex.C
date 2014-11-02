/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLIndex.h"


/* Call the mapped type's destructor. */
extern "C" {static void release_Index(void *, int);}
static void release_Index(void *ptr, int)
{
    delete reinterpret_cast<Index *>(ptr);
}



extern "C" {static int convertTo_Index(PyObject *, void **, int *, PyObject *);}
static int convertTo_Index(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *)
{
    Index **sipCppPtr = reinterpret_cast<Index **>(sipCppPtrV);

#line 15 "global.sip"
	if (sipIsErr == NULL)
	{
		return PyInt_Check(sipPy);
	}
	if (PyInt_Check(sipPy))
	{
		*sipCppPtr = new Index;
		**sipCppPtr = PyInt_AsLong(sipPy);
	
		return 1;
	}
	
	return 0;
#line 43 "sipBALLIndex.C"
}


extern "C" {static void *forceConvertTo_Index(PyObject *, int *);}
static void *forceConvertTo_Index(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (convertTo_Index(valobj,NULL,NULL,NULL))
    {
        void *val;

        /*
         * Note that we throw away the flag that says if the value
         * has just been created on the heap or not.
         */
        convertTo_Index(valobj,&val,iserrp,NULL);

        return val;
    }

    sipBadClass("Index");

    *iserrp = 1;

    return NULL;
}


extern "C" {static PyObject *convertFrom_Index(void *, PyObject *);}
static PyObject *convertFrom_Index(void *sipCppV,PyObject *)
{
   Index *sipCpp = reinterpret_cast<Index *>(sipCppV);

#line 30 "global.sip"
	if (sipCpp == NULL)
	{
		return PyInt_FromLong(0);
	}
	return PyInt_FromLong(*sipCpp);
#line 85 "sipBALLIndex.C"
}


sipMappedType sipMappedTypeDef_Index = {
    "Index",
    release_Index,
    forceConvertTo_Index,
    convertTo_Index,
    convertFrom_Index
};
