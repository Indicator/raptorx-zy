/********************************************************************************
** Form generated from reading ui file 'fieldLinesDialog.ui'
**
** Created: Wed Mar 19 14:28:17 2008
**      by: Qt User Interface Compiler version 4.2.2
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef FIELDLINESDIALOGDATA_H
#define FIELDLINESDIALOGDATA_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QTabWidget>
#include <QtGui/QWidget>

class Ui_FieldLinesDialogData
{
public:
    QGridLayout *gridLayout;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout1;
    QLabel *label_2;
    QLabel *label_4;
    QLabel *label_3;
    QLineEdit *max_steps;
    QLineEdit *tolerance;
    QSpinBox *interpolation_steps;
    QGroupBox *groupBox;
    QGridLayout *gridLayout2;
    QTabWidget *seed_mode_tab_widget;
    QWidget *tab;
    QGridLayout *gridLayout3;
    QSpinBox *atom_distance;
    QSpinBox *start_points_per_atom;
    QLabel *label;
    QLabel *label_5;
    QWidget *tab_2;
    QGridLayout *gridLayout4;
    QLabel *label_6;
    QSpinBox *monte_carlo_number_lines;
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacerItem;
    QPushButton *ok_button;
    QPushButton *cancel_button;

    void setupUi(QDialog *FieldLinesDialogData)
    {
    FieldLinesDialogData->setObjectName(QString::fromUtf8("FieldLinesDialogData"));
    FieldLinesDialogData->setWindowIcon(QIcon());
    gridLayout = new QGridLayout(FieldLinesDialogData);
    gridLayout->setSpacing(6);
    gridLayout->setMargin(5);
    gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
    groupBox_2 = new QGroupBox(FieldLinesDialogData);
    groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
    gridLayout1 = new QGridLayout(groupBox_2);
    gridLayout1->setSpacing(6);
    gridLayout1->setMargin(5);
    gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
    label_2 = new QLabel(groupBox_2);
    label_2->setObjectName(QString::fromUtf8("label_2"));
    QSizePolicy sizePolicy(static_cast<QSizePolicy::Policy>(7), static_cast<QSizePolicy::Policy>(5));
    sizePolicy.setHorizontalStretch(0);
    sizePolicy.setVerticalStretch(0);
    sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
    label_2->setSizePolicy(sizePolicy);

    gridLayout1->addWidget(label_2, 0, 0, 1, 1);

    label_4 = new QLabel(groupBox_2);
    label_4->setObjectName(QString::fromUtf8("label_4"));
    QSizePolicy sizePolicy1(static_cast<QSizePolicy::Policy>(7), static_cast<QSizePolicy::Policy>(5));
    sizePolicy1.setHorizontalStretch(0);
    sizePolicy1.setVerticalStretch(0);
    sizePolicy1.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
    label_4->setSizePolicy(sizePolicy1);

    gridLayout1->addWidget(label_4, 1, 0, 1, 1);

    label_3 = new QLabel(groupBox_2);
    label_3->setObjectName(QString::fromUtf8("label_3"));
    QSizePolicy sizePolicy2(static_cast<QSizePolicy::Policy>(7), static_cast<QSizePolicy::Policy>(5));
    sizePolicy2.setHorizontalStretch(0);
    sizePolicy2.setVerticalStretch(0);
    sizePolicy2.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
    label_3->setSizePolicy(sizePolicy2);

    gridLayout1->addWidget(label_3, 2, 0, 1, 1);

    max_steps = new QLineEdit(groupBox_2);
    max_steps->setObjectName(QString::fromUtf8("max_steps"));

    gridLayout1->addWidget(max_steps, 0, 1, 1, 1);

    tolerance = new QLineEdit(groupBox_2);
    tolerance->setObjectName(QString::fromUtf8("tolerance"));

    gridLayout1->addWidget(tolerance, 1, 1, 1, 1);

    interpolation_steps = new QSpinBox(groupBox_2);
    interpolation_steps->setObjectName(QString::fromUtf8("interpolation_steps"));
    interpolation_steps->setMaximum(6);
    interpolation_steps->setMinimum(1);
    interpolation_steps->setValue(2);

    gridLayout1->addWidget(interpolation_steps, 2, 1, 1, 1);


    gridLayout->addWidget(groupBox_2, 1, 0, 1, 1);

    groupBox = new QGroupBox(FieldLinesDialogData);
    groupBox->setObjectName(QString::fromUtf8("groupBox"));
    gridLayout2 = new QGridLayout(groupBox);
    gridLayout2->setSpacing(6);
    gridLayout2->setMargin(5);
    gridLayout2->setObjectName(QString::fromUtf8("gridLayout2"));
    seed_mode_tab_widget = new QTabWidget(groupBox);
    seed_mode_tab_widget->setObjectName(QString::fromUtf8("seed_mode_tab_widget"));
    tab = new QWidget();
    tab->setObjectName(QString::fromUtf8("tab"));
    gridLayout3 = new QGridLayout(tab);
    gridLayout3->setSpacing(6);
    gridLayout3->setMargin(9);
    gridLayout3->setObjectName(QString::fromUtf8("gridLayout3"));
    atom_distance = new QSpinBox(tab);
    atom_distance->setObjectName(QString::fromUtf8("atom_distance"));
    atom_distance->setMaximum(50);
    atom_distance->setMinimum(1);
    atom_distance->setValue(10);

    gridLayout3->addWidget(atom_distance, 1, 1, 1, 1);

    start_points_per_atom = new QSpinBox(tab);
    start_points_per_atom->setObjectName(QString::fromUtf8("start_points_per_atom"));
    start_points_per_atom->setMaximum(3);
    start_points_per_atom->setMinimum(0);
    start_points_per_atom->setValue(1);

    gridLayout3->addWidget(start_points_per_atom, 0, 1, 1, 1);

    label = new QLabel(tab);
    label->setObjectName(QString::fromUtf8("label"));
    QSizePolicy sizePolicy3(static_cast<QSizePolicy::Policy>(7), static_cast<QSizePolicy::Policy>(5));
    sizePolicy3.setHorizontalStretch(0);
    sizePolicy3.setVerticalStretch(0);
    sizePolicy3.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
    label->setSizePolicy(sizePolicy3);

    gridLayout3->addWidget(label, 0, 0, 1, 1);

    label_5 = new QLabel(tab);
    label_5->setObjectName(QString::fromUtf8("label_5"));
    QSizePolicy sizePolicy4(static_cast<QSizePolicy::Policy>(7), static_cast<QSizePolicy::Policy>(5));
    sizePolicy4.setHorizontalStretch(0);
    sizePolicy4.setVerticalStretch(0);
    sizePolicy4.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
    label_5->setSizePolicy(sizePolicy4);

    gridLayout3->addWidget(label_5, 1, 0, 1, 1);

    seed_mode_tab_widget->addTab(tab, QApplication::translate("FieldLinesDialogData", "from Atoms", 0, QApplication::UnicodeUTF8));
    tab_2 = new QWidget();
    tab_2->setObjectName(QString::fromUtf8("tab_2"));
    gridLayout4 = new QGridLayout(tab_2);
    gridLayout4->setSpacing(6);
    gridLayout4->setMargin(9);
    gridLayout4->setObjectName(QString::fromUtf8("gridLayout4"));
    label_6 = new QLabel(tab_2);
    label_6->setObjectName(QString::fromUtf8("label_6"));
    QSizePolicy sizePolicy5(static_cast<QSizePolicy::Policy>(7), static_cast<QSizePolicy::Policy>(5));
    sizePolicy5.setHorizontalStretch(0);
    sizePolicy5.setVerticalStretch(0);
    sizePolicy5.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
    label_6->setSizePolicy(sizePolicy5);

    gridLayout4->addWidget(label_6, 0, 0, 1, 1);

    monte_carlo_number_lines = new QSpinBox(tab_2);
    monte_carlo_number_lines->setObjectName(QString::fromUtf8("monte_carlo_number_lines"));
    monte_carlo_number_lines->setMaximum(10000);
    monte_carlo_number_lines->setMinimum(1);
    monte_carlo_number_lines->setValue(500);

    gridLayout4->addWidget(monte_carlo_number_lines, 0, 1, 1, 1);

    seed_mode_tab_widget->addTab(tab_2, QApplication::translate("FieldLinesDialogData", "Monte Carlo", 0, QApplication::UnicodeUTF8));

    gridLayout2->addWidget(seed_mode_tab_widget, 0, 0, 1, 1);


    gridLayout->addWidget(groupBox, 0, 0, 1, 1);

    hboxLayout = new QHBoxLayout();
    hboxLayout->setSpacing(6);
    hboxLayout->setMargin(0);
    hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
    spacerItem = new QSpacerItem(131, 31, QSizePolicy::Expanding, QSizePolicy::Minimum);

    hboxLayout->addItem(spacerItem);

    ok_button = new QPushButton(FieldLinesDialogData);
    ok_button->setObjectName(QString::fromUtf8("ok_button"));

    hboxLayout->addWidget(ok_button);

    cancel_button = new QPushButton(FieldLinesDialogData);
    cancel_button->setObjectName(QString::fromUtf8("cancel_button"));

    hboxLayout->addWidget(cancel_button);


    gridLayout->addLayout(hboxLayout, 2, 0, 1, 1);

    QWidget::setTabOrder(seed_mode_tab_widget, start_points_per_atom);
    QWidget::setTabOrder(start_points_per_atom, atom_distance);
    QWidget::setTabOrder(atom_distance, max_steps);
    QWidget::setTabOrder(max_steps, tolerance);
    QWidget::setTabOrder(tolerance, interpolation_steps);
    QWidget::setTabOrder(interpolation_steps, ok_button);
    QWidget::setTabOrder(ok_button, cancel_button);
    QWidget::setTabOrder(cancel_button, monte_carlo_number_lines);

    retranslateUi(FieldLinesDialogData);

    QSize size(375, 323);
    size = size.expandedTo(FieldLinesDialogData->minimumSizeHint());
    FieldLinesDialogData->resize(size);

    QObject::connect(ok_button, SIGNAL(clicked()), FieldLinesDialogData, SLOT(accept()));
    QObject::connect(cancel_button, SIGNAL(clicked()), FieldLinesDialogData, SLOT(reject()));

    seed_mode_tab_widget->setCurrentIndex(1);


    QMetaObject::connectSlotsByName(FieldLinesDialogData);
    } // setupUi

    void retranslateUi(QDialog *FieldLinesDialogData)
    {
    FieldLinesDialogData->setWindowTitle(QApplication::translate("FieldLinesDialogData", "Create Field Lines", 0, QApplication::UnicodeUTF8));
    groupBox_2->setTitle(QApplication::translate("FieldLinesDialogData", "Advanced Options", 0, QApplication::UnicodeUTF8));
    label_2->setText(QApplication::translate("FieldLinesDialogData", "max steps", 0, QApplication::UnicodeUTF8));
    label_4->setText(QApplication::translate("FieldLinesDialogData", "tolerance", 0, QApplication::UnicodeUTF8));
    label_3->setText(QApplication::translate("FieldLinesDialogData", "interpolation steps", 0, QApplication::UnicodeUTF8));
    max_steps->setText(QApplication::translate("FieldLinesDialogData", "10000", 0, QApplication::UnicodeUTF8));
    tolerance->setText(QApplication::translate("FieldLinesDialogData", "0.0001", 0, QApplication::UnicodeUTF8));
    groupBox->setTitle(QApplication::translate("FieldLinesDialogData", "Seed Mode", 0, QApplication::UnicodeUTF8));
    label->setText(QApplication::translate("FieldLinesDialogData", "number of start points per atom (12^X)", 0, QApplication::UnicodeUTF8));
    label_5->setText(QApplication::translate("FieldLinesDialogData", "distance from atoms (0.1 \303\205 * X)", 0, QApplication::UnicodeUTF8));
    seed_mode_tab_widget->setTabText(seed_mode_tab_widget->indexOf(tab), QApplication::translate("FieldLinesDialogData", "from Atoms", 0, QApplication::UnicodeUTF8));
    label_6->setText(QApplication::translate("FieldLinesDialogData", "number of lines", 0, QApplication::UnicodeUTF8));
    seed_mode_tab_widget->setTabText(seed_mode_tab_widget->indexOf(tab_2), QApplication::translate("FieldLinesDialogData", "Monte Carlo", 0, QApplication::UnicodeUTF8));
    ok_button->setText(QApplication::translate("FieldLinesDialogData", "Create", 0, QApplication::UnicodeUTF8));
    cancel_button->setText(QApplication::translate("FieldLinesDialogData", "Cancel", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(FieldLinesDialogData);
    } // retranslateUi

};

namespace Ui {
    class FieldLinesDialogData: public Ui_FieldLinesDialogData {};
} // namespace Ui

#endif // FIELDLINESDIALOGDATA_H
