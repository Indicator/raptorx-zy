/*
 * Interface header file.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#ifndef _BALLResidueNameColorProcessor_h
#define _BALLResidueNameColorProcessor_h

#line 94 "standardColorProcessor.sip"
	#include <BALL/VIEW/MODELS/standardColorProcessor.h>
	using namespace BALL;
	using namespace BALL::VIEW;
#line 18 "sipBALLResidueNameColorProcessor.h"

#define sipClass_ResidueNameColorProcessor             sipModuleAPI_BALL.em_types[21]
#define sipCast_ResidueNameColorProcessor              sipType_BALL_ResidueNameColorProcessor.td_cast
#define sipForceConvertTo_ResidueNameColorProcessor    sipType_BALL_ResidueNameColorProcessor.td_fcto

extern sipTypeDef sipType_BALL_ResidueNameColorProcessor;


class sipResidueNameColorProcessor : public ResidueNameColorProcessor
{
public:
    sipResidueNameColorProcessor() throw();
    sipResidueNameColorProcessor(const ResidueNameColorProcessor&);
    virtual ~sipResidueNameColorProcessor();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    void getColor(const Composite&,ColorRGBA&);
    void clear() throw();
    bool start() throw();

public:
    sipWrapper *sipPySelf;

private:
    sipResidueNameColorProcessor(const sipResidueNameColorProcessor &);
    sipResidueNameColorProcessor &operator = (const sipResidueNameColorProcessor &);

    sipMethodCache sipPyMethods[3];
};

#endif
