/*
 * Interface header file.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#ifndef _BALLAtomBondModelBaseProcessor_h
#define _BALLAtomBondModelBaseProcessor_h

#line 11 "atomBondModelBaseProcessor.sip"
	#include <BALL/VIEW/MODELS/atomBondModelBaseProcessor.h>
	using namespace BALL;
	using namespace BALL::VIEW;
#line 18 "sipBALLAtomBondModelBaseProcessor.h"

#define sipClass_AtomBondModelBaseProcessor             sipModuleAPI_BALL.em_types[10]
#define sipCast_AtomBondModelBaseProcessor              sipType_BALL_AtomBondModelBaseProcessor.td_cast
#define sipForceConvertTo_AtomBondModelBaseProcessor    sipType_BALL_AtomBondModelBaseProcessor.td_fcto

extern sipTypeDef sipType_BALL_AtomBondModelBaseProcessor;


class sipAtomBondModelBaseProcessor : public AtomBondModelBaseProcessor
{
public:
    sipAtomBondModelBaseProcessor() throw();
    sipAtomBondModelBaseProcessor(const AtomBondModelBaseProcessor&) throw();
    virtual ~sipAtomBondModelBaseProcessor() throw();

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
    sipAtomBondModelBaseProcessor(const sipAtomBondModelBaseProcessor &);
    sipAtomBondModelBaseProcessor &operator = (const sipAtomBondModelBaseProcessor &);

    sipMethodCache sipPyMethods[4];
};

#endif
