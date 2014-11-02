/*
 * Interface header file.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#ifndef _BALLChain_h
#define _BALLChain_h

#line 11 "chain.sip"
	#include <BALL/KERNEL/chain.h>
	using namespace BALL;
#line 17 "sipBALLChain.h"

#define sipClass_Chain             sipModuleAPI_BALL.em_types[235]
#define sipCast_Chain              sipType_BALL_Chain.td_cast
#define sipForceConvertTo_Chain    sipType_BALL_Chain.td_fcto

extern sipTypeDef sipType_BALL_Chain;


class sipChain : public Chain
{
public:
    sipChain();
    sipChain(const Chain&,bool);
    sipChain(const String&);
    sipChain(const Chain&);
    virtual ~sipChain() throw();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    void clear() throw();
    void destroy() throw();
    bool isValid() const throw();
    void select() throw();
    void deselect() throw();

public:
    sipWrapper *sipPySelf;

private:
    sipChain(const sipChain &);
    sipChain &operator = (const sipChain &);

    sipMethodCache sipPyMethods[5];
};

#endif
