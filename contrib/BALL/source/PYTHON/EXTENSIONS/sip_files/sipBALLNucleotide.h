/*
 * Interface header file.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#ifndef _BALLNucleotide_h
#define _BALLNucleotide_h

#line 11 "nucleotide.sip"
#include <BALL/KERNEL/nucleotide.h>
using namespace BALL;
#line 17 "sipBALLNucleotide.h"

#define sipClass_Nucleotide             sipModuleAPI_BALL.em_types[234]
#define sipCast_Nucleotide              sipType_BALL_Nucleotide.td_cast
#define sipForceConvertTo_Nucleotide    sipType_BALL_Nucleotide.td_fcto

extern sipTypeDef sipType_BALL_Nucleotide;


class sipNucleotide : public Nucleotide
{
public:
    sipNucleotide();
    sipNucleotide(const Nucleotide&,bool);
    sipNucleotide(const String&,const String&,char);
    sipNucleotide(const Nucleotide&);
    virtual ~sipNucleotide() throw();

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
    sipNucleotide(const sipNucleotide &);
    sipNucleotide &operator = (const sipNucleotide &);

    sipMethodCache sipPyMethods[5];
};

#endif
