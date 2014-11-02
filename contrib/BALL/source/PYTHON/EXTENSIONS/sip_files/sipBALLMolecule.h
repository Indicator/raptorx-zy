/*
 * Interface header file.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#ifndef _BALLMolecule_h
#define _BALLMolecule_h

#line 11 "molecule.sip"
	#include <BALL/KERNEL/molecule.h>
	using namespace BALL;
#line 17 "sipBALLMolecule.h"

#define sipClass_Molecule             sipModuleAPI_BALL.em_types[229]
#define sipCast_Molecule              sipType_BALL_Molecule.td_cast
#define sipForceConvertTo_Molecule    sipType_BALL_Molecule.td_fcto

extern sipTypeDef sipType_BALL_Molecule;


class sipMolecule : public Molecule
{
public:
    sipMolecule();
    sipMolecule(const Molecule&,bool);
    sipMolecule(const String&);
    sipMolecule(const Molecule&);
    virtual ~sipMolecule() throw();

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
    sipMolecule(const sipMolecule &);
    sipMolecule &operator = (const sipMolecule &);

    sipMethodCache sipPyMethods[5];
};

#endif
