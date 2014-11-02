/*
 * Interface header file.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#ifndef _BALLResidueNumberColorProcessor_h
#define _BALLResidueNumberColorProcessor_h

#line 28 "standardColorProcessor.sip"
	#include <BALL/VIEW/MODELS/standardColorProcessor.h>
	using namespace BALL;
	using namespace BALL::VIEW;
#line 18 "sipBALLResidueNumberColorProcessor.h"

#define sipClass_ResidueNumberColorProcessor             sipModuleAPI_BALL.em_types[25]
#define sipCast_ResidueNumberColorProcessor              sipType_BALL_ResidueNumberColorProcessor.td_cast
#define sipForceConvertTo_ResidueNumberColorProcessor    sipType_BALL_ResidueNumberColorProcessor.td_fcto

extern sipTypeDef sipType_BALL_ResidueNumberColorProcessor;


class sipResidueNumberColorProcessor : public ResidueNumberColorProcessor
{
public:
    sipResidueNumberColorProcessor() throw();
    sipResidueNumberColorProcessor(const ResidueNumberColorProcessor&);
    virtual ~sipResidueNumberColorProcessor();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    bool start() throw();
    void clear() throw();

public:
    sipWrapper *sipPySelf;

private:
    sipResidueNumberColorProcessor(const sipResidueNumberColorProcessor &);
    sipResidueNumberColorProcessor &operator = (const sipResidueNumberColorProcessor &);

    sipMethodCache sipPyMethods[2];
};

#endif
