/*
 * Interface header file.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#ifndef _BALLConjugateGradientMinimizer_h
#define _BALLConjugateGradientMinimizer_h

#line 11 "conjugateGradient.sip"
	#include <BALL/MOLMEC/MINIMIZATION/conjugateGradient.h>
	using namespace BALL;
#line 17 "sipBALLConjugateGradientMinimizer.h"

#define sipClass_ConjugateGradientMinimizer             sipModuleAPI_BALL.em_types[96]
#define sipCast_ConjugateGradientMinimizer              sipType_BALL_ConjugateGradientMinimizer.td_cast
#define sipForceConvertTo_ConjugateGradientMinimizer    sipType_BALL_ConjugateGradientMinimizer.td_fcto

#define sipEnum_ConjugateGradientMinimizer_UpdateMethod              sipModuleAPI_BALL.em_enums[19]

extern sipTypeDef sipType_BALL_ConjugateGradientMinimizer;


class sipConjugateGradientMinimizer : public ConjugateGradientMinimizer
{
public:
    sipConjugateGradientMinimizer();
    sipConjugateGradientMinimizer(ForceField&);
    sipConjugateGradientMinimizer(ForceField&,SnapShotManager *);
    sipConjugateGradientMinimizer(ForceField&,SnapShotManager *,const Options&);
    sipConjugateGradientMinimizer(ForceField&,const Options&);
    sipConjugateGradientMinimizer(const ConjugateGradientMinimizer&);
    virtual ~sipConjugateGradientMinimizer();

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
    sipConjugateGradientMinimizer(const sipConjugateGradientMinimizer &);
    sipConjugateGradientMinimizer &operator = (const sipConjugateGradientMinimizer &);

    sipMethodCache sipPyMethods[10];
};

#endif
