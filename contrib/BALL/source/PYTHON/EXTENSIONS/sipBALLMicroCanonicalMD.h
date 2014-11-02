/*
 * Interface header file.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#ifndef _BALLMicroCanonicalMD_h
#define _BALLMicroCanonicalMD_h

#line 11 "microCanonicalMD.sip"
  #include <BALL/MOLMEC/MDSIMULATION/microCanonicalMD.h>
  using namespace BALL;
#line 17 "sipBALLMicroCanonicalMD.h"

#define sipClass_MicroCanonicalMD             sipModuleAPI_BALL.em_types[98]
#define sipCast_MicroCanonicalMD              sipType_BALL_MicroCanonicalMD.td_cast
#define sipForceConvertTo_MicroCanonicalMD    sipType_BALL_MicroCanonicalMD.td_fcto

extern sipTypeDef sipType_BALL_MicroCanonicalMD;


class sipMicroCanonicalMD : public MicroCanonicalMD
{
public:
    sipMicroCanonicalMD();
    sipMicroCanonicalMD(ForceField&);
    sipMicroCanonicalMD(ForceField&,SnapShotManager *);
    sipMicroCanonicalMD(ForceField&,SnapShotManager *,const Options&);
    sipMicroCanonicalMD(const MicroCanonicalMD&);
    virtual ~sipMicroCanonicalMD();

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
    sipMicroCanonicalMD(const sipMicroCanonicalMD &);
    sipMicroCanonicalMD &operator = (const sipMicroCanonicalMD &);

    sipMethodCache sipPyMethods[7];
};

#endif
