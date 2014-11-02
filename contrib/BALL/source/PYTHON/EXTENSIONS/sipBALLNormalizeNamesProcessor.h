/*
 * Interface header file.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#ifndef _BALLNormalizeNamesProcessor_h
#define _BALLNormalizeNamesProcessor_h

#line 73 "fragmentDB.sip"
	#include <BALL/STRUCTURE/fragmentDB.h>
	typedef FragmentDB::NormalizeNamesProcessor NormalizeNamesProcessor;
	using namespace BALL;
#line 18 "sipBALLNormalizeNamesProcessor.h"

#define sipClass_NormalizeNamesProcessor             sipModuleAPI_BALL.em_types[89]
#define sipCast_NormalizeNamesProcessor              sipType_BALL_NormalizeNamesProcessor.td_cast
#define sipForceConvertTo_NormalizeNamesProcessor    sipType_BALL_NormalizeNamesProcessor.td_fcto

extern sipTypeDef sipType_BALL_NormalizeNamesProcessor;


class sipNormalizeNamesProcessor : public NormalizeNamesProcessor
{
public:
    sipNormalizeNamesProcessor();
    sipNormalizeNamesProcessor(FragmentDB&);
    sipNormalizeNamesProcessor(const NormalizeNamesProcessor&);
    virtual ~sipNormalizeNamesProcessor();

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
    sipNormalizeNamesProcessor(const sipNormalizeNamesProcessor &);
    sipNormalizeNamesProcessor &operator = (const sipNormalizeNamesProcessor &);

    sipMethodCache sipPyMethods[2];
};

#endif
