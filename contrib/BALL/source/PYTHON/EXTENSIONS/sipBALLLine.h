/*
 * Interface header file.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#ifndef _BALLLine_h
#define _BALLLine_h

#line 12 "line.sip"
	#include <BALL/VIEW/PRIMITIVES/line.h>
	using namespace BALL;
	using namespace BALL::VIEW;
#line 18 "sipBALLLine.h"

#define sipClass_Line             sipModuleAPI_BALL.em_types[46]
#define sipCast_Line              sipType_BALL_Line.td_cast
#define sipForceConvertTo_Line    sipType_BALL_Line.td_fcto

extern sipTypeDef sipType_BALL_Line;


class sipLine : public Line
{
public:
    sipLine() throw();
    sipLine(const Line&) throw();
    virtual ~sipLine() throw();

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
    sipLine(const sipLine &);
    sipLine &operator = (const sipLine &);

    sipMethodCache sipPyMethods[2];
};

#endif
