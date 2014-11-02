/*
 * Interface header file.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#ifndef _BALLSnapShotManager_h
#define _BALLSnapShotManager_h

#line 10 "snapShotManager.sip"
  #include <BALL/CONCEPT/processor.h>
	#include <BALL/MOLMEC/COMMON/snapShotManager.h>
  #include <BALL/SYSTEM/file.h>
  using namespace BALL;
#line 19 "sipBALLSnapShotManager.h"

#define sipClass_SnapShotManager             sipModuleAPI_BALL.em_types[100]
#define sipCast_SnapShotManager              sipType_BALL_SnapShotManager.td_cast
#define sipForceConvertTo_SnapShotManager    sipType_BALL_SnapShotManager.td_fcto

extern sipTypeDef sipType_BALL_SnapShotManager;


class sipSnapShotManager : public SnapShotManager
{
public:
    sipSnapShotManager() throw();
    sipSnapShotManager(System *,const ForceField *,TrajectoryFile *) throw();
    sipSnapShotManager(System *,const ForceField *,const Options&,TrajectoryFile *) throw();
    sipSnapShotManager(const SnapShotManager&) throw();
    virtual ~sipSnapShotManager() throw();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    bool setup() throw();
    void clear() throw();
    bool isValid() const throw();
    void takeSnapShot() throw(File::CannotWrite);
    bool applySnapShot(int) throw();
    bool applyFirstSnapShot() throw();
    bool applyNextSnapShot() throw();
    bool applyLastSnapShot() throw();
    void flushToDisk() throw(File::CannotWrite);

public:
    sipWrapper *sipPySelf;

private:
    sipSnapShotManager(const sipSnapShotManager &);
    sipSnapShotManager &operator = (const sipSnapShotManager &);

    sipMethodCache sipPyMethods[9];
};

#endif
