/*
 * Interface header file.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#ifndef _BALLModelProcessor_h
#define _BALLModelProcessor_h

#line 10 "modelProcessor.sip"
	#include <BALL/VIEW/MODELS/modelProcessor.h>
	#include "sipBALLComposite.h"
	using namespace BALL;
	using namespace BALL::VIEW;
#line 19 "sipBALLModelProcessor.h"

#define sipClass_ModelProcessor             sipModuleAPI_BALL.em_types[4]
#define sipCast_ModelProcessor              sipType_BALL_ModelProcessor.td_cast
#define sipForceConvertTo_ModelProcessor    sipType_BALL_ModelProcessor.td_fcto

extern sipTypeDef sipType_BALL_ModelProcessor;


class sipModelProcessor : public ModelProcessor
{
public:
    sipModelProcessor() throw();
    sipModelProcessor(const ModelProcessor&) throw();
    virtual ~sipModelProcessor() throw();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    void clear() throw();
    bool isValid() const throw();
    void clearComposites() throw();
    bool createGeometricObjects() throw();

public:
    sipWrapper *sipPySelf;

private:
    sipModelProcessor(const sipModelProcessor &);
    sipModelProcessor &operator = (const sipModelProcessor &);

    sipMethodCache sipPyMethods[4];
};

#endif
