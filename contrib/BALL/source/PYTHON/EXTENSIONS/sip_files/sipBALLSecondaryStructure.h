/*
 * Interface header file.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#ifndef _BALLSecondaryStructure_h
#define _BALLSecondaryStructure_h

#line 11 "secondaryStructure.sip"
	#include <BALL/KERNEL/secondaryStructure.h>
	using namespace BALL;
#line 17 "sipBALLSecondaryStructure.h"

#define sipClass_SecondaryStructure             sipModuleAPI_BALL.em_types[228]
#define sipCast_SecondaryStructure              sipType_BALL_SecondaryStructure.td_cast
#define sipForceConvertTo_SecondaryStructure    sipType_BALL_SecondaryStructure.td_fcto

#define sipEnum_SecondaryStructure_Type              sipModuleAPI_BALL.em_enums[22]

extern sipTypeDef sipType_BALL_SecondaryStructure;


class sipSecondaryStructure : public SecondaryStructure
{
public:
    sipSecondaryStructure();
    sipSecondaryStructure(const SecondaryStructure&,bool);
    sipSecondaryStructure(const String&);
    sipSecondaryStructure(const SecondaryStructure&);
    virtual ~sipSecondaryStructure() throw();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    void clear() throw();
    void destroy() throw();
    bool isValid() const throw();
    void select() throw();
    void deselect() throw();

public:
    sipWrapper *sipPySelf;

private:
    sipSecondaryStructure(const sipSecondaryStructure &);
    sipSecondaryStructure &operator = (const sipSecondaryStructure &);

    sipMethodCache sipPyMethods[5];
};

#endif
