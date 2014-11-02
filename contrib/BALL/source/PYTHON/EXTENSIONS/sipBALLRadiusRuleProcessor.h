/*
 * Interface header file.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#ifndef _BALLRadiusRuleProcessor_h
#define _BALLRadiusRuleProcessor_h

#line 11 "radiusRuleProcessor.sip"
	#include <BALL/MOLMEC/COMMON/radiusRuleProcessor.h>
#line 16 "sipBALLRadiusRuleProcessor.h"

#define sipClass_RadiusRuleProcessor             sipModuleAPI_BALL.em_types[118]
#define sipCast_RadiusRuleProcessor              sipType_BALL_RadiusRuleProcessor.td_cast
#define sipForceConvertTo_RadiusRuleProcessor    sipType_BALL_RadiusRuleProcessor.td_fcto

extern sipTypeDef sipType_BALL_RadiusRuleProcessor;


class sipRadiusRuleProcessor : public RadiusRuleProcessor
{
public:
    sipRadiusRuleProcessor();
    sipRadiusRuleProcessor(INIFile&,const String&);
    sipRadiusRuleProcessor(const RadiusRuleProcessor&);
    virtual ~sipRadiusRuleProcessor();

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
    sipRadiusRuleProcessor(const sipRadiusRuleProcessor &);
    sipRadiusRuleProcessor &operator = (const sipRadiusRuleProcessor &);

    sipMethodCache sipPyMethods[2];
};

#endif
