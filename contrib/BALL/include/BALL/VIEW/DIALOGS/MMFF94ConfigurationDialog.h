// -*- Mode: C++; tab-width: 2; -*-
// vi: set ts=2:
//
// $Id: MMFF94ConfigurationDialog.h,v 1.1.6.1 2007-03-25 21:25:43 oliver Exp $
//

#ifndef BALL_VIEW_DIALOGS_MMFF94CONFIGURATIONDIALOG_H
#define BALL_VIEW_DIALOGS_MMFF94CONFIGURATIONDIALOG_H

#include <BALL/VIEW/UIC/MMFF94ConfigurationDialogData.h>

#ifndef BALL_VIEW_KERNEL_PREFERENCESENTRY
# include <BALL/VIEW/KERNEL/preferencesEntry.h>
#endif

namespace BALL
{
	class MMFF94;
	
	namespace VIEW
	{
		class MolecularStructure;

		/** Dialog for changing the options of the MMFF94 forcefield
				\ingroup ViewDialogs
		*/
		class BALL_VIEW_EXPORT MMFF94ConfigurationDialog
			: public QDialog,
				public Ui_MMFF94ConfigurationDialogData,
				public PreferencesEntry
		{
			friend class MolecularStructure;

			Q_OBJECT
			
			public:

			/// Constructor
			MMFF94ConfigurationDialog(QWidget* parent = NULL, const char* name = "MMFF94ConfigurationDialog");

			/// Destructor
			virtual ~MMFF94ConfigurationDialog();
			
			public slots:

			///
			virtual void resetOptions();
			
			///
			void accept();

			///
			void reject();

			/// apply the settings to a given MMFF94 force field
			void applyTo(MMFF94& mmff)
				throw();

			protected slots:

			virtual void browseParameterFiles();

			protected:

			void setMMFF94(MMFF94& mmff)
				throw();

			void chooseSolventFile()
				throw();

			private:
			String getValue_(const QCheckBox* box) const;
			float getValue_(const QLineEdit* edit) const
				throw(Exception::InvalidFormat);

			MMFF94* mmff_;
		};
	}
}
#endif
