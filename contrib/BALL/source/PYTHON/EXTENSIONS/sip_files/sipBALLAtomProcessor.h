/*
 * Interface header file.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#ifndef _BALLAtomProcessor_h
#define _BALLAtomProcessor_h

#line 10 "pyAtomProcessor.sip"
	#include <BALL/CONCEPT/processor.h>
	#include "sipBALLAtom.h"
	using namespace BALL;
	typedef UnaryProcessor<Atom> AtomProcessor;
#line 19 "sipBALLAtomProcessor.h"

#define sipClass_AtomProcessor             sipModuleAPI_BALL.em_types[107]
#define sipCast_AtomProcessor              sipType_BALL_AtomProcessor.td_cast
#define sipForceConvertTo_AtomProcessor    sipType_BALL_AtomProcessor.td_fcto

extern sipTypeDef sipType_BALL_AtomProcessor;

#endif
