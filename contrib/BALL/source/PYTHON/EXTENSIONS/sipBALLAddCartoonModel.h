/*
 * Interface header file.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#ifndef _BALLAddCartoonModel_h
#define _BALLAddCartoonModel_h

#line 11 "cartoonModel.sip"
	#include <BALL/VIEW/MODELS/cartoonModel.h>
	using namespace BALL;
	using namespace BALL::VIEW;
#line 18 "sipBALLAddCartoonModel.h"

#define sipClass_AddCartoonModel             sipModuleAPI_BALL.em_types[9]
#define sipCast_AddCartoonModel              sipType_BALL_AddCartoonModel.td_cast
#define sipForceConvertTo_AddCartoonModel    sipType_BALL_AddCartoonModel.td_fcto

extern sipTypeDef sipType_BALL_AddCartoonModel;


class sipAddCartoonModel : public AddCartoonModel
{
public:
    sipAddCartoonModel() throw();
    sipAddCartoonModel(const AddCartoonModel&) throw();
    virtual ~sipAddCartoonModel() throw();

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
    sipAddCartoonModel(const sipAddCartoonModel &);
    sipAddCartoonModel &operator = (const sipAddCartoonModel &);

    sipMethodCache sipPyMethods[4];
};

#endif
