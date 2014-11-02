/********************************************************************************
** Form generated from reading ui file 'demoTutorialDialog.ui'
**
** Created: Wed Mar 19 14:31:24 2008
**      by: Qt User Interface Compiler version 4.2.2
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_DEMOTUTORIALDIALOG_H
#define UI_DEMOTUTORIALDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QPushButton>
#include <QtGui/QTextBrowser>

class Ui_DemoTutorialDialogData
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *hboxLayout;
    QPushButton *cancel_button;
    QPushButton *next_button;
    QTextBrowser *text_browser;

    void setupUi(QDialog *DemoTutorialDialogData)
    {
    DemoTutorialDialogData->setObjectName(QString::fromUtf8("DemoTutorialDialogData"));
    DemoTutorialDialogData->setBaseSize(QSize(100, 100));
    DemoTutorialDialogData->setSizeGripEnabled(true);
    gridLayout = new QGridLayout(DemoTutorialDialogData);
    gridLayout->setSpacing(6);
    gridLayout->setMargin(5);
    gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
    hboxLayout = new QHBoxLayout();
    hboxLayout->setSpacing(6);
    hboxLayout->setMargin(0);
    hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
    cancel_button = new QPushButton(DemoTutorialDialogData);
    cancel_button->setObjectName(QString::fromUtf8("cancel_button"));
    cancel_button->setMinimumSize(QSize(0, 30));

    hboxLayout->addWidget(cancel_button);

    next_button = new QPushButton(DemoTutorialDialogData);
    next_button->setObjectName(QString::fromUtf8("next_button"));
    next_button->setMinimumSize(QSize(0, 30));

    hboxLayout->addWidget(next_button);


    gridLayout->addLayout(hboxLayout, 1, 0, 1, 1);

    text_browser = new QTextBrowser(DemoTutorialDialogData);
    text_browser->setObjectName(QString::fromUtf8("text_browser"));
    QSizePolicy sizePolicy(static_cast<QSizePolicy::Policy>(7), static_cast<QSizePolicy::Policy>(7));
    sizePolicy.setHorizontalStretch(1);
    sizePolicy.setVerticalStretch(1);
    sizePolicy.setHeightForWidth(text_browser->sizePolicy().hasHeightForWidth());
    text_browser->setSizePolicy(sizePolicy);

    gridLayout->addWidget(text_browser, 0, 0, 1, 1);


    retranslateUi(DemoTutorialDialogData);

    QSize size(311, 375);
    size = size.expandedTo(DemoTutorialDialogData->minimumSizeHint());
    DemoTutorialDialogData->resize(size);


    QMetaObject::connectSlotsByName(DemoTutorialDialogData);
    } // setupUi

    void retranslateUi(QDialog *DemoTutorialDialogData)
    {
    DemoTutorialDialogData->setWindowTitle(QApplication::translate("DemoTutorialDialogData", "Form1", 0, QApplication::UnicodeUTF8));
    cancel_button->setText(QApplication::translate("DemoTutorialDialogData", "Cancel", 0, QApplication::UnicodeUTF8));
    next_button->setText(QApplication::translate("DemoTutorialDialogData", "Next", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(DemoTutorialDialogData);
    } // retranslateUi

};

namespace Ui {
    class DemoTutorialDialogData: public Ui_DemoTutorialDialogData {};
} // namespace Ui

#endif // UI_DEMOTUTORIALDIALOG_H
