/*
 * Interface header file.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#ifndef _BALLAmberNonBonded_h
#define _BALLAmberNonBonded_h

#line 11 "amberNonBonded.sip"
	#include <BALL/MOLMEC/AMBER/amberNonBonded.h>
	#include <BALL/COMMON/exception.h>
	using namespace BALL;
	using namespace BALL::Exception;
#line 19 "sipBALLAmberNonBonded.h"

#define sipClass_AmberNonBonded             sipModuleAPI_BALL.em_types[129]
#define sipCast_AmberNonBonded              sipType_BALL_AmberNonBonded.td_cast
#define sipForceConvertTo_AmberNonBonded    sipType_BALL_AmberNonBonded.td_fcto

extern sipTypeDef sipType_BALL_AmberNonBonded;


class sipAmberNonBonded : public AmberNonBonded
{
public:
    sipAmberNonBonded();
    sipAmberNonBonded(ForceField&);
    sipAmberNonBonded(const AmberNonBonded&);
    virtual ~sipAmberNonBonded() throw();

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
    double getEnergy() const;

public:
    sipWrapper *sipPySelf;

private:
    sipAmberNonBonded(const sipAmberNonBonded &);
    sipAmberNonBonded &operator = (const sipAmberNonBonded &);

    sipMethodCache sipPyMethods[6];
};

#endif
