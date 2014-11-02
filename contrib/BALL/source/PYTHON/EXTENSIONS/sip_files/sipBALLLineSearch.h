/*
 * Interface header file.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#ifndef _BALLLineSearch_h
#define _BALLLineSearch_h

#line 10 "lineSearch.sip"
	#include <BALL/MOLMEC/MINIMIZATION/lineSearch.h>
	using namespace BALL;
#line 17 "sipBALLLineSearch.h"

#define sipClass_LineSearch             sipModuleAPI_BALL.em_types[91]
#define sipCast_LineSearch              sipType_BALL_LineSearch.td_cast
#define sipForceConvertTo_LineSearch    sipType_BALL_LineSearch.td_fcto

extern sipTypeDef sipType_BALL_LineSearch;


class sipLineSearch : public LineSearch
{
public:
    sipLineSearch();
    sipLineSearch(EnergyMinimizer&);
    sipLineSearch(const LineSearch&);
    virtual ~sipLineSearch() throw();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    void takeStep(double&,double&,double&,double&,double&,double&,double&,double,double,double,double);
    bool minimize(double&,bool);

public:
    sipWrapper *sipPySelf;

private:
    sipLineSearch(const sipLineSearch &);
    sipLineSearch &operator = (const sipLineSearch &);

    sipMethodCache sipPyMethods[2];
};

#endif
