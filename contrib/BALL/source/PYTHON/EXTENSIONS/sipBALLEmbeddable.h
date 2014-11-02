/*
 * Interface header file.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#ifndef _BALLEmbeddable_h
#define _BALLEmbeddable_h

#line 10 "embeddable.sip"
	#include <BALL/CONCEPT/embeddable.h>
	using namespace BALL;
#line 17 "sipBALLEmbeddable.h"

#define sipClass_Embeddable             sipModuleAPI_BALL.em_types[200]
#define sipCast_Embeddable              sipType_BALL_Embeddable.td_cast
#define sipForceConvertTo_Embeddable    sipType_BALL_Embeddable.td_fcto

extern sipTypeDef sipType_BALL_Embeddable;


class sipEmbeddable : public Embeddable
{
public:
    sipEmbeddable();
    sipEmbeddable(const Embeddable&);
    virtual ~sipEmbeddable() throw();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    void registerThis() throw();

public:
    sipWrapper *sipPySelf;

private:
    sipEmbeddable(const sipEmbeddable &);
    sipEmbeddable &operator = (const sipEmbeddable &);

    sipMethodCache sipPyMethods[1];
};

#endif
