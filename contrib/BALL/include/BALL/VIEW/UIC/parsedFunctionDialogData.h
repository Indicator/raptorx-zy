/********************************************************************************
** Form generated from reading ui file 'parsedFunctionDialog.ui'
**
** Created: Wed Mar 19 14:28:18 2008
**      by: Qt User Interface Compiler version 4.2.2
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef PARSEDFUNCTIONDIALOGDATA_H
#define PARSEDFUNCTIONDIALOGDATA_H

#include <BALL/COMMON/global.h>
#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGroupBox>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>

class Ui_ParsedFunctionDialogData
{
public:
    QPushButton *buttonOk;
    QPushButton *buttonCancel;
    QGroupBox *groupBox1_2;
    QLineEdit *y_axis;
    QGroupBox *groupBox1;
    QLineEdit *x_axis;

    void setupUi(QDialog *ParsedFunctionDialogData)
    {
    ParsedFunctionDialogData->setObjectName(QString::fromUtf8("ParsedFunctionDialogData"));
    ParsedFunctionDialogData->setSizeGripEnabled(false);
    buttonOk = new QPushButton(ParsedFunctionDialogData);
    buttonOk->setObjectName(QString::fromUtf8("buttonOk"));
    buttonOk->setGeometry(QRect(6, 109, 217, 30));
    buttonOk->setMinimumSize(QSize(0, 30));
    buttonOk->setAutoDefault(true);
    buttonOk->setDefault(true);
    buttonCancel = new QPushButton(ParsedFunctionDialogData);
    buttonCancel->setObjectName(QString::fromUtf8("buttonCancel"));
    buttonCancel->setGeometry(QRect(229, 109, 216, 30));
    buttonCancel->setMinimumSize(QSize(0, 30));
    buttonCancel->setAutoDefault(true);
    groupBox1_2 = new QGroupBox(ParsedFunctionDialogData);
    groupBox1_2->setObjectName(QString::fromUtf8("groupBox1_2"));
    groupBox1_2->setGeometry(QRect(-2, 57, 460, 50));
    y_axis = new QLineEdit(groupBox1_2);
    y_axis->setObjectName(QString::fromUtf8("y_axis"));
    y_axis->setGeometry(QRect(7, 17, 442, 24));
    groupBox1 = new QGroupBox(ParsedFunctionDialogData);
    groupBox1->setObjectName(QString::fromUtf8("groupBox1"));
    groupBox1->setGeometry(QRect(-3, 3, 460, 50));
    x_axis = new QLineEdit(groupBox1);
    x_axis->setObjectName(QString::fromUtf8("x_axis"));
    x_axis->setGeometry(QRect(7, 17, 442, 24));
    QWidget::setTabOrder(x_axis, y_axis);
    QWidget::setTabOrder(y_axis, buttonOk);
    QWidget::setTabOrder(buttonOk, buttonCancel);

    retranslateUi(ParsedFunctionDialogData);

    QSize size(457, 148);
    size = size.expandedTo(ParsedFunctionDialogData->minimumSizeHint());
    ParsedFunctionDialogData->resize(size);


    QMetaObject::connectSlotsByName(ParsedFunctionDialogData);
    } // setupUi

    void retranslateUi(QDialog *ParsedFunctionDialogData)
    {
    ParsedFunctionDialogData->setWindowTitle(QApplication::translate("ParsedFunctionDialogData", "Parsed Function", 0, QApplication::UnicodeUTF8));
    buttonOk->setText(QApplication::translate("ParsedFunctionDialogData", "&OK", 0, QApplication::UnicodeUTF8));
    buttonOk->setShortcut(QString());
    buttonCancel->setText(QApplication::translate("ParsedFunctionDialogData", "&Cancel", 0, QApplication::UnicodeUTF8));
    buttonCancel->setShortcut(QString());
    groupBox1_2->setTitle(QApplication::translate("ParsedFunctionDialogData", "Y-axis", 0, QApplication::UnicodeUTF8));
    groupBox1->setTitle(QApplication::translate("ParsedFunctionDialogData", "X-axis", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(ParsedFunctionDialogData);
    } // retranslateUi

};

namespace Ui {
    class ParsedFunctionDialogData: public Ui_ParsedFunctionDialogData {};
} // namespace Ui

#endif // PARSEDFUNCTIONDIALOGDATA_H
