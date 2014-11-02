/*
 * Interface header file.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#ifndef _BALLExpressionPredicate_h
#define _BALLExpressionPredicate_h

#line 12 "expression.sip"
	#include <BALL/KERNEL/expression.h>
	using namespace BALL;
#line 17 "sipBALLExpressionPredicate.h"

#define sipClass_ExpressionPredicate             sipModuleAPI_BALL.em_types[197]
#define sipCast_ExpressionPredicate              sipType_BALL_ExpressionPredicate.td_cast
#define sipForceConvertTo_ExpressionPredicate    sipType_BALL_ExpressionPredicate.td_fcto

extern sipTypeDef sipType_BALL_ExpressionPredicate;


class sipExpressionPredicate : public ExpressionPredicate
{
public:
    sipExpressionPredicate();
    sipExpressionPredicate(const String&);
    sipExpressionPredicate(const ExpressionPredicate&);
    virtual ~sipExpressionPredicate() throw();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    void setArgument(const String&) throw();

public:
    sipWrapper *sipPySelf;

private:
    sipExpressionPredicate(const sipExpressionPredicate &);
    sipExpressionPredicate &operator = (const sipExpressionPredicate &);

    sipMethodCache sipPyMethods[1];
};

#endif
