/*
 * Interface header file.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#ifndef _BALLAmberStretch_h
#define _BALLAmberStretch_h

#line 11 "amberStretch.sip"
	#include <BALL/MOLMEC/AMBER/amberStretch.h>
	#include <BALL/COMMON/exception.h>
	using namespace BALL;
	using namespace BALL::Exception;
#line 19 "sipBALLAmberStretch.h"

#define sipClass_AmberStretch             sipModuleAPI_BALL.em_types[128]
#define sipCast_AmberStretch              sipType_BALL_AmberStretch.td_cast
#define sipForceConvertTo_AmberStretch    sipType_BALL_AmberStretch.td_fcto

extern sipTypeDef sipType_BALL_AmberStretch;


class sipAmberStretch : public AmberStretch
{
public:
    sipAmberStretch();
    sipAmberStretch(ForceField&);
    sipAmberStretch(const AmberStretch&);
    virtual ~sipAmberStretch();

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
    sipAmberStretch(const sipAmberStretch &);
    sipAmberStretch &operator = (const sipAmberStretch &);

    sipMethodCache sipPyMethods[4];
};

#endif
