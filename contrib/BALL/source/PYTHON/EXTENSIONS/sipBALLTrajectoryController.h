/*
 * Interface header file.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#ifndef _BALLTrajectoryController_h
#define _BALLTrajectoryController_h

#line 47 "standardDatasets.sip"
	#include <BALL/VIEW/DATATYPE/standardDatasets.h>
	using namespace BALL;
	using namespace BALL::VIEW;
#line 18 "sipBALLTrajectoryController.h"

#define sipClass_TrajectoryController             sipModuleAPI_BALL.em_types[204]
#define sipCast_TrajectoryController              sipType_BALL_TrajectoryController.td_cast
#define sipForceConvertTo_TrajectoryController    sipType_BALL_TrajectoryController.td_fcto

extern sipTypeDef sipType_BALL_TrajectoryController;


class sipTrajectoryController : public TrajectoryController
{
public:
    sipTrajectoryController();
    sipTrajectoryController(TrajectoryController&);
    virtual ~sipTrajectoryController() throw();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    bool write(Dataset *,String,String);
    Dataset * open(String,String);
    bool insertDataset(Dataset *);
    bool deleteDataset(Dataset *);
    bool createMenuEntries();
    void checkMenu(MainControl&);
    bool write();
    bool open();
    bool deleteDatasets();
    bool deleteDataset();
    void registerThis() throw();

public:
    sipWrapper *sipPySelf;

private:
    sipTrajectoryController(const sipTrajectoryController &);
    sipTrajectoryController &operator = (const sipTrajectoryController &);

    sipMethodCache sipPyMethods[11];
};

#endif
