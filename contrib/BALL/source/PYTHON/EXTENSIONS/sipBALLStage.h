/*
 * Interface header file.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#ifndef _BALLStage_h
#define _BALLStage_h

#line 82 "stage.sip"
	#include <BALL/VIEW/KERNEL/stage.h>
	using namespace BALL;
	using namespace BALL::VIEW;
#line 18 "sipBALLStage.h"

#define sipClass_Stage             sipModuleAPI_BALL.em_types[53]
#define sipCast_Stage              sipType_BALL_Stage.td_cast
#define sipForceConvertTo_Stage    sipType_BALL_Stage.td_fcto

extern sipTypeDef sipType_BALL_Stage;


class sipStage : public Stage
{
public:
    sipStage() throw();
    sipStage(const Stage&) throw();
    virtual ~sipStage() throw();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    void clear() throw();
    void addLightSource(const LightSource&) throw();
    void removeLightSource(const LightSource&) throw();
    Camera& getCamera() throw();
    void setCamera(const Camera&) throw();
    const ColorRGBA& getBackgroundColor() const throw();
    void setBackgroundColor(const ColorRGBA&) throw();
    void showCoordinateSystem(bool) throw();

public:
    sipWrapper *sipPySelf;

private:
    sipStage(const sipStage &);
    sipStage &operator = (const sipStage &);

    sipMethodCache sipPyMethods[8];
};

#endif
