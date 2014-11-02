// -*- Mode: C++; tab-width: 2; -*-
// vi: set ts=2:
//
// $Id: mainControlPreferences.h,v 1.14.16.1 2007-03-25 21:25:50 oliver Exp $
//

#ifndef BALL_VIEW_DIALOGS_MAINCONTROLPREFERENCES_H
#define BALL_VIEW_DIALOGS_MAINCONTROLPREFERENCES_H

#ifndef BALL_FORMAT_INIFILE_H
# include <BALL/FORMAT/INIFile.h>
#endif

#include <BALL/VIEW/UIC/mainControlPreferencesData.h>

#ifndef BALL_VIEW_KERNEL_PREFERENCESENTRY
# include <BALL/VIEW/KERNEL/preferencesEntry.h>
#endif

#include <QtGui/QWidget>
#include <QtGui/QFont>

namespace BALL
{
	namespace VIEW
	{

/** MainControlPreferences is a widget that will be inserted into the
		tab dialog Preferences. It contains the following settings:
		- the used QT style 
		- if DockWidget 's contain a label with their name
		- if logging to a file is enabled
		\ingroup ViewDialogs
*/
class BALL_VIEW_EXPORT MainControlPreferences 
	: public QWidget,
		public Ui_MainControlPreferencesData,
		public PreferencesEntry
{
	Q_OBJECT

	public:
	
	/// Default Constructor.
	MainControlPreferences(QWidget *parent = NULL, const char *name = "MainControlPreferences", 
												 Qt::WFlags fl=0)
		throw();

	////Destructor.
	virtual ~MainControlPreferences()
		throw();

	/** Inspection of the selected style.
			This method will be called from MainControl::applyPreferences().
			\return  QStyle* a pointer to the selected style.
			(See documentation of QT-library for information concerning styles)
	 */
	QStyle* getStyle()
		throw();

	/// Enable logging to file
	void enableLoggingToFile(bool state)
		throw();

	///
	bool loggingToFileEnabled() const
		throw();

	///
	QFont getFont();

	///
	void writePreferenceEntries(INIFile& inifile);

	///
	void readPreferenceEntries(const INIFile& inifile);

	public slots:

	/// Get the application's default font
	void selectFont();

	/// Set the application's default font
	void setFont(QFont font);

	protected:

	QFont font_;
};
  
} } // namespace

#endif // BALL_VIEW_DIALOGS_MAINCONTROLPREFERENCES_H
