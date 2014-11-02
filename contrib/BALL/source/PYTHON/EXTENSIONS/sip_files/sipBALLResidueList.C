/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLResidueList.h"


/* Call the mapped type's destructor. */
extern "C" {static void release_ResidueList(void *, int);}
static void release_ResidueList(void *ptr, int)
{
    delete reinterpret_cast<ResidueList *>(ptr);
}



extern "C" {static int convertTo_ResidueList(PyObject *, void **, int *, PyObject *);}
static int convertTo_ResidueList(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *)
{
    ResidueList **sipCppPtr = reinterpret_cast<ResidueList **>(sipCppPtrV);

#line 145 "pyLists.sip"
  if (sipCppPtr == 0) return 0;
	BALL_CONVERT_TO(Residue)
#line 32 "sipBALLResidueList.C"
}


extern "C" {static void *forceConvertTo_ResidueList(PyObject *, int *);}
static void *forceConvertTo_ResidueList(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (convertTo_ResidueList(valobj,NULL,NULL,NULL))
    {
        void *val;

        /*
         * Note that we throw away the flag that says if the value
         * has just been created on the heap or not.
         */
        convertTo_ResidueList(valobj,&val,iserrp,NULL);

        return val;
    }

    sipBadClass("ResidueList");

    *iserrp = 1;

    return NULL;
}


extern "C" {static PyObject *convertFrom_ResidueList(void *, PyObject *);}
static PyObject *convertFrom_ResidueList(void *sipCppV,PyObject *)
{
   ResidueList *sipCpp = reinterpret_cast<ResidueList *>(sipCppV);

#line 141 "pyLists.sip"
	BALL_CONVERT_FROM(Residue)
#line 70 "sipBALLResidueList.C"
}


sipMappedType sipMappedTypeDef_ResidueList = {
    "ResidueList",
    release_ResidueList,
    forceConvertTo_ResidueList,
    convertTo_ResidueList,
    convertFrom_ResidueList
};
