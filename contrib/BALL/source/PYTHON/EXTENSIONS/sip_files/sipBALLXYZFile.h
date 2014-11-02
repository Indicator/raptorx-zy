/*
 * Interface header file.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#ifndef _BALLXYZFile_h
#define _BALLXYZFile_h

#line 11 "XYZFile.sip"
	#include <BALL/FORMAT/XYZFile.h>
  #include <BALL/COMMON/exception.h>
	using namespace BALL;
	using namespace BALL::Exception;
#line 19 "sipBALLXYZFile.h"

#define sipClass_XYZFile             sipModuleAPI_BALL.em_types[166]
#define sipCast_XYZFile              sipType_BALL_XYZFile.td_cast
#define sipForceConvertTo_XYZFile    sipType_BALL_XYZFile.td_fcto

extern sipTypeDef sipType_BALL_XYZFile;


class sipXYZFile : public XYZFile
{
public:
    sipXYZFile();
    sipXYZFile(const String&,OpenMode) throw(FileNotFound);
    sipXYZFile(const XYZFile&);
    virtual ~sipXYZFile() throw();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    bool write(const System&) throw(File::CannotWrite);
    bool read(System&);

public:
    sipWrapper *sipPySelf;

private:
    sipXYZFile(const sipXYZFile &);
    sipXYZFile &operator = (const sipXYZFile &);

    sipMethodCache sipPyMethods[2];
};

#endif
