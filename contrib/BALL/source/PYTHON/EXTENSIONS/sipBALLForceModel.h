/*
 * Interface header file.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#ifndef _BALLForceModel_h
#define _BALLForceModel_h

#line 5 "forceModel.sip"
	#include <BALL/VIEW/MODELS/forceModel.h>
	using namespace BALL;
	using namespace BALL::VIEW;
#line 18 "sipBALLForceModel.h"

#define sipClass_ForceModel             sipModuleAPI_BALL.em_types[6]
#define sipCast_ForceModel              sipType_BALL_ForceModel.td_cast
#define sipForceConvertTo_ForceModel    sipType_BALL_ForceModel.td_fcto

extern sipTypeDef sipType_BALL_ForceModel;


class sipForceModel : public ForceModel
{
public:
    sipForceModel() throw();
    sipForceModel(const ForceModel&) throw();
    virtual ~sipForceModel() throw();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    void clear() throw();
    bool isValid() const throw();
    void clearComposites() throw();
    bool createGeometricObjects() throw();

public:
    sipWrapper *sipPySelf;

private:
    sipForceModel(const sipForceModel &);
    sipForceModel &operator = (const sipForceModel &);

    sipMethodCache sipPyMethods[4];
};

#endif
