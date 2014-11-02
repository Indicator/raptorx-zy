/*
 * Interface header file.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#ifndef _BALLAddVanDerWaalsModel_h
#define _BALLAddVanDerWaalsModel_h

#line 11 "vanDerWaalsModel.sip"
	#include <BALL/VIEW/MODELS/vanDerWaalsModel.h>
	using namespace BALL;
	using namespace BALL::VIEW;
#line 18 "sipBALLAddVanDerWaalsModel.h"

#define sipClass_AddVanDerWaalsModel             sipModuleAPI_BALL.em_types[13]
#define sipCast_AddVanDerWaalsModel              sipType_BALL_AddVanDerWaalsModel.td_cast
#define sipForceConvertTo_AddVanDerWaalsModel    sipType_BALL_AddVanDerWaalsModel.td_fcto

extern sipTypeDef sipType_BALL_AddVanDerWaalsModel;


class sipAddVanDerWaalsModel : public AddVanDerWaalsModel
{
public:
    sipAddVanDerWaalsModel() throw();
    sipAddVanDerWaalsModel(const AddVanDerWaalsModel&) throw();
    virtual ~sipAddVanDerWaalsModel() throw();

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
    sipAddVanDerWaalsModel(const sipAddVanDerWaalsModel &);
    sipAddVanDerWaalsModel &operator = (const sipAddVanDerWaalsModel &);

    sipMethodCache sipPyMethods[4];
};

#endif
