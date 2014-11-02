/*
 * Interface header file.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#ifndef _BALLCharmmStretch_h
#define _BALLCharmmStretch_h

#line 11 "charmmStretch.sip"
	#include <BALL/MOLMEC/CHARMM/charmmStretch.h>
	#include <BALL/COMMON/exception.h>
	using namespace BALL;
	using namespace BALL::Exception;
#line 19 "sipBALLCharmmStretch.h"

#define sipClass_CharmmStretch             sipModuleAPI_BALL.em_types[123]
#define sipCast_CharmmStretch              sipType_BALL_CharmmStretch.td_cast
#define sipForceConvertTo_CharmmStretch    sipType_BALL_CharmmStretch.td_fcto

extern sipTypeDef sipType_BALL_CharmmStretch;


class sipCharmmStretch : public CharmmStretch
{
public:
    sipCharmmStretch();
    sipCharmmStretch(ForceField&);
    sipCharmmStretch(const CharmmStretch&);
    virtual ~sipCharmmStretch();

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
    sipCharmmStretch(const sipCharmmStretch &);
    sipCharmmStretch &operator = (const sipCharmmStretch &);

    sipMethodCache sipPyMethods[4];
};

#endif
