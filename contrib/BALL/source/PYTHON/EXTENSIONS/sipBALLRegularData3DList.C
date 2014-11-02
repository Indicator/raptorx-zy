/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLRegularData3DList.h"


/* Call the mapped type's destructor. */
extern "C" {static void release_RegularData3DList(void *, int);}
static void release_RegularData3DList(void *ptr, int)
{
    delete reinterpret_cast<RegularData3DList *>(ptr);
}



extern "C" {static int convertTo_RegularData3DList(PyObject *, void **, int *, PyObject *);}
static int convertTo_RegularData3DList(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *)
{
    RegularData3DList **sipCppPtr = reinterpret_cast<RegularData3DList **>(sipCppPtrV);

#line 301 "pyLists.sip"
	if (sipCppPtr == 0) return 0;
	BALL_CONVERT_TO(RegularData3D)
#line 32 "sipBALLRegularData3DList.C"
}


extern "C" {static void *forceConvertTo_RegularData3DList(PyObject *, int *);}
static void *forceConvertTo_RegularData3DList(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (convertTo_RegularData3DList(valobj,NULL,NULL,NULL))
    {
        void *val;

        /*
         * Note that we throw away the flag that says if the value
         * has just been created on the heap or not.
         */
        convertTo_RegularData3DList(valobj,&val,iserrp,NULL);

        return val;
    }

    sipBadClass("RegularData3DList");

    *iserrp = 1;

    return NULL;
}


extern "C" {static PyObject *convertFrom_RegularData3DList(void *, PyObject *);}
static PyObject *convertFrom_RegularData3DList(void *sipCppV,PyObject *)
{
   RegularData3DList *sipCpp = reinterpret_cast<RegularData3DList *>(sipCppV);

#line 297 "pyLists.sip"
	BALL_CONVERT_FROM(RegularData3D)
#line 70 "sipBALLRegularData3DList.C"
}


sipMappedType sipMappedTypeDef_RegularData3DList = {
    "RegularData3DList",
    release_RegularData3DList,
    forceConvertTo_RegularData3DList,
    convertTo_RegularData3DList,
    convertFrom_RegularData3DList
};
