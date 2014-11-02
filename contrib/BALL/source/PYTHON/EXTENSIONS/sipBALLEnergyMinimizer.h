/*
 * Interface header file.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#ifndef _BALLEnergyMinimizer_h
#define _BALLEnergyMinimizer_h

#line 10 "energyMinimizer.sip"
	#include <BALL/MOLMEC/MINIMIZATION/energyMinimizer.h>
	using namespace BALL;
#line 17 "sipBALLEnergyMinimizer.h"

#define sipClass_EnergyMinimizer             sipModuleAPI_BALL.em_types[92]
#define sipCast_EnergyMinimizer              sipType_BALL_EnergyMinimizer.td_cast
#define sipForceConvertTo_EnergyMinimizer    sipType_BALL_EnergyMinimizer.td_fcto

extern sipTypeDef sipType_BALL_EnergyMinimizer;


class sipEnergyMinimizer : public EnergyMinimizer
{
public:
    sipEnergyMinimizer();
    sipEnergyMinimizer(ForceField&);
    sipEnergyMinimizer(ForceField&,Options&);
    sipEnergyMinimizer(const EnergyMinimizer&);
    virtual ~sipEnergyMinimizer();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    bool specificSetup();
    bool isConverged() const;
    double findStep();
    void updateDirection();
    double updateEnergy();
    void updateForces();
    void printEnergy() const;
    void takeSnapShot() const;
    void finishIteration();
    bool minimize(int,bool);

public:
    sipWrapper *sipPySelf;

private:
    sipEnergyMinimizer(const sipEnergyMinimizer &);
    sipEnergyMinimizer &operator = (const sipEnergyMinimizer &);

    sipMethodCache sipPyMethods[10];
};

#endif
