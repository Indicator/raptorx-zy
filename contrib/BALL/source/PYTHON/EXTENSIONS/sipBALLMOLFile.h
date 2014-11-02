/*
 * Interface header file.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#ifndef _BALLMOLFile_h
#define _BALLMOLFile_h

#line 11 "MOLFile.sip"
	#include <BALL/FORMAT/MOLFile.h>
	using namespace BALL;
	using namespace BALL::Exception;
#line 18 "sipBALLMOLFile.h"

#define sipClass_MOLFile             sipModuleAPI_BALL.em_types[171]
#define sipCast_MOLFile              sipType_BALL_MOLFile.td_cast
#define sipForceConvertTo_MOLFile    sipType_BALL_MOLFile.td_fcto

extern sipTypeDef sipType_BALL_MOLFile;


class sipMOLFile : public MOLFile
{
public:
    sipMOLFile();
    sipMOLFile(String&,OpenMode) throw(FileNotFound);
    sipMOLFile(const MOLFile&);
    virtual ~sipMOLFile() throw();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    bool write(const System&) throw(File::CannotWrite);
    bool write(const Molecule&) throw(File::CannotWrite);
    bool read(System&) throw(ParseError);
    Molecule * read() throw(ParseError);
    GenericMolFile& operator>>(System&) throw(ParseError);
    GenericMolFile& operator<<(const System&) throw(File::CannotWrite);
    GenericMolFile& operator>>(Molecule&) throw(ParseError);
    GenericMolFile& operator<<(const Molecule&) throw(File::CannotWrite);

public:
    sipWrapper *sipPySelf;

private:
    sipMOLFile(const sipMOLFile &);
    sipMOLFile &operator = (const sipMOLFile &);

    sipMethodCache sipPyMethods[8];
};

#endif
