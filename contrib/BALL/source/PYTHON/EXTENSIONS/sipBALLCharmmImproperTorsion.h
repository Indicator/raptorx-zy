/*
 * Interface header file.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#ifndef _BALLCharmmImproperTorsion_h
#define _BALLCharmmImproperTorsion_h

#line 11 "charmmImproperTorsion.sip"
	#include <BALL/MOLMEC/CHARMM/charmmImproperTorsion.h>
	#include <BALL/COMMON/exception.h>
	using namespace BALL;
	using namespace BALL::Exception;
#line 19 "sipBALLCharmmImproperTorsion.h"

#define sipClass_CharmmImproperTorsion             sipModuleAPI_BALL.em_types[125]
#define sipCast_CharmmImproperTorsion              sipType_BALL_CharmmImproperTorsion.td_cast
#define sipForceConvertTo_CharmmImproperTorsion    sipType_BALL_CharmmImproperTorsion.td_fcto

extern sipTypeDef sipType_BALL_CharmmImproperTorsion;


class sipCharmmImproperTorsion : public CharmmImproperTorsion
{
public:
    sipCharmmImproperTorsion();
    sipCharmmImproperTorsion(ForceField&);
    sipCharmmImproperTorsion(const CharmmImproperTorsion&);
    virtual ~sipCharmmImproperTorsion();

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
    sipCharmmImproperTorsion(const sipCharmmImproperTorsion &);
    sipCharmmImproperTorsion &operator = (const sipCharmmImproperTorsion &);

    sipMethodCache sipPyMethods[4];
};

#endif
