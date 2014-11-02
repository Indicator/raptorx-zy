/*
 * Interface header file.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#ifndef _BALLAddBallAndStickModel_h
#define _BALLAddBallAndStickModel_h

#line 11 "ballAndStickModel.sip"
	#include <BALL/VIEW/MODELS/ballAndStickModel.h>
	using namespace BALL;
	using namespace BALL::VIEW;
#line 18 "sipBALLAddBallAndStickModel.h"

#define sipClass_AddBallAndStickModel             sipModuleAPI_BALL.em_types[12]
#define sipCast_AddBallAndStickModel              sipType_BALL_AddBallAndStickModel.td_cast
#define sipForceConvertTo_AddBallAndStickModel    sipType_BALL_AddBallAndStickModel.td_fcto

extern sipTypeDef sipType_BALL_AddBallAndStickModel;


class sipAddBallAndStickModel : public AddBallAndStickModel
{
public:
    sipAddBallAndStickModel() throw();
    sipAddBallAndStickModel(const AddBallAndStickModel&) throw();
    virtual ~sipAddBallAndStickModel() throw();

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
    sipAddBallAndStickModel(const sipAddBallAndStickModel &);
    sipAddBallAndStickModel &operator = (const sipAddBallAndStickModel &);

    sipMethodCache sipPyMethods[4];
};

#endif
