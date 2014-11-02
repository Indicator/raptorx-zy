/********************************************************************************
** Form generated from reading ui file 'FDPBDialog.ui'
**
** Created: Wed Mar 19 14:28:17 2008
**      by: Qt User Interface Compiler version 4.2.2
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef FDPBDIALOGDATA_H
#define FDPBDIALOGDATA_H

#include <BALL/COMMON/global.h>
#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>

class Ui_FDPBDialogData
{
public:
    QGridLayout *gridLayout;
    QGridLayout *gridLayout1;
    QGroupBox *buttonGroup3;
    QVBoxLayout *vboxLayout;
    QCheckBox *add_hydrogens;
    QCheckBox *normalize_names;
    QCheckBox *build_bonds;
    QCheckBox *assign_radii;
    QCheckBox *assign_charges;
    QGroupBox *groupBox4;
    QGridLayout *gridLayout2;
    QGroupBox *boundary_group;
    QGridLayout *gridLayout3;
    QRadioButton *boundary_focusing;
    QRadioButton *boundary_zero;
    QRadioButton *boundary_dipole;
    QRadioButton *boundary_debye;
    QRadioButton *boundary_coulomb;
    QGroupBox *charge_distribution_group;
    QGridLayout *gridLayout4;
    QRadioButton *charge_trilinear;
    QRadioButton *charge_uniform;
    QGroupBox *smoothing_group;
    QGridLayout *gridLayout5;
    QRadioButton *smoothing_none;
    QRadioButton *smoothing_uniform;
    QRadioButton *smoothing_harmonic;
    QGridLayout *gridLayout6;
    QLineEdit *max_iterations;
    QLabel *textLabel9;
    QLabel *textLabel6;
    QLabel *textLabel7;
    QLineEdit *dc_solvent;
    QLineEdit *temperature;
    QLabel *textLabel1;
    QLabel *textLabel5;
    QLineEdit *ion_radius;
    QLineEdit *spacing;
    QLineEdit *ionic_strenght;
    QLabel *textLabel4;
    QLabel *textLabel2;
    QLineEdit *dc_interior;
    QLineEdit *border;
    QLineEdit *probe_radius;
    QLabel *textLabel8;
    QLabel *textLabel10;
    QSpacerItem *spacerItem;
    QHBoxLayout *hboxLayout;
    QPushButton *ok_button;
    QPushButton *cancel_button;
    QPushButton *reset_button;
    QSpacerItem *spacerItem1;
    QHBoxLayout *hboxLayout1;
    QGroupBox *radii_group;
    QGridLayout *gridLayout7;
    QLineEdit *radii_rules_lineedit;
    QRadioButton *radii_data_button;
    QPushButton *radii_data_browse;
    QLineEdit *radii_data_lineedit;
    QPushButton *radii_rules_browse;
    QRadioButton *radii_rules_button;
    QGroupBox *charges_group;
    QGridLayout *gridLayout8;
    QRadioButton *charges_rules_button;
    QPushButton *charges_rules_browse;
    QLineEdit *charges_rules_lineedit;
    QPushButton *charges_data_browse;
    QLineEdit *charges_data_lineedit;
    QRadioButton *charges_data_button;
    QSpacerItem *spacerItem2;

    void setupUi(QDialog *FDPBDialogData)
    {
    FDPBDialogData->setObjectName(QString::fromUtf8("FDPBDialogData"));
    gridLayout = new QGridLayout(FDPBDialogData);
    gridLayout->setSpacing(6);
    gridLayout->setMargin(9);
    gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
    gridLayout1 = new QGridLayout();
    gridLayout1->setSpacing(6);
    gridLayout1->setMargin(0);
    gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
    buttonGroup3 = new QGroupBox(FDPBDialogData);
    buttonGroup3->setObjectName(QString::fromUtf8("buttonGroup3"));
    vboxLayout = new QVBoxLayout(buttonGroup3);
    vboxLayout->setSpacing(6);
    vboxLayout->setMargin(9);
    vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
    add_hydrogens = new QCheckBox(buttonGroup3);
    add_hydrogens->setObjectName(QString::fromUtf8("add_hydrogens"));

    vboxLayout->addWidget(add_hydrogens);

    normalize_names = new QCheckBox(buttonGroup3);
    normalize_names->setObjectName(QString::fromUtf8("normalize_names"));

    vboxLayout->addWidget(normalize_names);

    build_bonds = new QCheckBox(buttonGroup3);
    build_bonds->setObjectName(QString::fromUtf8("build_bonds"));

    vboxLayout->addWidget(build_bonds);

    assign_radii = new QCheckBox(buttonGroup3);
    assign_radii->setObjectName(QString::fromUtf8("assign_radii"));
    assign_radii->setChecked(true);

    vboxLayout->addWidget(assign_radii);

    assign_charges = new QCheckBox(buttonGroup3);
    assign_charges->setObjectName(QString::fromUtf8("assign_charges"));
    assign_charges->setChecked(true);

    vboxLayout->addWidget(assign_charges);


    gridLayout1->addWidget(buttonGroup3, 0, 1, 1, 1);

    groupBox4 = new QGroupBox(FDPBDialogData);
    groupBox4->setObjectName(QString::fromUtf8("groupBox4"));
    gridLayout2 = new QGridLayout(groupBox4);
    gridLayout2->setSpacing(6);
    gridLayout2->setMargin(9);
    gridLayout2->setObjectName(QString::fromUtf8("gridLayout2"));
    boundary_group = new QGroupBox(groupBox4);
    boundary_group->setObjectName(QString::fromUtf8("boundary_group"));
    QSizePolicy sizePolicy(static_cast<QSizePolicy::Policy>(7), static_cast<QSizePolicy::Policy>(7));
    sizePolicy.setHorizontalStretch(0);
    sizePolicy.setVerticalStretch(0);
    sizePolicy.setHeightForWidth(boundary_group->sizePolicy().hasHeightForWidth());
    boundary_group->setSizePolicy(sizePolicy);
    gridLayout3 = new QGridLayout(boundary_group);
    gridLayout3->setSpacing(4);
    gridLayout3->setMargin(5);
    gridLayout3->setObjectName(QString::fromUtf8("gridLayout3"));
    boundary_focusing = new QRadioButton(boundary_group);
    boundary_focusing->setObjectName(QString::fromUtf8("boundary_focusing"));
    boundary_focusing->setMinimumSize(QSize(130, 0));
    boundary_focusing->setMaximumSize(QSize(130, 32767));
    boundary_focusing->setChecked(false);

    gridLayout3->addWidget(boundary_focusing, 4, 0, 1, 1);

    boundary_zero = new QRadioButton(boundary_group);
    boundary_zero->setObjectName(QString::fromUtf8("boundary_zero"));
    boundary_zero->setMinimumSize(QSize(130, 0));
    boundary_zero->setMaximumSize(QSize(130, 32767));
    boundary_zero->setChecked(false);

    gridLayout3->addWidget(boundary_zero, 3, 0, 1, 1);

    boundary_dipole = new QRadioButton(boundary_group);
    boundary_dipole->setObjectName(QString::fromUtf8("boundary_dipole"));
    boundary_dipole->setMinimumSize(QSize(130, 0));
    boundary_dipole->setMaximumSize(QSize(130, 32767));
    boundary_dipole->setChecked(true);

    gridLayout3->addWidget(boundary_dipole, 0, 0, 1, 1);

    boundary_debye = new QRadioButton(boundary_group);
    boundary_debye->setObjectName(QString::fromUtf8("boundary_debye"));
    boundary_debye->setMinimumSize(QSize(130, 0));
    boundary_debye->setMaximumSize(QSize(130, 32767));

    gridLayout3->addWidget(boundary_debye, 1, 0, 1, 1);

    boundary_coulomb = new QRadioButton(boundary_group);
    boundary_coulomb->setObjectName(QString::fromUtf8("boundary_coulomb"));
    boundary_coulomb->setMinimumSize(QSize(130, 0));
    boundary_coulomb->setMaximumSize(QSize(130, 32767));

    gridLayout3->addWidget(boundary_coulomb, 2, 0, 1, 1);


    gridLayout2->addWidget(boundary_group, 0, 2, 1, 1);

    charge_distribution_group = new QGroupBox(groupBox4);
    charge_distribution_group->setObjectName(QString::fromUtf8("charge_distribution_group"));
    QSizePolicy sizePolicy1(static_cast<QSizePolicy::Policy>(7), static_cast<QSizePolicy::Policy>(7));
    sizePolicy1.setHorizontalStretch(0);
    sizePolicy1.setVerticalStretch(0);
    sizePolicy1.setHeightForWidth(charge_distribution_group->sizePolicy().hasHeightForWidth());
    charge_distribution_group->setSizePolicy(sizePolicy1);
    gridLayout4 = new QGridLayout(charge_distribution_group);
    gridLayout4->setSpacing(4);
    gridLayout4->setMargin(5);
    gridLayout4->setObjectName(QString::fromUtf8("gridLayout4"));
    charge_trilinear = new QRadioButton(charge_distribution_group);
    charge_trilinear->setObjectName(QString::fromUtf8("charge_trilinear"));
    charge_trilinear->setChecked(true);

    gridLayout4->addWidget(charge_trilinear, 1, 0, 1, 1);

    charge_uniform = new QRadioButton(charge_distribution_group);
    charge_uniform->setObjectName(QString::fromUtf8("charge_uniform"));
    charge_uniform->setChecked(false);

    gridLayout4->addWidget(charge_uniform, 0, 0, 1, 1);


    gridLayout2->addWidget(charge_distribution_group, 2, 2, 1, 1);

    smoothing_group = new QGroupBox(groupBox4);
    smoothing_group->setObjectName(QString::fromUtf8("smoothing_group"));
    QSizePolicy sizePolicy2(static_cast<QSizePolicy::Policy>(7), static_cast<QSizePolicy::Policy>(7));
    sizePolicy2.setHorizontalStretch(0);
    sizePolicy2.setVerticalStretch(0);
    sizePolicy2.setHeightForWidth(smoothing_group->sizePolicy().hasHeightForWidth());
    smoothing_group->setSizePolicy(sizePolicy2);
    gridLayout5 = new QGridLayout(smoothing_group);
    gridLayout5->setSpacing(4);
    gridLayout5->setMargin(5);
    gridLayout5->setObjectName(QString::fromUtf8("gridLayout5"));
    smoothing_none = new QRadioButton(smoothing_group);
    smoothing_none->setObjectName(QString::fromUtf8("smoothing_none"));
    smoothing_none->setChecked(true);

    gridLayout5->addWidget(smoothing_none, 0, 0, 1, 1);

    smoothing_uniform = new QRadioButton(smoothing_group);
    smoothing_uniform->setObjectName(QString::fromUtf8("smoothing_uniform"));

    gridLayout5->addWidget(smoothing_uniform, 1, 0, 1, 1);

    smoothing_harmonic = new QRadioButton(smoothing_group);
    smoothing_harmonic->setObjectName(QString::fromUtf8("smoothing_harmonic"));

    gridLayout5->addWidget(smoothing_harmonic, 2, 0, 1, 1);


    gridLayout2->addWidget(smoothing_group, 1, 2, 1, 1);

    gridLayout6 = new QGridLayout();
    gridLayout6->setSpacing(6);
    gridLayout6->setMargin(0);
    gridLayout6->setObjectName(QString::fromUtf8("gridLayout6"));
    max_iterations = new QLineEdit(groupBox4);
    max_iterations->setObjectName(QString::fromUtf8("max_iterations"));
    max_iterations->setMaximumSize(QSize(80, 23));
    max_iterations->setAlignment(Qt::AlignRight);

    gridLayout6->addWidget(max_iterations, 8, 1, 1, 1);

    textLabel9 = new QLabel(groupBox4);
    textLabel9->setObjectName(QString::fromUtf8("textLabel9"));
    QSizePolicy sizePolicy3(static_cast<QSizePolicy::Policy>(7), static_cast<QSizePolicy::Policy>(5));
    sizePolicy3.setHorizontalStretch(0);
    sizePolicy3.setVerticalStretch(0);
    sizePolicy3.setHeightForWidth(textLabel9->sizePolicy().hasHeightForWidth());
    textLabel9->setSizePolicy(sizePolicy3);
    textLabel9->setMinimumSize(QSize(210, 0));

    gridLayout6->addWidget(textLabel9, 2, 0, 1, 1);

    textLabel6 = new QLabel(groupBox4);
    textLabel6->setObjectName(QString::fromUtf8("textLabel6"));
    QSizePolicy sizePolicy4(static_cast<QSizePolicy::Policy>(7), static_cast<QSizePolicy::Policy>(5));
    sizePolicy4.setHorizontalStretch(0);
    sizePolicy4.setVerticalStretch(0);
    sizePolicy4.setHeightForWidth(textLabel6->sizePolicy().hasHeightForWidth());
    textLabel6->setSizePolicy(sizePolicy4);
    textLabel6->setMinimumSize(QSize(210, 0));

    gridLayout6->addWidget(textLabel6, 5, 0, 1, 1);

    textLabel7 = new QLabel(groupBox4);
    textLabel7->setObjectName(QString::fromUtf8("textLabel7"));
    QSizePolicy sizePolicy5(static_cast<QSizePolicy::Policy>(7), static_cast<QSizePolicy::Policy>(5));
    sizePolicy5.setHorizontalStretch(0);
    sizePolicy5.setVerticalStretch(0);
    sizePolicy5.setHeightForWidth(textLabel7->sizePolicy().hasHeightForWidth());
    textLabel7->setSizePolicy(sizePolicy5);
    textLabel7->setMinimumSize(QSize(210, 0));

    gridLayout6->addWidget(textLabel7, 4, 0, 1, 1);

    dc_solvent = new QLineEdit(groupBox4);
    dc_solvent->setObjectName(QString::fromUtf8("dc_solvent"));
    dc_solvent->setMinimumSize(QSize(80, 0));
    dc_solvent->setMaximumSize(QSize(80, 23));
    dc_solvent->setAlignment(Qt::AlignRight);

    gridLayout6->addWidget(dc_solvent, 0, 1, 1, 1);

    temperature = new QLineEdit(groupBox4);
    temperature->setObjectName(QString::fromUtf8("temperature"));
    temperature->setMaximumSize(QSize(80, 23));
    temperature->setAlignment(Qt::AlignRight);

    gridLayout6->addWidget(temperature, 7, 1, 1, 1);

    textLabel1 = new QLabel(groupBox4);
    textLabel1->setObjectName(QString::fromUtf8("textLabel1"));
    QSizePolicy sizePolicy6(static_cast<QSizePolicy::Policy>(7), static_cast<QSizePolicy::Policy>(5));
    sizePolicy6.setHorizontalStretch(0);
    sizePolicy6.setVerticalStretch(0);
    sizePolicy6.setHeightForWidth(textLabel1->sizePolicy().hasHeightForWidth());
    textLabel1->setSizePolicy(sizePolicy6);
    textLabel1->setMinimumSize(QSize(210, 0));

    gridLayout6->addWidget(textLabel1, 8, 0, 1, 1);

    textLabel5 = new QLabel(groupBox4);
    textLabel5->setObjectName(QString::fromUtf8("textLabel5"));
    QSizePolicy sizePolicy7(static_cast<QSizePolicy::Policy>(7), static_cast<QSizePolicy::Policy>(5));
    sizePolicy7.setHorizontalStretch(0);
    sizePolicy7.setVerticalStretch(0);
    sizePolicy7.setHeightForWidth(textLabel5->sizePolicy().hasHeightForWidth());
    textLabel5->setSizePolicy(sizePolicy7);
    textLabel5->setMinimumSize(QSize(210, 0));

    gridLayout6->addWidget(textLabel5, 6, 0, 1, 1);

    ion_radius = new QLineEdit(groupBox4);
    ion_radius->setObjectName(QString::fromUtf8("ion_radius"));
    ion_radius->setMaximumSize(QSize(80, 23));
    ion_radius->setAlignment(Qt::AlignRight);

    gridLayout6->addWidget(ion_radius, 4, 1, 1, 1);

    spacing = new QLineEdit(groupBox4);
    spacing->setObjectName(QString::fromUtf8("spacing"));
    spacing->setMaximumSize(QSize(80, 23));
    spacing->setAlignment(Qt::AlignRight);

    gridLayout6->addWidget(spacing, 5, 1, 1, 1);

    ionic_strenght = new QLineEdit(groupBox4);
    ionic_strenght->setObjectName(QString::fromUtf8("ionic_strenght"));
    ionic_strenght->setMaximumSize(QSize(80, 23));
    ionic_strenght->setAlignment(Qt::AlignRight);

    gridLayout6->addWidget(ionic_strenght, 3, 1, 1, 1);

    textLabel4 = new QLabel(groupBox4);
    textLabel4->setObjectName(QString::fromUtf8("textLabel4"));
    QSizePolicy sizePolicy8(static_cast<QSizePolicy::Policy>(7), static_cast<QSizePolicy::Policy>(5));
    sizePolicy8.setHorizontalStretch(0);
    sizePolicy8.setVerticalStretch(0);
    sizePolicy8.setHeightForWidth(textLabel4->sizePolicy().hasHeightForWidth());
    textLabel4->setSizePolicy(sizePolicy8);
    textLabel4->setMinimumSize(QSize(210, 0));

    gridLayout6->addWidget(textLabel4, 7, 0, 1, 1);

    textLabel2 = new QLabel(groupBox4);
    textLabel2->setObjectName(QString::fromUtf8("textLabel2"));
    QSizePolicy sizePolicy9(static_cast<QSizePolicy::Policy>(7), static_cast<QSizePolicy::Policy>(5));
    sizePolicy9.setHorizontalStretch(0);
    sizePolicy9.setVerticalStretch(0);
    sizePolicy9.setHeightForWidth(textLabel2->sizePolicy().hasHeightForWidth());
    textLabel2->setSizePolicy(sizePolicy9);
    textLabel2->setMinimumSize(QSize(210, 0));

    gridLayout6->addWidget(textLabel2, 0, 0, 1, 1);

    dc_interior = new QLineEdit(groupBox4);
    dc_interior->setObjectName(QString::fromUtf8("dc_interior"));
    dc_interior->setMaximumSize(QSize(80, 23));
    dc_interior->setAlignment(Qt::AlignRight);

    gridLayout6->addWidget(dc_interior, 1, 1, 1, 1);

    border = new QLineEdit(groupBox4);
    border->setObjectName(QString::fromUtf8("border"));
    border->setMaximumSize(QSize(80, 23));
    border->setAlignment(Qt::AlignRight);

    gridLayout6->addWidget(border, 6, 1, 1, 1);

    probe_radius = new QLineEdit(groupBox4);
    probe_radius->setObjectName(QString::fromUtf8("probe_radius"));
    probe_radius->setMaximumSize(QSize(80, 23));
    probe_radius->setAlignment(Qt::AlignRight);

    gridLayout6->addWidget(probe_radius, 2, 1, 1, 1);

    textLabel8 = new QLabel(groupBox4);
    textLabel8->setObjectName(QString::fromUtf8("textLabel8"));
    QSizePolicy sizePolicy10(static_cast<QSizePolicy::Policy>(7), static_cast<QSizePolicy::Policy>(5));
    sizePolicy10.setHorizontalStretch(0);
    sizePolicy10.setVerticalStretch(0);
    sizePolicy10.setHeightForWidth(textLabel8->sizePolicy().hasHeightForWidth());
    textLabel8->setSizePolicy(sizePolicy10);
    textLabel8->setMinimumSize(QSize(210, 0));

    gridLayout6->addWidget(textLabel8, 3, 0, 1, 1);

    textLabel10 = new QLabel(groupBox4);
    textLabel10->setObjectName(QString::fromUtf8("textLabel10"));
    QSizePolicy sizePolicy11(static_cast<QSizePolicy::Policy>(7), static_cast<QSizePolicy::Policy>(5));
    sizePolicy11.setHorizontalStretch(0);
    sizePolicy11.setVerticalStretch(0);
    sizePolicy11.setHeightForWidth(textLabel10->sizePolicy().hasHeightForWidth());
    textLabel10->setSizePolicy(sizePolicy11);
    textLabel10->setMinimumSize(QSize(210, 0));

    gridLayout6->addWidget(textLabel10, 1, 0, 1, 1);


    gridLayout2->addLayout(gridLayout6, 0, 0, 3, 1);

    spacerItem = new QSpacerItem(22, 20, QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);

    gridLayout2->addItem(spacerItem, 0, 1, 2, 1);


    gridLayout1->addWidget(groupBox4, 0, 0, 1, 1);


    gridLayout->addLayout(gridLayout1, 0, 0, 1, 2);

    hboxLayout = new QHBoxLayout();
    hboxLayout->setSpacing(6);
    hboxLayout->setMargin(0);
    hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
    ok_button = new QPushButton(FDPBDialogData);
    ok_button->setObjectName(QString::fromUtf8("ok_button"));
    QSizePolicy sizePolicy12(static_cast<QSizePolicy::Policy>(1), static_cast<QSizePolicy::Policy>(7));
    sizePolicy12.setHorizontalStretch(0);
    sizePolicy12.setVerticalStretch(0);
    sizePolicy12.setHeightForWidth(ok_button->sizePolicy().hasHeightForWidth());
    ok_button->setSizePolicy(sizePolicy12);
    ok_button->setMinimumSize(QSize(90, 30));
    ok_button->setMaximumSize(QSize(32767, 30));
    ok_button->setDefault(true);

    hboxLayout->addWidget(ok_button);

    cancel_button = new QPushButton(FDPBDialogData);
    cancel_button->setObjectName(QString::fromUtf8("cancel_button"));
    QSizePolicy sizePolicy13(static_cast<QSizePolicy::Policy>(1), static_cast<QSizePolicy::Policy>(7));
    sizePolicy13.setHorizontalStretch(0);
    sizePolicy13.setVerticalStretch(0);
    sizePolicy13.setHeightForWidth(cancel_button->sizePolicy().hasHeightForWidth());
    cancel_button->setSizePolicy(sizePolicy13);
    cancel_button->setMinimumSize(QSize(90, 30));
    cancel_button->setMaximumSize(QSize(32767, 30));

    hboxLayout->addWidget(cancel_button);

    reset_button = new QPushButton(FDPBDialogData);
    reset_button->setObjectName(QString::fromUtf8("reset_button"));
    QSizePolicy sizePolicy14(static_cast<QSizePolicy::Policy>(1), static_cast<QSizePolicy::Policy>(7));
    sizePolicy14.setHorizontalStretch(0);
    sizePolicy14.setVerticalStretch(0);
    sizePolicy14.setHeightForWidth(reset_button->sizePolicy().hasHeightForWidth());
    reset_button->setSizePolicy(sizePolicy14);
    reset_button->setMinimumSize(QSize(90, 30));
    reset_button->setMaximumSize(QSize(32767, 30));

    hboxLayout->addWidget(reset_button);


    gridLayout->addLayout(hboxLayout, 4, 0, 1, 2);

    spacerItem1 = new QSpacerItem(20, 11, QSizePolicy::Minimum, QSizePolicy::Minimum);

    gridLayout->addItem(spacerItem1, 3, 0, 1, 1);

    hboxLayout1 = new QHBoxLayout();
    hboxLayout1->setSpacing(6);
    hboxLayout1->setMargin(0);
    hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
    radii_group = new QGroupBox(FDPBDialogData);
    radii_group->setObjectName(QString::fromUtf8("radii_group"));
    gridLayout7 = new QGridLayout(radii_group);
    gridLayout7->setSpacing(6);
    gridLayout7->setMargin(9);
    gridLayout7->setObjectName(QString::fromUtf8("gridLayout7"));
    radii_rules_lineedit = new QLineEdit(radii_group);
    radii_rules_lineedit->setObjectName(QString::fromUtf8("radii_rules_lineedit"));
    radii_rules_lineedit->setReadOnly(false);

    gridLayout7->addWidget(radii_rules_lineedit, 1, 1, 1, 1);

    radii_data_button = new QRadioButton(radii_group);
    radii_data_button->setObjectName(QString::fromUtf8("radii_data_button"));
    radii_data_button->setChecked(true);

    gridLayout7->addWidget(radii_data_button, 0, 0, 1, 1);

    radii_data_browse = new QPushButton(radii_group);
    radii_data_browse->setObjectName(QString::fromUtf8("radii_data_browse"));

    gridLayout7->addWidget(radii_data_browse, 0, 2, 1, 1);

    radii_data_lineedit = new QLineEdit(radii_group);
    radii_data_lineedit->setObjectName(QString::fromUtf8("radii_data_lineedit"));

    gridLayout7->addWidget(radii_data_lineedit, 0, 1, 1, 1);

    radii_rules_browse = new QPushButton(radii_group);
    radii_rules_browse->setObjectName(QString::fromUtf8("radii_rules_browse"));

    gridLayout7->addWidget(radii_rules_browse, 1, 2, 1, 1);

    radii_rules_button = new QRadioButton(radii_group);
    radii_rules_button->setObjectName(QString::fromUtf8("radii_rules_button"));

    gridLayout7->addWidget(radii_rules_button, 1, 0, 1, 1);


    hboxLayout1->addWidget(radii_group);

    charges_group = new QGroupBox(FDPBDialogData);
    charges_group->setObjectName(QString::fromUtf8("charges_group"));
    gridLayout8 = new QGridLayout(charges_group);
    gridLayout8->setSpacing(6);
    gridLayout8->setMargin(9);
    gridLayout8->setObjectName(QString::fromUtf8("gridLayout8"));
    charges_rules_button = new QRadioButton(charges_group);
    charges_rules_button->setObjectName(QString::fromUtf8("charges_rules_button"));

    gridLayout8->addWidget(charges_rules_button, 1, 0, 1, 1);

    charges_rules_browse = new QPushButton(charges_group);
    charges_rules_browse->setObjectName(QString::fromUtf8("charges_rules_browse"));

    gridLayout8->addWidget(charges_rules_browse, 1, 2, 1, 1);

    charges_rules_lineedit = new QLineEdit(charges_group);
    charges_rules_lineedit->setObjectName(QString::fromUtf8("charges_rules_lineedit"));
    charges_rules_lineedit->setReadOnly(false);

    gridLayout8->addWidget(charges_rules_lineedit, 1, 1, 1, 1);

    charges_data_browse = new QPushButton(charges_group);
    charges_data_browse->setObjectName(QString::fromUtf8("charges_data_browse"));

    gridLayout8->addWidget(charges_data_browse, 0, 2, 1, 1);

    charges_data_lineedit = new QLineEdit(charges_group);
    charges_data_lineedit->setObjectName(QString::fromUtf8("charges_data_lineedit"));

    gridLayout8->addWidget(charges_data_lineedit, 0, 1, 1, 1);

    charges_data_button = new QRadioButton(charges_group);
    charges_data_button->setObjectName(QString::fromUtf8("charges_data_button"));
    charges_data_button->setChecked(true);

    gridLayout8->addWidget(charges_data_button, 0, 0, 1, 1);


    hboxLayout1->addWidget(charges_group);


    gridLayout->addLayout(hboxLayout1, 2, 0, 1, 2);

    spacerItem2 = new QSpacerItem(20, 11, QSizePolicy::Minimum, QSizePolicy::Minimum);

    gridLayout->addItem(spacerItem2, 1, 1, 1, 1);

    QWidget::setTabOrder(dc_solvent, dc_interior);
    QWidget::setTabOrder(dc_interior, probe_radius);
    QWidget::setTabOrder(probe_radius, ionic_strenght);
    QWidget::setTabOrder(ionic_strenght, ion_radius);
    QWidget::setTabOrder(ion_radius, spacing);
    QWidget::setTabOrder(spacing, border);
    QWidget::setTabOrder(border, temperature);
    QWidget::setTabOrder(temperature, max_iterations);
    QWidget::setTabOrder(max_iterations, boundary_dipole);
    QWidget::setTabOrder(boundary_dipole, boundary_debye);
    QWidget::setTabOrder(boundary_debye, boundary_coulomb);
    QWidget::setTabOrder(boundary_coulomb, boundary_zero);
    QWidget::setTabOrder(boundary_zero, boundary_focusing);
    QWidget::setTabOrder(boundary_focusing, smoothing_none);
    QWidget::setTabOrder(smoothing_none, smoothing_uniform);
    QWidget::setTabOrder(smoothing_uniform, smoothing_harmonic);
    QWidget::setTabOrder(smoothing_harmonic, charge_uniform);
    QWidget::setTabOrder(charge_uniform, charge_trilinear);
    QWidget::setTabOrder(charge_trilinear, add_hydrogens);
    QWidget::setTabOrder(add_hydrogens, normalize_names);
    QWidget::setTabOrder(normalize_names, build_bonds);
    QWidget::setTabOrder(build_bonds, assign_radii);
    QWidget::setTabOrder(assign_radii, assign_charges);
    QWidget::setTabOrder(assign_charges, radii_data_button);
    QWidget::setTabOrder(radii_data_button, radii_data_lineedit);
    QWidget::setTabOrder(radii_data_lineedit, radii_data_browse);
    QWidget::setTabOrder(radii_data_browse, radii_rules_button);
    QWidget::setTabOrder(radii_rules_button, radii_rules_lineedit);
    QWidget::setTabOrder(radii_rules_lineedit, radii_rules_browse);
    QWidget::setTabOrder(radii_rules_browse, charges_data_button);
    QWidget::setTabOrder(charges_data_button, charges_data_lineedit);
    QWidget::setTabOrder(charges_data_lineedit, charges_data_browse);
    QWidget::setTabOrder(charges_data_browse, charges_rules_button);
    QWidget::setTabOrder(charges_rules_button, charges_rules_lineedit);
    QWidget::setTabOrder(charges_rules_lineedit, charges_rules_browse);
    QWidget::setTabOrder(charges_rules_browse, ok_button);
    QWidget::setTabOrder(ok_button, reset_button);
    QWidget::setTabOrder(reset_button, cancel_button);

    retranslateUi(FDPBDialogData);

    QSize size(772, 601);
    size = size.expandedTo(FDPBDialogData->minimumSizeHint());
    FDPBDialogData->resize(size);


    QMetaObject::connectSlotsByName(FDPBDialogData);
    } // setupUi

    void retranslateUi(QDialog *FDPBDialogData)
    {
    FDPBDialogData->setWindowTitle(QApplication::translate("FDPBDialogData", "FDPB options", 0, QApplication::UnicodeUTF8));
    buttonGroup3->setTitle(QApplication::translate("FDPBDialogData", "Structure Preparations", 0, QApplication::UnicodeUTF8));
    add_hydrogens->setText(QApplication::translate("FDPBDialogData", "add hydrogens", 0, QApplication::UnicodeUTF8));
    normalize_names->setText(QApplication::translate("FDPBDialogData", "normalize atom names", 0, QApplication::UnicodeUTF8));
    build_bonds->setText(QApplication::translate("FDPBDialogData", "build bonds", 0, QApplication::UnicodeUTF8));
    assign_radii->setText(QApplication::translate("FDPBDialogData", "assign radii", 0, QApplication::UnicodeUTF8));
    assign_charges->setText(QApplication::translate("FDPBDialogData", "assign charges", 0, QApplication::UnicodeUTF8));
    groupBox4->setTitle(QApplication::translate("FDPBDialogData", "FDPB Parameters", 0, QApplication::UnicodeUTF8));
    boundary_group->setTitle(QApplication::translate("FDPBDialogData", "Boundary Condition", 0, QApplication::UnicodeUTF8));
    boundary_focusing->setText(QApplication::translate("FDPBDialogData", "focusing", 0, QApplication::UnicodeUTF8));
    boundary_zero->setText(QApplication::translate("FDPBDialogData", "zero", 0, QApplication::UnicodeUTF8));
    boundary_dipole->setText(QApplication::translate("FDPBDialogData", "dipole", 0, QApplication::UnicodeUTF8));
    boundary_debye->setText(QApplication::translate("FDPBDialogData", "Debye", 0, QApplication::UnicodeUTF8));
    boundary_coulomb->setText(QApplication::translate("FDPBDialogData", "Coulomb", 0, QApplication::UnicodeUTF8));
    charge_distribution_group->setTitle(QApplication::translate("FDPBDialogData", "Charge Distribution", 0, QApplication::UnicodeUTF8));
    charge_trilinear->setText(QApplication::translate("FDPBDialogData", "trilinear", 0, QApplication::UnicodeUTF8));
    charge_uniform->setText(QApplication::translate("FDPBDialogData", "uniform", 0, QApplication::UnicodeUTF8));
    smoothing_group->setTitle(QApplication::translate("FDPBDialogData", "Dielectric Smoothing", 0, QApplication::UnicodeUTF8));
    smoothing_none->setText(QApplication::translate("FDPBDialogData", "none", 0, QApplication::UnicodeUTF8));
    smoothing_uniform->setText(QApplication::translate("FDPBDialogData", "uniform", 0, QApplication::UnicodeUTF8));
    smoothing_harmonic->setText(QApplication::translate("FDPBDialogData", "harmonic", 0, QApplication::UnicodeUTF8));
    max_iterations->setText(QApplication::translate("FDPBDialogData", "1000", 0, QApplication::UnicodeUTF8));
    textLabel9->setText(QApplication::translate("FDPBDialogData", "probe radius", 0, QApplication::UnicodeUTF8));
    textLabel6->setText(QApplication::translate("FDPBDialogData", "spacing", 0, QApplication::UnicodeUTF8));
    textLabel7->setText(QApplication::translate("FDPBDialogData", "ion radius", 0, QApplication::UnicodeUTF8));
    dc_solvent->setText(QApplication::translate("FDPBDialogData", "78.0", 0, QApplication::UnicodeUTF8));
    temperature->setText(QApplication::translate("FDPBDialogData", "298", 0, QApplication::UnicodeUTF8));
    textLabel1->setText(QApplication::translate("FDPBDialogData", "max iterations", 0, QApplication::UnicodeUTF8));
    textLabel5->setText(QApplication::translate("FDPBDialogData", "border", 0, QApplication::UnicodeUTF8));
    ion_radius->setText(QApplication::translate("FDPBDialogData", "2.0", 0, QApplication::UnicodeUTF8));
    spacing->setText(QApplication::translate("FDPBDialogData", "1.0", 0, QApplication::UnicodeUTF8));
    ionic_strenght->setText(QApplication::translate("FDPBDialogData", "0.0", 0, QApplication::UnicodeUTF8));
    textLabel4->setText(QApplication::translate("FDPBDialogData", "temperature", 0, QApplication::UnicodeUTF8));
    textLabel2->setText(QApplication::translate("FDPBDialogData", "dielectric constant of solvent", 0, QApplication::UnicodeUTF8));
    dc_interior->setText(QApplication::translate("FDPBDialogData", "2.0", 0, QApplication::UnicodeUTF8));
    border->setText(QApplication::translate("FDPBDialogData", "5.0", 0, QApplication::UnicodeUTF8));
    probe_radius->setText(QApplication::translate("FDPBDialogData", "1.4", 0, QApplication::UnicodeUTF8));
    textLabel8->setText(QApplication::translate("FDPBDialogData", "ionic strength", 0, QApplication::UnicodeUTF8));
    textLabel10->setText(QApplication::translate("FDPBDialogData", "dielectric constant of solute", 0, QApplication::UnicodeUTF8));
    ok_button->setText(QApplication::translate("FDPBDialogData", "OK", 0, QApplication::UnicodeUTF8));
    cancel_button->setText(QApplication::translate("FDPBDialogData", "Cancel", 0, QApplication::UnicodeUTF8));
    reset_button->setText(QApplication::translate("FDPBDialogData", "Defaults", 0, QApplication::UnicodeUTF8));
    radii_group->setTitle(QApplication::translate("FDPBDialogData", "Radius Assignment", 0, QApplication::UnicodeUTF8));
    radii_rules_lineedit->setText(QApplication::translate("FDPBDialogData", "solvation/PARSE.rul", 0, QApplication::UnicodeUTF8));
    radii_data_button->setText(QApplication::translate("FDPBDialogData", "from table", 0, QApplication::UnicodeUTF8));
    radii_data_browse->setText(QApplication::translate("FDPBDialogData", "Browse", 0, QApplication::UnicodeUTF8));
    radii_data_lineedit->setText(QApplication::translate("FDPBDialogData", "radii/PARSE.siz", 0, QApplication::UnicodeUTF8));
    radii_rules_browse->setText(QApplication::translate("FDPBDialogData", "Browse", 0, QApplication::UnicodeUTF8));
    radii_rules_button->setText(QApplication::translate("FDPBDialogData", "by rules", 0, QApplication::UnicodeUTF8));
    charges_group->setTitle(QApplication::translate("FDPBDialogData", "Charge Assignment", 0, QApplication::UnicodeUTF8));
    charges_rules_button->setText(QApplication::translate("FDPBDialogData", "by rules", 0, QApplication::UnicodeUTF8));
    charges_rules_browse->setText(QApplication::translate("FDPBDialogData", "Browse", 0, QApplication::UnicodeUTF8));
    charges_rules_lineedit->setText(QApplication::translate("FDPBDialogData", "solvation/PARSE.rul", 0, QApplication::UnicodeUTF8));
    charges_data_browse->setText(QApplication::translate("FDPBDialogData", "Browse", 0, QApplication::UnicodeUTF8));
    charges_data_lineedit->setText(QApplication::translate("FDPBDialogData", "charges/PARSE.crg", 0, QApplication::UnicodeUTF8));
    charges_data_button->setText(QApplication::translate("FDPBDialogData", "from table", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(FDPBDialogData);
    } // retranslateUi

};

namespace Ui {
    class FDPBDialogData: public Ui_FDPBDialogData {};
} // namespace Ui

#endif // FDPBDIALOGDATA_H
