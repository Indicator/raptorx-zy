/*
 * Interface header file.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#ifndef _BALLTRRFile_h
#define _BALLTRRFile_h

#line 10 "TRRFile.sip"
	#include <BALL/FORMAT/TRRFile.h>
  #include <BALL/COMMON/exception.h>
	using namespace BALL;
	using namespace BALL::Exception;
#line 19 "sipBALLTRRFile.h"

#define sipClass_TRRFile             sipModuleAPI_BALL.em_types[175]
#define sipCast_TRRFile              sipType_BALL_TRRFile.td_cast
#define sipForceConvertTo_TRRFile    sipType_BALL_TRRFile.td_fcto

extern sipTypeDef sipType_BALL_TRRFile;


class sipTRRFile : public TRRFile
{
public:
    sipTRRFile() throw();
    sipTRRFile(const TRRFile&) throw(FileNotFound);
    sipTRRFile(const String&,OpenMode) throw();
    virtual ~sipTRRFile() throw();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    void clear() throw();
    bool init() throw();
    bool writeNextHeader(const TRRFile::TRRHeader&) throw();
    bool readNextHeader(TRRFile::TRRHeader&) throw();
    bool append(const SnapShot&) throw();
    bool read(SnapShot&) throw();
    TRRFile& operator>>(SnapShotManager&) throw();
    bool readHeader() throw();
    bool writeHeader() throw();

public:
    sipWrapper *sipPySelf;

private:
    sipTRRFile(const sipTRRFile &);
    sipTRRFile &operator = (const sipTRRFile &);

    sipMethodCache sipPyMethods[9];
};

#endif
