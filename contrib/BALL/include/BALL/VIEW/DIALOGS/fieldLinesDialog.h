// -*- Mode: C++; tab-width: 2; -*-
// vi: set ts=2:
//
// $Id:

#ifndef BALL_VIEW_DIALOGS_LABELDIALOG_H
#define BALL_VIEW_DIALOGS_LABELDIALOG_H

#include <BALL/VIEW/UIC/fieldLinesDialogData.h>

#ifndef BALL_COMMON_GLOBAL_H
# include <BALL/COMMON/global.h>
#endif

#ifndef BALL_VIEW_MODELS_FIELDLINE_CREATOR_H
# include <BALL/VIEW/MODELS/fieldLineCreator.h>
#endif

namespace BALL
{
	namespace VIEW
	{
		/**	Dialog for creating field lines.
    		\ingroup  ViewDialogs
		*/
		class BALL_VIEW_EXPORT FieldLinesDialog 
			: public QDialog,
				public Ui::FieldLinesDialogData,
				public FieldLineCreator
		{
			Q_OBJECT
				
			public:
			
			/** Default Constructor.
			*/
			FieldLinesDialog(QWidget *parent = NULL, const char *name = "FieldLinesDialog")
				throw();

			/** Destructor.
			*/
			virtual ~FieldLinesDialog()
				throw();

			Position getSeedMode();
			Size getMonteCarloNumberLines();
			float getTolerance();
			Size getInterpolationSteps();
			Size getMaxSteps();
			Size getIcosaederInterplationSteps();
			float getAtomsDistance();

			public slots:

			void accept();
		};

} } // namespaces

#endif // BALL_VIEW_DIALOGS_LABELDIALOG_H
