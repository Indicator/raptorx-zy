/*
 * Interface header file.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#ifndef _BALLModifyRepresentationDialog_h
#define _BALLModifyRepresentationDialog_h

#line 11 "modifyRepresentationDialog.sip"
	#include <BALL/VIEW/DIALOGS/modifyRepresentationDialog.h>
	using namespace BALL;
	using namespace BALL::VIEW;
#line 18 "sipBALLModifyRepresentationDialog.h"

#define sipClass_ModifyRepresentationDialog             sipModuleAPI_BALL.em_types[214]
#define sipCast_ModifyRepresentationDialog              sipType_BALL_ModifyRepresentationDialog.td_cast
#define sipForceConvertTo_ModifyRepresentationDialog    sipType_BALL_ModifyRepresentationDialog.td_fcto

extern sipTypeDef sipType_BALL_ModifyRepresentationDialog;


class sipModifyRepresentationDialog : public ModifyRepresentationDialog
{
public:
    sipModifyRepresentationDialog();
    sipModifyRepresentationDialog(const ModifyRepresentationDialog&);
    virtual ~sipModifyRepresentationDialog() throw();

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
    sipModifyRepresentationDialog(const sipModifyRepresentationDialog &);
    sipModifyRepresentationDialog &operator = (const sipModifyRepresentationDialog &);

    sipMethodCache sipPyMethods[11];
};

#endif
