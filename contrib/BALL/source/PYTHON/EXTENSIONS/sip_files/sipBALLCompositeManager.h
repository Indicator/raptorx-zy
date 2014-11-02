/*
 * Interface header file.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#ifndef _BALLCompositeManager_h
#define _BALLCompositeManager_h

#line 9 "compositeManager.sip"
	#include <BALL/VIEW/KERNEL/compositeManager.h>
	using namespace BALL;
	using namespace BALL::VIEW;
#line 18 "sipBALLCompositeManager.h"

#define sipClass_CompositeManager             sipModuleAPI_BALL.em_types[52]
#define sipCast_CompositeManager              sipType_BALL_CompositeManager.td_cast
#define sipForceConvertTo_CompositeManager    sipType_BALL_CompositeManager.td_fcto

extern sipTypeDef sipType_BALL_CompositeManager;


class sipCompositeManager : public CompositeManager
{
public:
    sipCompositeManager() throw();
    sipCompositeManager(const CompositeManager&) throw();
    virtual ~sipCompositeManager() throw();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    void clear() throw();

public:
    sipWrapper *sipPySelf;

private:
    sipCompositeManager(const sipCompositeManager &);
    sipCompositeManager &operator = (const sipCompositeManager &);

    sipMethodCache sipPyMethods[1];
};

#endif
