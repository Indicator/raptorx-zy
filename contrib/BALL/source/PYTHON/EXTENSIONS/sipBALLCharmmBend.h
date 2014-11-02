/*
 * Interface header file.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#ifndef _BALLCharmmBend_h
#define _BALLCharmmBend_h

#line 11 "charmmBend.sip"
	#include <BALL/MOLMEC/CHARMM/charmmBend.h>
	#include <BALL/COMMON/exception.h>
	using namespace BALL;
	using namespace BALL::Exception;
#line 19 "sipBALLCharmmBend.h"

#define sipClass_CharmmBend             sipModuleAPI_BALL.em_types[126]
#define sipCast_CharmmBend              sipType_BALL_CharmmBend.td_cast
#define sipForceConvertTo_CharmmBend    sipType_BALL_CharmmBend.td_fcto

extern sipTypeDef sipType_BALL_CharmmBend;


class sipCharmmBend : public CharmmBend
{
public:
    sipCharmmBend();
    sipCharmmBend(ForceField&);
    sipCharmmBend(const CharmmBend&);
    virtual ~sipCharmmBend();

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
    sipCharmmBend(const sipCharmmBend &);
    sipCharmmBend &operator = (const sipCharmmBend &);

    sipMethodCache sipPyMethods[4];
};

#endif
