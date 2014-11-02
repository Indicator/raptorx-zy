/********************************************************************************
** Form generated from reading ui file 'aboutDialog.ui'
**
** Created: Wed Mar 19 14:31:24 2008
**      by: Qt User Interface Compiler version 4.2.2
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_ABOUTDIALOG_H
#define UI_ABOUTDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>

class Ui_AboutDialog
{
public:
    QGridLayout *gridLayout;
    QLabel *TextLabel1;
    QPushButton *PushButton1;
    QLabel *qt_version_label;
    QLabel *BALL_version_label;
    QLabel *BALLView_version_label;
    QLabel *PixmapLabel1;

    void setupUi(QDialog *AboutDialog)
    {
    AboutDialog->setObjectName(QString::fromUtf8("AboutDialog"));
    QSizePolicy sizePolicy(static_cast<QSizePolicy::Policy>(7), static_cast<QSizePolicy::Policy>(7));
    sizePolicy.setHorizontalStretch(0);
    sizePolicy.setVerticalStretch(0);
    sizePolicy.setHeightForWidth(AboutDialog->sizePolicy().hasHeightForWidth());
    AboutDialog->setSizePolicy(sizePolicy);
    AboutDialog->setMinimumSize(QSize(228, 370));
    QPalette palette;
    palette.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(0), QColor(0, 0, 0));
    palette.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(1), QColor(236, 233, 216));
    palette.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(2), QColor(255, 255, 255));
    palette.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(3), QColor(245, 244, 235));
    palette.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(4), QColor(118, 116, 108));
    palette.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(5), QColor(157, 155, 143));
    palette.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(6), QColor(0, 0, 0));
    palette.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(7), QColor(255, 255, 255));
    palette.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(8), QColor(0, 0, 0));
    palette.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(9), QColor(255, 255, 255));
    palette.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(10), QColor(255, 255, 255));
    palette.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(11), QColor(0, 0, 0));
    palette.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(12), QColor(0, 0, 128));
    palette.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(13), QColor(255, 255, 255));
    palette.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(14), QColor(0, 0, 0));
    palette.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(15), QColor(0, 0, 0));
    palette.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(16), QColor(232, 232, 232));
    palette.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(0), QColor(0, 0, 0));
    palette.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(1), QColor(236, 233, 216));
    palette.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(2), QColor(255, 255, 255));
    palette.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(3), QColor(255, 254, 249));
    palette.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(4), QColor(118, 116, 108));
    palette.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(5), QColor(157, 155, 143));
    palette.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(6), QColor(0, 0, 0));
    palette.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(7), QColor(255, 255, 255));
    palette.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(8), QColor(0, 0, 0));
    palette.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(9), QColor(255, 255, 255));
    palette.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(10), QColor(255, 255, 255));
    palette.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(11), QColor(0, 0, 0));
    palette.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(12), QColor(0, 0, 128));
    palette.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(13), QColor(255, 255, 255));
    palette.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(14), QColor(0, 0, 255));
    palette.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(15), QColor(255, 0, 255));
    palette.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(16), QColor(232, 232, 232));
    palette.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(0), QColor(128, 128, 128));
    palette.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(1), QColor(236, 233, 216));
    palette.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(2), QColor(255, 255, 255));
    palette.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(3), QColor(255, 254, 249));
    palette.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(4), QColor(118, 116, 108));
    palette.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(5), QColor(157, 155, 143));
    palette.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(6), QColor(128, 128, 128));
    palette.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(7), QColor(255, 255, 255));
    palette.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(8), QColor(128, 128, 128));
    palette.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(9), QColor(255, 255, 255));
    palette.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(10), QColor(255, 255, 255));
    palette.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(11), QColor(0, 0, 0));
    palette.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(12), QColor(0, 0, 128));
    palette.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(13), QColor(255, 255, 255));
    palette.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(14), QColor(0, 0, 255));
    palette.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(15), QColor(255, 0, 255));
    palette.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(16), QColor(232, 232, 232));
    AboutDialog->setPalette(palette);
    gridLayout = new QGridLayout(AboutDialog);
    gridLayout->setSpacing(6);
    gridLayout->setMargin(9);
    gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
    TextLabel1 = new QLabel(AboutDialog);
    TextLabel1->setObjectName(QString::fromUtf8("TextLabel1"));
    TextLabel1->setTextFormat(Qt::AutoText);
    TextLabel1->setAlignment(Qt::AlignCenter);

    gridLayout->addWidget(TextLabel1, 4, 0, 1, 1);

    PushButton1 = new QPushButton(AboutDialog);
    PushButton1->setObjectName(QString::fromUtf8("PushButton1"));
    PushButton1->setDefault(true);

    gridLayout->addWidget(PushButton1, 5, 0, 1, 1);

    qt_version_label = new QLabel(AboutDialog);
    qt_version_label->setObjectName(QString::fromUtf8("qt_version_label"));
    qt_version_label->setTextFormat(Qt::AutoText);
    qt_version_label->setAlignment(Qt::AlignCenter);

    gridLayout->addWidget(qt_version_label, 3, 0, 1, 1);

    BALL_version_label = new QLabel(AboutDialog);
    BALL_version_label->setObjectName(QString::fromUtf8("BALL_version_label"));
    BALL_version_label->setTextFormat(Qt::AutoText);
    BALL_version_label->setAlignment(Qt::AlignCenter);

    gridLayout->addWidget(BALL_version_label, 2, 0, 1, 1);

    BALLView_version_label = new QLabel(AboutDialog);
    BALLView_version_label->setObjectName(QString::fromUtf8("BALLView_version_label"));
    BALLView_version_label->setTextFormat(Qt::AutoText);
    BALLView_version_label->setAlignment(Qt::AlignCenter);

    gridLayout->addWidget(BALLView_version_label, 1, 0, 1, 1);

    PixmapLabel1 = new QLabel(AboutDialog);
    PixmapLabel1->setObjectName(QString::fromUtf8("PixmapLabel1"));
    PixmapLabel1->setFocusPolicy(Qt::StrongFocus);
    PixmapLabel1->setPixmap(QPixmap(QString::fromUtf8("logo.png")));
    PixmapLabel1->setScaledContents(false);
    PixmapLabel1->setAlignment(Qt::AlignCenter);

    gridLayout->addWidget(PixmapLabel1, 0, 0, 1, 1);

    QWidget::setTabOrder(PixmapLabel1, PushButton1);

    retranslateUi(AboutDialog);

    QSize size(246, 397);
    size = size.expandedTo(AboutDialog->minimumSizeHint());
    AboutDialog->resize(size);

    QObject::connect(PushButton1, SIGNAL(clicked()), AboutDialog, SLOT(accept()));

    QMetaObject::connectSlotsByName(AboutDialog);
    } // setupUi

    void retranslateUi(QDialog *AboutDialog)
    {
    AboutDialog->setWindowTitle(QApplication::translate("AboutDialog", "About BALLView", 0, QApplication::UnicodeUTF8));
    TextLabel1->setText(QApplication::translate("AboutDialog", "Andreas Moll\n"
"Andreas Hildebrandt\n"
"Heiko Klein\n"
"Oliver Kohlbacher", 0, QApplication::UnicodeUTF8));
    PushButton1->setText(QApplication::translate("AboutDialog", "O&K", 0, QApplication::UnicodeUTF8));
    PushButton1->setShortcut(QApplication::translate("AboutDialog", "Alt+K", 0, QApplication::UnicodeUTF8));
    qt_version_label->setText(QApplication::translate("AboutDialog", "QT Version", 0, QApplication::UnicodeUTF8));
    BALL_version_label->setText(QApplication::translate("AboutDialog", "(BALL 1.0)", 0, QApplication::UnicodeUTF8));
    BALLView_version_label->setText(QApplication::translate("AboutDialog", "<h1><b>BALLView 1.0</b></h1>", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(AboutDialog);
    } // retranslateUi

};

namespace Ui {
    class AboutDialog: public Ui_AboutDialog {};
} // namespace Ui

#endif // UI_ABOUTDIALOG_H
