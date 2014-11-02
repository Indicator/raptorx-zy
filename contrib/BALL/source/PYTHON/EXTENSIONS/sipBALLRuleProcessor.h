/*
 * Interface header file.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#ifndef _BALLRuleProcessor_h
#define _BALLRuleProcessor_h

#line 11 "ruleProcessor.sip"
	#include <BALL/MOLMEC/COMMON/ruleProcessor.h>
#line 16 "sipBALLRuleProcessor.h"

#define sipClass_RuleProcessor             sipModuleAPI_BALL.em_types[116]
#define sipCast_RuleProcessor              sipType_BALL_RuleProcessor.td_cast
#define sipForceConvertTo_RuleProcessor    sipType_BALL_RuleProcessor.td_fcto

extern sipTypeDef sipType_BALL_RuleProcessor;


class sipRuleProcessor : public RuleProcessor
{
public:
    sipRuleProcessor();
    sipRuleProcessor(INIFile&,const String&);
    sipRuleProcessor(const RuleProcessor&);
    virtual ~sipRuleProcessor();

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
    sipRuleProcessor(const sipRuleProcessor &);
    sipRuleProcessor &operator = (const sipRuleProcessor &);

    sipMethodCache sipPyMethods[2];
};

#endif
