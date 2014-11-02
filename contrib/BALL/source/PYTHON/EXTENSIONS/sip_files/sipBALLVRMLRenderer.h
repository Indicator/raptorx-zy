/*
 * Interface header file.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#ifndef _BALLVRMLRenderer_h
#define _BALLVRMLRenderer_h

#line 5 "VRMLRenderer.sip"
	#include <BALL/VIEW/RENDERING/VRMLRenderer.h>
	using namespace BALL;
	using namespace BALL::VIEW;
#line 18 "sipBALLVRMLRenderer.h"

#define sipClass_VRMLRenderer             sipModuleAPI_BALL.em_types[1]
#define sipCast_VRMLRenderer              sipType_BALL_VRMLRenderer.td_cast
#define sipForceConvertTo_VRMLRenderer    sipType_BALL_VRMLRenderer.td_fcto

extern sipTypeDef sipType_BALL_VRMLRenderer;


class sipVRMLRenderer : public VRMLRenderer
{
public:
    sipVRMLRenderer() throw();
    sipVRMLRenderer(const String&);
    sipVRMLRenderer(const VRMLRenderer&);
    virtual ~sipVRMLRenderer() throw();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    void clear() throw();
    bool init(const Stage&) throw();
    bool finish() throw();

public:
    sipWrapper *sipPySelf;

private:
    sipVRMLRenderer(const sipVRMLRenderer &);
    sipVRMLRenderer &operator = (const sipVRMLRenderer &);

    sipMethodCache sipPyMethods[3];
};

#endif
