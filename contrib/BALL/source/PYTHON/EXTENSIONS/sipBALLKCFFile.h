/*
 * Interface header file.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#ifndef _BALLKCFFile_h
#define _BALLKCFFile_h

#line 12 "KCFFile.sip"
	#include <BALL/FORMAT/KCFFile.h>
	using namespace BALL;
	using namespace BALL::Exception;
#line 18 "sipBALLKCFFile.h"

#define sipClass_KCFFile             sipModuleAPI_BALL.em_types[172]
#define sipCast_KCFFile              sipType_BALL_KCFFile.td_cast
#define sipForceConvertTo_KCFFile    sipType_BALL_KCFFile.td_fcto

extern sipTypeDef sipType_BALL_KCFFile;


class sipKCFFile : public KCFFile
{
public:
    sipKCFFile() throw();
    sipKCFFile(const String&,OpenMode) throw(FileNotFound);
    sipKCFFile(const KCFFile&) throw(FileNotFound);
    virtual ~sipKCFFile() throw();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    bool write(const Molecule&) throw(File::CannotWrite);
    bool write(const System&) throw(File::CannotWrite);
    bool read(System&) throw(ParseError);
    Molecule * read() throw(ParseError);
    GenericMolFile& operator>>(System&) throw(ParseError);
    GenericMolFile& operator<<(const System&) throw(File::CannotWrite);
    GenericMolFile& operator>>(Molecule&) throw(ParseError);
    GenericMolFile& operator<<(const Molecule&) throw(File::CannotWrite);

public:
    sipWrapper *sipPySelf;

private:
    sipKCFFile(const sipKCFFile &);
    sipKCFFile &operator = (const sipKCFFile &);

    sipMethodCache sipPyMethods[8];
};

#endif
