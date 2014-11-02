/********************************************************************************
** Form generated from reading ui file 'clippingDialog.ui'
**
** Created: Wed Mar 19 14:28:17 2008
**      by: Qt User Interface Compiler version 4.2.2
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef CLIPPINGDIALOGDATA_H
#define CLIPPINGDIALOGDATA_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QTableWidget>

class Ui_ClippingDialogData
{
public:
    QLabel *textLabel1;
    QPushButton *buttonOk;
    QPushButton *buttonCancel;
    QTableWidget *listview;

    void setupUi(QDialog *ClippingDialogData)
    {
    ClippingDialogData->setObjectName(QString::fromUtf8("ClippingDialogData"));
    ClippingDialogData->setSizeGripEnabled(false);
    textLabel1 = new QLabel(ClippingDialogData);
    textLabel1->setObjectName(QString::fromUtf8("textLabel1"));
    textLabel1->setGeometry(QRect(10, 7, 484, 35));
    buttonOk = new QPushButton(ClippingDialogData);
    buttonOk->setObjectName(QString::fromUtf8("buttonOk"));
    buttonOk->setGeometry(QRect(11, 557, 239, 25));
    buttonOk->setAutoDefault(true);
    buttonOk->setDefault(true);
    buttonCancel = new QPushButton(ClippingDialogData);
    buttonCancel->setObjectName(QString::fromUtf8("buttonCancel"));
    buttonCancel->setGeometry(QRect(256, 557, 239, 25));
    buttonCancel->setAutoDefault(true);
    listview = new QTableWidget(ClippingDialogData);
    listview->setObjectName(QString::fromUtf8("listview"));
    listview->setGeometry(QRect(10, 40, 491, 511));
    QWidget::setTabOrder(listview, buttonOk);
    QWidget::setTabOrder(buttonOk, buttonCancel);

    retranslateUi(ClippingDialogData);

    QSize size(507, 593);
    size = size.expandedTo(ClippingDialogData->minimumSizeHint());
    ClippingDialogData->resize(size);


    QMetaObject::connectSlotsByName(ClippingDialogData);
    } // setupUi

    void retranslateUi(QDialog *ClippingDialogData)
    {
    ClippingDialogData->setWindowTitle(QApplication::translate("ClippingDialogData", "Clipping Dialog", 0, QApplication::UnicodeUTF8));
    textLabel1->setText(QApplication::translate("ClippingDialogData", "Select the representations to be clipped by this plane:", 0, QApplication::UnicodeUTF8));
    buttonOk->setText(QApplication::translate("ClippingDialogData", "O&K", 0, QApplication::UnicodeUTF8));
    buttonOk->setShortcut(QApplication::translate("ClippingDialogData", "Alt+K", 0, QApplication::UnicodeUTF8));
    buttonCancel->setText(QApplication::translate("ClippingDialogData", "C&ancel", 0, QApplication::UnicodeUTF8));
    buttonCancel->setShortcut(QApplication::translate("ClippingDialogData", "Alt+A", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(ClippingDialogData);
    } // retranslateUi

};

namespace Ui {
    class ClippingDialogData: public Ui_ClippingDialogData {};
} // namespace Ui

#endif // CLIPPINGDIALOGDATA_H
