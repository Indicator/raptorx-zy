/*
 * Interface header file.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#ifndef _BALLLogView_h
#define _BALLLogView_h

#line 11 "logView.sip"
	#include <BALL/VIEW/WIDGETS/logView.h>
	using namespace BALL;
	using namespace BALL::VIEW;
#line 18 "sipBALLLogView.h"

#define sipClass_LogView             sipModuleAPI_BALL.em_types[210]
#define sipCast_LogView              sipType_BALL_LogView.td_cast
#define sipForceConvertTo_LogView    sipType_BALL_LogView.td_fcto

extern sipTypeDef sipType_BALL_LogView;


class sipLogView : public LogView
{
public:
    sipLogView() throw();
    sipLogView(const LogView&);
    virtual ~sipLogView() throw();

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
    sipLogView(const sipLogView &);
    sipLogView &operator = (const sipLogView &);

    sipMethodCache sipPyMethods[11];
};

#endif
