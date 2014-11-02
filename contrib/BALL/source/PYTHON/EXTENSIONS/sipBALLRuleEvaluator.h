/*
 * Interface header file.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#ifndef _BALLRuleEvaluator_h
#define _BALLRuleEvaluator_h

#line 10 "ruleEvaluator.sip"
	#include <BALL/MOLMEC/COMMON/ruleEvaluator.h>
	#include "sipBALLAtom.h"
	using namespace BALL;
#line 18 "sipBALLRuleEvaluator.h"

#define sipClass_RuleEvaluator             sipModuleAPI_BALL.em_types[104]
#define sipCast_RuleEvaluator              sipType_BALL_RuleEvaluator.td_cast
#define sipForceConvertTo_RuleEvaluator    sipType_BALL_RuleEvaluator.td_fcto

extern sipTypeDef sipType_BALL_RuleEvaluator;


class sipRuleEvaluator : public RuleEvaluator
{
public:
    sipRuleEvaluator() throw();
    sipRuleEvaluator(INIFile&,const String&) throw();
    sipRuleEvaluator(const RuleEvaluator&) throw();
    virtual ~sipRuleEvaluator() throw();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    void clear() throw();

public:
    sipWrapper *sipPySelf;

private:
    sipRuleEvaluator(const sipRuleEvaluator &);
    sipRuleEvaluator &operator = (const sipRuleEvaluator &);

    sipMethodCache sipPyMethods[1];
};

#endif
