/*
 * Interface header file.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#ifndef _BALLChainColorProcessor_h
#define _BALLChainColorProcessor_h

#line 68 "standardColorProcessor.sip"
	#include <BALL/VIEW/MODELS/standardColorProcessor.h>
	using namespace BALL;
	using namespace BALL::VIEW;
#line 18 "sipBALLChainColorProcessor.h"

#define sipClass_ChainColorProcessor             sipModuleAPI_BALL.em_types[24]
#define sipCast_ChainColorProcessor              sipType_BALL_ChainColorProcessor.td_cast
#define sipForceConvertTo_ChainColorProcessor    sipType_BALL_ChainColorProcessor.td_fcto

extern sipTypeDef sipType_BALL_ChainColorProcessor;


class sipChainColorProcessor : public ChainColorProcessor
{
public:
    sipChainColorProcessor();
    sipChainColorProcessor(const ChainColorProcessor&);
    virtual ~sipChainColorProcessor();

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
    sipChainColorProcessor(const sipChainColorProcessor &);
    sipChainColorProcessor &operator = (const sipChainColorProcessor &);

    sipMethodCache sipPyMethods[3];
};

#endif
