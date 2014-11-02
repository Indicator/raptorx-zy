/********************************************************************************
** Form generated from reading ui file 'setClippingPlane.ui'
**
** Created: Wed Mar 19 14:28:18 2008
**      by: Qt User Interface Compiler version 4.2.2
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef SETCLIPPINGPLANEDATA_H
#define SETCLIPPINGPLANEDATA_H

#include <BALL/COMMON/global.h>
#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>

class Ui_SetClippingData
{
public:
    QLineEdit *look_z;
    QLineEdit *look_y;
    QPushButton *cancel_button;
    QLineEdit *view_x;
    QLineEdit *view_y;
    QLineEdit *view_z;
    QLineEdit *look_x;
    QLabel *view_label;
    QLabel *look_label;
    QPushButton *ok_button;

    void setupUi(QDialog *SetClippingData)
    {
    SetClippingData->setObjectName(QString::fromUtf8("SetClippingData"));
    SetClippingData->setMinimumSize(QSize(350, 0));
    SetClippingData->setMaximumSize(QSize(350, 32767));
    look_z = new QLineEdit(SetClippingData);
    look_z->setObjectName(QString::fromUtf8("look_z"));
    look_z->setGeometry(QRect(272, 36, 68, 23));
    look_y = new QLineEdit(SetClippingData);
    look_y->setObjectName(QString::fromUtf8("look_y"));
    look_y->setGeometry(QRect(193, 36, 68, 23));
    cancel_button = new QPushButton(SetClippingData);
    cancel_button->setObjectName(QString::fromUtf8("cancel_button"));
    cancel_button->setGeometry(QRect(180, 76, 161, 30));
    QSizePolicy sizePolicy(static_cast<QSizePolicy::Policy>(7), static_cast<QSizePolicy::Policy>(0));
    sizePolicy.setHorizontalStretch(0);
    sizePolicy.setVerticalStretch(0);
    sizePolicy.setHeightForWidth(cancel_button->sizePolicy().hasHeightForWidth());
    cancel_button->setSizePolicy(sizePolicy);
    cancel_button->setMinimumSize(QSize(0, 30));
    cancel_button->setMaximumSize(QSize(32767, 30));
    view_x = new QLineEdit(SetClippingData);
    view_x->setObjectName(QString::fromUtf8("view_x"));
    view_x->setGeometry(QRect(113, 8, 68, 23));
    view_y = new QLineEdit(SetClippingData);
    view_y->setObjectName(QString::fromUtf8("view_y"));
    view_y->setGeometry(QRect(193, 7, 68, 23));
    view_z = new QLineEdit(SetClippingData);
    view_z->setObjectName(QString::fromUtf8("view_z"));
    view_z->setGeometry(QRect(272, 7, 68, 23));
    look_x = new QLineEdit(SetClippingData);
    look_x->setObjectName(QString::fromUtf8("look_x"));
    look_x->setGeometry(QRect(113, 37, 68, 23));
    view_label = new QLabel(SetClippingData);
    view_label->setObjectName(QString::fromUtf8("view_label"));
    view_label->setGeometry(QRect(6, 10, 101, 21));
    look_label = new QLabel(SetClippingData);
    look_label->setObjectName(QString::fromUtf8("look_label"));
    look_label->setGeometry(QRect(8, 40, 96, 21));
    ok_button = new QPushButton(SetClippingData);
    ok_button->setObjectName(QString::fromUtf8("ok_button"));
    ok_button->setGeometry(QRect(12, 76, 162, 30));
    QSizePolicy sizePolicy1(static_cast<QSizePolicy::Policy>(7), static_cast<QSizePolicy::Policy>(0));
    sizePolicy1.setHorizontalStretch(0);
    sizePolicy1.setVerticalStretch(0);
    sizePolicy1.setHeightForWidth(ok_button->sizePolicy().hasHeightForWidth());
    ok_button->setSizePolicy(sizePolicy1);
    ok_button->setMinimumSize(QSize(0, 30));
    ok_button->setMaximumSize(QSize(32767, 30));
    ok_button->setDefault(true);
    QWidget::setTabOrder(view_x, view_y);
    QWidget::setTabOrder(view_y, view_z);
    QWidget::setTabOrder(view_z, look_x);
    QWidget::setTabOrder(look_x, look_y);
    QWidget::setTabOrder(look_y, look_z);
    QWidget::setTabOrder(look_z, ok_button);
    QWidget::setTabOrder(ok_button, cancel_button);

    retranslateUi(SetClippingData);

    QSize size(350, 112);
    size = size.expandedTo(SetClippingData->minimumSizeHint());
    SetClippingData->resize(size);


    QMetaObject::connectSlotsByName(SetClippingData);
    } // setupUi

    void retranslateUi(QDialog *SetClippingData)
    {
    SetClippingData->setWindowTitle(QApplication::translate("SetClippingData", "Set clipping plane position", 0, QApplication::UnicodeUTF8));
    cancel_button->setToolTip(QApplication::translate("SetClippingData", "Close window without reseting camera", 0, QApplication::UnicodeUTF8));
    cancel_button->setText(QApplication::translate("SetClippingData", "C&ancel", 0, QApplication::UnicodeUTF8));
    cancel_button->setShortcut(QApplication::translate("SetClippingData", "Alt+A", 0, QApplication::UnicodeUTF8));
    look_x->setInputMask(QString());
    view_label->setText(QApplication::translate("SetClippingData", "Point", 0, QApplication::UnicodeUTF8));
    look_label->setText(QApplication::translate("SetClippingData", "Normal", 0, QApplication::UnicodeUTF8));
    ok_button->setToolTip(QApplication::translate("SetClippingData", "Set camera to new coordinates", 0, QApplication::UnicodeUTF8));
    ok_button->setText(QApplication::translate("SetClippingData", "O&K", 0, QApplication::UnicodeUTF8));
    ok_button->setShortcut(QApplication::translate("SetClippingData", "Alt+K", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(SetClippingData);
    } // retranslateUi

};

namespace Ui {
    class SetClippingData: public Ui_SetClippingData {};
} // namespace Ui

#endif // SETCLIPPINGPLANEDATA_H
