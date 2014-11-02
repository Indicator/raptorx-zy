/*
 * Interface header file.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#ifndef _BALLBond_h
#define _BALLBond_h

#line 12 "bond.sip"
	#include <BALL/KERNEL/bond.h>
	#include <BALL/KERNEL/atom.h>
	using namespace BALL;
#line 18 "sipBALLBond.h"

#define sipClass_Bond             sipModuleAPI_BALL.em_types[225]
#define sipCast_Bond              sipType_BALL_Bond.td_cast
#define sipForceConvertTo_Bond    sipType_BALL_Bond.td_fcto

#define sipEnum_Bond_Property              sipModuleAPI_BALL.em_enums[26]
#define sipEnum_Bond_BondType              sipModuleAPI_BALL.em_enums[27]
#define sipEnum_Bond_BondOrder              sipModuleAPI_BALL.em_enums[28]

extern sipTypeDef sipType_BALL_Bond;


class sipBond : public Bond
{
public:
    sipBond();
    sipBond(const Bond&,bool);
    sipBond(const String&,Atom&,Atom&,short,short);
    sipBond(const Bond&);
    virtual ~sipBond() throw();

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
    sipBond(const sipBond &);
    sipBond &operator = (const sipBond &);

    sipMethodCache sipPyMethods[5];
};

#endif
