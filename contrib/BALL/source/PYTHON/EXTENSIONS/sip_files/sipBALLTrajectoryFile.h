/*
 * Interface header file.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#ifndef _BALLTrajectoryFile_h
#define _BALLTrajectoryFile_h

#line 11 "trajectoryFile.sip"
	#include <BALL/FORMAT/trajectoryFile.h>
	using namespace BALL;
	using namespace BALL::Exception;
#line 18 "sipBALLTrajectoryFile.h"

#define sipClass_TrajectoryFile             sipModuleAPI_BALL.em_types[174]
#define sipCast_TrajectoryFile              sipType_BALL_TrajectoryFile.td_cast
#define sipForceConvertTo_TrajectoryFile    sipType_BALL_TrajectoryFile.td_fcto

extern sipTypeDef sipType_BALL_TrajectoryFile;


class sipTrajectoryFile : public TrajectoryFile
{
public:
    sipTrajectoryFile() throw();
    sipTrajectoryFile(const TrajectoryFile&) throw();
    sipTrajectoryFile(const String&,OpenMode) throw(FileNotFound);
    virtual ~sipTrajectoryFile() throw();

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
    sipTrajectoryFile(const sipTrajectoryFile &);
    sipTrajectoryFile &operator = (const sipTrajectoryFile &);

    sipMethodCache sipPyMethods[5];
};

#endif
