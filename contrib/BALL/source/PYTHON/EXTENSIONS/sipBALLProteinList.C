/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLProteinList.h"


/* Call the mapped type's destructor. */
extern "C" {static void release_ProteinList(void *, int);}
static void release_ProteinList(void *ptr, int)
{
    delete reinterpret_cast<ProteinList *>(ptr);
}



extern "C" {static int convertTo_ProteinList(PyObject *, void **, int *, PyObject *);}
static int convertTo_ProteinList(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *)
{
    ProteinList **sipCppPtr = reinterpret_cast<ProteinList **>(sipCppPtrV);

#line 205 "pyLists.sip"
  if (sipCppPtr == 0) return 0;
	BALL_CONVERT_TO(Protein)
#line 32 "sipBALLProteinList.C"
}


extern "C" {static void *forceConvertTo_ProteinList(PyObject *, int *);}
static void *forceConvertTo_ProteinList(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (convertTo_ProteinList(valobj,NULL,NULL,NULL))
    {
        void *val;

        /*
         * Note that we throw away the flag that says if the value
         * has just been created on the heap or not.
         */
        convertTo_ProteinList(valobj,&val,iserrp,NULL);

        return val;
    }

    sipBadClass("ProteinList");

    *iserrp = 1;

    return NULL;
}


extern "C" {static PyObject *convertFrom_ProteinList(void *, PyObject *);}
static PyObject *convertFrom_ProteinList(void *sipCppV,PyObject *)
{
   ProteinList *sipCpp = reinterpret_cast<ProteinList *>(sipCppV);

#line 201 "pyLists.sip"
	BALL_CONVERT_FROM(Protein)
#line 70 "sipBALLProteinList.C"
}


sipMappedType sipMappedTypeDef_ProteinList = {
    "ProteinList",
    release_ProteinList,
    forceConvertTo_ProteinList,
    convertTo_ProteinList,
    convertFrom_ProteinList
};
