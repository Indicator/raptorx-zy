// -*- Mode: C++; tab-width: 2; -*-
// vi: set ts=2:
//
// $Id: amberConfigurationDialog.h,v 1.7.16.1 2007-03-25 21:25:43 oliver Exp $
//

#ifndef BALL_VIEW_DIALOGS_AMBERCONFIGURATIONDIALOG_H
#define BALL_VIEW_DIALOGS_AMBERCONFIGURATIONDIALOG_H

#include <BALL/VIEW/UIC/amberConfigurationDialogData.h>

#ifndef BALL_VIEW_KERNEL_PREFERENCESENTRY
# include <BALL/VIEW/KERNEL/preferencesEntry.h>
#endif

namespace BALL
{
	class AmberFF;
	
	namespace VIEW
	{
		class MolecularStructure;

		/** Dialog for changing the options of the AMBER forcefield
				\ingroup ViewDialogs
		*/
		class BALL_VIEW_EXPORT AmberConfigurationDialog
			: public QDialog,
				public Ui_AmberConfigurationDialogData,
				public PreferencesEntry
		{
			friend class MolecularStructure;

			Q_OBJECT
			
			public:

			/// Constructor
			AmberConfigurationDialog(QWidget* parent = NULL, const char* name = "AmberConfiguration");

			/// Destructor
			virtual ~AmberConfigurationDialog();
			
			public slots:

			///
			void accept();

			///
			void reject();

			///
			virtual void resetOptions();
			
			/// apply the settings to a given AMBER force field
			void applyTo(AmberFF& amber)
				throw();

			//_
			void periodicBoundaryClicked()
				throw();

			protected slots:

			virtual void browseParameterFiles();

			protected:

			void setAmberFF(AmberFF& amber)
				throw();

			void chooseSolventFile()
				throw();

			private:

			String getValue_(const QCheckBox* box) const;

			float getValue_(const QLineEdit* edit) const
				throw(Exception::InvalidFormat);

			AmberFF* amber_;
		};
	}
}
#endif
