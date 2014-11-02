/*
 * Interface header file.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#ifndef _BALLMolecularStructure_h
#define _BALLMolecularStructure_h

#line 11 "molecularStructure.sip"
	#include <BALL/VIEW/WIDGETS/molecularStructure.h>
	using namespace BALL;
	using namespace BALL::VIEW;
#line 18 "sipBALLMolecularStructure.h"

#define sipClass_MolecularStructure             sipModuleAPI_BALL.em_types[207]
#define sipCast_MolecularStructure              sipType_BALL_MolecularStructure.td_cast
#define sipForceConvertTo_MolecularStructure    sipType_BALL_MolecularStructure.td_fcto

extern sipTypeDef sipType_BALL_MolecularStructure;


class sipMolecularStructure : public MolecularStructure
{
public:
    sipMolecularStructure();
    sipMolecularStructure(const MolecularStructure&);
    virtual ~sipMolecularStructure() throw();

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
    sipMolecularStructure(const sipMolecularStructure &);
    sipMolecularStructure &operator = (const sipMolecularStructure &);

    sipMethodCache sipPyMethods[11];
};

#endif
