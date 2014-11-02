/********************************************************************************
** Form generated from reading ui file 'minimizationDialog.ui'
**
** Created: Wed Mar 19 14:28:18 2008
**      by: Qt User Interface Compiler version 4.2.2
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef MINIMIZATIONDIALOGDATA_H
#define MINIMIZATIONDIALOGDATA_H

#include <BALL/COMMON/global.h>
#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QVBoxLayout>

class Ui_MinimizationDialogData
{
public:
    QGridLayout *gridLayout;
    QGroupBox *minimization_group;
    QGridLayout *gridLayout1;
    QRadioButton *steepest_button;
    QRadioButton *conjugate_button;
    QRadioButton *SLBFGS_button;
    QRadioButton *SLVMM_button;
    QPushButton *cancel_button;
    QPushButton *start_button;
    QGroupBox *groupBox_2;
    QVBoxLayout *vboxLayout;
    QRadioButton *useAmberRadioButton;
    QRadioButton *useCharmmRadioButton;
    QRadioButton *useMMFF94RadioButton;
    QPushButton *advanced_button;
    QGroupBox *groupBox;
    QGridLayout *gridLayout2;
    QLabel *Label_7;
    QLabel *Label_11;
    QLabel *Label_6;
    QLabel *Label_4;
    QLabel *Label_13;
    QLineEdit *refresh_iterations_lineedit;
    QLineEdit *energy_difference_lineedit;
    QLineEdit *max_grad_lineedit;
    QLabel *Label_12;
    QLineEdit *max_iterations_lineedit;
    QLabel *Label_5;

    void setupUi(QDialog *MinimizationDialogData)
    {
    MinimizationDialogData->setObjectName(QString::fromUtf8("MinimizationDialogData"));
    QSizePolicy sizePolicy(static_cast<QSizePolicy::Policy>(0), static_cast<QSizePolicy::Policy>(0));
    sizePolicy.setHorizontalStretch(0);
    sizePolicy.setVerticalStretch(0);
    sizePolicy.setHeightForWidth(MinimizationDialogData->sizePolicy().hasHeightForWidth());
    MinimizationDialogData->setSizePolicy(sizePolicy);
    MinimizationDialogData->setMinimumSize(QSize(0, 0));
    MinimizationDialogData->setMaximumSize(QSize(900, 9090));
    gridLayout = new QGridLayout(MinimizationDialogData);
    gridLayout->setSpacing(6);
    gridLayout->setMargin(9);
    gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
    minimization_group = new QGroupBox(MinimizationDialogData);
    minimization_group->setObjectName(QString::fromUtf8("minimization_group"));
    gridLayout1 = new QGridLayout(minimization_group);
    gridLayout1->setSpacing(6);
    gridLayout1->setMargin(9);
    gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
    steepest_button = new QRadioButton(minimization_group);
    steepest_button->setObjectName(QString::fromUtf8("steepest_button"));

    gridLayout1->addWidget(steepest_button, 3, 0, 1, 1);

    conjugate_button = new QRadioButton(minimization_group);
    conjugate_button->setObjectName(QString::fromUtf8("conjugate_button"));

    gridLayout1->addWidget(conjugate_button, 2, 0, 1, 1);

    SLBFGS_button = new QRadioButton(minimization_group);
    SLBFGS_button->setObjectName(QString::fromUtf8("SLBFGS_button"));

    gridLayout1->addWidget(SLBFGS_button, 1, 0, 1, 1);

    SLVMM_button = new QRadioButton(minimization_group);
    SLVMM_button->setObjectName(QString::fromUtf8("SLVMM_button"));
    SLVMM_button->setChecked(true);

    gridLayout1->addWidget(SLVMM_button, 0, 0, 1, 1);


    gridLayout->addWidget(minimization_group, 1, 0, 1, 1);

    cancel_button = new QPushButton(MinimizationDialogData);
    cancel_button->setObjectName(QString::fromUtf8("cancel_button"));
    cancel_button->setMinimumSize(QSize(0, 30));
    cancel_button->setMaximumSize(QSize(32767, 30));
    cancel_button->setFocusPolicy(Qt::TabFocus);
    cancel_button->setAutoDefault(true);

    gridLayout->addWidget(cancel_button, 2, 1, 1, 1);

    start_button = new QPushButton(MinimizationDialogData);
    start_button->setObjectName(QString::fromUtf8("start_button"));
    start_button->setMinimumSize(QSize(0, 30));
    start_button->setMaximumSize(QSize(32767, 30));
    start_button->setFocusPolicy(Qt::TabFocus);
    start_button->setAutoDefault(true);
    start_button->setDefault(true);

    gridLayout->addWidget(start_button, 2, 0, 1, 1);

    groupBox_2 = new QGroupBox(MinimizationDialogData);
    groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
    vboxLayout = new QVBoxLayout(groupBox_2);
    vboxLayout->setSpacing(6);
    vboxLayout->setMargin(9);
    vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
    useAmberRadioButton = new QRadioButton(groupBox_2);
    useAmberRadioButton->setObjectName(QString::fromUtf8("useAmberRadioButton"));
    useAmberRadioButton->setMinimumSize(QSize(0, 20));
    useAmberRadioButton->setChecked(true);

    vboxLayout->addWidget(useAmberRadioButton);

    useCharmmRadioButton = new QRadioButton(groupBox_2);
    useCharmmRadioButton->setObjectName(QString::fromUtf8("useCharmmRadioButton"));
    useCharmmRadioButton->setMinimumSize(QSize(0, 20));

    vboxLayout->addWidget(useCharmmRadioButton);

    useMMFF94RadioButton = new QRadioButton(groupBox_2);
    useMMFF94RadioButton->setObjectName(QString::fromUtf8("useMMFF94RadioButton"));
    useMMFF94RadioButton->setMinimumSize(QSize(0, 20));

    vboxLayout->addWidget(useMMFF94RadioButton);

    advanced_button = new QPushButton(groupBox_2);
    advanced_button->setObjectName(QString::fromUtf8("advanced_button"));
    advanced_button->setMinimumSize(QSize(170, 30));

    vboxLayout->addWidget(advanced_button);


    gridLayout->addWidget(groupBox_2, 1, 1, 1, 1);

    groupBox = new QGroupBox(MinimizationDialogData);
    groupBox->setObjectName(QString::fromUtf8("groupBox"));
    gridLayout2 = new QGridLayout(groupBox);
    gridLayout2->setSpacing(6);
    gridLayout2->setMargin(9);
    gridLayout2->setObjectName(QString::fromUtf8("gridLayout2"));
    Label_7 = new QLabel(groupBox);
    Label_7->setObjectName(QString::fromUtf8("Label_7"));
    Label_7->setFocusPolicy(Qt::NoFocus);
    Label_7->setLineWidth(1);
    Label_7->setTextFormat(Qt::AutoText);
    Label_7->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

    gridLayout2->addWidget(Label_7, 2, 2, 1, 1);

    Label_11 = new QLabel(groupBox);
    Label_11->setObjectName(QString::fromUtf8("Label_11"));
    Label_11->setFocusPolicy(Qt::NoFocus);
    Label_11->setLineWidth(1);
    Label_11->setTextFormat(Qt::AutoText);
    Label_11->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

    gridLayout2->addWidget(Label_11, 1, 2, 1, 1);

    Label_6 = new QLabel(groupBox);
    Label_6->setObjectName(QString::fromUtf8("Label_6"));
    Label_6->setFocusPolicy(Qt::NoFocus);
    Label_6->setLineWidth(1);
    Label_6->setTextFormat(Qt::AutoText);
    Label_6->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

    gridLayout2->addWidget(Label_6, 2, 0, 1, 1);

    Label_4 = new QLabel(groupBox);
    Label_4->setObjectName(QString::fromUtf8("Label_4"));
    Label_4->setFocusPolicy(Qt::NoFocus);
    Label_4->setLineWidth(1);
    Label_4->setTextFormat(Qt::AutoText);
    Label_4->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

    gridLayout2->addWidget(Label_4, 0, 0, 1, 1);

    Label_13 = new QLabel(groupBox);
    Label_13->setObjectName(QString::fromUtf8("Label_13"));
    Label_13->setFocusPolicy(Qt::NoFocus);
    Label_13->setLineWidth(1);
    Label_13->setTextFormat(Qt::AutoText);
    Label_13->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

    gridLayout2->addWidget(Label_13, 3, 2, 1, 1);

    refresh_iterations_lineedit = new QLineEdit(groupBox);
    refresh_iterations_lineedit->setObjectName(QString::fromUtf8("refresh_iterations_lineedit"));
    QSizePolicy sizePolicy1(static_cast<QSizePolicy::Policy>(1), static_cast<QSizePolicy::Policy>(1));
    sizePolicy1.setHorizontalStretch(0);
    sizePolicy1.setVerticalStretch(0);
    sizePolicy1.setHeightForWidth(refresh_iterations_lineedit->sizePolicy().hasHeightForWidth());
    refresh_iterations_lineedit->setSizePolicy(sizePolicy1);
    refresh_iterations_lineedit->setMinimumSize(QSize(130, 0));
    refresh_iterations_lineedit->setMaximumSize(QSize(130, 32767));
    refresh_iterations_lineedit->setFocusPolicy(Qt::StrongFocus);
    refresh_iterations_lineedit->setMaxLength(7);
    refresh_iterations_lineedit->setFrame(true);
    refresh_iterations_lineedit->setEchoMode(QLineEdit::Normal);
    refresh_iterations_lineedit->setAlignment(Qt::AlignRight);

    gridLayout2->addWidget(refresh_iterations_lineedit, 1, 1, 1, 1);

    energy_difference_lineedit = new QLineEdit(groupBox);
    energy_difference_lineedit->setObjectName(QString::fromUtf8("energy_difference_lineedit"));
    QSizePolicy sizePolicy2(static_cast<QSizePolicy::Policy>(7), static_cast<QSizePolicy::Policy>(1));
    sizePolicy2.setHorizontalStretch(0);
    sizePolicy2.setVerticalStretch(0);
    sizePolicy2.setHeightForWidth(energy_difference_lineedit->sizePolicy().hasHeightForWidth());
    energy_difference_lineedit->setSizePolicy(sizePolicy2);
    energy_difference_lineedit->setMinimumSize(QSize(130, 0));
    energy_difference_lineedit->setMaximumSize(QSize(130, 32767));
    energy_difference_lineedit->setFocusPolicy(Qt::StrongFocus);
    energy_difference_lineedit->setMaxLength(32767);
    energy_difference_lineedit->setFrame(true);
    energy_difference_lineedit->setEchoMode(QLineEdit::Normal);
    energy_difference_lineedit->setAlignment(Qt::AlignRight);

    gridLayout2->addWidget(energy_difference_lineedit, 3, 1, 1, 1);

    max_grad_lineedit = new QLineEdit(groupBox);
    max_grad_lineedit->setObjectName(QString::fromUtf8("max_grad_lineedit"));
    QSizePolicy sizePolicy3(static_cast<QSizePolicy::Policy>(1), static_cast<QSizePolicy::Policy>(1));
    sizePolicy3.setHorizontalStretch(0);
    sizePolicy3.setVerticalStretch(0);
    sizePolicy3.setHeightForWidth(max_grad_lineedit->sizePolicy().hasHeightForWidth());
    max_grad_lineedit->setSizePolicy(sizePolicy3);
    max_grad_lineedit->setMinimumSize(QSize(130, 0));
    max_grad_lineedit->setMaximumSize(QSize(130, 32767));
    max_grad_lineedit->setFocusPolicy(Qt::StrongFocus);
    max_grad_lineedit->setMaxLength(12);
    max_grad_lineedit->setFrame(true);
    max_grad_lineedit->setEchoMode(QLineEdit::Normal);
    max_grad_lineedit->setAlignment(Qt::AlignRight);

    gridLayout2->addWidget(max_grad_lineedit, 2, 1, 1, 1);

    Label_12 = new QLabel(groupBox);
    Label_12->setObjectName(QString::fromUtf8("Label_12"));
    Label_12->setFocusPolicy(Qt::NoFocus);
    Label_12->setLineWidth(1);
    Label_12->setTextFormat(Qt::AutoText);
    Label_12->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

    gridLayout2->addWidget(Label_12, 3, 0, 1, 1);

    max_iterations_lineedit = new QLineEdit(groupBox);
    max_iterations_lineedit->setObjectName(QString::fromUtf8("max_iterations_lineedit"));
    QSizePolicy sizePolicy4(static_cast<QSizePolicy::Policy>(1), static_cast<QSizePolicy::Policy>(1));
    sizePolicy4.setHorizontalStretch(0);
    sizePolicy4.setVerticalStretch(0);
    sizePolicy4.setHeightForWidth(max_iterations_lineedit->sizePolicy().hasHeightForWidth());
    max_iterations_lineedit->setSizePolicy(sizePolicy4);
    max_iterations_lineedit->setMinimumSize(QSize(130, 0));
    max_iterations_lineedit->setFocusPolicy(Qt::StrongFocus);
    max_iterations_lineedit->setMaxLength(7);
    max_iterations_lineedit->setFrame(true);
    max_iterations_lineedit->setEchoMode(QLineEdit::Normal);
    max_iterations_lineedit->setAlignment(Qt::AlignRight);

    gridLayout2->addWidget(max_iterations_lineedit, 0, 1, 1, 1);

    Label_5 = new QLabel(groupBox);
    Label_5->setObjectName(QString::fromUtf8("Label_5"));
    Label_5->setFocusPolicy(Qt::NoFocus);
    Label_5->setLineWidth(1);
    Label_5->setTextFormat(Qt::AutoText);
    Label_5->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

    gridLayout2->addWidget(Label_5, 1, 0, 1, 1);


    gridLayout->addWidget(groupBox, 0, 0, 1, 2);

    QWidget::setTabOrder(max_iterations_lineedit, refresh_iterations_lineedit);
    QWidget::setTabOrder(refresh_iterations_lineedit, max_grad_lineedit);
    QWidget::setTabOrder(max_grad_lineedit, energy_difference_lineedit);
    QWidget::setTabOrder(energy_difference_lineedit, useAmberRadioButton);
    QWidget::setTabOrder(useAmberRadioButton, useCharmmRadioButton);
    QWidget::setTabOrder(useCharmmRadioButton, advanced_button);
    QWidget::setTabOrder(advanced_button, useMMFF94RadioButton);
    QWidget::setTabOrder(useMMFF94RadioButton, start_button);
    QWidget::setTabOrder(start_button, cancel_button);

    retranslateUi(MinimizationDialogData);

    QSize size(507, 354);
    size = size.expandedTo(MinimizationDialogData->minimumSizeHint());
    MinimizationDialogData->resize(size);


    QMetaObject::connectSlotsByName(MinimizationDialogData);
    } // setupUi

    void retranslateUi(QDialog *MinimizationDialogData)
    {
    MinimizationDialogData->setWindowTitle(QApplication::translate("MinimizationDialogData", "Energy Minimization", 0, QApplication::UnicodeUTF8));
    minimization_group->setTitle(QApplication::translate("MinimizationDialogData", "Algorithm", 0, QApplication::UnicodeUTF8));
    steepest_button->setText(QApplication::translate("MinimizationDialogData", "Steepest Descent", 0, QApplication::UnicodeUTF8));
    conjugate_button->setText(QApplication::translate("MinimizationDialogData", "Conjugate Gradient", 0, QApplication::UnicodeUTF8));
    SLBFGS_button->setText(QApplication::translate("MinimizationDialogData", "L-BFGS", 0, QApplication::UnicodeUTF8));
    SLVMM_button->setText(QApplication::translate("MinimizationDialogData", "Shifted LVMM", 0, QApplication::UnicodeUTF8));
    cancel_button->setToolTip(QApplication::translate("MinimizationDialogData", "Close window without energy minimization", 0, QApplication::UnicodeUTF8));
    cancel_button->setText(QApplication::translate("MinimizationDialogData", "Cancel", 0, QApplication::UnicodeUTF8));
    cancel_button->setShortcut(QString());
    start_button->setToolTip(QApplication::translate("MinimizationDialogData", "Start minimization", 0, QApplication::UnicodeUTF8));
    start_button->setText(QApplication::translate("MinimizationDialogData", "&Minimize", 0, QApplication::UnicodeUTF8));
    start_button->setShortcut(QApplication::translate("MinimizationDialogData", "Alt+M", 0, QApplication::UnicodeUTF8));
    groupBox_2->setTitle(QApplication::translate("MinimizationDialogData", "Force Field", 0, QApplication::UnicodeUTF8));
    useAmberRadioButton->setText(QApplication::translate("MinimizationDialogData", "AMBER", 0, QApplication::UnicodeUTF8));
    useAmberRadioButton->setShortcut(QString());
    useCharmmRadioButton->setText(QApplication::translate("MinimizationDialogData", "CHARMM", 0, QApplication::UnicodeUTF8));
    useCharmmRadioButton->setShortcut(QString());
    useMMFF94RadioButton->setText(QApplication::translate("MinimizationDialogData", "MMFF94", 0, QApplication::UnicodeUTF8));
    useMMFF94RadioButton->setShortcut(QString());
    advanced_button->setToolTip(QApplication::translate("MinimizationDialogData", "Edit force field options", 0, QApplication::UnicodeUTF8));
    advanced_button->setText(QApplication::translate("MinimizationDialogData", "&Force field options", 0, QApplication::UnicodeUTF8));
    advanced_button->setShortcut(QApplication::translate("MinimizationDialogData", "Alt+F", 0, QApplication::UnicodeUTF8));
    groupBox->setTitle(QApplication::translate("MinimizationDialogData", "Options", 0, QApplication::UnicodeUTF8));
    Label_7->setText(QApplication::translate("MinimizationDialogData", "kJ/(mol \303\205)", 0, QApplication::UnicodeUTF8));
    Label_11->setText(QApplication::translate("MinimizationDialogData", "iterations", 0, QApplication::UnicodeUTF8));
    Label_6->setText(QApplication::translate("MinimizationDialogData", "Maximum gradient for convergence", 0, QApplication::UnicodeUTF8));
    Label_4->setText(QApplication::translate("MinimizationDialogData", "Maximum number of iterations", 0, QApplication::UnicodeUTF8));
    Label_13->setText(QApplication::translate("MinimizationDialogData", "kJ/mol", 0, QApplication::UnicodeUTF8));
    refresh_iterations_lineedit->setToolTip(QApplication::translate("MinimizationDialogData", "Number of iterations made for energy minimization", 0, QApplication::UnicodeUTF8));
    refresh_iterations_lineedit->setText(QApplication::translate("MinimizationDialogData", "10", 0, QApplication::UnicodeUTF8));
    energy_difference_lineedit->setText(QApplication::translate("MinimizationDialogData", "0.0001", 0, QApplication::UnicodeUTF8));
    max_grad_lineedit->setText(QApplication::translate("MinimizationDialogData", "0.5", 0, QApplication::UnicodeUTF8));
    Label_12->setText(QApplication::translate("MinimizationDialogData", "Maximum energy difference", 0, QApplication::UnicodeUTF8));
    max_iterations_lineedit->setText(QApplication::translate("MinimizationDialogData", "500", 0, QApplication::UnicodeUTF8));
    Label_5->setText(QApplication::translate("MinimizationDialogData", "Redraw screen after", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(MinimizationDialogData);
    } // retranslateUi

};

namespace Ui {
    class MinimizationDialogData: public Ui_MinimizationDialogData {};
} // namespace Ui

#endif // MINIMIZATIONDIALOGDATA_H
