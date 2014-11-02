/*
 * Interface header file.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#ifndef _BALLForceFieldComponent_h
#define _BALLForceFieldComponent_h

#line 10 "forceFieldComponent.sip"
	#include <BALL/MOLMEC/COMMON/forceFieldComponent.h>
	#include <BALL/COMMON/exception.h>
	using namespace BALL;
	using namespace BALL::Exception;
#line 19 "sipBALLForceFieldComponent.h"

#define sipClass_ForceFieldComponent             sipModuleAPI_BALL.em_types[121]
#define sipCast_ForceFieldComponent              sipType_BALL_ForceFieldComponent.td_cast
#define sipForceConvertTo_ForceFieldComponent    sipType_BALL_ForceFieldComponent.td_fcto

extern sipTypeDef sipType_BALL_ForceFieldComponent;


class sipForceFieldComponent : public ForceFieldComponent
{
public:
    sipForceFieldComponent();
    sipForceFieldComponent(ForceField&);
    sipForceFieldComponent(const ForceFieldComponent&);
    virtual ~sipForceFieldComponent();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    bool setup() throw(TooManyErrors);
    double getEnergy() const;
    double updateEnergy();
    void updateForces();

public:
    sipWrapper *sipPySelf;

private:
    sipForceFieldComponent(const sipForceFieldComponent &);
    sipForceFieldComponent &operator = (const sipForceFieldComponent &);

    sipMethodCache sipPyMethods[4];
};

#endif
