/*
 * Interface header file.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#ifndef _BALLAminoAcidDescriptor_h
#define _BALLAminoAcidDescriptor_h

#line 10 "peptideBuilder.sip"
	#include <BALL/STRUCTURE/peptideBuilder.h>
	using namespace BALL;
	using namespace BALL::Peptides;
#line 18 "sipBALLAminoAcidDescriptor.h"

#define sipClass_AminoAcidDescriptor             sipModuleAPI_BALL.em_types[75]
#define sipCast_AminoAcidDescriptor              sipType_BALL_AminoAcidDescriptor.td_cast
#define sipForceConvertTo_AminoAcidDescriptor    sipType_BALL_AminoAcidDescriptor.td_fcto

extern sipTypeDef sipType_BALL_AminoAcidDescriptor;


class sipAminoAcidDescriptor : public AminoAcidDescriptor
{
public:
    sipAminoAcidDescriptor();
    sipAminoAcidDescriptor(const String&,const Angle&,const Angle&,const Angle&);
    sipAminoAcidDescriptor(const AminoAcidDescriptor&);
    ~sipAminoAcidDescriptor();

public:
    sipWrapper *sipPySelf;

private:
    sipAminoAcidDescriptor(const sipAminoAcidDescriptor &);
    sipAminoAcidDescriptor &operator = (const sipAminoAcidDescriptor &);
};

#endif
