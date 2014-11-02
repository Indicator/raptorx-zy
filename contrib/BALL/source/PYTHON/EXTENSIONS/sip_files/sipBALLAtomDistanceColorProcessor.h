/*
 * Interface header file.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#ifndef _BALLAtomDistanceColorProcessor_h
#define _BALLAtomDistanceColorProcessor_h

#line 127 "standardColorProcessor.sip"
	#include <BALL/VIEW/MODELS/standardColorProcessor.h>
	using namespace BALL;
	using namespace BALL::VIEW;
#line 18 "sipBALLAtomDistanceColorProcessor.h"

#define sipClass_AtomDistanceColorProcessor             sipModuleAPI_BALL.em_types[20]
#define sipCast_AtomDistanceColorProcessor              sipType_BALL_AtomDistanceColorProcessor.td_cast
#define sipForceConvertTo_AtomDistanceColorProcessor    sipType_BALL_AtomDistanceColorProcessor.td_fcto

extern sipTypeDef sipType_BALL_AtomDistanceColorProcessor;


class sipAtomDistanceColorProcessor : public AtomDistanceColorProcessor
{
public:
    sipAtomDistanceColorProcessor() throw();
    sipAtomDistanceColorProcessor(const AtomDistanceColorProcessor&) throw();
    virtual ~sipAtomDistanceColorProcessor();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    void addAtom(const Atom&);
    bool finish() throw();
    void getColor(const Composite&,ColorRGBA&);
    void clear() throw();
    bool start() throw();

public:
    sipWrapper *sipPySelf;

private:
    sipAtomDistanceColorProcessor(const sipAtomDistanceColorProcessor &);
    sipAtomDistanceColorProcessor &operator = (const sipAtomDistanceColorProcessor &);

    sipMethodCache sipPyMethods[5];
};

#endif
