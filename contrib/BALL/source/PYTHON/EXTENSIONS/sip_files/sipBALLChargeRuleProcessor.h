/*
 * Interface header file.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#ifndef _BALLChargeRuleProcessor_h
#define _BALLChargeRuleProcessor_h

#line 11 "chargeRuleProcessor.sip"
	#include <BALL/MOLMEC/COMMON/chargeRuleProcessor.h>
#line 16 "sipBALLChargeRuleProcessor.h"

#define sipClass_ChargeRuleProcessor             sipModuleAPI_BALL.em_types[119]
#define sipCast_ChargeRuleProcessor              sipType_BALL_ChargeRuleProcessor.td_cast
#define sipForceConvertTo_ChargeRuleProcessor    sipType_BALL_ChargeRuleProcessor.td_fcto

extern sipTypeDef sipType_BALL_ChargeRuleProcessor;


class sipChargeRuleProcessor : public ChargeRuleProcessor
{
public:
    sipChargeRuleProcessor();
    sipChargeRuleProcessor(INIFile&,const String&);
    sipChargeRuleProcessor(const ChargeRuleProcessor&);
    virtual ~sipChargeRuleProcessor();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    bool start();
    bool finish();

public:
    sipWrapper *sipPySelf;

private:
    sipChargeRuleProcessor(const sipChargeRuleProcessor &);
    sipChargeRuleProcessor &operator = (const sipChargeRuleProcessor &);

    sipMethodCache sipPyMethods[2];
};

#endif
