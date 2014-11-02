// -*- Mode: C++; tab-width: 2; -*-
// vi: set ts=2:
//
// $Id: mainframe.h,v 1.16.16.1 2007-03-25 21:32:18 oliver Exp $
//

#ifndef BALL_APPLICATIONS_BALLVIEW_MAINFRAME_H
#define BALL_APPLICATIONS_BALLVIEW_MAINFRAME_H

#ifndef BALL_VIEW_KERNEL_MAINCONTROL_H
# include <BALL/VIEW/KERNEL/mainControl.h>
#endif

#ifndef BALL_VIEW_WIDGETS_SCENE_H
# include <BALL/VIEW/WIDGETS/scene.h>
#endif

#include <QtGui/qwidget.h>

namespace BALL
{
	using namespace BALL::VIEW;

	class Mainframe	
		: public BALL::VIEW::MainControl
	{
		Q_OBJECT

		public:

		///
		BALL_EMBEDDABLE(Mainframe, MainControl)

		///
		Mainframe(QWidget* parent = 0, const char* name = 0);

		///
		virtual ~Mainframe() throw();

		public slots:

		///
		void show();

		/// Catch key events
		bool eventFilter(QObject*, QEvent* e);
			
		/// remove all loaded Molecules and Representations, reset Coloring options
		void reset();

		// Help menu
		void about();

		///
		void howToCite();

		protected:

		Scene*				scene_;
	};

} // namespace BALL

#endif // BALL_APPLICATIONS_BALLVIEW_MAINFRAME_H
