/*
 * Interface header file.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#ifndef _BALLVector2_h
#define _BALLVector2_h

#line 20 "vector2.sip"
        #include <BALL/MATHS/vector2.h>
				#include "sipBALLIndex.h"
				#include "sipBALLPosition.h"
        using namespace BALL;
        using namespace BALL::Exception;
#line 20 "sipBALLVector2.h"

#define sipClass_Vector2             sipModuleAPI_BALL.em_types[222]
#define sipCast_Vector2              sipType_BALL_Vector2.td_cast
#define sipForceConvertTo_Vector2    sipType_BALL_Vector2.td_fcto

extern sipTypeDef sipType_BALL_Vector2;


class sipVector2 : public Vector2
{
public:
    sipVector2() throw();
    sipVector2(float) throw();
    sipVector2(float,float) throw();
    sipVector2(const Vector2&) throw();
    virtual ~sipVector2() throw();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    void clear() throw();

public:
    sipWrapper *sipPySelf;

private:
    sipVector2(const sipVector2 &);
    sipVector2 &operator = (const sipVector2 &);

    sipMethodCache sipPyMethods[1];
};

#endif
