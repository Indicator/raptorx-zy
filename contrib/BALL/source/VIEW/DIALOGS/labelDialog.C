// -*- Mode: C++; tab-width: 2; -*-
// vi: set ts=2:
//
// $Id:

#include <BALL/FORMAT/INIFile.h>
#include <BALL/VIEW/DIALOGS/labelDialog.h>
#include <BALL/VIEW/MODELS/labelModel.h>
#include <BALL/VIEW/KERNEL/mainControl.h>
#include <BALL/VIEW/KERNEL/common.h>

#include <QtGui/qmenubar.h>
#include <QtGui/qlabel.h>
#include <QtGui/qpushbutton.h>
#include <QtGui/qlineedit.h>
#include <QtGui/qfontdialog.h>
#include <QtGui/qradiobutton.h>

namespace BALL
{
	namespace VIEW
	{

LabelDialog::LabelDialog(QWidget* parent, const char* name)
	throw()
	:	QDialog(parent),
		Ui_LabelDialogData(),
		ModularWidget(name),
		id_(0)
{
#ifdef BALL_VIEW_DEBUG
	Log.error() << "new LabelDialog " << this << std::endl;
#endif
	setupUi(this);

	// signals and slots connections
	connect( apply_button_, SIGNAL( clicked() ), this, SLOT( accept() ) );
	connect( buttonCancel, SIGNAL( clicked() ), this, SLOT( reject() ) );
	connect( edit_button, SIGNAL( clicked() ), this, SLOT( editColor() ) );
	connect( add_tag_button, SIGNAL( clicked() ), this, SLOT( addTag() ) );
	connect( font_button, SIGNAL( clicked() ), this, SLOT( fontSelected() ) );
	connect( all_items, SIGNAL( toggled(bool) ), this, SLOT( modeChanged() ) );
	connect( text_box, SIGNAL( editTextChanged(const QString&) ), this, SLOT( textChanged() ) );

	setWindowTitle("Add Label");
	setObjectName(name);

	// register the widget with the MainControl
	ModularWidget::registerWidget(this);

	hide();
}

LabelDialog::~LabelDialog()
	throw()
{
#ifdef BALL_VIEW_DEBUG
	Log.error() << "deleting LabelDialog " << this << std::endl;
#endif
}

void LabelDialog::fetchPreferences(INIFile& inifile)
	throw()
{
	ModularWidget::fetchPreferences(inifile);

	// the color value
	if (inifile.hasEntry("WINDOWS", "Label::customcolor"))
	{
		custom_color_.set(inifile.getValue("WINDOWS", "Label::customcolor"));
		setColor(color_sample_, custom_color_);
	}

	if (inifile.hasEntry("WINDOWS", "Label::font"))
	{
		font_.fromString(inifile.getValue("WINDOWS", "Label::font").c_str());
	}
	else
	{
		font_ = QFont("Helvetica", 12);
	}

	font_label->setFont(font_);

	if (inifile.hasEntry("WINDOWS", "Label::manylabels"))
	{
		all_items->setChecked(inifile.getValue("WINDOWS", "Label::manylabels").toBool());
		every_item->setChecked(!inifile.getValue("WINDOWS", "Label::manylabels").toBool());
	}
}

void LabelDialog::writePreferences(INIFile& inifile)
	throw()
{
	ModularWidget::writePreferences(inifile);

	// the color value
	inifile.insertValue("WINDOWS", "Label::customcolor", custom_color_);

	// the font size
	inifile.insertValue("WINDOWS", "Label::font", ascii(font_.toString()));

	// many <-> one label
	inifile.insertValue("WINDOWS", "Label::manylabels", String(!all_items->isChecked()));
}

void LabelDialog::onNotify(Message *message)
	throw()
{
#ifdef BALL_VIEW_DEBUG
	Log.error() << "LabelDialog " << this << " onNotify " << message << std::endl;
#endif
	// selection => store last selection for later processing
	if (RTTI::isKindOf<ControlSelectionMessage>(*message))
	{
		ControlSelectionMessage* selection = RTTI::castTo<ControlSelectionMessage>(*message);
		// disabled apply button, if selection is empty
		const bool filled = !selection->getSelection().empty();
		apply_button_->setEnabled(filled);
		checkMenu(*getMainControl());
	}
}

void LabelDialog::initializeWidget(MainControl&)
	throw()
{
	id_ = insertMenuEntry(MainControl::DISPLAY_CREATE, "&Label", this, SLOT(show()), Qt::CTRL+Qt::Key_L);
	setMenuHint("Add a label for selected molecular objects");   
}

void LabelDialog::show()
{
	raise();
	QDialog::show();
}


void LabelDialog::accept()
{
	List<Composite*> selection = getMainControl()->getMolecularControlSelection();

	// no selection present => return
	if (selection.empty()) return;

	Representation* rep = new Representation;
	rep->setProperty(Representation::PROPERTY__ALWAYS_FRONT);
	rep->setModelType(MODEL_LABEL);

	LabelModel* model = new LabelModel;
	model->setText(ascii(text_box->currentText()));
	model->setColor(custom_color_);
	model->setFont(font_);

			 if (		 all_items->isChecked()) model->setMode(LabelModel::ONE_LABEL);
	else if (		every_atom->isChecked()) model->setMode(LabelModel::ALL_ATOMS);
	else if (every_residue->isChecked()) model->setMode(LabelModel::ALL_RESIDUES);
	else if (	  every_item->isChecked()) model->setMode(LabelModel::ALL_ITEMS);

	rep->setModelProcessor(model);

	// process all objects in the selection list
	List<Composite*>::ConstIterator list_it = selection.begin();
	List<const Composite*> composites;

	for (; list_it != selection.end(); ++list_it)
	{
		composites.push_back(*list_it);
	}

	rep->setComposites(composites);

	getMainControl()->insert(*rep);
	getMainControl()->update(*rep);
	
	text_box->addItem(text_box->currentText());

	setStatusbarText("Label added.");
}

void LabelDialog::editColor()
{
	custom_color_.set(chooseColor(color_sample_));
}

void LabelDialog::addTag()
{
	QString tag;
	if (tag_box->currentText() == "Name")							 	tag = "%N";
	else if (tag_box->currentText() == "Residue ID") 	 	tag = "%I";
	else if (tag_box->currentText() == "Atom Type")			tag = "%T";
	else if (tag_box->currentText() == "Atom Charge") 	tag = "%C";
	else if (tag_box->currentText() == "Atom Type Name")tag = "%Y";
	else if (tag_box->currentText() == "Element") 			tag = "%E";

	text_box->lineEdit()->setText(text_box->currentText() + tag);
}

void LabelDialog::fontSelected()
{
	bool ok = true;
	QFont font = QFontDialog::getFont(&ok, font_, 0);

	if (!ok) return;

	font_label->setFont(font);
	font_ = font;
}

void LabelDialog::modeChanged()
{
  tag_box->setEnabled(!all_items->isChecked());
  add_tag_button->setEnabled(!all_items->isChecked());
}

void LabelDialog::textChanged()
{
	apply_button_->setEnabled(text_box->currentText() != "");
}

void LabelDialog::checkMenu(MainControl& main_control)
	throw()
{
	id_->setEnabled(main_control.getMolecularControlSelection().size() > 0 && !main_control.isBusy());
}


} } // namespaces
