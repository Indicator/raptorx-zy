/*
 * Interface header file.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#ifndef _BALLBondProcessor_h
#define _BALLBondProcessor_h

#line 10 "pyBondProcessor.sip"
	#include <BALL/CONCEPT/processor.h>
	#include "sipBALLBond.h"
	using namespace BALL;
	typedef UnaryProcessor<Bond> BondProcessor;
#line 19 "sipBALLBondProcessor.h"

#define sipClass_BondProcessor             sipModuleAPI_BALL.em_types[90]
#define sipCast_BondProcessor              sipType_BALL_BondProcessor.td_cast
#define sipForceConvertTo_BondProcessor    sipType_BALL_BondProcessor.td_fcto

extern sipTypeDef sipType_BALL_BondProcessor;

#endif
