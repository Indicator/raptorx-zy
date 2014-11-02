/*
 * Interface header file.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#ifndef _BALLSDFile_h
#define _BALLSDFile_h

#line 11 "SDFile.sip"
	#include <BALL/FORMAT/SDFile.h>
  #include <BALL/COMMON/exception.h>
	using namespace BALL;
	using namespace BALL::Exception;
#line 19 "sipBALLSDFile.h"

#define sipClass_SDFile             sipModuleAPI_BALL.em_types[170]
#define sipCast_SDFile              sipType_BALL_SDFile.td_cast
#define sipForceConvertTo_SDFile    sipType_BALL_SDFile.td_fcto

extern sipTypeDef sipType_BALL_SDFile;


class sipSDFile : public SDFile
{
public:
    sipSDFile();
    sipSDFile(String&,OpenMode) throw(FileNotFound);
    sipSDFile(const SDFile&);
    virtual ~sipSDFile() throw();

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
    sipSDFile(const sipSDFile &);
    sipSDFile &operator = (const sipSDFile &);

    sipMethodCache sipPyMethods[8];
};

#endif
