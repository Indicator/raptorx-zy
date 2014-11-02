/*
 * Interface header file.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#ifndef _BALLTwoColoredTube_h
#define _BALLTwoColoredTube_h

#line 13 "twoColoredTube.sip"
	#include <BALL/VIEW/PRIMITIVES/twoColoredTube.h>
	using namespace BALL;
	using namespace BALL::VIEW;
#line 18 "sipBALLTwoColoredTube.h"

#define sipClass_TwoColoredTube             sipModuleAPI_BALL.em_types[43]
#define sipCast_TwoColoredTube              sipType_BALL_TwoColoredTube.td_cast
#define sipForceConvertTo_TwoColoredTube    sipType_BALL_TwoColoredTube.td_fcto

extern sipTypeDef sipType_BALL_TwoColoredTube;


class sipTwoColoredTube : public TwoColoredTube
{
public:
    sipTwoColoredTube() throw();
    sipTwoColoredTube(const TwoColoredTube&) throw();
    virtual ~sipTwoColoredTube() throw();

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
    sipTwoColoredTube(const sipTwoColoredTube &);
    sipTwoColoredTube &operator = (const sipTwoColoredTube &);

    sipMethodCache sipPyMethods[2];
};

#endif
