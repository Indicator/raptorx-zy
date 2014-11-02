/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLLongIndex.h"


/* Call the mapped type's destructor. */
extern "C" {static void release_LongIndex(void *, int);}
static void release_LongIndex(void *ptr, int)
{
    delete reinterpret_cast<LongIndex *>(ptr);
}



extern "C" {static int convertTo_LongIndex(PyObject *, void **, int *, PyObject *);}
static int convertTo_LongIndex(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *)
{
    LongIndex **sipCppPtr = reinterpret_cast<LongIndex **>(sipCppPtrV);

#line 72 "global.sip"
	if (sipIsErr == NULL)
	{
		return PyInt_Check(sipPy);
	}
	if (PyInt_Check(sipPy))
	{
		*sipCppPtr = new LongIndex;
		**sipCppPtr = PyInt_AsLong(sipPy);
	
		return 1;
	}
	
	return 0;
#line 43 "sipBALLLongIndex.C"
}


extern "C" {static void *forceConvertTo_LongIndex(PyObject *, int *);}
static void *forceConvertTo_LongIndex(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (convertTo_LongIndex(valobj,NULL,NULL,NULL))
    {
        void *val;

        /*
         * Note that we throw away the flag that says if the value
         * has just been created on the heap or not.
         */
        convertTo_LongIndex(valobj,&val,iserrp,NULL);

        return val;
    }

    sipBadClass("LongIndex");

    *iserrp = 1;

    return NULL;
}


extern "C" {static PyObject *convertFrom_LongIndex(void *, PyObject *);}
static PyObject *convertFrom_LongIndex(void *sipCppV,PyObject *)
{
   LongIndex *sipCpp = reinterpret_cast<LongIndex *>(sipCppV);

#line 87 "global.sip"
	if (sipCpp == NULL)
	{
		return PyInt_FromLong(0);
	}
	return PyInt_FromLong(*sipCpp);
#line 85 "sipBALLLongIndex.C"
}


sipMappedType sipMappedTypeDef_LongIndex = {
    "LongIndex",
    release_LongIndex,
    forceConvertTo_LongIndex,
    convertTo_LongIndex,
    convertFrom_LongIndex
};
