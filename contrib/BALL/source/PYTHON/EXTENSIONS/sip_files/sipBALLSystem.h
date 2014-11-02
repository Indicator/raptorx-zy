/*
 * Interface header file.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#ifndef _BALLSystem_h
#define _BALLSystem_h

#line 12 "system.sip"
	#include <BALL/KERNEL/system.h>
	using namespace BALL;
#line 17 "sipBALLSystem.h"

#define sipClass_System             sipModuleAPI_BALL.em_types[227]
#define sipCast_System              sipType_BALL_System.td_cast
#define sipForceConvertTo_System    sipType_BALL_System.td_fcto

extern sipTypeDef sipType_BALL_System;


class sipSystem : public System
{
public:
    sipSystem();
    sipSystem(const System&,bool);
    sipSystem(const String&);
    sipSystem(const System&);
    virtual ~sipSystem() throw();

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
    sipSystem(const sipSystem &);
    sipSystem &operator = (const sipSystem &);

    sipMethodCache sipPyMethods[5];
};

#endif
