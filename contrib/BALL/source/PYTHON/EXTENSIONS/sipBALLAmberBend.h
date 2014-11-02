/*
 * Interface header file.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#ifndef _BALLAmberBend_h
#define _BALLAmberBend_h

#line 11 "amberBend.sip"
	#include <BALL/MOLMEC/AMBER/amberBend.h>
	#include <BALL/COMMON/exception.h>
	using namespace BALL;
	using namespace BALL::Exception;
#line 19 "sipBALLAmberBend.h"

#define sipClass_AmberBend             sipModuleAPI_BALL.em_types[130]
#define sipCast_AmberBend              sipType_BALL_AmberBend.td_cast
#define sipForceConvertTo_AmberBend    sipType_BALL_AmberBend.td_fcto

extern sipTypeDef sipType_BALL_AmberBend;


class sipAmberBend : public AmberBend
{
public:
    sipAmberBend();
    sipAmberBend(ForceField&);
    sipAmberBend(const AmberBend&);
    virtual ~sipAmberBend();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    bool setup() throw(TooManyErrors);
    double updateEnergy();
    void updateForces();
    double getEnergy() const;

public:
    sipWrapper *sipPySelf;

private:
    sipAmberBend(const sipAmberBend &);
    sipAmberBend &operator = (const sipAmberBend &);

    sipMethodCache sipPyMethods[4];
};

#endif
