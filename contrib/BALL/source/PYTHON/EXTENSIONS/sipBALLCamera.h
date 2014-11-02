/*
 * Interface header file.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#ifndef _BALLCamera_h
#define _BALLCamera_h

#line 49 "stage.sip"
	#include <BALL/VIEW/KERNEL/stage.h>
	using namespace BALL;
	using namespace BALL::VIEW;
#line 18 "sipBALLCamera.h"

#define sipClass_Camera             sipModuleAPI_BALL.em_types[54]
#define sipCast_Camera              sipType_BALL_Camera.td_cast
#define sipForceConvertTo_Camera    sipType_BALL_Camera.td_fcto

extern sipTypeDef sipType_BALL_Camera;


class sipCamera : public Camera
{
public:
    sipCamera() throw();
    sipCamera(const Camera&) throw();
    sipCamera(const Vector3&,const Vector3&,const Vector3&) throw();
    virtual ~sipCamera() throw();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    void clear() throw();

public:
    sipWrapper *sipPySelf;

private:
    sipCamera(const sipCamera &);
    sipCamera &operator = (const sipCamera &);

    sipMethodCache sipPyMethods[1];
};

#endif
