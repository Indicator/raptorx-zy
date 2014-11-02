/*
 * Interface header file.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#ifndef _BALLColorProcessor_h
#define _BALLColorProcessor_h

#line 10 "colorProcessor.sip"
	#include <BALL/VIEW/MODELS/colorProcessor.h>
	using namespace BALL;
	using namespace BALL::VIEW;
#line 18 "sipBALLColorProcessor.h"

#define sipClass_ColorProcessor             sipModuleAPI_BALL.em_types[15]
#define sipCast_ColorProcessor              sipType_BALL_ColorProcessor.td_cast
#define sipForceConvertTo_ColorProcessor    sipType_BALL_ColorProcessor.td_fcto

extern sipTypeDef sipType_BALL_ColorProcessor;


class sipColorProcessor : public ColorProcessor
{
public:
    sipColorProcessor() throw();
    sipColorProcessor(const ColorProcessor&) throw();
    virtual ~sipColorProcessor();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    void clear() throw();
    bool start() throw();

public:
    sipWrapper *sipPySelf;

private:
    sipColorProcessor(const sipColorProcessor &);
    sipColorProcessor &operator = (const sipColorProcessor &);

    sipMethodCache sipPyMethods[2];
};

#endif
