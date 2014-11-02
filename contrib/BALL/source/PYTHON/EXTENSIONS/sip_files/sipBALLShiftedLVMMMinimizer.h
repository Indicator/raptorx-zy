/*
 * Interface header file.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#ifndef _BALLShiftedLVMMMinimizer_h
#define _BALLShiftedLVMMMinimizer_h

#line 11 "shiftedLVMM.sip"
	#include <BALL/MOLMEC/MINIMIZATION/shiftedLVMM.h>
	using namespace BALL;
#line 17 "sipBALLShiftedLVMMMinimizer.h"

#define sipClass_ShiftedLVMMMinimizer             sipModuleAPI_BALL.em_types[93]
#define sipCast_ShiftedLVMMMinimizer              sipType_BALL_ShiftedLVMMMinimizer.td_cast
#define sipForceConvertTo_ShiftedLVMMMinimizer    sipType_BALL_ShiftedLVMMMinimizer.td_fcto

#define sipEnum_ShiftedLVMMMinimizer_CorrectionParameter              sipModuleAPI_BALL.em_enums[17]
#define sipEnum_ShiftedLVMMMinimizer_UpdateMethod              sipModuleAPI_BALL.em_enums[18]

extern sipTypeDef sipType_BALL_ShiftedLVMMMinimizer;


class sipShiftedLVMMMinimizer : public ShiftedLVMMMinimizer
{
public:
    sipShiftedLVMMMinimizer();
    sipShiftedLVMMMinimizer(ForceField&);
    sipShiftedLVMMMinimizer(ForceField&,SnapShotManager *);
    sipShiftedLVMMMinimizer(ForceField&,SnapShotManager *,const Options&);
    sipShiftedLVMMMinimizer(ForceField&,const Options&);
    sipShiftedLVMMMinimizer(const ShiftedLVMMMinimizer&);
    virtual ~sipShiftedLVMMMinimizer();

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
    sipShiftedLVMMMinimizer(const sipShiftedLVMMMinimizer &);
    sipShiftedLVMMMinimizer &operator = (const sipShiftedLVMMMinimizer &);

    sipMethodCache sipPyMethods[10];
};

#endif
