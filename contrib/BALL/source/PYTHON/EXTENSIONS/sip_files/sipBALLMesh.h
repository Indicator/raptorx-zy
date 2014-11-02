/*
 * Interface header file.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#ifndef _BALLMesh_h
#define _BALLMesh_h

#line 13 "mesh.sip"
	#include <BALL/VIEW/PRIMITIVES/mesh.h>
	#include <BALL/PYTHON/pyColorRGBAVector.h>
	using namespace BALL;
	using namespace BALL::VIEW;
#line 19 "sipBALLMesh.h"

#define sipClass_Mesh             sipModuleAPI_BALL.em_types[138]
#define sipCast_Mesh              sipType_BALL_Mesh.td_cast
#define sipForceConvertTo_Mesh    sipType_BALL_Mesh.td_fcto

extern sipTypeDef sipType_BALL_Mesh;


class sipMesh : public Mesh
{
public:
    sipMesh() throw();
    sipMesh(const Mesh&) throw();
    virtual ~sipMesh() throw();

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
    sipMesh(const sipMesh &);
    sipMesh &operator = (const sipMesh &);

    sipMethodCache sipPyMethods[2];
};

#endif
