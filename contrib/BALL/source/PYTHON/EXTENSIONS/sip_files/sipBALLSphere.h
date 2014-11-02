/*
 * Interface header file.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#ifndef _BALLSphere_h
#define _BALLSphere_h

#line 11 "sphere.sip"
	#include <BALL/VIEW/PRIMITIVES/sphere.h>
	using namespace BALL;
	using namespace BALL::VIEW;
#line 18 "sipBALLSphere.h"

#define sipClass_Sphere             sipModuleAPI_BALL.em_types[45]
#define sipCast_Sphere              sipType_BALL_Sphere.td_cast
#define sipForceConvertTo_Sphere    sipType_BALL_Sphere.td_fcto

extern sipTypeDef sipType_BALL_Sphere;


class sipSphere : public Sphere
{
public:
    sipSphere() throw();
    sipSphere(const Sphere&) throw();
    virtual ~sipSphere() throw();

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
    sipSphere(const sipSphere &);
    sipSphere &operator = (const sipSphere &);

    sipMethodCache sipPyMethods[2];
};

#endif
