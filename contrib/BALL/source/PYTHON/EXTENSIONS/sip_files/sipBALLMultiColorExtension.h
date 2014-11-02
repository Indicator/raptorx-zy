/*
 * Interface header file.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#ifndef _BALLMultiColorExtension_h
#define _BALLMultiColorExtension_h

#line 35 "colorExtensions.sip"
	#include <BALL/VIEW/DATATYPE/colorExtensions.h>
	using namespace BALL;
	using namespace BALL::VIEW;
#line 18 "sipBALLMultiColorExtension.h"

#define sipClass_MultiColorExtension             sipModuleAPI_BALL.em_types[33]
#define sipCast_MultiColorExtension              sipType_BALL_MultiColorExtension.td_cast
#define sipForceConvertTo_MultiColorExtension    sipType_BALL_MultiColorExtension.td_fcto

extern sipTypeDef sipType_BALL_MultiColorExtension;


class sipMultiColorExtension : public MultiColorExtension
{
public:
    sipMultiColorExtension() throw();
    sipMultiColorExtension(const MultiColorExtension&) throw();
    virtual ~sipMultiColorExtension() throw();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    void clear() throw();

public:
    sipWrapper *sipPySelf;

private:
    sipMultiColorExtension(const sipMultiColorExtension &);
    sipMultiColorExtension &operator = (const sipMultiColorExtension &);

    sipMethodCache sipPyMethods[1];
};

#endif
