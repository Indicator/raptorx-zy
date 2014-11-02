/*
 * Interface header file.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#ifndef _BALLInterpolateColorProcessor_h
#define _BALLInterpolateColorProcessor_h

#line 47 "colorProcessor.sip"
	#include <BALL/VIEW/MODELS/colorProcessor.h>
	using namespace BALL;
	using namespace BALL::VIEW;
#line 18 "sipBALLInterpolateColorProcessor.h"

#define sipClass_InterpolateColorProcessor             sipModuleAPI_BALL.em_types[27]
#define sipCast_InterpolateColorProcessor              sipType_BALL_InterpolateColorProcessor.td_cast
#define sipForceConvertTo_InterpolateColorProcessor    sipType_BALL_InterpolateColorProcessor.td_fcto

#define sipEnum_InterpolateColorProcessor_Mode              sipModuleAPI_BALL.em_enums[1]

extern sipTypeDef sipType_BALL_InterpolateColorProcessor;


class sipInterpolateColorProcessor : public InterpolateColorProcessor
{
public:
    sipInterpolateColorProcessor();
    sipInterpolateColorProcessor(const InterpolateColorProcessor&);
    virtual ~sipInterpolateColorProcessor();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    bool start() throw();
    void interpolateColor(float,ColorRGBA&) throw();
    void clear() throw();

public:
    sipWrapper *sipPySelf;

private:
    sipInterpolateColorProcessor(const sipInterpolateColorProcessor &);
    sipInterpolateColorProcessor &operator = (const sipInterpolateColorProcessor &);

    sipMethodCache sipPyMethods[3];
};

#endif
