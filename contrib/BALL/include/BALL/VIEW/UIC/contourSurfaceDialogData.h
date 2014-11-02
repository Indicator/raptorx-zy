/********************************************************************************
** Form generated from reading ui file 'contourSurfaceDialog.ui'
**
** Created: Wed Mar 19 14:28:17 2008
**      by: Qt User Interface Compiler version 4.2.2
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef CONTOURSURFACEDIALOGDATA_H
#define CONTOURSURFACEDIALOGDATA_H

#include <BALL/COMMON/global.h>
#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QGroupBox>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>

class Ui_ContourSurfaceDialogData
{
public:
    QPushButton *buttonCancel;
    QPushButton *buttonOk;
    QGroupBox *groupBox1;
    QComboBox *grids;
    QGroupBox *groupBox5;
    QPushButton *color_button;
    QLabel *color_label;
    QGroupBox *groupBox1_2;
    QLineEdit *threshold;

    void setupUi(QDialog *ContourSurfaceDialogData)
    {
    ContourSurfaceDialogData->setObjectName(QString::fromUtf8("ContourSurfaceDialogData"));
    ContourSurfaceDialogData->setSizeGripEnabled(false);
    buttonCancel = new QPushButton(ContourSurfaceDialogData);
    buttonCancel->setObjectName(QString::fromUtf8("buttonCancel"));
    buttonCancel->setGeometry(QRect(198, 117, 182, 30));
    QSizePolicy sizePolicy(static_cast<QSizePolicy::Policy>(7), static_cast<QSizePolicy::Policy>(0));
    sizePolicy.setHorizontalStretch(0);
    sizePolicy.setVerticalStretch(0);
    sizePolicy.setHeightForWidth(buttonCancel->sizePolicy().hasHeightForWidth());
    buttonCancel->setSizePolicy(sizePolicy);
    buttonCancel->setMinimumSize(QSize(133, 30));
    buttonCancel->setMaximumSize(QSize(32767, 30));
    buttonCancel->setAutoDefault(true);
    buttonOk = new QPushButton(ContourSurfaceDialogData);
    buttonOk->setObjectName(QString::fromUtf8("buttonOk"));
    buttonOk->setEnabled(false);
    buttonOk->setGeometry(QRect(9, 117, 183, 30));
    QSizePolicy sizePolicy1(static_cast<QSizePolicy::Policy>(3), static_cast<QSizePolicy::Policy>(0));
    sizePolicy1.setHorizontalStretch(0);
    sizePolicy1.setVerticalStretch(0);
    sizePolicy1.setHeightForWidth(buttonOk->sizePolicy().hasHeightForWidth());
    buttonOk->setSizePolicy(sizePolicy1);
    buttonOk->setMinimumSize(QSize(133, 30));
    buttonOk->setMaximumSize(QSize(32767, 30));
    buttonOk->setAutoDefault(true);
    buttonOk->setDefault(true);
    groupBox1 = new QGroupBox(ContourSurfaceDialogData);
    groupBox1->setObjectName(QString::fromUtf8("groupBox1"));
    groupBox1->setGeometry(QRect(5, 0, 378, 50));
    grids = new QComboBox(groupBox1);
    grids->setObjectName(QString::fromUtf8("grids"));
    grids->setGeometry(QRect(9, 18, 361, 24));
    groupBox5 = new QGroupBox(ContourSurfaceDialogData);
    groupBox5->setObjectName(QString::fromUtf8("groupBox5"));
    groupBox5->setGeometry(QRect(5, 53, 229, 54));
    color_button = new QPushButton(groupBox5);
    color_button->setObjectName(QString::fromUtf8("color_button"));
    color_button->setGeometry(QRect(150, 17, 70, 30));
    color_button->setMinimumSize(QSize(70, 30));
    color_button->setMaximumSize(QSize(70, 30));
    color_button->setFocusPolicy(Qt::TabFocus);
    color_button->setAutoDefault(true);
    color_label = new QLabel(groupBox5);
    color_label->setObjectName(QString::fromUtf8("color_label"));
    color_label->setGeometry(QRect(9, 18, 131, 30));
    QSizePolicy sizePolicy2(static_cast<QSizePolicy::Policy>(1), static_cast<QSizePolicy::Policy>(5));
    sizePolicy2.setHorizontalStretch(0);
    sizePolicy2.setVerticalStretch(0);
    sizePolicy2.setHeightForWidth(color_label->sizePolicy().hasHeightForWidth());
    color_label->setSizePolicy(sizePolicy2);
    color_label->setMinimumSize(QSize(60, 0));
    QPalette palette;
    palette.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(0), QColor(0, 0, 0));
    palette.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(1), QColor(221, 223, 228));
    palette.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(2), QColor(255, 255, 255));
    palette.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(3), QColor(255, 255, 255));
    palette.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(4), QColor(85, 85, 85));
    palette.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(5), QColor(199, 199, 199));
    palette.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(6), QColor(0, 0, 0));
    palette.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(7), QColor(255, 255, 255));
    palette.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(8), QColor(0, 0, 0));
    palette.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(9), QColor(255, 255, 255));
    palette.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(10), QColor(255, 255, 0));
    palette.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(11), QColor(0, 0, 0));
    palette.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(12), QColor(103, 141, 178));
    palette.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(13), QColor(255, 255, 255));
    palette.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(14), QColor(0, 0, 238));
    palette.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(15), QColor(82, 24, 139));
    palette.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(16), QColor(232, 232, 232));
    palette.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(0), QColor(0, 0, 0));
    palette.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(1), QColor(221, 223, 228));
    palette.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(2), QColor(255, 255, 255));
    palette.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(3), QColor(255, 255, 255));
    palette.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(4), QColor(85, 85, 85));
    palette.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(5), QColor(199, 199, 199));
    palette.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(6), QColor(0, 0, 0));
    palette.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(7), QColor(255, 255, 255));
    palette.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(8), QColor(0, 0, 0));
    palette.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(9), QColor(255, 255, 255));
    palette.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(10), QColor(255, 255, 0));
    palette.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(11), QColor(0, 0, 0));
    palette.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(12), QColor(103, 141, 178));
    palette.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(13), QColor(255, 255, 255));
    palette.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(14), QColor(0, 0, 238));
    palette.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(15), QColor(82, 24, 139));
    palette.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(16), QColor(232, 232, 232));
    palette.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(0), QColor(128, 128, 128));
    palette.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(1), QColor(221, 223, 228));
    palette.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(2), QColor(255, 255, 255));
    palette.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(3), QColor(255, 255, 255));
    palette.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(4), QColor(85, 85, 85));
    palette.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(5), QColor(199, 199, 199));
    palette.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(6), QColor(199, 199, 199));
    palette.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(7), QColor(255, 255, 255));
    palette.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(8), QColor(128, 128, 128));
    palette.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(9), QColor(255, 255, 0));
    palette.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(10), QColor(255, 255, 0));
    palette.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(11), QColor(0, 0, 0));
    palette.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(12), QColor(86, 117, 148));
    palette.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(13), QColor(255, 255, 255));
    palette.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(14), QColor(0, 0, 238));
    palette.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(15), QColor(82, 24, 139));
    palette.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(16), QColor(232, 232, 232));
    color_label->setPalette(palette);
    color_label->setFocusPolicy(Qt::NoFocus);
    color_label->setAutoFillBackground(true);
    color_label->setFrameShape(QFrame::WinPanel);
    color_label->setFrameShadow(QFrame::Raised);
    color_label->setLineWidth(0);
    color_label->setMidLineWidth(0);
    color_label->setTextFormat(Qt::AutoText);
    color_label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
    color_label->setMargin(0);
    groupBox1_2 = new QGroupBox(ContourSurfaceDialogData);
    groupBox1_2->setObjectName(QString::fromUtf8("groupBox1_2"));
    groupBox1_2->setGeometry(QRect(243, 54, 140, 52));
    threshold = new QLineEdit(groupBox1_2);
    threshold->setObjectName(QString::fromUtf8("threshold"));
    threshold->setGeometry(QRect(8, 20, 120, 23));
    QWidget::setTabOrder(grids, color_button);
    QWidget::setTabOrder(color_button, threshold);
    QWidget::setTabOrder(threshold, buttonOk);
    QWidget::setTabOrder(buttonOk, buttonCancel);

    retranslateUi(ContourSurfaceDialogData);

    QSize size(390, 156);
    size = size.expandedTo(ContourSurfaceDialogData->minimumSizeHint());
    ContourSurfaceDialogData->resize(size);


    QMetaObject::connectSlotsByName(ContourSurfaceDialogData);
    } // setupUi

    void retranslateUi(QDialog *ContourSurfaceDialogData)
    {
    ContourSurfaceDialogData->setWindowTitle(QApplication::translate("ContourSurfaceDialogData", "ContourSurface", 0, QApplication::UnicodeUTF8));
    buttonCancel->setText(QApplication::translate("ContourSurfaceDialogData", "&Cancel", 0, QApplication::UnicodeUTF8));
    buttonCancel->setShortcut(QString());
    buttonOk->setToolTip(QApplication::translate("ContourSurfaceDialogData", "Close window and apply changes.", 0, QApplication::UnicodeUTF8));
    buttonOk->setText(QApplication::translate("ContourSurfaceDialogData", "&OK", 0, QApplication::UnicodeUTF8));
    buttonOk->setShortcut(QString());
    groupBox1->setTitle(QApplication::translate("ContourSurfaceDialogData", "Grid Data", 0, QApplication::UnicodeUTF8));
    groupBox5->setTitle(QApplication::translate("ContourSurfaceDialogData", "Color", 0, QApplication::UnicodeUTF8));
    color_button->setToolTip(QApplication::translate("ContourSurfaceDialogData", "Edit mininum color value", 0, QApplication::UnicodeUTF8));
    color_button->setText(QApplication::translate("ContourSurfaceDialogData", "Edit", 0, QApplication::UnicodeUTF8));
    groupBox1_2->setTitle(QApplication::translate("ContourSurfaceDialogData", "Threshold", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(ContourSurfaceDialogData);
    } // retranslateUi

};

namespace Ui {
    class ContourSurfaceDialogData: public Ui_ContourSurfaceDialogData {};
} // namespace Ui

#endif // CONTOURSURFACEDIALOGDATA_H
