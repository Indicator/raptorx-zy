/*
 * Interface header file.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#ifndef _BALLObject_h
#define _BALLObject_h

#line 10 "object.sip"
#include <BALL/CONCEPT/object.h>
using namespace BALL;
#line 17 "sipBALLObject.h"

#define sipClass_Object             sipModuleAPI_BALL.em_types[219]
#define sipCast_Object              sipType_BALL_Object.td_cast
#define sipForceConvertTo_Object    sipType_BALL_Object.td_fcto

extern sipTypeDef sipType_BALL_Object;


class sipObject : public Object
{
public:
    sipObject() throw();
    sipObject(const Object&) throw();
    virtual ~sipObject() throw();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    void clear() throw();
    bool isValid() const throw();

public:
    sipWrapper *sipPySelf;

private:
    sipObject(const sipObject &);
    sipObject &operator = (const sipObject &);

    sipMethodCache sipPyMethods[2];
};

#endif
