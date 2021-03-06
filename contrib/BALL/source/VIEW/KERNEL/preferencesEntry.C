// -*- Mode: C++; tab-width: 2; -*-
// vi: set ts=2:
//
// $Id: preferencesEntry.C,v 1.19.16.2 2007-05-30 20:14:15 amoll Exp $
//

#include <BALL/VIEW/KERNEL/preferencesEntry.h>
#include <BALL/VIEW/KERNEL/message.h>
#include <BALL/VIEW/KERNEL/mainControl.h>
#include <BALL/VIEW/DATATYPE/colorRGBA.h>

#include <QtGui/qslider.h>
#include <QtGui/qspinbox.h>
#include <QtGui/qlabel.h>
#include <QtGui/qcheckbox.h>
#include <QtGui/qlineedit.h>
#include <QtGui/qslider.h>
#include <QtGui/QStackedWidget>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QGroupBox>
#include <QtGui/QRadioButton>

using namespace std;

namespace BALL
{
	namespace VIEW
	{

		PreferencesEntry::PreferencesEntry()
			: widget_stack_(0)
		{
			#ifdef BALL_VIEW_DEBUG
				Log.info() << "New PreferencesEntry " << (void *)this << std::endl;
			#endif 
		}

		PreferencesEntry::~PreferencesEntry()
		{
		}

		void PreferencesEntry::registerWidgets_()
		{
			QObject* obj = dynamic_cast<QObject*>(this);
			if (obj == 0)
			{
				BALLVIEW_DEBUG
				return;
			}

			QList<QWidget*> widgets = obj->findChildren<QWidget *>();
			QList<QWidget*>::iterator it2 = widgets.begin();
			for (; it2 != widgets.end(); it2++)
			{
				QWidget& widget = **it2;
				if (isSupported_(widget)) registerWidget_(&widget);
			}
			
			//////////////////////////////////////////////////////
			// prevent problems with inconsistant sliders/labels combinations:
			QList<QSlider*> sliders = obj->findChildren<QSlider*>();
			QList<QSlider*>::iterator it = sliders.begin();
			for (; it != sliders.end(); it++)
			{
				QSlider& slider = **it;
				Index value = slider.value();
				if (value > slider.minimum())
				{
					slider.setValue(value - 1);
				}
				else
				{
					slider.setValue(value + 1);
				}

 				slider.setValue(value);
			}
		}


		bool PreferencesEntry::isSupported_(QWidget& widget)
		{
			if (RTTI::isKindOf<ExtendedPreferencesObject>(widget) ||
					RTTI::isKindOf<QSlider>(widget) 			||
					RTTI::isKindOf<QSpinBox>(widget)			||
					RTTI::isKindOf<QLineEdit>(widget)			||
					RTTI::isKindOf<QCheckBox>(widget)			||
					RTTI::isKindOf<QComboBox>(widget)			||
					RTTI::isKindOf<QButtonGroup>(widget))
			{
				return true;
			}

			// color labels
			QLabel* label = dynamic_cast<QLabel*>(&widget);
			if (label != 0 								&& 
					label->objectName() != "" &&
					label->text() == "")
			{
				return true;
			}

			QGroupBox* box = dynamic_cast<QGroupBox*>(&widget);
			if (box != 0 && (box->isCheckable() || box->findChildren<QRadioButton*>().size()))
			{
				return true;
			}

			return false;
		}

		void PreferencesEntry::writePreferenceEntries(INIFile& inifile)
		{
			if (registered_objects_.size() == 0) return;

			QWidget* widget = dynamic_cast<QWidget*>(this);
			if (widget == 0)
			{
				Log.error() << "This PreferencesEntry is not a QWidget! " << std::endl;
				return;
			}

			if (inifile_section_name_ == "") 
			{
				Log.error() << "INIFile section name not set in " << ascii(widget->objectName()) << std::endl;
				StackPages::const_iterator lit = stack_pages_.begin();
				for (;lit != stack_pages_.end(); ++lit)
				{
					Log.error() << (*lit).second << std::endl;
				}

				return;
			}

			if (!inifile.hasSection(inifile_section_name_))
			{
				inifile.appendSection(inifile_section_name_);
			}

			String value, name;
			
			HashSet<QWidget*>::Iterator it = registered_objects_.begin();
			for (; it != registered_objects_.end(); it++)
			{
				name = ascii((**it).objectName());

				if (name == "" || !getValue_(*it, value))
				{
					if (name == "")
					{
						Log.error() << "Unnamed Preferences object!";
					}

					Log.error() << " in PreferencesEntry: " << ascii(widget->objectName()) << " ";
				  Log.error() << __FILE__ << " " << __LINE__ << std::endl;

					continue;
				}

				inifile.insertValue(inifile_section_name_, name, value);
			}
		}


		bool PreferencesEntry::getValue_(const QWidget* widget, String& value)
		{
			const ExtendedPreferencesObject* epo = dynamic_cast<const ExtendedPreferencesObject*>(widget);
			if (epo != 0)
			{
				if (!epo->getValue(value))
				{
					BALLVIEW_DEBUG;
				}
			}
			else if (RTTI::isKindOf<QSlider>(*widget))
			{
				value = String((dynamic_cast<const QSlider*>(widget))->value());
			}
			else if (RTTI::isKindOf<QSpinBox>(*widget))
			{
				value = String((dynamic_cast<const QSpinBox*>(widget))->value());
			}
			else if (RTTI::isKindOf<QLabel>(*widget))
			{
				value = getColor(dynamic_cast<const QLabel*>(widget));
			}
			else if (RTTI::isKindOf<QLineEdit>(*widget))
			{
				value = ascii((dynamic_cast<const QLineEdit*>(widget))->text());
			}
			else if (RTTI::isKindOf<QCheckBox>(*widget))
			{
				value = String((dynamic_cast<const QCheckBox*>(widget))->isChecked());
			}
			else if (RTTI::isKindOf<QComboBox>(*widget))
			{
				value = String((dynamic_cast<const QComboBox*>(widget))->currentIndex());
			}
			else if (RTTI::isKindOf<QButtonGroup>(*widget))
			{
				const QButtonGroup* qbg = dynamic_cast<const QButtonGroup*>(widget);

				// no button selected (should not happen) -> select first
				if (qbg->checkedId() == -1)
				{
					value="0";
					return true;
				}

				value = String(qbg->checkedId());
			}
			else if (RTTI::isKindOf<QGroupBox>(*widget))
			{
				value.clear();
				// QGroupBoxes can either be checkable and/or have QRadioButtons as childs
				const QGroupBox* gb = dynamic_cast<const QGroupBox*>(widget);
				if (gb->isCheckable() && gb->isChecked()) 
				{
					value = "#";
				}

				QList<QRadioButton*> rbs = gb->findChildren<QRadioButton*>();
				QList<QRadioButton*>::iterator it = rbs.begin();
				for (; it != rbs.end(); it++)
				{
					if (((QRadioButton*) *it)->isChecked())
					{
						value += ascii((**it).objectName());
						return true;
					}
				}

				if (gb->isCheckable() || rbs.size()) return true;

				Log.error() << "Warning: QGroupBox " << ascii(widget->objectName())
										<< " in PreferencesEntry without QRadioButton" << std::endl;
				return false;
			}
			else
			{
				Log.error() << "Unknown Preferences object " << ascii(widget->objectName()) << std::endl;
				return false;
			}

			return true;
		}


		void PreferencesEntry::readPreferenceEntries(const INIFile& inifile)
		{
			HashSet<QWidget*>::Iterator it = registered_objects_.begin();
			for (; it != registered_objects_.end(); it++)
			{
				if (!inifile.hasEntry(inifile_section_name_, ascii((**it).objectName()))) continue;

				String value = inifile.getValue(inifile_section_name_, ascii((**it).objectName()));

				if (!setValue_(*it, value))
				{
					Log.error() << "Invalid entry in INIFile: " << ascii((**it).objectName()) << " " << value << std::endl;
				}
			}
		}

		
		bool PreferencesEntry::setValue_(QWidget* widget, const String& value)
		{
			try
			{
				ExtendedPreferencesObject* epo = dynamic_cast<ExtendedPreferencesObject*>(widget);
				if (epo != 0)
				{
					if (!epo->setValue(value))
					{
						BALLVIEW_DEBUG;
					}
				}
				else if (RTTI::isKindOf<QSlider>(*widget))
				{
					(dynamic_cast<QSlider*>(widget))->setValue(value.toInt());
				}
				else if (RTTI::isKindOf<QSpinBox>(*widget))
				{
					(dynamic_cast<QSpinBox*>(widget))->setValue(value.toInt());
				}
				else if (RTTI::isKindOf<QLabel>(*widget))
				{
					setColor(dynamic_cast<QLabel*>(widget), ColorRGBA(value));
				}
				else if (RTTI::isKindOf<QLineEdit>(*widget))
				{
					(dynamic_cast<QLineEdit*>(widget))->setText(value.c_str());
				}
				else if (RTTI::isKindOf<QCheckBox>(*widget))
				{
					(dynamic_cast<QCheckBox*>(widget))->setChecked(value == "1");
				}
				else if (RTTI::isKindOf<QComboBox>(*widget))
				{
					if (value.toUnsignedInt() >= (Position)(dynamic_cast<QComboBox*>(widget))->count()) return false;
					(dynamic_cast<QComboBox*>(widget))->setCurrentIndex(value.toInt());
				}
				else if (RTTI::isKindOf<QButtonGroup>(*widget))
				{
					(dynamic_cast<QButtonGroup*>(widget))->button(value.toInt())->setChecked(true);
				}
				else if (RTTI::isKindOf<QGroupBox>(*widget))
				{
					QGroupBox* gb = dynamic_cast<QGroupBox*> (widget);
					String v = value;
					if (gb->isCheckable())
					{
						gb->setChecked(v[0] == '#');
					}
						
					v.trimLeft("#");

					QRadioButton* button = widget->findChild<QRadioButton*>(v.c_str());
					if (button != 0) 
					{
						button->setChecked(true);
						return true;
					}

					if (!gb->isCheckable())
					{
						Log.error() << "Warning: Could not find QRadioButton " << value 
												<< " in GroupBox in PreferencesEntry" << std::endl;
						return false;
					}
				}
				else 
				{
					Log.error() << "Unknown QWidget " << ascii(widget->objectName()) << " in ";
					if (widget->parent() != 0)
					{
						Log.error() << ascii(widget->parent()->objectName()) << " in ";
					}

					Log.error() << __FILE__ << " " << __LINE__ << std::endl;
					return false;
				}
			}
			catch(...)
			{
				return false;
			}

			return true;
		}

		
		void PreferencesEntry::registerWidget_(QWidget* widget)
		{
			if (widget == 0) return;

			if (ascii(widget->objectName()) == "")
			{
				Log.error() << "Unnamed Preferences object!" << std::endl;
				return;
			}

			if (registered_objects_.has(widget))
			{
				Log.error() << "Widget " << widget << " with name " << ascii(widget->objectName()) 
										<< " was already added!" << std::endl;
				return;
			}

			registered_objects_.insert(widget);

			String value;
			if (!getValue_(widget, value))
			{
				BALLVIEW_DEBUG
			}
			
			default_values_[widget] = value;
			last_values_[widget] = value;
		}


		void PreferencesEntry::unregisterWidget_(QWidget* widget)
		{
			if (widget == 0) return;

			if (!registered_objects_.has(widget))
			{
				Log.error() << "Widget " << widget << " with name " << ascii(widget->objectName()) 
										<< " was not added!" << std::endl;
				return;
			}

			registered_objects_.erase(widget);

			default_values_.erase(widget);
			last_values_.erase(widget);
		}

	
		void PreferencesEntry::setWidgetStackName(const String& name)
		{
			QWidget* widget = dynamic_cast<QWidget*>(this);

			if (widget == 0)
			{
				BALLVIEW_DEBUG;
				return;
			}

			insertStackEntry_(widget, name);
		}
			
		void PreferencesEntry::insertStackEntry_(QWidget* widget, const String& name)
		{
			stack_pages_.push_back(std::pair<QWidget*, String>(widget, name));
		}

		
		void PreferencesEntry::showStackPage(Position nr) 
		{ 
			if (widget_stack_ == 0) return;
			widget_stack_->setCurrentWidget(widget_stack_->widget(nr));
		}

		void PreferencesEntry::showStackPage(QWidget* widget) 
		{ 
			if (widget_stack_ == 0) return;
			
			// workaround for damn QT 4.1!
			for (Index p = 0; p < widget_stack_->count(); p++)
			{
				widget_stack_->widget(p)->hide();
			}

			widget_stack_->setCurrentWidget(widget);
			widget_stack_->show();
			widget->show();
		}

		
		void PreferencesEntry::setWidgetStack(QStackedWidget* stack)
		{
			widget_stack_ = stack;

			if (widget_stack_ == 0) return;

			for (Position p = 0; p < 9999; p++)
			{
				if (widget_stack_->widget(p) == 0) break;

				String name = ascii(widget_stack_->widget(p)->objectName());
				for (Position i = 0; i < name.size(); i++)
				{
					if (name[i] == '_') name[i] = ' ';
				}
				insertStackEntry_(widget_stack_->widget(p), name);
			}
		}


		Position PreferencesEntry::currentStackPage() const
		{
			if (widget_stack_ == 0) return 0;
			return widget_stack_->currentIndex();
		}


		void PreferencesEntry::registerWidgetForHelpSystem_(const QWidget* widget, const String& url)
		{
			if (getMainControl() == 0) return;

			RegisterHelpSystemMessage* msg = new RegisterHelpSystemMessage();
			msg->setObject(widget);
			msg->setURL(url);
			getMainControl()->sendMessage(*msg);
		}
		

		void PreferencesEntry::storeValues()
		{
			String value;

			HashSet<QWidget*>::Iterator it = registered_objects_.begin();
			for (; it != registered_objects_.end(); it++)
			{
			 	getValue_(*it, value);
				last_values_[*it] = value;
			}
		}

		void PreferencesEntry::restoreValues_(bool all, const ValueMap& map)
		{
			// if this entry does not have a widget stack, or all child entries are to be restored:
			if (widget_stack_ == 0 || all)
			{
				HashSet<QWidget*>::Iterator it = registered_objects_.begin();
				for (; +it; it++)
				{
					setValue_(*it, map[*it]);
				}

				return;
			}

			// entries for current widget stack item
			Index id = currentStackPage();
			if (id == -1) return;

			QWidget* widget = widget_stack_->widget(id);
			QList<QWidget*> widgets = widget->findChildren<QWidget *>();

			QList<QWidget*>::iterator it = widgets.begin();
			for (; it != widgets.end(); it++)
			{
				QWidget& child = **it;
				if (registered_objects_.has(&child)) setValue_(&child, map[&child]);
			}
		}


		void PreferencesEntry::restoreValues(bool all)
		{
			restoreValues_(all, last_values_);
		}


		void PreferencesEntry::restoreDefaultValues(bool all)
		{
			restoreValues_(all, default_values_);
		}

		
		void PreferencesEntry::dump(ostream& s, Size depth) const
			throw()
		{
			BALL_DUMP_STREAM_PREFIX(s);
			BALL_DUMP_DEPTH(s, depth);
			HashSet<QWidget*>::ConstIterator it = registered_objects_.begin();
			for (; +it; ++it)
			{
				s << ascii((**it).objectName()) << std::endl;
			}
			BALL_DUMP_STREAM_SUFFIX(s);     
		}

	} // namespace VIEW
} // namespace BALL
