/*
 * Interface header file.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#ifndef _BALLStrangLBFGSMinimizer_h
#define _BALLStrangLBFGSMinimizer_h

#line 11 "strangLBFGS.sip"
	#include <BALL/MOLMEC/MINIMIZATION/strangLBFGS.h>
	using namespace BALL;
#line 17 "sipBALLStrangLBFGSMinimizer.h"

#define sipClass_StrangLBFGSMinimizer             sipModuleAPI_BALL.em_types[94]
#define sipCast_StrangLBFGSMinimizer              sipType_BALL_StrangLBFGSMinimizer.td_cast
#define sipForceConvertTo_StrangLBFGSMinimizer    sipType_BALL_StrangLBFGSMinimizer.td_fcto

extern sipTypeDef sipType_BALL_StrangLBFGSMinimizer;


class sipStrangLBFGSMinimizer : public StrangLBFGSMinimizer
{
public:
    sipStrangLBFGSMinimizer();
    sipStrangLBFGSMinimizer(ForceField&);
    sipStrangLBFGSMinimizer(ForceField&,SnapShotManager *);
    sipStrangLBFGSMinimizer(ForceField&,SnapShotManager *,const Options&);
    sipStrangLBFGSMinimizer(ForceField&,const Options&);
    sipStrangLBFGSMinimizer(const StrangLBFGSMinimizer&);
    virtual ~sipStrangLBFGSMinimizer();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    bool specificSetup();
    double findStep();
    void updateDirection();
    bool minimize(int,bool);
    bool isConverged() const;
    double updateEnergy();
    void updateForces();
    void printEnergy() const;
    void takeSnapShot() const;
    void finishIteration();

public:
    sipWrapper *sipPySelf;

private:
    sipStrangLBFGSMinimizer(const sipStrangLBFGSMinimizer &);
    sipStrangLBFGSMinimizer &operator = (const sipStrangLBFGSMinimizer &);

    sipMethodCache sipPyMethods[10];
};

#endif
