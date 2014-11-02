/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLPDBAtomList.h"


/* Call the mapped type's destructor. */
extern "C" {static void release_PDBAtomList(void *, int);}
static void release_PDBAtomList(void *ptr, int)
{
    delete reinterpret_cast<PDBAtomList *>(ptr);
}



extern "C" {static int convertTo_PDBAtomList(PyObject *, void **, int *, PyObject *);}
static int convertTo_PDBAtomList(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *)
{
    PDBAtomList **sipCppPtr = reinterpret_cast<PDBAtomList **>(sipCppPtrV);

#line 45 "pyLists.sip"
  if (sipCppPtr == 0) return 0;
	BALL_CONVERT_TO(PDBAtom)
#line 32 "sipBALLPDBAtomList.C"
}


extern "C" {static void *forceConvertTo_PDBAtomList(PyObject *, int *);}
static void *forceConvertTo_PDBAtomList(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (convertTo_PDBAtomList(valobj,NULL,NULL,NULL))
    {
        void *val;

        /*
         * Note that we throw away the flag that says if the value
         * has just been created on the heap or not.
         */
        convertTo_PDBAtomList(valobj,&val,iserrp,NULL);

        return val;
    }

    sipBadClass("PDBAtomList");

    *iserrp = 1;

    return NULL;
}


extern "C" {static PyObject *convertFrom_PDBAtomList(void *, PyObject *);}
static PyObject *convertFrom_PDBAtomList(void *sipCppV,PyObject *)
{
   PDBAtomList *sipCpp = reinterpret_cast<PDBAtomList *>(sipCppV);

#line 41 "pyLists.sip"
	BALL_CONVERT_FROM(PDBAtom)
#line 70 "sipBALLPDBAtomList.C"
}


sipMappedType sipMappedTypeDef_PDBAtomList = {
    "PDBAtomList",
    release_PDBAtomList,
    forceConvertTo_PDBAtomList,
    convertTo_PDBAtomList,
    convertFrom_PDBAtomList
};
