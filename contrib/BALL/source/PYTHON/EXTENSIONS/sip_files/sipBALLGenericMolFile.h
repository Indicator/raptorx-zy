/*
 * Interface header file.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#ifndef _BALLGenericMolFile_h
#define _BALLGenericMolFile_h

#line 11 "genericMolFile.sip"
	#include <BALL/FORMAT/genericMolFile.h>
	using namespace BALL;
	using namespace BALL::Exception;
#line 18 "sipBALLGenericMolFile.h"

#define sipClass_GenericMolFile             sipModuleAPI_BALL.em_types[169]
#define sipCast_GenericMolFile              sipType_BALL_GenericMolFile.td_cast
#define sipForceConvertTo_GenericMolFile    sipType_BALL_GenericMolFile.td_fcto

extern sipTypeDef sipType_BALL_GenericMolFile;


class sipGenericMolFile : public GenericMolFile
{
public:
    sipGenericMolFile() throw();
    sipGenericMolFile(const String&,OpenMode) throw(FileNotFound);
    sipGenericMolFile(const GenericMolFile&) throw(FileNotFound);
    virtual ~sipGenericMolFile() throw();

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
    sipGenericMolFile(const sipGenericMolFile &);
    sipGenericMolFile &operator = (const sipGenericMolFile &);

    sipMethodCache sipPyMethods[8];
};

#endif
