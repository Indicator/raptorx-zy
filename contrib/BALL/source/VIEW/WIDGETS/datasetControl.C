// -*- Mode: C++; tab-width: 2; -*-
// vi: set ts=2:
//
// $Id: datasetControl.C,v 1.46.16.2 2007-05-17 21:10:06 amoll Exp $
//

#include <BALL/VIEW/WIDGETS/datasetControl.h>
#include <BALL/VIEW/DATATYPE/dataset.h>
#include <BALL/VIEW/KERNEL/message.h>

namespace BALL
{
	namespace VIEW
	{

DatasetControl::DatasetControl(QWidget* parent, const char* name)
	throw()
	:	GenericControl(parent, name)
{
#ifdef BALL_VIEW_DEBUG
	Log.error() << "new DatasetControl " << this << std::endl;
#endif
	listview->setColumnCount(3);
	listview->headerItem()->setText(0, "Name");
	listview->headerItem()->setText(1, "from");
	listview->headerItem()->setText(2, "Type");
	listview->setSortingEnabled(true);
	default_visible_ = false;
	resize(50,50);
	registerWidget(this);
}


DatasetControl::~DatasetControl()
	throw()
{
	#ifdef BALL_VIEW_DEBUG
		Log.error() << "Destructing object " << this << " of class DatasetControl" << std::endl;
	#endif 

	listview->clear();

	for (Position p = 0; p < controllers_.size(); p++)
	{
		delete controllers_[p];
	}
}


void DatasetControl::initializeWidget(MainControl& main_control)
	throw()
{
	GenericControl::initializeWidget(main_control);
	registerForHelpSystem(this, "datasetControl.html");
	for (Position p = 0; p < controllers_.size(); p++)
	{
		controllers_[p]->createMenuEntries();
	}
}


void DatasetControl::checkMenu(MainControl& main_control)
	throw()
{
	for (Position p = 0; p < controllers_.size(); p++)
	{
		controllers_[p]->checkMenu(main_control);
	}
}


void DatasetControl::onNotify(Message *message)
	throw()
{
#ifdef BALL_VIEW_DEBUG
	Log.error() << "DatasetControl "<<this<<  " onNotify " << message << std::endl;
#endif

	GenericControl::onNotify(message);
	if (!RTTI::isKindOf<DatasetMessage>(*message)) return;
	
	DatasetMessage* msg = (DatasetMessage*) message;
	if (!msg->isValid())
	{
		BALLVIEW_DEBUG
		return;
	}

	String type = msg->getDataset()->getType();
	for (Position p = 0; p < controllers_.size(); p++)
	{
		if (controllers_[p]->getType() == type)
		{
			controllers_[p]->handle(msg);

			return;
		}
	}

	BALLVIEW_DEBUG
	Log.error() << "Unknown dataset type:"<< type << std::endl;
   
}


void DatasetControl::updateSelection()
	throw()
{
	GenericControl::updateSelection();

	ItemList list = getSelectedItems();
	ItemList::iterator it = list.begin();
	for (; it != list.end(); it++)
	{
		QTreeWidgetItem* item = *it;
		DatasetController* cont = getController(item);
		if (cont == 0) continue;

		Dataset* set = cont->getDataset(item);
		DatasetMessage* msg = new DatasetMessage(set, DatasetMessage::SELECTED);
		notify_(msg);
	}
}


DatasetControl::DatasetControl(const DatasetControl& control)
	throw()
	: GenericControl(control)
{
}


void DatasetControl::showGuestContextMenu(const QPoint& pos)
{
	getSelectedItems();
	if (context_item_ == 0) return;
	
	for (Position p = 0; p < controllers_.size(); p++)
	{
		// find the corresponding controller
		QMenu* menu = controllers_[p]->buildContextMenu(context_item_);
		if (menu != 0)
		{
			BALL_ASSIGN_NAME(menu)
			menu->exec(mapToGlobal(pos));
			delete menu;
			return;
		}
	}
}

bool DatasetControl::canHandle(const String& fileformat) const 
{ 
	for (Position p = 0; p < controllers_.size(); p++)
	{
		vector<String> file_types = controllers_[p]->getSupportedFileFormats();
		for (Position t = 0; t < file_types.size(); t++)
		{
			if (file_types[t] == fileformat)
			{
				return true;
			}
		}
	}

	return false;
}


bool DatasetControl::openFile(const String& filename)
{
	vector<String> fields;
	String suffix(filename);
	suffix.split(fields, ".");
	if (fields.size() > 1) 
	{
		suffix = fields[fields.size() - 1];
		
		for (Position p = 0; p < controllers_.size(); p++)
		{
			vector<String> file_types = controllers_[p]->getSupportedFileFormats();
			for (Position t = 0; t < file_types.size(); t++)
			{
				if (file_types[t] == suffix)
				{
					return controllers_[p]->open(suffix, filename) != 0;
				}
			}
		}
	}

	setStatusbarText(String("Can not open unknown file type: ") + suffix, true);

	return false;
}


vector<Dataset*> DatasetControl::getDatasets(const String& type)
{
	DatasetController* con = getController(type);
	if (con != 0) return con->getDatasets();

	return vector<Dataset*>();
}

DatasetController* DatasetControl::getController(const String& type)
{
	for (Position p = 0; p < controllers_.size(); p++)
	{
		if (controllers_[p]->getType() == type)
		{
			return controllers_[p];
		}
	}

	return 0;
}

DatasetController* DatasetControl::getController(QTreeWidgetItem* item)
{
	for (Position p = 0; p < controllers_.size(); p++)
	{
		if (controllers_[p]->hasItem(item))
		{
			return controllers_[p];
		}
	}

	BALLVIEW_DEBUG
	return 0;
}


String DatasetControl::getType(QTreeWidgetItem* item)
{
	for (Position p = 0; p < controllers_.size(); p++)
	{
		if (controllers_[p]->hasItem(item))
		{
			return controllers_[p]->getType();
		}
	}

	BALLVIEW_DEBUG
	return "";
}

bool DatasetControl::registerController(DatasetController* con)
{
	String type = con->getType();
	if (type == "" || type == "none")
	{
		Log.error() << "Can not register Controller with type " << type << std::endl;
		return false;
	}

	if (getController(type) != 0)
	{
		Log.error() << "Can not register Controller with type " << type << ": "
								<< "Such a controller was already registered!" << std::endl;
		return false;
	}

	controllers_.push_back(con);
	con->setDatasetControl(this);
	return true;
}

Size DatasetControl::getSelectionSize()
{
	return getSelectedItems().size();
}

	} // namespace VIEW
} // namespace BALL
