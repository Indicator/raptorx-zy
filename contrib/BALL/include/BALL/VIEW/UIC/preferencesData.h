/********************************************************************************
** Form generated from reading ui file 'preferences.ui'
**
** Created: Wed Mar 19 14:28:18 2008
**      by: Qt User Interface Compiler version 4.2.2
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef PREFERENCESDATA_H
#define PREFERENCESDATA_H

#include <BALL/COMMON/global.h>
#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QStackedWidget>
#include <QtGui/QTreeWidget>
#include <QtGui/QWidget>

class Ui_PreferencesData
{
public:
    QTreeWidget *entries_listview;
    QPushButton *help_button;
    QPushButton *defaults_button;
    QPushButton *cancel_button;
    QPushButton *ok_button;
    QStackedWidget *widget_stack;
    QWidget *WStackPage;
    QLabel *label;

    void setupUi(QDialog *PreferencesData)
    {
    PreferencesData->setObjectName(QString::fromUtf8("PreferencesData"));
    QSizePolicy sizePolicy(static_cast<QSizePolicy::Policy>(0), static_cast<QSizePolicy::Policy>(0));
    sizePolicy.setHorizontalStretch(0);
    sizePolicy.setVerticalStretch(0);
    sizePolicy.setHeightForWidth(PreferencesData->sizePolicy().hasHeightForWidth());
    PreferencesData->setSizePolicy(sizePolicy);
    PreferencesData->setMinimumSize(QSize(820, 470));
    PreferencesData->setMaximumSize(QSize(7800, 470));
    PreferencesData->setSizeGripEnabled(false);
    entries_listview = new QTreeWidget(PreferencesData);
    entries_listview->setObjectName(QString::fromUtf8("entries_listview"));
    entries_listview->setGeometry(QRect(9, 9, 221, 452));
    help_button = new QPushButton(PreferencesData);
    help_button->setObjectName(QString::fromUtf8("help_button"));
    help_button->setGeometry(QRect(706, 431, 150, 30));
    help_button->setMinimumSize(QSize(100, 30));
    help_button->setMaximumSize(QSize(32767, 30));
    help_button->setAutoDefault(true);
    defaults_button = new QPushButton(PreferencesData);
    defaults_button->setObjectName(QString::fromUtf8("defaults_button"));
    defaults_button->setGeometry(QRect(549, 431, 151, 30));
    defaults_button->setMinimumSize(QSize(100, 30));
    defaults_button->setMaximumSize(QSize(32767, 30));
    defaults_button->setAutoDefault(true);
    cancel_button = new QPushButton(PreferencesData);
    cancel_button->setObjectName(QString::fromUtf8("cancel_button"));
    cancel_button->setGeometry(QRect(393, 431, 150, 30));
    cancel_button->setMinimumSize(QSize(100, 30));
    cancel_button->setMaximumSize(QSize(32767, 30));
    cancel_button->setAutoDefault(true);
    ok_button = new QPushButton(PreferencesData);
    ok_button->setObjectName(QString::fromUtf8("ok_button"));
    ok_button->setGeometry(QRect(236, 431, 151, 30));
    ok_button->setMinimumSize(QSize(110, 30));
    ok_button->setMaximumSize(QSize(32767, 30));
    ok_button->setAutoDefault(true);
    ok_button->setDefault(true);
    widget_stack = new QStackedWidget(PreferencesData);
    widget_stack->setObjectName(QString::fromUtf8("widget_stack"));
    widget_stack->setGeometry(QRect(236, 9, 620, 416));
    widget_stack->setMinimumSize(QSize(620, 16));
    widget_stack->setMaximumSize(QSize(623, 16777215));
    widget_stack->setFrameShape(QFrame::NoFrame);
    widget_stack->setFrameShadow(QFrame::Plain);
    widget_stack->setLineWidth(0);
    WStackPage = new QWidget();
    WStackPage->setObjectName(QString::fromUtf8("WStackPage"));
    label = new QLabel(WStackPage);
    label->setObjectName(QString::fromUtf8("label"));
    label->setGeometry(QRect(10, 10, 521, 23));
    QFont font;
    font.setFamily(QString::fromUtf8("Sans Serif"));
    font.setPointSize(12);
    font.setBold(false);
    font.setItalic(false);
    font.setUnderline(false);
    font.setWeight(50);
    font.setStrikeOut(false);
    label->setFont(font);
    widget_stack->addWidget(WStackPage);
    QWidget::setTabOrder(entries_listview, ok_button);
    QWidget::setTabOrder(ok_button, cancel_button);
    QWidget::setTabOrder(cancel_button, defaults_button);
    QWidget::setTabOrder(defaults_button, help_button);

    retranslateUi(PreferencesData);

    QSize size(858, 470);
    size = size.expandedTo(PreferencesData->minimumSizeHint());
    PreferencesData->resize(size);


    QMetaObject::connectSlotsByName(PreferencesData);
    } // setupUi

    void retranslateUi(QDialog *PreferencesData)
    {
    PreferencesData->setWindowTitle(QApplication::translate("PreferencesData", "Preferences", 0, QApplication::UnicodeUTF8));
    entries_listview->headerItem()->setText(0, QApplication::translate("PreferencesData", "Entries", 0, QApplication::UnicodeUTF8));
    help_button->setToolTip(QApplication::translate("PreferencesData", "Set settings to default values", 0, QApplication::UnicodeUTF8));
    help_button->setText(QApplication::translate("PreferencesData", "&Help", 0, QApplication::UnicodeUTF8));
    help_button->setShortcut(QApplication::translate("PreferencesData", "Alt+H", 0, QApplication::UnicodeUTF8));
    defaults_button->setToolTip(QApplication::translate("PreferencesData", "Set settings to default values", 0, QApplication::UnicodeUTF8));
    defaults_button->setText(QApplication::translate("PreferencesData", "&Defaults", 0, QApplication::UnicodeUTF8));
    defaults_button->setShortcut(QApplication::translate("PreferencesData", "Alt+D", 0, QApplication::UnicodeUTF8));
    cancel_button->setToolTip(QApplication::translate("PreferencesData", "Discard changes", 0, QApplication::UnicodeUTF8));
    cancel_button->setText(QApplication::translate("PreferencesData", "&Cancel", 0, QApplication::UnicodeUTF8));
    cancel_button->setShortcut(QString());
    ok_button->setToolTip(QApplication::translate("PreferencesData", "Apply new settings", 0, QApplication::UnicodeUTF8));
    ok_button->setText(QApplication::translate("PreferencesData", "O&K", 0, QApplication::UnicodeUTF8));
    ok_button->setShortcut(QApplication::translate("PreferencesData", "Alt+K", 0, QApplication::UnicodeUTF8));
    label->setText(QApplication::translate("PreferencesData", "Please select an (child) entry on the left side!", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(PreferencesData);
    } // retranslateUi

};

namespace Ui {
    class PreferencesData: public Ui_PreferencesData {};
} // namespace Ui

#endif // PREFERENCESDATA_H
