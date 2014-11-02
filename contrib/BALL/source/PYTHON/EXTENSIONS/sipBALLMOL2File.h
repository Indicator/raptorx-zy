/*
 * Interface header file.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#ifndef _BALLMOL2File_h
#define _BALLMOL2File_h

#line 11 "MOL2File.sip"
	#include <BALL/FORMAT/MOL2File.h>
	using namespace BALL;
	using namespace BALL::Exception;
#line 18 "sipBALLMOL2File.h"

#define sipClass_MOL2File             sipModuleAPI_BALL.em_types[167]
#define sipCast_MOL2File              sipType_BALL_MOL2File.td_cast
#define sipForceConvertTo_MOL2File    sipType_BALL_MOL2File.td_fcto

extern sipTypeDef sipType_BALL_MOL2File;


class sipMOL2File : public MOL2File
{
public:
    sipMOL2File();
    sipMOL2File(const String&,OpenMode) throw(FileNotFound);
    sipMOL2File(const MOL2File&);
    virtual ~sipMOL2File() throw();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    bool write(const System&) throw(File::CannotWrite);
    bool read(System&) throw(ParseError);

public:
    sipWrapper *sipPySelf;

private:
    sipMOL2File(const sipMOL2File &);
    sipMOL2File &operator = (const sipMOL2File &);

    sipMethodCache sipPyMethods[2];
};

#endif
