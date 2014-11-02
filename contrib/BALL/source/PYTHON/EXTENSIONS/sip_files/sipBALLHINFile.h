/*
 * Interface header file.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#ifndef _BALLHINFile_h
#define _BALLHINFile_h

#line 11 "HINFile.sip"
	#include <BALL/FORMAT/HINFile.h>
	using namespace BALL;
	using namespace BALL::Exception;
#line 18 "sipBALLHINFile.h"

#define sipClass_HINFile             sipModuleAPI_BALL.em_types[173]
#define sipCast_HINFile              sipType_BALL_HINFile.td_cast
#define sipForceConvertTo_HINFile    sipType_BALL_HINFile.td_fcto

extern sipTypeDef sipType_BALL_HINFile;


class sipHINFile : public HINFile
{
public:
    sipHINFile();
    sipHINFile(String&,OpenMode) throw(FileNotFound);
    sipHINFile(const HINFile&);
    virtual ~sipHINFile() throw();

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
    sipHINFile(const sipHINFile &);
    sipHINFile &operator = (const sipHINFile &);

    sipMethodCache sipPyMethods[8];
};

#endif
