/*
 * Interface header file.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#ifndef _BALLNucleicAcid_h
#define _BALLNucleicAcid_h

#line 11 "nucleicAcid.sip"
#include <BALL/KERNEL/nucleicAcid.h>
using namespace BALL;
#line 17 "sipBALLNucleicAcid.h"

#define sipClass_NucleicAcid             sipModuleAPI_BALL.em_types[231]
#define sipCast_NucleicAcid              sipType_BALL_NucleicAcid.td_cast
#define sipForceConvertTo_NucleicAcid    sipType_BALL_NucleicAcid.td_fcto

extern sipTypeDef sipType_BALL_NucleicAcid;


class sipNucleicAcid : public NucleicAcid
{
public:
    sipNucleicAcid();
    sipNucleicAcid(const NucleicAcid&,bool);
    sipNucleicAcid(const String&,const String&);
    sipNucleicAcid(const NucleicAcid&);
    virtual ~sipNucleicAcid() throw();

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
    sipNucleicAcid(const sipNucleicAcid &);
    sipNucleicAcid &operator = (const sipNucleicAcid &);

    sipMethodCache sipPyMethods[5];
};

#endif
