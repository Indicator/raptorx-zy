/*
 * Interface header file.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#ifndef _BALLSimpleBox_h
#define _BALLSimpleBox_h

#line 12 "simpleBox.sip"
	#include <BALL/VIEW/PRIMITIVES/simpleBox.h>
	using namespace BALL;
	using namespace BALL::VIEW;
#line 18 "sipBALLSimpleBox.h"

#define sipClass_SimpleBox             sipModuleAPI_BALL.em_types[146]
#define sipCast_SimpleBox              sipType_BALL_SimpleBox.td_cast
#define sipForceConvertTo_SimpleBox    sipType_BALL_SimpleBox.td_fcto

extern sipTypeDef sipType_BALL_SimpleBox;


class sipSimpleBox : public SimpleBox
{
public:
    sipSimpleBox() throw();
    sipSimpleBox(const SimpleBox&) throw();
    virtual ~sipSimpleBox() throw();

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
    sipSimpleBox(const sipSimpleBox &);
    sipSimpleBox &operator = (const sipSimpleBox &);

    sipMethodCache sipPyMethods[2];
};

#endif
