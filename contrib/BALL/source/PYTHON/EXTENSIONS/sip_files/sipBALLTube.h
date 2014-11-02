/*
 * Interface header file.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#ifndef _BALLTube_h
#define _BALLTube_h

#line 12 "tube.sip"
	#include <BALL/VIEW/PRIMITIVES/tube.h>
	using namespace BALL;
	using namespace BALL::VIEW;
#line 18 "sipBALLTube.h"

#define sipClass_Tube             sipModuleAPI_BALL.em_types[42]
#define sipCast_Tube              sipType_BALL_Tube.td_cast
#define sipForceConvertTo_Tube    sipType_BALL_Tube.td_fcto

extern sipTypeDef sipType_BALL_Tube;


class sipTube : public Tube
{
public:
    sipTube() throw();
    sipTube(const Tube&) throw();
    virtual ~sipTube() throw();

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
    sipTube(const sipTube &);
    sipTube &operator = (const sipTube &);

    sipMethodCache sipPyMethods[2];
};

#endif
