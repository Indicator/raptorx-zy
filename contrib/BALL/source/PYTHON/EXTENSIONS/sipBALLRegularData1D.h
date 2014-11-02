/*
 * Interface header file.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#ifndef _BALLRegularData1D_h
#define _BALLRegularData1D_h

#line 10 "regularData1D.sip"
	#include <BALL/DATATYPE/regularData1D.h>
	using namespace BALL;
#line 17 "sipBALLRegularData1D.h"

#define sipClass_RegularData1D             sipModuleAPI_BALL.em_types[185]
#define sipCast_RegularData1D              sipType_BALL_RegularData1D.td_cast
#define sipForceConvertTo_RegularData1D    sipType_BALL_RegularData1D.td_fcto

extern sipTypeDef sipType_BALL_RegularData1D;


class sipRegularData1D : public RegularData1D
{
public:
    sipRegularData1D() throw();
    sipRegularData1D(const RegularData1D&) throw();
    virtual ~sipRegularData1D() throw();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    void clear() throw();

public:
    sipWrapper *sipPySelf;

private:
    sipRegularData1D(const sipRegularData1D &);
    sipRegularData1D &operator = (const sipRegularData1D &);

    sipMethodCache sipPyMethods[1];
};

#endif
