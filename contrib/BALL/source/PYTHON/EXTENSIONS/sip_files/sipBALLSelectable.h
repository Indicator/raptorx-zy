/*
 * Interface header file.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#ifndef _BALLSelectable_h
#define _BALLSelectable_h

#line 10 "selectable.sip"
#include <BALL/CONCEPT/selectable.h>
using namespace BALL;
#line 17 "sipBALLSelectable.h"

#define sipClass_Selectable             sipModuleAPI_BALL.em_types[218]
#define sipCast_Selectable              sipType_BALL_Selectable.td_cast
#define sipForceConvertTo_Selectable    sipType_BALL_Selectable.td_fcto

extern sipTypeDef sipType_BALL_Selectable;


class sipSelectable : public Selectable
{
public:
    sipSelectable() throw();
    sipSelectable(const Selectable&,bool) throw();
    sipSelectable(const Selectable&);
    virtual ~sipSelectable() throw();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    void select() throw();
    void deselect() throw();

public:
    sipWrapper *sipPySelf;

private:
    sipSelectable(const sipSelectable &);
    sipSelectable &operator = (const sipSelectable &);

    sipMethodCache sipPyMethods[2];
};

#endif
