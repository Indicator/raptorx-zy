/*
 * Interface header file.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#ifndef _BALLAssignRadiusProcessor_h
#define _BALLAssignRadiusProcessor_h

#line 44 "defaultProcessors.sip"
	#include <BALL/STRUCTURE/defaultProcessors.h>
	#include "sipBALLAtom.h"
	using namespace BALL;
#line 18 "sipBALLAssignRadiusProcessor.h"

#define sipClass_AssignRadiusProcessor             sipModuleAPI_BALL.em_types[112]
#define sipCast_AssignRadiusProcessor              sipType_BALL_AssignRadiusProcessor.td_cast
#define sipForceConvertTo_AssignRadiusProcessor    sipType_BALL_AssignRadiusProcessor.td_fcto

extern sipTypeDef sipType_BALL_AssignRadiusProcessor;


class sipAssignRadiusProcessor : public AssignRadiusProcessor
{
public:
    sipAssignRadiusProcessor();
    sipAssignRadiusProcessor(const String&);
    sipAssignRadiusProcessor(const AssignRadiusProcessor&);
    virtual ~sipAssignRadiusProcessor();

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
    sipAssignRadiusProcessor(const sipAssignRadiusProcessor &);
    sipAssignRadiusProcessor &operator = (const sipAssignRadiusProcessor &);

    sipMethodCache sipPyMethods[2];
};

#endif
