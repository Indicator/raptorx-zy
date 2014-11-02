// -*- Mode: C++; tab-width: 2; -*-
// vi: set ts=2:
//
// $Id: networkPreferences.h,v 1.3.18.1 2007-03-25 21:25:53 oliver Exp $
//

#ifndef BALL_VIEW_DIALOGS_NETWORKPREFERENCES_H
#define BALL_VIEW_DIALOGS_NETWORKPREFERENCES_H

#include <BALL/VIEW/UIC/networkPreferencesData.h>

#ifndef BALL_VIEW_KERNEL_PREFERENCESENTRY
# include <BALL/VIEW/KERNEL/preferencesEntry.h>
#endif

#include <QtGui/QWidget>

namespace BALL
{
	namespace VIEW
	{

/** NeworkPreferences is a widget that will be inserted into the
		tab dialog Preferences.
		\ingroup ViewDialogs
*/
class BALL_VIEW_EXPORT NetworkPreferences 
	: public QWidget,
		public Ui_NetworkPreferencesData,
		public PreferencesEntry
{
	Q_OBJECT

	public:
	
	/// Default Constructor.
	NetworkPreferences(QWidget *parent = NULL, const char *name = "NetworkPreferences", 
										 Qt::WFlags fl=0)
		throw();
	
	/// Destructor.
	virtual ~NetworkPreferences()
		throw();

	///
	void applySettings();

	///
	void getSettings();
};
  
} } // namespace

#endif // BALL_VIEW_DIALOGS_NETWORKPREFERENCES_H
