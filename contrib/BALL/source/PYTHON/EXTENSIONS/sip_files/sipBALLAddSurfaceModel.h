/*
 * Interface header file.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#ifndef _BALLAddSurfaceModel_h
#define _BALLAddSurfaceModel_h

#line 11 "surfaceModel.sip"
	#include <BALL/VIEW/MODELS/surfaceModel.h>
	using namespace BALL;
	using namespace BALL::VIEW;
#line 18 "sipBALLAddSurfaceModel.h"

#define sipClass_AddSurfaceModel             sipModuleAPI_BALL.em_types[7]
#define sipCast_AddSurfaceModel              sipType_BALL_AddSurfaceModel.td_cast
#define sipForceConvertTo_AddSurfaceModel    sipType_BALL_AddSurfaceModel.td_fcto

extern sipTypeDef sipType_BALL_AddSurfaceModel;


class sipAddSurfaceModel : public AddSurfaceModel
{
public:
    sipAddSurfaceModel() throw();
    sipAddSurfaceModel(const AddSurfaceModel&) throw();
    virtual ~sipAddSurfaceModel() throw();

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
    sipAddSurfaceModel(const sipAddSurfaceModel &);
    sipAddSurfaceModel &operator = (const sipAddSurfaceModel &);

    sipMethodCache sipPyMethods[4];
};

#endif
