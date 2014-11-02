/*
 * Interface header file.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#ifndef _BALLAtom_h
#define _BALLAtom_h

#line 44 "atom.sip"
	#include <BALL/KERNEL/atom.h>
	using namespace BALL;
	typedef Atom::Type AtomType;
#line 18 "sipBALLAtom.h"

#define sipClass_Atom             sipModuleAPI_BALL.em_types[236]
#define sipCast_Atom              sipType_BALL_Atom.td_cast
#define sipForceConvertTo_Atom    sipType_BALL_Atom.td_fcto

#define sipEnum_Atom_FullNameType              sipModuleAPI_BALL.em_enums[30]
#define sipEnum_Atom_Property              sipModuleAPI_BALL.em_enums[31]

extern sipTypeDef sipType_BALL_Atom;


class sipAtom : public Atom
{
public:
    sipAtom() throw();
    sipAtom(const Atom&,bool) throw();
    sipAtom(Element&,const String&,const String&,int,const Vector3&,const Vector3&,const Vector3&,float,float,Index);
    sipAtom(const Atom&);
    virtual ~sipAtom() throw();

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
    sipAtom(const sipAtom &);
    sipAtom &operator = (const sipAtom &);

    sipMethodCache sipPyMethods[5];
};

#endif
