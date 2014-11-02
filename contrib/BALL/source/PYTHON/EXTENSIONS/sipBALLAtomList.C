/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLAtomList.h"


/* Call the mapped type's destructor. */
extern "C" {static void release_AtomList(void *, int);}
static void release_AtomList(void *ptr, int)
{
    delete reinterpret_cast<AtomList *>(ptr);
}



extern "C" {static int convertTo_AtomList(PyObject *, void **, int *, PyObject *);}
static int convertTo_AtomList(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *)
{
    AtomList **sipCppPtr = reinterpret_cast<AtomList **>(sipCppPtrV);

#line 25 "pyLists.sip"
  if (sipCppPtr == 0) return 0;
	BALL_CONVERT_TO(Atom)
#line 32 "sipBALLAtomList.C"
}


extern "C" {static void *forceConvertTo_AtomList(PyObject *, int *);}
static void *forceConvertTo_AtomList(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (convertTo_AtomList(valobj,NULL,NULL,NULL))
    {
        void *val;

        /*
         * Note that we throw away the flag that says if the value
         * has just been created on the heap or not.
         */
        convertTo_AtomList(valobj,&val,iserrp,NULL);

        return val;
    }

    sipBadClass("AtomList");

    *iserrp = 1;

    return NULL;
}


extern "C" {static PyObject *convertFrom_AtomList(void *, PyObject *);}
static PyObject *convertFrom_AtomList(void *sipCppV,PyObject *)
{
   AtomList *sipCpp = reinterpret_cast<AtomList *>(sipCppV);

#line 21 "pyLists.sip"
	BALL_CONVERT_FROM(Atom)
#line 70 "sipBALLAtomList.C"
}


sipMappedType sipMappedTypeDef_AtomList = {
    "AtomList",
    release_AtomList,
    forceConvertTo_AtomList,
    convertTo_AtomList,
    convertFrom_AtomList
};
