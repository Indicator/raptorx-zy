/*
 * Interface header file.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#ifndef _BALLPDBFile_h
#define _BALLPDBFile_h

#line 10 "PDBFile.sip"
	#include <BALL/FORMAT/PDBFile.h>
  #include <BALL/COMMON/exception.h>
	using namespace BALL;
	using namespace BALL::Exception;
#line 19 "sipBALLPDBFile.h"

#define sipClass_PDBFile             sipModuleAPI_BALL.em_types[161]
#define sipCast_PDBFile              sipType_BALL_PDBFile.td_cast
#define sipForceConvertTo_PDBFile    sipType_BALL_PDBFile.td_fcto

extern sipTypeDef sipType_BALL_PDBFile;


class sipPDBFile : public PDBFile
{
public:
    sipPDBFile();
    sipPDBFile(const String&,OpenMode) throw(FileNotFound);
    sipPDBFile(const PDBFile&);
    virtual ~sipPDBFile() throw();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    bool read(Protein&) throw(ParseError);
    bool read(Molecule&) throw(ParseError);
    bool read(System&) throw(ParseError);
    bool write(const Protein&) throw(File::CannotWrite);
    bool write(const Molecule&) throw(File::CannotWrite);
    bool write(const System&) throw(File::CannotWrite);

public:
    sipWrapper *sipPySelf;

private:
    sipPDBFile(const sipPDBFile &);
    sipPDBFile &operator = (const sipPDBFile &);

    sipMethodCache sipPyMethods[6];
};

#endif
