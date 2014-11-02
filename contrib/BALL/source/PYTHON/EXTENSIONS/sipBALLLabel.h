/*
 * Interface header file.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#ifndef _BALLLabel_h
#define _BALLLabel_h

#line 12 "label.sip"
	#include <BALL/VIEW/PRIMITIVES/label.h>
	using namespace BALL;
	using namespace BALL::VIEW;
#line 18 "sipBALLLabel.h"

#define sipClass_Label             sipModuleAPI_BALL.em_types[47]
#define sipCast_Label              sipType_BALL_Label.td_cast
#define sipForceConvertTo_Label    sipType_BALL_Label.td_fcto

extern sipTypeDef sipType_BALL_Label;


class sipLabel : public Label
{
public:
    sipLabel() throw();
    sipLabel(const Label&) throw();
    virtual ~sipLabel() throw();

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
    sipLabel(const sipLabel &);
    sipLabel &operator = (const sipLabel &);

    sipMethodCache sipPyMethods[2];
};

#endif
