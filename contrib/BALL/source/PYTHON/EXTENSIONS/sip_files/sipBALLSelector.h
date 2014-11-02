/*
 * Interface header file.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#ifndef _BALLSelector_h
#define _BALLSelector_h

#line 11 "selector.sip"
	#include <BALL/KERNEL/selector.h>
	using namespace BALL;
	typedef UnaryProcessor<Composite> CompositeProcessor;
#line 18 "sipBALLSelector.h"

#define sipClass_Selector             sipModuleAPI_BALL.em_types[152]
#define sipCast_Selector              sipType_BALL_Selector.td_cast
#define sipForceConvertTo_Selector    sipType_BALL_Selector.td_fcto

extern sipTypeDef sipType_BALL_Selector;


class sipSelector : public Selector
{
public:
    sipSelector();
    sipSelector(const Selector&);
    sipSelector(const String&);
    virtual ~sipSelector() throw();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    bool start() throw();

public:
    sipWrapper *sipPySelf;

private:
    sipSelector(const sipSelector &);
    sipSelector &operator = (const sipSelector &);

    sipMethodCache sipPyMethods[1];
};

#endif
