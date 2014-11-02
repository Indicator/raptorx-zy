/*
 * Interface header file.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#ifndef _BALLPeptideBuilder_h
#define _BALLPeptideBuilder_h

#line 55 "peptideBuilder.sip"
	#include <BALL/STRUCTURE/peptideBuilder.h>
	using namespace BALL;
	using namespace BALL::Peptides;
#line 18 "sipBALLPeptideBuilder.h"

#define sipClass_PeptideBuilder             sipModuleAPI_BALL.em_types[74]
#define sipCast_PeptideBuilder              sipType_BALL_PeptideBuilder.td_cast
#define sipForceConvertTo_PeptideBuilder    sipType_BALL_PeptideBuilder.td_fcto

extern sipTypeDef sipType_BALL_PeptideBuilder;


class sipPeptideBuilder : public PeptideBuilder
{
public:
    sipPeptideBuilder();
    sipPeptideBuilder(const String&,const Angle&,const Angle&,const Angle&);
    sipPeptideBuilder(const PeptideBuilder&);
    ~sipPeptideBuilder();

public:
    sipWrapper *sipPySelf;

private:
    sipPeptideBuilder(const sipPeptideBuilder &);
    sipPeptideBuilder &operator = (const sipPeptideBuilder &);
};

#endif
