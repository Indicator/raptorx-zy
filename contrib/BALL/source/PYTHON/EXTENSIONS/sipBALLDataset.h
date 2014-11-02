/*
 * Interface header file.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#ifndef _BALLDataset_h
#define _BALLDataset_h

#line 10 "dataset.sip"
	#include <BALL/VIEW/DATATYPE/dataset.h>
	using namespace BALL;
	using namespace BALL::VIEW;
#line 18 "sipBALLDataset.h"

#define sipClass_Dataset             sipModuleAPI_BALL.em_types[31]
#define sipCast_Dataset              sipType_BALL_Dataset.td_cast
#define sipForceConvertTo_Dataset    sipType_BALL_Dataset.td_fcto

extern sipTypeDef sipType_BALL_Dataset;


class sipDataset : public Dataset
{
public:
    sipDataset();
    sipDataset(const Dataset&);
    virtual ~sipDataset();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    void clear();

public:
    sipWrapper *sipPySelf;

private:
    sipDataset(const sipDataset &);
    sipDataset &operator = (const sipDataset &);

    sipMethodCache sipPyMethods[1];
};

#endif
