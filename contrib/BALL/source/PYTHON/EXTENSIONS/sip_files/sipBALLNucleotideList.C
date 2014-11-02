/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLNucleotideList.h"


/* Call the mapped type's destructor. */
extern "C" {static void release_NucleotideList(void *, int);}
static void release_NucleotideList(void *ptr, int)
{
    delete reinterpret_cast<NucleotideList *>(ptr);
}



extern "C" {static int convertTo_NucleotideList(PyObject *, void **, int *, PyObject *);}
static int convertTo_NucleotideList(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *)
{
    NucleotideList **sipCppPtr = reinterpret_cast<NucleotideList **>(sipCppPtrV);

#line 225 "pyLists.sip"
  if (sipCppPtr == 0) return 0;
	BALL_CONVERT_TO(Nucleotide)
#line 32 "sipBALLNucleotideList.C"
}


extern "C" {static void *forceConvertTo_NucleotideList(PyObject *, int *);}
static void *forceConvertTo_NucleotideList(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (convertTo_NucleotideList(valobj,NULL,NULL,NULL))
    {
        void *val;

        /*
         * Note that we throw away the flag that says if the value
         * has just been created on the heap or not.
         */
        convertTo_NucleotideList(valobj,&val,iserrp,NULL);

        return val;
    }

    sipBadClass("NucleotideList");

    *iserrp = 1;

    return NULL;
}


extern "C" {static PyObject *convertFrom_NucleotideList(void *, PyObject *);}
static PyObject *convertFrom_NucleotideList(void *sipCppV,PyObject *)
{
   NucleotideList *sipCpp = reinterpret_cast<NucleotideList *>(sipCppV);

#line 221 "pyLists.sip"
	BALL_CONVERT_FROM(Nucleotide)
#line 70 "sipBALLNucleotideList.C"
}


sipMappedType sipMappedTypeDef_NucleotideList = {
    "NucleotideList",
    release_NucleotideList,
    forceConvertTo_NucleotideList,
    convertTo_NucleotideList,
    convertFrom_NucleotideList
};
