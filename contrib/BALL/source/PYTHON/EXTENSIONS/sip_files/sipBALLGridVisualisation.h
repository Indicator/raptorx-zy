/*
 * Interface header file.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#ifndef _BALLGridVisualisation_h
#define _BALLGridVisualisation_h

#line 11 "gridVisualisation.sip"
	#include <BALL/VIEW/PRIMITIVES/gridVisualisation.h>
	using namespace BALL;
	using namespace BALL::VIEW;
#line 18 "sipBALLGridVisualisation.h"

#define sipClass_GridVisualisation             sipModuleAPI_BALL.em_types[48]
#define sipCast_GridVisualisation              sipType_BALL_GridVisualisation.td_cast
#define sipForceConvertTo_GridVisualisation    sipType_BALL_GridVisualisation.td_fcto

extern sipTypeDef sipType_BALL_GridVisualisation;


class sipGridVisualisation : public GridVisualisation
{
public:
    sipGridVisualisation() throw();
    sipGridVisualisation(const GridVisualisation&) throw();
    virtual ~sipGridVisualisation() throw();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    void clear() throw();
    bool isValid() const throw();

public:
    sipWrapper *sipPySelf;

private:
    sipGridVisualisation(const sipGridVisualisation &);
    sipGridVisualisation &operator = (const sipGridVisualisation &);

    sipMethodCache sipPyMethods[2];
};

#endif
