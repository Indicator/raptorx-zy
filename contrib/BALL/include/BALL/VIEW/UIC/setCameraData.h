/********************************************************************************
** Form generated from reading ui file 'setCamera.ui'
**
** Created: Wed Mar 19 14:28:18 2008
**      by: Qt User Interface Compiler version 4.2.2
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef SETCAMERADATA_H
#define SETCAMERADATA_H

#include <BALL/COMMON/global.h>
#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>

class Ui_SetCameraData
{
public:
    QLineEdit *look_z;
    QLineEdit *look_y;
    QPushButton *ok_button;
    QPushButton *cancel_button;
    QLineEdit *view_x;
    QLineEdit *view_y;
    QLineEdit *view_z;
    QLabel *view_label;
    QLabel *look_label;
    QLineEdit *look_x;

    void setupUi(QDialog *SetCameraData)
    {
    SetCameraData->setObjectName(QString::fromUtf8("SetCameraData"));
    SetCameraData->setMinimumSize(QSize(350, 0));
    SetCameraData->setMaximumSize(QSize(350, 32767));
    look_z = new QLineEdit(SetCameraData);
    look_z->setObjectName(QString::fromUtf8("look_z"));
    look_z->setGeometry(QRect(272, 36, 68, 23));
    look_y = new QLineEdit(SetCameraData);
    look_y->setObjectName(QString::fromUtf8("look_y"));
    look_y->setGeometry(QRect(193, 36, 68, 23));
    ok_button = new QPushButton(SetCameraData);
    ok_button->setObjectName(QString::fromUtf8("ok_button"));
    ok_button->setGeometry(QRect(12, 76, 162, 30));
    QSizePolicy sizePolicy(static_cast<QSizePolicy::Policy>(7), static_cast<QSizePolicy::Policy>(0));
    sizePolicy.setHorizontalStretch(0);
    sizePolicy.setVerticalStretch(0);
    sizePolicy.setHeightForWidth(ok_button->sizePolicy().hasHeightForWidth());
    ok_button->setSizePolicy(sizePolicy);
    ok_button->setMinimumSize(QSize(0, 30));
    ok_button->setMaximumSize(QSize(32767, 30));
    ok_button->setDefault(true);
    cancel_button = new QPushButton(SetCameraData);
    cancel_button->setObjectName(QString::fromUtf8("cancel_button"));
    cancel_button->setGeometry(QRect(180, 76, 161, 30));
    QSizePolicy sizePolicy1(static_cast<QSizePolicy::Policy>(7), static_cast<QSizePolicy::Policy>(0));
    sizePolicy1.setHorizontalStretch(0);
    sizePolicy1.setVerticalStretch(0);
    sizePolicy1.setHeightForWidth(cancel_button->sizePolicy().hasHeightForWidth());
    cancel_button->setSizePolicy(sizePolicy1);
    cancel_button->setMinimumSize(QSize(0, 30));
    cancel_button->setMaximumSize(QSize(32767, 30));
    view_x = new QLineEdit(SetCameraData);
    view_x->setObjectName(QString::fromUtf8("view_x"));
    view_x->setGeometry(QRect(113, 8, 68, 23));
    view_y = new QLineEdit(SetCameraData);
    view_y->setObjectName(QString::fromUtf8("view_y"));
    view_y->setGeometry(QRect(193, 7, 68, 23));
    view_z = new QLineEdit(SetCameraData);
    view_z->setObjectName(QString::fromUtf8("view_z"));
    view_z->setGeometry(QRect(272, 7, 68, 23));
    view_label = new QLabel(SetCameraData);
    view_label->setObjectName(QString::fromUtf8("view_label"));
    view_label->setGeometry(QRect(6, 10, 101, 21));
    look_label = new QLabel(SetCameraData);
    look_label->setObjectName(QString::fromUtf8("look_label"));
    look_label->setGeometry(QRect(8, 40, 96, 21));
    look_x = new QLineEdit(SetCameraData);
    look_x->setObjectName(QString::fromUtf8("look_x"));
    look_x->setGeometry(QRect(113, 37, 68, 23));
    QWidget::setTabOrder(view_x, view_y);
    QWidget::setTabOrder(view_y, view_z);
    QWidget::setTabOrder(view_z, look_x);
    QWidget::setTabOrder(look_x, look_y);
    QWidget::setTabOrder(look_y, look_z);
    QWidget::setTabOrder(look_z, ok_button);
    QWidget::setTabOrder(ok_button, cancel_button);

    retranslateUi(SetCameraData);

    QSize size(350, 112);
    size = size.expandedTo(SetCameraData->minimumSizeHint());
    SetCameraData->resize(size);


    QMetaObject::connectSlotsByName(SetCameraData);
    } // setupUi

    void retranslateUi(QDialog *SetCameraData)
    {
    SetCameraData->setWindowTitle(QApplication::translate("SetCameraData", "Set Camera", 0, QApplication::UnicodeUTF8));
    ok_button->setToolTip(QApplication::translate("SetCameraData", "Set camera to new coordinates", 0, QApplication::UnicodeUTF8));
    ok_button->setText(QApplication::translate("SetCameraData", "O&K", 0, QApplication::UnicodeUTF8));
    ok_button->setShortcut(QApplication::translate("SetCameraData", "Alt+K", 0, QApplication::UnicodeUTF8));
    cancel_button->setToolTip(QApplication::translate("SetCameraData", "Close window without reseting camera", 0, QApplication::UnicodeUTF8));
    cancel_button->setText(QApplication::translate("SetCameraData", "C&ancel", 0, QApplication::UnicodeUTF8));
    cancel_button->setShortcut(QApplication::translate("SetCameraData", "Alt+A", 0, QApplication::UnicodeUTF8));
    view_label->setText(QApplication::translate("SetCameraData", "View point", 0, QApplication::UnicodeUTF8));
    look_label->setText(QApplication::translate("SetCameraData", "Look at", 0, QApplication::UnicodeUTF8));
    look_x->setInputMask(QString());
    Q_UNUSED(SetCameraData);
    } // retranslateUi

};

namespace Ui {
    class SetCameraData: public Ui_SetCameraData {};
} // namespace Ui

#endif // SETCAMERADATA_H
