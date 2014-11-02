/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLAtomContainerList.h"


/* Call the mapped type's destructor. */
extern "C" {static void release_AtomContainerList(void *, int);}
static void release_AtomContainerList(void *ptr, int)
{
    delete reinterpret_cast<AtomContainerList *>(ptr);
}



extern "C" {static int convertTo_AtomContainerList(PyObject *, void **, int *, PyObject *);}
static int convertTo_AtomContainerList(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *)
{
    AtomContainerList **sipCppPtr = reinterpret_cast<AtomContainerList **>(sipCppPtrV);

#line 85 "pyLists.sip"
  if (sipCppPtr == 0) return 0;
	BALL_CONVERT_TO(AtomContainer)
#line 32 "sipBALLAtomContainerList.C"
}


extern "C" {static void *forceConvertTo_AtomContainerList(PyObject *, int *);}
static void *forceConvertTo_AtomContainerList(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (convertTo_AtomContainerList(valobj,NULL,NULL,NULL))
    {
        void *val;

        /*
         * Note that we throw away the flag that says if the value
         * has just been created on the heap or not.
         */
        convertTo_AtomContainerList(valobj,&val,iserrp,NULL);

        return val;
    }

    sipBadClass("AtomContainerList");

    *iserrp = 1;

    return NULL;
}


extern "C" {static PyObject *convertFrom_AtomContainerList(void *, PyObject *);}
static PyObject *convertFrom_AtomContainerList(void *sipCppV,PyObject *)
{
   AtomContainerList *sipCpp = reinterpret_cast<AtomContainerList *>(sipCppV);

#line 81 "pyLists.sip"
	BALL_CONVERT_FROM(AtomContainer)
#line 70 "sipBALLAtomContainerList.C"
}


sipMappedType sipMappedTypeDef_AtomContainerList = {
    "AtomContainerList",
    release_AtomContainerList,
    forceConvertTo_AtomContainerList,
    convertTo_AtomContainerList,
    convertFrom_AtomContainerList
};
