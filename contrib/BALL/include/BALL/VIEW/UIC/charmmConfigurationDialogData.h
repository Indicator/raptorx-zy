/********************************************************************************
** Form generated from reading ui file 'charmmConfigurationDialog.ui'
**
** Created: Wed Mar 19 14:28:17 2008
**      by: Qt User Interface Compiler version 4.2.2
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef CHARMMCONFIGURATIONDIALOGDATA_H
#define CHARMMCONFIGURATIONDIALOGDATA_H

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

class Ui_CharmmConfigurationDialogData
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *hboxLayout;
    QPushButton *close_button;
    QPushButton *cancel_button;
    QPushButton *reset_button;
    QGroupBox *CharmmFF_Options;
    QGridLayout *gridLayout1;
    QLabel *scaling_vdw_1_4_label;
    QLineEdit *solvation_cuton_line_edit;
    QLineEdit *electrostatic_cutoff_line_edit;
    QLabel *nonbonded_cutoff_label_2;
    QLineEdit *scaling_electrostatic_1_4_line_edit;
    QLineEdit *solvation_cutoff_line_edit;
    QLabel *nonbonded_cutoff_label_2_2_3_3;
    QLabel *solvation_cutoff_label;
    QLabel *scaling_electrostatic_1_4_label;
    QLabel *nonbonded_cutoff_label;
    QLabel *nonbonded_cutoff_label_2_2_3;
    QLineEdit *vdw_cutoff_line_edit;
    QLineEdit *nonbonded_cutoff_line_edit;
    QLineEdit *scaling_vdw_1_4_line_edit;
    QLabel *nonbonded_cutoff_label_2_2_3_2;
    QLineEdit *electrostatic_cuton_line_edit;
    QLabel *electrostatic_cutoff_label;
    QLineEdit *vdw_cuton_line_edit;
    QLabel *vdw_cutoff_label;
    QLabel *nonbonded_cutoff_label_2_4;
    QLabel *nonbonded_cutoff_label_2_3;
    QLabel *nonbonded_cutoff_label_2_2;
    QGroupBox *dielectric_group;
    QHBoxLayout *hboxLayout1;
    QRadioButton *constant_button;
    QRadioButton *distance_button;
    QGroupBox *groupBox;
    QGridLayout *gridLayout2;
    QCheckBox *use_eef1_checkBox;
    QCheckBox *NB_box;
    QCheckBox *itorsions_box;
    QCheckBox *torsions_box;
    QCheckBox *stretches_box;
    QCheckBox *bends_box;
    QGroupBox *check_options;
    QGridLayout *gridLayout3;
    QCheckBox *overwrite_typenames_checkBox;
    QCheckBox *assign_charges_checkBox;
    QCheckBox *assign_typenames_checkBox;
    QCheckBox *assign_types_checkBox;
    QCheckBox *overwrite_charges_checkBox;
    QGroupBox *groupBox21;
    QGridLayout *gridLayout4;
    QLabel *Label_10;
    QLineEdit *parameter_file_edit;
    QPushButton *browse_button;
    QGroupBox *groupBox20;
    QGridLayout *gridLayout5;
    QLineEdit *max_unassigned_atoms;
    QLabel *textLabel1;

    void setupUi(QDialog *CharmmConfigurationDialogData)
    {
    CharmmConfigurationDialogData->setObjectName(QString::fromUtf8("CharmmConfigurationDialogData"));
    CharmmConfigurationDialogData->setMinimumSize(QSize(0, 0));
    CharmmConfigurationDialogData->setMaximumSize(QSize(6778, 8900));
    gridLayout = new QGridLayout(CharmmConfigurationDialogData);
    gridLayout->setSpacing(5);
    gridLayout->setMargin(5);
    gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
    hboxLayout = new QHBoxLayout();
    hboxLayout->setSpacing(6);
    hboxLayout->setMargin(0);
    hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
    close_button = new QPushButton(CharmmConfigurationDialogData);
    close_button->setObjectName(QString::fromUtf8("close_button"));
    close_button->setMinimumSize(QSize(0, 30));
    close_button->setDefault(true);

    hboxLayout->addWidget(close_button);

    cancel_button = new QPushButton(CharmmConfigurationDialogData);
    cancel_button->setObjectName(QString::fromUtf8("cancel_button"));
    cancel_button->setMinimumSize(QSize(0, 30));

    hboxLayout->addWidget(cancel_button);

    reset_button = new QPushButton(CharmmConfigurationDialogData);
    reset_button->setObjectName(QString::fromUtf8("reset_button"));
    reset_button->setMinimumSize(QSize(0, 30));

    hboxLayout->addWidget(reset_button);


    gridLayout->addLayout(hboxLayout, 5, 0, 1, 2);

    CharmmFF_Options = new QGroupBox(CharmmConfigurationDialogData);
    CharmmFF_Options->setObjectName(QString::fromUtf8("CharmmFF_Options"));
    CharmmFF_Options->setMinimumSize(QSize(520, 0));
    CharmmFF_Options->setAlignment(Qt::AlignHCenter);
    gridLayout1 = new QGridLayout(CharmmFF_Options);
    gridLayout1->setSpacing(6);
    gridLayout1->setMargin(4);
    gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
    scaling_vdw_1_4_label = new QLabel(CharmmFF_Options);
    scaling_vdw_1_4_label->setObjectName(QString::fromUtf8("scaling_vdw_1_4_label"));
    scaling_vdw_1_4_label->setMinimumSize(QSize(260, 0));

    gridLayout1->addWidget(scaling_vdw_1_4_label, 4, 0, 1, 1);

    solvation_cuton_line_edit = new QLineEdit(CharmmFF_Options);
    solvation_cuton_line_edit->setObjectName(QString::fromUtf8("solvation_cuton_line_edit"));
    solvation_cuton_line_edit->setMinimumSize(QSize(50, 25));
    solvation_cuton_line_edit->setMaximumSize(QSize(90, 32767));
    solvation_cuton_line_edit->setAlignment(Qt::AlignRight);

    gridLayout1->addWidget(solvation_cuton_line_edit, 3, 3, 1, 1);

    electrostatic_cutoff_line_edit = new QLineEdit(CharmmFF_Options);
    electrostatic_cutoff_line_edit->setObjectName(QString::fromUtf8("electrostatic_cutoff_line_edit"));
    electrostatic_cutoff_line_edit->setMinimumSize(QSize(50, 25));
    electrostatic_cutoff_line_edit->setMaximumSize(QSize(90, 32767));
    electrostatic_cutoff_line_edit->setAlignment(Qt::AlignRight);

    gridLayout1->addWidget(electrostatic_cutoff_line_edit, 2, 1, 1, 1);

    nonbonded_cutoff_label_2 = new QLabel(CharmmFF_Options);
    nonbonded_cutoff_label_2->setObjectName(QString::fromUtf8("nonbonded_cutoff_label_2"));
    QSizePolicy sizePolicy(static_cast<QSizePolicy::Policy>(5), static_cast<QSizePolicy::Policy>(5));
    sizePolicy.setHorizontalStretch(0);
    sizePolicy.setVerticalStretch(0);
    sizePolicy.setHeightForWidth(nonbonded_cutoff_label_2->sizePolicy().hasHeightForWidth());
    nonbonded_cutoff_label_2->setSizePolicy(sizePolicy);
    nonbonded_cutoff_label_2->setMinimumSize(QSize(25, 0));
    nonbonded_cutoff_label_2->setMaximumSize(QSize(30, 32767));

    gridLayout1->addWidget(nonbonded_cutoff_label_2, 0, 2, 1, 1);

    scaling_electrostatic_1_4_line_edit = new QLineEdit(CharmmFF_Options);
    scaling_electrostatic_1_4_line_edit->setObjectName(QString::fromUtf8("scaling_electrostatic_1_4_line_edit"));
    scaling_electrostatic_1_4_line_edit->setMinimumSize(QSize(50, 25));
    scaling_electrostatic_1_4_line_edit->setMaximumSize(QSize(90, 32767));
    scaling_electrostatic_1_4_line_edit->setAlignment(Qt::AlignRight);

    gridLayout1->addWidget(scaling_electrostatic_1_4_line_edit, 4, 1, 1, 1);

    solvation_cutoff_line_edit = new QLineEdit(CharmmFF_Options);
    solvation_cutoff_line_edit->setObjectName(QString::fromUtf8("solvation_cutoff_line_edit"));
    solvation_cutoff_line_edit->setMinimumSize(QSize(50, 25));
    solvation_cutoff_line_edit->setMaximumSize(QSize(90, 32767));
    solvation_cutoff_line_edit->setAlignment(Qt::AlignRight);

    gridLayout1->addWidget(solvation_cutoff_line_edit, 3, 1, 1, 1);

    nonbonded_cutoff_label_2_2_3_3 = new QLabel(CharmmFF_Options);
    nonbonded_cutoff_label_2_2_3_3->setObjectName(QString::fromUtf8("nonbonded_cutoff_label_2_2_3_3"));
    QSizePolicy sizePolicy1(static_cast<QSizePolicy::Policy>(5), static_cast<QSizePolicy::Policy>(5));
    sizePolicy1.setHorizontalStretch(0);
    sizePolicy1.setVerticalStretch(0);
    sizePolicy1.setHeightForWidth(nonbonded_cutoff_label_2_2_3_3->sizePolicy().hasHeightForWidth());
    nonbonded_cutoff_label_2_2_3_3->setSizePolicy(sizePolicy1);
    nonbonded_cutoff_label_2_2_3_3->setMinimumSize(QSize(25, 0));
    nonbonded_cutoff_label_2_2_3_3->setMaximumSize(QSize(30, 32767));

    gridLayout1->addWidget(nonbonded_cutoff_label_2_2_3_3, 3, 2, 1, 1);

    solvation_cutoff_label = new QLabel(CharmmFF_Options);
    solvation_cutoff_label->setObjectName(QString::fromUtf8("solvation_cutoff_label"));
    solvation_cutoff_label->setMinimumSize(QSize(280, 0));

    gridLayout1->addWidget(solvation_cutoff_label, 3, 0, 1, 1);

    scaling_electrostatic_1_4_label = new QLabel(CharmmFF_Options);
    scaling_electrostatic_1_4_label->setObjectName(QString::fromUtf8("scaling_electrostatic_1_4_label"));
    scaling_electrostatic_1_4_label->setMinimumSize(QSize(260, 0));

    gridLayout1->addWidget(scaling_electrostatic_1_4_label, 5, 0, 1, 1);

    nonbonded_cutoff_label = new QLabel(CharmmFF_Options);
    nonbonded_cutoff_label->setObjectName(QString::fromUtf8("nonbonded_cutoff_label"));
    nonbonded_cutoff_label->setMinimumSize(QSize(260, 0));

    gridLayout1->addWidget(nonbonded_cutoff_label, 0, 0, 1, 1);

    nonbonded_cutoff_label_2_2_3 = new QLabel(CharmmFF_Options);
    nonbonded_cutoff_label_2_2_3->setObjectName(QString::fromUtf8("nonbonded_cutoff_label_2_2_3"));
    QSizePolicy sizePolicy2(static_cast<QSizePolicy::Policy>(5), static_cast<QSizePolicy::Policy>(5));
    sizePolicy2.setHorizontalStretch(0);
    sizePolicy2.setVerticalStretch(0);
    sizePolicy2.setHeightForWidth(nonbonded_cutoff_label_2_2_3->sizePolicy().hasHeightForWidth());
    nonbonded_cutoff_label_2_2_3->setSizePolicy(sizePolicy2);
    nonbonded_cutoff_label_2_2_3->setMinimumSize(QSize(25, 0));
    nonbonded_cutoff_label_2_2_3->setMaximumSize(QSize(30, 32767));

    gridLayout1->addWidget(nonbonded_cutoff_label_2_2_3, 1, 2, 1, 1);

    vdw_cutoff_line_edit = new QLineEdit(CharmmFF_Options);
    vdw_cutoff_line_edit->setObjectName(QString::fromUtf8("vdw_cutoff_line_edit"));
    vdw_cutoff_line_edit->setMinimumSize(QSize(50, 25));
    vdw_cutoff_line_edit->setMaximumSize(QSize(90, 32767));
    vdw_cutoff_line_edit->setFrame(true);
    vdw_cutoff_line_edit->setEchoMode(QLineEdit::Normal);
    vdw_cutoff_line_edit->setAlignment(Qt::AlignRight);

    gridLayout1->addWidget(vdw_cutoff_line_edit, 1, 1, 1, 1);

    nonbonded_cutoff_line_edit = new QLineEdit(CharmmFF_Options);
    nonbonded_cutoff_line_edit->setObjectName(QString::fromUtf8("nonbonded_cutoff_line_edit"));
    nonbonded_cutoff_line_edit->setMinimumSize(QSize(50, 25));
    nonbonded_cutoff_line_edit->setMaximumSize(QSize(90, 32767));
    nonbonded_cutoff_line_edit->setFocusPolicy(Qt::StrongFocus);
    nonbonded_cutoff_line_edit->setMaxLength(32767);
    nonbonded_cutoff_line_edit->setFrame(true);
    nonbonded_cutoff_line_edit->setEchoMode(QLineEdit::Normal);
    nonbonded_cutoff_line_edit->setAlignment(Qt::AlignRight);

    gridLayout1->addWidget(nonbonded_cutoff_line_edit, 0, 1, 1, 1);

    scaling_vdw_1_4_line_edit = new QLineEdit(CharmmFF_Options);
    scaling_vdw_1_4_line_edit->setObjectName(QString::fromUtf8("scaling_vdw_1_4_line_edit"));
    scaling_vdw_1_4_line_edit->setMinimumSize(QSize(50, 25));
    scaling_vdw_1_4_line_edit->setMaximumSize(QSize(90, 32767));
    scaling_vdw_1_4_line_edit->setAlignment(Qt::AlignRight);

    gridLayout1->addWidget(scaling_vdw_1_4_line_edit, 5, 1, 1, 1);

    nonbonded_cutoff_label_2_2_3_2 = new QLabel(CharmmFF_Options);
    nonbonded_cutoff_label_2_2_3_2->setObjectName(QString::fromUtf8("nonbonded_cutoff_label_2_2_3_2"));
    QSizePolicy sizePolicy3(static_cast<QSizePolicy::Policy>(5), static_cast<QSizePolicy::Policy>(5));
    sizePolicy3.setHorizontalStretch(0);
    sizePolicy3.setVerticalStretch(0);
    sizePolicy3.setHeightForWidth(nonbonded_cutoff_label_2_2_3_2->sizePolicy().hasHeightForWidth());
    nonbonded_cutoff_label_2_2_3_2->setSizePolicy(sizePolicy3);
    nonbonded_cutoff_label_2_2_3_2->setMinimumSize(QSize(25, 0));
    nonbonded_cutoff_label_2_2_3_2->setMaximumSize(QSize(30, 32767));

    gridLayout1->addWidget(nonbonded_cutoff_label_2_2_3_2, 2, 2, 1, 1);

    electrostatic_cuton_line_edit = new QLineEdit(CharmmFF_Options);
    electrostatic_cuton_line_edit->setObjectName(QString::fromUtf8("electrostatic_cuton_line_edit"));
    electrostatic_cuton_line_edit->setMinimumSize(QSize(50, 25));
    electrostatic_cuton_line_edit->setMaximumSize(QSize(90, 32767));
    electrostatic_cuton_line_edit->setAlignment(Qt::AlignRight);

    gridLayout1->addWidget(electrostatic_cuton_line_edit, 2, 3, 1, 1);

    electrostatic_cutoff_label = new QLabel(CharmmFF_Options);
    electrostatic_cutoff_label->setObjectName(QString::fromUtf8("electrostatic_cutoff_label"));
    electrostatic_cutoff_label->setMinimumSize(QSize(260, 0));

    gridLayout1->addWidget(electrostatic_cutoff_label, 2, 0, 1, 1);

    vdw_cuton_line_edit = new QLineEdit(CharmmFF_Options);
    vdw_cuton_line_edit->setObjectName(QString::fromUtf8("vdw_cuton_line_edit"));
    vdw_cuton_line_edit->setMinimumSize(QSize(50, 25));
    vdw_cuton_line_edit->setMaximumSize(QSize(90, 32767));
    vdw_cuton_line_edit->setAlignment(Qt::AlignRight);

    gridLayout1->addWidget(vdw_cuton_line_edit, 1, 3, 1, 1);

    vdw_cutoff_label = new QLabel(CharmmFF_Options);
    vdw_cutoff_label->setObjectName(QString::fromUtf8("vdw_cutoff_label"));
    vdw_cutoff_label->setMinimumSize(QSize(260, 0));

    gridLayout1->addWidget(vdw_cutoff_label, 1, 0, 1, 1);

    nonbonded_cutoff_label_2_4 = new QLabel(CharmmFF_Options);
    nonbonded_cutoff_label_2_4->setObjectName(QString::fromUtf8("nonbonded_cutoff_label_2_4"));
    QSizePolicy sizePolicy4(static_cast<QSizePolicy::Policy>(5), static_cast<QSizePolicy::Policy>(5));
    sizePolicy4.setHorizontalStretch(0);
    sizePolicy4.setVerticalStretch(0);
    sizePolicy4.setHeightForWidth(nonbonded_cutoff_label_2_4->sizePolicy().hasHeightForWidth());
    nonbonded_cutoff_label_2_4->setSizePolicy(sizePolicy4);
    nonbonded_cutoff_label_2_4->setMinimumSize(QSize(25, 0));
    nonbonded_cutoff_label_2_4->setMaximumSize(QSize(30, 32767));

    gridLayout1->addWidget(nonbonded_cutoff_label_2_4, 3, 4, 1, 1);

    nonbonded_cutoff_label_2_3 = new QLabel(CharmmFF_Options);
    nonbonded_cutoff_label_2_3->setObjectName(QString::fromUtf8("nonbonded_cutoff_label_2_3"));
    QSizePolicy sizePolicy5(static_cast<QSizePolicy::Policy>(5), static_cast<QSizePolicy::Policy>(5));
    sizePolicy5.setHorizontalStretch(0);
    sizePolicy5.setVerticalStretch(0);
    sizePolicy5.setHeightForWidth(nonbonded_cutoff_label_2_3->sizePolicy().hasHeightForWidth());
    nonbonded_cutoff_label_2_3->setSizePolicy(sizePolicy5);
    nonbonded_cutoff_label_2_3->setMinimumSize(QSize(25, 0));
    nonbonded_cutoff_label_2_3->setMaximumSize(QSize(30, 32767));

    gridLayout1->addWidget(nonbonded_cutoff_label_2_3, 2, 4, 1, 1);

    nonbonded_cutoff_label_2_2 = new QLabel(CharmmFF_Options);
    nonbonded_cutoff_label_2_2->setObjectName(QString::fromUtf8("nonbonded_cutoff_label_2_2"));
    QSizePolicy sizePolicy6(static_cast<QSizePolicy::Policy>(5), static_cast<QSizePolicy::Policy>(5));
    sizePolicy6.setHorizontalStretch(0);
    sizePolicy6.setVerticalStretch(0);
    sizePolicy6.setHeightForWidth(nonbonded_cutoff_label_2_2->sizePolicy().hasHeightForWidth());
    nonbonded_cutoff_label_2_2->setSizePolicy(sizePolicy6);
    nonbonded_cutoff_label_2_2->setMinimumSize(QSize(25, 0));
    nonbonded_cutoff_label_2_2->setMaximumSize(QSize(30, 32767));

    gridLayout1->addWidget(nonbonded_cutoff_label_2_2, 1, 4, 1, 1);


    gridLayout->addWidget(CharmmFF_Options, 4, 0, 1, 2);

    dielectric_group = new QGroupBox(CharmmConfigurationDialogData);
    dielectric_group->setObjectName(QString::fromUtf8("dielectric_group"));
    dielectric_group->setAlignment(Qt::AlignHCenter);
    hboxLayout1 = new QHBoxLayout(dielectric_group);
    hboxLayout1->setSpacing(6);
    hboxLayout1->setMargin(5);
    hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
    constant_button = new QRadioButton(dielectric_group);
    constant_button->setObjectName(QString::fromUtf8("constant_button"));
    constant_button->setEnabled(true);
    constant_button->setChecked(false);

    hboxLayout1->addWidget(constant_button);

    distance_button = new QRadioButton(dielectric_group);
    distance_button->setObjectName(QString::fromUtf8("distance_button"));
    distance_button->setMinimumSize(QSize(165, 0));
    distance_button->setChecked(true);

    hboxLayout1->addWidget(distance_button);


    gridLayout->addWidget(dielectric_group, 3, 0, 1, 2);

    groupBox = new QGroupBox(CharmmConfigurationDialogData);
    groupBox->setObjectName(QString::fromUtf8("groupBox"));
    groupBox->setAlignment(Qt::AlignHCenter);
    gridLayout2 = new QGridLayout(groupBox);
    gridLayout2->setSpacing(6);
    gridLayout2->setMargin(9);
    gridLayout2->setObjectName(QString::fromUtf8("gridLayout2"));
    use_eef1_checkBox = new QCheckBox(groupBox);
    use_eef1_checkBox->setObjectName(QString::fromUtf8("use_eef1_checkBox"));
    use_eef1_checkBox->setChecked(true);

    gridLayout2->addWidget(use_eef1_checkBox, 2, 1, 1, 1);

    NB_box = new QCheckBox(groupBox);
    NB_box->setObjectName(QString::fromUtf8("NB_box"));
    NB_box->setChecked(true);

    gridLayout2->addWidget(NB_box, 1, 1, 1, 1);

    itorsions_box = new QCheckBox(groupBox);
    itorsions_box->setObjectName(QString::fromUtf8("itorsions_box"));
    itorsions_box->setChecked(true);

    gridLayout2->addWidget(itorsions_box, 0, 1, 1, 1);

    torsions_box = new QCheckBox(groupBox);
    torsions_box->setObjectName(QString::fromUtf8("torsions_box"));
    torsions_box->setChecked(true);

    gridLayout2->addWidget(torsions_box, 2, 0, 1, 1);

    stretches_box = new QCheckBox(groupBox);
    stretches_box->setObjectName(QString::fromUtf8("stretches_box"));
    stretches_box->setChecked(true);

    gridLayout2->addWidget(stretches_box, 0, 0, 1, 1);

    bends_box = new QCheckBox(groupBox);
    bends_box->setObjectName(QString::fromUtf8("bends_box"));
    bends_box->setChecked(true);

    gridLayout2->addWidget(bends_box, 1, 0, 1, 1);


    gridLayout->addWidget(groupBox, 2, 1, 1, 1);

    check_options = new QGroupBox(CharmmConfigurationDialogData);
    check_options->setObjectName(QString::fromUtf8("check_options"));
    check_options->setAlignment(Qt::AlignHCenter);
    gridLayout3 = new QGridLayout(check_options);
    gridLayout3->setSpacing(3);
    gridLayout3->setMargin(4);
    gridLayout3->setObjectName(QString::fromUtf8("gridLayout3"));
    overwrite_typenames_checkBox = new QCheckBox(check_options);
    overwrite_typenames_checkBox->setObjectName(QString::fromUtf8("overwrite_typenames_checkBox"));
    overwrite_typenames_checkBox->setChecked(true);

    gridLayout3->addWidget(overwrite_typenames_checkBox, 4, 0, 1, 1);

    assign_charges_checkBox = new QCheckBox(check_options);
    assign_charges_checkBox->setObjectName(QString::fromUtf8("assign_charges_checkBox"));
    assign_charges_checkBox->setChecked(true);

    gridLayout3->addWidget(assign_charges_checkBox, 0, 0, 1, 1);

    assign_typenames_checkBox = new QCheckBox(check_options);
    assign_typenames_checkBox->setObjectName(QString::fromUtf8("assign_typenames_checkBox"));
    assign_typenames_checkBox->setChecked(true);

    gridLayout3->addWidget(assign_typenames_checkBox, 1, 0, 1, 1);

    assign_types_checkBox = new QCheckBox(check_options);
    assign_types_checkBox->setObjectName(QString::fromUtf8("assign_types_checkBox"));
    assign_types_checkBox->setChecked(true);

    gridLayout3->addWidget(assign_types_checkBox, 2, 0, 1, 1);

    overwrite_charges_checkBox = new QCheckBox(check_options);
    overwrite_charges_checkBox->setObjectName(QString::fromUtf8("overwrite_charges_checkBox"));
    overwrite_charges_checkBox->setChecked(true);

    gridLayout3->addWidget(overwrite_charges_checkBox, 3, 0, 1, 1);


    gridLayout->addWidget(check_options, 2, 0, 1, 1);

    groupBox21 = new QGroupBox(CharmmConfigurationDialogData);
    groupBox21->setObjectName(QString::fromUtf8("groupBox21"));
    groupBox21->setAlignment(Qt::AlignHCenter);
    gridLayout4 = new QGridLayout(groupBox21);
    gridLayout4->setSpacing(6);
    gridLayout4->setMargin(5);
    gridLayout4->setObjectName(QString::fromUtf8("gridLayout4"));
    Label_10 = new QLabel(groupBox21);
    Label_10->setObjectName(QString::fromUtf8("Label_10"));
    Label_10->setMinimumSize(QSize(90, 25));
    Label_10->setFocusPolicy(Qt::NoFocus);
    Label_10->setLineWidth(1);
    Label_10->setTextFormat(Qt::AutoText);
    Label_10->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

    gridLayout4->addWidget(Label_10, 0, 0, 1, 1);

    parameter_file_edit = new QLineEdit(groupBox21);
    parameter_file_edit->setObjectName(QString::fromUtf8("parameter_file_edit"));
    parameter_file_edit->setMinimumSize(QSize(180, 25));
    parameter_file_edit->setFocusPolicy(Qt::StrongFocus);
    parameter_file_edit->setMaxLength(32767);
    parameter_file_edit->setFrame(true);
    parameter_file_edit->setEchoMode(QLineEdit::Normal);
    parameter_file_edit->setAlignment(Qt::AlignLeading);

    gridLayout4->addWidget(parameter_file_edit, 0, 1, 1, 1);

    browse_button = new QPushButton(groupBox21);
    browse_button->setObjectName(QString::fromUtf8("browse_button"));
    browse_button->setMinimumSize(QSize(50, 25));
    browse_button->setFocusPolicy(Qt::TabFocus);
    browse_button->setAutoDefault(true);

    gridLayout4->addWidget(browse_button, 0, 2, 1, 1);


    gridLayout->addWidget(groupBox21, 0, 0, 1, 2);

    groupBox20 = new QGroupBox(CharmmConfigurationDialogData);
    groupBox20->setObjectName(QString::fromUtf8("groupBox20"));
    groupBox20->setAlignment(Qt::AlignHCenter);
    gridLayout5 = new QGridLayout(groupBox20);
    gridLayout5->setSpacing(6);
    gridLayout5->setMargin(5);
    gridLayout5->setObjectName(QString::fromUtf8("gridLayout5"));
    max_unassigned_atoms = new QLineEdit(groupBox20);
    max_unassigned_atoms->setObjectName(QString::fromUtf8("max_unassigned_atoms"));
    max_unassigned_atoms->setMinimumSize(QSize(100, 28));
    max_unassigned_atoms->setMaximumSize(QSize(100, 28));
    max_unassigned_atoms->setAlignment(Qt::AlignRight);

    gridLayout5->addWidget(max_unassigned_atoms, 0, 1, 1, 1);

    textLabel1 = new QLabel(groupBox20);
    textLabel1->setObjectName(QString::fromUtf8("textLabel1"));
    QSizePolicy sizePolicy7(static_cast<QSizePolicy::Policy>(7), static_cast<QSizePolicy::Policy>(5));
    sizePolicy7.setHorizontalStretch(0);
    sizePolicy7.setVerticalStretch(0);
    sizePolicy7.setHeightForWidth(textLabel1->sizePolicy().hasHeightForWidth());
    textLabel1->setSizePolicy(sizePolicy7);
    textLabel1->setMinimumSize(QSize(0, 28));
    textLabel1->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

    gridLayout5->addWidget(textLabel1, 0, 0, 1, 1);


    gridLayout->addWidget(groupBox20, 1, 0, 1, 2);

    scaling_vdw_1_4_label->setBuddy(scaling_vdw_1_4_line_edit);
    nonbonded_cutoff_label_2->setBuddy(nonbonded_cutoff_line_edit);
    nonbonded_cutoff_label_2_2_3_3->setBuddy(nonbonded_cutoff_line_edit);
    solvation_cutoff_label->setBuddy(solvation_cutoff_line_edit);
    scaling_electrostatic_1_4_label->setBuddy(scaling_electrostatic_1_4_line_edit);
    nonbonded_cutoff_label->setBuddy(nonbonded_cutoff_line_edit);
    nonbonded_cutoff_label_2_2_3->setBuddy(nonbonded_cutoff_line_edit);
    nonbonded_cutoff_label_2_2_3_2->setBuddy(nonbonded_cutoff_line_edit);
    electrostatic_cutoff_label->setBuddy(electrostatic_cutoff_line_edit);
    vdw_cutoff_label->setBuddy(vdw_cutoff_line_edit);
    nonbonded_cutoff_label_2_4->setBuddy(nonbonded_cutoff_line_edit);
    nonbonded_cutoff_label_2_3->setBuddy(nonbonded_cutoff_line_edit);
    nonbonded_cutoff_label_2_2->setBuddy(nonbonded_cutoff_line_edit);
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
    QWidget::setTabOrder(torsions_box, itorsions_box);
    QWidget::setTabOrder(itorsions_box, NB_box);
    QWidget::setTabOrder(NB_box, use_eef1_checkBox);
    QWidget::setTabOrder(use_eef1_checkBox, constant_button);
    QWidget::setTabOrder(constant_button, distance_button);
    QWidget::setTabOrder(distance_button, nonbonded_cutoff_line_edit);
    QWidget::setTabOrder(nonbonded_cutoff_line_edit, vdw_cutoff_line_edit);
    QWidget::setTabOrder(vdw_cutoff_line_edit, electrostatic_cutoff_line_edit);
    QWidget::setTabOrder(electrostatic_cutoff_line_edit, solvation_cutoff_line_edit);
    QWidget::setTabOrder(solvation_cutoff_line_edit, scaling_electrostatic_1_4_line_edit);
    QWidget::setTabOrder(scaling_electrostatic_1_4_line_edit, scaling_vdw_1_4_line_edit);
    QWidget::setTabOrder(scaling_vdw_1_4_line_edit, vdw_cuton_line_edit);
    QWidget::setTabOrder(vdw_cuton_line_edit, electrostatic_cuton_line_edit);
    QWidget::setTabOrder(electrostatic_cuton_line_edit, solvation_cuton_line_edit);
    QWidget::setTabOrder(solvation_cuton_line_edit, close_button);
    QWidget::setTabOrder(close_button, cancel_button);
    QWidget::setTabOrder(cancel_button, reset_button);

    retranslateUi(CharmmConfigurationDialogData);

    QSize size(543, 618);
    size = size.expandedTo(CharmmConfigurationDialogData->minimumSizeHint());
    CharmmConfigurationDialogData->resize(size);


    QMetaObject::connectSlotsByName(CharmmConfigurationDialogData);
    } // setupUi

    void retranslateUi(QDialog *CharmmConfigurationDialogData)
    {
    CharmmConfigurationDialogData->setWindowTitle(QApplication::translate("CharmmConfigurationDialogData", "CHARMM Options", 0, QApplication::UnicodeUTF8));
    close_button->setToolTip(QApplication::translate("CharmmConfigurationDialogData", "Close window and save changes", 0, QApplication::UnicodeUTF8));
    close_button->setText(QApplication::translate("CharmmConfigurationDialogData", "O&K", 0, QApplication::UnicodeUTF8));
    close_button->setShortcut(QString());
    cancel_button->setToolTip(QApplication::translate("CharmmConfigurationDialogData", "Close window and discard changes", 0, QApplication::UnicodeUTF8));
    cancel_button->setText(QApplication::translate("CharmmConfigurationDialogData", "C&ancel", 0, QApplication::UnicodeUTF8));
    cancel_button->setShortcut(QString());
    reset_button->setToolTip(QApplication::translate("CharmmConfigurationDialogData", "Reset settings to default values", 0, QApplication::UnicodeUTF8));
    reset_button->setText(QApplication::translate("CharmmConfigurationDialogData", "Defaults", 0, QApplication::UnicodeUTF8));
    reset_button->setShortcut(QString());
    CharmmFF_Options->setTitle(QApplication::translate("CharmmConfigurationDialogData", "Options", 0, QApplication::UnicodeUTF8));
    scaling_vdw_1_4_label->setText(QApplication::translate("CharmmConfigurationDialogData", "Electrostatic 1-4 scaling factor", 0, QApplication::UnicodeUTF8));
    solvation_cuton_line_edit->setText(QApplication::translate("CharmmConfigurationDialogData", "7.0", 0, QApplication::UnicodeUTF8));
    electrostatic_cutoff_line_edit->setText(QApplication::translate("CharmmConfigurationDialogData", "9.0", 0, QApplication::UnicodeUTF8));
    nonbonded_cutoff_label_2->setText(QApplication::translate("CharmmConfigurationDialogData", "\303\205", 0, QApplication::UnicodeUTF8));
    scaling_electrostatic_1_4_line_edit->setText(QApplication::translate("CharmmConfigurationDialogData", "1.0", 0, QApplication::UnicodeUTF8));
    solvation_cutoff_line_edit->setText(QApplication::translate("CharmmConfigurationDialogData", "9.0", 0, QApplication::UnicodeUTF8));
    nonbonded_cutoff_label_2_2_3_3->setText(QApplication::translate("CharmmConfigurationDialogData", "\303\205 /", 0, QApplication::UnicodeUTF8));
    solvation_cutoff_label->setText(QApplication::translate("CharmmConfigurationDialogData", "Solvation cutoff/cuton distance (EEF1 only)", 0, QApplication::UnicodeUTF8));
    scaling_electrostatic_1_4_label->setText(QApplication::translate("CharmmConfigurationDialogData", "van der Waals 1-4 scaling factor", 0, QApplication::UnicodeUTF8));
    nonbonded_cutoff_label->setText(QApplication::translate("CharmmConfigurationDialogData", "Nonbonded cutoff distance", 0, QApplication::UnicodeUTF8));
    nonbonded_cutoff_label_2_2_3->setText(QApplication::translate("CharmmConfigurationDialogData", "\303\205 /", 0, QApplication::UnicodeUTF8));
    vdw_cutoff_line_edit->setText(QApplication::translate("CharmmConfigurationDialogData", "9.0", 0, QApplication::UnicodeUTF8));
    nonbonded_cutoff_line_edit->setText(QApplication::translate("CharmmConfigurationDialogData", "20.0", 0, QApplication::UnicodeUTF8));
    scaling_vdw_1_4_line_edit->setText(QApplication::translate("CharmmConfigurationDialogData", "2.0", 0, QApplication::UnicodeUTF8));
    nonbonded_cutoff_label_2_2_3_2->setText(QApplication::translate("CharmmConfigurationDialogData", "\303\205 /", 0, QApplication::UnicodeUTF8));
    electrostatic_cuton_line_edit->setText(QApplication::translate("CharmmConfigurationDialogData", "7.0", 0, QApplication::UnicodeUTF8));
    electrostatic_cutoff_label->setText(QApplication::translate("CharmmConfigurationDialogData", "Electrostatic cutoff/cuton distance", 0, QApplication::UnicodeUTF8));
    vdw_cuton_line_edit->setText(QApplication::translate("CharmmConfigurationDialogData", "7.0", 0, QApplication::UnicodeUTF8));
    vdw_cutoff_label->setText(QApplication::translate("CharmmConfigurationDialogData", "van der Waals cutoff/cuton distance", 0, QApplication::UnicodeUTF8));
    nonbonded_cutoff_label_2_4->setText(QApplication::translate("CharmmConfigurationDialogData", "\303\205", 0, QApplication::UnicodeUTF8));
    nonbonded_cutoff_label_2_3->setText(QApplication::translate("CharmmConfigurationDialogData", "\303\205", 0, QApplication::UnicodeUTF8));
    nonbonded_cutoff_label_2_2->setText(QApplication::translate("CharmmConfigurationDialogData", "\303\205", 0, QApplication::UnicodeUTF8));
    dielectric_group->setTitle(QApplication::translate("CharmmConfigurationDialogData", "Dielectric Constant", 0, QApplication::UnicodeUTF8));
    constant_button->setText(QApplication::translate("CharmmConfigurationDialogData", "constant", 0, QApplication::UnicodeUTF8));
    distance_button->setText(QApplication::translate("CharmmConfigurationDialogData", "distance dependent", 0, QApplication::UnicodeUTF8));
    groupBox->setTitle(QApplication::translate("CharmmConfigurationDialogData", "Components", 0, QApplication::UnicodeUTF8));
    use_eef1_checkBox->setText(QApplication::translate("CharmmConfigurationDialogData", "Solvation (EEF1)", 0, QApplication::UnicodeUTF8));
    NB_box->setText(QApplication::translate("CharmmConfigurationDialogData", "NonBonded", 0, QApplication::UnicodeUTF8));
    itorsions_box->setText(QApplication::translate("CharmmConfigurationDialogData", "Improper Torsions", 0, QApplication::UnicodeUTF8));
    torsions_box->setText(QApplication::translate("CharmmConfigurationDialogData", "Torsions", 0, QApplication::UnicodeUTF8));
    stretches_box->setText(QApplication::translate("CharmmConfigurationDialogData", "Stretches", 0, QApplication::UnicodeUTF8));
    bends_box->setText(QApplication::translate("CharmmConfigurationDialogData", "Bends", 0, QApplication::UnicodeUTF8));
    check_options->setTitle(QApplication::translate("CharmmConfigurationDialogData", "Charge and Type Assignment", 0, QApplication::UnicodeUTF8));
    overwrite_typenames_checkBox->setText(QApplication::translate("CharmmConfigurationDialogData", "Overwrite type names", 0, QApplication::UnicodeUTF8));
    assign_charges_checkBox->setText(QApplication::translate("CharmmConfigurationDialogData", "Assign charges", 0, QApplication::UnicodeUTF8));
    assign_typenames_checkBox->setText(QApplication::translate("CharmmConfigurationDialogData", "Assign type names", 0, QApplication::UnicodeUTF8));
    assign_types_checkBox->setText(QApplication::translate("CharmmConfigurationDialogData", "Assign (numeric types)", 0, QApplication::UnicodeUTF8));
    overwrite_charges_checkBox->setText(QApplication::translate("CharmmConfigurationDialogData", "Overwrite charges", 0, QApplication::UnicodeUTF8));
    groupBox21->setTitle(QApplication::translate("CharmmConfigurationDialogData", "Parameter Set", 0, QApplication::UnicodeUTF8));
    Label_10->setText(QApplication::translate("CharmmConfigurationDialogData", "Filename", 0, QApplication::UnicodeUTF8));
    parameter_file_edit->setText(QApplication::translate("CharmmConfigurationDialogData", "CHARMM/EEF1/param19_eef1.ini", 0, QApplication::UnicodeUTF8));
    browse_button->setToolTip(QApplication::translate("CharmmConfigurationDialogData", "Browse your computer for CHARMM file", 0, QApplication::UnicodeUTF8));
    browse_button->setText(QApplication::translate("CharmmConfigurationDialogData", "Browse", 0, QApplication::UnicodeUTF8));
    groupBox20->setTitle(QApplication::translate("CharmmConfigurationDialogData", "Setup Error Handling", 0, QApplication::UnicodeUTF8));
    max_unassigned_atoms->setText(QApplication::translate("CharmmConfigurationDialogData", "10", 0, QApplication::UnicodeUTF8));
    textLabel1->setText(QApplication::translate("CharmmConfigurationDialogData", "Maximum number of unassigned atoms before aborting setup", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(CharmmConfigurationDialogData);
    } // retranslateUi

};

namespace Ui {
    class CharmmConfigurationDialogData: public Ui_CharmmConfigurationDialogData {};
} // namespace Ui

#endif // CHARMMCONFIGURATIONDIALOGDATA_H
