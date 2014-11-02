/*
 * Interface header file.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#ifndef _BALLDatasetController_h
#define _BALLDatasetController_h

#line 34 "dataset.sip"
	#include <BALL/VIEW/DATATYPE/dataset.h>
	using namespace BALL;
	using namespace BALL::VIEW;
#line 18 "sipBALLDatasetController.h"

#define sipClass_DatasetController             sipModuleAPI_BALL.em_types[203]
#define sipCast_DatasetController              sipType_BALL_DatasetController.td_cast
#define sipForceConvertTo_DatasetController    sipType_BALL_DatasetController.td_fcto

extern sipTypeDef sipType_BALL_DatasetController;


class sipDatasetController : public DatasetController
{
public:
    sipDatasetController();
    sipDatasetController(DatasetController&);
    virtual ~sipDatasetController() throw();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
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
    sipDatasetController(const sipDatasetController &);
    sipDatasetController &operator = (const sipDatasetController &);

    sipMethodCache sipPyMethods[9];
};

#endif
