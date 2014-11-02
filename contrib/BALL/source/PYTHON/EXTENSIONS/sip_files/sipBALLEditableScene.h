/*
 * Interface header file.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#ifndef _BALLEditableScene_h
#define _BALLEditableScene_h

#line 11 "editableScene.sip"
	#include <BALL/VIEW/WIDGETS/editableScene.h>
	using namespace BALL;
	using namespace BALL::VIEW;
#line 18 "sipBALLEditableScene.h"

#define sipClass_EditableScene             sipModuleAPI_BALL.em_types[202]
#define sipCast_EditableScene              sipType_BALL_EditableScene.td_cast
#define sipForceConvertTo_EditableScene    sipType_BALL_EditableScene.td_fcto

extern sipTypeDef sipType_BALL_EditableScene;


class sipEditableScene : public EditableScene
{
public:
    sipEditableScene() throw();
    sipEditableScene(const EditableScene&);
    virtual ~sipEditableScene() throw();

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
    sipEditableScene(const sipEditableScene &);
    sipEditableScene &operator = (const sipEditableScene &);

    sipMethodCache sipPyMethods[11];
};

#endif
