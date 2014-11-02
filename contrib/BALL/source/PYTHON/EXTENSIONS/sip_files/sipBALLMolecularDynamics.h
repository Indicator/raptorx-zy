/*
 * Interface header file.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#ifndef _BALLMolecularDynamics_h
#define _BALLMolecularDynamics_h

#line 10 "molecularDynamics.sip"
  #include <BALL/MOLMEC/MDSIMULATION/molecularDynamics.h>
  using namespace BALL;
#line 17 "sipBALLMolecularDynamics.h"

#define sipClass_MolecularDynamics             sipModuleAPI_BALL.em_types[97]
#define sipCast_MolecularDynamics              sipType_BALL_MolecularDynamics.td_cast
#define sipForceConvertTo_MolecularDynamics    sipType_BALL_MolecularDynamics.td_fcto

extern sipTypeDef sipType_BALL_MolecularDynamics;


class sipMolecularDynamics : public MolecularDynamics
{
public:
    sipMolecularDynamics();
    sipMolecularDynamics(ForceField&);
    sipMolecularDynamics(const MolecularDynamics&);
    virtual ~sipMolecularDynamics();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    bool setup(ForceField&,SnapShotManager *);
    bool setup(ForceField&,SnapShotManager *,const Options&);
    bool specificSetup();
    void setTimeStep(double);
    bool simulate(bool);
    bool simulateIterations(int,bool);
    bool simulateTime(double,bool);

public:
    sipWrapper *sipPySelf;

private:
    sipMolecularDynamics(const sipMolecularDynamics &);
    sipMolecularDynamics &operator = (const sipMolecularDynamics &);

    sipMethodCache sipPyMethods[7];
};

#endif
