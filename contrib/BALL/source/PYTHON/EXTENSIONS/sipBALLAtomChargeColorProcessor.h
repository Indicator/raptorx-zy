/*
 * Interface header file.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#ifndef _BALLAtomChargeColorProcessor_h
#define _BALLAtomChargeColorProcessor_h

#line 111 "standardColorProcessor.sip"
	#include <BALL/VIEW/MODELS/standardColorProcessor.h>
	using namespace BALL;

	using namespace BALL::VIEW;
#line 19 "sipBALLAtomChargeColorProcessor.h"

#define sipClass_AtomChargeColorProcessor             sipModuleAPI_BALL.em_types[30]
#define sipCast_AtomChargeColorProcessor              sipType_BALL_AtomChargeColorProcessor.td_cast
#define sipForceConvertTo_AtomChargeColorProcessor    sipType_BALL_AtomChargeColorProcessor.td_fcto

extern sipTypeDef sipType_BALL_AtomChargeColorProcessor;


class sipAtomChargeColorProcessor : public AtomChargeColorProcessor
{
public:
    sipAtomChargeColorProcessor() throw();
    sipAtomChargeColorProcessor(const AtomChargeColorProcessor&) throw();
    virtual ~sipAtomChargeColorProcessor();

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
    sipAtomChargeColorProcessor(const sipAtomChargeColorProcessor &);
    sipAtomChargeColorProcessor &operator = (const sipAtomChargeColorProcessor &);

    sipMethodCache sipPyMethods[4];
};

#endif
