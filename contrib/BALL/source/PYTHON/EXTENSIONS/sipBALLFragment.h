/*
 * Interface header file.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#ifndef _BALLFragment_h
#define _BALLFragment_h

#line 11 "fragment.sip"
	#include <BALL/KERNEL/fragment.h>
	using namespace BALL;
#line 17 "sipBALLFragment.h"

#define sipClass_Fragment             sipModuleAPI_BALL.em_types[232]
#define sipCast_Fragment              sipType_BALL_Fragment.td_cast
#define sipForceConvertTo_Fragment    sipType_BALL_Fragment.td_fcto

#define sipEnum_Fragment_Property              sipModuleAPI_BALL.em_enums[25]

extern sipTypeDef sipType_BALL_Fragment;


class sipFragment : public Fragment
{
public:
    sipFragment();
    sipFragment(const Fragment&,bool);
    sipFragment(const String&);
    sipFragment(const Fragment&);
    virtual ~sipFragment() throw();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    void clear() throw();
    void destroy() throw();
    bool isValid() const throw();
    void select() throw();
    void deselect() throw();

public:
    sipWrapper *sipPySelf;

private:
    sipFragment(const sipFragment &);
    sipFragment &operator = (const sipFragment &);

    sipMethodCache sipPyMethods[5];
};

#endif
