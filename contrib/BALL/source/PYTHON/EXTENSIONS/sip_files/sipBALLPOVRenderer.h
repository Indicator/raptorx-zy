/*
 * Interface header file.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#ifndef _BALLPOVRenderer_h
#define _BALLPOVRenderer_h

#line 11 "POVRenderer.sip"
	#include <BALL/VIEW/RENDERING/POVRenderer.h>
	using namespace BALL;
	using namespace BALL::VIEW;
	using namespace BALL::Exception;
#line 19 "sipBALLPOVRenderer.h"

#define sipClass_POVRenderer             sipModuleAPI_BALL.em_types[2]
#define sipCast_POVRenderer              sipType_BALL_POVRenderer.td_cast
#define sipForceConvertTo_POVRenderer    sipType_BALL_POVRenderer.td_fcto

extern sipTypeDef sipType_BALL_POVRenderer;


class sipPOVRenderer : public POVRenderer
{
public:
    sipPOVRenderer() throw();
    sipPOVRenderer(const String&) throw(FileNotFound);
    sipPOVRenderer(const POVRenderer&);
    virtual ~sipPOVRenderer() throw();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    bool init(const Stage&,float,float) throw();

public:
    sipWrapper *sipPySelf;

private:
    sipPOVRenderer(const sipPOVRenderer &);
    sipPOVRenderer &operator = (const sipPOVRenderer &);

    sipMethodCache sipPyMethods[1];
};

#endif
