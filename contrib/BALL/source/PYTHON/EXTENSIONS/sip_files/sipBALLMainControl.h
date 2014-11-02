/*
 * Interface header file.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#ifndef _BALLMainControl_h
#define _BALLMainControl_h

#line 13 "mainControl.sip"
	#include <BALL/VIEW/KERNEL/mainControl.h>
	using namespace BALL;
	using namespace BALL::VIEW;
#line 18 "sipBALLMainControl.h"

#define sipClass_MainControl             sipModuleAPI_BALL.em_types[217]
#define sipCast_MainControl              sipType_BALL_MainControl.td_cast
#define sipForceConvertTo_MainControl    sipType_BALL_MainControl.td_fcto

extern sipTypeDef sipType_BALL_MainControl;


class sipMainControl : public MainControl
{
public:
    sipMainControl(const MainControl&) throw();
    virtual ~sipMainControl() throw();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    void clear() throw();
    void show();
    void checkMenus();
    void aboutToExit();
    void quit(int);
    bool isAboutToQuit();
    void resize(int,int);
    void openFile(const String&) throw();
    void registerThis() throw();

public:
    sipWrapper *sipPySelf;

private:
    sipMainControl(const sipMainControl &);
    sipMainControl &operator = (const sipMainControl &);

    sipMethodCache sipPyMethods[9];
};

#endif
