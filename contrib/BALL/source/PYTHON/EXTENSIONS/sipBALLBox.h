/*
 * Interface header file.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#ifndef _BALLBox_h
#define _BALLBox_h

#line 12 "box.sip"
	#include <BALL/VIEW/PRIMITIVES/box.h>
	using namespace BALL;
	using namespace BALL::VIEW;
#line 18 "sipBALLBox.h"

#define sipClass_Box             sipModuleAPI_BALL.em_types[50]
#define sipCast_Box              sipType_BALL_Box.td_cast
#define sipForceConvertTo_Box    sipType_BALL_Box.td_fcto

extern sipTypeDef sipType_BALL_Box;


class sipBox : public Box
{
public:
    sipBox() throw();
    sipBox(const Box&) throw();
    sipBox(const Vector3&,const Vector3&,const Vector3&,float) throw();
    virtual ~sipBox() throw();

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
    sipBox(const sipBox &);
    sipBox &operator = (const sipBox &);

    sipMethodCache sipPyMethods[2];
};

#endif
