/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLTime.h"


/* Call the mapped type's destructor. */
extern "C" {static void release_Time(void *, int);}
static void release_Time(void *ptr, int)
{
    delete reinterpret_cast<Time *>(ptr);
}



extern "C" {static int convertTo_Time(PyObject *, void **, int *, PyObject *);}
static int convertTo_Time(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *)
{
    Time **sipCppPtr = reinterpret_cast<Time **>(sipCppPtrV);

#line 103 "global.sip"
	if (sipIsErr == NULL)
	{
		return PyInt_Check(sipPy);
	}
	if (PyInt_Check(sipPy))
	{
		*sipCppPtr = new Time;
		**sipCppPtr = PyInt_AsLong(sipPy);
	
		return 1;
	}
	
	return 0;
#line 43 "sipBALLTime.C"
}


extern "C" {static void *forceConvertTo_Time(PyObject *, int *);}
static void *forceConvertTo_Time(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (convertTo_Time(valobj,NULL,NULL,NULL))
    {
        void *val;

        /*
         * Note that we throw away the flag that says if the value
         * has just been created on the heap or not.
         */
        convertTo_Time(valobj,&val,iserrp,NULL);

        return val;
    }

    sipBadClass("Time");

    *iserrp = 1;

    return NULL;
}


extern "C" {static PyObject *convertFrom_Time(void *, PyObject *);}
static PyObject *convertFrom_Time(void *sipCppV,PyObject *)
{
   Time *sipCpp = reinterpret_cast<Time *>(sipCppV);

#line 118 "global.sip"
	if (sipCpp == NULL)
	{
		return PyInt_FromLong(0);
	}
	return PyInt_FromLong(*sipCpp);
#line 85 "sipBALLTime.C"
}


sipMappedType sipMappedTypeDef_Time = {
    "Time",
    release_Time,
    forceConvertTo_Time,
    convertTo_Time,
    convertFrom_Time
};
