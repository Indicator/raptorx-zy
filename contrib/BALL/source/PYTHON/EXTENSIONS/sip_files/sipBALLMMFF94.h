/*
 * Interface header file.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#ifndef _BALLMMFF94_h
#define _BALLMMFF94_h

#line 11 "MMFF94.sip"
	#include <BALL/MOLMEC/MMFF94/MMFF94.h>
	#include <BALL/COMMON/exception.h>
	using namespace BALL;
	using namespace BALL::Exception;
#line 19 "sipBALLMMFF94.h"

#define sipClass_MMFF94             sipModuleAPI_BALL.em_types[134]
#define sipCast_MMFF94              sipType_BALL_MMFF94.td_cast
#define sipForceConvertTo_MMFF94    sipType_BALL_MMFF94.td_fcto

extern sipTypeDef sipType_BALL_MMFF94;


class sipMMFF94 : public MMFF94
{
public:
    sipMMFF94();
    sipMMFF94(System&);
    sipMMFF94(System&,Options&);
    sipMMFF94(MMFF94&);
    virtual ~sipMMFF94();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    String getResults() const throw();
    bool specificSetup() throw(TooManyErrors);

public:
    sipWrapper *sipPySelf;

private:
    sipMMFF94(const sipMMFF94 &);
    sipMMFF94 &operator = (const sipMMFF94 &);

    sipMethodCache sipPyMethods[2];
};

#endif
