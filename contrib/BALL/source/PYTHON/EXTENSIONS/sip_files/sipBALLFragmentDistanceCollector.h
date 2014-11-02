/*
 * Interface header file.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#ifndef _BALLFragmentDistanceCollector_h
#define _BALLFragmentDistanceCollector_h

#line 54 "geometricProperties.sip"
	#include <BALL/STRUCTURE/geometricProperties.h>
	#include "sipBALLAtom.h"
	using namespace BALL;
	typedef UnaryProcessor<Composite> CompositeProcessor;
#line 19 "sipBALLFragmentDistanceCollector.h"

#define sipClass_FragmentDistanceCollector             sipModuleAPI_BALL.em_types[151]
#define sipCast_FragmentDistanceCollector              sipType_BALL_FragmentDistanceCollector.td_cast
#define sipForceConvertTo_FragmentDistanceCollector    sipType_BALL_FragmentDistanceCollector.td_fcto

extern sipTypeDef sipType_BALL_FragmentDistanceCollector;


class sipFragmentDistanceCollector : public FragmentDistanceCollector
{
public:
    sipFragmentDistanceCollector();
    sipFragmentDistanceCollector(const Composite&);
    sipFragmentDistanceCollector(const Composite&,float);
    sipFragmentDistanceCollector(const FragmentDistanceCollector&);
    virtual ~sipFragmentDistanceCollector() throw();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    bool start() throw();
    bool finish() throw();

public:
    sipWrapper *sipPySelf;

private:
    sipFragmentDistanceCollector(const sipFragmentDistanceCollector &);
    sipFragmentDistanceCollector &operator = (const sipFragmentDistanceCollector &);

    sipMethodCache sipPyMethods[2];
};

#endif
