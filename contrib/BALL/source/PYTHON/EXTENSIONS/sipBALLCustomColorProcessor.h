/*
 * Interface header file.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#ifndef _BALLCustomColorProcessor_h
#define _BALLCustomColorProcessor_h

#line 154 "standardColorProcessor.sip"
	#include <BALL/VIEW/MODELS/standardColorProcessor.h>
	using namespace BALL;
	using namespace BALL::VIEW;
#line 18 "sipBALLCustomColorProcessor.h"

#define sipClass_CustomColorProcessor             sipModuleAPI_BALL.em_types[19]
#define sipCast_CustomColorProcessor              sipType_BALL_CustomColorProcessor.td_cast
#define sipForceConvertTo_CustomColorProcessor    sipType_BALL_CustomColorProcessor.td_fcto

extern sipTypeDef sipType_BALL_CustomColorProcessor;


class sipCustomColorProcessor : public CustomColorProcessor
{
public:
    sipCustomColorProcessor();
    sipCustomColorProcessor(const CustomColorProcessor&);
    virtual ~sipCustomColorProcessor();

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
    sipCustomColorProcessor(const sipCustomColorProcessor &);
    sipCustomColorProcessor &operator = (const sipCustomColorProcessor &);

    sipMethodCache sipPyMethods[2];
};

#endif
