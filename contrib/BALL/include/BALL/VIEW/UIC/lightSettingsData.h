/********************************************************************************
** Form generated from reading ui file 'lightSettings.ui'
**
** Created: Wed Mar 19 14:28:17 2008
**      by: Qt User Interface Compiler version 4.2.2
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef LIGHTSETTINGSDATA_H
#define LIGHTSETTINGSDATA_H

#include <BALL/COMMON/global.h>
#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QListWidget>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QSlider>
#include <QtGui/QWidget>

class Ui_LightSettingsData
{
public:
    QPushButton *add_lights_button;
    QLabel *TextLabel1;
    QPushButton *remove_lights_button;
    QListWidget *lights_list;
    QGroupBox *settings_group;
    QLabel *color_sample;
    QLabel *textLabel1;
    QLabel *textLabel1_2;
    QSlider *intensity;
    QLabel *intensity_label;
    QPushButton *color_button;
    QGroupBox *orientation_group;
    QGridLayout *gridLayout;
    QRadioButton *relative;
    QRadioButton *not_relative;
    QLineEdit *position_z;
    QLabel *textLabel1_3;
    QLineEdit *direction_y;
    QLineEdit *direction_z;
    QLineEdit *direction_x;
    QLineEdit *position_y;
    QLineEdit *position_x;
    QLabel *textLabel1_3_2;
    QGroupBox *type_group;
    QGridLayout *gridLayout1;
    QRadioButton *directional;
    QRadioButton *point;
    QRadioButton *ambient;

    void setupUi(QWidget *LightSettingsData)
    {
    LightSettingsData->setObjectName(QString::fromUtf8("LightSettingsData"));
    QSizePolicy sizePolicy(static_cast<QSizePolicy::Policy>(0), static_cast<QSizePolicy::Policy>(0));
    sizePolicy.setHorizontalStretch(0);
    sizePolicy.setVerticalStretch(0);
    sizePolicy.setHeightForWidth(LightSettingsData->sizePolicy().hasHeightForWidth());
    LightSettingsData->setSizePolicy(sizePolicy);
    LightSettingsData->setMinimumSize(QSize(0, 0));
    LightSettingsData->setMaximumSize(QSize(650, 450));
    add_lights_button = new QPushButton(LightSettingsData);
    add_lights_button->setObjectName(QString::fromUtf8("add_lights_button"));
    add_lights_button->setEnabled(true);
    add_lights_button->setGeometry(QRect(3, 281, 130, 30));
    QSizePolicy sizePolicy1(static_cast<QSizePolicy::Policy>(0), static_cast<QSizePolicy::Policy>(0));
    sizePolicy1.setHorizontalStretch(0);
    sizePolicy1.setVerticalStretch(0);
    sizePolicy1.setHeightForWidth(add_lights_button->sizePolicy().hasHeightForWidth());
    add_lights_button->setSizePolicy(sizePolicy1);
    add_lights_button->setMinimumSize(QSize(130, 30));
    add_lights_button->setMaximumSize(QSize(110, 30));
    TextLabel1 = new QLabel(LightSettingsData);
    TextLabel1->setObjectName(QString::fromUtf8("TextLabel1"));
    TextLabel1->setGeometry(QRect(3, 4, 130, 16));
    TextLabel1->setAlignment(Qt::AlignCenter);
    remove_lights_button = new QPushButton(LightSettingsData);
    remove_lights_button->setObjectName(QString::fromUtf8("remove_lights_button"));
    remove_lights_button->setEnabled(false);
    remove_lights_button->setGeometry(QRect(3, 317, 130, 30));
    remove_lights_button->setMinimumSize(QSize(130, 30));
    remove_lights_button->setMaximumSize(QSize(110, 30));
    lights_list = new QListWidget(LightSettingsData);
    lights_list->setObjectName(QString::fromUtf8("lights_list"));
    lights_list->setGeometry(QRect(0, 20, 130, 250));
    lights_list->setMinimumSize(QSize(130, 0));
    lights_list->setMaximumSize(QSize(130, 32767));
    settings_group = new QGroupBox(LightSettingsData);
    settings_group->setObjectName(QString::fromUtf8("settings_group"));
    settings_group->setGeometry(QRect(145, 6, 395, 343));
    color_sample = new QLabel(settings_group);
    color_sample->setObjectName(QString::fromUtf8("color_sample"));
    color_sample->setGeometry(QRect(90, 250, 84, 30));
    QSizePolicy sizePolicy2(static_cast<QSizePolicy::Policy>(5), static_cast<QSizePolicy::Policy>(5));
    sizePolicy2.setHorizontalStretch(0);
    sizePolicy2.setVerticalStretch(0);
    sizePolicy2.setHeightForWidth(color_sample->sizePolicy().hasHeightForWidth());
    color_sample->setSizePolicy(sizePolicy2);
    color_sample->setMinimumSize(QSize(30, 25));
    color_sample->setMaximumSize(QSize(100, 32));
    color_sample->setFrameShape(QFrame::WinPanel);
    textLabel1 = new QLabel(settings_group);
    textLabel1->setObjectName(QString::fromUtf8("textLabel1"));
    textLabel1->setGeometry(QRect(11, 210, 73, 25));
    QSizePolicy sizePolicy3(static_cast<QSizePolicy::Policy>(5), static_cast<QSizePolicy::Policy>(5));
    sizePolicy3.setHorizontalStretch(0);
    sizePolicy3.setVerticalStretch(0);
    sizePolicy3.setHeightForWidth(textLabel1->sizePolicy().hasHeightForWidth());
    textLabel1->setSizePolicy(sizePolicy3);
    textLabel1->setMinimumSize(QSize(30, 25));
    textLabel1->setMaximumSize(QSize(100, 26));
    textLabel1->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
    textLabel1->setMargin(5);
    textLabel1_2 = new QLabel(settings_group);
    textLabel1_2->setObjectName(QString::fromUtf8("textLabel1_2"));
    textLabel1_2->setGeometry(QRect(11, 250, 73, 30));
    QSizePolicy sizePolicy4(static_cast<QSizePolicy::Policy>(5), static_cast<QSizePolicy::Policy>(5));
    sizePolicy4.setHorizontalStretch(0);
    sizePolicy4.setVerticalStretch(0);
    sizePolicy4.setHeightForWidth(textLabel1_2->sizePolicy().hasHeightForWidth());
    textLabel1_2->setSizePolicy(sizePolicy4);
    textLabel1_2->setMinimumSize(QSize(30, 25));
    textLabel1_2->setMaximumSize(QSize(100, 32));
    textLabel1_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
    textLabel1_2->setMargin(5);
    intensity = new QSlider(settings_group);
    intensity->setObjectName(QString::fromUtf8("intensity"));
    intensity->setGeometry(QRect(90, 210, 84, 25));
    QSizePolicy sizePolicy5(static_cast<QSizePolicy::Policy>(5), static_cast<QSizePolicy::Policy>(5));
    sizePolicy5.setHorizontalStretch(0);
    sizePolicy5.setVerticalStretch(0);
    sizePolicy5.setHeightForWidth(intensity->sizePolicy().hasHeightForWidth());
    intensity->setSizePolicy(sizePolicy5);
    intensity->setMinimumSize(QSize(30, 25));
    intensity->setMaximumSize(QSize(100, 21));
    intensity->setMaximum(100);
    intensity->setOrientation(Qt::Horizontal);
    intensity->setTickInterval(50);
    intensity_label = new QLabel(settings_group);
    intensity_label->setObjectName(QString::fromUtf8("intensity_label"));
    intensity_label->setGeometry(QRect(180, 210, 70, 25));
    QSizePolicy sizePolicy6(static_cast<QSizePolicy::Policy>(5), static_cast<QSizePolicy::Policy>(5));
    sizePolicy6.setHorizontalStretch(0);
    sizePolicy6.setVerticalStretch(0);
    sizePolicy6.setHeightForWidth(intensity_label->sizePolicy().hasHeightForWidth());
    intensity_label->setSizePolicy(sizePolicy6);
    intensity_label->setMinimumSize(QSize(30, 25));
    intensity_label->setMaximumSize(QSize(70, 26));
    QFont font;
    font.setFamily(QString::fromUtf8("Sans Serif"));
    font.setPointSize(9);
    font.setBold(true);
    font.setItalic(false);
    font.setUnderline(false);
    font.setWeight(75);
    font.setStrikeOut(false);
    intensity_label->setFont(font);
    intensity_label->setAlignment(Qt::AlignCenter);
    color_button = new QPushButton(settings_group);
    color_button->setObjectName(QString::fromUtf8("color_button"));
    color_button->setGeometry(QRect(180, 250, 70, 30));
    QSizePolicy sizePolicy7(static_cast<QSizePolicy::Policy>(5), static_cast<QSizePolicy::Policy>(5));
    sizePolicy7.setHorizontalStretch(0);
    sizePolicy7.setVerticalStretch(0);
    sizePolicy7.setHeightForWidth(color_button->sizePolicy().hasHeightForWidth());
    color_button->setSizePolicy(sizePolicy7);
    color_button->setMinimumSize(QSize(30, 25));
    color_button->setMaximumSize(QSize(70, 30));
    orientation_group = new QGroupBox(settings_group);
    orientation_group->setObjectName(QString::fromUtf8("orientation_group"));
    orientation_group->setGeometry(QRect(11, 26, 377, 131));
    gridLayout = new QGridLayout(orientation_group);
    gridLayout->setSpacing(6);
    gridLayout->setMargin(9);
    gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
    relative = new QRadioButton(orientation_group);
    relative->setObjectName(QString::fromUtf8("relative"));
    QSizePolicy sizePolicy8(static_cast<QSizePolicy::Policy>(5), static_cast<QSizePolicy::Policy>(5));
    sizePolicy8.setHorizontalStretch(0);
    sizePolicy8.setVerticalStretch(0);
    sizePolicy8.setHeightForWidth(relative->sizePolicy().hasHeightForWidth());
    relative->setSizePolicy(sizePolicy8);
    relative->setMinimumSize(QSize(160, 25));
    relative->setMaximumSize(QSize(140, 16));
    relative->setChecked(true);

    gridLayout->addWidget(relative, 2, 0, 1, 2);

    not_relative = new QRadioButton(orientation_group);
    not_relative->setObjectName(QString::fromUtf8("not_relative"));
    QSizePolicy sizePolicy9(static_cast<QSizePolicy::Policy>(5), static_cast<QSizePolicy::Policy>(5));
    sizePolicy9.setHorizontalStretch(0);
    sizePolicy9.setVerticalStretch(0);
    sizePolicy9.setHeightForWidth(not_relative->sizePolicy().hasHeightForWidth());
    not_relative->setSizePolicy(sizePolicy9);
    not_relative->setMinimumSize(QSize(30, 25));
    not_relative->setMaximumSize(QSize(140, 16));

    gridLayout->addWidget(not_relative, 2, 2, 1, 2);

    position_z = new QLineEdit(orientation_group);
    position_z->setObjectName(QString::fromUtf8("position_z"));
    QSizePolicy sizePolicy10(static_cast<QSizePolicy::Policy>(5), static_cast<QSizePolicy::Policy>(5));
    sizePolicy10.setHorizontalStretch(0);
    sizePolicy10.setVerticalStretch(0);
    sizePolicy10.setHeightForWidth(position_z->sizePolicy().hasHeightForWidth());
    position_z->setSizePolicy(sizePolicy10);
    position_z->setMinimumSize(QSize(30, 25));
    position_z->setMaximumSize(QSize(80, 500));

    gridLayout->addWidget(position_z, 0, 3, 1, 1);

    textLabel1_3 = new QLabel(orientation_group);
    textLabel1_3->setObjectName(QString::fromUtf8("textLabel1_3"));
    QSizePolicy sizePolicy11(static_cast<QSizePolicy::Policy>(3), static_cast<QSizePolicy::Policy>(5));
    sizePolicy11.setHorizontalStretch(0);
    sizePolicy11.setVerticalStretch(0);
    sizePolicy11.setHeightForWidth(textLabel1_3->sizePolicy().hasHeightForWidth());
    textLabel1_3->setSizePolicy(sizePolicy11);
    textLabel1_3->setMinimumSize(QSize(90, 25));
    textLabel1_3->setMaximumSize(QSize(32767, 110));

    gridLayout->addWidget(textLabel1_3, 0, 0, 1, 1);

    direction_y = new QLineEdit(orientation_group);
    direction_y->setObjectName(QString::fromUtf8("direction_y"));
    QSizePolicy sizePolicy12(static_cast<QSizePolicy::Policy>(5), static_cast<QSizePolicy::Policy>(5));
    sizePolicy12.setHorizontalStretch(0);
    sizePolicy12.setVerticalStretch(0);
    sizePolicy12.setHeightForWidth(direction_y->sizePolicy().hasHeightForWidth());
    direction_y->setSizePolicy(sizePolicy12);
    direction_y->setMinimumSize(QSize(30, 25));
    direction_y->setMaximumSize(QSize(80, 500));

    gridLayout->addWidget(direction_y, 1, 2, 1, 1);

    direction_z = new QLineEdit(orientation_group);
    direction_z->setObjectName(QString::fromUtf8("direction_z"));
    QSizePolicy sizePolicy13(static_cast<QSizePolicy::Policy>(5), static_cast<QSizePolicy::Policy>(5));
    sizePolicy13.setHorizontalStretch(0);
    sizePolicy13.setVerticalStretch(0);
    sizePolicy13.setHeightForWidth(direction_z->sizePolicy().hasHeightForWidth());
    direction_z->setSizePolicy(sizePolicy13);
    direction_z->setMinimumSize(QSize(30, 25));
    direction_z->setMaximumSize(QSize(80, 500));

    gridLayout->addWidget(direction_z, 1, 3, 1, 1);

    direction_x = new QLineEdit(orientation_group);
    direction_x->setObjectName(QString::fromUtf8("direction_x"));
    QSizePolicy sizePolicy14(static_cast<QSizePolicy::Policy>(5), static_cast<QSizePolicy::Policy>(5));
    sizePolicy14.setHorizontalStretch(0);
    sizePolicy14.setVerticalStretch(0);
    sizePolicy14.setHeightForWidth(direction_x->sizePolicy().hasHeightForWidth());
    direction_x->setSizePolicy(sizePolicy14);
    direction_x->setMinimumSize(QSize(30, 25));
    direction_x->setMaximumSize(QSize(80, 500));

    gridLayout->addWidget(direction_x, 1, 1, 1, 1);

    position_y = new QLineEdit(orientation_group);
    position_y->setObjectName(QString::fromUtf8("position_y"));
    QSizePolicy sizePolicy15(static_cast<QSizePolicy::Policy>(5), static_cast<QSizePolicy::Policy>(5));
    sizePolicy15.setHorizontalStretch(0);
    sizePolicy15.setVerticalStretch(0);
    sizePolicy15.setHeightForWidth(position_y->sizePolicy().hasHeightForWidth());
    position_y->setSizePolicy(sizePolicy15);
    position_y->setMinimumSize(QSize(30, 25));
    position_y->setMaximumSize(QSize(80, 500));

    gridLayout->addWidget(position_y, 0, 2, 1, 1);

    position_x = new QLineEdit(orientation_group);
    position_x->setObjectName(QString::fromUtf8("position_x"));
    QSizePolicy sizePolicy16(static_cast<QSizePolicy::Policy>(5), static_cast<QSizePolicy::Policy>(5));
    sizePolicy16.setHorizontalStretch(0);
    sizePolicy16.setVerticalStretch(0);
    sizePolicy16.setHeightForWidth(position_x->sizePolicy().hasHeightForWidth());
    position_x->setSizePolicy(sizePolicy16);
    position_x->setMinimumSize(QSize(30, 25));
    position_x->setMaximumSize(QSize(80, 500));

    gridLayout->addWidget(position_x, 0, 1, 1, 1);

    textLabel1_3_2 = new QLabel(orientation_group);
    textLabel1_3_2->setObjectName(QString::fromUtf8("textLabel1_3_2"));
    QSizePolicy sizePolicy17(static_cast<QSizePolicy::Policy>(3), static_cast<QSizePolicy::Policy>(5));
    sizePolicy17.setHorizontalStretch(0);
    sizePolicy17.setVerticalStretch(0);
    sizePolicy17.setHeightForWidth(textLabel1_3_2->sizePolicy().hasHeightForWidth());
    textLabel1_3_2->setSizePolicy(sizePolicy17);
    textLabel1_3_2->setMinimumSize(QSize(90, 25));
    textLabel1_3_2->setMaximumSize(QSize(32767, 110));

    gridLayout->addWidget(textLabel1_3_2, 1, 0, 1, 1);

    type_group = new QGroupBox(settings_group);
    type_group->setObjectName(QString::fromUtf8("type_group"));
    type_group->setGeometry(QRect(260, 170, 120, 161));
    gridLayout1 = new QGridLayout(type_group);
    gridLayout1->setSpacing(6);
    gridLayout1->setMargin(9);
    gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
    directional = new QRadioButton(type_group);
    directional->setObjectName(QString::fromUtf8("directional"));
    QSizePolicy sizePolicy18(static_cast<QSizePolicy::Policy>(5), static_cast<QSizePolicy::Policy>(5));
    sizePolicy18.setHorizontalStretch(0);
    sizePolicy18.setVerticalStretch(0);
    sizePolicy18.setHeightForWidth(directional->sizePolicy().hasHeightForWidth());
    directional->setSizePolicy(sizePolicy18);
    directional->setChecked(true);

    gridLayout1->addWidget(directional, 2, 0, 1, 1);

    point = new QRadioButton(type_group);
    point->setObjectName(QString::fromUtf8("point"));
    QSizePolicy sizePolicy19(static_cast<QSizePolicy::Policy>(5), static_cast<QSizePolicy::Policy>(5));
    sizePolicy19.setHorizontalStretch(0);
    sizePolicy19.setVerticalStretch(0);
    sizePolicy19.setHeightForWidth(point->sizePolicy().hasHeightForWidth());
    point->setSizePolicy(sizePolicy19);

    gridLayout1->addWidget(point, 1, 0, 1, 1);

    ambient = new QRadioButton(type_group);
    ambient->setObjectName(QString::fromUtf8("ambient"));
    QSizePolicy sizePolicy20(static_cast<QSizePolicy::Policy>(5), static_cast<QSizePolicy::Policy>(5));
    sizePolicy20.setHorizontalStretch(0);
    sizePolicy20.setVerticalStretch(0);
    sizePolicy20.setHeightForWidth(ambient->sizePolicy().hasHeightForWidth());
    ambient->setSizePolicy(sizePolicy20);

    gridLayout1->addWidget(ambient, 0, 0, 1, 1);

    QWidget::setTabOrder(lights_list, add_lights_button);
    QWidget::setTabOrder(add_lights_button, remove_lights_button);
    QWidget::setTabOrder(remove_lights_button, position_x);
    QWidget::setTabOrder(position_x, position_y);
    QWidget::setTabOrder(position_y, position_z);
    QWidget::setTabOrder(position_z, direction_x);
    QWidget::setTabOrder(direction_x, direction_y);
    QWidget::setTabOrder(direction_y, direction_z);
    QWidget::setTabOrder(direction_z, relative);
    QWidget::setTabOrder(relative, not_relative);
    QWidget::setTabOrder(not_relative, intensity);
    QWidget::setTabOrder(intensity, color_button);
    QWidget::setTabOrder(color_button, ambient);
    QWidget::setTabOrder(ambient, point);
    QWidget::setTabOrder(point, directional);

    retranslateUi(LightSettingsData);

    QSize size(545, 354);
    size = size.expandedTo(LightSettingsData->minimumSizeHint());
    LightSettingsData->resize(size);


    QMetaObject::connectSlotsByName(LightSettingsData);
    } // setupUi

    void retranslateUi(QWidget *LightSettingsData)
    {
    LightSettingsData->setWindowTitle(QApplication::translate("LightSettingsData", "LightSettings", 0, QApplication::UnicodeUTF8));
    add_lights_button->setToolTip(QApplication::translate("LightSettingsData", "Create a new light", 0, QApplication::UnicodeUTF8));
    add_lights_button->setText(QApplication::translate("LightSettingsData", "&Add", 0, QApplication::UnicodeUTF8));
    add_lights_button->setShortcut(QApplication::translate("LightSettingsData", "Alt+A", 0, QApplication::UnicodeUTF8));
    TextLabel1->setText(QApplication::translate("LightSettingsData", "Select Light", 0, QApplication::UnicodeUTF8));
    remove_lights_button->setToolTip(QApplication::translate("LightSettingsData", "Remove a light", 0, QApplication::UnicodeUTF8));
    remove_lights_button->setText(QApplication::translate("LightSettingsData", "&Remove", 0, QApplication::UnicodeUTF8));
    remove_lights_button->setShortcut(QApplication::translate("LightSettingsData", "Alt+R", 0, QApplication::UnicodeUTF8));
    lights_list->setToolTip(QApplication::translate("LightSettingsData", "Lights list. Max 8 lights supported", 0, QApplication::UnicodeUTF8));
    settings_group->setTitle(QApplication::translate("LightSettingsData", "Light Source Settings", 0, QApplication::UnicodeUTF8));
    color_sample->setToolTip(QApplication::translate("LightSettingsData", "Color of the light", 0, QApplication::UnicodeUTF8));
    color_sample->setText(QString());
    textLabel1->setText(QApplication::translate("LightSettingsData", "Intensity", 0, QApplication::UnicodeUTF8));
    textLabel1_2->setText(QApplication::translate("LightSettingsData", "Color", 0, QApplication::UnicodeUTF8));
    intensity->setToolTip(QApplication::translate("LightSettingsData", "Select intensity of light source", 0, QApplication::UnicodeUTF8));
    intensity_label->setText(QApplication::translate("LightSettingsData", "0", 0, QApplication::UnicodeUTF8));
    color_button->setToolTip(QApplication::translate("LightSettingsData", "open a color dialog", 0, QApplication::UnicodeUTF8));
    color_button->setText(QApplication::translate("LightSettingsData", "Edit", 0, QApplication::UnicodeUTF8));
    orientation_group->setTitle(QApplication::translate("LightSettingsData", "Orientation", 0, QApplication::UnicodeUTF8));
    relative->setToolTip(QApplication::translate("LightSettingsData", "Keep lightsource relative to camera", 0, QApplication::UnicodeUTF8));
    relative->setText(QApplication::translate("LightSettingsData", "relative to camera", 0, QApplication::UnicodeUTF8));
    not_relative->setToolTip(QApplication::translate("LightSettingsData", "Keep lightsource static", 0, QApplication::UnicodeUTF8));
    not_relative->setText(QApplication::translate("LightSettingsData", "absolute", 0, QApplication::UnicodeUTF8));
    position_z->setToolTip(QApplication::translate("LightSettingsData", "Position z", 0, QApplication::UnicodeUTF8));
    textLabel1_3->setText(QApplication::translate("LightSettingsData", "Position", 0, QApplication::UnicodeUTF8));
    direction_y->setToolTip(QApplication::translate("LightSettingsData", "Direction y", 0, QApplication::UnicodeUTF8));
    direction_z->setToolTip(QApplication::translate("LightSettingsData", "Direction z", 0, QApplication::UnicodeUTF8));
    direction_x->setToolTip(QApplication::translate("LightSettingsData", "Direction x", 0, QApplication::UnicodeUTF8));
    position_y->setToolTip(QApplication::translate("LightSettingsData", "Position y", 0, QApplication::UnicodeUTF8));
    position_x->setToolTip(QApplication::translate("LightSettingsData", "Position x", 0, QApplication::UnicodeUTF8));
    textLabel1_3_2->setText(QApplication::translate("LightSettingsData", "Direction", 0, QApplication::UnicodeUTF8));
    type_group->setTitle(QApplication::translate("LightSettingsData", "Type", 0, QApplication::UnicodeUTF8));
    directional->setToolTip(QApplication::translate("LightSettingsData", "Light from an infinite distance (position needed for angle of rays)", 0, QApplication::UnicodeUTF8));
    directional->setText(QApplication::translate("LightSettingsData", "Directional", 0, QApplication::UnicodeUTF8));
    point->setToolTip(QApplication::translate("LightSettingsData", "Light from a specific position", 0, QApplication::UnicodeUTF8));
    point->setText(QApplication::translate("LightSettingsData", "Point", 0, QApplication::UnicodeUTF8));
    ambient->setToolTip(QApplication::translate("LightSettingsData", "Ambient light doesnt have a specific position source", 0, QApplication::UnicodeUTF8));
    ambient->setText(QApplication::translate("LightSettingsData", "Ambient", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(LightSettingsData);
    } // retranslateUi

};

namespace Ui {
    class LightSettingsData: public Ui_LightSettingsData {};
} // namespace Ui

#endif // LIGHTSETTINGSDATA_H
