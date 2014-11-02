/********************************************************************************
** Form generated from reading ui file 'pythonSettings.ui'
**
** Created: Wed Mar 19 14:28:18 2008
**      by: Qt User Interface Compiler version 4.2.2
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef PYTHONSETTINGSDATA_H
#define PYTHONSETTINGSDATA_H

#include <BALL/COMMON/global.h>
#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QStackedWidget>
#include <QtGui/QWidget>

class Ui_PythonSettingsData
{
public:
    QStackedWidget *widget_stack;
    QWidget *General;
    QLabel *textLabel1;
    QLineEdit *script_edit;
    QPushButton *choose_button;
    QPushButton *clear_button;
    QGroupBox *GroupBox1_2_2;
    QHBoxLayout *hboxLayout;
    QLabel *font_label;
    QPushButton *font_button;
    QWidget *Hotkeys;
    QWidget *widget;
    QGridLayout *gridLayout;
    QPushButton *remove_button;
    QLabel *textLabel1_2;
    QPushButton *new_button;

    void setupUi(QWidget *PythonSettingsData)
    {
    PythonSettingsData->setObjectName(QString::fromUtf8("PythonSettingsData"));
    widget_stack = new QStackedWidget(PythonSettingsData);
    widget_stack->setObjectName(QString::fromUtf8("widget_stack"));
    widget_stack->setGeometry(QRect(0, 0, 611, 440));
    General = new QWidget();
    General->setObjectName(QString::fromUtf8("General"));
    textLabel1 = new QLabel(General);
    textLabel1->setObjectName(QString::fromUtf8("textLabel1"));
    textLabel1->setGeometry(QRect(19, 14, 166, 20));
    QSizePolicy sizePolicy(static_cast<QSizePolicy::Policy>(0), static_cast<QSizePolicy::Policy>(0));
    sizePolicy.setHorizontalStretch(0);
    sizePolicy.setVerticalStretch(0);
    sizePolicy.setHeightForWidth(textLabel1->sizePolicy().hasHeightForWidth());
    textLabel1->setSizePolicy(sizePolicy);
    script_edit = new QLineEdit(General);
    script_edit->setObjectName(QString::fromUtf8("script_edit"));
    script_edit->setGeometry(QRect(16, 34, 470, 27));
    script_edit->setReadOnly(true);
    choose_button = new QPushButton(General);
    choose_button->setObjectName(QString::fromUtf8("choose_button"));
    choose_button->setGeometry(QRect(315, 66, 80, 30));
    choose_button->setMinimumSize(QSize(80, 30));
    clear_button = new QPushButton(General);
    clear_button->setObjectName(QString::fromUtf8("clear_button"));
    clear_button->setGeometry(QRect(404, 66, 80, 30));
    clear_button->setMinimumSize(QSize(80, 30));
    GroupBox1_2_2 = new QGroupBox(General);
    GroupBox1_2_2->setObjectName(QString::fromUtf8("GroupBox1_2_2"));
    GroupBox1_2_2->setGeometry(QRect(10, 120, 471, 61));
    hboxLayout = new QHBoxLayout(GroupBox1_2_2);
    hboxLayout->setSpacing(6);
    hboxLayout->setMargin(5);
    hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
    font_label = new QLabel(GroupBox1_2_2);
    font_label->setObjectName(QString::fromUtf8("font_label"));
    QSizePolicy sizePolicy1(static_cast<QSizePolicy::Policy>(3), static_cast<QSizePolicy::Policy>(3));
    sizePolicy1.setHorizontalStretch(0);
    sizePolicy1.setVerticalStretch(0);
    sizePolicy1.setHeightForWidth(font_label->sizePolicy().hasHeightForWidth());
    font_label->setSizePolicy(sizePolicy1);
    font_label->setMaximumSize(QSize(400, 190));
    QFont font;
    font.setFamily(QString::fromUtf8("Sans Serif"));
    font.setPointSize(9);
    font.setBold(false);
    font.setItalic(false);
    font.setUnderline(false);
    font.setWeight(50);
    font.setStrikeOut(false);
    font_label->setFont(font);
    font_label->setFrameShape(QFrame::Panel);
    font_label->setFrameShadow(QFrame::Sunken);
    font_label->setAlignment(Qt::AlignVCenter);

    hboxLayout->addWidget(font_label);

    font_button = new QPushButton(GroupBox1_2_2);
    font_button->setObjectName(QString::fromUtf8("font_button"));
    QSizePolicy sizePolicy2(static_cast<QSizePolicy::Policy>(0), static_cast<QSizePolicy::Policy>(0));
    sizePolicy2.setHorizontalStretch(0);
    sizePolicy2.setVerticalStretch(0);
    sizePolicy2.setHeightForWidth(font_button->sizePolicy().hasHeightForWidth());
    font_button->setSizePolicy(sizePolicy2);
    font_button->setMinimumSize(QSize(0, 28));

    hboxLayout->addWidget(font_button);

    widget_stack->addWidget(General);
    Hotkeys = new QWidget();
    Hotkeys->setObjectName(QString::fromUtf8("Hotkeys"));
    widget = new QWidget(Hotkeys);
    widget->setObjectName(QString::fromUtf8("widget"));
    widget->setGeometry(QRect(0, 350, 611, 78));
    gridLayout = new QGridLayout(widget);
    gridLayout->setSpacing(6);
    gridLayout->setMargin(0);
    gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
    remove_button = new QPushButton(widget);
    remove_button->setObjectName(QString::fromUtf8("remove_button"));
    remove_button->setMinimumSize(QSize(100, 30));
    remove_button->setMaximumSize(QSize(32767, 30));

    gridLayout->addWidget(remove_button, 0, 0, 1, 1);

    textLabel1_2 = new QLabel(widget);
    textLabel1_2->setObjectName(QString::fromUtf8("textLabel1_2"));
    QSizePolicy sizePolicy3(static_cast<QSizePolicy::Policy>(3), static_cast<QSizePolicy::Policy>(5));
    sizePolicy3.setHorizontalStretch(0);
    sizePolicy3.setVerticalStretch(0);
    sizePolicy3.setHeightForWidth(textLabel1_2->sizePolicy().hasHeightForWidth());
    textLabel1_2->setSizePolicy(sizePolicy3);
    textLabel1_2->setMinimumSize(QSize(0, 40));
    textLabel1_2->setMaximumSize(QSize(32767, 50));
    textLabel1_2->setFrameShadow(QFrame::Sunken);
    textLabel1_2->setMargin(0);

    gridLayout->addWidget(textLabel1_2, 1, 0, 1, 2);

    new_button = new QPushButton(widget);
    new_button->setObjectName(QString::fromUtf8("new_button"));
    new_button->setMinimumSize(QSize(150, 30));
    new_button->setMaximumSize(QSize(32767, 30));

    gridLayout->addWidget(new_button, 0, 1, 1, 1);

    widget_stack->addWidget(Hotkeys);

    retranslateUi(PythonSettingsData);

    QSize size(623, 435);
    size = size.expandedTo(PythonSettingsData->minimumSizeHint());
    PythonSettingsData->resize(size);


    widget_stack->setCurrentIndex(0);


    QMetaObject::connectSlotsByName(PythonSettingsData);
    } // setupUi

    void retranslateUi(QWidget *PythonSettingsData)
    {
    PythonSettingsData->setWindowTitle(QApplication::translate("PythonSettingsData", "Python", 0, QApplication::UnicodeUTF8));
    textLabel1->setText(QApplication::translate("PythonSettingsData", "Startup script", 0, QApplication::UnicodeUTF8));
    choose_button->setText(QApplication::translate("PythonSettingsData", "Browse", 0, QApplication::UnicodeUTF8));
    clear_button->setText(QApplication::translate("PythonSettingsData", "Clear", 0, QApplication::UnicodeUTF8));
    GroupBox1_2_2->setTitle(QApplication::translate("PythonSettingsData", "Font for the internal editor", 0, QApplication::UnicodeUTF8));
    font_label->setToolTip(QApplication::translate("PythonSettingsData", "Font Preview", 0, QApplication::UnicodeUTF8));
    font_label->setText(QApplication::translate("PythonSettingsData", "Font Test label", 0, QApplication::UnicodeUTF8));
    font_button->setToolTip(QApplication::translate("PythonSettingsData", "Select the font", 0, QApplication::UnicodeUTF8));
    font_button->setText(QApplication::translate("PythonSettingsData", "Select", 0, QApplication::UnicodeUTF8));
    remove_button->setToolTip(QApplication::translate("PythonSettingsData", "Remove a hotkey, select the row (with the field to the left)", 0, QApplication::UnicodeUTF8));
    remove_button->setText(QApplication::translate("PythonSettingsData", "&Remove", 0, QApplication::UnicodeUTF8));
    remove_button->setShortcut(QApplication::translate("PythonSettingsData", "Alt+R", 0, QApplication::UnicodeUTF8));
    textLabel1_2->setText(QApplication::translate("PythonSettingsData", "<b>Note:</b> F1 is reserved for the internal help system!", 0, QApplication::UnicodeUTF8));
    new_button->setToolTip(QApplication::translate("PythonSettingsData", "Add a new hotkey", 0, QApplication::UnicodeUTF8));
    new_button->setText(QApplication::translate("PythonSettingsData", "&Add new", 0, QApplication::UnicodeUTF8));
    new_button->setShortcut(QApplication::translate("PythonSettingsData", "Alt+A", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(PythonSettingsData);
    } // retranslateUi

};

namespace Ui {
    class PythonSettingsData: public Ui_PythonSettingsData {};
} // namespace Ui

#endif // PYTHONSETTINGSDATA_H
