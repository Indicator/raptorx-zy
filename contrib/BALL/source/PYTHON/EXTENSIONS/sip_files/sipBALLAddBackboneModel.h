/*
 * Interface header file.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#ifndef _BALLAddBackboneModel_h
#define _BALLAddBackboneModel_h

#line 11 "backboneModel.sip"
	#include <BALL/VIEW/MODELS/backboneModel.h>
	using namespace BALL;
	using namespace BALL::VIEW;
#line 18 "sipBALLAddBackboneModel.h"

#define sipClass_AddBackboneModel             sipModuleAPI_BALL.em_types[8]
#define sipCast_AddBackboneModel              sipType_BALL_AddBackboneModel.td_cast
#define sipForceConvertTo_AddBackboneModel    sipType_BALL_AddBackboneModel.td_fcto

extern sipTypeDef sipType_BALL_AddBackboneModel;


class sipAddBackboneModel : public AddBackboneModel
{
public:
    sipAddBackboneModel() throw();
    sipAddBackboneModel(const AddBackboneModel&) throw();
    virtual ~sipAddBackboneModel() throw();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    void clear() throw();
    bool createGeometricObjects() throw();
    bool isValid() const throw();
    void clearComposites() throw();

public:
    sipWrapper *sipPySelf;

private:
    sipAddBackboneModel(const sipAddBackboneModel &);
    sipAddBackboneModel &operator = (const sipAddBackboneModel &);

    sipMethodCache sipPyMethods[4];
};

#endif
