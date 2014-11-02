/*
 * Interface header file.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#ifndef _BALLPyAtomDict_h
#define _BALLPyAtomDict_h



#line 10 "pyAtomDict.sip"
	#include <BALL/DATATYPE/hashMap.h>
	#include "sipBALLAtom.h"
  #include <BALL/PYTHON/pyBALLSipHelper.h>
	typedef HashMap<const Atom*, float> PyAtomDict;
#line 21 "sipBALLPyAtomDict.h"

#define sipMappedType_PyAtomDict        &sipMappedTypeDef_PyAtomDict
#define sipForceConvertTo_PyAtomDict    sipMappedTypeDef_PyAtomDict.mt_fcto
#define sipConvertFrom_PyAtomDict       sipMappedTypeDef_PyAtomDict.mt_cfrom

extern sipMappedType sipMappedTypeDef_PyAtomDict;

#endif
