/*
 * Interface header file.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#ifndef _BALLAmberTorsion_h
#define _BALLAmberTorsion_h

#line 11 "amberTorsion.sip"
	#include <BALL/MOLMEC/AMBER/amberTorsion.h>
	#include <BALL/COMMON/exception.h>
	using namespace BALL;
	using namespace BALL::Exception;
#line 19 "sipBALLAmberTorsion.h"

#define sipClass_AmberTorsion             sipModuleAPI_BALL.em_types[127]
#define sipCast_AmberTorsion              sipType_BALL_AmberTorsion.td_cast
#define sipForceConvertTo_AmberTorsion    sipType_BALL_AmberTorsion.td_fcto

extern sipTypeDef sipType_BALL_AmberTorsion;


class sipAmberTorsion : public AmberTorsion
{
public:
    sipAmberTorsion();
    sipAmberTorsion(ForceField&);
    sipAmberTorsion(const AmberTorsion&);
    virtual ~sipAmberTorsion();

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
    sipAmberTorsion(const sipAmberTorsion &);
    sipAmberTorsion &operator = (const sipAmberTorsion &);

    sipMethodCache sipPyMethods[4];
};

#endif
