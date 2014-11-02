/*
 * Interface header file.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#ifndef _BALLPositionColorProcessor_h
#define _BALLPositionColorProcessor_h

#line 50 "standardColorProcessor.sip"
	#include <BALL/VIEW/MODELS/standardColorProcessor.h>
	using namespace BALL;
	using namespace BALL::VIEW;
#line 18 "sipBALLPositionColorProcessor.h"

#define sipClass_PositionColorProcessor             sipModuleAPI_BALL.em_types[22]
#define sipCast_PositionColorProcessor              sipType_BALL_PositionColorProcessor.td_cast
#define sipForceConvertTo_PositionColorProcessor    sipType_BALL_PositionColorProcessor.td_fcto

extern sipTypeDef sipType_BALL_PositionColorProcessor;


class sipPositionColorProcessor : public PositionColorProcessor
{
public:
    sipPositionColorProcessor();
    sipPositionColorProcessor(const PositionColorProcessor&);
    virtual ~sipPositionColorProcessor();

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
    sipPositionColorProcessor(const sipPositionColorProcessor &);
    sipPositionColorProcessor &operator = (const sipPositionColorProcessor &);

    sipMethodCache sipPyMethods[3];
};

#endif
