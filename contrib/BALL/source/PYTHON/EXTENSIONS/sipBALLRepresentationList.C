/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLRepresentationList.h"


/* Call the mapped type's destructor. */
extern "C" {static void release_RepresentationList(void *, int);}
static void release_RepresentationList(void *ptr, int)
{
    delete reinterpret_cast<RepresentationList *>(ptr);
}



extern "C" {static int convertTo_RepresentationList(PyObject *, void **, int *, PyObject *);}
static int convertTo_RepresentationList(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *)
{
    RepresentationList **sipCppPtr = reinterpret_cast<RepresentationList **>(sipCppPtrV);

#line 283 "pyLists.sip"
	if (sipCppPtr == 0) return 0;
	BALL_CONVERT_TO(Representation)
#line 32 "sipBALLRepresentationList.C"
}


extern "C" {static void *forceConvertTo_RepresentationList(PyObject *, int *);}
static void *forceConvertTo_RepresentationList(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (convertTo_RepresentationList(valobj,NULL,NULL,NULL))
    {
        void *val;

        /*
         * Note that we throw away the flag that says if the value
         * has just been created on the heap or not.
         */
        convertTo_RepresentationList(valobj,&val,iserrp,NULL);

        return val;
    }

    sipBadClass("RepresentationList");

    *iserrp = 1;

    return NULL;
}


extern "C" {static PyObject *convertFrom_RepresentationList(void *, PyObject *);}
static PyObject *convertFrom_RepresentationList(void *sipCppV,PyObject *)
{
   RepresentationList *sipCpp = reinterpret_cast<RepresentationList *>(sipCppV);

#line 279 "pyLists.sip"
	BALL_CONVERT_FROM(Representation)
#line 70 "sipBALLRepresentationList.C"
}


sipMappedType sipMappedTypeDef_RepresentationList = {
    "RepresentationList",
    release_RepresentationList,
    forceConvertTo_RepresentationList,
    convertTo_RepresentationList,
    convertFrom_RepresentationList
};
