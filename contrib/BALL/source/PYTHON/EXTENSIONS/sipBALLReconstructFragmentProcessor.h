/*
 * Interface header file.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#ifndef _BALLReconstructFragmentProcessor_h
#define _BALLReconstructFragmentProcessor_h

#line 12 "reconstructFragmentProcessor.sip"
	#include <BALL/STRUCTURE/reconstructFragmentProcessor.h>
	#include <BALL/STRUCTURE/fragmentDB.h>
	using namespace BALL;
#line 18 "sipBALLReconstructFragmentProcessor.h"

#define sipClass_ReconstructFragmentProcessor             sipModuleAPI_BALL.em_types[87]
#define sipCast_ReconstructFragmentProcessor              sipType_BALL_ReconstructFragmentProcessor.td_cast
#define sipForceConvertTo_ReconstructFragmentProcessor    sipType_BALL_ReconstructFragmentProcessor.td_fcto

extern sipTypeDef sipType_BALL_ReconstructFragmentProcessor;


class sipReconstructFragmentProcessor : public ReconstructFragmentProcessor
{
public:
    sipReconstructFragmentProcessor();
    sipReconstructFragmentProcessor(const FragmentDB&);
    sipReconstructFragmentProcessor(const ReconstructFragmentProcessor&);
    virtual ~sipReconstructFragmentProcessor();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    bool start();
    bool finish();

public:
    sipWrapper *sipPySelf;

private:
    sipReconstructFragmentProcessor(const sipReconstructFragmentProcessor &);
    sipReconstructFragmentProcessor &operator = (const sipReconstructFragmentProcessor &);

    sipMethodCache sipPyMethods[2];
};

#endif
