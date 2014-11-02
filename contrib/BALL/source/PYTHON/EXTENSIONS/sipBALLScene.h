/*
 * Interface header file.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#ifndef _BALLScene_h
#define _BALLScene_h

#line 11 "scene.sip"
	#include <BALL/VIEW/WIDGETS/scene.h>
	using namespace BALL;
	using namespace BALL::VIEW;
#line 18 "sipBALLScene.h"

#define sipClass_Scene             sipModuleAPI_BALL.em_types[201]
#define sipCast_Scene              sipType_BALL_Scene.td_cast
#define sipForceConvertTo_Scene    sipType_BALL_Scene.td_fcto

extern sipTypeDef sipType_BALL_Scene;


class sipScene : public Scene
{
public:
    sipScene() throw();
    sipScene(const Scene&);
    virtual ~sipScene() throw();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    void onNotify(Message *) throw();
    bool exportScene(Renderer&) const throw();
    void initializeWidget(MainControl&) throw();
    void fetchPreferences(INIFile&) throw();
    void writePreferences(INIFile&) throw();
    void checkMenu(MainControl&) throw();
    bool isValid() const throw();
    void applyPreferences() throw();
    void setWidgetVisible(bool);
    void switchShowWidget() throw();
    void registerThis() throw();

public:
    sipWrapper *sipPySelf;

private:
    sipScene(const sipScene &);
    sipScene &operator = (const sipScene &);

    sipMethodCache sipPyMethods[11];
};

#endif
