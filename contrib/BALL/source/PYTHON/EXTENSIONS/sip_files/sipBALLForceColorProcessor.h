/*
 * Interface header file.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#ifndef _BALLForceColorProcessor_h
#define _BALLForceColorProcessor_h

#line 197 "standardColorProcessor.sip"
	#include <BALL/VIEW/MODELS/standardColorProcessor.h>
	using namespace BALL;
	using namespace BALL::VIEW;
#line 18 "sipBALLForceColorProcessor.h"

#define sipClass_ForceColorProcessor             sipModuleAPI_BALL.em_types[28]
#define sipCast_ForceColorProcessor              sipType_BALL_ForceColorProcessor.td_cast
#define sipForceConvertTo_ForceColorProcessor    sipType_BALL_ForceColorProcessor.td_fcto

extern sipTypeDef sipType_BALL_ForceColorProcessor;


class sipForceColorProcessor : public ForceColorProcessor
{
public:
    sipForceColorProcessor();
    sipForceColorProcessor(const ForceColorProcessor&);
    virtual ~sipForceColorProcessor();

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
    sipForceColorProcessor(const sipForceColorProcessor &);
    sipForceColorProcessor &operator = (const sipForceColorProcessor &);

    sipMethodCache sipPyMethods[4];
};

#endif
