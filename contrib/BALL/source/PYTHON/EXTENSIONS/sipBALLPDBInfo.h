/*
 * Interface header file.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#ifndef _BALLPDBInfo_h
#define _BALLPDBInfo_h

#line 9 "PDBInfo.sip"
	#include <BALL/FORMAT/PDBInfo.h>
	using namespace BALL;
#line 17 "sipBALLPDBInfo.h"

#define sipClass_PDBInfo             sipModuleAPI_BALL.em_types[160]
#define sipCast_PDBInfo              sipType_BALL_PDBInfo.td_cast
#define sipForceConvertTo_PDBInfo    sipType_BALL_PDBInfo.td_fcto

extern sipTypeDef sipType_BALL_PDBInfo;


class sipPDBInfo : public PDBInfo
{
public:
    sipPDBInfo() throw();
    sipPDBInfo(const PDBInfo&) throw();
    virtual ~sipPDBInfo() throw();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    void clear();

public:
    sipWrapper *sipPySelf;

private:
    sipPDBInfo(const sipPDBInfo &);
    sipPDBInfo &operator = (const sipPDBInfo &);

    sipMethodCache sipPyMethods[1];
};

#endif
