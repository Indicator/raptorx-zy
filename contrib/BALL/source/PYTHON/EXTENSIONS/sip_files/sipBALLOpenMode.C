/*
 * Interface wrapper code.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#include "sipAPIBALL.h"
#include "sipBALLOpenMode.h"

#include "sipBALLOpenMode.h"



extern "C" {static PyObject *slot_OpenMode___str__(PyObject *sipSelf);}
static PyObject *slot_OpenMode___str__(PyObject *sipSelf)
{
    OpenMode *sipCpp = reinterpret_cast<OpenMode *>(sipGetCppPtr((sipWrapper *)sipSelf,sipClass_OpenMode));

    if (!sipCpp)
        return 0;


    {
        {
            PyObject * sipRes = 0;

#line 101 "file.sip"
  OpenMode om = *sipCpp;
	const char* mode_string;
	switch ((int)om)
	{
		case (int)std::ios::app: 		mode_string = "std::ios::app"; break;
		case (int)std::ios::binary:	mode_string = "std::ios::binary"; break;
		case (int)std::ios::ate: 		mode_string = "std::ios::ate"; break;
		case (int)std::ios::trunc: 	mode_string = "std::ios::trunc"; break;
		case (int)std::ios::out: 		mode_string = "std::ios::out"; break;
		case (int)std::ios::in: 		mode_string = "std::ios::in"; break; 
		default:										mode_string = "";
	}
	sipRes = PyString_FromString(mode_string);
#line 45 "sipBALLOpenMode.C"

            return sipRes;
        }
    }
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_OpenMode(void *, sipWrapperType *);}
static void *cast_OpenMode(void *ptr,sipWrapperType *targetClass)
{
    if (targetClass == sipClass_OpenMode)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_OpenMode(void *, int);}
static void release_OpenMode(void *ptr,int)
{
    delete reinterpret_cast<OpenMode *>(ptr);
}


extern "C" {static void dealloc_OpenMode(sipWrapper *);}
static void dealloc_OpenMode(sipWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_OpenMode(sipSelf->u.cppPtr,0);
    }
}


extern "C" {static void *init_OpenMode(sipWrapper *, PyObject *, sipWrapper **, int *);}
static void *init_OpenMode(sipWrapper *,PyObject *sipArgs,sipWrapper **,int *sipArgsParsed)
{
    OpenMode *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            try
            {
            sipCpp = new OpenMode();
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }
        }
    }

    if (!sipCpp)
    {
        const OpenMode * a0;
        int a0State = 0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"J1",sipClass_OpenMode,&a0,&a0State))
        {
            try
            {
            sipCpp = new OpenMode(*a0);
            }
            catch (...)
            {

            sipReleaseInstance(const_cast<OpenMode *>(a0),sipClass_OpenMode,a0State);
                sipRaiseUnknownException();
                return NULL;
            }

            sipReleaseInstance(const_cast<OpenMode *>(a0),sipClass_OpenMode,a0State);
        }
    }

    return sipCpp;
}


extern "C" {static int convertTo_OpenMode(PyObject *, void **, int *, PyObject *);}
static int convertTo_OpenMode(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *)
{
    OpenMode **sipCppPtr = reinterpret_cast<OpenMode **>(sipCppPtrV);

#line 117 "file.sip"
  if (sipIsErr == NULL)
    return (PyInt_Check(sipPy) || sipIsSubClassInstance(sipPy, sipClass_OpenMode));

	if (PyInt_Check(sipPy))
  {
		int mode = PyInt_AS_LONG(sipPy);
		File::OpenMode result;
		switch (mode)
		{
			case std::ios::out:		result = std::ios::out; break;
			case std::ios::binary:	result = std::ios::binary; break;
			case std::ios::ate:		result = std::ios::ate; break;
			case std::ios::trunc:	result = std::ios::trunc; break;
			case std::ios::app:		result = std::ios::app; break;

			case std::ios::in:
			default: result = std::ios::in;
		};
    *sipCppPtr = new OpenMode(result);

    return 1;
  }

  *sipCppPtr = (OpenMode*)sipConvertToCpp(sipPy, sipClass_OpenMode, sipIsErr);

  return 0;
#line 162 "sipBALLOpenMode.C"
}


extern "C" {static void *forceConvertTo_OpenMode(PyObject *, int *);}
static void *forceConvertTo_OpenMode(PyObject *valobj,int *iserrp)
{
    if (*iserrp || valobj == NULL)
        return NULL;

    if (convertTo_OpenMode(valobj,NULL,NULL,NULL))
    {
        void *val;

        /*
         * Note that we throw away the flag that says if the value
         * has just been created on the heap or not.
         */
        convertTo_OpenMode(valobj,&val,iserrp,NULL);

        return val;
    }

    sipBadClass(sipNm_BALL_OpenMode);

    *iserrp = 1;

    return NULL;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_OpenMode[] = {
    {(void *)slot_OpenMode___str__, str_slot},
    {0, (sipPySlotType)0}
};


sipTypeDef sipType_BALL_OpenMode = {
    0,
    0,
    "BALL.OpenMode",
    0,
    {0, 0, 1},
    0,
    slots_OpenMode,
    0, 0,
    0, 0,
    0,
    init_OpenMode,
    0,
    0,
    0,
    0,
    0,
    0,
    dealloc_OpenMode,
    cast_OpenMode,
    release_OpenMode,
    forceConvertTo_OpenMode,
    convertTo_OpenMode,
    0,
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    0
};
