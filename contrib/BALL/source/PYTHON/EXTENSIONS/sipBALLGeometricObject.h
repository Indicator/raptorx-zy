/*
 * Interface header file.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#ifndef _BALLGeometricObject_h
#define _BALLGeometricObject_h

#line 10 "geometricObject.sip"
	#include <BALL/VIEW/KERNEL/geometricObject.h>
	#include <BALL/VIEW/PRIMITIVES/gridVisualisation.h>
	#include <BALL/VIEW/PRIMITIVES/box.h>
	#include <BALL/VIEW/PRIMITIVES/disc.h>
	#include <BALL/VIEW/PRIMITIVES/label.h>
	#include <BALL/VIEW/PRIMITIVES/line.h>
	#include <BALL/VIEW/PRIMITIVES/mesh.h>
	#include <BALL/VIEW/PRIMITIVES/point.h>
	#include <BALL/VIEW/PRIMITIVES/simpleBox.h>
	#include <BALL/VIEW/PRIMITIVES/sphere.h>
	#include <BALL/VIEW/PRIMITIVES/tube.h>
	#include <BALL/VIEW/PRIMITIVES/twoColoredLine.h>
	#include <BALL/VIEW/PRIMITIVES/twoColoredTube.h>
	#include <BALL/VIEW/PRIMITIVES/multiLine.h>
	#include <BALL/VIEW/PRIMITIVES/quadMesh.h>

	using namespace BALL;
	using namespace BALL::VIEW;
#line 33 "sipBALLGeometricObject.h"

#define sipClass_GeometricObject             sipModuleAPI_BALL.em_types[41]
#define sipCast_GeometricObject              sipType_BALL_GeometricObject.td_cast
#define sipForceConvertTo_GeometricObject    sipType_BALL_GeometricObject.td_fcto

extern sipTypeDef sipType_BALL_GeometricObject;


class sipGeometricObject : public GeometricObject
{
public:
    sipGeometricObject() throw();
    sipGeometricObject(const GeometricObject&) throw();
    virtual ~sipGeometricObject() throw();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    void clear() throw();
    bool isValid() const throw();

public:
    sipWrapper *sipPySelf;

private:
    sipGeometricObject(const sipGeometricObject &);
    sipGeometricObject &operator = (const sipGeometricObject &);

    sipMethodCache sipPyMethods[2];
};

#endif
