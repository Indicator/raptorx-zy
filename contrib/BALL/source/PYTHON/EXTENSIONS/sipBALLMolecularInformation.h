/*
 * Interface header file.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#ifndef _BALLMolecularInformation_h
#define _BALLMolecularInformation_h

#line 4 "molecularInformation.sip"
	#include <BALL/CONCEPT/molecularInformation.h>
	using namespace BALL;
#line 17 "sipBALLMolecularInformation.h"

#define sipClass_MolecularInformation             sipModuleAPI_BALL.em_types[199]
#define sipCast_MolecularInformation              sipType_BALL_MolecularInformation.td_cast
#define sipForceConvertTo_MolecularInformation    sipType_BALL_MolecularInformation.td_fcto

#define sipEnum_MolecularInformation_Type              sipModuleAPI_BALL.em_enums[35]

extern sipTypeDef sipType_BALL_MolecularInformation;


class sipMolecularInformation : public MolecularInformation
{
public:
    sipMolecularInformation() throw();
    sipMolecularInformation(const MolecularInformation&);
    virtual ~sipMolecularInformation() throw();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    void clear() throw();
    void visit(Composite&);

public:
    sipWrapper *sipPySelf;

private:
    sipMolecularInformation(const sipMolecularInformation &);
    sipMolecularInformation &operator = (const sipMolecularInformation &);

    sipMethodCache sipPyMethods[2];
};

#endif
