/*
 * Interface header file.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#ifndef _BALLBuildBondsProcessor_h
#define _BALLBuildBondsProcessor_h

#line 100 "fragmentDB.sip"
	#include <BALL/STRUCTURE/fragmentDB.h>
	typedef FragmentDB::BuildBondsProcessor BuildBondsProcessor;
	using namespace BALL;
#line 18 "sipBALLBuildBondsProcessor.h"

#define sipClass_BuildBondsProcessor             sipModuleAPI_BALL.em_types[88]
#define sipCast_BuildBondsProcessor              sipType_BALL_BuildBondsProcessor.td_cast
#define sipForceConvertTo_BuildBondsProcessor    sipType_BALL_BuildBondsProcessor.td_fcto

extern sipTypeDef sipType_BALL_BuildBondsProcessor;


class sipBuildBondsProcessor : public BuildBondsProcessor
{
public:
    sipBuildBondsProcessor();
    sipBuildBondsProcessor(const FragmentDB&);
    sipBuildBondsProcessor(const BuildBondsProcessor&);
    virtual ~sipBuildBondsProcessor();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    bool finish();
    bool start();

public:
    sipWrapper *sipPySelf;

private:
    sipBuildBondsProcessor(const sipBuildBondsProcessor &);
    sipBuildBondsProcessor &operator = (const sipBuildBondsProcessor &);

    sipMethodCache sipPyMethods[2];
};

#endif
