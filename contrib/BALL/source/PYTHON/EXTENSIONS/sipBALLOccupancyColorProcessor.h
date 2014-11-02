/*
 * Interface header file.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#ifndef _BALLOccupancyColorProcessor_h
#define _BALLOccupancyColorProcessor_h

#line 183 "standardColorProcessor.sip"
	#include <BALL/VIEW/MODELS/standardColorProcessor.h>
	using namespace BALL;
	using namespace BALL::VIEW;
#line 18 "sipBALLOccupancyColorProcessor.h"

#define sipClass_OccupancyColorProcessor             sipModuleAPI_BALL.em_types[18]
#define sipCast_OccupancyColorProcessor              sipType_BALL_OccupancyColorProcessor.td_cast
#define sipForceConvertTo_OccupancyColorProcessor    sipType_BALL_OccupancyColorProcessor.td_fcto

extern sipTypeDef sipType_BALL_OccupancyColorProcessor;


class sipOccupancyColorProcessor : public OccupancyColorProcessor
{
public:
    sipOccupancyColorProcessor();
    sipOccupancyColorProcessor(const OccupancyColorProcessor&);
    virtual ~sipOccupancyColorProcessor();

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
    sipOccupancyColorProcessor(const sipOccupancyColorProcessor &);
    sipOccupancyColorProcessor &operator = (const sipOccupancyColorProcessor &);

    sipMethodCache sipPyMethods[3];
};

#endif
