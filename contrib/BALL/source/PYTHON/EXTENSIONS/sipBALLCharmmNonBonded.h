/*
 * Interface header file.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#ifndef _BALLCharmmNonBonded_h
#define _BALLCharmmNonBonded_h

#line 11 "charmmNonBonded.sip"
	#include <BALL/MOLMEC/CHARMM/charmmNonBonded.h>
	#include <BALL/COMMON/exception.h>
	using namespace BALL;
	using namespace BALL::Exception;
#line 19 "sipBALLCharmmNonBonded.h"

#define sipClass_CharmmNonBonded             sipModuleAPI_BALL.em_types[124]
#define sipCast_CharmmNonBonded              sipType_BALL_CharmmNonBonded.td_cast
#define sipForceConvertTo_CharmmNonBonded    sipType_BALL_CharmmNonBonded.td_fcto

extern sipTypeDef sipType_BALL_CharmmNonBonded;


class sipCharmmNonBonded : public CharmmNonBonded
{
public:
    sipCharmmNonBonded();
    sipCharmmNonBonded(ForceField&);
    sipCharmmNonBonded(const CharmmNonBonded&);
    virtual ~sipCharmmNonBonded() throw();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    bool setup() throw(TooManyErrors);
    double updateEnergy() throw();
    void updateForces() throw();
    double getElectrostaticEnergy() const throw();
    double getVdwEnergy() const throw();
    double getSolvationEnergy() const throw();
    double getEnergy() const;

public:
    sipWrapper *sipPySelf;

private:
    sipCharmmNonBonded(const sipCharmmNonBonded &);
    sipCharmmNonBonded &operator = (const sipCharmmNonBonded &);

    sipMethodCache sipPyMethods[7];
};

#endif
