/*
 * Interface header file.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#ifndef _BALLLabelModel_h
#define _BALLLabelModel_h

#line 5 "labelModel.sip"
	#include <BALL/VIEW/MODELS/labelModel.h>
	using namespace BALL;
	using namespace BALL::VIEW;
#line 18 "sipBALLLabelModel.h"

#define sipClass_LabelModel             sipModuleAPI_BALL.em_types[5]
#define sipCast_LabelModel              sipType_BALL_LabelModel.td_cast
#define sipForceConvertTo_LabelModel    sipType_BALL_LabelModel.td_fcto

#define sipEnum_LabelModel_Mode              sipModuleAPI_BALL.em_enums[0]

extern sipTypeDef sipType_BALL_LabelModel;


class sipLabelModel : public LabelModel
{
public:
    sipLabelModel() throw();
    sipLabelModel(const LabelModel&) throw();
    virtual ~sipLabelModel() throw();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    bool createGeometricObjects() throw();
    void clear() throw();
    bool isValid() const throw();
    void clearComposites() throw();

public:
    sipWrapper *sipPySelf;

private:
    sipLabelModel(const sipLabelModel &);
    sipLabelModel &operator = (const sipLabelModel &);

    sipMethodCache sipPyMethods[4];
};

#endif
