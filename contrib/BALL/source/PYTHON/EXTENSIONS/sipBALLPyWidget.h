/*
 * Interface header file.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#ifndef _BALLPyWidget_h
#define _BALLPyWidget_h

#line 11 "pyWidget.sip"
	#include <BALL/VIEW/WIDGETS/pyWidget.h>
	using namespace BALL;
	using namespace BALL::VIEW;
#line 18 "sipBALLPyWidget.h"

#define sipClass_PyWidget             sipModuleAPI_BALL.em_types[213]
#define sipCast_PyWidget              sipType_BALL_PyWidget.td_cast
#define sipForceConvertTo_PyWidget    sipType_BALL_PyWidget.td_fcto

extern sipTypeDef sipType_BALL_PyWidget;


class sipPyWidget : public PyWidget
{
public:
    sipPyWidget() throw();
    sipPyWidget(const PyWidget&) throw();
    virtual ~sipPyWidget() throw();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    void initializeWidget(MainControl&) throw();
    void finalizeWidget(MainControl&) throw();
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
    sipPyWidget(const sipPyWidget &);
    sipPyWidget &operator = (const sipPyWidget &);

    sipMethodCache sipPyMethods[13];
};

#endif
