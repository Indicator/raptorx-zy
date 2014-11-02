/*
 * Interface header file.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#ifndef _BALLForceField_h
#define _BALLForceField_h

#line 10 "forceField.sip"
	#include <BALL/MOLMEC/COMMON/forceField.h>
	#include <BALL/COMMON/exception.h>
	using namespace BALL;
	using namespace BALL::Exception;
#line 19 "sipBALLForceField.h"

#define sipClass_ForceField             sipModuleAPI_BALL.em_types[131]
#define sipCast_ForceField              sipType_BALL_ForceField.td_cast
#define sipForceConvertTo_ForceField    sipType_BALL_ForceField.td_fcto

extern sipTypeDef sipType_BALL_ForceField;


class sipForceField : public ForceField
{
public:
    sipForceField();
    sipForceField(System&);
    sipForceField(System&,Options&);
    sipForceField(const ForceField&);
    virtual ~sipForceField();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    bool specificSetup() throw(TooManyErrors);

public:
    sipWrapper *sipPySelf;

private:
    sipForceField(const sipForceField &);
    sipForceField &operator = (const sipForceField &);

    sipMethodCache sipPyMethods[1];
};

#endif
