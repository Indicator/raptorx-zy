// -*- Mode: C++; tab-width: 2; -*-
// vi: set ts=2:
//
// $Id: modifyRepresentationDialog.sip,v 1.1.4.1 2007-03-25 21:37:13 oliver Exp $
//

class ModifyRepresentationDialog
  : ModularWidget
{
%TypeHeaderCode
	#include <BALL/VIEW/DIALOGS/modifyRepresentationDialog.h>
	using namespace BALL;
	using namespace BALL::VIEW;
%End
  public:

	// methods implemented by the BALL_EMBEDDED macro
	static Size countInstances();
	static ModifyRepresentationDialog* getInstance(Position /index/);

  ~ModifyRepresentationDialog() throw();

	void setRepresentation(Representation*) throw();
	void setGrid(RegularData3D*) throw();
	void setMinValue(float);
	void setMaxValue(float);
	void setMidValue(float);
	void setSplitRadius(float);

	void applyPressed();
	void cancelPressed();
	void maxPressed();
	void midPressed();
	void minPressed();
	void minMinPressed();
	void maxMaxPressed();
	void tabChanged();		
	void autoScale();
	void choosePressed();
	void gridSelected();
	void show();
	void applySplit();
};
