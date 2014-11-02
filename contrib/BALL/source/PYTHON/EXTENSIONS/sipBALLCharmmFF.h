/*
 * Interface header file.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#ifndef _BALLCharmmFF_h
#define _BALLCharmmFF_h

#line 11 "charmm.sip"
	#include <BALL/MOLMEC/CHARMM/charmm.h>
	#include <BALL/COMMON/exception.h>
	using namespace BALL;
	using namespace BALL::Exception;
#line 19 "sipBALLCharmmFF.h"

#define sipClass_CharmmFF             sipModuleAPI_BALL.em_types[132]
#define sipCast_CharmmFF              sipType_BALL_CharmmFF.td_cast
#define sipForceConvertTo_CharmmFF    sipType_BALL_CharmmFF.td_fcto

extern sipTypeDef sipType_BALL_CharmmFF;


class sipCharmmFF : public CharmmFF
{
public:
    sipCharmmFF();
    sipCharmmFF(System&);
    sipCharmmFF(System&,const Options&);
    sipCharmmFF(const CharmmFF&);
    virtual ~sipCharmmFF();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    bool specificSetup() throw(TooManyErrors);

public:
    sipWrapper *sipPySelf;

private:
    sipCharmmFF(const sipCharmmFF &);
    sipCharmmFF &operator = (const sipCharmmFF &);

    sipMethodCache sipPyMethods[1];
};

#endif
