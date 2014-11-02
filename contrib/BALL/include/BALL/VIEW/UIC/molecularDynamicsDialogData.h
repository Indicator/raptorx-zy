/********************************************************************************
** Form generated from reading ui file 'molecularDynamicsDialog.ui'
**
** Created: Wed Mar 19 14:28:18 2008
**      by: Qt User Interface Compiler version 4.2.2
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef MOLECULARDYNAMICSDIALOGDATA_H
#define MOLECULARDYNAMICSDIALOGDATA_H

#include <BALL/COMMON/global.h>
#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QVBoxLayout>

class Ui_MolecularDynamicsDialogData
{
public:
    QGridLayout *gridLayout;
    QPushButton *cancel_button;
    QPushButton *start_button;
    QGroupBox *GroupBox2_2;
    QGridLayout *gridLayout1;
    QCheckBox *enable_dcd;
    QPushButton *browse_button;
    QLineEdit *dcd_file_edit;
    QGroupBox *groupBox5;
    QVBoxLayout *vboxLayout;
    QRadioButton *useAmberRadioButton;
    QRadioButton *useCharmmRadioButton;
    QRadioButton *useMMFF94RadioButton;
    QPushButton *advanced_button;
    QGroupBox *dielectric_group_2;
    QVBoxLayout *vboxLayout1;
    QRadioButton *canonical_button;
    QRadioButton *microcanonical_button;
    QGroupBox *GroupBox_3;
    QGridLayout *gridLayout2;
    QLabel *textLabel1;
    QLabel *temperature_2;
    QLabel *Label_4_2_2;
    QLabel *Label_4;
    QLineEdit *timestep_linedit;
    QLineEdit *steps_lineedit;
    QLabel *Label_4_2;
    QLineEdit *refresh_lineedit;
    QLabel *time_lineedit;
    QLabel *simulationtime_edit;
    QLabel *Label_5;
    QLineEdit *temperature_lineedit;
    QLabel *textLabel2;
    QLabel *temperature;
    QLabel *Label_4_2_3;

    void setupUi(QDialog *MolecularDynamicsDialogData)
    {
    MolecularDynamicsDialogData->setObjectName(QString::fromUtf8("MolecularDynamicsDialogData"));
    QSizePolicy sizePolicy(static_cast<QSizePolicy::Policy>(5), static_cast<QSizePolicy::Policy>(5));
    sizePolicy.setHorizontalStretch(0);
    sizePolicy.setVerticalStretch(0);
    sizePolicy.setHeightForWidth(MolecularDynamicsDialogData->sizePolicy().hasHeightForWidth());
    MolecularDynamicsDialogData->setSizePolicy(sizePolicy);
    MolecularDynamicsDialogData->setMinimumSize(QSize(0, 0));
    MolecularDynamicsDialogData->setMaximumSize(QSize(9000, 9000));
    gridLayout = new QGridLayout(MolecularDynamicsDialogData);
    gridLayout->setSpacing(6);
    gridLayout->setMargin(4);
    gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
    cancel_button = new QPushButton(MolecularDynamicsDialogData);
    cancel_button->setObjectName(QString::fromUtf8("cancel_button"));
    QSizePolicy sizePolicy1(static_cast<QSizePolicy::Policy>(5), static_cast<QSizePolicy::Policy>(5));
    sizePolicy1.setHorizontalStretch(0);
    sizePolicy1.setVerticalStretch(0);
    sizePolicy1.setHeightForWidth(cancel_button->sizePolicy().hasHeightForWidth());
    cancel_button->setSizePolicy(sizePolicy1);
    cancel_button->setMinimumSize(QSize(150, 0));
    cancel_button->setMaximumSize(QSize(32767, 30));
    cancel_button->setFocusPolicy(Qt::TabFocus);
    cancel_button->setAutoDefault(true);

    gridLayout->addWidget(cancel_button, 3, 1, 1, 1);

    start_button = new QPushButton(MolecularDynamicsDialogData);
    start_button->setObjectName(QString::fromUtf8("start_button"));
    QSizePolicy sizePolicy2(static_cast<QSizePolicy::Policy>(5), static_cast<QSizePolicy::Policy>(5));
    sizePolicy2.setHorizontalStretch(0);
    sizePolicy2.setVerticalStretch(0);
    sizePolicy2.setHeightForWidth(start_button->sizePolicy().hasHeightForWidth());
    start_button->setSizePolicy(sizePolicy2);
    start_button->setMinimumSize(QSize(150, 25));
    start_button->setFocusPolicy(Qt::TabFocus);
    start_button->setAutoDefault(true);
    start_button->setDefault(true);

    gridLayout->addWidget(start_button, 3, 0, 1, 1);

    GroupBox2_2 = new QGroupBox(MolecularDynamicsDialogData);
    GroupBox2_2->setObjectName(QString::fromUtf8("GroupBox2_2"));
    QSizePolicy sizePolicy3(static_cast<QSizePolicy::Policy>(5), static_cast<QSizePolicy::Policy>(3));
    sizePolicy3.setHorizontalStretch(0);
    sizePolicy3.setVerticalStretch(0);
    sizePolicy3.setHeightForWidth(GroupBox2_2->sizePolicy().hasHeightForWidth());
    GroupBox2_2->setSizePolicy(sizePolicy3);
    GroupBox2_2->setAlignment(Qt::AlignHCenter);
    gridLayout1 = new QGridLayout(GroupBox2_2);
    gridLayout1->setSpacing(6);
    gridLayout1->setMargin(9);
    gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
    enable_dcd = new QCheckBox(GroupBox2_2);
    enable_dcd->setObjectName(QString::fromUtf8("enable_dcd"));
    QSizePolicy sizePolicy4(static_cast<QSizePolicy::Policy>(1), static_cast<QSizePolicy::Policy>(5));
    sizePolicy4.setHorizontalStretch(0);
    sizePolicy4.setVerticalStretch(0);
    sizePolicy4.setHeightForWidth(enable_dcd->sizePolicy().hasHeightForWidth());
    enable_dcd->setSizePolicy(sizePolicy4);

    gridLayout1->addWidget(enable_dcd, 0, 0, 1, 1);

    browse_button = new QPushButton(GroupBox2_2);
    browse_button->setObjectName(QString::fromUtf8("browse_button"));

    gridLayout1->addWidget(browse_button, 0, 2, 1, 1);

    dcd_file_edit = new QLineEdit(GroupBox2_2);
    dcd_file_edit->setObjectName(QString::fromUtf8("dcd_file_edit"));
    dcd_file_edit->setEnabled(false);
    QSizePolicy sizePolicy5(static_cast<QSizePolicy::Policy>(7), static_cast<QSizePolicy::Policy>(0));
    sizePolicy5.setHorizontalStretch(0);
    sizePolicy5.setVerticalStretch(0);
    sizePolicy5.setHeightForWidth(dcd_file_edit->sizePolicy().hasHeightForWidth());
    dcd_file_edit->setSizePolicy(sizePolicy5);
    dcd_file_edit->setMinimumSize(QSize(150, 25));
    dcd_file_edit->setMaximumSize(QSize(200, 32767));
    dcd_file_edit->setFocusPolicy(Qt::StrongFocus);
    dcd_file_edit->setMaxLength(32767);
    dcd_file_edit->setFrame(true);
    dcd_file_edit->setEchoMode(QLineEdit::Normal);
    dcd_file_edit->setAlignment(Qt::AlignLeading);

    gridLayout1->addWidget(dcd_file_edit, 0, 1, 1, 1);


    gridLayout->addWidget(GroupBox2_2, 2, 0, 1, 2);

    groupBox5 = new QGroupBox(MolecularDynamicsDialogData);
    groupBox5->setObjectName(QString::fromUtf8("groupBox5"));
    groupBox5->setAlignment(Qt::AlignHCenter);
    vboxLayout = new QVBoxLayout(groupBox5);
    vboxLayout->setSpacing(6);
    vboxLayout->setMargin(9);
    vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
    useAmberRadioButton = new QRadioButton(groupBox5);
    useAmberRadioButton->setObjectName(QString::fromUtf8("useAmberRadioButton"));
    useAmberRadioButton->setChecked(true);

    vboxLayout->addWidget(useAmberRadioButton);

    useCharmmRadioButton = new QRadioButton(groupBox5);
    useCharmmRadioButton->setObjectName(QString::fromUtf8("useCharmmRadioButton"));

    vboxLayout->addWidget(useCharmmRadioButton);

    useMMFF94RadioButton = new QRadioButton(groupBox5);
    useMMFF94RadioButton->setObjectName(QString::fromUtf8("useMMFF94RadioButton"));

    vboxLayout->addWidget(useMMFF94RadioButton);

    advanced_button = new QPushButton(groupBox5);
    advanced_button->setObjectName(QString::fromUtf8("advanced_button"));
    advanced_button->setMinimumSize(QSize(0, 30));

    vboxLayout->addWidget(advanced_button);


    gridLayout->addWidget(groupBox5, 1, 1, 1, 1);

    dielectric_group_2 = new QGroupBox(MolecularDynamicsDialogData);
    dielectric_group_2->setObjectName(QString::fromUtf8("dielectric_group_2"));
    dielectric_group_2->setAlignment(Qt::AlignHCenter);
    vboxLayout1 = new QVBoxLayout(dielectric_group_2);
    vboxLayout1->setSpacing(6);
    vboxLayout1->setMargin(9);
    vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
    canonical_button = new QRadioButton(dielectric_group_2);
    canonical_button->setObjectName(QString::fromUtf8("canonical_button"));
    canonical_button->setChecked(true);

    vboxLayout1->addWidget(canonical_button);

    microcanonical_button = new QRadioButton(dielectric_group_2);
    microcanonical_button->setObjectName(QString::fromUtf8("microcanonical_button"));
    microcanonical_button->setMinimumSize(QSize(120, 0));

    vboxLayout1->addWidget(microcanonical_button);


    gridLayout->addWidget(dielectric_group_2, 1, 0, 1, 1);

    GroupBox_3 = new QGroupBox(MolecularDynamicsDialogData);
    GroupBox_3->setObjectName(QString::fromUtf8("GroupBox_3"));
    GroupBox_3->setFocusPolicy(Qt::NoFocus);
    GroupBox_3->setAlignment(Qt::AlignHCenter);
    gridLayout2 = new QGridLayout(GroupBox_3);
    gridLayout2->setSpacing(6);
    gridLayout2->setMargin(9);
    gridLayout2->setObjectName(QString::fromUtf8("gridLayout2"));
    textLabel1 = new QLabel(GroupBox_3);
    textLabel1->setObjectName(QString::fromUtf8("textLabel1"));

    gridLayout2->addWidget(textLabel1, 4, 2, 1, 1);

    temperature_2 = new QLabel(GroupBox_3);
    temperature_2->setObjectName(QString::fromUtf8("temperature_2"));
    QSizePolicy sizePolicy6(static_cast<QSizePolicy::Policy>(7), static_cast<QSizePolicy::Policy>(5));
    sizePolicy6.setHorizontalStretch(0);
    sizePolicy6.setVerticalStretch(0);
    sizePolicy6.setHeightForWidth(temperature_2->sizePolicy().hasHeightForWidth());
    temperature_2->setSizePolicy(sizePolicy6);
    temperature_2->setMinimumSize(QSize(190, 0));
    temperature_2->setMaximumSize(QSize(200, 32767));
    temperature_2->setFocusPolicy(Qt::NoFocus);
    temperature_2->setLineWidth(1);
    temperature_2->setTextFormat(Qt::AutoText);
    temperature_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

    gridLayout2->addWidget(temperature_2, 4, 0, 1, 1);

    Label_4_2_2 = new QLabel(GroupBox_3);
    Label_4_2_2->setObjectName(QString::fromUtf8("Label_4_2_2"));
    Label_4_2_2->setMinimumSize(QSize(25, 0));
    Label_4_2_2->setFocusPolicy(Qt::NoFocus);
    Label_4_2_2->setLineWidth(1);
    Label_4_2_2->setTextFormat(Qt::AutoText);
    Label_4_2_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

    gridLayout2->addWidget(Label_4_2_2, 2, 2, 1, 1);

    Label_4 = new QLabel(GroupBox_3);
    Label_4->setObjectName(QString::fromUtf8("Label_4"));
    Label_4->setMinimumSize(QSize(150, 0));
    Label_4->setFocusPolicy(Qt::NoFocus);
    Label_4->setLineWidth(1);
    Label_4->setTextFormat(Qt::AutoText);
    Label_4->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

    gridLayout2->addWidget(Label_4, 0, 0, 1, 1);

    timestep_linedit = new QLineEdit(GroupBox_3);
    timestep_linedit->setObjectName(QString::fromUtf8("timestep_linedit"));
    QSizePolicy sizePolicy7(static_cast<QSizePolicy::Policy>(5), static_cast<QSizePolicy::Policy>(0));
    sizePolicy7.setHorizontalStretch(0);
    sizePolicy7.setVerticalStretch(0);
    sizePolicy7.setHeightForWidth(timestep_linedit->sizePolicy().hasHeightForWidth());
    timestep_linedit->setSizePolicy(sizePolicy7);
    timestep_linedit->setMaximumSize(QSize(110, 24));
    timestep_linedit->setFocusPolicy(Qt::StrongFocus);
    timestep_linedit->setFrame(true);
    timestep_linedit->setAlignment(Qt::AlignRight);

    gridLayout2->addWidget(timestep_linedit, 1, 1, 1, 1);

    steps_lineedit = new QLineEdit(GroupBox_3);
    steps_lineedit->setObjectName(QString::fromUtf8("steps_lineedit"));
    QSizePolicy sizePolicy8(static_cast<QSizePolicy::Policy>(5), static_cast<QSizePolicy::Policy>(0));
    sizePolicy8.setHorizontalStretch(0);
    sizePolicy8.setVerticalStretch(0);
    sizePolicy8.setHeightForWidth(steps_lineedit->sizePolicy().hasHeightForWidth());
    steps_lineedit->setSizePolicy(sizePolicy8);
    steps_lineedit->setMinimumSize(QSize(110, 24));
    steps_lineedit->setMaximumSize(QSize(110, 24));
    steps_lineedit->setFocusPolicy(Qt::StrongFocus);
    steps_lineedit->setFrame(true);
    steps_lineedit->setEchoMode(QLineEdit::Normal);
    steps_lineedit->setAlignment(Qt::AlignRight);

    gridLayout2->addWidget(steps_lineedit, 0, 1, 1, 1);

    Label_4_2 = new QLabel(GroupBox_3);
    Label_4_2->setObjectName(QString::fromUtf8("Label_4_2"));
    Label_4_2->setMinimumSize(QSize(25, 0));
    Label_4_2->setFocusPolicy(Qt::NoFocus);
    Label_4_2->setLineWidth(1);
    Label_4_2->setTextFormat(Qt::AutoText);
    Label_4_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

    gridLayout2->addWidget(Label_4_2, 1, 2, 1, 1);

    refresh_lineedit = new QLineEdit(GroupBox_3);
    refresh_lineedit->setObjectName(QString::fromUtf8("refresh_lineedit"));
    QSizePolicy sizePolicy9(static_cast<QSizePolicy::Policy>(5), static_cast<QSizePolicy::Policy>(0));
    sizePolicy9.setHorizontalStretch(0);
    sizePolicy9.setVerticalStretch(0);
    sizePolicy9.setHeightForWidth(refresh_lineedit->sizePolicy().hasHeightForWidth());
    refresh_lineedit->setSizePolicy(sizePolicy9);
    refresh_lineedit->setMinimumSize(QSize(110, 24));
    refresh_lineedit->setMaximumSize(QSize(110, 24));
    refresh_lineedit->setFocusPolicy(Qt::StrongFocus);
    refresh_lineedit->setFrame(true);
    refresh_lineedit->setEchoMode(QLineEdit::Normal);
    refresh_lineedit->setAlignment(Qt::AlignRight);

    gridLayout2->addWidget(refresh_lineedit, 4, 1, 1, 1);

    time_lineedit = new QLabel(GroupBox_3);
    time_lineedit->setObjectName(QString::fromUtf8("time_lineedit"));
    time_lineedit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

    gridLayout2->addWidget(time_lineedit, 2, 1, 1, 1);

    simulationtime_edit = new QLabel(GroupBox_3);
    simulationtime_edit->setObjectName(QString::fromUtf8("simulationtime_edit"));
    simulationtime_edit->setMinimumSize(QSize(50, 0));
    simulationtime_edit->setFocusPolicy(Qt::NoFocus);
    simulationtime_edit->setLineWidth(1);
    simulationtime_edit->setTextFormat(Qt::AutoText);
    simulationtime_edit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

    gridLayout2->addWidget(simulationtime_edit, 2, 0, 1, 1);

    Label_5 = new QLabel(GroupBox_3);
    Label_5->setObjectName(QString::fromUtf8("Label_5"));
    Label_5->setMinimumSize(QSize(130, 0));
    Label_5->setFocusPolicy(Qt::NoFocus);
    Label_5->setLineWidth(1);
    Label_5->setTextFormat(Qt::AutoText);
    Label_5->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

    gridLayout2->addWidget(Label_5, 1, 0, 1, 1);

    temperature_lineedit = new QLineEdit(GroupBox_3);
    temperature_lineedit->setObjectName(QString::fromUtf8("temperature_lineedit"));
    QSizePolicy sizePolicy10(static_cast<QSizePolicy::Policy>(5), static_cast<QSizePolicy::Policy>(0));
    sizePolicy10.setHorizontalStretch(0);
    sizePolicy10.setVerticalStretch(0);
    sizePolicy10.setHeightForWidth(temperature_lineedit->sizePolicy().hasHeightForWidth());
    temperature_lineedit->setSizePolicy(sizePolicy10);
    temperature_lineedit->setMinimumSize(QSize(110, 24));
    temperature_lineedit->setMaximumSize(QSize(110, 24));
    temperature_lineedit->setFocusPolicy(Qt::StrongFocus);
    temperature_lineedit->setFrame(true);
    temperature_lineedit->setEchoMode(QLineEdit::Normal);
    temperature_lineedit->setAlignment(Qt::AlignRight);

    gridLayout2->addWidget(temperature_lineedit, 3, 1, 1, 1);

    textLabel2 = new QLabel(GroupBox_3);
    textLabel2->setObjectName(QString::fromUtf8("textLabel2"));

    gridLayout2->addWidget(textLabel2, 0, 2, 1, 1);

    temperature = new QLabel(GroupBox_3);
    temperature->setObjectName(QString::fromUtf8("temperature"));
    QSizePolicy sizePolicy11(static_cast<QSizePolicy::Policy>(7), static_cast<QSizePolicy::Policy>(5));
    sizePolicy11.setHorizontalStretch(0);
    sizePolicy11.setVerticalStretch(0);
    sizePolicy11.setHeightForWidth(temperature->sizePolicy().hasHeightForWidth());
    temperature->setSizePolicy(sizePolicy11);
    temperature->setMinimumSize(QSize(150, 0));
    temperature->setFocusPolicy(Qt::NoFocus);
    temperature->setLineWidth(1);
    temperature->setTextFormat(Qt::AutoText);
    temperature->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

    gridLayout2->addWidget(temperature, 3, 0, 1, 1);

    Label_4_2_3 = new QLabel(GroupBox_3);
    Label_4_2_3->setObjectName(QString::fromUtf8("Label_4_2_3"));
    Label_4_2_3->setMinimumSize(QSize(25, 0));
    Label_4_2_3->setFocusPolicy(Qt::NoFocus);
    Label_4_2_3->setLineWidth(1);
    Label_4_2_3->setTextFormat(Qt::AutoText);
    Label_4_2_3->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

    gridLayout2->addWidget(Label_4_2_3, 3, 2, 1, 1);


    gridLayout->addWidget(GroupBox_3, 0, 0, 1, 2);

    QWidget::setTabOrder(steps_lineedit, timestep_linedit);
    QWidget::setTabOrder(timestep_linedit, temperature_lineedit);
    QWidget::setTabOrder(temperature_lineedit, refresh_lineedit);
    QWidget::setTabOrder(refresh_lineedit, canonical_button);
    QWidget::setTabOrder(canonical_button, microcanonical_button);
    QWidget::setTabOrder(microcanonical_button, useAmberRadioButton);
    QWidget::setTabOrder(useAmberRadioButton, useCharmmRadioButton);
    QWidget::setTabOrder(useCharmmRadioButton, useMMFF94RadioButton);
    QWidget::setTabOrder(useMMFF94RadioButton, advanced_button);
    QWidget::setTabOrder(advanced_button, enable_dcd);
    QWidget::setTabOrder(enable_dcd, dcd_file_edit);
    QWidget::setTabOrder(dcd_file_edit, browse_button);
    QWidget::setTabOrder(browse_button, start_button);
    QWidget::setTabOrder(start_button, cancel_button);

    retranslateUi(MolecularDynamicsDialogData);

    QSize size(383, 424);
    size = size.expandedTo(MolecularDynamicsDialogData->minimumSizeHint());
    MolecularDynamicsDialogData->resize(size);


    QMetaObject::connectSlotsByName(MolecularDynamicsDialogData);
    } // setupUi

    void retranslateUi(QDialog *MolecularDynamicsDialogData)
    {
    MolecularDynamicsDialogData->setWindowTitle(QApplication::translate("MolecularDynamicsDialogData", "MolecularDynamicsSimulation", 0, QApplication::UnicodeUTF8));
    MolecularDynamicsDialogData->setToolTip(QString());
    cancel_button->setText(QApplication::translate("MolecularDynamicsDialogData", "C&ancel", 0, QApplication::UnicodeUTF8));
    cancel_button->setShortcut(QApplication::translate("MolecularDynamicsDialogData", "Alt+A", 0, QApplication::UnicodeUTF8));
    start_button->setToolTip(QApplication::translate("MolecularDynamicsDialogData", "Start simulation", 0, QApplication::UnicodeUTF8));
    start_button->setText(QApplication::translate("MolecularDynamicsDialogData", "&Simulate", 0, QApplication::UnicodeUTF8));
    start_button->setShortcut(QApplication::translate("MolecularDynamicsDialogData", "Alt+S", 0, QApplication::UnicodeUTF8));
    GroupBox2_2->setTitle(QApplication::translate("MolecularDynamicsDialogData", "Trajectory", 0, QApplication::UnicodeUTF8));
    enable_dcd->setToolTip(QApplication::translate("MolecularDynamicsDialogData", "Write trajectories to file in order to be able to watch snapshots", 0, QApplication::UnicodeUTF8));
    enable_dcd->setText(QApplication::translate("MolecularDynamicsDialogData", "save to", 0, QApplication::UnicodeUTF8));
    browse_button->setText(QApplication::translate("MolecularDynamicsDialogData", "Browse", 0, QApplication::UnicodeUTF8));
    dcd_file_edit->setText(QApplication::translate("MolecularDynamicsDialogData", "trajectory.dcd", 0, QApplication::UnicodeUTF8));
    groupBox5->setTitle(QApplication::translate("MolecularDynamicsDialogData", "Force Field", 0, QApplication::UnicodeUTF8));
    useAmberRadioButton->setText(QApplication::translate("MolecularDynamicsDialogData", "AMBER", 0, QApplication::UnicodeUTF8));
    useAmberRadioButton->setShortcut(QString());
    useCharmmRadioButton->setText(QApplication::translate("MolecularDynamicsDialogData", "CHARMM", 0, QApplication::UnicodeUTF8));
    useCharmmRadioButton->setShortcut(QString());
    useMMFF94RadioButton->setText(QApplication::translate("MolecularDynamicsDialogData", "MMFF94", 0, QApplication::UnicodeUTF8));
    useMMFF94RadioButton->setShortcut(QString());
    advanced_button->setToolTip(QApplication::translate("MolecularDynamicsDialogData", "Alter force field options", 0, QApplication::UnicodeUTF8));
    advanced_button->setText(QApplication::translate("MolecularDynamicsDialogData", "&ForceField Options", 0, QApplication::UnicodeUTF8));
    advanced_button->setShortcut(QApplication::translate("MolecularDynamicsDialogData", "Alt+F", 0, QApplication::UnicodeUTF8));
    dielectric_group_2->setTitle(QApplication::translate("MolecularDynamicsDialogData", "Ensemble", 0, QApplication::UnicodeUTF8));
    canonical_button->setText(QApplication::translate("MolecularDynamicsDialogData", "canonical", 0, QApplication::UnicodeUTF8));
    microcanonical_button->setText(QApplication::translate("MolecularDynamicsDialogData", "microcanonical", 0, QApplication::UnicodeUTF8));
    GroupBox_3->setTitle(QApplication::translate("MolecularDynamicsDialogData", "Parameters", 0, QApplication::UnicodeUTF8));
    textLabel1->setText(QString());
    temperature_2->setText(QApplication::translate("MolecularDynamicsDialogData", "steps between refresh", 0, QApplication::UnicodeUTF8));
    Label_4_2_2->setText(QApplication::translate("MolecularDynamicsDialogData", "ps)", 0, QApplication::UnicodeUTF8));
    Label_4->setText(QApplication::translate("MolecularDynamicsDialogData", "number of steps", 0, QApplication::UnicodeUTF8));
    timestep_linedit->setToolTip(QApplication::translate("MolecularDynamicsDialogData", "Timesteps in which snapshots are taken", 0, QApplication::UnicodeUTF8));
    timestep_linedit->setText(QApplication::translate("MolecularDynamicsDialogData", "0.0001", 0, QApplication::UnicodeUTF8));
    steps_lineedit->setText(QApplication::translate("MolecularDynamicsDialogData", "1000", 0, QApplication::UnicodeUTF8));
    Label_4_2->setText(QApplication::translate("MolecularDynamicsDialogData", "ps", 0, QApplication::UnicodeUTF8));
    refresh_lineedit->setText(QApplication::translate("MolecularDynamicsDialogData", "1", 0, QApplication::UnicodeUTF8));
    time_lineedit->setText(QApplication::translate("MolecularDynamicsDialogData", "0.01", 0, QApplication::UnicodeUTF8));
    simulationtime_edit->setText(QApplication::translate("MolecularDynamicsDialogData", "(total time:", 0, QApplication::UnicodeUTF8));
    Label_5->setText(QApplication::translate("MolecularDynamicsDialogData", "timestep", 0, QApplication::UnicodeUTF8));
    temperature_lineedit->setToolTip(QApplication::translate("MolecularDynamicsDialogData", "Temperature in which the simulation runs", 0, QApplication::UnicodeUTF8));
    temperature_lineedit->setText(QApplication::translate("MolecularDynamicsDialogData", "300", 0, QApplication::UnicodeUTF8));
    textLabel2->setText(QString());
    temperature->setText(QApplication::translate("MolecularDynamicsDialogData", "temperature", 0, QApplication::UnicodeUTF8));
    Label_4_2_3->setText(QApplication::translate("MolecularDynamicsDialogData", "K", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(MolecularDynamicsDialogData);
    } // retranslateUi

};

namespace Ui {
    class MolecularDynamicsDialogData: public Ui_MolecularDynamicsDialogData {};
} // namespace Ui

#endif // MOLECULARDYNAMICSDIALOGDATA_H
