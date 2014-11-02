/*
 * Interface header file.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#ifndef _BALLCharmmTorsion_h
#define _BALLCharmmTorsion_h

#line 11 "charmmTorsion.sip"
	#include <BALL/MOLMEC/CHARMM/charmmTorsion.h>
	#include <BALL/COMMON/exception.h>
	using namespace BALL;
	using namespace BALL::Exception;
#line 19 "sipBALLCharmmTorsion.h"

#define sipClass_CharmmTorsion             sipModuleAPI_BALL.em_types[122]
#define sipCast_CharmmTorsion              sipType_BALL_CharmmTorsion.td_cast
#define sipForceConvertTo_CharmmTorsion    sipType_BALL_CharmmTorsion.td_fcto

extern sipTypeDef sipType_BALL_CharmmTorsion;


class sipCharmmTorsion : public CharmmTorsion
{
public:
    sipCharmmTorsion();
    sipCharmmTorsion(ForceField&);
    sipCharmmTorsion(const CharmmTorsion&);
    virtual ~sipCharmmTorsion();

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
    sipCharmmTorsion(const sipCharmmTorsion &);
    sipCharmmTorsion &operator = (const sipCharmmTorsion &);

    sipMethodCache sipPyMethods[4];
};

#endif
