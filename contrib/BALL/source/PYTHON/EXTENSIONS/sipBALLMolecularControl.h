/*
 * Interface header file.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#ifndef _BALLMolecularControl_h
#define _BALLMolecularControl_h

#line 11 "molecularControl.sip"
	#include <BALL/VIEW/WIDGETS/molecularControl.h>
	using namespace BALL;
	using namespace BALL::VIEW;
#line 18 "sipBALLMolecularControl.h"

#define sipClass_MolecularControl             sipModuleAPI_BALL.em_types[212]
#define sipCast_MolecularControl              sipType_BALL_MolecularControl.td_cast
#define sipForceConvertTo_MolecularControl    sipType_BALL_MolecularControl.td_fcto

extern sipTypeDef sipType_BALL_MolecularControl;


class sipMolecularControl : public MolecularControl
{
public:
    sipMolecularControl() throw();
    sipMolecularControl(const MolecularControl&);
    virtual ~sipMolecularControl() throw();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    void updateContextMenu(Composite&) throw();
    void initializeWidget(MainControl&) throw();
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
    sipMolecularControl(const sipMolecularControl &);
    sipMolecularControl &operator = (const sipMolecularControl &);

    sipMethodCache sipPyMethods[13];
};

#endif
