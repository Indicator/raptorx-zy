/*
 * Interface header file.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#ifndef _BALLParameterSection_h
#define _BALLParameterSection_h

#line 10 "parameterSection.sip"
	#include <BALL/FORMAT/parameterSection.h>
	using namespace BALL;
#line 17 "sipBALLParameterSection.h"

#define sipClass_ParameterSection             sipModuleAPI_BALL.em_types[157]
#define sipCast_ParameterSection              sipType_BALL_ParameterSection.td_cast
#define sipForceConvertTo_ParameterSection    sipType_BALL_ParameterSection.td_fcto

extern sipTypeDef sipType_BALL_ParameterSection;


class sipParameterSection : public ParameterSection
{
public:
    sipParameterSection() throw();
    sipParameterSection(const ParameterSection&) throw();
    virtual ~sipParameterSection() throw();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    void clear() throw();
    bool isValid() const throw();

public:
    sipWrapper *sipPySelf;

private:
    sipParameterSection(const sipParameterSection &);
    sipParameterSection &operator = (const sipParameterSection &);

    sipMethodCache sipPyMethods[2];
};

#endif
