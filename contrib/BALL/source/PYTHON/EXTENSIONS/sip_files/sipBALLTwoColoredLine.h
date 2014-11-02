/*
 * Interface header file.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#ifndef _BALLTwoColoredLine_h
#define _BALLTwoColoredLine_h

#line 13 "twoColoredLine.sip"
	#include <BALL/VIEW/PRIMITIVES/twoColoredLine.h>
	using namespace BALL;
	using namespace BALL::VIEW;
#line 18 "sipBALLTwoColoredLine.h"

#define sipClass_TwoColoredLine             sipModuleAPI_BALL.em_types[44]
#define sipCast_TwoColoredLine              sipType_BALL_TwoColoredLine.td_cast
#define sipForceConvertTo_TwoColoredLine    sipType_BALL_TwoColoredLine.td_fcto

extern sipTypeDef sipType_BALL_TwoColoredLine;


class sipTwoColoredLine : public TwoColoredLine
{
public:
    sipTwoColoredLine() throw();
    sipTwoColoredLine(const TwoColoredLine&) throw();
    virtual ~sipTwoColoredLine() throw();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    void clear() throw();
    bool isValid() const throw();

public:
    sipWrapper *sipPySelf;

private:
    sipTwoColoredLine(const sipTwoColoredLine &);
    sipTwoColoredLine &operator = (const sipTwoColoredLine &);

    sipMethodCache sipPyMethods[2];
};

#endif
