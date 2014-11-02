/*
 * Interface header file.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#ifndef _BALLColorExtension2_h
#define _BALLColorExtension2_h

#line 10 "colorExtensions.sip"
	#include <BALL/VIEW/DATATYPE/colorExtensions.h>
	using namespace BALL;
	using namespace BALL::VIEW;
#line 18 "sipBALLColorExtension2.h"

#define sipClass_ColorExtension2             sipModuleAPI_BALL.em_types[34]
#define sipCast_ColorExtension2              sipType_BALL_ColorExtension2.td_cast
#define sipForceConvertTo_ColorExtension2    sipType_BALL_ColorExtension2.td_fcto

extern sipTypeDef sipType_BALL_ColorExtension2;


class sipColorExtension2 : public ColorExtension2
{
public:
    sipColorExtension2() throw();
    sipColorExtension2(const ColorExtension2&) throw();
    virtual ~sipColorExtension2() throw();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    void clear() throw();

public:
    sipWrapper *sipPySelf;

private:
    sipColorExtension2(const sipColorExtension2 &);
    sipColorExtension2 &operator = (const sipColorExtension2 &);

    sipMethodCache sipPyMethods[1];
};

#endif
