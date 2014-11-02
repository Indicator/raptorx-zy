/*
 * Interface header file.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#ifndef _BALLBit_h
#define _BALLBit_h

#line 9 "bitVector.sip"
	#include <BALL/DATATYPE/bitVector.h>
	using namespace BALL;
#line 17 "sipBALLBit.h"

#define sipClass_Bit             sipModuleAPI_BALL.em_types[188]
#define sipCast_Bit              sipType_BALL_Bit.td_cast
#define sipForceConvertTo_Bit    sipType_BALL_Bit.td_fcto

extern sipTypeDef sipType_BALL_Bit;


class sipBit : public Bit
{
public:
    sipBit() throw();
    sipBit(const Bit&) throw();
    virtual ~sipBit() throw();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    void clear() throw();

public:
    sipWrapper *sipPySelf;

private:
    sipBit(const sipBit &);
    sipBit &operator = (const sipBit &);

    sipMethodCache sipPyMethods[1];
};

#endif
