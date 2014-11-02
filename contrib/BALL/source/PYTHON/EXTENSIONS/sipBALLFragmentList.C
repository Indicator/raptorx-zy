/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLFragmentList.h"


/* Call the mapped type's destructor. */
extern "C" {static void release_FragmentList(void *, int);}
static void release_FragmentList(void *ptr, int)
{
    delete reinterpret_cast<FragmentList *>(ptr);
}



extern "C" {static int convertTo_FragmentList(PyObject *, void **, int *, PyObject *);}
static int convertTo_FragmentList(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *)
{
    FragmentList **sipCppPtr = reinterpret_cast<FragmentList **>(sipCppPtrV);

#line 105 "pyLists.sip"
  if (sipCppPtr == 0) return 0;
	BALL_CONVERT_TO(Fragment)
#line 32 "sipBALLFragmentList.C"
}


extern "C" {static void *forceConvertTo_FragmentList(PyObject *, int *);}
static void *forceConvertTo_FragmentList(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (convertTo_FragmentList(valobj,NULL,NULL,NULL))
    {
        void *val;

        /*
         * Note that we throw away the flag that says if the value
         * has just been created on the heap or not.
         */
        convertTo_FragmentList(valobj,&val,iserrp,NULL);

        return val;
    }

    sipBadClass("FragmentList");

    *iserrp = 1;

    return NULL;
}


extern "C" {static PyObject *convertFrom_FragmentList(void *, PyObject *);}
static PyObject *convertFrom_FragmentList(void *sipCppV,PyObject *)
{
   FragmentList *sipCpp = reinterpret_cast<FragmentList *>(sipCppV);

#line 101 "pyLists.sip"
	BALL_CONVERT_FROM(Fragment)
#line 70 "sipBALLFragmentList.C"
}


sipMappedType sipMappedTypeDef_FragmentList = {
    "FragmentList",
    release_FragmentList,
    forceConvertTo_FragmentList,
    convertTo_FragmentList,
    convertFrom_FragmentList
};
