/*
 * Interface header file.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#ifndef _BALLRegularData3DController_h
#define _BALLRegularData3DController_h

#line 11 "standardDatasets.sip"
	#include <BALL/VIEW/DATATYPE/standardDatasets.h>
	using namespace BALL;
	using namespace BALL::VIEW;
#line 18 "sipBALLRegularData3DController.h"

#define sipClass_RegularData3DController             sipModuleAPI_BALL.em_types[205]
#define sipCast_RegularData3DController              sipType_BALL_RegularData3DController.td_cast
#define sipForceConvertTo_RegularData3DController    sipType_BALL_RegularData3DController.td_fcto

extern sipTypeDef sipType_BALL_RegularData3DController;


class sipRegularData3DController : public RegularData3DController
{
public:
    sipRegularData3DController();
    sipRegularData3DController(RegularData3DController&);
    virtual ~sipRegularData3DController() throw();

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
    sipRegularData3DController(const sipRegularData3DController &);
    sipRegularData3DController &operator = (const sipRegularData3DController &);

    sipMethodCache sipPyMethods[11];
};

#endif
