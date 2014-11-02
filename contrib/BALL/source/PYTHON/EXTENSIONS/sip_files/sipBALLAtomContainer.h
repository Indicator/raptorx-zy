/*
 * Interface header file.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#ifndef _BALLAtomContainer_h
#define _BALLAtomContainer_h

#line 12 "atomContainer.sip"
	#include <BALL/KERNEL/atomContainer.h>
	using namespace BALL;
#line 17 "sipBALLAtomContainer.h"

#define sipClass_AtomContainer             sipModuleAPI_BALL.em_types[226]
#define sipCast_AtomContainer              sipType_BALL_AtomContainer.td_cast
#define sipForceConvertTo_AtomContainer    sipType_BALL_AtomContainer.td_fcto

#define sipEnum_AtomContainer_Property              sipModuleAPI_BALL.em_enums[29]

extern sipTypeDef sipType_BALL_AtomContainer;


class sipAtomContainer : public AtomContainer
{
public:
    sipAtomContainer();
    sipAtomContainer(const AtomContainer&,bool);
    sipAtomContainer(const String&);
    sipAtomContainer(const AtomContainer&);
    virtual ~sipAtomContainer() throw();

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
    sipAtomContainer(const sipAtomContainer &);
    sipAtomContainer &operator = (const sipAtomContainer &);

    sipMethodCache sipPyMethods[5];
};

#endif
