/*
 * Interface header file.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#ifndef _BALLServer_h
#define _BALLServer_h

#line 5 "server.sip"
	#include <BALL/VIEW/KERNEL/server.h>
	using namespace BALL;
	using namespace BALL::VIEW;
#line 23 "server.sip"
	#include <BALL/VIEW/KERNEL/server.h>
	using namespace BALL;
	using namespace BALL::VIEW;
#line 22 "sipBALLServer.h"

#define sipClass_Server             sipModuleAPI_BALL.em_types[241]
#define sipCast_Server              sipType_BALL_Server.td_cast
#define sipForceConvertTo_Server    sipType_BALL_Server.td_fcto

extern sipTypeDef sipType_BALL_Server;


class sipServer : public Server
{
public:
    sipServer();
    sipServer(const Server&);
    virtual ~sipServer() throw();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    void clear() throw();
    void initializeWidget(MainControl&) throw();
    void finalizeWidget(MainControl&) throw();
    void initializePreferencesTab(Preferences&) throw();
    void finalizePreferencesTab(Preferences&) throw();
    void applyPreferences() throw();
    bool isValid() const throw();
    void destroy() throw();
    void checkMenu(MainControl&) throw();
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
    sipServer(const sipServer &);
    sipServer &operator = (const sipServer &);

    sipMethodCache sipPyMethods[16];
};

#endif
