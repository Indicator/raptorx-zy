/*
 * Interface header file.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#ifndef _BALLBoundingBoxProcessor_h
#define _BALLBoundingBoxProcessor_h

#line 12 "geometricProperties.sip"
	#include <BALL/STRUCTURE/geometricProperties.h>
	#include "sipBALLAtom.h"
	using namespace BALL;
	typedef UnaryProcessor<Atom> AtomProcessor;
#line 19 "sipBALLBoundingBoxProcessor.h"

#define sipClass_BoundingBoxProcessor             sipModuleAPI_BALL.em_types[111]
#define sipCast_BoundingBoxProcessor              sipType_BALL_BoundingBoxProcessor.td_cast
#define sipForceConvertTo_BoundingBoxProcessor    sipType_BALL_BoundingBoxProcessor.td_fcto

extern sipTypeDef sipType_BALL_BoundingBoxProcessor;


class sipBoundingBoxProcessor : public BoundingBoxProcessor
{
public:
    sipBoundingBoxProcessor();
    sipBoundingBoxProcessor(const BoundingBoxProcessor&);
    virtual ~sipBoundingBoxProcessor();

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
    sipBoundingBoxProcessor(const sipBoundingBoxProcessor &);
    sipBoundingBoxProcessor &operator = (const sipBoundingBoxProcessor &);

    sipMethodCache sipPyMethods[2];
};

#endif
