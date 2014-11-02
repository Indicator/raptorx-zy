/********************************************************************************
** Form generated from reading ui file 'dockDialog.ui'
**
** Created: Wed Mar 19 14:28:18 2008
**      by: Qt User Interface Compiler version 4.2.2
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef DOCKDIALOGDATA_H
#define DOCKDIALOGDATA_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QTabWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

class Ui_DockDialogData
{
public:
    QVBoxLayout *vboxLayout;
    QTabWidget *tab_pages;
    QWidget *general_page;
    QVBoxLayout *vboxLayout1;
    QGroupBox *systems_group;
    QHBoxLayout *hboxLayout;
    QComboBox *systems1;
    QComboBox *systems2;
    QGroupBox *algorithm_group;
    QGridLayout *gridLayout;
    QComboBox *algorithms;
    QPushButton *alg_advanced_button;
    QGroupBox *scoring_group;
    QGridLayout *gridLayout1;
    QComboBox *scoring_functions;
    QPushButton *scoring_advanced_button;
    QGroupBox *options_group;
    QGridLayout *gridLayout2;
    QLabel *best_num_label;
    QLineEdit *best_num;
    QLabel *verbosity_label;
    QLineEdit *verbosity;
    QGroupBox *euler_group;
    QGridLayout *gridLayout3;
    QLabel *psi_max_label;
    QLabel *delta_psi_label;
    QLabel *delta_phi_label;
    QLabel *phi_min_label;
    QLabel *phi_max_label;
    QLabel *theta_max_label;
    QLabel *psi_min_label;
    QLineEdit *phi_min;
    QLineEdit *psi_min;
    QLineEdit *theta_min;
    QLineEdit *phi_max;
    QLineEdit *psi_max;
    QLineEdit *theta_max;
    QLineEdit *delta_phi;
    QLineEdit *delta_theta;
    QLineEdit *delta_psi;
    QLabel *theta_min_label;
    QLabel *delta_theta_label;
    QWidget *processor_page;
    QVBoxLayout *vboxLayout2;
    QGroupBox *charges_group;
    QGridLayout *gridLayout4;
    QRadioButton *charges_rules_button;
    QRadioButton *charges_data_button;
    QLineEdit *charges_data_lineedit;
    QLineEdit *charges_rules_lineedit;
    QPushButton *charges_data_browse;
    QPushButton *charges_rules_browse;
    QGroupBox *radii_group;
    QGridLayout *gridLayout5;
    QLineEdit *radii_rules_lineedit;
    QPushButton *radii_rules_browse;
    QLineEdit *radii_data_lineedit;
    QPushButton *radii_data_browse;
    QRadioButton *radii_data_button;
    QRadioButton *radii_rules_button;
    QGroupBox *processors_group;
    QGridLayout *gridLayout6;
    QCheckBox *build_bonds;
    QCheckBox *add_hydrogens;
    QCheckBox *normalize_names;
    QCheckBox *assign_charges;
    QCheckBox *assign_radii;
    QHBoxLayout *hboxLayout1;
    QPushButton *ok_button;
    QPushButton *cancel_button;
    QPushButton *reset_button;

    void setupUi(QDialog *DockDialogData)
    {
    DockDialogData->setObjectName(QString::fromUtf8("DockDialogData"));
    QSizePolicy sizePolicy(static_cast<QSizePolicy::Policy>(4), static_cast<QSizePolicy::Policy>(0));
    sizePolicy.setHorizontalStretch(0);
    sizePolicy.setVerticalStretch(0);
    sizePolicy.setHeightForWidth(DockDialogData->sizePolicy().hasHeightForWidth());
    DockDialogData->setSizePolicy(sizePolicy);
    DockDialogData->setMinimumSize(QSize(0, 0));
    DockDialogData->setMaximumSize(QSize(650, 650));
    vboxLayout = new QVBoxLayout(DockDialogData);
    vboxLayout->setSpacing(6);
    vboxLayout->setMargin(9);
    vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
    tab_pages = new QTabWidget(DockDialogData);
    tab_pages->setObjectName(QString::fromUtf8("tab_pages"));
    general_page = new QWidget();
    general_page->setObjectName(QString::fromUtf8("general_page"));
    vboxLayout1 = new QVBoxLayout(general_page);
    vboxLayout1->setSpacing(6);
    vboxLayout1->setMargin(9);
    vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
    systems_group = new QGroupBox(general_page);
    systems_group->setObjectName(QString::fromUtf8("systems_group"));
    QSizePolicy sizePolicy1(static_cast<QSizePolicy::Policy>(5), static_cast<QSizePolicy::Policy>(0));
    sizePolicy1.setHorizontalStretch(0);
    sizePolicy1.setVerticalStretch(0);
    sizePolicy1.setHeightForWidth(systems_group->sizePolicy().hasHeightForWidth());
    systems_group->setSizePolicy(sizePolicy1);
    hboxLayout = new QHBoxLayout(systems_group);
    hboxLayout->setSpacing(6);
    hboxLayout->setMargin(11);
    hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
    systems1 = new QComboBox(systems_group);
    systems1->setObjectName(QString::fromUtf8("systems1"));
    systems1->setEditable(false);

    hboxLayout->addWidget(systems1);

    systems2 = new QComboBox(systems_group);
    systems2->setObjectName(QString::fromUtf8("systems2"));
    systems2->setEditable(false);

    hboxLayout->addWidget(systems2);


    vboxLayout1->addWidget(systems_group);

    algorithm_group = new QGroupBox(general_page);
    algorithm_group->setObjectName(QString::fromUtf8("algorithm_group"));
    QSizePolicy sizePolicy2(static_cast<QSizePolicy::Policy>(5), static_cast<QSizePolicy::Policy>(0));
    sizePolicy2.setHorizontalStretch(0);
    sizePolicy2.setVerticalStretch(0);
    sizePolicy2.setHeightForWidth(algorithm_group->sizePolicy().hasHeightForWidth());
    algorithm_group->setSizePolicy(sizePolicy2);
    gridLayout = new QGridLayout(algorithm_group);
    gridLayout->setSpacing(6);
    gridLayout->setMargin(11);
    gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
    algorithms = new QComboBox(algorithm_group);
    algorithms->setObjectName(QString::fromUtf8("algorithms"));

    gridLayout->addWidget(algorithms, 0, 0, 1, 1);

    alg_advanced_button = new QPushButton(algorithm_group);
    alg_advanced_button->setObjectName(QString::fromUtf8("alg_advanced_button"));

    gridLayout->addWidget(alg_advanced_button, 0, 1, 1, 1);


    vboxLayout1->addWidget(algorithm_group);

    scoring_group = new QGroupBox(general_page);
    scoring_group->setObjectName(QString::fromUtf8("scoring_group"));
    QSizePolicy sizePolicy3(static_cast<QSizePolicy::Policy>(5), static_cast<QSizePolicy::Policy>(0));
    sizePolicy3.setHorizontalStretch(0);
    sizePolicy3.setVerticalStretch(0);
    sizePolicy3.setHeightForWidth(scoring_group->sizePolicy().hasHeightForWidth());
    scoring_group->setSizePolicy(sizePolicy3);
    gridLayout1 = new QGridLayout(scoring_group);
    gridLayout1->setSpacing(6);
    gridLayout1->setMargin(11);
    gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
    scoring_functions = new QComboBox(scoring_group);
    scoring_functions->setObjectName(QString::fromUtf8("scoring_functions"));

    gridLayout1->addWidget(scoring_functions, 0, 0, 1, 1);

    scoring_advanced_button = new QPushButton(scoring_group);
    scoring_advanced_button->setObjectName(QString::fromUtf8("scoring_advanced_button"));
    scoring_advanced_button->setEnabled(false);

    gridLayout1->addWidget(scoring_advanced_button, 0, 1, 1, 1);


    vboxLayout1->addWidget(scoring_group);

    options_group = new QGroupBox(general_page);
    options_group->setObjectName(QString::fromUtf8("options_group"));
    QSizePolicy sizePolicy4(static_cast<QSizePolicy::Policy>(5), static_cast<QSizePolicy::Policy>(0));
    sizePolicy4.setHorizontalStretch(0);
    sizePolicy4.setVerticalStretch(0);
    sizePolicy4.setHeightForWidth(options_group->sizePolicy().hasHeightForWidth());
    options_group->setSizePolicy(sizePolicy4);
    gridLayout2 = new QGridLayout(options_group);
    gridLayout2->setSpacing(6);
    gridLayout2->setMargin(11);
    gridLayout2->setObjectName(QString::fromUtf8("gridLayout2"));
    best_num_label = new QLabel(options_group);
    best_num_label->setObjectName(QString::fromUtf8("best_num_label"));

    gridLayout2->addWidget(best_num_label, 0, 0, 1, 1);

    best_num = new QLineEdit(options_group);
    best_num->setObjectName(QString::fromUtf8("best_num"));
    QSizePolicy sizePolicy5(static_cast<QSizePolicy::Policy>(0), static_cast<QSizePolicy::Policy>(0));
    sizePolicy5.setHorizontalStretch(0);
    sizePolicy5.setVerticalStretch(0);
    sizePolicy5.setHeightForWidth(best_num->sizePolicy().hasHeightForWidth());
    best_num->setSizePolicy(sizePolicy5);
    best_num->setMinimumSize(QSize(0, 0));
    best_num->setMaximumSize(QSize(80, 32767));
    best_num->setAlignment(Qt::AlignRight);

    gridLayout2->addWidget(best_num, 0, 1, 1, 1);

    verbosity_label = new QLabel(options_group);
    verbosity_label->setObjectName(QString::fromUtf8("verbosity_label"));

    gridLayout2->addWidget(verbosity_label, 1, 0, 1, 1);

    verbosity = new QLineEdit(options_group);
    verbosity->setObjectName(QString::fromUtf8("verbosity"));
    QSizePolicy sizePolicy6(static_cast<QSizePolicy::Policy>(0), static_cast<QSizePolicy::Policy>(0));
    sizePolicy6.setHorizontalStretch(0);
    sizePolicy6.setVerticalStretch(0);
    sizePolicy6.setHeightForWidth(verbosity->sizePolicy().hasHeightForWidth());
    verbosity->setSizePolicy(sizePolicy6);
    verbosity->setMaximumSize(QSize(80, 32767));
    verbosity->setAlignment(Qt::AlignRight);

    gridLayout2->addWidget(verbosity, 1, 1, 1, 1);


    vboxLayout1->addWidget(options_group);

    euler_group = new QGroupBox(general_page);
    euler_group->setObjectName(QString::fromUtf8("euler_group"));
    euler_group->setEnabled(true);
    QSizePolicy sizePolicy7(static_cast<QSizePolicy::Policy>(7), static_cast<QSizePolicy::Policy>(0));
    sizePolicy7.setHorizontalStretch(0);
    sizePolicy7.setVerticalStretch(0);
    sizePolicy7.setHeightForWidth(euler_group->sizePolicy().hasHeightForWidth());
    euler_group->setSizePolicy(sizePolicy7);
    gridLayout3 = new QGridLayout(euler_group);
    gridLayout3->setSpacing(6);
    gridLayout3->setMargin(11);
    gridLayout3->setObjectName(QString::fromUtf8("gridLayout3"));
    psi_max_label = new QLabel(euler_group);
    psi_max_label->setObjectName(QString::fromUtf8("psi_max_label"));
    QSizePolicy sizePolicy8(static_cast<QSizePolicy::Policy>(7), static_cast<QSizePolicy::Policy>(5));
    sizePolicy8.setHorizontalStretch(0);
    sizePolicy8.setVerticalStretch(0);
    sizePolicy8.setHeightForWidth(psi_max_label->sizePolicy().hasHeightForWidth());
    psi_max_label->setSizePolicy(sizePolicy8);

    gridLayout3->addWidget(psi_max_label, 1, 2, 1, 1);

    delta_psi_label = new QLabel(euler_group);
    delta_psi_label->setObjectName(QString::fromUtf8("delta_psi_label"));
    QSizePolicy sizePolicy9(static_cast<QSizePolicy::Policy>(7), static_cast<QSizePolicy::Policy>(5));
    sizePolicy9.setHorizontalStretch(0);
    sizePolicy9.setVerticalStretch(0);
    sizePolicy9.setHeightForWidth(delta_psi_label->sizePolicy().hasHeightForWidth());
    delta_psi_label->setSizePolicy(sizePolicy9);

    gridLayout3->addWidget(delta_psi_label, 1, 4, 1, 1);

    delta_phi_label = new QLabel(euler_group);
    delta_phi_label->setObjectName(QString::fromUtf8("delta_phi_label"));

    gridLayout3->addWidget(delta_phi_label, 0, 4, 1, 1);

    phi_min_label = new QLabel(euler_group);
    phi_min_label->setObjectName(QString::fromUtf8("phi_min_label"));
    QSizePolicy sizePolicy10(static_cast<QSizePolicy::Policy>(7), static_cast<QSizePolicy::Policy>(5));
    sizePolicy10.setHorizontalStretch(0);
    sizePolicy10.setVerticalStretch(0);
    sizePolicy10.setHeightForWidth(phi_min_label->sizePolicy().hasHeightForWidth());
    phi_min_label->setSizePolicy(sizePolicy10);

    gridLayout3->addWidget(phi_min_label, 0, 0, 1, 1);

    phi_max_label = new QLabel(euler_group);
    phi_max_label->setObjectName(QString::fromUtf8("phi_max_label"));

    gridLayout3->addWidget(phi_max_label, 0, 2, 1, 1);

    theta_max_label = new QLabel(euler_group);
    theta_max_label->setObjectName(QString::fromUtf8("theta_max_label"));

    gridLayout3->addWidget(theta_max_label, 2, 2, 1, 1);

    psi_min_label = new QLabel(euler_group);
    psi_min_label->setObjectName(QString::fromUtf8("psi_min_label"));

    gridLayout3->addWidget(psi_min_label, 1, 0, 1, 1);

    phi_min = new QLineEdit(euler_group);
    phi_min->setObjectName(QString::fromUtf8("phi_min"));
    phi_min->setMaximumSize(QSize(50, 25));
    phi_min->setAlignment(Qt::AlignRight);

    gridLayout3->addWidget(phi_min, 0, 1, 1, 1);

    psi_min = new QLineEdit(euler_group);
    psi_min->setObjectName(QString::fromUtf8("psi_min"));
    psi_min->setMaximumSize(QSize(50, 25));
    psi_min->setAlignment(Qt::AlignRight);

    gridLayout3->addWidget(psi_min, 1, 1, 1, 1);

    theta_min = new QLineEdit(euler_group);
    theta_min->setObjectName(QString::fromUtf8("theta_min"));
    theta_min->setMaximumSize(QSize(50, 25));
    theta_min->setAlignment(Qt::AlignRight);

    gridLayout3->addWidget(theta_min, 2, 1, 1, 1);

    phi_max = new QLineEdit(euler_group);
    phi_max->setObjectName(QString::fromUtf8("phi_max"));
    phi_max->setMaximumSize(QSize(50, 25));
    phi_max->setAlignment(Qt::AlignRight);

    gridLayout3->addWidget(phi_max, 0, 3, 1, 1);

    psi_max = new QLineEdit(euler_group);
    psi_max->setObjectName(QString::fromUtf8("psi_max"));
    psi_max->setMaximumSize(QSize(50, 25));
    psi_max->setAlignment(Qt::AlignRight);

    gridLayout3->addWidget(psi_max, 1, 3, 1, 1);

    theta_max = new QLineEdit(euler_group);
    theta_max->setObjectName(QString::fromUtf8("theta_max"));
    theta_max->setMaximumSize(QSize(50, 25));
    theta_max->setAlignment(Qt::AlignRight);

    gridLayout3->addWidget(theta_max, 2, 3, 1, 1);

    delta_phi = new QLineEdit(euler_group);
    delta_phi->setObjectName(QString::fromUtf8("delta_phi"));
    QSizePolicy sizePolicy11(static_cast<QSizePolicy::Policy>(5), static_cast<QSizePolicy::Policy>(0));
    sizePolicy11.setHorizontalStretch(0);
    sizePolicy11.setVerticalStretch(0);
    sizePolicy11.setHeightForWidth(delta_phi->sizePolicy().hasHeightForWidth());
    delta_phi->setSizePolicy(sizePolicy11);
    delta_phi->setMinimumSize(QSize(0, 0));
    delta_phi->setMaximumSize(QSize(50, 25));
    delta_phi->setAlignment(Qt::AlignRight);

    gridLayout3->addWidget(delta_phi, 0, 5, 1, 1);

    delta_theta = new QLineEdit(euler_group);
    delta_theta->setObjectName(QString::fromUtf8("delta_theta"));
    delta_theta->setMaximumSize(QSize(50, 25));
    delta_theta->setAlignment(Qt::AlignRight);

    gridLayout3->addWidget(delta_theta, 2, 5, 1, 1);

    delta_psi = new QLineEdit(euler_group);
    delta_psi->setObjectName(QString::fromUtf8("delta_psi"));
    delta_psi->setMaximumSize(QSize(50, 25));
    delta_psi->setAlignment(Qt::AlignRight);

    gridLayout3->addWidget(delta_psi, 1, 5, 1, 1);

    theta_min_label = new QLabel(euler_group);
    theta_min_label->setObjectName(QString::fromUtf8("theta_min_label"));

    gridLayout3->addWidget(theta_min_label, 2, 0, 1, 1);

    delta_theta_label = new QLabel(euler_group);
    delta_theta_label->setObjectName(QString::fromUtf8("delta_theta_label"));

    gridLayout3->addWidget(delta_theta_label, 2, 4, 1, 1);


    vboxLayout1->addWidget(euler_group);

    tab_pages->addTab(general_page, QApplication::translate("DockDialogData", "General", 0, QApplication::UnicodeUTF8));
    processor_page = new QWidget();
    processor_page->setObjectName(QString::fromUtf8("processor_page"));
    vboxLayout2 = new QVBoxLayout(processor_page);
    vboxLayout2->setSpacing(6);
    vboxLayout2->setMargin(9);
    vboxLayout2->setObjectName(QString::fromUtf8("vboxLayout2"));
    charges_group = new QGroupBox(processor_page);
    charges_group->setObjectName(QString::fromUtf8("charges_group"));
    QSizePolicy sizePolicy12(static_cast<QSizePolicy::Policy>(5), static_cast<QSizePolicy::Policy>(0));
    sizePolicy12.setHorizontalStretch(0);
    sizePolicy12.setVerticalStretch(0);
    sizePolicy12.setHeightForWidth(charges_group->sizePolicy().hasHeightForWidth());
    charges_group->setSizePolicy(sizePolicy12);
    gridLayout4 = new QGridLayout(charges_group);
    gridLayout4->setSpacing(6);
    gridLayout4->setMargin(11);
    gridLayout4->setObjectName(QString::fromUtf8("gridLayout4"));
    charges_rules_button = new QRadioButton(charges_group);
    charges_rules_button->setObjectName(QString::fromUtf8("charges_rules_button"));
    charges_rules_button->setMinimumSize(QSize(110, 0));

    gridLayout4->addWidget(charges_rules_button, 1, 0, 1, 1);

    charges_data_button = new QRadioButton(charges_group);
    charges_data_button->setObjectName(QString::fromUtf8("charges_data_button"));
    charges_data_button->setMinimumSize(QSize(110, 0));
    charges_data_button->setChecked(true);

    gridLayout4->addWidget(charges_data_button, 0, 0, 1, 1);

    charges_data_lineedit = new QLineEdit(charges_group);
    charges_data_lineedit->setObjectName(QString::fromUtf8("charges_data_lineedit"));

    gridLayout4->addWidget(charges_data_lineedit, 0, 1, 1, 1);

    charges_rules_lineedit = new QLineEdit(charges_group);
    charges_rules_lineedit->setObjectName(QString::fromUtf8("charges_rules_lineedit"));
    charges_rules_lineedit->setReadOnly(false);

    gridLayout4->addWidget(charges_rules_lineedit, 1, 1, 1, 1);

    charges_data_browse = new QPushButton(charges_group);
    charges_data_browse->setObjectName(QString::fromUtf8("charges_data_browse"));

    gridLayout4->addWidget(charges_data_browse, 0, 2, 1, 1);

    charges_rules_browse = new QPushButton(charges_group);
    charges_rules_browse->setObjectName(QString::fromUtf8("charges_rules_browse"));

    gridLayout4->addWidget(charges_rules_browse, 1, 2, 1, 1);


    vboxLayout2->addWidget(charges_group);

    radii_group = new QGroupBox(processor_page);
    radii_group->setObjectName(QString::fromUtf8("radii_group"));
    QSizePolicy sizePolicy13(static_cast<QSizePolicy::Policy>(5), static_cast<QSizePolicy::Policy>(0));
    sizePolicy13.setHorizontalStretch(0);
    sizePolicy13.setVerticalStretch(0);
    sizePolicy13.setHeightForWidth(radii_group->sizePolicy().hasHeightForWidth());
    radii_group->setSizePolicy(sizePolicy13);
    gridLayout5 = new QGridLayout(radii_group);
    gridLayout5->setSpacing(6);
    gridLayout5->setMargin(11);
    gridLayout5->setObjectName(QString::fromUtf8("gridLayout5"));
    radii_rules_lineedit = new QLineEdit(radii_group);
    radii_rules_lineedit->setObjectName(QString::fromUtf8("radii_rules_lineedit"));
    radii_rules_lineedit->setReadOnly(false);

    gridLayout5->addWidget(radii_rules_lineedit, 1, 1, 1, 1);

    radii_rules_browse = new QPushButton(radii_group);
    radii_rules_browse->setObjectName(QString::fromUtf8("radii_rules_browse"));

    gridLayout5->addWidget(radii_rules_browse, 1, 2, 1, 1);

    radii_data_lineedit = new QLineEdit(radii_group);
    radii_data_lineedit->setObjectName(QString::fromUtf8("radii_data_lineedit"));

    gridLayout5->addWidget(radii_data_lineedit, 0, 1, 1, 1);

    radii_data_browse = new QPushButton(radii_group);
    radii_data_browse->setObjectName(QString::fromUtf8("radii_data_browse"));

    gridLayout5->addWidget(radii_data_browse, 0, 2, 1, 1);

    radii_data_button = new QRadioButton(radii_group);
    radii_data_button->setObjectName(QString::fromUtf8("radii_data_button"));
    radii_data_button->setMinimumSize(QSize(110, 0));
    radii_data_button->setMaximumSize(QSize(110, 32767));
    radii_data_button->setChecked(true);

    gridLayout5->addWidget(radii_data_button, 0, 0, 1, 1);

    radii_rules_button = new QRadioButton(radii_group);
    radii_rules_button->setObjectName(QString::fromUtf8("radii_rules_button"));
    radii_rules_button->setMinimumSize(QSize(110, 0));

    gridLayout5->addWidget(radii_rules_button, 1, 0, 1, 1);


    vboxLayout2->addWidget(radii_group);

    processors_group = new QGroupBox(processor_page);
    processors_group->setObjectName(QString::fromUtf8("processors_group"));
    QSizePolicy sizePolicy14(static_cast<QSizePolicy::Policy>(5), static_cast<QSizePolicy::Policy>(0));
    sizePolicy14.setHorizontalStretch(0);
    sizePolicy14.setVerticalStretch(0);
    sizePolicy14.setHeightForWidth(processors_group->sizePolicy().hasHeightForWidth());
    processors_group->setSizePolicy(sizePolicy14);
    gridLayout6 = new QGridLayout(processors_group);
    gridLayout6->setSpacing(6);
    gridLayout6->setMargin(11);
    gridLayout6->setObjectName(QString::fromUtf8("gridLayout6"));
    build_bonds = new QCheckBox(processors_group);
    build_bonds->setObjectName(QString::fromUtf8("build_bonds"));

    gridLayout6->addWidget(build_bonds, 0, 1, 1, 1);

    add_hydrogens = new QCheckBox(processors_group);
    add_hydrogens->setObjectName(QString::fromUtf8("add_hydrogens"));

    gridLayout6->addWidget(add_hydrogens, 0, 2, 1, 1);

    normalize_names = new QCheckBox(processors_group);
    normalize_names->setObjectName(QString::fromUtf8("normalize_names"));

    gridLayout6->addWidget(normalize_names, 0, 0, 1, 1);

    assign_charges = new QCheckBox(processors_group);
    assign_charges->setObjectName(QString::fromUtf8("assign_charges"));
    assign_charges->setChecked(true);

    gridLayout6->addWidget(assign_charges, 1, 0, 1, 1);

    assign_radii = new QCheckBox(processors_group);
    assign_radii->setObjectName(QString::fromUtf8("assign_radii"));
    assign_radii->setChecked(true);

    gridLayout6->addWidget(assign_radii, 1, 1, 1, 1);


    vboxLayout2->addWidget(processors_group);

    tab_pages->addTab(processor_page, QApplication::translate("DockDialogData", "Processors", 0, QApplication::UnicodeUTF8));

    vboxLayout->addWidget(tab_pages);

    hboxLayout1 = new QHBoxLayout();
    hboxLayout1->setSpacing(6);
    hboxLayout1->setMargin(0);
    hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
    ok_button = new QPushButton(DockDialogData);
    ok_button->setObjectName(QString::fromUtf8("ok_button"));
    ok_button->setDefault(true);

    hboxLayout1->addWidget(ok_button);

    cancel_button = new QPushButton(DockDialogData);
    cancel_button->setObjectName(QString::fromUtf8("cancel_button"));

    hboxLayout1->addWidget(cancel_button);

    reset_button = new QPushButton(DockDialogData);
    reset_button->setObjectName(QString::fromUtf8("reset_button"));

    hboxLayout1->addWidget(reset_button);


    vboxLayout->addLayout(hboxLayout1);

    QWidget::setTabOrder(tab_pages, systems1);
    QWidget::setTabOrder(systems1, systems2);
    QWidget::setTabOrder(systems2, algorithms);
    QWidget::setTabOrder(algorithms, alg_advanced_button);
    QWidget::setTabOrder(alg_advanced_button, scoring_functions);
    QWidget::setTabOrder(scoring_functions, scoring_advanced_button);
    QWidget::setTabOrder(scoring_advanced_button, best_num);
    QWidget::setTabOrder(best_num, verbosity);
    QWidget::setTabOrder(verbosity, phi_min);
    QWidget::setTabOrder(phi_min, psi_min);
    QWidget::setTabOrder(psi_min, theta_min);
    QWidget::setTabOrder(theta_min, delta_psi);
    QWidget::setTabOrder(delta_psi, phi_max);
    QWidget::setTabOrder(phi_max, theta_max);
    QWidget::setTabOrder(theta_max, psi_max);
    QWidget::setTabOrder(psi_max, delta_phi);
    QWidget::setTabOrder(delta_phi, delta_theta);
    QWidget::setTabOrder(delta_theta, ok_button);
    QWidget::setTabOrder(ok_button, cancel_button);
    QWidget::setTabOrder(cancel_button, reset_button);
    QWidget::setTabOrder(reset_button, charges_data_button);
    QWidget::setTabOrder(charges_data_button, charges_data_lineedit);
    QWidget::setTabOrder(charges_data_lineedit, charges_data_browse);
    QWidget::setTabOrder(charges_data_browse, charges_rules_button);
    QWidget::setTabOrder(charges_rules_button, charges_rules_lineedit);
    QWidget::setTabOrder(charges_rules_lineedit, charges_rules_browse);
    QWidget::setTabOrder(charges_rules_browse, radii_data_button);
    QWidget::setTabOrder(radii_data_button, radii_data_lineedit);
    QWidget::setTabOrder(radii_data_lineedit, radii_data_browse);
    QWidget::setTabOrder(radii_data_browse, radii_rules_button);
    QWidget::setTabOrder(radii_rules_button, radii_rules_lineedit);
    QWidget::setTabOrder(radii_rules_lineedit, radii_rules_browse);
    QWidget::setTabOrder(radii_rules_browse, normalize_names);
    QWidget::setTabOrder(normalize_names, build_bonds);
    QWidget::setTabOrder(build_bonds, add_hydrogens);
    QWidget::setTabOrder(add_hydrogens, assign_charges);
    QWidget::setTabOrder(assign_charges, assign_radii);

    retranslateUi(DockDialogData);

    QSize size(552, 549);
    size = size.expandedTo(DockDialogData->minimumSizeHint());
    DockDialogData->resize(size);


    tab_pages->setCurrentIndex(1);


    QMetaObject::connectSlotsByName(DockDialogData);
    } // setupUi

    void retranslateUi(QDialog *DockDialogData)
    {
    DockDialogData->setWindowTitle(QApplication::translate("DockDialogData", "Docking Options", 0, QApplication::UnicodeUTF8));
    systems_group->setTitle(QApplication::translate("DockDialogData", "Docking Partners", 0, QApplication::UnicodeUTF8));
    algorithm_group->setTitle(QApplication::translate("DockDialogData", "Docking Algorithm", 0, QApplication::UnicodeUTF8));
    algorithms->clear();
    algorithms->addItem(QApplication::translate("DockDialogData", "<select>", 0, QApplication::UnicodeUTF8));
    alg_advanced_button->setText(QApplication::translate("DockDialogData", "Advanced...", 0, QApplication::UnicodeUTF8));
    scoring_group->setTitle(QApplication::translate("DockDialogData", "Scoring", 0, QApplication::UnicodeUTF8));
    scoring_advanced_button->setText(QApplication::translate("DockDialogData", "Advanced...", 0, QApplication::UnicodeUTF8));
    options_group->setTitle(QApplication::translate("DockDialogData", "Options", 0, QApplication::UnicodeUTF8));
    best_num_label->setText(QApplication::translate("DockDialogData", "number of best docked structures ", 0, QApplication::UnicodeUTF8));
    best_num->setText(QApplication::translate("DockDialogData", "100", 0, QApplication::UnicodeUTF8));
    verbosity_label->setText(QApplication::translate("DockDialogData", "verbosity of algorithm", 0, QApplication::UnicodeUTF8));
    verbosity->setText(QApplication::translate("DockDialogData", "1", 0, QApplication::UnicodeUTF8));
    euler_group->setTitle(QApplication::translate("DockDialogData", "Euler angles", 0, QApplication::UnicodeUTF8));
    psi_max_label->setText(QApplication::translate("DockDialogData", "psi <font size=\"-1\">max</font>", 0, QApplication::UnicodeUTF8));
    delta_psi_label->setText(QApplication::translate("DockDialogData", "delta psi", 0, QApplication::UnicodeUTF8));
    delta_phi_label->setText(QApplication::translate("DockDialogData", "delta phi", 0, QApplication::UnicodeUTF8));
    phi_min_label->setText(QApplication::translate("DockDialogData", "phi <font size=\"-1\">min</font>", 0, QApplication::UnicodeUTF8));
    phi_max_label->setText(QApplication::translate("DockDialogData", "phi <font size=\"-1\">max</font>", 0, QApplication::UnicodeUTF8));
    theta_max_label->setText(QApplication::translate("DockDialogData", "theta <font size=\"-1\">max</font>", 0, QApplication::UnicodeUTF8));
    psi_min_label->setText(QApplication::translate("DockDialogData", "psi <font size=\"-1\">min</font>", 0, QApplication::UnicodeUTF8));
    phi_min->setText(QApplication::translate("DockDialogData", "-15", 0, QApplication::UnicodeUTF8));
    psi_min->setText(QApplication::translate("DockDialogData", "-15", 0, QApplication::UnicodeUTF8));
    theta_min->setText(QApplication::translate("DockDialogData", "-15", 0, QApplication::UnicodeUTF8));
    phi_max->setText(QApplication::translate("DockDialogData", "15", 0, QApplication::UnicodeUTF8));
    psi_max->setText(QApplication::translate("DockDialogData", "15", 0, QApplication::UnicodeUTF8));
    theta_max->setText(QApplication::translate("DockDialogData", "15", 0, QApplication::UnicodeUTF8));
    delta_phi->setText(QApplication::translate("DockDialogData", "3", 0, QApplication::UnicodeUTF8));
    delta_theta->setText(QApplication::translate("DockDialogData", "3", 0, QApplication::UnicodeUTF8));
    delta_psi->setText(QApplication::translate("DockDialogData", "3", 0, QApplication::UnicodeUTF8));
    theta_min_label->setText(QApplication::translate("DockDialogData", "theta <font size=\"-1\">min</font>", 0, QApplication::UnicodeUTF8));
    delta_theta_label->setText(QApplication::translate("DockDialogData", "delta theta", 0, QApplication::UnicodeUTF8));
    tab_pages->setTabText(tab_pages->indexOf(general_page), QApplication::translate("DockDialogData", "General", 0, QApplication::UnicodeUTF8));
    charges_group->setTitle(QApplication::translate("DockDialogData", "Charges Config File", 0, QApplication::UnicodeUTF8));
    charges_rules_button->setText(QApplication::translate("DockDialogData", "by rules", 0, QApplication::UnicodeUTF8));
    charges_data_button->setText(QApplication::translate("DockDialogData", "from table", 0, QApplication::UnicodeUTF8));
    charges_data_lineedit->setText(QApplication::translate("DockDialogData", "charges/PARSE.crg", 0, QApplication::UnicodeUTF8));
    charges_rules_lineedit->setText(QApplication::translate("DockDialogData", "solvation/PARSE.rul", 0, QApplication::UnicodeUTF8));
    charges_data_browse->setText(QApplication::translate("DockDialogData", "Browse", 0, QApplication::UnicodeUTF8));
    charges_rules_browse->setText(QApplication::translate("DockDialogData", "Browse", 0, QApplication::UnicodeUTF8));
    radii_group->setTitle(QApplication::translate("DockDialogData", "Radii Config File", 0, QApplication::UnicodeUTF8));
    radii_rules_lineedit->setText(QApplication::translate("DockDialogData", "solvation/PARSE.rul", 0, QApplication::UnicodeUTF8));
    radii_rules_browse->setText(QApplication::translate("DockDialogData", "Browse", 0, QApplication::UnicodeUTF8));
    radii_data_lineedit->setText(QApplication::translate("DockDialogData", "radii/PARSE.siz", 0, QApplication::UnicodeUTF8));
    radii_data_browse->setText(QApplication::translate("DockDialogData", "Browse", 0, QApplication::UnicodeUTF8));
    radii_data_button->setText(QApplication::translate("DockDialogData", "from table", 0, QApplication::UnicodeUTF8));
    radii_rules_button->setText(QApplication::translate("DockDialogData", "by rules", 0, QApplication::UnicodeUTF8));
    processors_group->setTitle(QApplication::translate("DockDialogData", "Processors", 0, QApplication::UnicodeUTF8));
    build_bonds->setText(QApplication::translate("DockDialogData", "build Bonds", 0, QApplication::UnicodeUTF8));
    add_hydrogens->setText(QApplication::translate("DockDialogData", "addHydrogens", 0, QApplication::UnicodeUTF8));
    normalize_names->setText(QApplication::translate("DockDialogData", "normalize names", 0, QApplication::UnicodeUTF8));
    assign_charges->setText(QApplication::translate("DockDialogData", "assign charges", 0, QApplication::UnicodeUTF8));
    assign_radii->setText(QApplication::translate("DockDialogData", "assign radii", 0, QApplication::UnicodeUTF8));
    tab_pages->setTabText(tab_pages->indexOf(processor_page), QApplication::translate("DockDialogData", "Processors", 0, QApplication::UnicodeUTF8));
    ok_button->setText(QApplication::translate("DockDialogData", "OK", 0, QApplication::UnicodeUTF8));
    cancel_button->setText(QApplication::translate("DockDialogData", "Cancel", 0, QApplication::UnicodeUTF8));
    reset_button->setText(QApplication::translate("DockDialogData", "Reset", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(DockDialogData);
    } // retranslateUi

};

namespace Ui {
    class DockDialogData: public Ui_DockDialogData {};
} // namespace Ui

#endif // DOCKDIALOGDATA_H
