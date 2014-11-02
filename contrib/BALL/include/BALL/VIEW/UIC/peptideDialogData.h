/********************************************************************************
** Form generated from reading ui file 'peptideDialog.ui'
**
** Created: Wed Mar 19 14:28:18 2008
**      by: Qt User Interface Compiler version 4.2.2
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef PEPTIDEDIALOGDATA_H
#define PEPTIDEDIALOGDATA_H

#include <BALL/COMMON/global.h>
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
#include <QtGui/QRadioButton>
#include <QtGui/QVBoxLayout>

class Ui_PeptideDialogData
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *vboxLayout;
    QHBoxLayout *hboxLayout;
    QPushButton *ala;
    QPushButton *arg;
    QPushButton *asn;
    QPushButton *asp;
    QHBoxLayout *hboxLayout1;
    QPushButton *cys;
    QPushButton *gln;
    QPushButton *glu;
    QPushButton *gly;
    QHBoxLayout *hboxLayout2;
    QPushButton *his;
    QPushButton *ile;
    QPushButton *leu;
    QPushButton *lys;
    QHBoxLayout *hboxLayout3;
    QPushButton *met;
    QPushButton *phe;
    QPushButton *pro;
    QPushButton *ser;
    QHBoxLayout *hboxLayout4;
    QPushButton *thr;
    QPushButton *trp;
    QPushButton *tyr;
    QPushButton *val;
    QLabel *textLabel2;
    QLineEdit *sequence;
    QPushButton *close_button;
    QPushButton *cancel_button;
    QGroupBox *angles_group;
    QGridLayout *gridLayout1;
    QRadioButton *other;
    QRadioButton *beta;
    QGridLayout *gridLayout2;
    QLabel *textLabel1_4_3;
    QLabel *textLabel1_3;
    QLineEdit *omega;
    QLineEdit *psi;
    QLabel *textLabel1_4_2;
    QLabel *textLabel1_2;
    QLabel *textLabel1;
    QLabel *textLabel1_4;
    QLineEdit *phi;
    QRadioButton *alpha;

    void setupUi(QDialog *PeptideDialogData)
    {
    PeptideDialogData->setObjectName(QString::fromUtf8("PeptideDialogData"));
    QSizePolicy sizePolicy(static_cast<QSizePolicy::Policy>(5), static_cast<QSizePolicy::Policy>(5));
    sizePolicy.setHorizontalStretch(0);
    sizePolicy.setVerticalStretch(0);
    sizePolicy.setHeightForWidth(PeptideDialogData->sizePolicy().hasHeightForWidth());
    PeptideDialogData->setSizePolicy(sizePolicy);
    PeptideDialogData->setMinimumSize(QSize(0, 0));
    PeptideDialogData->setMaximumSize(QSize(4000, 2400));
    gridLayout = new QGridLayout(PeptideDialogData);
    gridLayout->setSpacing(8);
    gridLayout->setMargin(5);
    gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
    vboxLayout = new QVBoxLayout();
    vboxLayout->setSpacing(6);
    vboxLayout->setMargin(0);
    vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
    hboxLayout = new QHBoxLayout();
    hboxLayout->setSpacing(6);
    hboxLayout->setMargin(0);
    hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
    ala = new QPushButton(PeptideDialogData);
    ala->setObjectName(QString::fromUtf8("ala"));
    QSizePolicy sizePolicy1(static_cast<QSizePolicy::Policy>(5), static_cast<QSizePolicy::Policy>(0));
    sizePolicy1.setHorizontalStretch(0);
    sizePolicy1.setVerticalStretch(0);
    sizePolicy1.setHeightForWidth(ala->sizePolicy().hasHeightForWidth());
    ala->setSizePolicy(sizePolicy1);
    ala->setMinimumSize(QSize(50, 25));

    hboxLayout->addWidget(ala);

    arg = new QPushButton(PeptideDialogData);
    arg->setObjectName(QString::fromUtf8("arg"));
    QSizePolicy sizePolicy2(static_cast<QSizePolicy::Policy>(5), static_cast<QSizePolicy::Policy>(0));
    sizePolicy2.setHorizontalStretch(0);
    sizePolicy2.setVerticalStretch(0);
    sizePolicy2.setHeightForWidth(arg->sizePolicy().hasHeightForWidth());
    arg->setSizePolicy(sizePolicy2);
    arg->setMinimumSize(QSize(50, 25));

    hboxLayout->addWidget(arg);

    asn = new QPushButton(PeptideDialogData);
    asn->setObjectName(QString::fromUtf8("asn"));
    QSizePolicy sizePolicy3(static_cast<QSizePolicy::Policy>(5), static_cast<QSizePolicy::Policy>(0));
    sizePolicy3.setHorizontalStretch(0);
    sizePolicy3.setVerticalStretch(0);
    sizePolicy3.setHeightForWidth(asn->sizePolicy().hasHeightForWidth());
    asn->setSizePolicy(sizePolicy3);
    asn->setMinimumSize(QSize(50, 25));

    hboxLayout->addWidget(asn);

    asp = new QPushButton(PeptideDialogData);
    asp->setObjectName(QString::fromUtf8("asp"));
    QSizePolicy sizePolicy4(static_cast<QSizePolicy::Policy>(5), static_cast<QSizePolicy::Policy>(0));
    sizePolicy4.setHorizontalStretch(0);
    sizePolicy4.setVerticalStretch(0);
    sizePolicy4.setHeightForWidth(asp->sizePolicy().hasHeightForWidth());
    asp->setSizePolicy(sizePolicy4);
    asp->setMinimumSize(QSize(50, 25));

    hboxLayout->addWidget(asp);


    vboxLayout->addLayout(hboxLayout);

    hboxLayout1 = new QHBoxLayout();
    hboxLayout1->setSpacing(6);
    hboxLayout1->setMargin(0);
    hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
    cys = new QPushButton(PeptideDialogData);
    cys->setObjectName(QString::fromUtf8("cys"));
    QSizePolicy sizePolicy5(static_cast<QSizePolicy::Policy>(5), static_cast<QSizePolicy::Policy>(0));
    sizePolicy5.setHorizontalStretch(0);
    sizePolicy5.setVerticalStretch(0);
    sizePolicy5.setHeightForWidth(cys->sizePolicy().hasHeightForWidth());
    cys->setSizePolicy(sizePolicy5);
    cys->setMinimumSize(QSize(50, 25));

    hboxLayout1->addWidget(cys);

    gln = new QPushButton(PeptideDialogData);
    gln->setObjectName(QString::fromUtf8("gln"));
    QSizePolicy sizePolicy6(static_cast<QSizePolicy::Policy>(5), static_cast<QSizePolicy::Policy>(0));
    sizePolicy6.setHorizontalStretch(0);
    sizePolicy6.setVerticalStretch(0);
    sizePolicy6.setHeightForWidth(gln->sizePolicy().hasHeightForWidth());
    gln->setSizePolicy(sizePolicy6);
    gln->setMinimumSize(QSize(50, 25));

    hboxLayout1->addWidget(gln);

    glu = new QPushButton(PeptideDialogData);
    glu->setObjectName(QString::fromUtf8("glu"));
    QSizePolicy sizePolicy7(static_cast<QSizePolicy::Policy>(5), static_cast<QSizePolicy::Policy>(0));
    sizePolicy7.setHorizontalStretch(0);
    sizePolicy7.setVerticalStretch(0);
    sizePolicy7.setHeightForWidth(glu->sizePolicy().hasHeightForWidth());
    glu->setSizePolicy(sizePolicy7);
    glu->setMinimumSize(QSize(50, 25));

    hboxLayout1->addWidget(glu);

    gly = new QPushButton(PeptideDialogData);
    gly->setObjectName(QString::fromUtf8("gly"));
    QSizePolicy sizePolicy8(static_cast<QSizePolicy::Policy>(5), static_cast<QSizePolicy::Policy>(0));
    sizePolicy8.setHorizontalStretch(0);
    sizePolicy8.setVerticalStretch(0);
    sizePolicy8.setHeightForWidth(gly->sizePolicy().hasHeightForWidth());
    gly->setSizePolicy(sizePolicy8);
    gly->setMinimumSize(QSize(50, 25));

    hboxLayout1->addWidget(gly);


    vboxLayout->addLayout(hboxLayout1);

    hboxLayout2 = new QHBoxLayout();
    hboxLayout2->setSpacing(6);
    hboxLayout2->setMargin(0);
    hboxLayout2->setObjectName(QString::fromUtf8("hboxLayout2"));
    his = new QPushButton(PeptideDialogData);
    his->setObjectName(QString::fromUtf8("his"));
    QSizePolicy sizePolicy9(static_cast<QSizePolicy::Policy>(5), static_cast<QSizePolicy::Policy>(0));
    sizePolicy9.setHorizontalStretch(0);
    sizePolicy9.setVerticalStretch(0);
    sizePolicy9.setHeightForWidth(his->sizePolicy().hasHeightForWidth());
    his->setSizePolicy(sizePolicy9);
    his->setMinimumSize(QSize(50, 25));

    hboxLayout2->addWidget(his);

    ile = new QPushButton(PeptideDialogData);
    ile->setObjectName(QString::fromUtf8("ile"));
    QSizePolicy sizePolicy10(static_cast<QSizePolicy::Policy>(5), static_cast<QSizePolicy::Policy>(0));
    sizePolicy10.setHorizontalStretch(0);
    sizePolicy10.setVerticalStretch(0);
    sizePolicy10.setHeightForWidth(ile->sizePolicy().hasHeightForWidth());
    ile->setSizePolicy(sizePolicy10);
    ile->setMinimumSize(QSize(50, 25));

    hboxLayout2->addWidget(ile);

    leu = new QPushButton(PeptideDialogData);
    leu->setObjectName(QString::fromUtf8("leu"));
    QSizePolicy sizePolicy11(static_cast<QSizePolicy::Policy>(5), static_cast<QSizePolicy::Policy>(0));
    sizePolicy11.setHorizontalStretch(0);
    sizePolicy11.setVerticalStretch(0);
    sizePolicy11.setHeightForWidth(leu->sizePolicy().hasHeightForWidth());
    leu->setSizePolicy(sizePolicy11);
    leu->setMinimumSize(QSize(50, 25));

    hboxLayout2->addWidget(leu);

    lys = new QPushButton(PeptideDialogData);
    lys->setObjectName(QString::fromUtf8("lys"));
    QSizePolicy sizePolicy12(static_cast<QSizePolicy::Policy>(5), static_cast<QSizePolicy::Policy>(0));
    sizePolicy12.setHorizontalStretch(0);
    sizePolicy12.setVerticalStretch(0);
    sizePolicy12.setHeightForWidth(lys->sizePolicy().hasHeightForWidth());
    lys->setSizePolicy(sizePolicy12);
    lys->setMinimumSize(QSize(50, 25));

    hboxLayout2->addWidget(lys);


    vboxLayout->addLayout(hboxLayout2);

    hboxLayout3 = new QHBoxLayout();
    hboxLayout3->setSpacing(6);
    hboxLayout3->setMargin(0);
    hboxLayout3->setObjectName(QString::fromUtf8("hboxLayout3"));
    met = new QPushButton(PeptideDialogData);
    met->setObjectName(QString::fromUtf8("met"));
    QSizePolicy sizePolicy13(static_cast<QSizePolicy::Policy>(5), static_cast<QSizePolicy::Policy>(0));
    sizePolicy13.setHorizontalStretch(0);
    sizePolicy13.setVerticalStretch(0);
    sizePolicy13.setHeightForWidth(met->sizePolicy().hasHeightForWidth());
    met->setSizePolicy(sizePolicy13);
    met->setMinimumSize(QSize(50, 25));

    hboxLayout3->addWidget(met);

    phe = new QPushButton(PeptideDialogData);
    phe->setObjectName(QString::fromUtf8("phe"));
    QSizePolicy sizePolicy14(static_cast<QSizePolicy::Policy>(5), static_cast<QSizePolicy::Policy>(0));
    sizePolicy14.setHorizontalStretch(0);
    sizePolicy14.setVerticalStretch(0);
    sizePolicy14.setHeightForWidth(phe->sizePolicy().hasHeightForWidth());
    phe->setSizePolicy(sizePolicy14);
    phe->setMinimumSize(QSize(50, 25));

    hboxLayout3->addWidget(phe);

    pro = new QPushButton(PeptideDialogData);
    pro->setObjectName(QString::fromUtf8("pro"));
    QSizePolicy sizePolicy15(static_cast<QSizePolicy::Policy>(5), static_cast<QSizePolicy::Policy>(0));
    sizePolicy15.setHorizontalStretch(0);
    sizePolicy15.setVerticalStretch(0);
    sizePolicy15.setHeightForWidth(pro->sizePolicy().hasHeightForWidth());
    pro->setSizePolicy(sizePolicy15);
    pro->setMinimumSize(QSize(50, 25));

    hboxLayout3->addWidget(pro);

    ser = new QPushButton(PeptideDialogData);
    ser->setObjectName(QString::fromUtf8("ser"));
    QSizePolicy sizePolicy16(static_cast<QSizePolicy::Policy>(5), static_cast<QSizePolicy::Policy>(0));
    sizePolicy16.setHorizontalStretch(0);
    sizePolicy16.setVerticalStretch(0);
    sizePolicy16.setHeightForWidth(ser->sizePolicy().hasHeightForWidth());
    ser->setSizePolicy(sizePolicy16);
    ser->setMinimumSize(QSize(50, 25));

    hboxLayout3->addWidget(ser);


    vboxLayout->addLayout(hboxLayout3);

    hboxLayout4 = new QHBoxLayout();
    hboxLayout4->setSpacing(6);
    hboxLayout4->setMargin(0);
    hboxLayout4->setObjectName(QString::fromUtf8("hboxLayout4"));
    thr = new QPushButton(PeptideDialogData);
    thr->setObjectName(QString::fromUtf8("thr"));
    QSizePolicy sizePolicy17(static_cast<QSizePolicy::Policy>(5), static_cast<QSizePolicy::Policy>(0));
    sizePolicy17.setHorizontalStretch(0);
    sizePolicy17.setVerticalStretch(0);
    sizePolicy17.setHeightForWidth(thr->sizePolicy().hasHeightForWidth());
    thr->setSizePolicy(sizePolicy17);
    thr->setMinimumSize(QSize(50, 25));

    hboxLayout4->addWidget(thr);

    trp = new QPushButton(PeptideDialogData);
    trp->setObjectName(QString::fromUtf8("trp"));
    QSizePolicy sizePolicy18(static_cast<QSizePolicy::Policy>(5), static_cast<QSizePolicy::Policy>(0));
    sizePolicy18.setHorizontalStretch(0);
    sizePolicy18.setVerticalStretch(0);
    sizePolicy18.setHeightForWidth(trp->sizePolicy().hasHeightForWidth());
    trp->setSizePolicy(sizePolicy18);
    trp->setMinimumSize(QSize(50, 25));

    hboxLayout4->addWidget(trp);

    tyr = new QPushButton(PeptideDialogData);
    tyr->setObjectName(QString::fromUtf8("tyr"));
    QSizePolicy sizePolicy19(static_cast<QSizePolicy::Policy>(5), static_cast<QSizePolicy::Policy>(0));
    sizePolicy19.setHorizontalStretch(0);
    sizePolicy19.setVerticalStretch(0);
    sizePolicy19.setHeightForWidth(tyr->sizePolicy().hasHeightForWidth());
    tyr->setSizePolicy(sizePolicy19);
    tyr->setMinimumSize(QSize(50, 25));

    hboxLayout4->addWidget(tyr);

    val = new QPushButton(PeptideDialogData);
    val->setObjectName(QString::fromUtf8("val"));
    QSizePolicy sizePolicy20(static_cast<QSizePolicy::Policy>(5), static_cast<QSizePolicy::Policy>(0));
    sizePolicy20.setHorizontalStretch(0);
    sizePolicy20.setVerticalStretch(0);
    sizePolicy20.setHeightForWidth(val->sizePolicy().hasHeightForWidth());
    val->setSizePolicy(sizePolicy20);
    val->setMinimumSize(QSize(50, 25));

    hboxLayout4->addWidget(val);


    vboxLayout->addLayout(hboxLayout4);


    gridLayout->addLayout(vboxLayout, 1, 0, 1, 3);

    textLabel2 = new QLabel(PeptideDialogData);
    textLabel2->setObjectName(QString::fromUtf8("textLabel2"));

    gridLayout->addWidget(textLabel2, 0, 0, 1, 1);

    sequence = new QLineEdit(PeptideDialogData);
    sequence->setObjectName(QString::fromUtf8("sequence"));
    sequence->setMinimumSize(QSize(0, 25));
    QPalette palette;
    QBrush brush(QColor(0, 0, 0, 255));
    brush.setStyle(Qt::SolidPattern);
    palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
    QBrush brush1(QColor(220, 220, 220, 255));
    brush1.setStyle(Qt::SolidPattern);
    palette.setBrush(QPalette::Active, QPalette::Button, brush1);
    QBrush brush2(QColor(255, 255, 255, 255));
    brush2.setStyle(Qt::SolidPattern);
    palette.setBrush(QPalette::Active, QPalette::Light, brush2);
    QBrush brush3(QColor(237, 237, 237, 255));
    brush3.setStyle(Qt::SolidPattern);
    palette.setBrush(QPalette::Active, QPalette::Midlight, brush3);
    QBrush brush4(QColor(110, 110, 110, 255));
    brush4.setStyle(Qt::SolidPattern);
    palette.setBrush(QPalette::Active, QPalette::Dark, brush4);
    QBrush brush5(QColor(146, 146, 146, 255));
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
    QBrush brush10(QColor(203, 203, 203, 255));
    brush10.setStyle(Qt::SolidPattern);
    palette.setBrush(QPalette::Active, QPalette::Window, brush10);
    QBrush brush11(QColor(0, 0, 0, 255));
    brush11.setStyle(Qt::SolidPattern);
    palette.setBrush(QPalette::Active, QPalette::Shadow, brush11);
    QBrush brush12(QColor(0, 0, 128, 255));
    brush12.setStyle(Qt::SolidPattern);
    palette.setBrush(QPalette::Active, QPalette::Highlight, brush12);
    QBrush brush13(QColor(255, 255, 255, 255));
    brush13.setStyle(Qt::SolidPattern);
    palette.setBrush(QPalette::Active, QPalette::HighlightedText, brush13);
    QBrush brush14(QColor(0, 0, 0, 255));
    brush14.setStyle(Qt::SolidPattern);
    palette.setBrush(QPalette::Active, QPalette::Link, brush14);
    QBrush brush15(QColor(0, 0, 0, 255));
    brush15.setStyle(Qt::SolidPattern);
    palette.setBrush(QPalette::Active, QPalette::LinkVisited, brush15);
    QBrush brush16(QColor(232, 232, 232, 255));
    brush16.setStyle(Qt::SolidPattern);
    palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush16);
    QBrush brush17(QColor(0, 0, 0, 255));
    brush17.setStyle(Qt::SolidPattern);
    palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush17);
    QBrush brush18(QColor(220, 220, 220, 255));
    brush18.setStyle(Qt::SolidPattern);
    palette.setBrush(QPalette::Inactive, QPalette::Button, brush18);
    QBrush brush19(QColor(255, 255, 255, 255));
    brush19.setStyle(Qt::SolidPattern);
    palette.setBrush(QPalette::Inactive, QPalette::Light, brush19);
    QBrush brush20(QColor(253, 253, 253, 255));
    brush20.setStyle(Qt::SolidPattern);
    palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush20);
    QBrush brush21(QColor(110, 110, 110, 255));
    brush21.setStyle(Qt::SolidPattern);
    palette.setBrush(QPalette::Inactive, QPalette::Dark, brush21);
    QBrush brush22(QColor(146, 146, 146, 255));
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
    QBrush brush27(QColor(203, 203, 203, 255));
    brush27.setStyle(Qt::SolidPattern);
    palette.setBrush(QPalette::Inactive, QPalette::Window, brush27);
    QBrush brush28(QColor(0, 0, 0, 255));
    brush28.setStyle(Qt::SolidPattern);
    palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush28);
    QBrush brush29(QColor(0, 0, 128, 255));
    brush29.setStyle(Qt::SolidPattern);
    palette.setBrush(QPalette::Inactive, QPalette::Highlight, brush29);
    QBrush brush30(QColor(255, 255, 255, 255));
    brush30.setStyle(Qt::SolidPattern);
    palette.setBrush(QPalette::Inactive, QPalette::HighlightedText, brush30);
    QBrush brush31(QColor(0, 0, 255, 255));
    brush31.setStyle(Qt::SolidPattern);
    palette.setBrush(QPalette::Inactive, QPalette::Link, brush31);
    QBrush brush32(QColor(255, 0, 255, 255));
    brush32.setStyle(Qt::SolidPattern);
    palette.setBrush(QPalette::Inactive, QPalette::LinkVisited, brush32);
    QBrush brush33(QColor(232, 232, 232, 255));
    brush33.setStyle(Qt::SolidPattern);
    palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush33);
    QBrush brush34(QColor(128, 128, 128, 255));
    brush34.setStyle(Qt::SolidPattern);
    palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush34);
    QBrush brush35(QColor(220, 220, 220, 255));
    brush35.setStyle(Qt::SolidPattern);
    palette.setBrush(QPalette::Disabled, QPalette::Button, brush35);
    QBrush brush36(QColor(255, 255, 255, 255));
    brush36.setStyle(Qt::SolidPattern);
    palette.setBrush(QPalette::Disabled, QPalette::Light, brush36);
    QBrush brush37(QColor(253, 253, 253, 255));
    brush37.setStyle(Qt::SolidPattern);
    palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush37);
    QBrush brush38(QColor(110, 110, 110, 255));
    brush38.setStyle(Qt::SolidPattern);
    palette.setBrush(QPalette::Disabled, QPalette::Dark, brush38);
    QBrush brush39(QColor(146, 146, 146, 255));
    brush39.setStyle(Qt::SolidPattern);
    palette.setBrush(QPalette::Disabled, QPalette::Mid, brush39);
    QBrush brush40(QColor(128, 128, 128, 255));
    brush40.setStyle(Qt::SolidPattern);
    palette.setBrush(QPalette::Disabled, QPalette::Text, brush40);
    QBrush brush41(QColor(255, 255, 255, 255));
    brush41.setStyle(Qt::SolidPattern);
    palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush41);
    QBrush brush42(QColor(128, 128, 128, 255));
    brush42.setStyle(Qt::SolidPattern);
    palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush42);
    QBrush brush43(QColor(255, 255, 255, 255));
    brush43.setStyle(Qt::SolidPattern);
    palette.setBrush(QPalette::Disabled, QPalette::Base, brush43);
    QBrush brush44(QColor(203, 203, 203, 255));
    brush44.setStyle(Qt::SolidPattern);
    palette.setBrush(QPalette::Disabled, QPalette::Window, brush44);
    QBrush brush45(QColor(0, 0, 0, 255));
    brush45.setStyle(Qt::SolidPattern);
    palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush45);
    QBrush brush46(QColor(0, 0, 128, 255));
    brush46.setStyle(Qt::SolidPattern);
    palette.setBrush(QPalette::Disabled, QPalette::Highlight, brush46);
    QBrush brush47(QColor(255, 255, 255, 255));
    brush47.setStyle(Qt::SolidPattern);
    palette.setBrush(QPalette::Disabled, QPalette::HighlightedText, brush47);
    QBrush brush48(QColor(0, 0, 255, 255));
    brush48.setStyle(Qt::SolidPattern);
    palette.setBrush(QPalette::Disabled, QPalette::Link, brush48);
    QBrush brush49(QColor(255, 0, 255, 255));
    brush49.setStyle(Qt::SolidPattern);
    palette.setBrush(QPalette::Disabled, QPalette::LinkVisited, brush49);
    QBrush brush50(QColor(232, 232, 232, 255));
    brush50.setStyle(Qt::SolidPattern);
    palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush50);
    sequence->setPalette(palette);
    sequence->setReadOnly(false);

    gridLayout->addWidget(sequence, 0, 1, 1, 3);

    close_button = new QPushButton(PeptideDialogData);
    close_button->setObjectName(QString::fromUtf8("close_button"));
    close_button->setMinimumSize(QSize(140, 30));
    close_button->setMaximumSize(QSize(32767, 30));
    close_button->setDefault(true);

    gridLayout->addWidget(close_button, 2, 0, 1, 2);

    cancel_button = new QPushButton(PeptideDialogData);
    cancel_button->setObjectName(QString::fromUtf8("cancel_button"));
    cancel_button->setMinimumSize(QSize(140, 30));
    cancel_button->setMaximumSize(QSize(32767, 30));

    gridLayout->addWidget(cancel_button, 2, 2, 1, 2);

    angles_group = new QGroupBox(PeptideDialogData);
    angles_group->setObjectName(QString::fromUtf8("angles_group"));
    gridLayout1 = new QGridLayout(angles_group);
    gridLayout1->setSpacing(6);
    gridLayout1->setMargin(9);
    gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
    other = new QRadioButton(angles_group);
    other->setObjectName(QString::fromUtf8("other"));

    gridLayout1->addWidget(other, 2, 0, 1, 1);

    beta = new QRadioButton(angles_group);
    beta->setObjectName(QString::fromUtf8("beta"));

    gridLayout1->addWidget(beta, 1, 0, 1, 1);

    gridLayout2 = new QGridLayout();
    gridLayout2->setSpacing(6);
    gridLayout2->setMargin(0);
    gridLayout2->setObjectName(QString::fromUtf8("gridLayout2"));
    textLabel1_4_3 = new QLabel(angles_group);
    textLabel1_4_3->setObjectName(QString::fromUtf8("textLabel1_4_3"));

    gridLayout2->addWidget(textLabel1_4_3, 2, 2, 1, 1);

    textLabel1_3 = new QLabel(angles_group);
    textLabel1_3->setObjectName(QString::fromUtf8("textLabel1_3"));

    gridLayout2->addWidget(textLabel1_3, 2, 0, 1, 1);

    omega = new QLineEdit(angles_group);
    omega->setObjectName(QString::fromUtf8("omega"));
    QSizePolicy sizePolicy21(static_cast<QSizePolicy::Policy>(5), static_cast<QSizePolicy::Policy>(0));
    sizePolicy21.setHorizontalStretch(0);
    sizePolicy21.setVerticalStretch(0);
    sizePolicy21.setHeightForWidth(omega->sizePolicy().hasHeightForWidth());
    omega->setSizePolicy(sizePolicy21);
    omega->setMaximumSize(QSize(50, 32767));
    omega->setAlignment(Qt::AlignRight);

    gridLayout2->addWidget(omega, 2, 1, 1, 1);

    psi = new QLineEdit(angles_group);
    psi->setObjectName(QString::fromUtf8("psi"));
    psi->setEnabled(false);
    QSizePolicy sizePolicy22(static_cast<QSizePolicy::Policy>(5), static_cast<QSizePolicy::Policy>(0));
    sizePolicy22.setHorizontalStretch(0);
    sizePolicy22.setVerticalStretch(0);
    sizePolicy22.setHeightForWidth(psi->sizePolicy().hasHeightForWidth());
    psi->setSizePolicy(sizePolicy22);
    psi->setMaximumSize(QSize(50, 32767));
    psi->setAlignment(Qt::AlignRight);

    gridLayout2->addWidget(psi, 1, 1, 1, 1);

    textLabel1_4_2 = new QLabel(angles_group);
    textLabel1_4_2->setObjectName(QString::fromUtf8("textLabel1_4_2"));

    gridLayout2->addWidget(textLabel1_4_2, 1, 2, 1, 1);

    textLabel1_2 = new QLabel(angles_group);
    textLabel1_2->setObjectName(QString::fromUtf8("textLabel1_2"));

    gridLayout2->addWidget(textLabel1_2, 1, 0, 1, 1);

    textLabel1 = new QLabel(angles_group);
    textLabel1->setObjectName(QString::fromUtf8("textLabel1"));

    gridLayout2->addWidget(textLabel1, 0, 0, 1, 1);

    textLabel1_4 = new QLabel(angles_group);
    textLabel1_4->setObjectName(QString::fromUtf8("textLabel1_4"));

    gridLayout2->addWidget(textLabel1_4, 0, 2, 1, 1);

    phi = new QLineEdit(angles_group);
    phi->setObjectName(QString::fromUtf8("phi"));
    phi->setEnabled(false);
    QSizePolicy sizePolicy23(static_cast<QSizePolicy::Policy>(5), static_cast<QSizePolicy::Policy>(0));
    sizePolicy23.setHorizontalStretch(0);
    sizePolicy23.setVerticalStretch(0);
    sizePolicy23.setHeightForWidth(phi->sizePolicy().hasHeightForWidth());
    phi->setSizePolicy(sizePolicy23);
    phi->setMaximumSize(QSize(50, 32767));
    phi->setAlignment(Qt::AlignRight);

    gridLayout2->addWidget(phi, 0, 1, 1, 1);


    gridLayout1->addLayout(gridLayout2, 3, 0, 1, 1);

    alpha = new QRadioButton(angles_group);
    alpha->setObjectName(QString::fromUtf8("alpha"));
    alpha->setChecked(true);

    gridLayout1->addWidget(alpha, 0, 0, 1, 1);


    gridLayout->addWidget(angles_group, 1, 3, 1, 1);

    QWidget::setTabOrder(sequence, close_button);
    QWidget::setTabOrder(close_button, ala);
    QWidget::setTabOrder(ala, arg);
    QWidget::setTabOrder(arg, asn);
    QWidget::setTabOrder(asn, asp);
    QWidget::setTabOrder(asp, cys);
    QWidget::setTabOrder(cys, gln);
    QWidget::setTabOrder(gln, glu);
    QWidget::setTabOrder(glu, gly);
    QWidget::setTabOrder(gly, his);
    QWidget::setTabOrder(his, ile);
    QWidget::setTabOrder(ile, leu);
    QWidget::setTabOrder(leu, lys);
    QWidget::setTabOrder(lys, met);
    QWidget::setTabOrder(met, phe);
    QWidget::setTabOrder(phe, pro);
    QWidget::setTabOrder(pro, ser);
    QWidget::setTabOrder(ser, thr);
    QWidget::setTabOrder(thr, trp);
    QWidget::setTabOrder(trp, tyr);
    QWidget::setTabOrder(tyr, val);
    QWidget::setTabOrder(val, alpha);
    QWidget::setTabOrder(alpha, phi);
    QWidget::setTabOrder(phi, psi);
    QWidget::setTabOrder(psi, omega);

    retranslateUi(PeptideDialogData);

    QSize size(441, 283);
    size = size.expandedTo(PeptideDialogData->minimumSizeHint());
    PeptideDialogData->resize(size);


    QMetaObject::connectSlotsByName(PeptideDialogData);
    } // setupUi

    void retranslateUi(QDialog *PeptideDialogData)
    {
    PeptideDialogData->setWindowTitle(QApplication::translate("PeptideDialogData", "PeptideBuilder", 0, QApplication::UnicodeUTF8));
    ala->setText(QApplication::translate("PeptideDialogData", "Ala", 0, QApplication::UnicodeUTF8));
    arg->setText(QApplication::translate("PeptideDialogData", "Arg", 0, QApplication::UnicodeUTF8));
    asn->setText(QApplication::translate("PeptideDialogData", "Asn", 0, QApplication::UnicodeUTF8));
    asp->setText(QApplication::translate("PeptideDialogData", "Asp", 0, QApplication::UnicodeUTF8));
    cys->setText(QApplication::translate("PeptideDialogData", "Cys", 0, QApplication::UnicodeUTF8));
    gln->setText(QApplication::translate("PeptideDialogData", "Gln", 0, QApplication::UnicodeUTF8));
    glu->setText(QApplication::translate("PeptideDialogData", "Glu", 0, QApplication::UnicodeUTF8));
    gly->setText(QApplication::translate("PeptideDialogData", "Gly", 0, QApplication::UnicodeUTF8));
    his->setText(QApplication::translate("PeptideDialogData", "His", 0, QApplication::UnicodeUTF8));
    ile->setText(QApplication::translate("PeptideDialogData", "Ile", 0, QApplication::UnicodeUTF8));
    leu->setText(QApplication::translate("PeptideDialogData", "Leu", 0, QApplication::UnicodeUTF8));
    lys->setText(QApplication::translate("PeptideDialogData", "Lys", 0, QApplication::UnicodeUTF8));
    met->setText(QApplication::translate("PeptideDialogData", "Met", 0, QApplication::UnicodeUTF8));
    phe->setText(QApplication::translate("PeptideDialogData", "Phe", 0, QApplication::UnicodeUTF8));
    pro->setText(QApplication::translate("PeptideDialogData", "Pro", 0, QApplication::UnicodeUTF8));
    ser->setText(QApplication::translate("PeptideDialogData", "Ser", 0, QApplication::UnicodeUTF8));
    thr->setText(QApplication::translate("PeptideDialogData", "Thr", 0, QApplication::UnicodeUTF8));
    trp->setText(QApplication::translate("PeptideDialogData", "Trp", 0, QApplication::UnicodeUTF8));
    tyr->setText(QApplication::translate("PeptideDialogData", "Tyr", 0, QApplication::UnicodeUTF8));
    val->setText(QApplication::translate("PeptideDialogData", "Val", 0, QApplication::UnicodeUTF8));
    textLabel2->setText(QApplication::translate("PeptideDialogData", "Sequence", 0, QApplication::UnicodeUTF8));
    sequence->setToolTip(QApplication::translate("PeptideDialogData", "Enter amino acids", 0, QApplication::UnicodeUTF8));
    close_button->setToolTip(QApplication::translate("PeptideDialogData", "Build peptide", 0, QApplication::UnicodeUTF8));
    close_button->setText(QApplication::translate("PeptideDialogData", "&Build", 0, QApplication::UnicodeUTF8));
    close_button->setShortcut(QApplication::translate("PeptideDialogData", "Alt+B", 0, QApplication::UnicodeUTF8));
    cancel_button->setText(QApplication::translate("PeptideDialogData", "C&ancel", 0, QApplication::UnicodeUTF8));
    cancel_button->setShortcut(QApplication::translate("PeptideDialogData", "Alt+A", 0, QApplication::UnicodeUTF8));
    angles_group->setTitle(QApplication::translate("PeptideDialogData", "Backbone", 0, QApplication::UnicodeUTF8));
    other->setText(QApplication::translate("PeptideDialogData", "Other", 0, QApplication::UnicodeUTF8));
    beta->setText(QApplication::translate("PeptideDialogData", "Beta sheet", 0, QApplication::UnicodeUTF8));
    textLabel1_4_3->setText(QApplication::translate("PeptideDialogData", "\302\260", 0, QApplication::UnicodeUTF8));
    textLabel1_3->setText(QApplication::translate("PeptideDialogData", "Omega:", 0, QApplication::UnicodeUTF8));
    omega->setText(QApplication::translate("PeptideDialogData", "180", 0, QApplication::UnicodeUTF8));
    psi->setText(QApplication::translate("PeptideDialogData", "-58", 0, QApplication::UnicodeUTF8));
    textLabel1_4_2->setText(QApplication::translate("PeptideDialogData", "\302\260", 0, QApplication::UnicodeUTF8));
    textLabel1_2->setText(QApplication::translate("PeptideDialogData", "Psi:", 0, QApplication::UnicodeUTF8));
    textLabel1->setText(QApplication::translate("PeptideDialogData", "Phi:", 0, QApplication::UnicodeUTF8));
    textLabel1_4->setText(QApplication::translate("PeptideDialogData", "\302\260", 0, QApplication::UnicodeUTF8));
    phi->setText(QApplication::translate("PeptideDialogData", "-47", 0, QApplication::UnicodeUTF8));
    alpha->setText(QApplication::translate("PeptideDialogData", "Alpha helix", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(PeptideDialogData);
    } // retranslateUi

};

namespace Ui {
    class PeptideDialogData: public Ui_PeptideDialogData {};
} // namespace Ui

#endif // PEPTIDEDIALOGDATA_H
