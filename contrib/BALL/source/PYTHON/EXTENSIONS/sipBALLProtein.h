/*
 * Interface header file.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#ifndef _BALLProtein_h
#define _BALLProtein_h

#line 11 "protein.sip"
	#include <BALL/KERNEL/protein.h>
	using namespace BALL;
#line 17 "sipBALLProtein.h"

#define sipClass_Protein             sipModuleAPI_BALL.em_types[230]
#define sipCast_Protein              sipType_BALL_Protein.td_cast
#define sipForceConvertTo_Protein    sipType_BALL_Protein.td_fcto

extern sipTypeDef sipType_BALL_Protein;


class sipProtein : public Protein
{
public:
    sipProtein();
    sipProtein(const Protein&,bool);
    sipProtein(const String&,const String&);
    sipProtein(const Protein&);
    virtual ~sipProtein() throw();

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
    sipProtein(const sipProtein &);
    sipProtein &operator = (const sipProtein &);

    sipMethodCache sipPyMethods[5];
};

#endif
