// -*- Mode: C++; tab-width: 2; -*-
// vi: set ts=2:
//
// $Id: dockWidget.C,v 1.28.16.1 2007-03-25 21:56:44 oliver Exp $

#include <BALL/VIEW/WIDGETS/dockWidget.h>
#include <BALL/VIEW/KERNEL/mainControl.h>
#include <BALL/VIEW/KERNEL/message.h>

#include <QtGui/qmenubar.h>

namespace BALL
{
	namespace VIEW
	{

		DockWidget::DockWidget()
			:	QDockWidget(),
				ModularWidget(),
				guest_(0)
		{
		}
	
		DockWidget::DockWidget(const DockWidget&)
			:	QDockWidget(),
				ModularWidget(),
				guest_(0)
		{
			setAcceptDrops(true);
		}
			
		
		DockWidget::DockWidget(QWidget* parent, const char* name)
			: QDockWidget(name, parent),
				ModularWidget(name),
				container_(0),
				guest_(0),
				layout_(0)
		{
			if (name != 0) 
			{ 
				setObjectName(name);
			}
			else 
			{
				Log.error() << "No valid name for DockWidget!" << std::endl;
				setObjectName("DockWidget");
			}

			setAcceptDrops(true);
//   			setFloating(false);
			container_ = new QWidget(this);
			container_->setObjectName("Container");
			setWidget(container_);

			layout_ = new QGridLayout();
			layout_->setMargin(0);
			layout_->setObjectName("Layout");
			container_->setLayout(layout_);
		}

		void DockWidget::setGuest(QWidget& guest)
		{
			guest_ = &guest;
			setMinimumSize(0, 0);
			setMaximumSize(15000, 15000);
			guest.setParent(container_);
			layout_->addWidget(&guest);

			if (guest.objectName() == "")
			{
				guest.setObjectName("Guest");
			}

			guest.setContextMenuPolicy(Qt::CustomContextMenu);
			connect(&guest, SIGNAL(customContextMenuRequested(const QPoint&)), 
									this, SLOT(showGuestContextMenu(const QPoint&)));
		}

		void DockWidget::initializeWidget(MainControl&)
			throw()
		{
			window_menu_entry_ = toggleViewAction();
			getMainControl()->initPopupMenu(MainControl::WINDOWS)->addAction(window_menu_entry_);
		}

		void DockWidget::writePreferences(INIFile& inifile)
			throw()
		{
			if (window_menu_entry_ != 0)
			{
 				inifile.insertValue("WINDOWS", getIdentifier() + "::on", String(window_menu_entry_->isChecked()));
			}
		}

		void DockWidget::fetchPreferences(INIFile & inifile)
			throw()
		{
			// if the INIFile does not have the information to restore the state of the dockwidgets,
			// make only the default widgets visible
			if (inifile.hasEntry("WINDOWS", getIdentifier() + "::on"))
			{
				setWidgetVisible(inifile.getValue("WINDOWS", getIdentifier() + "::on").toBool());
			}
			else if (!default_visible_)
			{
				setWidgetVisible(false);
			}
		}

		void DockWidget::dropEvent(QDropEvent* e)
		{
			VIEW::processDropEvent(e);
		}

		void DockWidget::dragEnterEvent(QDragEnterEvent* event)
		{
			if (event->mimeData()->hasUrls()) event->acceptProposedAction();
		}

		// only for Python needed
		void DockWidget::setWidgetVisible(bool state)
		{
 			if (window_menu_entry_ != 0) window_menu_entry_->setChecked(state);

			QDockWidget::setVisible(state);
		}

		void DockWidget::registerForHelpSystem(const QObject* widget, const String& url)
		{
			ModularWidget::registerForHelpSystem(widget, url);

			// also register Windows menu entry!
			RegisterHelpSystemMessage* msg = new RegisterHelpSystemMessage();
			msg->setObject(window_menu_entry_);
			msg->setURL(url);
			notify_(msg);
		}

	} // namespace VIEW 
} // namespace BALL
