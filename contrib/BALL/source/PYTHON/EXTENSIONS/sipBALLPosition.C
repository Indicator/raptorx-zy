/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLPosition.h"


/* Call the mapped type's destructor. */
extern "C" {static void release_Position(void *, int);}
static void release_Position(void *ptr, int)
{
    delete reinterpret_cast<Position *>(ptr);
}



extern "C" {static int convertTo_Position(PyObject *, void **, int *, PyObject *);}
static int convertTo_Position(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *)
{
    Position **sipCppPtr = reinterpret_cast<Position **>(sipCppPtrV);

#line 41 "global.sip"
	if (sipIsErr == NULL)
	{
		return PyInt_Check(sipPy);
	}
	if (PyInt_Check(sipPy))
	{
		*sipCppPtr = new Position;
		**sipCppPtr = PyInt_AsLong(sipPy);
	
		return 1;
	}
	
	return 0;
#line 43 "sipBALLPosition.C"
}


extern "C" {static void *forceConvertTo_Position(PyObject *, int *);}
static void *forceConvertTo_Position(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (convertTo_Position(valobj,NULL,NULL,NULL))
    {
        void *val;

        /*
         * Note that we throw away the flag that says if the value
         * has just been created on the heap or not.
         */
        convertTo_Position(valobj,&val,iserrp,NULL);

        return val;
    }

    sipBadClass("Position");

    *iserrp = 1;

    return NULL;
}


extern "C" {static PyObject *convertFrom_Position(void *, PyObject *);}
static PyObject *convertFrom_Position(void *sipCppV,PyObject *)
{
   Position *sipCpp = reinterpret_cast<Position *>(sipCppV);

#line 56 "global.sip"
	if (sipCpp == NULL)
	{
		return PyInt_FromLong(0);
	}
	return PyInt_FromLong(*sipCpp);
#line 85 "sipBALLPosition.C"
}


sipMappedType sipMappedTypeDef_Position = {
    "Position",
    release_Position,
    forceConvertTo_Position,
    convertTo_Position,
    convertFrom_Position
};
