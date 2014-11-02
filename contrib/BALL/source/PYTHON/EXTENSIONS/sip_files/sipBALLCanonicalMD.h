/*
 * Interface header file.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#ifndef _BALLCanonicalMD_h
#define _BALLCanonicalMD_h

#line 11 "canonicalMD.sip"
	#include <BALL/MOLMEC/MDSIMULATION/canonicalMD.h>
	using namespace BALL;
#line 17 "sipBALLCanonicalMD.h"

#define sipClass_CanonicalMD             sipModuleAPI_BALL.em_types[99]
#define sipCast_CanonicalMD              sipType_BALL_CanonicalMD.td_cast
#define sipForceConvertTo_CanonicalMD    sipType_BALL_CanonicalMD.td_fcto

extern sipTypeDef sipType_BALL_CanonicalMD;


class sipCanonicalMD : public CanonicalMD
{
public:
    sipCanonicalMD();
    sipCanonicalMD(ForceField&);
    sipCanonicalMD(ForceField&,SnapShotManager *);
    sipCanonicalMD(ForceField&,SnapShotManager *,const Options&);
    sipCanonicalMD(const CanonicalMD&);
    virtual ~sipCanonicalMD() throw();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    bool setup(ForceField&,SnapShotManager *) throw();
    bool setup(ForceField&,SnapShotManager *,const Options&) throw();
    bool specificSetup() throw();
    void setTimeStep(double) throw();
    bool simulate(bool) throw();
    bool simulateIterations(int,bool) throw();
    bool simulateTime(double,bool) throw();

public:
    sipWrapper *sipPySelf;

private:
    sipCanonicalMD(const sipCanonicalMD &);
    sipCanonicalMD &operator = (const sipCanonicalMD &);

    sipMethodCache sipPyMethods[7];
};

#endif
