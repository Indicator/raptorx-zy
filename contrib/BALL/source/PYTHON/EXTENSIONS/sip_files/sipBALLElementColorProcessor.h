/*
 * Interface header file.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#ifndef _BALLElementColorProcessor_h
#define _BALLElementColorProcessor_h

#line 11 "standardColorProcessor.sip"
	#include <BALL/VIEW/MODELS/standardColorProcessor.h>
	using namespace BALL;
	using namespace BALL::VIEW;
#line 18 "sipBALLElementColorProcessor.h"

#define sipClass_ElementColorProcessor             sipModuleAPI_BALL.em_types[26]
#define sipCast_ElementColorProcessor              sipType_BALL_ElementColorProcessor.td_cast
#define sipForceConvertTo_ElementColorProcessor    sipType_BALL_ElementColorProcessor.td_fcto

extern sipTypeDef sipType_BALL_ElementColorProcessor;


class sipElementColorProcessor : public ElementColorProcessor
{
public:
    sipElementColorProcessor() throw();
    sipElementColorProcessor(const ElementColorProcessor&);
    virtual ~sipElementColorProcessor();

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
    sipElementColorProcessor(const sipElementColorProcessor &);
    sipElementColorProcessor &operator = (const sipElementColorProcessor &);

    sipMethodCache sipPyMethods[3];
};

#endif
