/*
 * Interface header file.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#ifndef _BALLMoleculeColorProcessor_h
#define _BALLMoleculeColorProcessor_h

#line 81 "standardColorProcessor.sip"
	#include <BALL/VIEW/MODELS/standardColorProcessor.h>
	using namespace BALL;
	using namespace BALL::VIEW;
#line 18 "sipBALLMoleculeColorProcessor.h"

#define sipClass_MoleculeColorProcessor             sipModuleAPI_BALL.em_types[23]
#define sipCast_MoleculeColorProcessor              sipType_BALL_MoleculeColorProcessor.td_cast
#define sipForceConvertTo_MoleculeColorProcessor    sipType_BALL_MoleculeColorProcessor.td_fcto

extern sipTypeDef sipType_BALL_MoleculeColorProcessor;


class sipMoleculeColorProcessor : public MoleculeColorProcessor
{
public:
    sipMoleculeColorProcessor();
    sipMoleculeColorProcessor(const MoleculeColorProcessor&);
    virtual ~sipMoleculeColorProcessor();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    void getColor(const Composite&,ColorRGBA&);
    void clear() throw();
    bool start() throw();

public:
    sipWrapper *sipPySelf;

private:
    sipMoleculeColorProcessor(const sipMoleculeColorProcessor &);
    sipMoleculeColorProcessor &operator = (const sipMoleculeColorProcessor &);

    sipMethodCache sipPyMethods[3];
};

#endif
