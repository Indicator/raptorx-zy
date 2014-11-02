/*
 * Interface header file.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#ifndef _BALLDisc_h
#define _BALLDisc_h

#line 11 "disc.sip"
	#include <BALL/VIEW/PRIMITIVES/disc.h>
	using namespace BALL;
	using namespace BALL::VIEW;
#line 18 "sipBALLDisc.h"

#define sipClass_Disc             sipModuleAPI_BALL.em_types[49]
#define sipCast_Disc              sipType_BALL_Disc.td_cast
#define sipForceConvertTo_Disc    sipType_BALL_Disc.td_fcto

extern sipTypeDef sipType_BALL_Disc;


class sipDisc : public Disc
{
public:
    sipDisc() throw();
    sipDisc(const Circle3&) throw();
    sipDisc(const Disc&) throw();
    virtual ~sipDisc() throw();

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
    sipDisc(const sipDisc &);
    sipDisc &operator = (const sipDisc &);

    sipMethodCache sipPyMethods[2];
};

#endif
