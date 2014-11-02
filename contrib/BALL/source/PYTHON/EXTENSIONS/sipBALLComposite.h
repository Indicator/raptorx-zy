/*
 * Interface header file.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#ifndef _BALLComposite_h
#define _BALLComposite_h

#line 13 "composite.sip"
	#include <BALL/CONCEPT/composite.h>
	using namespace BALL;
#line 17 "sipBALLComposite.h"

#define sipClass_Composite             sipModuleAPI_BALL.em_types[224]
#define sipCast_Composite              sipType_BALL_Composite.td_cast
#define sipForceConvertTo_Composite    sipType_BALL_Composite.td_fcto

extern sipTypeDef sipType_BALL_Composite;


class sipComposite : public Composite
{
public:
    sipComposite();
    sipComposite(const Composite&,bool);
    sipComposite(const Composite&);
    virtual ~sipComposite() throw();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    void clear() throw();
    void destroy() throw();
    void select() throw();
    void deselect() throw();
    bool isValid() const throw();

public:
    sipWrapper *sipPySelf;

private:
    sipComposite(const sipComposite &);
    sipComposite &operator = (const sipComposite &);

    sipMethodCache sipPyMethods[5];
};

#endif
