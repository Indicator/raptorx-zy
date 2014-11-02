/*
 * Interface header file.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#ifndef _BALLPDBRecords_h
#define _BALLPDBRecords_h

#line 9 "PDBRecords.sip"
	#include <BALL/FORMAT/PDBRecords.h>
	using namespace BALL;
#line 17 "sipBALLPDBRecords.h"

#define sipClass_PDBRecords             sipModuleAPI_BALL.em_types[159]
#define sipCast_PDBRecords              sipType_BALL_PDBRecords.td_cast
#define sipForceConvertTo_PDBRecords    sipType_BALL_PDBRecords.td_fcto

extern sipTypeDef sipType_BALL_PDBRecords;


class sipPDBRecords : public PDBRecords
{
public:
    sipPDBRecords() throw();
    sipPDBRecords(const PDBRecords&) throw();
    ~sipPDBRecords() throw();

public:
    sipWrapper *sipPySelf;

private:
    sipPDBRecords(const sipPDBRecords &);
    sipPDBRecords &operator = (const sipPDBRecords &);
};

#endif
