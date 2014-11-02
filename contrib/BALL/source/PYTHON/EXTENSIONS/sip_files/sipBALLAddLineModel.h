/*
 * Interface header file.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#ifndef _BALLAddLineModel_h
#define _BALLAddLineModel_h

#line 11 "lineModel.sip"
	#include <BALL/VIEW/MODELS/lineModel.h>
	using namespace BALL;
	using namespace BALL::VIEW;
#line 18 "sipBALLAddLineModel.h"

#define sipClass_AddLineModel             sipModuleAPI_BALL.em_types[14]
#define sipCast_AddLineModel              sipType_BALL_AddLineModel.td_cast
#define sipForceConvertTo_AddLineModel    sipType_BALL_AddLineModel.td_fcto

extern sipTypeDef sipType_BALL_AddLineModel;


class sipAddLineModel : public AddLineModel
{
public:
    sipAddLineModel() throw();
    sipAddLineModel(const AddLineModel&) throw();
    virtual ~sipAddLineModel() throw();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    void clear() throw();
    void clearComposites() throw();
    bool createGeometricObjects() throw();
    bool isValid() const throw();

public:
    sipWrapper *sipPySelf;

private:
    sipAddLineModel(const sipAddLineModel &);
    sipAddLineModel &operator = (const sipAddLineModel &);

    sipMethodCache sipPyMethods[4];
};

#endif
