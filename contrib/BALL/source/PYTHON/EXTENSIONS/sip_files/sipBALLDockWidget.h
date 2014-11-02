/*
 * Interface header file.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#ifndef _BALLDockWidget_h
#define _BALLDockWidget_h

#line 11 "dockWidget.sip"
	#include <BALL/VIEW/WIDGETS/dockWidget.h>
	using namespace BALL;
	using namespace BALL::VIEW;
#line 18 "sipBALLDockWidget.h"

#define sipClass_DockWidget             sipModuleAPI_BALL.em_types[208]
#define sipCast_DockWidget              sipType_BALL_DockWidget.td_cast
#define sipForceConvertTo_DockWidget    sipType_BALL_DockWidget.td_fcto

extern sipTypeDef sipType_BALL_DockWidget;


class sipDockWidget : public DockWidget
{
public:
    sipDockWidget();
    sipDockWidget(const DockWidget&);
    virtual ~sipDockWidget() throw();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    void destroy() throw();
    void clear() throw();
    void checkMenu(MainControl&) throw();
    void applyPreferences() throw();
    void fetchPreferences(INIFile&) throw();
    void writePreferences(INIFile&) throw();
    void setStatusbarText(String,bool) throw();
    void showHelp(const String&);
    bool canHandle(const String&) const;
    bool openFile(const String&);
    void registerThis() throw();

public:
    sipWrapper *sipPySelf;

private:
    sipDockWidget(const sipDockWidget &);
    sipDockWidget &operator = (const sipDockWidget &);

    sipMethodCache sipPyMethods[11];
};

#endif
