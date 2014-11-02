/*
 * Interface header file.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#ifndef _BALLDatasetControl_h
#define _BALLDatasetControl_h

#line 11 "datasetControl.sip"
	#include <BALL/VIEW/WIDGETS/datasetControl.h>
	#include <BALL/PYTHON/pyDatasetVector.h>
	using namespace BALL;
	using namespace BALL::VIEW;
#line 19 "sipBALLDatasetControl.h"

#define sipClass_DatasetControl             sipModuleAPI_BALL.em_types[209]
#define sipCast_DatasetControl              sipType_BALL_DatasetControl.td_cast
#define sipForceConvertTo_DatasetControl    sipType_BALL_DatasetControl.td_fcto

extern sipTypeDef sipType_BALL_DatasetControl;


class sipDatasetControl : public DatasetControl
{
public:
    sipDatasetControl() throw();
    sipDatasetControl(const DatasetControl&);
    virtual ~sipDatasetControl() throw();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    void destroy() throw();
    void clear() throw();
    void checkMenu(MainControl&) throw();
    void applyPreferences() throw();
    void fetchPreferences(INIFile&) throw();
    void writePreferences(INIFile&) throw();
    void setStatusbarText(String,bool) throw();
    void showHelp(const String&);
    bool canHandle(const String&) const;
    bool openFile(const String&);
    void registerThis() throw();

public:
    sipWrapper *sipPySelf;

private:
    sipDatasetControl(const sipDatasetControl &);
    sipDatasetControl &operator = (const sipDatasetControl &);

    sipMethodCache sipPyMethods[11];
};

#endif
