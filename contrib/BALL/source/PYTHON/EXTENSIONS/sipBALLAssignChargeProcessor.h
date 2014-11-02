/*
 * Interface header file.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#ifndef _BALLAssignChargeProcessor_h
#define _BALLAssignChargeProcessor_h

#line 67 "defaultProcessors.sip"
	#include <BALL/STRUCTURE/defaultProcessors.h>
	#include "sipBALLAtom.h"
	using namespace BALL;
#line 18 "sipBALLAssignChargeProcessor.h"

#define sipClass_AssignChargeProcessor             sipModuleAPI_BALL.em_types[113]
#define sipCast_AssignChargeProcessor              sipType_BALL_AssignChargeProcessor.td_cast
#define sipForceConvertTo_AssignChargeProcessor    sipType_BALL_AssignChargeProcessor.td_fcto

extern sipTypeDef sipType_BALL_AssignChargeProcessor;


class sipAssignChargeProcessor : public AssignChargeProcessor
{
public:
    sipAssignChargeProcessor();
    sipAssignChargeProcessor(const String&);
    sipAssignChargeProcessor(const AssignChargeProcessor&);
    virtual ~sipAssignChargeProcessor();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    bool start();
    bool finish();

public:
    sipWrapper *sipPySelf;

private:
    sipAssignChargeProcessor(const sipAssignChargeProcessor &);
    sipAssignChargeProcessor &operator = (const sipAssignChargeProcessor &);

    sipMethodCache sipPyMethods[2];
};

#endif
