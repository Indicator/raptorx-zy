/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLGeometricObjectList.h"


/* Call the mapped type's destructor. */
extern "C" {static void release_GeometricObjectList(void *, int);}
static void release_GeometricObjectList(void *ptr, int)
{
    delete reinterpret_cast<GeometricObjectList *>(ptr);
}



extern "C" {static int convertTo_GeometricObjectList(PyObject *, void **, int *, PyObject *);}
static int convertTo_GeometricObjectList(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *)
{
    GeometricObjectList **sipCppPtr = reinterpret_cast<GeometricObjectList **>(sipCppPtrV);

#line 264 "pyLists.sip"
	if (sipCppPtr == 0) return 0;
	BALL_CONVERT_TO(GeometricObject)
#line 32 "sipBALLGeometricObjectList.C"
}


extern "C" {static void *forceConvertTo_GeometricObjectList(PyObject *, int *);}
static void *forceConvertTo_GeometricObjectList(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (convertTo_GeometricObjectList(valobj,NULL,NULL,NULL))
    {
        void *val;

        /*
         * Note that we throw away the flag that says if the value
         * has just been created on the heap or not.
         */
        convertTo_GeometricObjectList(valobj,&val,iserrp,NULL);

        return val;
    }

    sipBadClass("GeometricObjectList");

    *iserrp = 1;

    return NULL;
}


extern "C" {static PyObject *convertFrom_GeometricObjectList(void *, PyObject *);}
static PyObject *convertFrom_GeometricObjectList(void *sipCppV,PyObject *)
{
   GeometricObjectList *sipCpp = reinterpret_cast<GeometricObjectList *>(sipCppV);

#line 260 "pyLists.sip"
	BALL_CONVERT_FROM(GeometricObject)
#line 70 "sipBALLGeometricObjectList.C"
}


sipMappedType sipMappedTypeDef_GeometricObjectList = {
    "GeometricObjectList",
    release_GeometricObjectList,
    forceConvertTo_GeometricObjectList,
    convertTo_GeometricObjectList,
    convertFrom_GeometricObjectList
};
