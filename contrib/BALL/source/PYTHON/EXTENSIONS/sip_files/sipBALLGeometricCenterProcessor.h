/*
 * Interface header file.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#ifndef _BALLGeometricCenterProcessor_h
#define _BALLGeometricCenterProcessor_h

#line 34 "geometricProperties.sip"
	#include <BALL/STRUCTURE/geometricProperties.h>
	#include "sipBALLAtom.h"
	using namespace BALL;
	typedef UnaryProcessor<Atom> AtomProcessor;
#line 19 "sipBALLGeometricCenterProcessor.h"

#define sipClass_GeometricCenterProcessor             sipModuleAPI_BALL.em_types[110]
#define sipCast_GeometricCenterProcessor              sipType_BALL_GeometricCenterProcessor.td_cast
#define sipForceConvertTo_GeometricCenterProcessor    sipType_BALL_GeometricCenterProcessor.td_fcto

extern sipTypeDef sipType_BALL_GeometricCenterProcessor;


class sipGeometricCenterProcessor : public GeometricCenterProcessor
{
public:
    sipGeometricCenterProcessor();
    sipGeometricCenterProcessor(const GeometricCenterProcessor&);
    virtual ~sipGeometricCenterProcessor();

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
    sipGeometricCenterProcessor(const sipGeometricCenterProcessor &);
    sipGeometricCenterProcessor &operator = (const sipGeometricCenterProcessor &);

    sipMethodCache sipPyMethods[2];
};

#endif
