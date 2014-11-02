/*
 * Interface header file.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#ifndef _BALLMolecularFileDialog_h
#define _BALLMolecularFileDialog_h

#line 11 "molecularFileDialog.sip"
	#include <BALL/VIEW/DIALOGS/molecularFileDialog.h>
	using namespace BALL;
	using namespace BALL::VIEW;
#line 18 "sipBALLMolecularFileDialog.h"

#define sipClass_MolecularFileDialog             sipModuleAPI_BALL.em_types[215]
#define sipCast_MolecularFileDialog              sipType_BALL_MolecularFileDialog.td_cast
#define sipForceConvertTo_MolecularFileDialog    sipType_BALL_MolecularFileDialog.td_fcto

extern sipTypeDef sipType_BALL_MolecularFileDialog;


class sipMolecularFileDialog : public MolecularFileDialog
{
public:
    sipMolecularFileDialog();
    sipMolecularFileDialog(const MolecularFileDialog&);
    virtual ~sipMolecularFileDialog() throw();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    void initializeWidget(MainControl&) throw();
    void readFiles();
    System * openMolecularFile(const String&) throw();
    System * openMolecularFile(const String&,const String&,const String&) throw();
    bool writeFile();
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
    sipMolecularFileDialog(const sipMolecularFileDialog &);
    sipMolecularFileDialog &operator = (const sipMolecularFileDialog &);

    sipMethodCache sipPyMethods[16];
};

#endif
