/*
 * Interface header file.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#ifndef _BALLDisplayProperties_h
#define _BALLDisplayProperties_h

#line 11 "displayProperties.sip"
	#include <BALL/VIEW/DIALOGS/displayProperties.h>
	using namespace BALL;
	using namespace BALL::VIEW;
#line 18 "sipBALLDisplayProperties.h"

#define sipClass_DisplayProperties             sipModuleAPI_BALL.em_types[216]
#define sipCast_DisplayProperties              sipType_BALL_DisplayProperties.td_cast
#define sipForceConvertTo_DisplayProperties    sipType_BALL_DisplayProperties.td_fcto

extern sipTypeDef sipType_BALL_DisplayProperties;


class sipDisplayProperties : public DisplayProperties
{
public:
    sipDisplayProperties();
    sipDisplayProperties(const DisplayProperties&);
    virtual ~sipDisplayProperties() throw();

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
    sipDisplayProperties(const sipDisplayProperties &);
    sipDisplayProperties &operator = (const sipDisplayProperties &);

    sipMethodCache sipPyMethods[11];
};

#endif
