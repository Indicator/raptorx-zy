/********************************************************************************
** Form generated from reading ui file 'mainControlPreferences.ui'
**
** Created: Wed Mar 19 14:28:17 2008
**      by: Qt User Interface Compiler version 4.2.2
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef MAINCONTROLPREFERENCESDATA_H
#define MAINCONTROLPREFERENCESDATA_H

#include <BALL/COMMON/global.h>
#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

class Ui_MainControlPreferencesData
{
public:
    QCheckBox *logging_to_file;
    QWidget *layoutWidget;
    QVBoxLayout *vboxLayout;
    QLabel *textLabel2;
    QComboBox *style_box_;
    QGroupBox *GroupBox1_2_2;
    QHBoxLayout *hboxLayout;
    QLabel *font_label;
    QPushButton *font_button;

    void setupUi(QWidget *MainControlPreferencesData)
    {
    MainControlPreferencesData->setObjectName(QString::fromUtf8("MainControlPreferencesData"));
    QSizePolicy sizePolicy(static_cast<QSizePolicy::Policy>(5), static_cast<QSizePolicy::Policy>(5));
    sizePolicy.setHorizontalStretch(0);
    sizePolicy.setVerticalStretch(0);
    sizePolicy.setHeightForWidth(MainControlPreferencesData->sizePolicy().hasHeightForWidth());
    MainControlPreferencesData->setSizePolicy(sizePolicy);
    MainControlPreferencesData->setMinimumSize(QSize(0, 0));
    MainControlPreferencesData->setMaximumSize(QSize(32000, 32000));
    logging_to_file = new QCheckBox(MainControlPreferencesData);
    logging_to_file->setObjectName(QString::fromUtf8("logging_to_file"));
    logging_to_file->setGeometry(QRect(10, 150, 250, 23));
    QSizePolicy sizePolicy1(static_cast<QSizePolicy::Policy>(0), static_cast<QSizePolicy::Policy>(0));
    sizePolicy1.setHorizontalStretch(0);
    sizePolicy1.setVerticalStretch(0);
    sizePolicy1.setHeightForWidth(logging_to_file->sizePolicy().hasHeightForWidth());
    logging_to_file->setSizePolicy(sizePolicy1);
    logging_to_file->setMinimumSize(QSize(250, 23));
    logging_to_file->setMaximumSize(QSize(250, 23));
    layoutWidget = new QWidget(MainControlPreferencesData);
    layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
    layoutWidget->setGeometry(QRect(6, 11, 311, 51));
    vboxLayout = new QVBoxLayout(layoutWidget);
    vboxLayout->setSpacing(6);
    vboxLayout->setMargin(0);
    vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
    textLabel2 = new QLabel(layoutWidget);
    textLabel2->setObjectName(QString::fromUtf8("textLabel2"));
    QSizePolicy sizePolicy2(static_cast<QSizePolicy::Policy>(7), static_cast<QSizePolicy::Policy>(0));
    sizePolicy2.setHorizontalStretch(0);
    sizePolicy2.setVerticalStretch(0);
    sizePolicy2.setHeightForWidth(textLabel2->sizePolicy().hasHeightForWidth());
    textLabel2->setSizePolicy(sizePolicy2);
    textLabel2->setAlignment(Qt::AlignCenter);

    vboxLayout->addWidget(textLabel2);

    style_box_ = new QComboBox(layoutWidget);
    style_box_->setObjectName(QString::fromUtf8("style_box_"));
    QSizePolicy sizePolicy3(static_cast<QSizePolicy::Policy>(7), static_cast<QSizePolicy::Policy>(3));
    sizePolicy3.setHorizontalStretch(0);
    sizePolicy3.setVerticalStretch(0);
    sizePolicy3.setHeightForWidth(style_box_->sizePolicy().hasHeightForWidth());
    style_box_->setSizePolicy(sizePolicy3);

    vboxLayout->addWidget(style_box_);

    GroupBox1_2_2 = new QGroupBox(MainControlPreferencesData);
    GroupBox1_2_2->setObjectName(QString::fromUtf8("GroupBox1_2_2"));
    GroupBox1_2_2->setGeometry(QRect(10, 70, 311, 61));
    hboxLayout = new QHBoxLayout(GroupBox1_2_2);
    hboxLayout->setSpacing(6);
    hboxLayout->setMargin(5);
    hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
    font_label = new QLabel(GroupBox1_2_2);
    font_label->setObjectName(QString::fromUtf8("font_label"));
    QSizePolicy sizePolicy4(static_cast<QSizePolicy::Policy>(3), static_cast<QSizePolicy::Policy>(3));
    sizePolicy4.setHorizontalStretch(0);
    sizePolicy4.setVerticalStretch(0);
    sizePolicy4.setHeightForWidth(font_label->sizePolicy().hasHeightForWidth());
    font_label->setSizePolicy(sizePolicy4);
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
    QSizePolicy sizePolicy5(static_cast<QSizePolicy::Policy>(0), static_cast<QSizePolicy::Policy>(0));
    sizePolicy5.setHorizontalStretch(0);
    sizePolicy5.setVerticalStretch(0);
    sizePolicy5.setHeightForWidth(font_button->sizePolicy().hasHeightForWidth());
    font_button->setSizePolicy(sizePolicy5);
    font_button->setMinimumSize(QSize(0, 28));

    hboxLayout->addWidget(font_button);

    QWidget::setTabOrder(style_box_, font_button);
    QWidget::setTabOrder(font_button, logging_to_file);

    retranslateUi(MainControlPreferencesData);

    QSize size(651, 406);
    size = size.expandedTo(MainControlPreferencesData->minimumSizeHint());
    MainControlPreferencesData->resize(size);


    QMetaObject::connectSlotsByName(MainControlPreferencesData);
    } // setupUi

    void retranslateUi(QWidget *MainControlPreferencesData)
    {
    MainControlPreferencesData->setWindowTitle(QApplication::translate("MainControlPreferencesData", "MainControlPreferences", 0, QApplication::UnicodeUTF8));
    logging_to_file->setToolTip(QApplication::translate("MainControlPreferencesData", "Writes the information from the Logs window into a file", 0, QApplication::UnicodeUTF8));
    logging_to_file->setText(QApplication::translate("MainControlPreferencesData", "enable logging to file", 0, QApplication::UnicodeUTF8));
    textLabel2->setText(QApplication::translate("MainControlPreferencesData", "GUI Style", 0, QApplication::UnicodeUTF8));
    style_box_->setToolTip(QApplication::translate("MainControlPreferencesData", "Select a GUI style to alter the appearance of BALLView", 0, QApplication::UnicodeUTF8));
    GroupBox1_2_2->setTitle(QApplication::translate("MainControlPreferencesData", "General font", 0, QApplication::UnicodeUTF8));
    font_label->setToolTip(QApplication::translate("MainControlPreferencesData", "Font Preview", 0, QApplication::UnicodeUTF8));
    font_label->setText(QApplication::translate("MainControlPreferencesData", "Font Test label", 0, QApplication::UnicodeUTF8));
    font_button->setToolTip(QApplication::translate("MainControlPreferencesData", "Select the font", 0, QApplication::UnicodeUTF8));
    font_button->setText(QApplication::translate("MainControlPreferencesData", "Select", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(MainControlPreferencesData);
    } // retranslateUi

};

namespace Ui {
    class MainControlPreferencesData: public Ui_MainControlPreferencesData {};
} // namespace Ui

#endif // MAINCONTROLPREFERENCESDATA_H
