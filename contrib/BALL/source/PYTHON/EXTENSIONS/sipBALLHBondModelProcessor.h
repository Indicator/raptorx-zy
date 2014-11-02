/*
 * Interface header file.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#ifndef _BALLHBondModelProcessor_h
#define _BALLHBondModelProcessor_h

#line 11 "HBondModel.sip"
	#include <BALL/VIEW/MODELS/HBondModel.h>
	using namespace BALL;
	using namespace BALL::VIEW;
#line 18 "sipBALLHBondModelProcessor.h"

#define sipClass_HBondModelProcessor             sipModuleAPI_BALL.em_types[11]
#define sipCast_HBondModelProcessor              sipType_BALL_HBondModelProcessor.td_cast
#define sipForceConvertTo_HBondModelProcessor    sipType_BALL_HBondModelProcessor.td_fcto

extern sipTypeDef sipType_BALL_HBondModelProcessor;


class sipHBondModelProcessor : public HBondModelProcessor
{
public:
    sipHBondModelProcessor() throw();
    sipHBondModelProcessor(const HBondModelProcessor&) throw();
    virtual ~sipHBondModelProcessor() throw();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    void clear() throw();
    void clearComposites() throw();
    bool createGeometricObjects() throw();
    bool isValid() const throw();

public:
    sipWrapper *sipPySelf;

private:
    sipHBondModelProcessor(const sipHBondModelProcessor &);
    sipHBondModelProcessor &operator = (const sipHBondModelProcessor &);

    sipMethodCache sipPyMethods[4];
};

#endif
