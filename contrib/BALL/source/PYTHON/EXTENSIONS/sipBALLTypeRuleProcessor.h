/*
 * Interface header file.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#ifndef _BALLTypeRuleProcessor_h
#define _BALLTypeRuleProcessor_h

#line 11 "typeRuleProcessor.sip"
	#include <BALL/MOLMEC/COMMON/typeRuleProcessor.h>
	using namespace BALL;
#line 17 "sipBALLTypeRuleProcessor.h"

#define sipClass_TypeRuleProcessor             sipModuleAPI_BALL.em_types[117]
#define sipCast_TypeRuleProcessor              sipType_BALL_TypeRuleProcessor.td_cast
#define sipForceConvertTo_TypeRuleProcessor    sipType_BALL_TypeRuleProcessor.td_fcto

extern sipTypeDef sipType_BALL_TypeRuleProcessor;


class sipTypeRuleProcessor : public TypeRuleProcessor
{
public:
    sipTypeRuleProcessor();
    sipTypeRuleProcessor(INIFile&,const String&);
    sipTypeRuleProcessor(const TypeRuleProcessor&);
    virtual ~sipTypeRuleProcessor();

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
    sipTypeRuleProcessor(const sipTypeRuleProcessor &);
    sipTypeRuleProcessor &operator = (const sipTypeRuleProcessor &);

    sipMethodCache sipPyMethods[2];
};

#endif
