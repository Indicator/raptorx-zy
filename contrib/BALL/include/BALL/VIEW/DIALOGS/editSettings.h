// -*- Mode: C++; tab-width: 2; -*-
// vi: set ts=2:
//
// $Id: editSettings.h,v 1.1.6.1 2007-03-25 21:25:48 oliver Exp $
//

#ifndef BALL_VIEW_DIALOGS_EDITSETTINGS_H
#define BALL_VIEW_DIALOGS_EDITSETTINGS_H

#include <BALL/VIEW/UIC/editSettingsData.h>

#ifndef BALL_VIEW_KERNEL_PREFERENCESENTRY
# include <BALL/VIEW/KERNEL/preferencesEntry.h>
#endif

#include <QtGui/QWidget>

namespace BALL
{
	namespace VIEW
	{

/** EditSettings is a widget that will be inserted into the
		tab dialog Preferences. It contains the following settings:
		- maximum distance for an atom to be picked
		- maximum distance for an bond to be picked
		- only atom in highlighted container to be picked?
		\ingroup ViewDialogs
*/
class BALL_VIEW_EXPORT EditSettings 
	: public QWidget,
		public Ui_EditSettingsData,
		public PreferencesEntry
{
	Q_OBJECT

	public:
	
	///
	EditSettings(QWidget *parent = NULL, const char *name = "EditSettings", Qt::WFlags fl=0)
		throw();
	
	///
	virtual ~EditSettings()
		throw();
};
  
} } // namespace

#endif // BALL_VIEW_DIALOGS_EDITSETTINGS_H
