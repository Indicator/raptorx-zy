// -*- Mode: C++; tab-width: 2; -*-
// vi: set ts=2:
//
// $Id: editOperationDialog.h,v 1.7.16.1 2007-03-25 21:25:48 oliver Exp $ 
//

#ifndef BALL_VIEW_DIALOGS_EDITOPERATIONDIALOG_H
#define BALL_VIEW_DIALOGS_EDITOPERATIONDIALOG_H

#include <BALL/VIEW/UIC/editOperationDialogData.h>

#ifndef BALL_VIEW_KERNEL_MODULARWIDGET_H
# include <BALL/VIEW/KERNEL/modularWidget.h>
#endif

#ifndef BALL_VIEW_WIDGETS_EDITABLESCENE_H
# include <BALL/VIEW/WIDGETS/editableScene.h>
#endif

namespace BALL
{
	namespace VIEW
	{
		/** Dialog for storing the undo Operations of EditableScene.
		 		\ingroups ViewDialogs
		*/

		class BALL_VIEW_EXPORT EditOperationDialog
			: public QDialog,
				public Ui_EditOperationDialogData,
				public ModularWidget
	  {
			Q_OBJECT

			public:
			
			BALL_EMBEDDABLE(EditOperationDialogData,ModularWidget)

			///
			EditOperationDialog(QWidget* parent = 0, const char* name = "EditOperationDialog", Qt::WFlags fl = 0);

			///
			~EditOperationDialog()
				throw();
		 
		
			public slots:
				
				void undo(int number_of_undo_steps);
				void operationSelected(int operation);
				void addEditOperation(EditableScene::EditOperation& eo);
				
			protected:

		};
	}
}

#endif
