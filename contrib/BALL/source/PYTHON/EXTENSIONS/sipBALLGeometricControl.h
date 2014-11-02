/*
 * Interface header file.
 *
 *
 * BALL is made available under the Lesser GNU Public License (LGPL).
 * See BALL/source/LICENSE for details.
 */

#ifndef _BALLGeometricControl_h
#define _BALLGeometricControl_h

#line 11 "geometricControl.sip"
	#include <BALL/VIEW/WIDGETS/geometricControl.h>
	#include <BALL/VIEW/DIALOGS/modifyRepresentationDialog.h>
	using namespace BALL;
	using namespace BALL::VIEW;
#line 19 "sipBALLGeometricControl.h"

#define sipClass_GeometricControl             sipModuleAPI_BALL.em_types[211]
#define sipCast_GeometricControl              sipType_BALL_GeometricControl.td_cast
#define sipForceConvertTo_GeometricControl    sipType_BALL_GeometricControl.td_fcto

extern sipTypeDef sipType_BALL_GeometricControl;


class sipGeometricControl : public GeometricControl
{
public:
    sipGeometricControl() throw();
    sipGeometricControl(const GeometricControl&);
    virtual ~sipGeometricControl() throw();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    void selectAtoms();
    void updateSelection();
    void focus();
    void enterMoveMode();
    void flipClippingPlane();
    void setClippingPlaneX();
    void setClippingPlaneY();
    void setClippingPlaneZ();
    void selectClipRepresentations();
    void destroy() throw();
    void clear() throw();
    void checkMenu(MainControl&) throw();
    void applyPreferences() throw();
    void fetchPreferences(INIFile&) throw();
    void writePreferences(INIFile&) throw();
    void setStatusbarText(String,bool) throw();
    void showHelp(const String&);
    bool canHandle(const String&) const;
    bool openFile(const String&);
    void registerThis() throw();

public:
    sipWrapper *sipPySelf;

private:
    sipGeometricControl(const sipGeometricControl &);
    sipGeometricControl &operator = (const sipGeometricControl &);

    sipMethodCache sipPyMethods[20];
};

#endif
