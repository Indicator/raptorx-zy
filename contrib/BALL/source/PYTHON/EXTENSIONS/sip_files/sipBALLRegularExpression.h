/*
 * Interface header file.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#ifndef _BALLRegularExpression_h
#define _BALLRegularExpression_h

#line 10 "regularExpression.sip"
	#include <BALL/DATATYPE/regularExpression.h>
	using namespace BALL;
#line 17 "sipBALLRegularExpression.h"

#define sipClass_RegularExpression             sipModuleAPI_BALL.em_types[180]
#define sipCast_RegularExpression              sipType_BALL_RegularExpression.td_cast
#define sipForceConvertTo_RegularExpression    sipType_BALL_RegularExpression.td_fcto

extern sipTypeDef sipType_BALL_RegularExpression;


class sipRegularExpression : public RegularExpression
{
public:
    sipRegularExpression();
    sipRegularExpression(const RegularExpression&);
    sipRegularExpression(const String&,bool);
    virtual ~sipRegularExpression() throw();

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
    sipRegularExpression(const sipRegularExpression &);
    sipRegularExpression &operator = (const sipRegularExpression &);

    sipMethodCache sipPyMethods[2];
};

#endif
