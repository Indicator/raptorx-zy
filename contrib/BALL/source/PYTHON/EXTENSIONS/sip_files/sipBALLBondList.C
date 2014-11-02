/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLBondList.h"


/* Call the mapped type's destructor. */
extern "C" {static void release_BondList(void *, int);}
static void release_BondList(void *ptr, int)
{
    delete reinterpret_cast<BondList *>(ptr);
}



extern "C" {static int convertTo_BondList(PyObject *, void **, int *, PyObject *);}
static int convertTo_BondList(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *)
{
    BondList **sipCppPtr = reinterpret_cast<BondList **>(sipCppPtrV);

#line 65 "pyLists.sip"
  if (sipCppPtr == 0) return 0;
	BALL_CONVERT_TO(Bond)
#line 32 "sipBALLBondList.C"
}


extern "C" {static void *forceConvertTo_BondList(PyObject *, int *);}
static void *forceConvertTo_BondList(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (convertTo_BondList(valobj,NULL,NULL,NULL))
    {
        void *val;

        /*
         * Note that we throw away the flag that says if the value
         * has just been created on the heap or not.
         */
        convertTo_BondList(valobj,&val,iserrp,NULL);

        return val;
    }

    sipBadClass("BondList");

    *iserrp = 1;

    return NULL;
}


extern "C" {static PyObject *convertFrom_BondList(void *, PyObject *);}
static PyObject *convertFrom_BondList(void *sipCppV,PyObject *)
{
   BondList *sipCpp = reinterpret_cast<BondList *>(sipCppV);

#line 61 "pyLists.sip"
	BALL_CONVERT_FROM(Bond)
#line 70 "sipBALLBondList.C"
}


sipMappedType sipMappedTypeDef_BondList = {
    "BondList",
    release_BondList,
    forceConvertTo_BondList,
    convertTo_BondList,
    convertFrom_BondList
};
