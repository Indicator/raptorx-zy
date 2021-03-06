// -*- Mode: C++; tab-width: 2; -*-
// vi: set ts=2:
//
// $Id:

#include <BALL/VIEW/DIALOGS/fieldLinesDialog.h>
#include <BALL/VIEW/KERNEL/common.h>
#include <BALL/VIEW/KERNEL/mainControl.h>

#include <QtGui/qlabel.h>

namespace BALL
{
	namespace VIEW
	{

FieldLinesDialog::FieldLinesDialog(QWidget* parent, const char* name)
	throw()
	:	QDialog(parent),
		Ui::FieldLinesDialogData(),
		FieldLineCreator()
		
{
#ifdef BALL_VIEW_DEBUG
	Log.error() << "new FieldLinesDialog " << this << std::endl;
#endif
	setupUi(this);

	// signals and slots connections
	connect( ok_button, SIGNAL( clicked() ), this, SLOT( accept() ) );
	connect( cancel_button, SIGNAL( clicked() ), this, SLOT( reject() ) );

	setObjectName(name);
}

FieldLinesDialog::~FieldLinesDialog()
	throw()
{
#ifdef BALL_VIEW_DEBUG
	Log.error() << "deleting FieldLinesDialog " << this << std::endl;
#endif
}

float FieldLinesDialog::getTolerance()
{
	return ascii(tolerance->text()).toFloat();
}	

Size FieldLinesDialog::getInterpolationSteps()
{
	return ascii(interpolation_steps->text()).toUnsignedInt();
}

Size FieldLinesDialog::getMaxSteps()
{
	return ascii(max_steps->text()).toUnsignedInt();
}

Size FieldLinesDialog::getIcosaederInterplationSteps()
{
	return start_points_per_atom->value();
}

float FieldLinesDialog::getAtomsDistance()
{
	return (float)atom_distance->value() / 10.0;
}
				
void FieldLinesDialog::accept()
{
	try
	{
		ascii(tolerance->text()).toFloat();
		ascii(interpolation_steps->text()).toUnsignedInt();
		ascii(max_steps->text()).toUnsignedInt();
	}
	catch(...)
	{
		getMainControl()->setStatusbarText("No valid floating point numbers", true);
		return;
	}

	if (Maths::isZero(getTolerance()))
	{
		getMainControl()->setStatusbarText("Tolerance too low!", true);
		Log.error() << String("Tolerance: ") + String(getTolerance()) + " !" << std::endl;
		return;
	}

	tolerance_ = getTolerance();
	atom_distance_ = getAtomsDistance();
	icosaeder_steps_ = getIcosaederInterplationSteps();
	max_steps_ = getMaxSteps();
	interpolation_steps_ = getInterpolationSteps();

  use_atoms_ = !getSeedMode();
	monte_carlo_nr_lines_ = getMonteCarloNumberLines();

	QDialog::accept();
}

Position FieldLinesDialog::getSeedMode()
{
	return seed_mode_tab_widget->currentIndex();
}

Size FieldLinesDialog::getMonteCarloNumberLines()
{
	return monte_carlo_number_lines->value();
}
		
} } // namespaces
