/*
 * Interface header file.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#ifndef _BALLAmberFF_h
#define _BALLAmberFF_h

#line 11 "amber.sip"
	#include <BALL/MOLMEC/AMBER/amber.h>
	#include <BALL/COMMON/exception.h>
	using namespace BALL;
	using namespace BALL::Exception;
#line 19 "sipBALLAmberFF.h"

#define sipClass_AmberFF             sipModuleAPI_BALL.em_types[133]
#define sipCast_AmberFF              sipType_BALL_AmberFF.td_cast
#define sipForceConvertTo_AmberFF    sipType_BALL_AmberFF.td_fcto

extern sipTypeDef sipType_BALL_AmberFF;


class sipAmberFF : public AmberFF
{
public:
    sipAmberFF();
    sipAmberFF(System&);
    sipAmberFF(System&,Options&);
    sipAmberFF(AmberFF&);
    virtual ~sipAmberFF();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    bool specificSetup() throw(TooManyErrors);

public:
    sipWrapper *sipPySelf;

private:
    sipAmberFF(const sipAmberFF &);
    sipAmberFF &operator = (const sipAmberFF &);

    sipMethodCache sipPyMethods[1];
};

#endif
