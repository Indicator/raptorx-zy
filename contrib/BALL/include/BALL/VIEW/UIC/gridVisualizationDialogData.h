/********************************************************************************
** Form generated from reading ui file 'gridVisualizationDialog.ui'
**
** Created: Wed Mar 19 14:28:17 2008
**      by: Qt User Interface Compiler version 4.2.2
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef GRIDVISUALIZATIONDIALOGDATA_H
#define GRIDVISUALIZATIONDIALOGDATA_H

#include <BALL/COMMON/global.h>
#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpinBox>
#include <QtGui/QTabWidget>
#include <QtGui/QWidget>

class Ui_GridVisualizationDialogData
{
public:
    QGridLayout *gridLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout1;
    QLabel *TextLabel1_2;
    QLabel *TextLabel1;
    QPushButton *min_button;
    QPushButton *min_min_button;
    QLabel *min_label;
    QLabel *min_min_label;
    QSpinBox *min_alpha;
    QSpinBox *min_min_alpha;
    QLabel *TextLabel7_2;
    QLabel *TextLabel14_3;
    QFrame *line;
    QLabel *TextLabel15_4;
    QLabel *TextLabel14_10;
    QLabel *TextLabel14_11;
    QLabel *max_label;
    QLabel *max_max_label;
    QPushButton *max_max_button;
    QPushButton *max_button;
    QPushButton *mid_button;
    QLabel *mid_label;
    QSpinBox *mid_alpha;
    QSpinBox *max_alpha;
    QSpinBox *max_max_alpha;
    QLabel *TextLabel13;
    QLabel *TextLabel15;
    QLabel *TextLabel14_2;
    QLabel *TextLabel14;
    QLineEdit *max_box;
    QLineEdit *mid_box;
    QPushButton *autoscale;
    QLineEdit *min_box;
    QHBoxLayout *hboxLayout;
    QLabel *TextLabel7;
    QSpinBox *levels_box;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout2;
    QCheckBox *normalization;
    QCheckBox *resize_needed;
    QComboBox *grids;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout3;
    QTabWidget *mode_tab;
    QWidget *Plane;
    QCheckBox *transparency;
    QWidget *Dots;
    QGridLayout *gridLayout4;
    QSpinBox *dot_size;
    QLabel *label_2;
    QSpinBox *number_dots;
    QLabel *label_3;
    QWidget *tab_3;
    QGridLayout *gridLayout5;
    QSpinBox *slices_spin;
    QLabel *label;
    QHBoxLayout *hboxLayout1;
    QPushButton *apply_button;
    QPushButton *cancel_button;
    QPushButton *help_button;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout6;
    QCheckBox *render_box;

    void setupUi(QDialog *GridVisualizationDialogData)
    {
    GridVisualizationDialogData->setObjectName(QString::fromUtf8("GridVisualizationDialogData"));
    gridLayout = new QGridLayout(GridVisualizationDialogData);
    gridLayout->setSpacing(4);
    gridLayout->setMargin(3);
    gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
    groupBox = new QGroupBox(GridVisualizationDialogData);
    groupBox->setObjectName(QString::fromUtf8("groupBox"));
    groupBox->setMinimumSize(QSize(16, 221));
    gridLayout1 = new QGridLayout(groupBox);
    gridLayout1->setSpacing(9);
    gridLayout1->setMargin(4);
    gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
    TextLabel1_2 = new QLabel(groupBox);
    TextLabel1_2->setObjectName(QString::fromUtf8("TextLabel1_2"));
    QSizePolicy sizePolicy(static_cast<QSizePolicy::Policy>(7), static_cast<QSizePolicy::Policy>(5));
    sizePolicy.setHorizontalStretch(0);
    sizePolicy.setVerticalStretch(0);
    sizePolicy.setHeightForWidth(TextLabel1_2->sizePolicy().hasHeightForWidth());
    TextLabel1_2->setSizePolicy(sizePolicy);
    TextLabel1_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

    gridLayout1->addWidget(TextLabel1_2, 7, 0, 1, 1);

    TextLabel1 = new QLabel(groupBox);
    TextLabel1->setObjectName(QString::fromUtf8("TextLabel1"));
    QSizePolicy sizePolicy1(static_cast<QSizePolicy::Policy>(7), static_cast<QSizePolicy::Policy>(5));
    sizePolicy1.setHorizontalStretch(0);
    sizePolicy1.setVerticalStretch(0);
    sizePolicy1.setHeightForWidth(TextLabel1->sizePolicy().hasHeightForWidth());
    TextLabel1->setSizePolicy(sizePolicy1);
    TextLabel1->setTextFormat(Qt::AutoText);
    TextLabel1->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

    gridLayout1->addWidget(TextLabel1, 5, 0, 1, 1);

    min_button = new QPushButton(groupBox);
    min_button->setObjectName(QString::fromUtf8("min_button"));
    min_button->setMinimumSize(QSize(0, 28));
    min_button->setMaximumSize(QSize(32767, 28));

    gridLayout1->addWidget(min_button, 6, 2, 1, 1);

    min_min_button = new QPushButton(groupBox);
    min_min_button->setObjectName(QString::fromUtf8("min_min_button"));
    min_min_button->setMinimumSize(QSize(0, 28));
    min_min_button->setMaximumSize(QSize(32767, 28));

    gridLayout1->addWidget(min_min_button, 6, 1, 1, 1);

    min_label = new QLabel(groupBox);
    min_label->setObjectName(QString::fromUtf8("min_label"));
    min_label->setMinimumSize(QSize(0, 28));
    min_label->setMaximumSize(QSize(32767, 28));
    QPalette palette;
    QBrush brush(QColor(0, 0, 0, 255));
    brush.setStyle(Qt::SolidPattern);
    palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
    QBrush brush1(QColor(221, 223, 228, 255));
    brush1.setStyle(Qt::SolidPattern);
    palette.setBrush(QPalette::Active, QPalette::Button, brush1);
    QBrush brush2(QColor(255, 255, 255, 255));
    brush2.setStyle(Qt::SolidPattern);
    palette.setBrush(QPalette::Active, QPalette::Light, brush2);
    QBrush brush3(QColor(255, 255, 255, 255));
    brush3.setStyle(Qt::SolidPattern);
    palette.setBrush(QPalette::Active, QPalette::Midlight, brush3);
    QBrush brush4(QColor(85, 85, 85, 255));
    brush4.setStyle(Qt::SolidPattern);
    palette.setBrush(QPalette::Active, QPalette::Dark, brush4);
    QBrush brush5(QColor(199, 199, 199, 255));
    brush5.setStyle(Qt::SolidPattern);
    palette.setBrush(QPalette::Active, QPalette::Mid, brush5);
    QBrush brush6(QColor(0, 0, 0, 255));
    brush6.setStyle(Qt::SolidPattern);
    palette.setBrush(QPalette::Active, QPalette::Text, brush6);
    QBrush brush7(QColor(255, 255, 255, 255));
    brush7.setStyle(Qt::SolidPattern);
    palette.setBrush(QPalette::Active, QPalette::BrightText, brush7);
    QBrush brush8(QColor(0, 0, 0, 255));
    brush8.setStyle(Qt::SolidPattern);
    palette.setBrush(QPalette::Active, QPalette::ButtonText, brush8);
    QBrush brush9(QColor(255, 0, 0, 255));
    brush9.setStyle(Qt::SolidPattern);
    palette.setBrush(QPalette::Active, QPalette::Base, brush9);
    QBrush brush10(QColor(255, 0, 0, 255));
    brush10.setStyle(Qt::SolidPattern);
    palette.setBrush(QPalette::Active, QPalette::Window, brush10);
    QBrush brush11(QColor(0, 0, 0, 255));
    brush11.setStyle(Qt::SolidPattern);
    palette.setBrush(QPalette::Active, QPalette::Shadow, brush11);
    QBrush brush12(QColor(103, 141, 178, 255));
    brush12.setStyle(Qt::SolidPattern);
    palette.setBrush(QPalette::Active, QPalette::Highlight, brush12);
    QBrush brush13(QColor(255, 255, 255, 255));
    brush13.setStyle(Qt::SolidPattern);
    palette.setBrush(QPalette::Active, QPalette::HighlightedText, brush13);
    QBrush brush14(QColor(0, 0, 238, 255));
    brush14.setStyle(Qt::SolidPattern);
    palette.setBrush(QPalette::Active, QPalette::Link, brush14);
    QBrush brush15(QColor(82, 24, 139, 255));
    brush15.setStyle(Qt::SolidPattern);
    palette.setBrush(QPalette::Active, QPalette::LinkVisited, brush15);
    QBrush brush16(QColor(232, 232, 232, 255));
    brush16.setStyle(Qt::SolidPattern);
    palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush16);
    QBrush brush17(QColor(0, 0, 0, 255));
    brush17.setStyle(Qt::SolidPattern);
    palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush17);
    QBrush brush18(QColor(221, 223, 228, 255));
    brush18.setStyle(Qt::SolidPattern);
    palette.setBrush(QPalette::Inactive, QPalette::Button, brush18);
    QBrush brush19(QColor(255, 255, 255, 255));
    brush19.setStyle(Qt::SolidPattern);
    palette.setBrush(QPalette::Inactive, QPalette::Light, brush19);
    QBrush brush20(QColor(255, 255, 255, 255));
    brush20.setStyle(Qt::SolidPattern);
    palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush20);
    QBrush brush21(QColor(85, 85, 85, 255));
    brush21.setStyle(Qt::SolidPattern);
    palette.setBrush(QPalette::Inactive, QPalette::Dark, brush21);
    QBrush brush22(QColor(199, 199, 199, 255));
    brush22.setStyle(Qt::SolidPattern);
    palette.setBrush(QPalette::Inactive, QPalette::Mid, brush22);
    QBrush brush23(QColor(0, 0, 0, 255));
    brush23.setStyle(Qt::SolidPattern);
    palette.setBrush(QPalette::Inactive, QPalette::Text, brush23);
    QBrush brush24(QColor(255, 255, 255, 255));
    brush24.setStyle(Qt::SolidPattern);
    palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush24);
    QBrush brush25(QColor(0, 0, 0, 255));
    brush25.setStyle(Qt::SolidPattern);
    palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush25);
    QBrush brush26(QColor(255, 0, 0, 255));
    brush26.setStyle(Qt::SolidPattern);
    palette.setBrush(QPalette::Inactive, QPalette::Base, brush26);
    QBrush brush27(QColor(255, 0, 0, 255));
    brush27.setStyle(Qt::SolidPattern);
    palette.setBrush(QPalette::Inactive, QPalette::Window, brush27);
    QBrush brush28(QColor(0, 0, 0, 255));
    brush28.setStyle(Qt::SolidPattern);
    palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush28);
    QBrush brush29(QColor(103, 141, 178, 255));
    brush29.setStyle(Qt::SolidPattern);
    palette.setBrush(QPalette::Inactive, QPalette::Highlight, brush29);
    QBrush brush30(QColor(255, 255, 255, 255));
    brush30.setStyle(Qt::SolidPattern);
    palette.setBrush(QPalette::Inactive, QPalette::HighlightedText, brush30);
    QBrush brush31(QColor(0, 0, 238, 255));
    brush31.setStyle(Qt::SolidPattern);
    palette.setBrush(QPalette::Inactive, QPalette::Link, brush31);
    QBrush brush32(QColor(82, 24, 139, 255));
    brush32.setStyle(Qt::SolidPattern);
    palette.setBrush(QPalette::Inactive, QPalette::LinkVisited, brush32);
    QBrush brush33(QColor(232, 232, 232, 255));
    brush33.setStyle(Qt::SolidPattern);
    palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush33);
    QBrush brush34(QColor(128, 128, 128, 255));
    brush34.setStyle(Qt::SolidPattern);
    palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush34);
    QBrush brush35(QColor(221, 223, 228, 255));
    brush35.setStyle(Qt::SolidPattern);
    palette.setBrush(QPalette::Disabled, QPalette::Button, brush35);
    QBrush brush36(QColor(255, 255, 255, 255));
    brush36.setStyle(Qt::SolidPattern);
    palette.setBrush(QPalette::Disabled, QPalette::Light, brush36);
    QBrush brush37(QColor(255, 255, 255, 255));
    brush37.setStyle(Qt::SolidPattern);
    palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush37);
    QBrush brush38(QColor(85, 85, 85, 255));
    brush38.setStyle(Qt::SolidPattern);
    palette.setBrush(QPalette::Disabled, QPalette::Dark, brush38);
    QBrush brush39(QColor(199, 199, 199, 255));
    brush39.setStyle(Qt::SolidPattern);
    palette.setBrush(QPalette::Disabled, QPalette::Mid, brush39);
    QBrush brush40(QColor(199, 199, 199, 255));
    brush40.setStyle(Qt::SolidPattern);
    palette.setBrush(QPalette::Disabled, QPalette::Text, brush40);
    QBrush brush41(QColor(255, 255, 255, 255));
    brush41.setStyle(Qt::SolidPattern);
    palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush41);
    QBrush brush42(QColor(128, 128, 128, 255));
    brush42.setStyle(Qt::SolidPattern);
    palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush42);
    QBrush brush43(QColor(255, 0, 0, 255));
    brush43.setStyle(Qt::SolidPattern);
    palette.setBrush(QPalette::Disabled, QPalette::Base, brush43);
    QBrush brush44(QColor(255, 0, 0, 255));
    brush44.setStyle(Qt::SolidPattern);
    palette.setBrush(QPalette::Disabled, QPalette::Window, brush44);
    QBrush brush45(QColor(0, 0, 0, 255));
    brush45.setStyle(Qt::SolidPattern);
    palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush45);
    QBrush brush46(QColor(86, 117, 148, 255));
    brush46.setStyle(Qt::SolidPattern);
    palette.setBrush(QPalette::Disabled, QPalette::Highlight, brush46);
    QBrush brush47(QColor(255, 255, 255, 255));
    brush47.setStyle(Qt::SolidPattern);
    palette.setBrush(QPalette::Disabled, QPalette::HighlightedText, brush47);
    QBrush brush48(QColor(0, 0, 238, 255));
    brush48.setStyle(Qt::SolidPattern);
    palette.setBrush(QPalette::Disabled, QPalette::Link, brush48);
    QBrush brush49(QColor(82, 24, 139, 255));
    brush49.setStyle(Qt::SolidPattern);
    palette.setBrush(QPalette::Disabled, QPalette::LinkVisited, brush49);
    QBrush brush50(QColor(232, 232, 232, 255));
    brush50.setStyle(Qt::SolidPattern);
    palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush50);
    min_label->setPalette(palette);
    min_label->setAutoFillBackground(true);
    min_label->setFrameShape(QFrame::Panel);

    gridLayout1->addWidget(min_label, 5, 2, 1, 1);

    min_min_label = new QLabel(groupBox);
    min_min_label->setObjectName(QString::fromUtf8("min_min_label"));
    min_min_label->setMinimumSize(QSize(0, 28));
    min_min_label->setMaximumSize(QSize(32767, 28));
    QPalette palette1;
    QBrush brush51(QColor(0, 0, 0, 255));
    brush51.setStyle(Qt::SolidPattern);
    palette1.setBrush(QPalette::Active, QPalette::WindowText, brush51);
    QBrush brush52(QColor(221, 223, 228, 255));
    brush52.setStyle(Qt::SolidPattern);
    palette1.setBrush(QPalette::Active, QPalette::Button, brush52);
    QBrush brush53(QColor(255, 255, 255, 255));
    brush53.setStyle(Qt::SolidPattern);
    palette1.setBrush(QPalette::Active, QPalette::Light, brush53);
    QBrush brush54(QColor(255, 255, 255, 255));
    brush54.setStyle(Qt::SolidPattern);
    palette1.setBrush(QPalette::Active, QPalette::Midlight, brush54);
    QBrush brush55(QColor(85, 85, 85, 255));
    brush55.setStyle(Qt::SolidPattern);
    palette1.setBrush(QPalette::Active, QPalette::Dark, brush55);
    QBrush brush56(QColor(199, 199, 199, 255));
    brush56.setStyle(Qt::SolidPattern);
    palette1.setBrush(QPalette::Active, QPalette::Mid, brush56);
    QBrush brush57(QColor(0, 0, 0, 255));
    brush57.setStyle(Qt::SolidPattern);
    palette1.setBrush(QPalette::Active, QPalette::Text, brush57);
    QBrush brush58(QColor(255, 255, 255, 255));
    brush58.setStyle(Qt::SolidPattern);
    palette1.setBrush(QPalette::Active, QPalette::BrightText, brush58);
    QBrush brush59(QColor(0, 0, 0, 255));
    brush59.setStyle(Qt::SolidPattern);
    palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush59);
    QBrush brush60(QColor(255, 0, 0, 255));
    brush60.setStyle(Qt::SolidPattern);
    palette1.setBrush(QPalette::Active, QPalette::Base, brush60);
    QBrush brush61(QColor(255, 0, 0, 255));
    brush61.setStyle(Qt::SolidPattern);
    palette1.setBrush(QPalette::Active, QPalette::Window, brush61);
    QBrush brush62(QColor(0, 0, 0, 255));
    brush62.setStyle(Qt::SolidPattern);
    palette1.setBrush(QPalette::Active, QPalette::Shadow, brush62);
    QBrush brush63(QColor(103, 141, 178, 255));
    brush63.setStyle(Qt::SolidPattern);
    palette1.setBrush(QPalette::Active, QPalette::Highlight, brush63);
    QBrush brush64(QColor(255, 255, 255, 255));
    brush64.setStyle(Qt::SolidPattern);
    palette1.setBrush(QPalette::Active, QPalette::HighlightedText, brush64);
    QBrush brush65(QColor(0, 0, 238, 255));
    brush65.setStyle(Qt::SolidPattern);
    palette1.setBrush(QPalette::Active, QPalette::Link, brush65);
    QBrush brush66(QColor(82, 24, 139, 255));
    brush66.setStyle(Qt::SolidPattern);
    palette1.setBrush(QPalette::Active, QPalette::LinkVisited, brush66);
    QBrush brush67(QColor(232, 232, 232, 255));
    brush67.setStyle(Qt::SolidPattern);
    palette1.setBrush(QPalette::Active, QPalette::AlternateBase, brush67);
    QBrush brush68(QColor(0, 0, 0, 255));
    brush68.setStyle(Qt::SolidPattern);
    palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush68);
    QBrush brush69(QColor(221, 223, 228, 255));
    brush69.setStyle(Qt::SolidPattern);
    palette1.setBrush(QPalette::Inactive, QPalette::Button, brush69);
    QBrush brush70(QColor(255, 255, 255, 255));
    brush70.setStyle(Qt::SolidPattern);
    palette1.setBrush(QPalette::Inactive, QPalette::Light, brush70);
    QBrush brush71(QColor(255, 255, 255, 255));
    brush71.setStyle(Qt::SolidPattern);
    palette1.setBrush(QPalette::Inactive, QPalette::Midlight, brush71);
    QBrush brush72(QColor(85, 85, 85, 255));
    brush72.setStyle(Qt::SolidPattern);
    palette1.setBrush(QPalette::Inactive, QPalette::Dark, brush72);
    QBrush brush73(QColor(199, 199, 199, 255));
    brush73.setStyle(Qt::SolidPattern);
    palette1.setBrush(QPalette::Inactive, QPalette::Mid, brush73);
    QBrush brush74(QColor(0, 0, 0, 255));
    brush74.setStyle(Qt::SolidPattern);
    palette1.setBrush(QPalette::Inactive, QPalette::Text, brush74);
    QBrush brush75(QColor(255, 255, 255, 255));
    brush75.setStyle(Qt::SolidPattern);
    palette1.setBrush(QPalette::Inactive, QPalette::BrightText, brush75);
    QBrush brush76(QColor(0, 0, 0, 255));
    brush76.setStyle(Qt::SolidPattern);
    palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush76);
    QBrush brush77(QColor(255, 0, 0, 255));
    brush77.setStyle(Qt::SolidPattern);
    palette1.setBrush(QPalette::Inactive, QPalette::Base, brush77);
    QBrush brush78(QColor(255, 0, 0, 255));
    brush78.setStyle(Qt::SolidPattern);
    palette1.setBrush(QPalette::Inactive, QPalette::Window, brush78);
    QBrush brush79(QColor(0, 0, 0, 255));
    brush79.setStyle(Qt::SolidPattern);
    palette1.setBrush(QPalette::Inactive, QPalette::Shadow, brush79);
    QBrush brush80(QColor(103, 141, 178, 255));
    brush80.setStyle(Qt::SolidPattern);
    palette1.setBrush(QPalette::Inactive, QPalette::Highlight, brush80);
    QBrush brush81(QColor(255, 255, 255, 255));
    brush81.setStyle(Qt::SolidPattern);
    palette1.setBrush(QPalette::Inactive, QPalette::HighlightedText, brush81);
    QBrush brush82(QColor(0, 0, 238, 255));
    brush82.setStyle(Qt::SolidPattern);
    palette1.setBrush(QPalette::Inactive, QPalette::Link, brush82);
    QBrush brush83(QColor(82, 24, 139, 255));
    brush83.setStyle(Qt::SolidPattern);
    palette1.setBrush(QPalette::Inactive, QPalette::LinkVisited, brush83);
    QBrush brush84(QColor(232, 232, 232, 255));
    brush84.setStyle(Qt::SolidPattern);
    palette1.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush84);
    QBrush brush85(QColor(128, 128, 128, 255));
    brush85.setStyle(Qt::SolidPattern);
    palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush85);
    QBrush brush86(QColor(221, 223, 228, 255));
    brush86.setStyle(Qt::SolidPattern);
    palette1.setBrush(QPalette::Disabled, QPalette::Button, brush86);
    QBrush brush87(QColor(255, 255, 255, 255));
    brush87.setStyle(Qt::SolidPattern);
    palette1.setBrush(QPalette::Disabled, QPalette::Light, brush87);
    QBrush brush88(QColor(255, 255, 255, 255));
    brush88.setStyle(Qt::SolidPattern);
    palette1.setBrush(QPalette::Disabled, QPalette::Midlight, brush88);
    QBrush brush89(QColor(85, 85, 85, 255));
    brush89.setStyle(Qt::SolidPattern);
    palette1.setBrush(QPalette::Disabled, QPalette::Dark, brush89);
    QBrush brush90(QColor(199, 199, 199, 255));
    brush90.setStyle(Qt::SolidPattern);
    palette1.setBrush(QPalette::Disabled, QPalette::Mid, brush90);
    QBrush brush91(QColor(199, 199, 199, 255));
    brush91.setStyle(Qt::SolidPattern);
    palette1.setBrush(QPalette::Disabled, QPalette::Text, brush91);
    QBrush brush92(QColor(255, 255, 255, 255));
    brush92.setStyle(Qt::SolidPattern);
    palette1.setBrush(QPalette::Disabled, QPalette::BrightText, brush92);
    QBrush brush93(QColor(128, 128, 128, 255));
    brush93.setStyle(Qt::SolidPattern);
    palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush93);
    QBrush brush94(QColor(255, 0, 0, 255));
    brush94.setStyle(Qt::SolidPattern);
    palette1.setBrush(QPalette::Disabled, QPalette::Base, brush94);
    QBrush brush95(QColor(255, 0, 0, 255));
    brush95.setStyle(Qt::SolidPattern);
    palette1.setBrush(QPalette::Disabled, QPalette::Window, brush95);
    QBrush brush96(QColor(0, 0, 0, 255));
    brush96.setStyle(Qt::SolidPattern);
    palette1.setBrush(QPalette::Disabled, QPalette::Shadow, brush96);
    QBrush brush97(QColor(86, 117, 148, 255));
    brush97.setStyle(Qt::SolidPattern);
    palette1.setBrush(QPalette::Disabled, QPalette::Highlight, brush97);
    QBrush brush98(QColor(255, 255, 255, 255));
    brush98.setStyle(Qt::SolidPattern);
    palette1.setBrush(QPalette::Disabled, QPalette::HighlightedText, brush98);
    QBrush brush99(QColor(0, 0, 238, 255));
    brush99.setStyle(Qt::SolidPattern);
    palette1.setBrush(QPalette::Disabled, QPalette::Link, brush99);
    QBrush brush100(QColor(82, 24, 139, 255));
    brush100.setStyle(Qt::SolidPattern);
    palette1.setBrush(QPalette::Disabled, QPalette::LinkVisited, brush100);
    QBrush brush101(QColor(232, 232, 232, 255));
    brush101.setStyle(Qt::SolidPattern);
    palette1.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush101);
    min_min_label->setPalette(palette1);
    min_min_label->setAutoFillBackground(true);
    min_min_label->setFrameShape(QFrame::Panel);

    gridLayout1->addWidget(min_min_label, 5, 1, 1, 1);

    min_alpha = new QSpinBox(groupBox);
    min_alpha->setObjectName(QString::fromUtf8("min_alpha"));
    min_alpha->setEnabled(true);
    min_alpha->setMinimumSize(QSize(84, 24));
    min_alpha->setMaximumSize(QSize(84, 24));
    min_alpha->setMaximum(255);
    min_alpha->setValue(90);

    gridLayout1->addWidget(min_alpha, 7, 2, 1, 1);

    min_min_alpha = new QSpinBox(groupBox);
    min_min_alpha->setObjectName(QString::fromUtf8("min_min_alpha"));
    min_min_alpha->setEnabled(true);
    min_min_alpha->setMinimumSize(QSize(84, 24));
    min_min_alpha->setMaximumSize(QSize(84, 24));
    min_min_alpha->setMaximum(255);
    min_min_alpha->setValue(255);

    gridLayout1->addWidget(min_min_alpha, 7, 1, 1, 1);

    TextLabel7_2 = new QLabel(groupBox);
    TextLabel7_2->setObjectName(QString::fromUtf8("TextLabel7_2"));
    TextLabel7_2->setMinimumSize(QSize(84, 24));
    TextLabel7_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

    gridLayout1->addWidget(TextLabel7_2, 1, 0, 1, 2);

    TextLabel14_3 = new QLabel(groupBox);
    TextLabel14_3->setObjectName(QString::fromUtf8("TextLabel14_3"));
    TextLabel14_3->setMaximumSize(QSize(32767, 18));
    TextLabel14_3->setAlignment(Qt::AlignCenter);

    gridLayout1->addWidget(TextLabel14_3, 4, 1, 1, 1);

    line = new QFrame(groupBox);
    line->setObjectName(QString::fromUtf8("line"));
    line->setFrameShape(QFrame::HLine);
    line->setFrameShadow(QFrame::Sunken);

    gridLayout1->addWidget(line, 2, 0, 2, 6);

    TextLabel15_4 = new QLabel(groupBox);
    TextLabel15_4->setObjectName(QString::fromUtf8("TextLabel15_4"));
    TextLabel15_4->setMaximumSize(QSize(32767, 18));
    TextLabel15_4->setAlignment(Qt::AlignCenter);

    gridLayout1->addWidget(TextLabel15_4, 0, 4, 1, 1);

    TextLabel14_10 = new QLabel(groupBox);
    TextLabel14_10->setObjectName(QString::fromUtf8("TextLabel14_10"));
    TextLabel14_10->setMaximumSize(QSize(32767, 18));
    TextLabel14_10->setAlignment(Qt::AlignCenter);

    gridLayout1->addWidget(TextLabel14_10, 0, 3, 1, 1);

    TextLabel14_11 = new QLabel(groupBox);
    TextLabel14_11->setObjectName(QString::fromUtf8("TextLabel14_11"));
    TextLabel14_11->setMaximumSize(QSize(32767, 18));
    TextLabel14_11->setAlignment(Qt::AlignCenter);

    gridLayout1->addWidget(TextLabel14_11, 0, 2, 1, 1);

    max_label = new QLabel(groupBox);
    max_label->setObjectName(QString::fromUtf8("max_label"));
    max_label->setMinimumSize(QSize(0, 28));
    max_label->setMaximumSize(QSize(32767, 28));
    QPalette palette2;
    QBrush brush102(QColor(0, 0, 0, 255));
    brush102.setStyle(Qt::SolidPattern);
    palette2.setBrush(QPalette::Active, QPalette::WindowText, brush102);
    QBrush brush103(QColor(221, 223, 228, 255));
    brush103.setStyle(Qt::SolidPattern);
    palette2.setBrush(QPalette::Active, QPalette::Button, brush103);
    QBrush brush104(QColor(255, 255, 255, 255));
    brush104.setStyle(Qt::SolidPattern);
    palette2.setBrush(QPalette::Active, QPalette::Light, brush104);
    QBrush brush105(QColor(255, 255, 255, 255));
    brush105.setStyle(Qt::SolidPattern);
    palette2.setBrush(QPalette::Active, QPalette::Midlight, brush105);
    QBrush brush106(QColor(85, 85, 85, 255));
    brush106.setStyle(Qt::SolidPattern);
    palette2.setBrush(QPalette::Active, QPalette::Dark, brush106);
    QBrush brush107(QColor(199, 199, 199, 255));
    brush107.setStyle(Qt::SolidPattern);
    palette2.setBrush(QPalette::Active, QPalette::Mid, brush107);
    QBrush brush108(QColor(0, 0, 0, 255));
    brush108.setStyle(Qt::SolidPattern);
    palette2.setBrush(QPalette::Active, QPalette::Text, brush108);
    QBrush brush109(QColor(255, 255, 255, 255));
    brush109.setStyle(Qt::SolidPattern);
    palette2.setBrush(QPalette::Active, QPalette::BrightText, brush109);
    QBrush brush110(QColor(0, 0, 0, 255));
    brush110.setStyle(Qt::SolidPattern);
    palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush110);
    QBrush brush111(QColor(0, 0, 255, 255));
    brush111.setStyle(Qt::SolidPattern);
    palette2.setBrush(QPalette::Active, QPalette::Base, brush111);
    QBrush brush112(QColor(0, 0, 255, 255));
    brush112.setStyle(Qt::SolidPattern);
    palette2.setBrush(QPalette::Active, QPalette::Window, brush112);
    QBrush brush113(QColor(0, 0, 0, 255));
    brush113.setStyle(Qt::SolidPattern);
    palette2.setBrush(QPalette::Active, QPalette::Shadow, brush113);
    QBrush brush114(QColor(103, 141, 178, 255));
    brush114.setStyle(Qt::SolidPattern);
    palette2.setBrush(QPalette::Active, QPalette::Highlight, brush114);
    QBrush brush115(QColor(255, 255, 255, 255));
    brush115.setStyle(Qt::SolidPattern);
    palette2.setBrush(QPalette::Active, QPalette::HighlightedText, brush115);
    QBrush brush116(QColor(0, 0, 238, 255));
    brush116.setStyle(Qt::SolidPattern);
    palette2.setBrush(QPalette::Active, QPalette::Link, brush116);
    QBrush brush117(QColor(82, 24, 139, 255));
    brush117.setStyle(Qt::SolidPattern);
    palette2.setBrush(QPalette::Active, QPalette::LinkVisited, brush117);
    QBrush brush118(QColor(232, 232, 232, 255));
    brush118.setStyle(Qt::SolidPattern);
    palette2.setBrush(QPalette::Active, QPalette::AlternateBase, brush118);
    QBrush brush119(QColor(0, 0, 0, 255));
    brush119.setStyle(Qt::SolidPattern);
    palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush119);
    QBrush brush120(QColor(221, 223, 228, 255));
    brush120.setStyle(Qt::SolidPattern);
    palette2.setBrush(QPalette::Inactive, QPalette::Button, brush120);
    QBrush brush121(QColor(255, 255, 255, 255));
    brush121.setStyle(Qt::SolidPattern);
    palette2.setBrush(QPalette::Inactive, QPalette::Light, brush121);
    QBrush brush122(QColor(255, 255, 255, 255));
    brush122.setStyle(Qt::SolidPattern);
    palette2.setBrush(QPalette::Inactive, QPalette::Midlight, brush122);
    QBrush brush123(QColor(85, 85, 85, 255));
    brush123.setStyle(Qt::SolidPattern);
    palette2.setBrush(QPalette::Inactive, QPalette::Dark, brush123);
    QBrush brush124(QColor(199, 199, 199, 255));
    brush124.setStyle(Qt::SolidPattern);
    palette2.setBrush(QPalette::Inactive, QPalette::Mid, brush124);
    QBrush brush125(QColor(0, 0, 0, 255));
    brush125.setStyle(Qt::SolidPattern);
    palette2.setBrush(QPalette::Inactive, QPalette::Text, brush125);
    QBrush brush126(QColor(255, 255, 255, 255));
    brush126.setStyle(Qt::SolidPattern);
    palette2.setBrush(QPalette::Inactive, QPalette::BrightText, brush126);
    QBrush brush127(QColor(0, 0, 0, 255));
    brush127.setStyle(Qt::SolidPattern);
    palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush127);
    QBrush brush128(QColor(0, 0, 255, 255));
    brush128.setStyle(Qt::SolidPattern);
    palette2.setBrush(QPalette::Inactive, QPalette::Base, brush128);
    QBrush brush129(QColor(0, 0, 255, 255));
    brush129.setStyle(Qt::SolidPattern);
    palette2.setBrush(QPalette::Inactive, QPalette::Window, brush129);
    QBrush brush130(QColor(0, 0, 0, 255));
    brush130.setStyle(Qt::SolidPattern);
    palette2.setBrush(QPalette::Inactive, QPalette::Shadow, brush130);
    QBrush brush131(QColor(103, 141, 178, 255));
    brush131.setStyle(Qt::SolidPattern);
    palette2.setBrush(QPalette::Inactive, QPalette::Highlight, brush131);
    QBrush brush132(QColor(255, 255, 255, 255));
    brush132.setStyle(Qt::SolidPattern);
    palette2.setBrush(QPalette::Inactive, QPalette::HighlightedText, brush132);
    QBrush brush133(QColor(0, 0, 238, 255));
    brush133.setStyle(Qt::SolidPattern);
    palette2.setBrush(QPalette::Inactive, QPalette::Link, brush133);
    QBrush brush134(QColor(82, 24, 139, 255));
    brush134.setStyle(Qt::SolidPattern);
    palette2.setBrush(QPalette::Inactive, QPalette::LinkVisited, brush134);
    QBrush brush135(QColor(232, 232, 232, 255));
    brush135.setStyle(Qt::SolidPattern);
    palette2.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush135);
    QBrush brush136(QColor(128, 128, 128, 255));
    brush136.setStyle(Qt::SolidPattern);
    palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush136);
    QBrush brush137(QColor(221, 223, 228, 255));
    brush137.setStyle(Qt::SolidPattern);
    palette2.setBrush(QPalette::Disabled, QPalette::Button, brush137);
    QBrush brush138(QColor(255, 255, 255, 255));
    brush138.setStyle(Qt::SolidPattern);
    palette2.setBrush(QPalette::Disabled, QPalette::Light, brush138);
    QBrush brush139(QColor(255, 255, 255, 255));
    brush139.setStyle(Qt::SolidPattern);
    palette2.setBrush(QPalette::Disabled, QPalette::Midlight, brush139);
    QBrush brush140(QColor(85, 85, 85, 255));
    brush140.setStyle(Qt::SolidPattern);
    palette2.setBrush(QPalette::Disabled, QPalette::Dark, brush140);
    QBrush brush141(QColor(199, 199, 199, 255));
    brush141.setStyle(Qt::SolidPattern);
    palette2.setBrush(QPalette::Disabled, QPalette::Mid, brush141);
    QBrush brush142(QColor(199, 199, 199, 255));
    brush142.setStyle(Qt::SolidPattern);
    palette2.setBrush(QPalette::Disabled, QPalette::Text, brush142);
    QBrush brush143(QColor(255, 255, 255, 255));
    brush143.setStyle(Qt::SolidPattern);
    palette2.setBrush(QPalette::Disabled, QPalette::BrightText, brush143);
    QBrush brush144(QColor(128, 128, 128, 255));
    brush144.setStyle(Qt::SolidPattern);
    palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush144);
    QBrush brush145(QColor(0, 0, 255, 255));
    brush145.setStyle(Qt::SolidPattern);
    palette2.setBrush(QPalette::Disabled, QPalette::Base, brush145);
    QBrush brush146(QColor(0, 0, 255, 255));
    brush146.setStyle(Qt::SolidPattern);
    palette2.setBrush(QPalette::Disabled, QPalette::Window, brush146);
    QBrush brush147(QColor(0, 0, 0, 255));
    brush147.setStyle(Qt::SolidPattern);
    palette2.setBrush(QPalette::Disabled, QPalette::Shadow, brush147);
    QBrush brush148(QColor(86, 117, 148, 255));
    brush148.setStyle(Qt::SolidPattern);
    palette2.setBrush(QPalette::Disabled, QPalette::Highlight, brush148);
    QBrush brush149(QColor(255, 255, 255, 255));
    brush149.setStyle(Qt::SolidPattern);
    palette2.setBrush(QPalette::Disabled, QPalette::HighlightedText, brush149);
    QBrush brush150(QColor(0, 0, 238, 255));
    brush150.setStyle(Qt::SolidPattern);
    palette2.setBrush(QPalette::Disabled, QPalette::Link, brush150);
    QBrush brush151(QColor(82, 24, 139, 255));
    brush151.setStyle(Qt::SolidPattern);
    palette2.setBrush(QPalette::Disabled, QPalette::LinkVisited, brush151);
    QBrush brush152(QColor(232, 232, 232, 255));
    brush152.setStyle(Qt::SolidPattern);
    palette2.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush152);
    max_label->setPalette(palette2);
    max_label->setAutoFillBackground(true);
    max_label->setFrameShape(QFrame::Panel);

    gridLayout1->addWidget(max_label, 5, 4, 1, 1);

    max_max_label = new QLabel(groupBox);
    max_max_label->setObjectName(QString::fromUtf8("max_max_label"));
    max_max_label->setMinimumSize(QSize(0, 28));
    max_max_label->setMaximumSize(QSize(32767, 28));
    QPalette palette3;
    QBrush brush153(QColor(0, 0, 0, 255));
    brush153.setStyle(Qt::SolidPattern);
    palette3.setBrush(QPalette::Active, QPalette::WindowText, brush153);
    QBrush brush154(QColor(221, 223, 228, 255));
    brush154.setStyle(Qt::SolidPattern);
    palette3.setBrush(QPalette::Active, QPalette::Button, brush154);
    QBrush brush155(QColor(255, 255, 255, 255));
    brush155.setStyle(Qt::SolidPattern);
    palette3.setBrush(QPalette::Active, QPalette::Light, brush155);
    QBrush brush156(QColor(255, 255, 255, 255));
    brush156.setStyle(Qt::SolidPattern);
    palette3.setBrush(QPalette::Active, QPalette::Midlight, brush156);
    QBrush brush157(QColor(85, 85, 85, 255));
    brush157.setStyle(Qt::SolidPattern);
    palette3.setBrush(QPalette::Active, QPalette::Dark, brush157);
    QBrush brush158(QColor(199, 199, 199, 255));
    brush158.setStyle(Qt::SolidPattern);
    palette3.setBrush(QPalette::Active, QPalette::Mid, brush158);
    QBrush brush159(QColor(0, 0, 0, 255));
    brush159.setStyle(Qt::SolidPattern);
    palette3.setBrush(QPalette::Active, QPalette::Text, brush159);
    QBrush brush160(QColor(255, 255, 255, 255));
    brush160.setStyle(Qt::SolidPattern);
    palette3.setBrush(QPalette::Active, QPalette::BrightText, brush160);
    QBrush brush161(QColor(0, 0, 0, 255));
    brush161.setStyle(Qt::SolidPattern);
    palette3.setBrush(QPalette::Active, QPalette::ButtonText, brush161);
    QBrush brush162(QColor(0, 85, 255, 255));
    brush162.setStyle(Qt::SolidPattern);
    palette3.setBrush(QPalette::Active, QPalette::Base, brush162);
    QBrush brush163(QColor(0, 85, 255, 255));
    brush163.setStyle(Qt::SolidPattern);
    palette3.setBrush(QPalette::Active, QPalette::Window, brush163);
    QBrush brush164(QColor(0, 0, 0, 255));
    brush164.setStyle(Qt::SolidPattern);
    palette3.setBrush(QPalette::Active, QPalette::Shadow, brush164);
    QBrush brush165(QColor(103, 141, 178, 255));
    brush165.setStyle(Qt::SolidPattern);
    palette3.setBrush(QPalette::Active, QPalette::Highlight, brush165);
    QBrush brush166(QColor(255, 255, 255, 255));
    brush166.setStyle(Qt::SolidPattern);
    palette3.setBrush(QPalette::Active, QPalette::HighlightedText, brush166);
    QBrush brush167(QColor(0, 0, 238, 255));
    brush167.setStyle(Qt::SolidPattern);
    palette3.setBrush(QPalette::Active, QPalette::Link, brush167);
    QBrush brush168(QColor(82, 24, 139, 255));
    brush168.setStyle(Qt::SolidPattern);
    palette3.setBrush(QPalette::Active, QPalette::LinkVisited, brush168);
    QBrush brush169(QColor(232, 232, 232, 255));
    brush169.setStyle(Qt::SolidPattern);
    palette3.setBrush(QPalette::Active, QPalette::AlternateBase, brush169);
    QBrush brush170(QColor(0, 0, 0, 255));
    brush170.setStyle(Qt::SolidPattern);
    palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush170);
    QBrush brush171(QColor(221, 223, 228, 255));
    brush171.setStyle(Qt::SolidPattern);
    palette3.setBrush(QPalette::Inactive, QPalette::Button, brush171);
    QBrush brush172(QColor(255, 255, 255, 255));
    brush172.setStyle(Qt::SolidPattern);
    palette3.setBrush(QPalette::Inactive, QPalette::Light, brush172);
    QBrush brush173(QColor(255, 255, 255, 255));
    brush173.setStyle(Qt::SolidPattern);
    palette3.setBrush(QPalette::Inactive, QPalette::Midlight, brush173);
    QBrush brush174(QColor(85, 85, 85, 255));
    brush174.setStyle(Qt::SolidPattern);
    palette3.setBrush(QPalette::Inactive, QPalette::Dark, brush174);
    QBrush brush175(QColor(199, 199, 199, 255));
    brush175.setStyle(Qt::SolidPattern);
    palette3.setBrush(QPalette::Inactive, QPalette::Mid, brush175);
    QBrush brush176(QColor(0, 0, 0, 255));
    brush176.setStyle(Qt::SolidPattern);
    palette3.setBrush(QPalette::Inactive, QPalette::Text, brush176);
    QBrush brush177(QColor(255, 255, 255, 255));
    brush177.setStyle(Qt::SolidPattern);
    palette3.setBrush(QPalette::Inactive, QPalette::BrightText, brush177);
    QBrush brush178(QColor(0, 0, 0, 255));
    brush178.setStyle(Qt::SolidPattern);
    palette3.setBrush(QPalette::Inactive, QPalette::ButtonText, brush178);
    QBrush brush179(QColor(0, 85, 255, 255));
    brush179.setStyle(Qt::SolidPattern);
    palette3.setBrush(QPalette::Inactive, QPalette::Base, brush179);
    QBrush brush180(QColor(0, 85, 255, 255));
    brush180.setStyle(Qt::SolidPattern);
    palette3.setBrush(QPalette::Inactive, QPalette::Window, brush180);
    QBrush brush181(QColor(0, 0, 0, 255));
    brush181.setStyle(Qt::SolidPattern);
    palette3.setBrush(QPalette::Inactive, QPalette::Shadow, brush181);
    QBrush brush182(QColor(103, 141, 178, 255));
    brush182.setStyle(Qt::SolidPattern);
    palette3.setBrush(QPalette::Inactive, QPalette::Highlight, brush182);
    QBrush brush183(QColor(255, 255, 255, 255));
    brush183.setStyle(Qt::SolidPattern);
    palette3.setBrush(QPalette::Inactive, QPalette::HighlightedText, brush183);
    QBrush brush184(QColor(0, 0, 238, 255));
    brush184.setStyle(Qt::SolidPattern);
    palette3.setBrush(QPalette::Inactive, QPalette::Link, brush184);
    QBrush brush185(QColor(82, 24, 139, 255));
    brush185.setStyle(Qt::SolidPattern);
    palette3.setBrush(QPalette::Inactive, QPalette::LinkVisited, brush185);
    QBrush brush186(QColor(232, 232, 232, 255));
    brush186.setStyle(Qt::SolidPattern);
    palette3.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush186);
    QBrush brush187(QColor(128, 128, 128, 255));
    brush187.setStyle(Qt::SolidPattern);
    palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush187);
    QBrush brush188(QColor(221, 223, 228, 255));
    brush188.setStyle(Qt::SolidPattern);
    palette3.setBrush(QPalette::Disabled, QPalette::Button, brush188);
    QBrush brush189(QColor(255, 255, 255, 255));
    brush189.setStyle(Qt::SolidPattern);
    palette3.setBrush(QPalette::Disabled, QPalette::Light, brush189);
    QBrush brush190(QColor(255, 255, 255, 255));
    brush190.setStyle(Qt::SolidPattern);
    palette3.setBrush(QPalette::Disabled, QPalette::Midlight, brush190);
    QBrush brush191(QColor(85, 85, 85, 255));
    brush191.setStyle(Qt::SolidPattern);
    palette3.setBrush(QPalette::Disabled, QPalette::Dark, brush191);
    QBrush brush192(QColor(199, 199, 199, 255));
    brush192.setStyle(Qt::SolidPattern);
    palette3.setBrush(QPalette::Disabled, QPalette::Mid, brush192);
    QBrush brush193(QColor(199, 199, 199, 255));
    brush193.setStyle(Qt::SolidPattern);
    palette3.setBrush(QPalette::Disabled, QPalette::Text, brush193);
    QBrush brush194(QColor(255, 255, 255, 255));
    brush194.setStyle(Qt::SolidPattern);
    palette3.setBrush(QPalette::Disabled, QPalette::BrightText, brush194);
    QBrush brush195(QColor(128, 128, 128, 255));
    brush195.setStyle(Qt::SolidPattern);
    palette3.setBrush(QPalette::Disabled, QPalette::ButtonText, brush195);
    QBrush brush196(QColor(0, 85, 255, 255));
    brush196.setStyle(Qt::SolidPattern);
    palette3.setBrush(QPalette::Disabled, QPalette::Base, brush196);
    QBrush brush197(QColor(0, 85, 255, 255));
    brush197.setStyle(Qt::SolidPattern);
    palette3.setBrush(QPalette::Disabled, QPalette::Window, brush197);
    QBrush brush198(QColor(0, 0, 0, 255));
    brush198.setStyle(Qt::SolidPattern);
    palette3.setBrush(QPalette::Disabled, QPalette::Shadow, brush198);
    QBrush brush199(QColor(86, 117, 148, 255));
    brush199.setStyle(Qt::SolidPattern);
    palette3.setBrush(QPalette::Disabled, QPalette::Highlight, brush199);
    QBrush brush200(QColor(255, 255, 255, 255));
    brush200.setStyle(Qt::SolidPattern);
    palette3.setBrush(QPalette::Disabled, QPalette::HighlightedText, brush200);
    QBrush brush201(QColor(0, 0, 238, 255));
    brush201.setStyle(Qt::SolidPattern);
    palette3.setBrush(QPalette::Disabled, QPalette::Link, brush201);
    QBrush brush202(QColor(82, 24, 139, 255));
    brush202.setStyle(Qt::SolidPattern);
    palette3.setBrush(QPalette::Disabled, QPalette::LinkVisited, brush202);
    QBrush brush203(QColor(232, 232, 232, 255));
    brush203.setStyle(Qt::SolidPattern);
    palette3.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush203);
    max_max_label->setPalette(palette3);
    max_max_label->setAutoFillBackground(true);
    max_max_label->setFrameShape(QFrame::Panel);

    gridLayout1->addWidget(max_max_label, 5, 5, 1, 1);

    max_max_button = new QPushButton(groupBox);
    max_max_button->setObjectName(QString::fromUtf8("max_max_button"));
    max_max_button->setMinimumSize(QSize(0, 28));
    max_max_button->setMaximumSize(QSize(32767, 28));

    gridLayout1->addWidget(max_max_button, 6, 5, 1, 1);

    max_button = new QPushButton(groupBox);
    max_button->setObjectName(QString::fromUtf8("max_button"));
    max_button->setMinimumSize(QSize(0, 28));
    max_button->setMaximumSize(QSize(32767, 28));

    gridLayout1->addWidget(max_button, 6, 4, 1, 1);

    mid_button = new QPushButton(groupBox);
    mid_button->setObjectName(QString::fromUtf8("mid_button"));
    mid_button->setMinimumSize(QSize(0, 28));
    mid_button->setMaximumSize(QSize(32767, 28));

    gridLayout1->addWidget(mid_button, 6, 3, 1, 1);

    mid_label = new QLabel(groupBox);
    mid_label->setObjectName(QString::fromUtf8("mid_label"));
    mid_label->setMinimumSize(QSize(0, 28));
    mid_label->setMaximumSize(QSize(32767, 28));
    QPalette palette4;
    QBrush brush204(QColor(0, 0, 0, 255));
    brush204.setStyle(Qt::SolidPattern);
    palette4.setBrush(QPalette::Active, QPalette::WindowText, brush204);
    QBrush brush205(QColor(221, 223, 228, 255));
    brush205.setStyle(Qt::SolidPattern);
    palette4.setBrush(QPalette::Active, QPalette::Button, brush205);
    QBrush brush206(QColor(255, 255, 255, 255));
    brush206.setStyle(Qt::SolidPattern);
    palette4.setBrush(QPalette::Active, QPalette::Light, brush206);
    QBrush brush207(QColor(255, 255, 255, 255));
    brush207.setStyle(Qt::SolidPattern);
    palette4.setBrush(QPalette::Active, QPalette::Midlight, brush207);
    QBrush brush208(QColor(85, 85, 85, 255));
    brush208.setStyle(Qt::SolidPattern);
    palette4.setBrush(QPalette::Active, QPalette::Dark, brush208);
    QBrush brush209(QColor(199, 199, 199, 255));
    brush209.setStyle(Qt::SolidPattern);
    palette4.setBrush(QPalette::Active, QPalette::Mid, brush209);
    QBrush brush210(QColor(0, 0, 0, 255));
    brush210.setStyle(Qt::SolidPattern);
    palette4.setBrush(QPalette::Active, QPalette::Text, brush210);
    QBrush brush211(QColor(255, 255, 255, 255));
    brush211.setStyle(Qt::SolidPattern);
    palette4.setBrush(QPalette::Active, QPalette::BrightText, brush211);
    QBrush brush212(QColor(0, 0, 0, 255));
    brush212.setStyle(Qt::SolidPattern);
    palette4.setBrush(QPalette::Active, QPalette::ButtonText, brush212);
    QBrush brush213(QColor(255, 255, 255, 255));
    brush213.setStyle(Qt::SolidPattern);
    palette4.setBrush(QPalette::Active, QPalette::Base, brush213);
    QBrush brush214(QColor(255, 255, 255, 255));
    brush214.setStyle(Qt::SolidPattern);
    palette4.setBrush(QPalette::Active, QPalette::Window, brush214);
    QBrush brush215(QColor(0, 0, 0, 255));
    brush215.setStyle(Qt::SolidPattern);
    palette4.setBrush(QPalette::Active, QPalette::Shadow, brush215);
    QBrush brush216(QColor(103, 141, 178, 255));
    brush216.setStyle(Qt::SolidPattern);
    palette4.setBrush(QPalette::Active, QPalette::Highlight, brush216);
    QBrush brush217(QColor(255, 255, 255, 255));
    brush217.setStyle(Qt::SolidPattern);
    palette4.setBrush(QPalette::Active, QPalette::HighlightedText, brush217);
    QBrush brush218(QColor(0, 0, 238, 255));
    brush218.setStyle(Qt::SolidPattern);
    palette4.setBrush(QPalette::Active, QPalette::Link, brush218);
    QBrush brush219(QColor(82, 24, 139, 255));
    brush219.setStyle(Qt::SolidPattern);
    palette4.setBrush(QPalette::Active, QPalette::LinkVisited, brush219);
    QBrush brush220(QColor(232, 232, 232, 255));
    brush220.setStyle(Qt::SolidPattern);
    palette4.setBrush(QPalette::Active, QPalette::AlternateBase, brush220);
    QBrush brush221(QColor(0, 0, 0, 255));
    brush221.setStyle(Qt::SolidPattern);
    palette4.setBrush(QPalette::Inactive, QPalette::WindowText, brush221);
    QBrush brush222(QColor(221, 223, 228, 255));
    brush222.setStyle(Qt::SolidPattern);
    palette4.setBrush(QPalette::Inactive, QPalette::Button, brush222);
    QBrush brush223(QColor(255, 255, 255, 255));
    brush223.setStyle(Qt::SolidPattern);
    palette4.setBrush(QPalette::Inactive, QPalette::Light, brush223);
    QBrush brush224(QColor(255, 255, 255, 255));
    brush224.setStyle(Qt::SolidPattern);
    palette4.setBrush(QPalette::Inactive, QPalette::Midlight, brush224);
    QBrush brush225(QColor(85, 85, 85, 255));
    brush225.setStyle(Qt::SolidPattern);
    palette4.setBrush(QPalette::Inactive, QPalette::Dark, brush225);
    QBrush brush226(QColor(199, 199, 199, 255));
    brush226.setStyle(Qt::SolidPattern);
    palette4.setBrush(QPalette::Inactive, QPalette::Mid, brush226);
    QBrush brush227(QColor(0, 0, 0, 255));
    brush227.setStyle(Qt::SolidPattern);
    palette4.setBrush(QPalette::Inactive, QPalette::Text, brush227);
    QBrush brush228(QColor(255, 255, 255, 255));
    brush228.setStyle(Qt::SolidPattern);
    palette4.setBrush(QPalette::Inactive, QPalette::BrightText, brush228);
    QBrush brush229(QColor(0, 0, 0, 255));
    brush229.setStyle(Qt::SolidPattern);
    palette4.setBrush(QPalette::Inactive, QPalette::ButtonText, brush229);
    QBrush brush230(QColor(255, 255, 255, 255));
    brush230.setStyle(Qt::SolidPattern);
    palette4.setBrush(QPalette::Inactive, QPalette::Base, brush230);
    QBrush brush231(QColor(255, 255, 255, 255));
    brush231.setStyle(Qt::SolidPattern);
    palette4.setBrush(QPalette::Inactive, QPalette::Window, brush231);
    QBrush brush232(QColor(0, 0, 0, 255));
    brush232.setStyle(Qt::SolidPattern);
    palette4.setBrush(QPalette::Inactive, QPalette::Shadow, brush232);
    QBrush brush233(QColor(103, 141, 178, 255));
    brush233.setStyle(Qt::SolidPattern);
    palette4.setBrush(QPalette::Inactive, QPalette::Highlight, brush233);
    QBrush brush234(QColor(255, 255, 255, 255));
    brush234.setStyle(Qt::SolidPattern);
    palette4.setBrush(QPalette::Inactive, QPalette::HighlightedText, brush234);
    QBrush brush235(QColor(0, 0, 238, 255));
    brush235.setStyle(Qt::SolidPattern);
    palette4.setBrush(QPalette::Inactive, QPalette::Link, brush235);
    QBrush brush236(QColor(82, 24, 139, 255));
    brush236.setStyle(Qt::SolidPattern);
    palette4.setBrush(QPalette::Inactive, QPalette::LinkVisited, brush236);
    QBrush brush237(QColor(232, 232, 232, 255));
    brush237.setStyle(Qt::SolidPattern);
    palette4.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush237);
    QBrush brush238(QColor(128, 128, 128, 255));
    brush238.setStyle(Qt::SolidPattern);
    palette4.setBrush(QPalette::Disabled, QPalette::WindowText, brush238);
    QBrush brush239(QColor(221, 223, 228, 255));
    brush239.setStyle(Qt::SolidPattern);
    palette4.setBrush(QPalette::Disabled, QPalette::Button, brush239);
    QBrush brush240(QColor(255, 255, 255, 255));
    brush240.setStyle(Qt::SolidPattern);
    palette4.setBrush(QPalette::Disabled, QPalette::Light, brush240);
    QBrush brush241(QColor(255, 255, 255, 255));
    brush241.setStyle(Qt::SolidPattern);
    palette4.setBrush(QPalette::Disabled, QPalette::Midlight, brush241);
    QBrush brush242(QColor(85, 85, 85, 255));
    brush242.setStyle(Qt::SolidPattern);
    palette4.setBrush(QPalette::Disabled, QPalette::Dark, brush242);
    QBrush brush243(QColor(199, 199, 199, 255));
    brush243.setStyle(Qt::SolidPattern);
    palette4.setBrush(QPalette::Disabled, QPalette::Mid, brush243);
    QBrush brush244(QColor(199, 199, 199, 255));
    brush244.setStyle(Qt::SolidPattern);
    palette4.setBrush(QPalette::Disabled, QPalette::Text, brush244);
    QBrush brush245(QColor(255, 255, 255, 255));
    brush245.setStyle(Qt::SolidPattern);
    palette4.setBrush(QPalette::Disabled, QPalette::BrightText, brush245);
    QBrush brush246(QColor(128, 128, 128, 255));
    brush246.setStyle(Qt::SolidPattern);
    palette4.setBrush(QPalette::Disabled, QPalette::ButtonText, brush246);
    QBrush brush247(QColor(255, 255, 255, 255));
    brush247.setStyle(Qt::SolidPattern);
    palette4.setBrush(QPalette::Disabled, QPalette::Base, brush247);
    QBrush brush248(QColor(255, 255, 255, 255));
    brush248.setStyle(Qt::SolidPattern);
    palette4.setBrush(QPalette::Disabled, QPalette::Window, brush248);
    QBrush brush249(QColor(0, 0, 0, 255));
    brush249.setStyle(Qt::SolidPattern);
    palette4.setBrush(QPalette::Disabled, QPalette::Shadow, brush249);
    QBrush brush250(QColor(86, 117, 148, 255));
    brush250.setStyle(Qt::SolidPattern);
    palette4.setBrush(QPalette::Disabled, QPalette::Highlight, brush250);
    QBrush brush251(QColor(255, 255, 255, 255));
    brush251.setStyle(Qt::SolidPattern);
    palette4.setBrush(QPalette::Disabled, QPalette::HighlightedText, brush251);
    QBrush brush252(QColor(0, 0, 238, 255));
    brush252.setStyle(Qt::SolidPattern);
    palette4.setBrush(QPalette::Disabled, QPalette::Link, brush252);
    QBrush brush253(QColor(82, 24, 139, 255));
    brush253.setStyle(Qt::SolidPattern);
    palette4.setBrush(QPalette::Disabled, QPalette::LinkVisited, brush253);
    QBrush brush254(QColor(232, 232, 232, 255));
    brush254.setStyle(Qt::SolidPattern);
    palette4.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush254);
    mid_label->setPalette(palette4);
    mid_label->setAutoFillBackground(true);
    mid_label->setFrameShape(QFrame::Panel);

    gridLayout1->addWidget(mid_label, 5, 3, 1, 1);

    mid_alpha = new QSpinBox(groupBox);
    mid_alpha->setObjectName(QString::fromUtf8("mid_alpha"));
    mid_alpha->setEnabled(true);
    mid_alpha->setMinimumSize(QSize(84, 24));
    mid_alpha->setMaximumSize(QSize(84, 24));
    mid_alpha->setMaximum(255);
    mid_alpha->setValue(0);

    gridLayout1->addWidget(mid_alpha, 7, 3, 1, 1);

    max_alpha = new QSpinBox(groupBox);
    max_alpha->setObjectName(QString::fromUtf8("max_alpha"));
    max_alpha->setEnabled(true);
    max_alpha->setMinimumSize(QSize(84, 24));
    max_alpha->setMaximumSize(QSize(84, 24));
    max_alpha->setMaximum(255);
    max_alpha->setValue(90);

    gridLayout1->addWidget(max_alpha, 7, 4, 1, 1);

    max_max_alpha = new QSpinBox(groupBox);
    max_max_alpha->setObjectName(QString::fromUtf8("max_max_alpha"));
    max_max_alpha->setEnabled(true);
    max_max_alpha->setMinimumSize(QSize(84, 24));
    max_max_alpha->setMaximumSize(QSize(84, 24));
    max_max_alpha->setMaximum(255);
    max_max_alpha->setValue(255);

    gridLayout1->addWidget(max_max_alpha, 7, 5, 1, 1);

    TextLabel13 = new QLabel(groupBox);
    TextLabel13->setObjectName(QString::fromUtf8("TextLabel13"));
    TextLabel13->setMaximumSize(QSize(32767, 18));
    TextLabel13->setAlignment(Qt::AlignCenter);

    gridLayout1->addWidget(TextLabel13, 3, 5, 2, 1);

    TextLabel15 = new QLabel(groupBox);
    TextLabel15->setObjectName(QString::fromUtf8("TextLabel15"));
    TextLabel15->setMaximumSize(QSize(32767, 18));
    TextLabel15->setAlignment(Qt::AlignCenter);

    gridLayout1->addWidget(TextLabel15, 3, 4, 2, 1);

    TextLabel14_2 = new QLabel(groupBox);
    TextLabel14_2->setObjectName(QString::fromUtf8("TextLabel14_2"));
    TextLabel14_2->setMaximumSize(QSize(32767, 18));
    TextLabel14_2->setAlignment(Qt::AlignCenter);

    gridLayout1->addWidget(TextLabel14_2, 3, 3, 2, 1);

    TextLabel14 = new QLabel(groupBox);
    TextLabel14->setObjectName(QString::fromUtf8("TextLabel14"));
    TextLabel14->setMaximumSize(QSize(32767, 18));
    TextLabel14->setAlignment(Qt::AlignCenter);

    gridLayout1->addWidget(TextLabel14, 3, 2, 2, 1);

    max_box = new QLineEdit(groupBox);
    max_box->setObjectName(QString::fromUtf8("max_box"));
    max_box->setMinimumSize(QSize(84, 24));
    max_box->setMaximumSize(QSize(84, 24));
    max_box->setAlignment(Qt::AlignRight);

    gridLayout1->addWidget(max_box, 1, 4, 1, 1);

    mid_box = new QLineEdit(groupBox);
    mid_box->setObjectName(QString::fromUtf8("mid_box"));
    mid_box->setMinimumSize(QSize(84, 24));
    mid_box->setMaximumSize(QSize(84, 24));
    mid_box->setAlignment(Qt::AlignRight);

    gridLayout1->addWidget(mid_box, 1, 3, 1, 1);

    autoscale = new QPushButton(groupBox);
    autoscale->setObjectName(QString::fromUtf8("autoscale"));
    autoscale->setEnabled(true);
    autoscale->setMinimumSize(QSize(0, 25));
    autoscale->setMaximumSize(QSize(32767, 24));

    gridLayout1->addWidget(autoscale, 1, 5, 1, 1);

    min_box = new QLineEdit(groupBox);
    min_box->setObjectName(QString::fromUtf8("min_box"));
    min_box->setMinimumSize(QSize(84, 24));
    min_box->setMaximumSize(QSize(84, 24));
    min_box->setAlignment(Qt::AlignRight);

    gridLayout1->addWidget(min_box, 1, 2, 1, 1);

    hboxLayout = new QHBoxLayout();
    hboxLayout->setSpacing(6);
    hboxLayout->setMargin(2);
    hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
    TextLabel7 = new QLabel(groupBox);
    TextLabel7->setObjectName(QString::fromUtf8("TextLabel7"));
    TextLabel7->setMinimumSize(QSize(0, 22));
    TextLabel7->setMaximumSize(QSize(32767, 22));
    TextLabel7->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

    hboxLayout->addWidget(TextLabel7);

    levels_box = new QSpinBox(groupBox);
    levels_box->setObjectName(QString::fromUtf8("levels_box"));
    levels_box->setMinimumSize(QSize(50, 24));
    levels_box->setMaximumSize(QSize(84, 24));
    levels_box->setMaximum(999);
    levels_box->setValue(99);

    hboxLayout->addWidget(levels_box);


    gridLayout1->addLayout(hboxLayout, 8, 1, 1, 3);


    gridLayout->addWidget(groupBox, 1, 0, 1, 2);

    groupBox_3 = new QGroupBox(GridVisualizationDialogData);
    groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
    gridLayout2 = new QGridLayout(groupBox_3);
    gridLayout2->setSpacing(6);
    gridLayout2->setMargin(4);
    gridLayout2->setObjectName(QString::fromUtf8("gridLayout2"));
    normalization = new QCheckBox(groupBox_3);
    normalization->setObjectName(QString::fromUtf8("normalization"));
    normalization->setMinimumSize(QSize(0, 25));
    normalization->setLayoutDirection(Qt::LeftToRight);

    gridLayout2->addWidget(normalization, 1, 1, 1, 1);

    resize_needed = new QCheckBox(groupBox_3);
    resize_needed->setObjectName(QString::fromUtf8("resize_needed"));
    resize_needed->setEnabled(false);

    gridLayout2->addWidget(resize_needed, 1, 0, 1, 1);

    grids = new QComboBox(groupBox_3);
    grids->setObjectName(QString::fromUtf8("grids"));
    QSizePolicy sizePolicy2(static_cast<QSizePolicy::Policy>(7), static_cast<QSizePolicy::Policy>(0));
    sizePolicy2.setHorizontalStretch(0);
    sizePolicy2.setVerticalStretch(0);
    sizePolicy2.setHeightForWidth(grids->sizePolicy().hasHeightForWidth());
    grids->setSizePolicy(sizePolicy2);

    gridLayout2->addWidget(grids, 0, 0, 1, 2);


    gridLayout->addWidget(groupBox_3, 0, 0, 1, 2);

    groupBox_2 = new QGroupBox(GridVisualizationDialogData);
    groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
    QSizePolicy sizePolicy3(static_cast<QSizePolicy::Policy>(7), static_cast<QSizePolicy::Policy>(5));
    sizePolicy3.setHorizontalStretch(0);
    sizePolicy3.setVerticalStretch(0);
    sizePolicy3.setHeightForWidth(groupBox_2->sizePolicy().hasHeightForWidth());
    groupBox_2->setSizePolicy(sizePolicy3);
    gridLayout3 = new QGridLayout(groupBox_2);
    gridLayout3->setSpacing(4);
    gridLayout3->setMargin(4);
    gridLayout3->setObjectName(QString::fromUtf8("gridLayout3"));
    mode_tab = new QTabWidget(groupBox_2);
    mode_tab->setObjectName(QString::fromUtf8("mode_tab"));
    mode_tab->setEnabled(true);
    Plane = new QWidget();
    Plane->setObjectName(QString::fromUtf8("Plane"));
    transparency = new QCheckBox(Plane);
    transparency->setObjectName(QString::fromUtf8("transparency"));
    transparency->setGeometry(QRect(10, 10, 154, 24));
    mode_tab->addTab(Plane, QApplication::translate("GridVisualizationDialogData", "Plane", 0, QApplication::UnicodeUTF8));
    Dots = new QWidget();
    Dots->setObjectName(QString::fromUtf8("Dots"));
    gridLayout4 = new QGridLayout(Dots);
    gridLayout4->setSpacing(6);
    gridLayout4->setMargin(9);
    gridLayout4->setObjectName(QString::fromUtf8("gridLayout4"));
    dot_size = new QSpinBox(Dots);
    dot_size->setObjectName(QString::fromUtf8("dot_size"));
    dot_size->setMaximum(5);
    dot_size->setMinimum(1);
    dot_size->setValue(1);

    gridLayout4->addWidget(dot_size, 1, 1, 1, 1);

    label_2 = new QLabel(Dots);
    label_2->setObjectName(QString::fromUtf8("label_2"));
    QSizePolicy sizePolicy4(static_cast<QSizePolicy::Policy>(1), static_cast<QSizePolicy::Policy>(5));
    sizePolicy4.setHorizontalStretch(0);
    sizePolicy4.setVerticalStretch(0);
    sizePolicy4.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
    label_2->setSizePolicy(sizePolicy4);
    label_2->setMaximumSize(QSize(66666, 16777215));
    label_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

    gridLayout4->addWidget(label_2, 1, 0, 1, 1);

    number_dots = new QSpinBox(Dots);
    number_dots->setObjectName(QString::fromUtf8("number_dots"));
    number_dots->setMaximum(999999);
    number_dots->setMinimum(1);
    number_dots->setValue(99999);

    gridLayout4->addWidget(number_dots, 0, 1, 1, 1);

    label_3 = new QLabel(Dots);
    label_3->setObjectName(QString::fromUtf8("label_3"));
    QSizePolicy sizePolicy5(static_cast<QSizePolicy::Policy>(1), static_cast<QSizePolicy::Policy>(5));
    sizePolicy5.setHorizontalStretch(0);
    sizePolicy5.setVerticalStretch(0);
    sizePolicy5.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
    label_3->setSizePolicy(sizePolicy5);
    label_3->setMaximumSize(QSize(66666, 16777215));
    label_3->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

    gridLayout4->addWidget(label_3, 0, 0, 1, 1);

    mode_tab->addTab(Dots, QApplication::translate("GridVisualizationDialogData", "Dots", 0, QApplication::UnicodeUTF8));
    tab_3 = new QWidget();
    tab_3->setObjectName(QString::fromUtf8("tab_3"));
    gridLayout5 = new QGridLayout(tab_3);
    gridLayout5->setSpacing(6);
    gridLayout5->setMargin(9);
    gridLayout5->setObjectName(QString::fromUtf8("gridLayout5"));
    slices_spin = new QSpinBox(tab_3);
    slices_spin->setObjectName(QString::fromUtf8("slices_spin"));
    slices_spin->setMinimumSize(QSize(0, 23));
    slices_spin->setMaximum(256);
    slices_spin->setMinimum(1);
    slices_spin->setValue(32);

    gridLayout5->addWidget(slices_spin, 0, 1, 1, 1);

    label = new QLabel(tab_3);
    label->setObjectName(QString::fromUtf8("label"));
    QSizePolicy sizePolicy6(static_cast<QSizePolicy::Policy>(1), static_cast<QSizePolicy::Policy>(5));
    sizePolicy6.setHorizontalStretch(0);
    sizePolicy6.setVerticalStretch(0);
    sizePolicy6.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
    label->setSizePolicy(sizePolicy6);
    label->setMaximumSize(QSize(66666, 16777215));
    label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

    gridLayout5->addWidget(label, 0, 0, 1, 1);

    mode_tab->addTab(tab_3, QApplication::translate("GridVisualizationDialogData", "Volume", 0, QApplication::UnicodeUTF8));

    gridLayout3->addWidget(mode_tab, 0, 0, 1, 1);


    gridLayout->addWidget(groupBox_2, 2, 0, 1, 1);

    hboxLayout1 = new QHBoxLayout();
    hboxLayout1->setSpacing(6);
    hboxLayout1->setMargin(0);
    hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
    apply_button = new QPushButton(GridVisualizationDialogData);
    apply_button->setObjectName(QString::fromUtf8("apply_button"));
    apply_button->setEnabled(false);
    QSizePolicy sizePolicy7(static_cast<QSizePolicy::Policy>(7), static_cast<QSizePolicy::Policy>(7));
    sizePolicy7.setHorizontalStretch(0);
    sizePolicy7.setVerticalStretch(0);
    sizePolicy7.setHeightForWidth(apply_button->sizePolicy().hasHeightForWidth());
    apply_button->setSizePolicy(sizePolicy7);
    apply_button->setMaximumSize(QSize(32767, 30));
    apply_button->setDefault(true);

    hboxLayout1->addWidget(apply_button);

    cancel_button = new QPushButton(GridVisualizationDialogData);
    cancel_button->setObjectName(QString::fromUtf8("cancel_button"));
    QSizePolicy sizePolicy8(static_cast<QSizePolicy::Policy>(7), static_cast<QSizePolicy::Policy>(7));
    sizePolicy8.setHorizontalStretch(0);
    sizePolicy8.setVerticalStretch(0);
    sizePolicy8.setHeightForWidth(cancel_button->sizePolicy().hasHeightForWidth());
    cancel_button->setSizePolicy(sizePolicy8);
    cancel_button->setMaximumSize(QSize(32767, 30));
    cancel_button->setDefault(false);

    hboxLayout1->addWidget(cancel_button);

    help_button = new QPushButton(GridVisualizationDialogData);
    help_button->setObjectName(QString::fromUtf8("help_button"));
    QSizePolicy sizePolicy9(static_cast<QSizePolicy::Policy>(7), static_cast<QSizePolicy::Policy>(7));
    sizePolicy9.setHorizontalStretch(0);
    sizePolicy9.setVerticalStretch(0);
    sizePolicy9.setHeightForWidth(help_button->sizePolicy().hasHeightForWidth());
    help_button->setSizePolicy(sizePolicy9);
    help_button->setMinimumSize(QSize(0, 30));
    help_button->setMaximumSize(QSize(32767, 30));
    help_button->setDefault(false);

    hboxLayout1->addWidget(help_button);


    gridLayout->addLayout(hboxLayout1, 3, 0, 1, 2);

    groupBox_4 = new QGroupBox(GridVisualizationDialogData);
    groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
    QSizePolicy sizePolicy10(static_cast<QSizePolicy::Policy>(1), static_cast<QSizePolicy::Policy>(5));
    sizePolicy10.setHorizontalStretch(0);
    sizePolicy10.setVerticalStretch(0);
    sizePolicy10.setHeightForWidth(groupBox_4->sizePolicy().hasHeightForWidth());
    groupBox_4->setSizePolicy(sizePolicy10);
    groupBox_4->setMaximumSize(QSize(180, 16777215));
    gridLayout6 = new QGridLayout(groupBox_4);
    gridLayout6->setSpacing(6);
    gridLayout6->setMargin(4);
    gridLayout6->setObjectName(QString::fromUtf8("gridLayout6"));
    render_box = new QCheckBox(groupBox_4);
    render_box->setObjectName(QString::fromUtf8("render_box"));

    gridLayout6->addWidget(render_box, 0, 0, 1, 1);


    gridLayout->addWidget(groupBox_4, 2, 1, 1, 1);

    QWidget::setTabOrder(grids, resize_needed);
    QWidget::setTabOrder(resize_needed, normalization);
    QWidget::setTabOrder(normalization, min_box);
    QWidget::setTabOrder(min_box, mid_box);
    QWidget::setTabOrder(mid_box, max_box);
    QWidget::setTabOrder(max_box, autoscale);
    QWidget::setTabOrder(autoscale, min_min_button);
    QWidget::setTabOrder(min_min_button, min_button);
    QWidget::setTabOrder(min_button, mid_button);
    QWidget::setTabOrder(mid_button, max_button);
    QWidget::setTabOrder(max_button, max_max_button);
    QWidget::setTabOrder(max_max_button, min_min_alpha);
    QWidget::setTabOrder(min_min_alpha, min_alpha);
    QWidget::setTabOrder(min_alpha, mid_alpha);
    QWidget::setTabOrder(mid_alpha, max_alpha);
    QWidget::setTabOrder(max_alpha, max_max_alpha);
    QWidget::setTabOrder(max_max_alpha, levels_box);
    QWidget::setTabOrder(levels_box, render_box);
    QWidget::setTabOrder(render_box, apply_button);
    QWidget::setTabOrder(apply_button, cancel_button);
    QWidget::setTabOrder(cancel_button, help_button);
    QWidget::setTabOrder(help_button, number_dots);
    QWidget::setTabOrder(number_dots, dot_size);
    QWidget::setTabOrder(dot_size, slices_spin);
    QWidget::setTabOrder(slices_spin, transparency);
    QWidget::setTabOrder(transparency, mode_tab);

    retranslateUi(GridVisualizationDialogData);

    QSize size(631, 540);
    size = size.expandedTo(GridVisualizationDialogData->minimumSizeHint());
    GridVisualizationDialogData->resize(size);


    mode_tab->setCurrentIndex(0);


    QMetaObject::connectSlotsByName(GridVisualizationDialogData);
    } // setupUi

    void retranslateUi(QDialog *GridVisualizationDialogData)
    {
    GridVisualizationDialogData->setWindowTitle(QApplication::translate("GridVisualizationDialogData", "Grid Visualization", 0, QApplication::UnicodeUTF8));
    groupBox->setToolTip(QApplication::translate("GridVisualizationDialogData", "The coloring is done by interpolation between three different colors and their corresponding values in the grid. <br> Outliers get their own colors. It is also possible to set the opaqueness of all colors.", 0, QApplication::UnicodeUTF8));
    groupBox->setTitle(QApplication::translate("GridVisualizationDialogData", "Coloring", 0, QApplication::UnicodeUTF8));
    TextLabel1_2->setText(QApplication::translate("GridVisualizationDialogData", "opaqueness (0-255)", 0, QApplication::UnicodeUTF8));
    TextLabel1->setText(QApplication::translate("GridVisualizationDialogData", "colors to interpolate", 0, QApplication::UnicodeUTF8));
    min_button->setText(QApplication::translate("GridVisualizationDialogData", "Select", 0, QApplication::UnicodeUTF8));
    min_min_button->setText(QApplication::translate("GridVisualizationDialogData", "Select", 0, QApplication::UnicodeUTF8));
    min_label->setText(QString());
    min_min_label->setToolTip(QApplication::translate("GridVisualizationDialogData", "Color for values lower than the interpolation range", 0, QApplication::UnicodeUTF8));
    min_min_label->setText(QString());
    min_alpha->setToolTip(QApplication::translate("GridVisualizationDialogData", "Opaqueness for min color", 0, QApplication::UnicodeUTF8));
    min_min_alpha->setToolTip(QApplication::translate("GridVisualizationDialogData", "Opaqueness for colors for values out of the interpolation range", 0, QApplication::UnicodeUTF8));
    TextLabel7_2->setText(QApplication::translate("GridVisualizationDialogData", "interpolation range", 0, QApplication::UnicodeUTF8));
    TextLabel14_3->setText(QApplication::translate("GridVisualizationDialogData", "< min", 0, QApplication::UnicodeUTF8));
    TextLabel15_4->setText(QApplication::translate("GridVisualizationDialogData", "max", 0, QApplication::UnicodeUTF8));
    TextLabel14_10->setText(QApplication::translate("GridVisualizationDialogData", "mid", 0, QApplication::UnicodeUTF8));
    TextLabel14_11->setText(QApplication::translate("GridVisualizationDialogData", "min", 0, QApplication::UnicodeUTF8));
    max_label->setText(QString());
    max_max_label->setToolTip(QApplication::translate("GridVisualizationDialogData", "Color for values higher than the interpolation range", 0, QApplication::UnicodeUTF8));
    max_max_label->setText(QString());
    max_max_button->setText(QApplication::translate("GridVisualizationDialogData", "Select", 0, QApplication::UnicodeUTF8));
    max_button->setText(QApplication::translate("GridVisualizationDialogData", "Select", 0, QApplication::UnicodeUTF8));
    mid_button->setText(QApplication::translate("GridVisualizationDialogData", "Select", 0, QApplication::UnicodeUTF8));
    mid_label->setText(QString());
    mid_alpha->setToolTip(QApplication::translate("GridVisualizationDialogData", "Opaqueness for mid color", 0, QApplication::UnicodeUTF8));
    max_alpha->setToolTip(QApplication::translate("GridVisualizationDialogData", "Opaqueness for max color", 0, QApplication::UnicodeUTF8));
    max_max_alpha->setToolTip(QApplication::translate("GridVisualizationDialogData", "Opaqueness for colors for values out of the interpolation range", 0, QApplication::UnicodeUTF8));
    TextLabel13->setText(QApplication::translate("GridVisualizationDialogData", "> max", 0, QApplication::UnicodeUTF8));
    TextLabel15->setText(QApplication::translate("GridVisualizationDialogData", "max", 0, QApplication::UnicodeUTF8));
    TextLabel14_2->setText(QApplication::translate("GridVisualizationDialogData", "mid", 0, QApplication::UnicodeUTF8));
    TextLabel14->setText(QApplication::translate("GridVisualizationDialogData", "min", 0, QApplication::UnicodeUTF8));
    max_box->setToolTip(QApplication::translate("GridVisualizationDialogData", "Value for max color", 0, QApplication::UnicodeUTF8));
    max_box->setText(QApplication::translate("GridVisualizationDialogData", "1.0", 0, QApplication::UnicodeUTF8));
    mid_box->setToolTip(QApplication::translate("GridVisualizationDialogData", "Value for mid color", 0, QApplication::UnicodeUTF8));
    mid_box->setText(QApplication::translate("GridVisualizationDialogData", "0.0", 0, QApplication::UnicodeUTF8));
    autoscale->setToolTip(QApplication::translate("GridVisualizationDialogData", "Calculate the min, mid and max values from the grid", 0, QApplication::UnicodeUTF8));
    autoscale->setText(QApplication::translate("GridVisualizationDialogData", "Auto", 0, QApplication::UnicodeUTF8));
    min_box->setToolTip(QApplication::translate("GridVisualizationDialogData", "Value for min color", 0, QApplication::UnicodeUTF8));
    min_box->setText(QApplication::translate("GridVisualizationDialogData", "-1.0", 0, QApplication::UnicodeUTF8));
    TextLabel7->setText(QApplication::translate("GridVisualizationDialogData", "Number of color steps", 0, QApplication::UnicodeUTF8));
    levels_box->setToolTip(QApplication::translate("GridVisualizationDialogData", "Number of interpolated colors", 0, QApplication::UnicodeUTF8));
    groupBox_3->setToolTip(QApplication::translate("GridVisualizationDialogData", "Select the grid to work on, if the grid's resolutions are not powers of two, it will be resized and new grids will be created. ", 0, QApplication::UnicodeUTF8));
    groupBox_3->setTitle(QApplication::translate("GridVisualizationDialogData", "Select Grid", 0, QApplication::UnicodeUTF8));
    normalization->setToolTip(QApplication::translate("GridVisualizationDialogData", "Normalize the values between 0.0 and 1.0 by histogram equalisation and creates thus a new grid.", 0, QApplication::UnicodeUTF8));
    normalization->setText(QApplication::translate("GridVisualizationDialogData", "perform normalization", 0, QApplication::UnicodeUTF8));
    resize_needed->setToolTip(QApplication::translate("GridVisualizationDialogData", "To render a grid, it must have a power of two resolution in all directions. If this is not the case, a new grid will be created.", 0, QApplication::UnicodeUTF8));
    resize_needed->setText(QApplication::translate("GridVisualizationDialogData", "resize needed", 0, QApplication::UnicodeUTF8));
    groupBox_2->setTitle(QApplication::translate("GridVisualizationDialogData", "Visualize as", 0, QApplication::UnicodeUTF8));
    transparency->setText(QApplication::translate("GridVisualizationDialogData", "enable transparency", 0, QApplication::UnicodeUTF8));
    mode_tab->setTabText(mode_tab->indexOf(Plane), QApplication::translate("GridVisualizationDialogData", "Plane", 0, QApplication::UnicodeUTF8));
    mode_tab->setTabToolTip(mode_tab->indexOf(Plane), QApplication::translate("GridVisualizationDialogData", "Render as a single plane", 0, QApplication::UnicodeUTF8));
    label_2->setText(QApplication::translate("GridVisualizationDialogData", "dot size", 0, QApplication::UnicodeUTF8));
    label_3->setText(QApplication::translate("GridVisualizationDialogData", "number dots", 0, QApplication::UnicodeUTF8));
    mode_tab->setTabText(mode_tab->indexOf(Dots), QApplication::translate("GridVisualizationDialogData", "Dots", 0, QApplication::UnicodeUTF8));
    mode_tab->setTabToolTip(mode_tab->indexOf(Dots), QApplication::translate("GridVisualizationDialogData", "Render with dots", 0, QApplication::UnicodeUTF8));
    label->setText(QApplication::translate("GridVisualizationDialogData", "number slices", 0, QApplication::UnicodeUTF8));
    mode_tab->setTabText(mode_tab->indexOf(tab_3), QApplication::translate("GridVisualizationDialogData", "Volume", 0, QApplication::UnicodeUTF8));
    mode_tab->setTabToolTip(mode_tab->indexOf(tab_3), QApplication::translate("GridVisualizationDialogData", "Render with slices as a volume", 0, QApplication::UnicodeUTF8));
    apply_button->setToolTip(QApplication::translate("GridVisualizationDialogData", "Create the visualization", 0, QApplication::UnicodeUTF8));
    apply_button->setText(QApplication::translate("GridVisualizationDialogData", "O&K", 0, QApplication::UnicodeUTF8));
    apply_button->setShortcut(QApplication::translate("GridVisualizationDialogData", "Alt+K", 0, QApplication::UnicodeUTF8));
    cancel_button->setText(QApplication::translate("GridVisualizationDialogData", "C&ancel", 0, QApplication::UnicodeUTF8));
    cancel_button->setShortcut(QApplication::translate("GridVisualizationDialogData", "Alt+A", 0, QApplication::UnicodeUTF8));
    help_button->setText(QApplication::translate("GridVisualizationDialogData", "Help", 0, QApplication::UnicodeUTF8));
    help_button->setShortcut(QApplication::translate("GridVisualizationDialogData", "Alt+A", 0, QApplication::UnicodeUTF8));
    groupBox_4->setTitle(QApplication::translate("GridVisualizationDialogData", "Misc", 0, QApplication::UnicodeUTF8));
    render_box->setToolTip(QApplication::translate("GridVisualizationDialogData", "Render also the outlines of the grid", 0, QApplication::UnicodeUTF8));
    render_box->setText(QApplication::translate("GridVisualizationDialogData", "render grid outline", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(GridVisualizationDialogData);
    } // retranslateUi

};

namespace Ui {
    class GridVisualizationDialogData: public Ui_GridVisualizationDialogData {};
} // namespace Ui

#endif // GRIDVISUALIZATIONDIALOGDATA_H
