/********************************************************************************
** Form generated from reading ui file 'MMFF94ConfigurationDialog.ui'
**
** Created: Wed Mar 19 14:28:18 2008
**      by: Qt User Interface Compiler version 4.2.2
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef MMFF94CONFIGURATIONDIALOGDATA_H
#define MMFF94CONFIGURATIONDIALOGDATA_H

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
#include <QtGui/QVBoxLayout>

class Ui_MMFF94ConfigurationDialogData
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *hboxLayout;
    QPushButton *close_button;
    QPushButton *cancel_button;
    QPushButton *reset_button;
    QGroupBox *cutoff_options;
    QGridLayout *gridLayout1;
    QLineEdit *nonbonded_cutoff;
    QLineEdit *vdw_cutoff;
    QLineEdit *electrostatic_cutoff;
    QLabel *nonbonded_cutoff_label_2;
    QLabel *nonbonded_cutoff_label_2_2_3;
    QLabel *nonbonded_cutoff_label_2_2_3_2;
    QLineEdit *vdw_cuton;
    QLineEdit *electrostatic_cuton;
    QLabel *nonbonded_cutoff_label_2_2;
    QLabel *nonbonded_cutoff_label_2_2_2;
    QLabel *nonbonded_cutoff_label;
    QLabel *vdw_cutoff_label;
    QLabel *electrostatic_cutoff_label;
    QGroupBox *dielectric_group;
    QHBoxLayout *hboxLayout1;
    QRadioButton *constant_button;
    QRadioButton *distance_button;
    QGroupBox *groupBox11;
    QHBoxLayout *hboxLayout2;
    QLabel *textLabel1;
    QLineEdit *max_unassigned_atoms;
    QGroupBox *groupBox12;
    QHBoxLayout *hboxLayout3;
    QLabel *Label_10;
    QLineEdit *parameter_file_edit;
    QPushButton *browse_button;
    QGroupBox *groupBox;
    QVBoxLayout *vboxLayout;
    QCheckBox *stretch_box;
    QCheckBox *bends_box;
    QCheckBox *stretch_bends_box;
    QCheckBox *torsions_box;
    QCheckBox *plane_box;
    QCheckBox *vdw_box;
    QCheckBox *es_box;
    QGroupBox *check_options;
    QVBoxLayout *vboxLayout1;
    QCheckBox *assign_charges_checkBox;
    QCheckBox *assign_typenames_checkBox;
    QCheckBox *assign_types_checkBox;
    QCheckBox *overwrite_charges_checkBox;
    QCheckBox *overwrite_typenames_checkBox;

    void setupUi(QDialog *MMFF94ConfigurationDialogData)
    {
    MMFF94ConfigurationDialogData->setObjectName(QString::fromUtf8("MMFF94ConfigurationDialogData"));
    QSizePolicy sizePolicy(static_cast<QSizePolicy::Policy>(5), static_cast<QSizePolicy::Policy>(5));
    sizePolicy.setHorizontalStretch(0);
    sizePolicy.setVerticalStretch(0);
    sizePolicy.setHeightForWidth(MMFF94ConfigurationDialogData->sizePolicy().hasHeightForWidth());
    MMFF94ConfigurationDialogData->setSizePolicy(sizePolicy);
    MMFF94ConfigurationDialogData->setMinimumSize(QSize(0, 0));
    MMFF94ConfigurationDialogData->setMaximumSize(QSize(6500, 4900));
    gridLayout = new QGridLayout(MMFF94ConfigurationDialogData);
    gridLayout->setSpacing(6);
    gridLayout->setMargin(5);
    gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
    hboxLayout = new QHBoxLayout();
    hboxLayout->setSpacing(6);
    hboxLayout->setMargin(0);
    hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
    close_button = new QPushButton(MMFF94ConfigurationDialogData);
    close_button->setObjectName(QString::fromUtf8("close_button"));
    QSizePolicy sizePolicy1(static_cast<QSizePolicy::Policy>(3), static_cast<QSizePolicy::Policy>(0));
    sizePolicy1.setHorizontalStretch(0);
    sizePolicy1.setVerticalStretch(0);
    sizePolicy1.setHeightForWidth(close_button->sizePolicy().hasHeightForWidth());
    close_button->setSizePolicy(sizePolicy1);
    close_button->setMinimumSize(QSize(0, 30));
    close_button->setDefault(true);

    hboxLayout->addWidget(close_button);

    cancel_button = new QPushButton(MMFF94ConfigurationDialogData);
    cancel_button->setObjectName(QString::fromUtf8("cancel_button"));
    QSizePolicy sizePolicy2(static_cast<QSizePolicy::Policy>(3), static_cast<QSizePolicy::Policy>(0));
    sizePolicy2.setHorizontalStretch(0);
    sizePolicy2.setVerticalStretch(0);
    sizePolicy2.setHeightForWidth(cancel_button->sizePolicy().hasHeightForWidth());
    cancel_button->setSizePolicy(sizePolicy2);
    cancel_button->setMinimumSize(QSize(0, 30));

    hboxLayout->addWidget(cancel_button);

    reset_button = new QPushButton(MMFF94ConfigurationDialogData);
    reset_button->setObjectName(QString::fromUtf8("reset_button"));
    QSizePolicy sizePolicy3(static_cast<QSizePolicy::Policy>(3), static_cast<QSizePolicy::Policy>(0));
    sizePolicy3.setHorizontalStretch(0);
    sizePolicy3.setVerticalStretch(0);
    sizePolicy3.setHeightForWidth(reset_button->sizePolicy().hasHeightForWidth());
    reset_button->setSizePolicy(sizePolicy3);
    reset_button->setMinimumSize(QSize(0, 30));

    hboxLayout->addWidget(reset_button);


    gridLayout->addLayout(hboxLayout, 5, 0, 1, 2);

    cutoff_options = new QGroupBox(MMFF94ConfigurationDialogData);
    cutoff_options->setObjectName(QString::fromUtf8("cutoff_options"));
    cutoff_options->setMinimumSize(QSize(520, 0));
    cutoff_options->setAlignment(Qt::AlignHCenter);
    gridLayout1 = new QGridLayout(cutoff_options);
    gridLayout1->setSpacing(6);
    gridLayout1->setMargin(5);
    gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
    nonbonded_cutoff = new QLineEdit(cutoff_options);
    nonbonded_cutoff->setObjectName(QString::fromUtf8("nonbonded_cutoff"));
    QSizePolicy sizePolicy4(static_cast<QSizePolicy::Policy>(7), static_cast<QSizePolicy::Policy>(0));
    sizePolicy4.setHorizontalStretch(0);
    sizePolicy4.setVerticalStretch(0);
    sizePolicy4.setHeightForWidth(nonbonded_cutoff->sizePolicy().hasHeightForWidth());
    nonbonded_cutoff->setSizePolicy(sizePolicy4);
    nonbonded_cutoff->setMinimumSize(QSize(0, 25));
    nonbonded_cutoff->setMaxLength(32767);
    nonbonded_cutoff->setFrame(true);
    nonbonded_cutoff->setEchoMode(QLineEdit::Normal);
    nonbonded_cutoff->setAlignment(Qt::AlignRight);

    gridLayout1->addWidget(nonbonded_cutoff, 0, 1, 1, 1);

    vdw_cutoff = new QLineEdit(cutoff_options);
    vdw_cutoff->setObjectName(QString::fromUtf8("vdw_cutoff"));
    vdw_cutoff->setEnabled(true);
    QSizePolicy sizePolicy5(static_cast<QSizePolicy::Policy>(7), static_cast<QSizePolicy::Policy>(0));
    sizePolicy5.setHorizontalStretch(0);
    sizePolicy5.setVerticalStretch(0);
    sizePolicy5.setHeightForWidth(vdw_cutoff->sizePolicy().hasHeightForWidth());
    vdw_cutoff->setSizePolicy(sizePolicy5);
    vdw_cutoff->setMinimumSize(QSize(0, 25));
    vdw_cutoff->setFrame(true);
    vdw_cutoff->setEchoMode(QLineEdit::Normal);
    vdw_cutoff->setAlignment(Qt::AlignRight);

    gridLayout1->addWidget(vdw_cutoff, 1, 1, 1, 1);

    electrostatic_cutoff = new QLineEdit(cutoff_options);
    electrostatic_cutoff->setObjectName(QString::fromUtf8("electrostatic_cutoff"));
    electrostatic_cutoff->setEnabled(true);
    electrostatic_cutoff->setMinimumSize(QSize(0, 25));
    electrostatic_cutoff->setAlignment(Qt::AlignRight);

    gridLayout1->addWidget(electrostatic_cutoff, 2, 1, 1, 1);

    nonbonded_cutoff_label_2 = new QLabel(cutoff_options);
    nonbonded_cutoff_label_2->setObjectName(QString::fromUtf8("nonbonded_cutoff_label_2"));
    QSizePolicy sizePolicy6(static_cast<QSizePolicy::Policy>(5), static_cast<QSizePolicy::Policy>(5));
    sizePolicy6.setHorizontalStretch(0);
    sizePolicy6.setVerticalStretch(0);
    sizePolicy6.setHeightForWidth(nonbonded_cutoff_label_2->sizePolicy().hasHeightForWidth());
    nonbonded_cutoff_label_2->setSizePolicy(sizePolicy6);
    nonbonded_cutoff_label_2->setMinimumSize(QSize(25, 0));
    nonbonded_cutoff_label_2->setMaximumSize(QSize(30, 32767));

    gridLayout1->addWidget(nonbonded_cutoff_label_2, 0, 2, 1, 1);

    nonbonded_cutoff_label_2_2_3 = new QLabel(cutoff_options);
    nonbonded_cutoff_label_2_2_3->setObjectName(QString::fromUtf8("nonbonded_cutoff_label_2_2_3"));
    QSizePolicy sizePolicy7(static_cast<QSizePolicy::Policy>(5), static_cast<QSizePolicy::Policy>(5));
    sizePolicy7.setHorizontalStretch(0);
    sizePolicy7.setVerticalStretch(0);
    sizePolicy7.setHeightForWidth(nonbonded_cutoff_label_2_2_3->sizePolicy().hasHeightForWidth());
    nonbonded_cutoff_label_2_2_3->setSizePolicy(sizePolicy7);
    nonbonded_cutoff_label_2_2_3->setMinimumSize(QSize(25, 0));
    nonbonded_cutoff_label_2_2_3->setMaximumSize(QSize(30, 32767));

    gridLayout1->addWidget(nonbonded_cutoff_label_2_2_3, 1, 2, 1, 1);

    nonbonded_cutoff_label_2_2_3_2 = new QLabel(cutoff_options);
    nonbonded_cutoff_label_2_2_3_2->setObjectName(QString::fromUtf8("nonbonded_cutoff_label_2_2_3_2"));
    QSizePolicy sizePolicy8(static_cast<QSizePolicy::Policy>(5), static_cast<QSizePolicy::Policy>(5));
    sizePolicy8.setHorizontalStretch(0);
    sizePolicy8.setVerticalStretch(0);
    sizePolicy8.setHeightForWidth(nonbonded_cutoff_label_2_2_3_2->sizePolicy().hasHeightForWidth());
    nonbonded_cutoff_label_2_2_3_2->setSizePolicy(sizePolicy8);
    nonbonded_cutoff_label_2_2_3_2->setMinimumSize(QSize(25, 0));
    nonbonded_cutoff_label_2_2_3_2->setMaximumSize(QSize(30, 32767));

    gridLayout1->addWidget(nonbonded_cutoff_label_2_2_3_2, 2, 2, 1, 1);

    vdw_cuton = new QLineEdit(cutoff_options);
    vdw_cuton->setObjectName(QString::fromUtf8("vdw_cuton"));
    vdw_cuton->setEnabled(true);
    vdw_cuton->setAlignment(Qt::AlignRight);

    gridLayout1->addWidget(vdw_cuton, 1, 3, 1, 1);

    electrostatic_cuton = new QLineEdit(cutoff_options);
    electrostatic_cuton->setObjectName(QString::fromUtf8("electrostatic_cuton"));
    electrostatic_cuton->setEnabled(true);
    electrostatic_cuton->setAlignment(Qt::AlignRight);

    gridLayout1->addWidget(electrostatic_cuton, 2, 3, 1, 1);

    nonbonded_cutoff_label_2_2 = new QLabel(cutoff_options);
    nonbonded_cutoff_label_2_2->setObjectName(QString::fromUtf8("nonbonded_cutoff_label_2_2"));
    QSizePolicy sizePolicy9(static_cast<QSizePolicy::Policy>(5), static_cast<QSizePolicy::Policy>(5));
    sizePolicy9.setHorizontalStretch(0);
    sizePolicy9.setVerticalStretch(0);
    sizePolicy9.setHeightForWidth(nonbonded_cutoff_label_2_2->sizePolicy().hasHeightForWidth());
    nonbonded_cutoff_label_2_2->setSizePolicy(sizePolicy9);
    nonbonded_cutoff_label_2_2->setMinimumSize(QSize(15, 0));
    nonbonded_cutoff_label_2_2->setMaximumSize(QSize(30, 32767));

    gridLayout1->addWidget(nonbonded_cutoff_label_2_2, 1, 4, 1, 1);

    nonbonded_cutoff_label_2_2_2 = new QLabel(cutoff_options);
    nonbonded_cutoff_label_2_2_2->setObjectName(QString::fromUtf8("nonbonded_cutoff_label_2_2_2"));
    QSizePolicy sizePolicy10(static_cast<QSizePolicy::Policy>(5), static_cast<QSizePolicy::Policy>(5));
    sizePolicy10.setHorizontalStretch(0);
    sizePolicy10.setVerticalStretch(0);
    sizePolicy10.setHeightForWidth(nonbonded_cutoff_label_2_2_2->sizePolicy().hasHeightForWidth());
    nonbonded_cutoff_label_2_2_2->setSizePolicy(sizePolicy10);
    nonbonded_cutoff_label_2_2_2->setMinimumSize(QSize(15, 0));
    nonbonded_cutoff_label_2_2_2->setMaximumSize(QSize(30, 32767));

    gridLayout1->addWidget(nonbonded_cutoff_label_2_2_2, 2, 4, 1, 1);

    nonbonded_cutoff_label = new QLabel(cutoff_options);
    nonbonded_cutoff_label->setObjectName(QString::fromUtf8("nonbonded_cutoff_label"));
    QSizePolicy sizePolicy11(static_cast<QSizePolicy::Policy>(7), static_cast<QSizePolicy::Policy>(5));
    sizePolicy11.setHorizontalStretch(0);
    sizePolicy11.setVerticalStretch(0);
    sizePolicy11.setHeightForWidth(nonbonded_cutoff_label->sizePolicy().hasHeightForWidth());
    nonbonded_cutoff_label->setSizePolicy(sizePolicy11);
    nonbonded_cutoff_label->setMinimumSize(QSize(260, 25));

    gridLayout1->addWidget(nonbonded_cutoff_label, 0, 0, 1, 1);

    vdw_cutoff_label = new QLabel(cutoff_options);
    vdw_cutoff_label->setObjectName(QString::fromUtf8("vdw_cutoff_label"));
    QSizePolicy sizePolicy12(static_cast<QSizePolicy::Policy>(7), static_cast<QSizePolicy::Policy>(5));
    sizePolicy12.setHorizontalStretch(0);
    sizePolicy12.setVerticalStretch(0);
    sizePolicy12.setHeightForWidth(vdw_cutoff_label->sizePolicy().hasHeightForWidth());
    vdw_cutoff_label->setSizePolicy(sizePolicy12);
    vdw_cutoff_label->setMinimumSize(QSize(260, 25));

    gridLayout1->addWidget(vdw_cutoff_label, 1, 0, 1, 1);

    electrostatic_cutoff_label = new QLabel(cutoff_options);
    electrostatic_cutoff_label->setObjectName(QString::fromUtf8("electrostatic_cutoff_label"));
    QSizePolicy sizePolicy13(static_cast<QSizePolicy::Policy>(7), static_cast<QSizePolicy::Policy>(5));
    sizePolicy13.setHorizontalStretch(0);
    sizePolicy13.setVerticalStretch(0);
    sizePolicy13.setHeightForWidth(electrostatic_cutoff_label->sizePolicy().hasHeightForWidth());
    electrostatic_cutoff_label->setSizePolicy(sizePolicy13);
    electrostatic_cutoff_label->setMinimumSize(QSize(260, 25));

    gridLayout1->addWidget(electrostatic_cutoff_label, 2, 0, 1, 1);


    gridLayout->addWidget(cutoff_options, 4, 0, 1, 2);

    dielectric_group = new QGroupBox(MMFF94ConfigurationDialogData);
    dielectric_group->setObjectName(QString::fromUtf8("dielectric_group"));
    QSizePolicy sizePolicy14(static_cast<QSizePolicy::Policy>(1), static_cast<QSizePolicy::Policy>(1));
    sizePolicy14.setHorizontalStretch(0);
    sizePolicy14.setVerticalStretch(0);
    sizePolicy14.setHeightForWidth(dielectric_group->sizePolicy().hasHeightForWidth());
    dielectric_group->setSizePolicy(sizePolicy14);
    dielectric_group->setMinimumSize(QSize(180, 0));
    dielectric_group->setAlignment(Qt::AlignHCenter);
    hboxLayout1 = new QHBoxLayout(dielectric_group);
    hboxLayout1->setSpacing(6);
    hboxLayout1->setMargin(5);
    hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
    constant_button = new QRadioButton(dielectric_group);
    constant_button->setObjectName(QString::fromUtf8("constant_button"));
    QSizePolicy sizePolicy15(static_cast<QSizePolicy::Policy>(7), static_cast<QSizePolicy::Policy>(1));
    sizePolicy15.setHorizontalStretch(0);
    sizePolicy15.setVerticalStretch(0);
    sizePolicy15.setHeightForWidth(constant_button->sizePolicy().hasHeightForWidth());
    constant_button->setSizePolicy(sizePolicy15);
    constant_button->setMinimumSize(QSize(0, 0));
    constant_button->setMaximumSize(QSize(32000, 32767));
    constant_button->setChecked(true);

    hboxLayout1->addWidget(constant_button);

    distance_button = new QRadioButton(dielectric_group);
    distance_button->setObjectName(QString::fromUtf8("distance_button"));
    QSizePolicy sizePolicy16(static_cast<QSizePolicy::Policy>(3), static_cast<QSizePolicy::Policy>(1));
    sizePolicy16.setHorizontalStretch(0);
    sizePolicy16.setVerticalStretch(0);
    sizePolicy16.setHeightForWidth(distance_button->sizePolicy().hasHeightForWidth());
    distance_button->setSizePolicy(sizePolicy16);
    distance_button->setMinimumSize(QSize(0, 0));

    hboxLayout1->addWidget(distance_button);


    gridLayout->addWidget(dielectric_group, 3, 0, 1, 2);

    groupBox11 = new QGroupBox(MMFF94ConfigurationDialogData);
    groupBox11->setObjectName(QString::fromUtf8("groupBox11"));
    groupBox11->setAlignment(Qt::AlignHCenter);
    hboxLayout2 = new QHBoxLayout(groupBox11);
    hboxLayout2->setSpacing(6);
    hboxLayout2->setMargin(5);
    hboxLayout2->setObjectName(QString::fromUtf8("hboxLayout2"));
    textLabel1 = new QLabel(groupBox11);
    textLabel1->setObjectName(QString::fromUtf8("textLabel1"));
    QSizePolicy sizePolicy17(static_cast<QSizePolicy::Policy>(7), static_cast<QSizePolicy::Policy>(1));
    sizePolicy17.setHorizontalStretch(0);
    sizePolicy17.setVerticalStretch(0);
    sizePolicy17.setHeightForWidth(textLabel1->sizePolicy().hasHeightForWidth());
    textLabel1->setSizePolicy(sizePolicy17);
    textLabel1->setMinimumSize(QSize(0, 28));
    textLabel1->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

    hboxLayout2->addWidget(textLabel1);

    max_unassigned_atoms = new QLineEdit(groupBox11);
    max_unassigned_atoms->setObjectName(QString::fromUtf8("max_unassigned_atoms"));
    max_unassigned_atoms->setMinimumSize(QSize(100, 25));
    max_unassigned_atoms->setMaximumSize(QSize(100, 25));
    max_unassigned_atoms->setAlignment(Qt::AlignRight);

    hboxLayout2->addWidget(max_unassigned_atoms);


    gridLayout->addWidget(groupBox11, 1, 0, 1, 2);

    groupBox12 = new QGroupBox(MMFF94ConfigurationDialogData);
    groupBox12->setObjectName(QString::fromUtf8("groupBox12"));
    groupBox12->setAlignment(Qt::AlignHCenter);
    hboxLayout3 = new QHBoxLayout(groupBox12);
    hboxLayout3->setSpacing(6);
    hboxLayout3->setMargin(5);
    hboxLayout3->setObjectName(QString::fromUtf8("hboxLayout3"));
    Label_10 = new QLabel(groupBox12);
    Label_10->setObjectName(QString::fromUtf8("Label_10"));
    QSizePolicy sizePolicy18(static_cast<QSizePolicy::Policy>(5), static_cast<QSizePolicy::Policy>(1));
    sizePolicy18.setHorizontalStretch(0);
    sizePolicy18.setVerticalStretch(0);
    sizePolicy18.setHeightForWidth(Label_10->sizePolicy().hasHeightForWidth());
    Label_10->setSizePolicy(sizePolicy18);
    Label_10->setMinimumSize(QSize(0, 25));
    Label_10->setFocusPolicy(Qt::NoFocus);
    Label_10->setLineWidth(1);
    Label_10->setTextFormat(Qt::AutoText);
    Label_10->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

    hboxLayout3->addWidget(Label_10);

    parameter_file_edit = new QLineEdit(groupBox12);
    parameter_file_edit->setObjectName(QString::fromUtf8("parameter_file_edit"));
    parameter_file_edit->setMinimumSize(QSize(150, 25));
    parameter_file_edit->setFocusPolicy(Qt::StrongFocus);
    parameter_file_edit->setMaxLength(32767);
    parameter_file_edit->setFrame(true);
    parameter_file_edit->setEchoMode(QLineEdit::Normal);
    parameter_file_edit->setAlignment(Qt::AlignLeading);

    hboxLayout3->addWidget(parameter_file_edit);

    browse_button = new QPushButton(groupBox12);
    browse_button->setObjectName(QString::fromUtf8("browse_button"));
    browse_button->setMinimumSize(QSize(50, 25));
    browse_button->setFocusPolicy(Qt::TabFocus);
    browse_button->setAutoDefault(true);

    hboxLayout3->addWidget(browse_button);


    gridLayout->addWidget(groupBox12, 0, 0, 1, 2);

    groupBox = new QGroupBox(MMFF94ConfigurationDialogData);
    groupBox->setObjectName(QString::fromUtf8("groupBox"));
    groupBox->setAlignment(Qt::AlignHCenter);
    vboxLayout = new QVBoxLayout(groupBox);
    vboxLayout->setSpacing(5);
    vboxLayout->setMargin(5);
    vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
    stretch_box = new QCheckBox(groupBox);
    stretch_box->setObjectName(QString::fromUtf8("stretch_box"));
    stretch_box->setChecked(true);

    vboxLayout->addWidget(stretch_box);

    bends_box = new QCheckBox(groupBox);
    bends_box->setObjectName(QString::fromUtf8("bends_box"));
    bends_box->setChecked(true);

    vboxLayout->addWidget(bends_box);

    stretch_bends_box = new QCheckBox(groupBox);
    stretch_bends_box->setObjectName(QString::fromUtf8("stretch_bends_box"));
    stretch_bends_box->setChecked(true);

    vboxLayout->addWidget(stretch_bends_box);

    torsions_box = new QCheckBox(groupBox);
    torsions_box->setObjectName(QString::fromUtf8("torsions_box"));
    torsions_box->setChecked(true);

    vboxLayout->addWidget(torsions_box);

    plane_box = new QCheckBox(groupBox);
    plane_box->setObjectName(QString::fromUtf8("plane_box"));
    plane_box->setChecked(true);

    vboxLayout->addWidget(plane_box);

    vdw_box = new QCheckBox(groupBox);
    vdw_box->setObjectName(QString::fromUtf8("vdw_box"));
    vdw_box->setChecked(true);

    vboxLayout->addWidget(vdw_box);

    es_box = new QCheckBox(groupBox);
    es_box->setObjectName(QString::fromUtf8("es_box"));
    es_box->setChecked(true);

    vboxLayout->addWidget(es_box);


    gridLayout->addWidget(groupBox, 2, 1, 1, 1);

    check_options = new QGroupBox(MMFF94ConfigurationDialogData);
    check_options->setObjectName(QString::fromUtf8("check_options"));
    check_options->setMinimumSize(QSize(0, 0));
    check_options->setAlignment(Qt::AlignHCenter);
    vboxLayout1 = new QVBoxLayout(check_options);
    vboxLayout1->setSpacing(6);
    vboxLayout1->setMargin(9);
    vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
    assign_charges_checkBox = new QCheckBox(check_options);
    assign_charges_checkBox->setObjectName(QString::fromUtf8("assign_charges_checkBox"));
    assign_charges_checkBox->setMinimumSize(QSize(140, 0));
    assign_charges_checkBox->setChecked(true);

    vboxLayout1->addWidget(assign_charges_checkBox);

    assign_typenames_checkBox = new QCheckBox(check_options);
    assign_typenames_checkBox->setObjectName(QString::fromUtf8("assign_typenames_checkBox"));
    assign_typenames_checkBox->setMinimumSize(QSize(165, 0));
    assign_typenames_checkBox->setChecked(true);

    vboxLayout1->addWidget(assign_typenames_checkBox);

    assign_types_checkBox = new QCheckBox(check_options);
    assign_types_checkBox->setObjectName(QString::fromUtf8("assign_types_checkBox"));
    assign_types_checkBox->setMinimumSize(QSize(140, 0));
    assign_types_checkBox->setChecked(true);

    vboxLayout1->addWidget(assign_types_checkBox);

    overwrite_charges_checkBox = new QCheckBox(check_options);
    overwrite_charges_checkBox->setObjectName(QString::fromUtf8("overwrite_charges_checkBox"));
    overwrite_charges_checkBox->setMinimumSize(QSize(155, 0));
    overwrite_charges_checkBox->setChecked(true);

    vboxLayout1->addWidget(overwrite_charges_checkBox);

    overwrite_typenames_checkBox = new QCheckBox(check_options);
    overwrite_typenames_checkBox->setObjectName(QString::fromUtf8("overwrite_typenames_checkBox"));
    overwrite_typenames_checkBox->setMinimumSize(QSize(155, 0));
    overwrite_typenames_checkBox->setChecked(true);

    vboxLayout1->addWidget(overwrite_typenames_checkBox);


    gridLayout->addWidget(check_options, 2, 0, 1, 1);

    nonbonded_cutoff_label_2->setBuddy(nonbonded_cutoff);
    nonbonded_cutoff_label_2_2_3->setBuddy(nonbonded_cutoff);
    nonbonded_cutoff_label_2_2_3_2->setBuddy(nonbonded_cutoff);
    nonbonded_cutoff_label_2_2->setBuddy(nonbonded_cutoff);
    nonbonded_cutoff_label_2_2_2->setBuddy(nonbonded_cutoff);
    nonbonded_cutoff_label->setBuddy(nonbonded_cutoff);
    vdw_cutoff_label->setBuddy(vdw_cutoff);
    QWidget::setTabOrder(parameter_file_edit, browse_button);
    QWidget::setTabOrder(browse_button, max_unassigned_atoms);
    QWidget::setTabOrder(max_unassigned_atoms, assign_charges_checkBox);
    QWidget::setTabOrder(assign_charges_checkBox, assign_typenames_checkBox);
    QWidget::setTabOrder(assign_typenames_checkBox, assign_types_checkBox);
    QWidget::setTabOrder(assign_types_checkBox, overwrite_charges_checkBox);
    QWidget::setTabOrder(overwrite_charges_checkBox, overwrite_typenames_checkBox);
    QWidget::setTabOrder(overwrite_typenames_checkBox, stretch_box);
    QWidget::setTabOrder(stretch_box, bends_box);
    QWidget::setTabOrder(bends_box, stretch_bends_box);
    QWidget::setTabOrder(stretch_bends_box, torsions_box);
    QWidget::setTabOrder(torsions_box, plane_box);
    QWidget::setTabOrder(plane_box, vdw_box);
    QWidget::setTabOrder(vdw_box, es_box);
    QWidget::setTabOrder(es_box, constant_button);
    QWidget::setTabOrder(constant_button, distance_button);
    QWidget::setTabOrder(distance_button, nonbonded_cutoff);
    QWidget::setTabOrder(nonbonded_cutoff, vdw_cutoff);
    QWidget::setTabOrder(vdw_cutoff, electrostatic_cutoff);
    QWidget::setTabOrder(electrostatic_cutoff, vdw_cuton);
    QWidget::setTabOrder(vdw_cuton, electrostatic_cuton);
    QWidget::setTabOrder(electrostatic_cuton, close_button);
    QWidget::setTabOrder(close_button, cancel_button);
    QWidget::setTabOrder(cancel_button, reset_button);

    retranslateUi(MMFF94ConfigurationDialogData);

    QSize size(530, 584);
    size = size.expandedTo(MMFF94ConfigurationDialogData->minimumSizeHint());
    MMFF94ConfigurationDialogData->resize(size);


    QMetaObject::connectSlotsByName(MMFF94ConfigurationDialogData);
    } // setupUi

    void retranslateUi(QDialog *MMFF94ConfigurationDialogData)
    {
    MMFF94ConfigurationDialogData->setWindowTitle(QApplication::translate("MMFF94ConfigurationDialogData", "MMFF94 Options", 0, QApplication::UnicodeUTF8));
    close_button->setToolTip(QApplication::translate("MMFF94ConfigurationDialogData", "Close and save options", 0, QApplication::UnicodeUTF8));
    close_button->setText(QApplication::translate("MMFF94ConfigurationDialogData", "O&K", 0, QApplication::UnicodeUTF8));
    close_button->setShortcut(QString());
    cancel_button->setToolTip(QApplication::translate("MMFF94ConfigurationDialogData", "Close window and discard changes", 0, QApplication::UnicodeUTF8));
    cancel_button->setText(QApplication::translate("MMFF94ConfigurationDialogData", "C&ancel", 0, QApplication::UnicodeUTF8));
    cancel_button->setShortcut(QString());
    reset_button->setToolTip(QApplication::translate("MMFF94ConfigurationDialogData", "Reset all settings to default values", 0, QApplication::UnicodeUTF8));
    reset_button->setText(QApplication::translate("MMFF94ConfigurationDialogData", "Defaults", 0, QApplication::UnicodeUTF8));
    reset_button->setShortcut(QString());
    cutoff_options->setTitle(QApplication::translate("MMFF94ConfigurationDialogData", "Switching options", 0, QApplication::UnicodeUTF8));
    nonbonded_cutoff->setText(QApplication::translate("MMFF94ConfigurationDialogData", "16.0", 0, QApplication::UnicodeUTF8));
    vdw_cutoff->setText(QApplication::translate("MMFF94ConfigurationDialogData", "15.0", 0, QApplication::UnicodeUTF8));
    electrostatic_cutoff->setText(QApplication::translate("MMFF94ConfigurationDialogData", "15.0", 0, QApplication::UnicodeUTF8));
    nonbonded_cutoff_label_2->setText(QApplication::translate("MMFF94ConfigurationDialogData", "\303\205", 0, QApplication::UnicodeUTF8));
    nonbonded_cutoff_label_2_2_3->setText(QApplication::translate("MMFF94ConfigurationDialogData", "\303\205 /", 0, QApplication::UnicodeUTF8));
    nonbonded_cutoff_label_2_2_3_2->setText(QApplication::translate("MMFF94ConfigurationDialogData", "\303\205 /", 0, QApplication::UnicodeUTF8));
    vdw_cuton->setText(QApplication::translate("MMFF94ConfigurationDialogData", "13.0", 0, QApplication::UnicodeUTF8));
    electrostatic_cuton->setText(QApplication::translate("MMFF94ConfigurationDialogData", "13.0", 0, QApplication::UnicodeUTF8));
    nonbonded_cutoff_label_2_2->setText(QApplication::translate("MMFF94ConfigurationDialogData", "\303\205", 0, QApplication::UnicodeUTF8));
    nonbonded_cutoff_label_2_2_2->setText(QApplication::translate("MMFF94ConfigurationDialogData", "\303\205", 0, QApplication::UnicodeUTF8));
    nonbonded_cutoff_label->setText(QApplication::translate("MMFF94ConfigurationDialogData", "Nonbonded cutoff distance", 0, QApplication::UnicodeUTF8));
    vdw_cutoff_label->setText(QApplication::translate("MMFF94ConfigurationDialogData", "van der Waals cutoff/cuton distance", 0, QApplication::UnicodeUTF8));
    electrostatic_cutoff_label->setText(QApplication::translate("MMFF94ConfigurationDialogData", "Electrostatic cutoff/cuton distance", 0, QApplication::UnicodeUTF8));
    dielectric_group->setTitle(QApplication::translate("MMFF94ConfigurationDialogData", "Dielectric Constant", 0, QApplication::UnicodeUTF8));
    constant_button->setText(QApplication::translate("MMFF94ConfigurationDialogData", "constant", 0, QApplication::UnicodeUTF8));
    distance_button->setText(QApplication::translate("MMFF94ConfigurationDialogData", "distance dependent", 0, QApplication::UnicodeUTF8));
    groupBox11->setTitle(QApplication::translate("MMFF94ConfigurationDialogData", "Setup Error Handling", 0, QApplication::UnicodeUTF8));
    textLabel1->setText(QApplication::translate("MMFF94ConfigurationDialogData", "Maximum number of unassigned atoms before aborting setup", 0, QApplication::UnicodeUTF8));
    max_unassigned_atoms->setText(QApplication::translate("MMFF94ConfigurationDialogData", "10", 0, QApplication::UnicodeUTF8));
    groupBox12->setTitle(QApplication::translate("MMFF94ConfigurationDialogData", "Parameter Set", 0, QApplication::UnicodeUTF8));
    Label_10->setText(QApplication::translate("MMFF94ConfigurationDialogData", "Folder", 0, QApplication::UnicodeUTF8));
    parameter_file_edit->setText(QApplication::translate("MMFF94ConfigurationDialogData", "MMFF94", 0, QApplication::UnicodeUTF8));
    browse_button->setToolTip(QApplication::translate("MMFF94ConfigurationDialogData", "Browse your computer for amber file", 0, QApplication::UnicodeUTF8));
    browse_button->setText(QApplication::translate("MMFF94ConfigurationDialogData", "Browse", 0, QApplication::UnicodeUTF8));
    groupBox->setTitle(QApplication::translate("MMFF94ConfigurationDialogData", "Components", 0, QApplication::UnicodeUTF8));
    stretch_box->setText(QApplication::translate("MMFF94ConfigurationDialogData", "Stretches", 0, QApplication::UnicodeUTF8));
    bends_box->setText(QApplication::translate("MMFF94ConfigurationDialogData", "Bends", 0, QApplication::UnicodeUTF8));
    stretch_bends_box->setText(QApplication::translate("MMFF94ConfigurationDialogData", "StretchBends", 0, QApplication::UnicodeUTF8));
    torsions_box->setText(QApplication::translate("MMFF94ConfigurationDialogData", "Torsions", 0, QApplication::UnicodeUTF8));
    plane_box->setText(QApplication::translate("MMFF94ConfigurationDialogData", "OutOfPlane", 0, QApplication::UnicodeUTF8));
    vdw_box->setText(QApplication::translate("MMFF94ConfigurationDialogData", "VDW", 0, QApplication::UnicodeUTF8));
    es_box->setText(QApplication::translate("MMFF94ConfigurationDialogData", "Electrostatics", 0, QApplication::UnicodeUTF8));
    check_options->setTitle(QApplication::translate("MMFF94ConfigurationDialogData", "Charge and Type Assignment", 0, QApplication::UnicodeUTF8));
    assign_charges_checkBox->setText(QApplication::translate("MMFF94ConfigurationDialogData", "Assign charges", 0, QApplication::UnicodeUTF8));
    assign_typenames_checkBox->setText(QApplication::translate("MMFF94ConfigurationDialogData", "Assign type names", 0, QApplication::UnicodeUTF8));
    assign_types_checkBox->setText(QApplication::translate("MMFF94ConfigurationDialogData", "Assign (numeric) types", 0, QApplication::UnicodeUTF8));
    overwrite_charges_checkBox->setText(QApplication::translate("MMFF94ConfigurationDialogData", "Overwrite charges", 0, QApplication::UnicodeUTF8));
    overwrite_typenames_checkBox->setText(QApplication::translate("MMFF94ConfigurationDialogData", "Overwrite type names", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(MMFF94ConfigurationDialogData);
    } // retranslateUi

};

namespace Ui {
    class MMFF94ConfigurationDialogData: public Ui_MMFF94ConfigurationDialogData {};
} // namespace Ui

#endif // MMFF94CONFIGURATIONDIALOGDATA_H
