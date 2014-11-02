/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLMoleculeList.h"


/* Call the mapped type's destructor. */
extern "C" {static void release_MoleculeList(void *, int);}
static void release_MoleculeList(void *ptr, int)
{
    delete reinterpret_cast<MoleculeList *>(ptr);
}



extern "C" {static int convertTo_MoleculeList(PyObject *, void **, int *, PyObject *);}
static int convertTo_MoleculeList(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *)
{
    MoleculeList **sipCppPtr = reinterpret_cast<MoleculeList **>(sipCppPtrV);

#line 125 "pyLists.sip"
  if (sipCppPtr == 0) return 0;
	BALL_CONVERT_TO(Molecule)
#line 32 "sipBALLMoleculeList.C"
}


extern "C" {static void *forceConvertTo_MoleculeList(PyObject *, int *);}
static void *forceConvertTo_MoleculeList(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (convertTo_MoleculeList(valobj,NULL,NULL,NULL))
    {
        void *val;

        /*
         * Note that we throw away the flag that says if the value
         * has just been created on the heap or not.
         */
        convertTo_MoleculeList(valobj,&val,iserrp,NULL);

        return val;
    }

    sipBadClass("MoleculeList");

    *iserrp = 1;

    return NULL;
}


extern "C" {static PyObject *convertFrom_MoleculeList(void *, PyObject *);}
static PyObject *convertFrom_MoleculeList(void *sipCppV,PyObject *)
{
   MoleculeList *sipCpp = reinterpret_cast<MoleculeList *>(sipCppV);

#line 121 "pyLists.sip"
	BALL_CONVERT_FROM(Molecule)
#line 70 "sipBALLMoleculeList.C"
}


sipMappedType sipMappedTypeDef_MoleculeList = {
    "MoleculeList",
    release_MoleculeList,
    forceConvertTo_MoleculeList,
    convertTo_MoleculeList,
    convertFrom_MoleculeList
};
