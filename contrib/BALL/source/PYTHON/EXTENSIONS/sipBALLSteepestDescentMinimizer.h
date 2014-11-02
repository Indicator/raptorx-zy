/*
 * Interface header file.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#ifndef _BALLSteepestDescentMinimizer_h
#define _BALLSteepestDescentMinimizer_h

#line 11 "steepestDescent.sip"
	#include <BALL/MOLMEC/MINIMIZATION/steepestDescent.h>
	using namespace BALL;
#line 17 "sipBALLSteepestDescentMinimizer.h"

#define sipClass_SteepestDescentMinimizer             sipModuleAPI_BALL.em_types[95]
#define sipCast_SteepestDescentMinimizer              sipType_BALL_SteepestDescentMinimizer.td_cast
#define sipForceConvertTo_SteepestDescentMinimizer    sipType_BALL_SteepestDescentMinimizer.td_fcto

extern sipTypeDef sipType_BALL_SteepestDescentMinimizer;


class sipSteepestDescentMinimizer : public SteepestDescentMinimizer
{
public:
    sipSteepestDescentMinimizer();
    sipSteepestDescentMinimizer(ForceField&);
    sipSteepestDescentMinimizer(ForceField&,SnapShotManager *);
    sipSteepestDescentMinimizer(ForceField&,SnapShotManager *,const Options&);
    sipSteepestDescentMinimizer(ForceField&,const Options&);
    sipSteepestDescentMinimizer(const SteepestDescentMinimizer&);
    virtual ~sipSteepestDescentMinimizer();

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
    sipSteepestDescentMinimizer(const sipSteepestDescentMinimizer &);
    sipSteepestDescentMinimizer &operator = (const sipSteepestDescentMinimizer &);

    sipMethodCache sipPyMethods[10];
};

#endif
