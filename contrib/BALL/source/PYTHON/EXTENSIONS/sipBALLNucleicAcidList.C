/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLNucleicAcidList.h"


/* Call the mapped type's destructor. */
extern "C" {static void release_NucleicAcidList(void *, int);}
static void release_NucleicAcidList(void *ptr, int)
{
    delete reinterpret_cast<NucleicAcidList *>(ptr);
}



extern "C" {static int convertTo_NucleicAcidList(PyObject *, void **, int *, PyObject *);}
static int convertTo_NucleicAcidList(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *)
{
    NucleicAcidList **sipCppPtr = reinterpret_cast<NucleicAcidList **>(sipCppPtrV);

#line 245 "pyLists.sip"
  if (sipCppPtr == 0) return 0;
	BALL_CONVERT_TO(NucleicAcid)
#line 32 "sipBALLNucleicAcidList.C"
}


extern "C" {static void *forceConvertTo_NucleicAcidList(PyObject *, int *);}
static void *forceConvertTo_NucleicAcidList(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (convertTo_NucleicAcidList(valobj,NULL,NULL,NULL))
    {
        void *val;

        /*
         * Note that we throw away the flag that says if the value
         * has just been created on the heap or not.
         */
        convertTo_NucleicAcidList(valobj,&val,iserrp,NULL);

        return val;
    }

    sipBadClass("NucleicAcidList");

    *iserrp = 1;

    return NULL;
}


extern "C" {static PyObject *convertFrom_NucleicAcidList(void *, PyObject *);}
static PyObject *convertFrom_NucleicAcidList(void *sipCppV,PyObject *)
{
   NucleicAcidList *sipCpp = reinterpret_cast<NucleicAcidList *>(sipCppV);

#line 241 "pyLists.sip"
	BALL_CONVERT_FROM(NucleicAcid)
#line 70 "sipBALLNucleicAcidList.C"
}


sipMappedType sipMappedTypeDef_NucleicAcidList = {
    "NucleicAcidList",
    release_NucleicAcidList,
    forceConvertTo_NucleicAcidList,
    convertTo_NucleicAcidList,
    convertFrom_NucleicAcidList
};
