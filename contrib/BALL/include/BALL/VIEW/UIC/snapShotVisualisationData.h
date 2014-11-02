/********************************************************************************
** Form generated from reading ui file 'snapShotVisualisation.ui'
**
** Created: Wed Mar 19 14:28:18 2008
**      by: Qt User Interface Compiler version 4.2.2
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef SNAPSHOTVISUALISATIONDATA_H
#define SNAPSHOTVISUALISATIONDATA_H

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
#include <QtGui/QSlider>
#include <QtGui/QVBoxLayout>

class Ui_SnapshotVisualisationDialogData
{
public:
    QGridLayout *gridLayout;
    QGroupBox *sliderBox;
    QGridLayout *gridLayout1;
    QHBoxLayout *hboxLayout;
    QPushButton *firstSnapshotButton;
    QPushButton *tenBackwardButton;
    QPushButton *oneBackwardButton;
    QPushButton *oneForwardButton;
    QPushButton *tenForwardButton;
    QPushButton *lastSnapshotButton;
    QLabel *TextLabel2_2;
    QSlider *snapShotSlider;
    QLabel *TextLabel2;
    QLineEdit *numberOfSnapshots;
    QLineEdit *currentSnapshot;
    QPushButton *cancelButton;
    QPushButton *animateButton;
    QGroupBox *groupBox2;
    QGridLayout *gridLayout2;
    QGroupBox *groupBox10;
    QGridLayout *gridLayout3;
    QRadioButton *rockLoopButton;
    QRadioButton *forwardLoopButton;
    QRadioButton *noLoopButton;
    QGridLayout *gridLayout4;
    QLabel *TextLabel2_3;
    QLineEdit *endSnapshot;
    QLabel *TextLabel2_4;
    QLineEdit *startSnapshot;
    QGroupBox *groupBox4;
    QGridLayout *gridLayout5;
    QLineEdit *animationSpeedLineEdit;
    QSlider *animationSpeedSlider;
    QVBoxLayout *vboxLayout;
    QCheckBox *export_POV;
    QCheckBox *export_PNG;

    void setupUi(QDialog *SnapshotVisualisationDialogData)
    {
    SnapshotVisualisationDialogData->setObjectName(QString::fromUtf8("SnapshotVisualisationDialogData"));
    SnapshotVisualisationDialogData->setMinimumSize(QSize(0, 0));
    SnapshotVisualisationDialogData->setMaximumSize(QSize(3900, 3400));
    gridLayout = new QGridLayout(SnapshotVisualisationDialogData);
    gridLayout->setSpacing(6);
    gridLayout->setMargin(4);
    gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
    sliderBox = new QGroupBox(SnapshotVisualisationDialogData);
    sliderBox->setObjectName(QString::fromUtf8("sliderBox"));
    sliderBox->setAlignment(Qt::AlignHCenter);
    gridLayout1 = new QGridLayout(sliderBox);
    gridLayout1->setSpacing(6);
    gridLayout1->setMargin(9);
    gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
    hboxLayout = new QHBoxLayout();
    hboxLayout->setSpacing(6);
    hboxLayout->setMargin(0);
    hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
    firstSnapshotButton = new QPushButton(sliderBox);
    firstSnapshotButton->setObjectName(QString::fromUtf8("firstSnapshotButton"));
    QSizePolicy sizePolicy(static_cast<QSizePolicy::Policy>(7), static_cast<QSizePolicy::Policy>(0));
    sizePolicy.setHorizontalStretch(0);
    sizePolicy.setVerticalStretch(0);
    sizePolicy.setHeightForWidth(firstSnapshotButton->sizePolicy().hasHeightForWidth());
    firstSnapshotButton->setSizePolicy(sizePolicy);
    firstSnapshotButton->setMinimumSize(QSize(21, 31));

    hboxLayout->addWidget(firstSnapshotButton);

    tenBackwardButton = new QPushButton(sliderBox);
    tenBackwardButton->setObjectName(QString::fromUtf8("tenBackwardButton"));
    QSizePolicy sizePolicy1(static_cast<QSizePolicy::Policy>(7), static_cast<QSizePolicy::Policy>(0));
    sizePolicy1.setHorizontalStretch(0);
    sizePolicy1.setVerticalStretch(0);
    sizePolicy1.setHeightForWidth(tenBackwardButton->sizePolicy().hasHeightForWidth());
    tenBackwardButton->setSizePolicy(sizePolicy1);
    tenBackwardButton->setMinimumSize(QSize(21, 31));

    hboxLayout->addWidget(tenBackwardButton);

    oneBackwardButton = new QPushButton(sliderBox);
    oneBackwardButton->setObjectName(QString::fromUtf8("oneBackwardButton"));
    QSizePolicy sizePolicy2(static_cast<QSizePolicy::Policy>(7), static_cast<QSizePolicy::Policy>(0));
    sizePolicy2.setHorizontalStretch(0);
    sizePolicy2.setVerticalStretch(0);
    sizePolicy2.setHeightForWidth(oneBackwardButton->sizePolicy().hasHeightForWidth());
    oneBackwardButton->setSizePolicy(sizePolicy2);
    oneBackwardButton->setMinimumSize(QSize(21, 31));

    hboxLayout->addWidget(oneBackwardButton);

    oneForwardButton = new QPushButton(sliderBox);
    oneForwardButton->setObjectName(QString::fromUtf8("oneForwardButton"));
    QSizePolicy sizePolicy3(static_cast<QSizePolicy::Policy>(7), static_cast<QSizePolicy::Policy>(0));
    sizePolicy3.setHorizontalStretch(0);
    sizePolicy3.setVerticalStretch(0);
    sizePolicy3.setHeightForWidth(oneForwardButton->sizePolicy().hasHeightForWidth());
    oneForwardButton->setSizePolicy(sizePolicy3);
    oneForwardButton->setMinimumSize(QSize(21, 31));

    hboxLayout->addWidget(oneForwardButton);

    tenForwardButton = new QPushButton(sliderBox);
    tenForwardButton->setObjectName(QString::fromUtf8("tenForwardButton"));
    QSizePolicy sizePolicy4(static_cast<QSizePolicy::Policy>(7), static_cast<QSizePolicy::Policy>(0));
    sizePolicy4.setHorizontalStretch(0);
    sizePolicy4.setVerticalStretch(0);
    sizePolicy4.setHeightForWidth(tenForwardButton->sizePolicy().hasHeightForWidth());
    tenForwardButton->setSizePolicy(sizePolicy4);
    tenForwardButton->setMinimumSize(QSize(21, 31));

    hboxLayout->addWidget(tenForwardButton);

    lastSnapshotButton = new QPushButton(sliderBox);
    lastSnapshotButton->setObjectName(QString::fromUtf8("lastSnapshotButton"));
    QSizePolicy sizePolicy5(static_cast<QSizePolicy::Policy>(7), static_cast<QSizePolicy::Policy>(0));
    sizePolicy5.setHorizontalStretch(0);
    sizePolicy5.setVerticalStretch(0);
    sizePolicy5.setHeightForWidth(lastSnapshotButton->sizePolicy().hasHeightForWidth());
    lastSnapshotButton->setSizePolicy(sizePolicy5);
    lastSnapshotButton->setMinimumSize(QSize(21, 31));

    hboxLayout->addWidget(lastSnapshotButton);


    gridLayout1->addLayout(hboxLayout, 2, 0, 1, 4);

    TextLabel2_2 = new QLabel(sliderBox);
    TextLabel2_2->setObjectName(QString::fromUtf8("TextLabel2_2"));
    TextLabel2_2->setMinimumSize(QSize(50, 0));
    TextLabel2_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

    gridLayout1->addWidget(TextLabel2_2, 0, 2, 1, 1);

    snapShotSlider = new QSlider(sliderBox);
    snapShotSlider->setObjectName(QString::fromUtf8("snapShotSlider"));
    snapShotSlider->setMinimumSize(QSize(360, 0));
    snapShotSlider->setCursor(QCursor(static_cast<Qt::CursorShape>(0)));
    snapShotSlider->setMinimum(1);
    snapShotSlider->setPageStep(5);
    snapShotSlider->setOrientation(Qt::Horizontal);
    snapShotSlider->setTickInterval(20);

    gridLayout1->addWidget(snapShotSlider, 1, 0, 1, 4);

    TextLabel2 = new QLabel(sliderBox);
    TextLabel2->setObjectName(QString::fromUtf8("TextLabel2"));
    TextLabel2->setMinimumSize(QSize(70, 0));
    TextLabel2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

    gridLayout1->addWidget(TextLabel2, 0, 0, 1, 1);

    numberOfSnapshots = new QLineEdit(sliderBox);
    numberOfSnapshots->setObjectName(QString::fromUtf8("numberOfSnapshots"));
    numberOfSnapshots->setEnabled(false);
    numberOfSnapshots->setMinimumSize(QSize(90, 0));
    numberOfSnapshots->setReadOnly(true);

    gridLayout1->addWidget(numberOfSnapshots, 0, 1, 1, 1);

    currentSnapshot = new QLineEdit(sliderBox);
    currentSnapshot->setObjectName(QString::fromUtf8("currentSnapshot"));
    currentSnapshot->setEnabled(true);
    currentSnapshot->setMinimumSize(QSize(90, 0));
    currentSnapshot->setReadOnly(true);

    gridLayout1->addWidget(currentSnapshot, 0, 3, 1, 1);


    gridLayout->addWidget(sliderBox, 0, 0, 1, 2);

    cancelButton = new QPushButton(SnapshotVisualisationDialogData);
    cancelButton->setObjectName(QString::fromUtf8("cancelButton"));
    cancelButton->setMinimumSize(QSize(180, 32));

    gridLayout->addWidget(cancelButton, 2, 1, 1, 1);

    animateButton = new QPushButton(SnapshotVisualisationDialogData);
    animateButton->setObjectName(QString::fromUtf8("animateButton"));
    animateButton->setMinimumSize(QSize(180, 32));
    animateButton->setDefault(true);

    gridLayout->addWidget(animateButton, 2, 0, 1, 1);

    groupBox2 = new QGroupBox(SnapshotVisualisationDialogData);
    groupBox2->setObjectName(QString::fromUtf8("groupBox2"));
    groupBox2->setAlignment(Qt::AlignHCenter);
    gridLayout2 = new QGridLayout(groupBox2);
    gridLayout2->setSpacing(6);
    gridLayout2->setMargin(4);
    gridLayout2->setObjectName(QString::fromUtf8("gridLayout2"));
    groupBox10 = new QGroupBox(groupBox2);
    groupBox10->setObjectName(QString::fromUtf8("groupBox10"));
    groupBox10->setAlignment(Qt::AlignHCenter);
    gridLayout3 = new QGridLayout(groupBox10);
    gridLayout3->setSpacing(6);
    gridLayout3->setMargin(9);
    gridLayout3->setObjectName(QString::fromUtf8("gridLayout3"));
    rockLoopButton = new QRadioButton(groupBox10);
    rockLoopButton->setObjectName(QString::fromUtf8("rockLoopButton"));
    rockLoopButton->setEnabled(true);

    gridLayout3->addWidget(rockLoopButton, 2, 0, 1, 1);

    forwardLoopButton = new QRadioButton(groupBox10);
    forwardLoopButton->setObjectName(QString::fromUtf8("forwardLoopButton"));
    forwardLoopButton->setEnabled(true);
    forwardLoopButton->setChecked(false);

    gridLayout3->addWidget(forwardLoopButton, 1, 0, 1, 1);

    noLoopButton = new QRadioButton(groupBox10);
    noLoopButton->setObjectName(QString::fromUtf8("noLoopButton"));
    noLoopButton->setChecked(true);

    gridLayout3->addWidget(noLoopButton, 0, 0, 1, 1);


    gridLayout2->addWidget(groupBox10, 0, 1, 1, 1);

    gridLayout4 = new QGridLayout();
    gridLayout4->setSpacing(6);
    gridLayout4->setMargin(0);
    gridLayout4->setObjectName(QString::fromUtf8("gridLayout4"));
    TextLabel2_3 = new QLabel(groupBox2);
    TextLabel2_3->setObjectName(QString::fromUtf8("TextLabel2_3"));
    TextLabel2_3->setMinimumSize(QSize(80, 0));
    TextLabel2_3->setMaximumSize(QSize(80, 32767));

    gridLayout4->addWidget(TextLabel2_3, 0, 0, 1, 1);

    endSnapshot = new QLineEdit(groupBox2);
    endSnapshot->setObjectName(QString::fromUtf8("endSnapshot"));
    endSnapshot->setMinimumSize(QSize(120, 25));
    endSnapshot->setMaximumSize(QSize(100, 32767));

    gridLayout4->addWidget(endSnapshot, 1, 1, 1, 1);

    TextLabel2_4 = new QLabel(groupBox2);
    TextLabel2_4->setObjectName(QString::fromUtf8("TextLabel2_4"));
    TextLabel2_4->setMinimumSize(QSize(80, 0));
    TextLabel2_4->setMaximumSize(QSize(80, 32767));

    gridLayout4->addWidget(TextLabel2_4, 1, 0, 1, 1);

    startSnapshot = new QLineEdit(groupBox2);
    startSnapshot->setObjectName(QString::fromUtf8("startSnapshot"));
    startSnapshot->setMinimumSize(QSize(120, 25));
    startSnapshot->setMaximumSize(QSize(100, 32767));

    gridLayout4->addWidget(startSnapshot, 0, 1, 1, 1);

    groupBox4 = new QGroupBox(groupBox2);
    groupBox4->setObjectName(QString::fromUtf8("groupBox4"));
    groupBox4->setAlignment(Qt::AlignHCenter);
    gridLayout5 = new QGridLayout(groupBox4);
    gridLayout5->setSpacing(6);
    gridLayout5->setMargin(2);
    gridLayout5->setObjectName(QString::fromUtf8("gridLayout5"));
    animationSpeedLineEdit = new QLineEdit(groupBox4);
    animationSpeedLineEdit->setObjectName(QString::fromUtf8("animationSpeedLineEdit"));
    animationSpeedLineEdit->setEnabled(false);
    animationSpeedLineEdit->setMaximumSize(QSize(80, 32767));
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
    QBrush brush9(QColor(255, 255, 255, 255));
    brush9.setStyle(Qt::SolidPattern);
    palette.setBrush(QPalette::Active, QPalette::Base, brush9);
    QBrush brush10(QColor(239, 239, 239, 255));
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
    QBrush brush26(QColor(255, 255, 255, 255));
    brush26.setStyle(Qt::SolidPattern);
    palette.setBrush(QPalette::Inactive, QPalette::Base, brush26);
    QBrush brush27(QColor(239, 239, 239, 255));
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
    QBrush brush43(QColor(239, 239, 239, 255));
    brush43.setStyle(Qt::SolidPattern);
    palette.setBrush(QPalette::Disabled, QPalette::Base, brush43);
    QBrush brush44(QColor(239, 239, 239, 255));
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
    animationSpeedLineEdit->setPalette(palette);
    QFont font;
    font.setFamily(QString::fromUtf8("Sans Serif"));
    font.setPointSize(9);
    font.setBold(true);
    font.setItalic(false);
    font.setUnderline(false);
    font.setWeight(75);
    font.setStrikeOut(false);
    animationSpeedLineEdit->setFont(font);

    gridLayout5->addWidget(animationSpeedLineEdit, 0, 0, 1, 1);

    animationSpeedSlider = new QSlider(groupBox4);
    animationSpeedSlider->setObjectName(QString::fromUtf8("animationSpeedSlider"));
    animationSpeedSlider->setMinimumSize(QSize(120, 0));
    animationSpeedSlider->setMaximumSize(QSize(120, 32767));
    animationSpeedSlider->setCursor(QCursor(static_cast<Qt::CursorShape>(6)));
    animationSpeedSlider->setMinimum(1);
    animationSpeedSlider->setMaximum(10);
    animationSpeedSlider->setPageStep(1);
    animationSpeedSlider->setOrientation(Qt::Horizontal);
    animationSpeedSlider->setTickInterval(1);

    gridLayout5->addWidget(animationSpeedSlider, 0, 1, 1, 1);


    gridLayout4->addWidget(groupBox4, 2, 0, 1, 2);


    gridLayout2->addLayout(gridLayout4, 0, 0, 1, 1);

    vboxLayout = new QVBoxLayout();
    vboxLayout->setSpacing(6);
    vboxLayout->setMargin(0);
    vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
    export_POV = new QCheckBox(groupBox2);
    export_POV->setObjectName(QString::fromUtf8("export_POV"));
    export_POV->setMinimumSize(QSize(110, 0));

    vboxLayout->addWidget(export_POV);

    export_PNG = new QCheckBox(groupBox2);
    export_PNG->setObjectName(QString::fromUtf8("export_PNG"));
    export_PNG->setMinimumSize(QSize(110, 0));

    vboxLayout->addWidget(export_PNG);


    gridLayout2->addLayout(vboxLayout, 0, 2, 1, 1);


    gridLayout->addWidget(groupBox2, 1, 0, 1, 2);

    QWidget::setTabOrder(snapShotSlider, currentSnapshot);
    QWidget::setTabOrder(currentSnapshot, firstSnapshotButton);
    QWidget::setTabOrder(firstSnapshotButton, tenBackwardButton);
    QWidget::setTabOrder(tenBackwardButton, oneBackwardButton);
    QWidget::setTabOrder(oneBackwardButton, oneForwardButton);
    QWidget::setTabOrder(oneForwardButton, tenForwardButton);
    QWidget::setTabOrder(tenForwardButton, lastSnapshotButton);
    QWidget::setTabOrder(lastSnapshotButton, startSnapshot);
    QWidget::setTabOrder(startSnapshot, endSnapshot);
    QWidget::setTabOrder(endSnapshot, animationSpeedLineEdit);
    QWidget::setTabOrder(animationSpeedLineEdit, animationSpeedSlider);
    QWidget::setTabOrder(animationSpeedSlider, noLoopButton);
    QWidget::setTabOrder(noLoopButton, forwardLoopButton);
    QWidget::setTabOrder(forwardLoopButton, rockLoopButton);
    QWidget::setTabOrder(rockLoopButton, export_POV);
    QWidget::setTabOrder(export_POV, export_PNG);
    QWidget::setTabOrder(export_PNG, animateButton);
    QWidget::setTabOrder(animateButton, cancelButton);
    QWidget::setTabOrder(cancelButton, numberOfSnapshots);

    retranslateUi(SnapshotVisualisationDialogData);

    QSize size(473, 332);
    size = size.expandedTo(SnapshotVisualisationDialogData->minimumSizeHint());
    SnapshotVisualisationDialogData->resize(size);


    QMetaObject::connectSlotsByName(SnapshotVisualisationDialogData);
    } // setupUi

    void retranslateUi(QDialog *SnapshotVisualisationDialogData)
    {
    SnapshotVisualisationDialogData->setWindowTitle(QApplication::translate("SnapshotVisualisationDialogData", "Snapshot Visualisation", 0, QApplication::UnicodeUTF8));
    sliderBox->setTitle(QApplication::translate("SnapshotVisualisationDialogData", "Navigation", 0, QApplication::UnicodeUTF8));
    firstSnapshotButton->setToolTip(QApplication::translate("SnapshotVisualisationDialogData", "First snapshot", 0, QApplication::UnicodeUTF8));
    firstSnapshotButton->setText(QApplication::translate("SnapshotVisualisationDialogData", "|<", 0, QApplication::UnicodeUTF8));
    tenBackwardButton->setText(QApplication::translate("SnapshotVisualisationDialogData", "<<", 0, QApplication::UnicodeUTF8));
    oneBackwardButton->setToolTip(QApplication::translate("SnapshotVisualisationDialogData", "One snapshot backwards", 0, QApplication::UnicodeUTF8));
    oneBackwardButton->setText(QApplication::translate("SnapshotVisualisationDialogData", "<", 0, QApplication::UnicodeUTF8));
    oneForwardButton->setToolTip(QApplication::translate("SnapshotVisualisationDialogData", "One snapshot further", 0, QApplication::UnicodeUTF8));
    oneForwardButton->setText(QApplication::translate("SnapshotVisualisationDialogData", ">", 0, QApplication::UnicodeUTF8));
    tenForwardButton->setText(QApplication::translate("SnapshotVisualisationDialogData", ">>", 0, QApplication::UnicodeUTF8));
    lastSnapshotButton->setToolTip(QApplication::translate("SnapshotVisualisationDialogData", "Last snapshot", 0, QApplication::UnicodeUTF8));
    lastSnapshotButton->setText(QApplication::translate("SnapshotVisualisationDialogData", ">|", 0, QApplication::UnicodeUTF8));
    TextLabel2_2->setText(QApplication::translate("SnapshotVisualisationDialogData", "Current", 0, QApplication::UnicodeUTF8));
    TextLabel2->setText(QApplication::translate("SnapshotVisualisationDialogData", "Snapshots", 0, QApplication::UnicodeUTF8));
    cancelButton->setToolTip(QApplication::translate("SnapshotVisualisationDialogData", "Close window", 0, QApplication::UnicodeUTF8));
    cancelButton->setText(QApplication::translate("SnapshotVisualisationDialogData", "C&ancel", 0, QApplication::UnicodeUTF8));
    cancelButton->setShortcut(QApplication::translate("SnapshotVisualisationDialogData", "Alt+A", 0, QApplication::UnicodeUTF8));
    animateButton->setToolTip(QApplication::translate("SnapshotVisualisationDialogData", "Play snapshots ", 0, QApplication::UnicodeUTF8));
    animateButton->setText(QApplication::translate("SnapshotVisualisationDialogData", "A&nimate", 0, QApplication::UnicodeUTF8));
    animateButton->setShortcut(QApplication::translate("SnapshotVisualisationDialogData", "Alt+N", 0, QApplication::UnicodeUTF8));
    groupBox2->setTitle(QApplication::translate("SnapshotVisualisationDialogData", "Animation", 0, QApplication::UnicodeUTF8));
    groupBox10->setTitle(QApplication::translate("SnapshotVisualisationDialogData", "Repeat", 0, QApplication::UnicodeUTF8));
    rockLoopButton->setText(QApplication::translate("SnapshotVisualisationDialogData", "Rock", 0, QApplication::UnicodeUTF8));
    forwardLoopButton->setText(QApplication::translate("SnapshotVisualisationDialogData", "Loop", 0, QApplication::UnicodeUTF8));
    noLoopButton->setText(QApplication::translate("SnapshotVisualisationDialogData", "Don't loop", 0, QApplication::UnicodeUTF8));
    TextLabel2_3->setText(QApplication::translate("SnapshotVisualisationDialogData", "Start", 0, QApplication::UnicodeUTF8));
    TextLabel2_4->setText(QApplication::translate("SnapshotVisualisationDialogData", "End", 0, QApplication::UnicodeUTF8));
    groupBox4->setTitle(QApplication::translate("SnapshotVisualisationDialogData", "Speed", 0, QApplication::UnicodeUTF8));
    animationSpeedSlider->setToolTip(QApplication::translate("SnapshotVisualisationDialogData", "Select animation speed", 0, QApplication::UnicodeUTF8));
    export_POV->setToolTip(QApplication::translate("SnapshotVisualisationDialogData", "Export one PNG image for each Snapshot.", 0, QApplication::UnicodeUTF8));
    export_POV->setWhatsThis(QApplication::translate("SnapshotVisualisationDialogData", "Export one PNG image for each Snapshot.", 0, QApplication::UnicodeUTF8));
    export_POV->setText(QApplication::translate("SnapshotVisualisationDialogData", "export POVRay", 0, QApplication::UnicodeUTF8));
    export_PNG->setToolTip(QApplication::translate("SnapshotVisualisationDialogData", "Export one PNG image for each Snapshot.", 0, QApplication::UnicodeUTF8));
    export_PNG->setWhatsThis(QApplication::translate("SnapshotVisualisationDialogData", "Export one PNG image for each Snapshot.", 0, QApplication::UnicodeUTF8));
    export_PNG->setText(QApplication::translate("SnapshotVisualisationDialogData", "export PNGs", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(SnapshotVisualisationDialogData);
    } // retranslateUi

};

namespace Ui {
    class SnapshotVisualisationDialogData: public Ui_SnapshotVisualisationDialogData {};
} // namespace Ui

#endif // SNAPSHOTVISUALISATIONDATA_H
