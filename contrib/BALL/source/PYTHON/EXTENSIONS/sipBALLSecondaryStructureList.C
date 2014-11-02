/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLSecondaryStructureList.h"


/* Call the mapped type's destructor. */
extern "C" {static void release_SecondaryStructureList(void *, int);}
static void release_SecondaryStructureList(void *ptr, int)
{
    delete reinterpret_cast<SecondaryStructureList *>(ptr);
}



extern "C" {static int convertTo_SecondaryStructureList(PyObject *, void **, int *, PyObject *);}
static int convertTo_SecondaryStructureList(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *)
{
    SecondaryStructureList **sipCppPtr = reinterpret_cast<SecondaryStructureList **>(sipCppPtrV);

#line 165 "pyLists.sip"
  if (sipCppPtr == 0) return 0;
	BALL_CONVERT_TO(SecondaryStructure)
#line 32 "sipBALLSecondaryStructureList.C"
}


extern "C" {static void *forceConvertTo_SecondaryStructureList(PyObject *, int *);}
static void *forceConvertTo_SecondaryStructureList(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (convertTo_SecondaryStructureList(valobj,NULL,NULL,NULL))
    {
        void *val;

        /*
         * Note that we throw away the flag that says if the value
         * has just been created on the heap or not.
         */
        convertTo_SecondaryStructureList(valobj,&val,iserrp,NULL);

        return val;
    }

    sipBadClass("SecondaryStructureList");

    *iserrp = 1;

    return NULL;
}


extern "C" {static PyObject *convertFrom_SecondaryStructureList(void *, PyObject *);}
static PyObject *convertFrom_SecondaryStructureList(void *sipCppV,PyObject *)
{
   SecondaryStructureList *sipCpp = reinterpret_cast<SecondaryStructureList *>(sipCppV);

#line 161 "pyLists.sip"
	BALL_CONVERT_FROM(SecondaryStructure)
#line 70 "sipBALLSecondaryStructureList.C"
}


sipMappedType sipMappedTypeDef_SecondaryStructureList = {
    "SecondaryStructureList",
    release_SecondaryStructureList,
    forceConvertTo_SecondaryStructureList,
    convertTo_SecondaryStructureList,
    convertFrom_SecondaryStructureList
};
