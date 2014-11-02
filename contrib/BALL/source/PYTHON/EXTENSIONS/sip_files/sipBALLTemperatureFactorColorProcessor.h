/*
 * Interface header file.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#ifndef _BALLTemperatureFactorColorProcessor_h
#define _BALLTemperatureFactorColorProcessor_h

#line 168 "standardColorProcessor.sip"
	#include <BALL/VIEW/MODELS/standardColorProcessor.h>
	using namespace BALL;
	using namespace BALL::VIEW;
#line 18 "sipBALLTemperatureFactorColorProcessor.h"

#define sipClass_TemperatureFactorColorProcessor             sipModuleAPI_BALL.em_types[29]
#define sipCast_TemperatureFactorColorProcessor              sipType_BALL_TemperatureFactorColorProcessor.td_cast
#define sipForceConvertTo_TemperatureFactorColorProcessor    sipType_BALL_TemperatureFactorColorProcessor.td_fcto

extern sipTypeDef sipType_BALL_TemperatureFactorColorProcessor;


class sipTemperatureFactorColorProcessor : public TemperatureFactorColorProcessor
{
public:
    sipTemperatureFactorColorProcessor();
    sipTemperatureFactorColorProcessor(const TemperatureFactorColorProcessor&);
    virtual ~sipTemperatureFactorColorProcessor();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    void getColor(const Composite&,ColorRGBA&);
    bool start() throw();
    void interpolateColor(float,ColorRGBA&) throw();
    void clear() throw();

public:
    sipWrapper *sipPySelf;

private:
    sipTemperatureFactorColorProcessor(const sipTemperatureFactorColorProcessor &);
    sipTemperatureFactorColorProcessor &operator = (const sipTemperatureFactorColorProcessor &);

    sipMethodCache sipPyMethods[4];
};

#endif
