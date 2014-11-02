/*
 * Interface header file.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#ifndef _BALLResidue_h
#define _BALLResidue_h

#line 11 "residue.sip"
	#include <BALL/KERNEL/residue.h>
	using namespace BALL;
#line 17 "sipBALLResidue.h"

#define sipClass_Residue             sipModuleAPI_BALL.em_types[233]
#define sipCast_Residue              sipType_BALL_Residue.td_cast
#define sipForceConvertTo_Residue    sipType_BALL_Residue.td_fcto

#define sipEnum_Residue_FullNameType              sipModuleAPI_BALL.em_enums[23]
#define sipEnum_Residue_Property              sipModuleAPI_BALL.em_enums[24]

extern sipTypeDef sipType_BALL_Residue;


class sipResidue : public Residue
{
public:
    sipResidue();
    sipResidue(const Residue&,bool);
    sipResidue(const String&,const String&,char);
    sipResidue(const Residue&);
    virtual ~sipResidue() throw();

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
    sipResidue(const sipResidue &);
    sipResidue &operator = (const sipResidue &);

    sipMethodCache sipPyMethods[5];
};

#endif
