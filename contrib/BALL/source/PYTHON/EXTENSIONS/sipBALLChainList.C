/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLChainList.h"


/* Call the mapped type's destructor. */
extern "C" {static void release_ChainList(void *, int);}
static void release_ChainList(void *ptr, int)
{
    delete reinterpret_cast<ChainList *>(ptr);
}



extern "C" {static int convertTo_ChainList(PyObject *, void **, int *, PyObject *);}
static int convertTo_ChainList(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *)
{
    ChainList **sipCppPtr = reinterpret_cast<ChainList **>(sipCppPtrV);

#line 185 "pyLists.sip"
  if (sipCppPtr == 0) return 0;
	BALL_CONVERT_TO(Chain)
#line 32 "sipBALLChainList.C"
}


extern "C" {static void *forceConvertTo_ChainList(PyObject *, int *);}
static void *forceConvertTo_ChainList(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (convertTo_ChainList(valobj,NULL,NULL,NULL))
    {
        void *val;

        /*
         * Note that we throw away the flag that says if the value
         * has just been created on the heap or not.
         */
        convertTo_ChainList(valobj,&val,iserrp,NULL);

        return val;
    }

    sipBadClass("ChainList");

    *iserrp = 1;

    return NULL;
}


extern "C" {static PyObject *convertFrom_ChainList(void *, PyObject *);}
static PyObject *convertFrom_ChainList(void *sipCppV,PyObject *)
{
   ChainList *sipCpp = reinterpret_cast<ChainList *>(sipCppV);

#line 181 "pyLists.sip"
	BALL_CONVERT_FROM(Chain)
#line 70 "sipBALLChainList.C"
}


sipMappedType sipMappedTypeDef_ChainList = {
    "ChainList",
    release_ChainList,
    forceConvertTo_ChainList,
    convertTo_ChainList,
    convertFrom_ChainList
};
