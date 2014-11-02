/*
 * Interface header file.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#ifndef _BALLPDBAtom_h
#define _BALLPDBAtom_h

#line 11 "PDBAtom.sip"
	#include <BALL/KERNEL/PDBAtom.h>
	using namespace BALL;
  typedef Atom::Type AtomType;
#line 18 "sipBALLPDBAtom.h"

#define sipClass_PDBAtom             sipModuleAPI_BALL.em_types[237]
#define sipCast_PDBAtom              sipType_BALL_PDBAtom.td_cast
#define sipForceConvertTo_PDBAtom    sipType_BALL_PDBAtom.td_fcto

extern sipTypeDef sipType_BALL_PDBAtom;


class sipPDBAtom : public PDBAtom
{
public:
    sipPDBAtom();
    sipPDBAtom(const PDBAtom&,bool);
    sipPDBAtom(Element&,const String&,const String&,AtomType,const Vector3&,const Vector3&,const Vector3&,float,float,char,char,char,float,float);
    sipPDBAtom(const PDBAtom&);
    virtual ~sipPDBAtom() throw();

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
    sipPDBAtom(const sipPDBAtom &);
    sipPDBAtom &operator = (const sipPDBAtom &);

    sipMethodCache sipPyMethods[5];
};

#endif
