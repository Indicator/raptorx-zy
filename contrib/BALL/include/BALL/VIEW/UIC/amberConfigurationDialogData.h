/********************************************************************************
** Form generated from reading ui file 'amberConfigurationDialog.ui'
**
** Created: Wed Mar 19 14:28:17 2008
**      by: Qt User Interface Compiler version 4.2.2
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef AMBERCONFIGURATIONDIALOGDATA_H
#define AMBERCONFIGURATIONDIALOGDATA_H

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

class Ui_AmberConfigurationDialogData
{
public:
    QGridLayout *gridLayout;
    QGroupBox *AmberFF_Options;
    QGridLayout *gridLayout1;
    QLabel *scaling_vdw_1_4;
    QLabel *scaling_electrostatic_1_4_label;
    QLabel *electrostatic_cutoff_label;
    QLabel *vdw_cutoff_label;
    QLabel *nonbonded_cutoff_label;
    QLabel *nonbonded_cutoff_label_2_2_2;
    QLabel *nonbonded_cutoff_label_2_2;
    QLineEdit *electrostatic_cuton_line_edit;
    QLineEdit *vdw_cuton_line_edit;
    QLabel *nonbonded_cutoff_label_2_2_3_2;
    QLabel *nonbonded_cutoff_label_2_2_3;
    QLabel *nonbonded_cutoff_label_2;
    QLineEdit *scaling_vdw_1_4_line_edit;
    QLineEdit *scaling_electrostatic_1_4_line_edit;
    QLineEdit *electrostatic_cutoff_line_edit;
    QLineEdit *vdw_cutoff_line_edit;
    QLineEdit *nonbonded_cutoff_line_edit;
    QGroupBox *dielectric_group;
    QHBoxLayout *hboxLayout;
    QRadioButton *constant_button;
    QRadioButton *distance_button;
    QGroupBox *check_options;
    QVBoxLayout *vboxLayout;
    QCheckBox *assign_charges_checkBox;
    QCheckBox *assign_typenames_checkBox;
    QCheckBox *assign_types_checkBox;
    QCheckBox *overwrite_charges_checkBox;
    QCheckBox *overwrite_typenames_checkBox;
    QGroupBox *groupBox11;
    QHBoxLayout *hboxLayout1;
    QLabel *textLabel1;
    QLineEdit *max_unassigned_atoms;
    QGroupBox *groupBox12;
    QHBoxLayout *hboxLayout2;
    QLabel *Label_10;
    QLineEdit *parameter_file_edit;
    QPushButton *browse_button;
    QHBoxLayout *hboxLayout3;
    QPushButton *close_button;
    QPushButton *cancel_button;
    QPushButton *reset_button;
    QGroupBox *groupBox;
    QVBoxLayout *vboxLayout1;
    QCheckBox *stretches_box;
    QCheckBox *bends_box;
    QCheckBox *torsions_box;
    QCheckBox *NB_box;

    void setupUi(QDialog *AmberConfigurationDialogData)
    {
    AmberConfigurationDialogData->setObjectName(QString::fromUtf8("AmberConfigurationDialogData"));
    QSizePolicy sizePolicy(static_cast<QSizePolicy::Policy>(5), static_cast<QSizePolicy::Policy>(5));
    sizePolicy.setHorizontalStretch(0);
    sizePolicy.setVerticalStretch(0);
    sizePolicy.setHeightForWidth(AmberConfigurationDialogData->sizePolicy().hasHeightForWidth());
    AmberConfigurationDialogData->setSizePolicy(sizePolicy);
    AmberConfigurationDialogData->setMinimumSize(QSize(0, 0));
    AmberConfigurationDialogData->setMaximumSize(QSize(6500, 4900));
    gridLayout = new QGridLayout(AmberConfigurationDialogData);
    gridLayout->setSpacing(6);
    gridLayout->setMargin(5);
    gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
    AmberFF_Options = new QGroupBox(AmberConfigurationDialogData);
    AmberFF_Options->setObjectName(QString::fromUtf8("AmberFF_Options"));
    AmberFF_Options->setMinimumSize(QSize(520, 0));
    AmberFF_Options->setAlignment(Qt::AlignHCenter);
    gridLayout1 = new QGridLayout(AmberFF_Options);
    gridLayout1->setSpacing(6);
    gridLayout1->setMargin(5);
    gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
    scaling_vdw_1_4 = new QLabel(AmberFF_Options);
    scaling_vdw_1_4->setObjectName(QString::fromUtf8("scaling_vdw_1_4"));
    QSizePolicy sizePolicy1(static_cast<QSizePolicy::Policy>(7), static_cast<QSizePolicy::Policy>(5));
    sizePolicy1.setHorizontalStretch(0);
    sizePolicy1.setVerticalStretch(0);
    sizePolicy1.setHeightForWidth(scaling_vdw_1_4->sizePolicy().hasHeightForWidth());
    scaling_vdw_1_4->setSizePolicy(sizePolicy1);
    scaling_vdw_1_4->setMinimumSize(QSize(260, 25));

    gridLayout1->addWidget(scaling_vdw_1_4, 4, 0, 1, 1);

    scaling_electrostatic_1_4_label = new QLabel(AmberFF_Options);
    scaling_electrostatic_1_4_label->setObjectName(QString::fromUtf8("scaling_electrostatic_1_4_label"));
    QSizePolicy sizePolicy2(static_cast<QSizePolicy::Policy>(7), static_cast<QSizePolicy::Policy>(5));
    sizePolicy2.setHorizontalStretch(0);
    sizePolicy2.setVerticalStretch(0);
    sizePolicy2.setHeightForWidth(scaling_electrostatic_1_4_label->sizePolicy().hasHeightForWidth());
    scaling_electrostatic_1_4_label->setSizePolicy(sizePolicy2);
    scaling_electrostatic_1_4_label->setMinimumSize(QSize(260, 25));

    gridLayout1->addWidget(scaling_electrostatic_1_4_label, 3, 0, 1, 1);

    electrostatic_cutoff_label = new QLabel(AmberFF_Options);
    electrostatic_cutoff_label->setObjectName(QString::fromUtf8("electrostatic_cutoff_label"));
    QSizePolicy sizePolicy3(static_cast<QSizePolicy::Policy>(7), static_cast<QSizePolicy::Policy>(5));
    sizePolicy3.setHorizontalStretch(0);
    sizePolicy3.setVerticalStretch(0);
    sizePolicy3.setHeightForWidth(electrostatic_cutoff_label->sizePolicy().hasHeightForWidth());
    electrostatic_cutoff_label->setSizePolicy(sizePolicy3);
    electrostatic_cutoff_label->setMinimumSize(QSize(260, 25));

    gridLayout1->addWidget(electrostatic_cutoff_label, 2, 0, 1, 1);

    vdw_cutoff_label = new QLabel(AmberFF_Options);
    vdw_cutoff_label->setObjectName(QString::fromUtf8("vdw_cutoff_label"));
    QSizePolicy sizePolicy4(static_cast<QSizePolicy::Policy>(7), static_cast<QSizePolicy::Policy>(5));
    sizePolicy4.setHorizontalStretch(0);
    sizePolicy4.setVerticalStretch(0);
    sizePolicy4.setHeightForWidth(vdw_cutoff_label->sizePolicy().hasHeightForWidth());
    vdw_cutoff_label->setSizePolicy(sizePolicy4);
    vdw_cutoff_label->setMinimumSize(QSize(260, 25));

    gridLayout1->addWidget(vdw_cutoff_label, 1, 0, 1, 1);

    nonbonded_cutoff_label = new QLabel(AmberFF_Options);
    nonbonded_cutoff_label->setObjectName(QString::fromUtf8("nonbonded_cutoff_label"));
    QSizePolicy sizePolicy5(static_cast<QSizePolicy::Policy>(7), static_cast<QSizePolicy::Policy>(5));
    sizePolicy5.setHorizontalStretch(0);
    sizePolicy5.setVerticalStretch(0);
    sizePolicy5.setHeightForWidth(nonbonded_cutoff_label->sizePolicy().hasHeightForWidth());
    nonbonded_cutoff_label->setSizePolicy(sizePolicy5);
    nonbonded_cutoff_label->setMinimumSize(QSize(260, 25));

    gridLayout1->addWidget(nonbonded_cutoff_label, 0, 0, 1, 1);

    nonbonded_cutoff_label_2_2_2 = new QLabel(AmberFF_Options);
    nonbonded_cutoff_label_2_2_2->setObjectName(QString::fromUtf8("nonbonded_cutoff_label_2_2_2"));
    QSizePolicy sizePolicy6(static_cast<QSizePolicy::Policy>(5), static_cast<QSizePolicy::Policy>(5));
    sizePolicy6.setHorizontalStretch(0);
    sizePolicy6.setVerticalStretch(0);
    sizePolicy6.setHeightForWidth(nonbonded_cutoff_label_2_2_2->sizePolicy().hasHeightForWidth());
    nonbonded_cutoff_label_2_2_2->setSizePolicy(sizePolicy6);
    nonbonded_cutoff_label_2_2_2->setMinimumSize(QSize(15, 0));
    nonbonded_cutoff_label_2_2_2->setMaximumSize(QSize(30, 32767));

    gridLayout1->addWidget(nonbonded_cutoff_label_2_2_2, 2, 4, 1, 1);

    nonbonded_cutoff_label_2_2 = new QLabel(AmberFF_Options);
    nonbonded_cutoff_label_2_2->setObjectName(QString::fromUtf8("nonbonded_cutoff_label_2_2"));
    QSizePolicy sizePolicy7(static_cast<QSizePolicy::Policy>(5), static_cast<QSizePolicy::Policy>(5));
    sizePolicy7.setHorizontalStretch(0);
    sizePolicy7.setVerticalStretch(0);
    sizePolicy7.setHeightForWidth(nonbonded_cutoff_label_2_2->sizePolicy().hasHeightForWidth());
    nonbonded_cutoff_label_2_2->setSizePolicy(sizePolicy7);
    nonbonded_cutoff_label_2_2->setMinimumSize(QSize(15, 0));
    nonbonded_cutoff_label_2_2->setMaximumSize(QSize(30, 32767));

    gridLayout1->addWidget(nonbonded_cutoff_label_2_2, 1, 4, 1, 1);

    electrostatic_cuton_line_edit = new QLineEdit(AmberFF_Options);
    electrostatic_cuton_line_edit->setObjectName(QString::fromUtf8("electrostatic_cuton_line_edit"));
    electrostatic_cuton_line_edit->setMaximumSize(QSize(32767, 25));
    electrostatic_cuton_line_edit->setAlignment(Qt::AlignRight);

    gridLayout1->addWidget(electrostatic_cuton_line_edit, 2, 3, 1, 1);

    vdw_cuton_line_edit = new QLineEdit(AmberFF_Options);
    vdw_cuton_line_edit->setObjectName(QString::fromUtf8("vdw_cuton_line_edit"));
    vdw_cuton_line_edit->setMaximumSize(QSize(32767, 25));
    vdw_cuton_line_edit->setAlignment(Qt::AlignRight);

    gridLayout1->addWidget(vdw_cuton_line_edit, 1, 3, 1, 1);

    nonbonded_cutoff_label_2_2_3_2 = new QLabel(AmberFF_Options);
    nonbonded_cutoff_label_2_2_3_2->setObjectName(QString::fromUtf8("nonbonded_cutoff_label_2_2_3_2"));
    QSizePolicy sizePolicy8(static_cast<QSizePolicy::Policy>(5), static_cast<QSizePolicy::Policy>(5));
    sizePolicy8.setHorizontalStretch(0);
    sizePolicy8.setVerticalStretch(0);
    sizePolicy8.setHeightForWidth(nonbonded_cutoff_label_2_2_3_2->sizePolicy().hasHeightForWidth());
    nonbonded_cutoff_label_2_2_3_2->setSizePolicy(sizePolicy8);
    nonbonded_cutoff_label_2_2_3_2->setMinimumSize(QSize(25, 0));
    nonbonded_cutoff_label_2_2_3_2->setMaximumSize(QSize(30, 32767));

    gridLayout1->addWidget(nonbonded_cutoff_label_2_2_3_2, 2, 2, 1, 1);

    nonbonded_cutoff_label_2_2_3 = new QLabel(AmberFF_Options);
    nonbonded_cutoff_label_2_2_3->setObjectName(QString::fromUtf8("nonbonded_cutoff_label_2_2_3"));
    QSizePolicy sizePolicy9(static_cast<QSizePolicy::Policy>(5), static_cast<QSizePolicy::Policy>(5));
    sizePolicy9.setHorizontalStretch(0);
    sizePolicy9.setVerticalStretch(0);
    sizePolicy9.setHeightForWidth(nonbonded_cutoff_label_2_2_3->sizePolicy().hasHeightForWidth());
    nonbonded_cutoff_label_2_2_3->setSizePolicy(sizePolicy9);
    nonbonded_cutoff_label_2_2_3->setMinimumSize(QSize(25, 0));
    nonbonded_cutoff_label_2_2_3->setMaximumSize(QSize(30, 32767));

    gridLayout1->addWidget(nonbonded_cutoff_label_2_2_3, 1, 2, 1, 1);

    nonbonded_cutoff_label_2 = new QLabel(AmberFF_Options);
    nonbonded_cutoff_label_2->setObjectName(QString::fromUtf8("nonbonded_cutoff_label_2"));
    QSizePolicy sizePolicy10(static_cast<QSizePolicy::Policy>(5), static_cast<QSizePolicy::Policy>(5));
    sizePolicy10.setHorizontalStretch(0);
    sizePolicy10.setVerticalStretch(0);
    sizePolicy10.setHeightForWidth(nonbonded_cutoff_label_2->sizePolicy().hasHeightForWidth());
    nonbonded_cutoff_label_2->setSizePolicy(sizePolicy10);
    nonbonded_cutoff_label_2->setMinimumSize(QSize(25, 0));
    nonbonded_cutoff_label_2->setMaximumSize(QSize(30, 32767));

    gridLayout1->addWidget(nonbonded_cutoff_label_2, 0, 2, 1, 1);

    scaling_vdw_1_4_line_edit = new QLineEdit(AmberFF_Options);
    scaling_vdw_1_4_line_edit->setObjectName(QString::fromUtf8("scaling_vdw_1_4_line_edit"));
    scaling_vdw_1_4_line_edit->setAlignment(Qt::AlignRight);

    gridLayout1->addWidget(scaling_vdw_1_4_line_edit, 4, 1, 1, 1);

    scaling_electrostatic_1_4_line_edit = new QLineEdit(AmberFF_Options);
    scaling_electrostatic_1_4_line_edit->setObjectName(QString::fromUtf8("scaling_electrostatic_1_4_line_edit"));
    scaling_electrostatic_1_4_line_edit->setAlignment(Qt::AlignRight);

    gridLayout1->addWidget(scaling_electrostatic_1_4_line_edit, 3, 1, 1, 1);

    electrostatic_cutoff_line_edit = new QLineEdit(AmberFF_Options);
    electrostatic_cutoff_line_edit->setObjectName(QString::fromUtf8("electrostatic_cutoff_line_edit"));
    electrostatic_cutoff_line_edit->setAlignment(Qt::AlignRight);

    gridLayout1->addWidget(electrostatic_cutoff_line_edit, 2, 1, 1, 1);

    vdw_cutoff_line_edit = new QLineEdit(AmberFF_Options);
    vdw_cutoff_line_edit->setObjectName(QString::fromUtf8("vdw_cutoff_line_edit"));
    QSizePolicy sizePolicy11(static_cast<QSizePolicy::Policy>(7), static_cast<QSizePolicy::Policy>(0));
    sizePolicy11.setHorizontalStretch(0);
    sizePolicy11.setVerticalStretch(0);
    sizePolicy11.setHeightForWidth(vdw_cutoff_line_edit->sizePolicy().hasHeightForWidth());
    vdw_cutoff_line_edit->setSizePolicy(sizePolicy11);
    vdw_cutoff_line_edit->setMinimumSize(QSize(0, 25));
    vdw_cutoff_line_edit->setMaximumSize(QSize(150, 32767));
    vdw_cutoff_line_edit->setFrame(true);
    vdw_cutoff_line_edit->setEchoMode(QLineEdit::Normal);
    vdw_cutoff_line_edit->setAlignment(Qt::AlignRight);

    gridLayout1->addWidget(vdw_cutoff_line_edit, 1, 1, 1, 1);

    nonbonded_cutoff_line_edit = new QLineEdit(AmberFF_Options);
    nonbonded_cutoff_line_edit->setObjectName(QString::fromUtf8("nonbonded_cutoff_line_edit"));
    QSizePolicy sizePolicy12(static_cast<QSizePolicy::Policy>(7), static_cast<QSizePolicy::Policy>(0));
    sizePolicy12.setHorizontalStretch(0);
    sizePolicy12.setVerticalStretch(0);
    sizePolicy12.setHeightForWidth(nonbonded_cutoff_line_edit->sizePolicy().hasHeightForWidth());
    nonbonded_cutoff_line_edit->setSizePolicy(sizePolicy12);
    nonbonded_cutoff_line_edit->setMinimumSize(QSize(0, 25));
    nonbonded_cutoff_line_edit->setMaximumSize(QSize(150, 32767));
    nonbonded_cutoff_line_edit->setMaxLength(32767);
    nonbonded_cutoff_line_edit->setFrame(true);
    nonbonded_cutoff_line_edit->setEchoMode(QLineEdit::Normal);
    nonbonded_cutoff_line_edit->setAlignment(Qt::AlignRight);

    gridLayout1->addWidget(nonbonded_cutoff_line_edit, 0, 1, 1, 1);


    gridLayout->addWidget(AmberFF_Options, 4, 0, 1, 2);

    dielectric_group = new QGroupBox(AmberConfigurationDialogData);
    dielectric_group->setObjectName(QString::fromUtf8("dielectric_group"));
    QSizePolicy sizePolicy13(static_cast<QSizePolicy::Policy>(1), static_cast<QSizePolicy::Policy>(1));
    sizePolicy13.setHorizontalStretch(0);
    sizePolicy13.setVerticalStretch(0);
    sizePolicy13.setHeightForWidth(dielectric_group->sizePolicy().hasHeightForWidth());
    dielectric_group->setSizePolicy(sizePolicy13);
    dielectric_group->setMinimumSize(QSize(180, 0));
    dielectric_group->setAlignment(Qt::AlignHCenter);
    hboxLayout = new QHBoxLayout(dielectric_group);
    hboxLayout->setSpacing(6);
    hboxLayout->setMargin(4);
    hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
    constant_button = new QRadioButton(dielectric_group);
    constant_button->setObjectName(QString::fromUtf8("constant_button"));
    QSizePolicy sizePolicy14(static_cast<QSizePolicy::Policy>(7), static_cast<QSizePolicy::Policy>(1));
    sizePolicy14.setHorizontalStretch(0);
    sizePolicy14.setVerticalStretch(0);
    sizePolicy14.setHeightForWidth(constant_button->sizePolicy().hasHeightForWidth());
    constant_button->setSizePolicy(sizePolicy14);
    constant_button->setMinimumSize(QSize(0, 0));
    constant_button->setMaximumSize(QSize(32000, 32767));
    constant_button->setChecked(true);

    hboxLayout->addWidget(constant_button);

    distance_button = new QRadioButton(dielectric_group);
    distance_button->setObjectName(QString::fromUtf8("distance_button"));
    QSizePolicy sizePolicy15(static_cast<QSizePolicy::Policy>(3), static_cast<QSizePolicy::Policy>(1));
    sizePolicy15.setHorizontalStretch(0);
    sizePolicy15.setVerticalStretch(0);
    sizePolicy15.setHeightForWidth(distance_button->sizePolicy().hasHeightForWidth());
    distance_button->setSizePolicy(sizePolicy15);
    distance_button->setMinimumSize(QSize(0, 0));

    hboxLayout->addWidget(distance_button);


    gridLayout->addWidget(dielectric_group, 3, 0, 1, 2);

    check_options = new QGroupBox(AmberConfigurationDialogData);
    check_options->setObjectName(QString::fromUtf8("check_options"));
    check_options->setMinimumSize(QSize(0, 0));
    check_options->setAlignment(Qt::AlignHCenter);
    vboxLayout = new QVBoxLayout(check_options);
    vboxLayout->setSpacing(4);
    vboxLayout->setMargin(5);
    vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
    assign_charges_checkBox = new QCheckBox(check_options);
    assign_charges_checkBox->setObjectName(QString::fromUtf8("assign_charges_checkBox"));
    assign_charges_checkBox->setMinimumSize(QSize(140, 0));
    assign_charges_checkBox->setChecked(true);

    vboxLayout->addWidget(assign_charges_checkBox);

    assign_typenames_checkBox = new QCheckBox(check_options);
    assign_typenames_checkBox->setObjectName(QString::fromUtf8("assign_typenames_checkBox"));
    assign_typenames_checkBox->setMinimumSize(QSize(165, 0));
    assign_typenames_checkBox->setChecked(true);

    vboxLayout->addWidget(assign_typenames_checkBox);

    assign_types_checkBox = new QCheckBox(check_options);
    assign_types_checkBox->setObjectName(QString::fromUtf8("assign_types_checkBox"));
    assign_types_checkBox->setMinimumSize(QSize(140, 0));
    assign_types_checkBox->setChecked(true);

    vboxLayout->addWidget(assign_types_checkBox);

    overwrite_charges_checkBox = new QCheckBox(check_options);
    overwrite_charges_checkBox->setObjectName(QString::fromUtf8("overwrite_charges_checkBox"));
    overwrite_charges_checkBox->setMinimumSize(QSize(155, 0));
    overwrite_charges_checkBox->setChecked(true);

    vboxLayout->addWidget(overwrite_charges_checkBox);

    overwrite_typenames_checkBox = new QCheckBox(check_options);
    overwrite_typenames_checkBox->setObjectName(QString::fromUtf8("overwrite_typenames_checkBox"));
    overwrite_typenames_checkBox->setMinimumSize(QSize(155, 0));
    overwrite_typenames_checkBox->setChecked(true);

    vboxLayout->addWidget(overwrite_typenames_checkBox);


    gridLayout->addWidget(check_options, 2, 0, 1, 1);

    groupBox11 = new QGroupBox(AmberConfigurationDialogData);
    groupBox11->setObjectName(QString::fromUtf8("groupBox11"));
    groupBox11->setAlignment(Qt::AlignHCenter);
    hboxLayout1 = new QHBoxLayout(groupBox11);
    hboxLayout1->setSpacing(6);
    hboxLayout1->setMargin(4);
    hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
    textLabel1 = new QLabel(groupBox11);
    textLabel1->setObjectName(QString::fromUtf8("textLabel1"));
    QSizePolicy sizePolicy16(static_cast<QSizePolicy::Policy>(7), static_cast<QSizePolicy::Policy>(1));
    sizePolicy16.setHorizontalStretch(0);
    sizePolicy16.setVerticalStretch(0);
    sizePolicy16.setHeightForWidth(textLabel1->sizePolicy().hasHeightForWidth());
    textLabel1->setSizePolicy(sizePolicy16);
    textLabel1->setMinimumSize(QSize(0, 28));
    textLabel1->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

    hboxLayout1->addWidget(textLabel1);

    max_unassigned_atoms = new QLineEdit(groupBox11);
    max_unassigned_atoms->setObjectName(QString::fromUtf8("max_unassigned_atoms"));
    max_unassigned_atoms->setMinimumSize(QSize(100, 28));
    max_unassigned_atoms->setMaximumSize(QSize(100, 28));
    max_unassigned_atoms->setAlignment(Qt::AlignRight);

    hboxLayout1->addWidget(max_unassigned_atoms);


    gridLayout->addWidget(groupBox11, 1, 0, 1, 2);

    groupBox12 = new QGroupBox(AmberConfigurationDialogData);
    groupBox12->setObjectName(QString::fromUtf8("groupBox12"));
    groupBox12->setAlignment(Qt::AlignHCenter);
    hboxLayout2 = new QHBoxLayout(groupBox12);
    hboxLayout2->setSpacing(6);
    hboxLayout2->setMargin(5);
    hboxLayout2->setObjectName(QString::fromUtf8("hboxLayout2"));
    Label_10 = new QLabel(groupBox12);
    Label_10->setObjectName(QString::fromUtf8("Label_10"));
    QSizePolicy sizePolicy17(static_cast<QSizePolicy::Policy>(5), static_cast<QSizePolicy::Policy>(1));
    sizePolicy17.setHorizontalStretch(0);
    sizePolicy17.setVerticalStretch(0);
    sizePolicy17.setHeightForWidth(Label_10->sizePolicy().hasHeightForWidth());
    Label_10->setSizePolicy(sizePolicy17);
    Label_10->setMinimumSize(QSize(0, 25));
    Label_10->setFocusPolicy(Qt::NoFocus);
    Label_10->setLineWidth(1);
    Label_10->setTextFormat(Qt::AutoText);
    Label_10->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

    hboxLayout2->addWidget(Label_10);

    parameter_file_edit = new QLineEdit(groupBox12);
    parameter_file_edit->setObjectName(QString::fromUtf8("parameter_file_edit"));
    parameter_file_edit->setMinimumSize(QSize(150, 25));
    parameter_file_edit->setFocusPolicy(Qt::StrongFocus);
    parameter_file_edit->setMaxLength(32767);
    parameter_file_edit->setFrame(true);
    parameter_file_edit->setEchoMode(QLineEdit::Normal);
    parameter_file_edit->setAlignment(Qt::AlignLeading);

    hboxLayout2->addWidget(parameter_file_edit);

    browse_button = new QPushButton(groupBox12);
    browse_button->setObjectName(QString::fromUtf8("browse_button"));
    browse_button->setMinimumSize(QSize(50, 25));
    browse_button->setFocusPolicy(Qt::TabFocus);
    browse_button->setAutoDefault(true);

    hboxLayout2->addWidget(browse_button);


    gridLayout->addWidget(groupBox12, 0, 0, 1, 2);

    hboxLayout3 = new QHBoxLayout();
    hboxLayout3->setSpacing(6);
    hboxLayout3->setMargin(0);
    hboxLayout3->setObjectName(QString::fromUtf8("hboxLayout3"));
    close_button = new QPushButton(AmberConfigurationDialogData);
    close_button->setObjectName(QString::fromUtf8("close_button"));
    QSizePolicy sizePolicy18(static_cast<QSizePolicy::Policy>(3), static_cast<QSizePolicy::Policy>(0));
    sizePolicy18.setHorizontalStretch(0);
    sizePolicy18.setVerticalStretch(0);
    sizePolicy18.setHeightForWidth(close_button->sizePolicy().hasHeightForWidth());
    close_button->setSizePolicy(sizePolicy18);
    close_button->setMinimumSize(QSize(0, 30));
    close_button->setDefault(true);

    hboxLayout3->addWidget(close_button);

    cancel_button = new QPushButton(AmberConfigurationDialogData);
    cancel_button->setObjectName(QString::fromUtf8("cancel_button"));
    QSizePolicy sizePolicy19(static_cast<QSizePolicy::Policy>(3), static_cast<QSizePolicy::Policy>(0));
    sizePolicy19.setHorizontalStretch(0);
    sizePolicy19.setVerticalStretch(0);
    sizePolicy19.setHeightForWidth(cancel_button->sizePolicy().hasHeightForWidth());
    cancel_button->setSizePolicy(sizePolicy19);
    cancel_button->setMinimumSize(QSize(0, 30));

    hboxLayout3->addWidget(cancel_button);

    reset_button = new QPushButton(AmberConfigurationDialogData);
    reset_button->setObjectName(QString::fromUtf8("reset_button"));
    QSizePolicy sizePolicy20(static_cast<QSizePolicy::Policy>(3), static_cast<QSizePolicy::Policy>(0));
    sizePolicy20.setHorizontalStretch(0);
    sizePolicy20.setVerticalStretch(0);
    sizePolicy20.setHeightForWidth(reset_button->sizePolicy().hasHeightForWidth());
    reset_button->setSizePolicy(sizePolicy20);
    reset_button->setMinimumSize(QSize(0, 30));

    hboxLayout3->addWidget(reset_button);


    gridLayout->addLayout(hboxLayout3, 5, 0, 1, 2);

    groupBox = new QGroupBox(AmberConfigurationDialogData);
    groupBox->setObjectName(QString::fromUtf8("groupBox"));
    groupBox->setAlignment(Qt::AlignHCenter);
    vboxLayout1 = new QVBoxLayout(groupBox);
    vboxLayout1->setSpacing(6);
    vboxLayout1->setMargin(9);
    vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
    stretches_box = new QCheckBox(groupBox);
    stretches_box->setObjectName(QString::fromUtf8("stretches_box"));
    stretches_box->setChecked(true);

    vboxLayout1->addWidget(stretches_box);

    bends_box = new QCheckBox(groupBox);
    bends_box->setObjectName(QString::fromUtf8("bends_box"));
    bends_box->setChecked(true);

    vboxLayout1->addWidget(bends_box);

    torsions_box = new QCheckBox(groupBox);
    torsions_box->setObjectName(QString::fromUtf8("torsions_box"));
    torsions_box->setChecked(true);

    vboxLayout1->addWidget(torsions_box);

    NB_box = new QCheckBox(groupBox);
    NB_box->setObjectName(QString::fromUtf8("NB_box"));
    NB_box->setChecked(true);

    vboxLayout1->addWidget(NB_box);


    gridLayout->addWidget(groupBox, 2, 1, 1, 1);

    vdw_cutoff_label->setBuddy(vdw_cutoff_line_edit);
    nonbonded_cutoff_label->setBuddy(nonbonded_cutoff_line_edit);
    nonbonded_cutoff_label_2_2_2->setBuddy(nonbonded_cutoff_line_edit);
    nonbonded_cutoff_label_2_2->setBuddy(nonbonded_cutoff_line_edit);
    nonbonded_cutoff_label_2_2_3_2->setBuddy(nonbonded_cutoff_line_edit);
    nonbonded_cutoff_label_2_2_3->setBuddy(nonbonded_cutoff_line_edit);
    nonbonded_cutoff_label_2->setBuddy(nonbonded_cutoff_line_edit);
    QWidget::setTabOrder(parameter_file_edit, browse_button);
    QWidget::setTabOrder(browse_button, max_unassigned_atoms);
    QWidget::setTabOrder(max_unassigned_atoms, assign_charges_checkBox);
    QWidget::setTabOrder(assign_charges_checkBox, assign_typenames_checkBox);
    QWidget::setTabOrder(assign_typenames_checkBox, assign_types_checkBox);
    QWidget::setTabOrder(assign_types_checkBox, overwrite_charges_checkBox);
    QWidget::setTabOrder(overwrite_charges_checkBox, overwrite_typenames_checkBox);
    QWidget::setTabOrder(overwrite_typenames_checkBox, stretches_box);
    QWidget::setTabOrder(stretches_box, bends_box);
    QWidget::setTabOrder(bends_box, torsions_box);
    QWidget::setTabOrder(torsions_box, NB_box);
    QWidget::setTabOrder(NB_box, constant_button);
    QWidget::setTabOrder(constant_button, distance_button);
    QWidget::setTabOrder(distance_button, nonbonded_cutoff_line_edit);
    QWidget::setTabOrder(nonbonded_cutoff_line_edit, vdw_cutoff_line_edit);
    QWidget::setTabOrder(vdw_cutoff_line_edit, electrostatic_cutoff_line_edit);
    QWidget::setTabOrder(electrostatic_cutoff_line_edit, scaling_electrostatic_1_4_line_edit);
    QWidget::setTabOrder(scaling_electrostatic_1_4_line_edit, scaling_vdw_1_4_line_edit);
    QWidget::setTabOrder(scaling_vdw_1_4_line_edit, vdw_cuton_line_edit);
    QWidget::setTabOrder(vdw_cuton_line_edit, electrostatic_cuton_line_edit);
    QWidget::setTabOrder(electrostatic_cuton_line_edit, close_button);
    QWidget::setTabOrder(close_button, cancel_button);
    QWidget::setTabOrder(cancel_button, reset_button);

    retranslateUi(AmberConfigurationDialogData);

    QSize size(541, 602);
    size = size.expandedTo(AmberConfigurationDialogData->minimumSizeHint());
    AmberConfigurationDialogData->resize(size);


    QMetaObject::connectSlotsByName(AmberConfigurationDialogData);
    } // setupUi

    void retranslateUi(QDialog *AmberConfigurationDialogData)
    {
    AmberConfigurationDialogData->setWindowTitle(QApplication::translate("AmberConfigurationDialogData", "AMBER Options", 0, QApplication::UnicodeUTF8));
    AmberFF_Options->setTitle(QApplication::translate("AmberConfigurationDialogData", "Amber Options", 0, QApplication::UnicodeUTF8));
    scaling_vdw_1_4->setText(QApplication::translate("AmberConfigurationDialogData", "van der Waals 1-4 scaling factor", 0, QApplication::UnicodeUTF8));
    scaling_electrostatic_1_4_label->setText(QApplication::translate("AmberConfigurationDialogData", "Electrostatic 1-4 scaling factor", 0, QApplication::UnicodeUTF8));
    electrostatic_cutoff_label->setText(QApplication::translate("AmberConfigurationDialogData", "Electrostatic cutoff/cuton distance", 0, QApplication::UnicodeUTF8));
    vdw_cutoff_label->setText(QApplication::translate("AmberConfigurationDialogData", "van der Waals cutoff/cuton distance", 0, QApplication::UnicodeUTF8));
    nonbonded_cutoff_label->setText(QApplication::translate("AmberConfigurationDialogData", "Nonbonded cutoff distance", 0, QApplication::UnicodeUTF8));
    nonbonded_cutoff_label_2_2_2->setText(QApplication::translate("AmberConfigurationDialogData", "\303\205", 0, QApplication::UnicodeUTF8));
    nonbonded_cutoff_label_2_2->setText(QApplication::translate("AmberConfigurationDialogData", "\303\205", 0, QApplication::UnicodeUTF8));
    electrostatic_cuton_line_edit->setText(QApplication::translate("AmberConfigurationDialogData", "13.0", 0, QApplication::UnicodeUTF8));
    vdw_cuton_line_edit->setText(QApplication::translate("AmberConfigurationDialogData", "13.0", 0, QApplication::UnicodeUTF8));
    nonbonded_cutoff_label_2_2_3_2->setText(QApplication::translate("AmberConfigurationDialogData", "\303\205 /", 0, QApplication::UnicodeUTF8));
    nonbonded_cutoff_label_2_2_3->setText(QApplication::translate("AmberConfigurationDialogData", "\303\205 /", 0, QApplication::UnicodeUTF8));
    nonbonded_cutoff_label_2->setText(QApplication::translate("AmberConfigurationDialogData", "\303\205", 0, QApplication::UnicodeUTF8));
    scaling_vdw_1_4_line_edit->setText(QApplication::translate("AmberConfigurationDialogData", "2.0", 0, QApplication::UnicodeUTF8));
    scaling_electrostatic_1_4_line_edit->setText(QApplication::translate("AmberConfigurationDialogData", "2.0", 0, QApplication::UnicodeUTF8));
    electrostatic_cutoff_line_edit->setText(QApplication::translate("AmberConfigurationDialogData", "15.0", 0, QApplication::UnicodeUTF8));
    vdw_cutoff_line_edit->setText(QApplication::translate("AmberConfigurationDialogData", "15.0", 0, QApplication::UnicodeUTF8));
    nonbonded_cutoff_line_edit->setText(QApplication::translate("AmberConfigurationDialogData", "20.0", 0, QApplication::UnicodeUTF8));
    dielectric_group->setTitle(QApplication::translate("AmberConfigurationDialogData", "Dielectric Constant", 0, QApplication::UnicodeUTF8));
    constant_button->setText(QApplication::translate("AmberConfigurationDialogData", "constant", 0, QApplication::UnicodeUTF8));
    distance_button->setText(QApplication::translate("AmberConfigurationDialogData", "distance dependent", 0, QApplication::UnicodeUTF8));
    check_options->setTitle(QApplication::translate("AmberConfigurationDialogData", "Charge and Type Assignment", 0, QApplication::UnicodeUTF8));
    assign_charges_checkBox->setText(QApplication::translate("AmberConfigurationDialogData", "Assign charges", 0, QApplication::UnicodeUTF8));
    assign_typenames_checkBox->setText(QApplication::translate("AmberConfigurationDialogData", "Assign type names", 0, QApplication::UnicodeUTF8));
    assign_types_checkBox->setText(QApplication::translate("AmberConfigurationDialogData", "Assign (numeric) types", 0, QApplication::UnicodeUTF8));
    overwrite_charges_checkBox->setText(QApplication::translate("AmberConfigurationDialogData", "Overwrite charges", 0, QApplication::UnicodeUTF8));
    overwrite_typenames_checkBox->setText(QApplication::translate("AmberConfigurationDialogData", "Overwrite type names", 0, QApplication::UnicodeUTF8));
    groupBox11->setTitle(QApplication::translate("AmberConfigurationDialogData", "Setup Error Handling", 0, QApplication::UnicodeUTF8));
    textLabel1->setText(QApplication::translate("AmberConfigurationDialogData", "Maximum number of unassigned atoms before aborting setup", 0, QApplication::UnicodeUTF8));
    max_unassigned_atoms->setText(QApplication::translate("AmberConfigurationDialogData", "10", 0, QApplication::UnicodeUTF8));
    groupBox12->setTitle(QApplication::translate("AmberConfigurationDialogData", "Parameter Set", 0, QApplication::UnicodeUTF8));
    Label_10->setText(QApplication::translate("AmberConfigurationDialogData", "Filename", 0, QApplication::UnicodeUTF8));
    parameter_file_edit->setText(QApplication::translate("AmberConfigurationDialogData", "Amber/amber96.ini", 0, QApplication::UnicodeUTF8));
    browse_button->setToolTip(QApplication::translate("AmberConfigurationDialogData", "Browse your computer for amber file", 0, QApplication::UnicodeUTF8));
    browse_button->setText(QApplication::translate("AmberConfigurationDialogData", "Browse", 0, QApplication::UnicodeUTF8));
    close_button->setToolTip(QApplication::translate("AmberConfigurationDialogData", "Close and save options", 0, QApplication::UnicodeUTF8));
    close_button->setText(QApplication::translate("AmberConfigurationDialogData", "O&K", 0, QApplication::UnicodeUTF8));
    close_button->setShortcut(QString());
    cancel_button->setToolTip(QApplication::translate("AmberConfigurationDialogData", "Close window and discard changes", 0, QApplication::UnicodeUTF8));
    cancel_button->setText(QApplication::translate("AmberConfigurationDialogData", "C&ancel", 0, QApplication::UnicodeUTF8));
    cancel_button->setShortcut(QString());
    reset_button->setToolTip(QApplication::translate("AmberConfigurationDialogData", "Reset all settings to default values", 0, QApplication::UnicodeUTF8));
    reset_button->setText(QApplication::translate("AmberConfigurationDialogData", "Defaults", 0, QApplication::UnicodeUTF8));
    reset_button->setShortcut(QString());
    groupBox->setTitle(QApplication::translate("AmberConfigurationDialogData", "Components", 0, QApplication::UnicodeUTF8));
    stretches_box->setText(QApplication::translate("AmberConfigurationDialogData", "Stretches", 0, QApplication::UnicodeUTF8));
    bends_box->setText(QApplication::translate("AmberConfigurationDialogData", "Bends", 0, QApplication::UnicodeUTF8));
    torsions_box->setText(QApplication::translate("AmberConfigurationDialogData", "Torsions", 0, QApplication::UnicodeUTF8));
    NB_box->setText(QApplication::translate("AmberConfigurationDialogData", "NonBonded", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(AmberConfigurationDialogData);
    } // retranslateUi

};

namespace Ui {
    class AmberConfigurationDialogData: public Ui_AmberConfigurationDialogData {};
} // namespace Ui

#endif // AMBERCONFIGURATIONDIALOGDATA_H
