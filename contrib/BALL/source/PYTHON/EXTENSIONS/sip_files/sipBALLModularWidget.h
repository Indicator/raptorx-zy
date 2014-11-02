/*
 * Interface header file.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#ifndef _BALLModularWidget_h
#define _BALLModularWidget_h

#line 12 "modularWidget.sip"
	#include <BALL/VIEW/KERNEL/modularWidget.h>
	using namespace BALL;
	using namespace BALL::VIEW;
#line 18 "sipBALLModularWidget.h"

#define sipClass_ModularWidget             sipModuleAPI_BALL.em_types[206]
#define sipCast_ModularWidget              sipType_BALL_ModularWidget.td_cast
#define sipForceConvertTo_ModularWidget    sipType_BALL_ModularWidget.td_fcto

extern sipTypeDef sipType_BALL_ModularWidget;


class sipModularWidget : public ModularWidget
{
public:
    sipModularWidget(const char *) throw();
    sipModularWidget(const ModularWidget&) throw();
    virtual ~sipModularWidget() throw();

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
    sipModularWidget(const sipModularWidget &);
    sipModularWidget &operator = (const sipModularWidget &);

    sipMethodCache sipPyMethods[11];
};

#endif
