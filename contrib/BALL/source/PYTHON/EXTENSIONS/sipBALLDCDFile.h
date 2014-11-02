/*
 * Interface header file.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#ifndef _BALLDCDFile_h
#define _BALLDCDFile_h

#line 11 "DCDFile.sip"
	#include <BALL/FORMAT/DCDFile.h>
	using namespace BALL;
	using namespace BALL::Exception;
#line 18 "sipBALLDCDFile.h"

#define sipClass_DCDFile             sipModuleAPI_BALL.em_types[177]
#define sipCast_DCDFile              sipType_BALL_DCDFile.td_cast
#define sipForceConvertTo_DCDFile    sipType_BALL_DCDFile.td_fcto

extern sipTypeDef sipType_BALL_DCDFile;


class sipDCDFile : public DCDFile
{
public:
    sipDCDFile() throw();
    sipDCDFile(const DCDFile&) throw(FileNotFound);
    sipDCDFile(const String&,OpenMode) throw(FileNotFound);
    virtual ~sipDCDFile() throw();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    void clear() throw();
    bool readHeader() throw();
    bool writeHeader() throw();
    bool append(const SnapShot&) throw();
    bool read(SnapShot&) throw();

public:
    sipWrapper *sipPySelf;

private:
    sipDCDFile(const sipDCDFile &);
    sipDCDFile &operator = (const sipDCDFile &);

    sipMethodCache sipPyMethods[5];
};

#endif
