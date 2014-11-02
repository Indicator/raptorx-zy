/*
 * Interface header file.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#ifndef _BALLTimeStamp_h
#define _BALLTimeStamp_h

#line 49 "timeStamp.sip"
	#include <BALL/CONCEPT/timeStamp.h>
	using namespace BALL;
#line 17 "sipBALLTimeStamp.h"

#define sipClass_TimeStamp             sipModuleAPI_BALL.em_types[189]
#define sipCast_TimeStamp              sipType_BALL_TimeStamp.td_cast
#define sipForceConvertTo_TimeStamp    sipType_BALL_TimeStamp.td_fcto

extern sipTypeDef sipType_BALL_TimeStamp;


class sipTimeStamp : public TimeStamp
{
public:
    sipTimeStamp() throw();
    sipTimeStamp(const TimeStamp&);
    virtual ~sipTimeStamp() throw();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    void stamp(const PreciseTime&) throw();

public:
    sipWrapper *sipPySelf;

private:
    sipTimeStamp(const sipTimeStamp &);
    sipTimeStamp &operator = (const sipTimeStamp &);

    sipMethodCache sipPyMethods[1];
};

#endif
