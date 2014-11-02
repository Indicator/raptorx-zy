/*
 * Interface header file.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#ifndef _BALLSnapShot_h
#define _BALLSnapShot_h

#line 10 "snapShot.sip"
	#include <BALL/MOLMEC/COMMON/snapShot.h>
	using namespace BALL;
#line 17 "sipBALLSnapShot.h"

#define sipClass_SnapShot             sipModuleAPI_BALL.em_types[103]
#define sipCast_SnapShot              sipType_BALL_SnapShot.td_cast
#define sipForceConvertTo_SnapShot    sipType_BALL_SnapShot.td_fcto

extern sipTypeDef sipType_BALL_SnapShot;


class sipSnapShot : public SnapShot
{
public:
    sipSnapShot() throw();
    sipSnapShot(const SnapShot&) throw();
    virtual ~sipSnapShot() throw();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    void clear() throw();

public:
    sipWrapper *sipPySelf;

private:
    sipSnapShot(const sipSnapShot &);
    sipSnapShot &operator = (const sipSnapShot &);

    sipMethodCache sipPyMethods[1];
};

#endif
