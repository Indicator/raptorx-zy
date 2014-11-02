/*
 * Interface header file.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#ifndef _BALLParameters_h
#define _BALLParameters_h

#line 10 "parameters.sip"
	#include <BALL/FORMAT/parameters.h>
	using namespace BALL;
#line 17 "sipBALLParameters.h"

#define sipClass_Parameters             sipModuleAPI_BALL.em_types[156]
#define sipCast_Parameters              sipType_BALL_Parameters.td_cast
#define sipForceConvertTo_Parameters    sipType_BALL_Parameters.td_fcto

extern sipTypeDef sipType_BALL_Parameters;


class sipParameters : public Parameters
{
public:
    sipParameters();
    sipParameters(const String&);
    sipParameters(const Parameters&);
    virtual ~sipParameters();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    void clear() throw();
    bool isValid() const;

public:
    sipWrapper *sipPySelf;

private:
    sipParameters(const sipParameters &);
    sipParameters &operator = (const sipParameters &);

    sipMethodCache sipPyMethods[2];
};

#endif
