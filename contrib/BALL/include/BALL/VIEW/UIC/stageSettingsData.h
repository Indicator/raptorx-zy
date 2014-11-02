/********************************************************************************
** Form generated from reading ui file 'stageSettings.ui'
**
** Created: Wed Mar 19 14:28:18 2008
**      by: Qt User Interface Compiler version 4.2.2
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef STAGESETTINGSDATA_H
#define STAGESETTINGSDATA_H

#include <BALL/COMMON/global.h>
#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QLabel>
#include <QtGui/QListWidget>
#include <QtGui/QPushButton>
#include <QtGui/QSlider>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QStackedWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

class Ui_StageSettingsData
{
public:
    QStackedWidget *widget_stack;
    QWidget *Main;
    QGridLayout *gridLayout;
    QGridLayout *gridLayout1;
    QGroupBox *fob_box;
    QGridLayout *gridLayout2;
    QCheckBox *enable_fog;
    QSlider *fog_slider;
    QLabel *max_label;
    QLabel *min_label;
    QGroupBox *offscreen_group;
    QGridLayout *gridLayout3;
    QSpinBox *resolution_factor;
    QLabel *factor_label;
    QLabel *max_label1;
    QGroupBox *lights_box;
    QGridLayout *gridLayout4;
    QCheckBox *use_preview;
    QCheckBox *show_fps;
    QCheckBox *show_lights_;
    QGroupBox *background_box;
    QGridLayout *gridLayout5;
    QLabel *color_sample;
    QPushButton *color_button;
    QGroupBox *animation_box;
    QGridLayout *gridLayout6;
    QSlider *animation_smoothness;
    QLabel *min_label1;
    QLabel *max_label2;
    QGroupBox *capping_box;
    QGridLayout *gridLayout7;
    QLabel *capping_color;
    QPushButton *capping_color_button;
    QLabel *label;
    QSpinBox *capping_transparency;
    QWidget *Mouse;
    QGridLayout *gridLayout8;
    QSpacerItem *spacerItem;
    QSpacerItem *spacerItem1;
    QGroupBox *groupBox1_2;
    QGridLayout *gridLayout9;
    QSlider *wheel_slider_;
    QLabel *TextLabel1_3;
    QLabel *TextLabel1_2_2;
    QGroupBox *groupBox1;
    QGridLayout *gridLayout10;
    QSlider *slider_;
    QLabel *TextLabel1_2;
    QLabel *TextLabel1;
    QWidget *Stereo;
    QGridLayout *gridLayout11;
    QSpacerItem *spacerItem2;
    QSpacerItem *spacerItem3;
    QVBoxLayout *vboxLayout;
    QGroupBox *groupBox1_2_2;
    QGridLayout *gridLayout12;
    QSlider *eye_distance_slider;
    QLabel *eye_distance_label;
    QLabel *TextLabel1_2_2_2;
    QLabel *TextLabel1_3_2;
    QGroupBox *groupBox1_2_2_2;
    QGridLayout *gridLayout13;
    QLabel *TextLabel1_2_2_2_2;
    QLabel *focal_distance_label;
    QSlider *focal_distance_slider;
    QLabel *TextLabel1_3_2_2;
    QCheckBox *swap_sss_button;
    QWidget *OpenGL;
    QGridLayout *gridLayout14;
    QGridLayout *gridLayout15;
    QLabel *vendor_label;
    QLabel *renderer_label;
    QLabel *textLabel1_2_3;
    QLabel *version_label;
    QLabel *textLabel1_2;
    QLabel *textLabel1;
    QCheckBox *use_vertex_buffers;
    QListWidget *extensions_list;

    void setupUi(QWidget *StageSettingsData)
    {
    StageSettingsData->setObjectName(QString::fromUtf8("StageSettingsData"));
    widget_stack = new QStackedWidget(StageSettingsData);
    widget_stack->setObjectName(QString::fromUtf8("widget_stack"));
    widget_stack->setGeometry(QRect(-1, -1, 611, 401));
    Main = new QWidget();
    Main->setObjectName(QString::fromUtf8("Main"));
    gridLayout = new QGridLayout(Main);
    gridLayout->setSpacing(6);
    gridLayout->setMargin(9);
    gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
    gridLayout1 = new QGridLayout();
    gridLayout1->setSpacing(6);
    gridLayout1->setMargin(0);
    gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
    fob_box = new QGroupBox(Main);
    fob_box->setObjectName(QString::fromUtf8("fob_box"));
    fob_box->setAlignment(Qt::AlignHCenter);
    gridLayout2 = new QGridLayout(fob_box);
    gridLayout2->setSpacing(6);
    gridLayout2->setMargin(9);
    gridLayout2->setObjectName(QString::fromUtf8("gridLayout2"));
    enable_fog = new QCheckBox(fob_box);
    enable_fog->setObjectName(QString::fromUtf8("enable_fog"));

    gridLayout2->addWidget(enable_fog, 0, 0, 1, 1);

    fog_slider = new QSlider(fob_box);
    fog_slider->setObjectName(QString::fromUtf8("fog_slider"));
    fog_slider->setEnabled(false);
    fog_slider->setMaximum(400);
    fog_slider->setValue(200);
    fog_slider->setOrientation(Qt::Horizontal);
    fog_slider->setTickInterval(50);

    gridLayout2->addWidget(fog_slider, 1, 0, 1, 2);

    max_label = new QLabel(fob_box);
    max_label->setObjectName(QString::fromUtf8("max_label"));
    max_label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

    gridLayout2->addWidget(max_label, 2, 1, 1, 1);

    min_label = new QLabel(fob_box);
    min_label->setObjectName(QString::fromUtf8("min_label"));

    gridLayout2->addWidget(min_label, 2, 0, 1, 1);


    gridLayout1->addWidget(fob_box, 1, 0, 1, 1);

    offscreen_group = new QGroupBox(Main);
    offscreen_group->setObjectName(QString::fromUtf8("offscreen_group"));
    offscreen_group->setAlignment(Qt::AlignJustify);
    offscreen_group->setCheckable(true);
    offscreen_group->setChecked(false);
    gridLayout3 = new QGridLayout(offscreen_group);
    gridLayout3->setSpacing(6);
    gridLayout3->setMargin(9);
    gridLayout3->setObjectName(QString::fromUtf8("gridLayout3"));
    resolution_factor = new QSpinBox(offscreen_group);
    resolution_factor->setObjectName(QString::fromUtf8("resolution_factor"));
    resolution_factor->setMaximum(5);
    resolution_factor->setMinimum(1);
    resolution_factor->setValue(1);

    gridLayout3->addWidget(resolution_factor, 0, 1, 1, 1);

    factor_label = new QLabel(offscreen_group);
    factor_label->setObjectName(QString::fromUtf8("factor_label"));
    QSizePolicy sizePolicy(static_cast<QSizePolicy::Policy>(7), static_cast<QSizePolicy::Policy>(5));
    sizePolicy.setHorizontalStretch(0);
    sizePolicy.setVerticalStretch(0);
    sizePolicy.setHeightForWidth(factor_label->sizePolicy().hasHeightForWidth());
    factor_label->setSizePolicy(sizePolicy);

    gridLayout3->addWidget(factor_label, 0, 0, 1, 1);

    max_label1 = new QLabel(offscreen_group);
    max_label1->setObjectName(QString::fromUtf8("max_label1"));
    QSizePolicy sizePolicy1(static_cast<QSizePolicy::Policy>(7), static_cast<QSizePolicy::Policy>(5));
    sizePolicy1.setHorizontalStretch(0);
    sizePolicy1.setVerticalStretch(0);
    sizePolicy1.setHeightForWidth(max_label1->sizePolicy().hasHeightForWidth());
    max_label1->setSizePolicy(sizePolicy1);

    gridLayout3->addWidget(max_label1, 1, 0, 1, 2);


    gridLayout1->addWidget(offscreen_group, 2, 1, 1, 1);

    lights_box = new QGroupBox(Main);
    lights_box->setObjectName(QString::fromUtf8("lights_box"));
    lights_box->setAlignment(Qt::AlignHCenter);
    gridLayout4 = new QGridLayout(lights_box);
    gridLayout4->setSpacing(6);
    gridLayout4->setMargin(9);
    gridLayout4->setObjectName(QString::fromUtf8("gridLayout4"));
    use_preview = new QCheckBox(lights_box);
    use_preview->setObjectName(QString::fromUtf8("use_preview"));
    use_preview->setChecked(true);

    gridLayout4->addWidget(use_preview, 2, 0, 1, 1);

    show_fps = new QCheckBox(lights_box);
    show_fps->setObjectName(QString::fromUtf8("show_fps"));

    gridLayout4->addWidget(show_fps, 1, 0, 1, 1);

    show_lights_ = new QCheckBox(lights_box);
    show_lights_->setObjectName(QString::fromUtf8("show_lights_"));

    gridLayout4->addWidget(show_lights_, 0, 0, 1, 1);


    gridLayout1->addWidget(lights_box, 1, 1, 1, 1);

    background_box = new QGroupBox(Main);
    background_box->setObjectName(QString::fromUtf8("background_box"));
    background_box->setAlignment(Qt::AlignHCenter);
    gridLayout5 = new QGridLayout(background_box);
    gridLayout5->setSpacing(6);
    gridLayout5->setMargin(9);
    gridLayout5->setObjectName(QString::fromUtf8("gridLayout5"));
    color_sample = new QLabel(background_box);
    color_sample->setObjectName(QString::fromUtf8("color_sample"));
    QSizePolicy sizePolicy2(static_cast<QSizePolicy::Policy>(7), static_cast<QSizePolicy::Policy>(5));
    sizePolicy2.setHorizontalStretch(0);
    sizePolicy2.setVerticalStretch(0);
    sizePolicy2.setHeightForWidth(color_sample->sizePolicy().hasHeightForWidth());
    color_sample->setSizePolicy(sizePolicy2);
    color_sample->setFrameShape(QFrame::Panel);
    color_sample->setFrameShadow(QFrame::Sunken);
    color_sample->setLineWidth(1);
    color_sample->setMidLineWidth(0);
    color_sample->setMargin(0);

    gridLayout5->addWidget(color_sample, 0, 0, 1, 1);

    color_button = new QPushButton(background_box);
    color_button->setObjectName(QString::fromUtf8("color_button"));

    gridLayout5->addWidget(color_button, 0, 1, 1, 1);


    gridLayout1->addWidget(background_box, 0, 0, 1, 1);

    animation_box = new QGroupBox(Main);
    animation_box->setObjectName(QString::fromUtf8("animation_box"));
    animation_box->setAlignment(Qt::AlignHCenter);
    gridLayout6 = new QGridLayout(animation_box);
    gridLayout6->setSpacing(6);
    gridLayout6->setMargin(9);
    gridLayout6->setObjectName(QString::fromUtf8("gridLayout6"));
    animation_smoothness = new QSlider(animation_box);
    animation_smoothness->setObjectName(QString::fromUtf8("animation_smoothness"));
    animation_smoothness->setMinimum(1);
    animation_smoothness->setMaximum(100);
    animation_smoothness->setValue(25);
    animation_smoothness->setOrientation(Qt::Horizontal);
    animation_smoothness->setTickInterval(50);

    gridLayout6->addWidget(animation_smoothness, 0, 0, 1, 2);

    min_label1 = new QLabel(animation_box);
    min_label1->setObjectName(QString::fromUtf8("min_label1"));

    gridLayout6->addWidget(min_label1, 1, 0, 1, 1);

    max_label2 = new QLabel(animation_box);
    max_label2->setObjectName(QString::fromUtf8("max_label2"));
    max_label2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

    gridLayout6->addWidget(max_label2, 1, 1, 1, 1);


    gridLayout1->addWidget(animation_box, 0, 1, 1, 1);

    capping_box = new QGroupBox(Main);
    capping_box->setObjectName(QString::fromUtf8("capping_box"));
    capping_box->setAlignment(Qt::AlignHCenter);
    gridLayout7 = new QGridLayout(capping_box);
    gridLayout7->setSpacing(6);
    gridLayout7->setMargin(9);
    gridLayout7->setObjectName(QString::fromUtf8("gridLayout7"));
    capping_color = new QLabel(capping_box);
    capping_color->setObjectName(QString::fromUtf8("capping_color"));
    QSizePolicy sizePolicy3(static_cast<QSizePolicy::Policy>(7), static_cast<QSizePolicy::Policy>(5));
    sizePolicy3.setHorizontalStretch(0);
    sizePolicy3.setVerticalStretch(0);
    sizePolicy3.setHeightForWidth(capping_color->sizePolicy().hasHeightForWidth());
    capping_color->setSizePolicy(sizePolicy3);
    capping_color->setFrameShape(QFrame::Panel);
    capping_color->setFrameShadow(QFrame::Sunken);
    capping_color->setLineWidth(1);
    capping_color->setMidLineWidth(0);
    capping_color->setMargin(0);

    gridLayout7->addWidget(capping_color, 0, 0, 1, 1);

    capping_color_button = new QPushButton(capping_box);
    capping_color_button->setObjectName(QString::fromUtf8("capping_color_button"));

    gridLayout7->addWidget(capping_color_button, 0, 1, 1, 2);

    label = new QLabel(capping_box);
    label->setObjectName(QString::fromUtf8("label"));

    gridLayout7->addWidget(label, 1, 0, 1, 1);

    capping_transparency = new QSpinBox(capping_box);
    capping_transparency->setObjectName(QString::fromUtf8("capping_transparency"));
    capping_transparency->setMaximum(255);

    gridLayout7->addWidget(capping_transparency, 1, 1, 1, 2);


    gridLayout1->addWidget(capping_box, 2, 0, 1, 1);


    gridLayout->addLayout(gridLayout1, 0, 0, 1, 1);

    widget_stack->addWidget(Main);
    Mouse = new QWidget();
    Mouse->setObjectName(QString::fromUtf8("Mouse"));
    gridLayout8 = new QGridLayout(Mouse);
    gridLayout8->setSpacing(6);
    gridLayout8->setMargin(9);
    gridLayout8->setObjectName(QString::fromUtf8("gridLayout8"));
    spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

    gridLayout8->addItem(spacerItem, 0, 1, 1, 1);

    spacerItem1 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

    gridLayout8->addItem(spacerItem1, 2, 0, 1, 1);

    groupBox1_2 = new QGroupBox(Mouse);
    groupBox1_2->setObjectName(QString::fromUtf8("groupBox1_2"));
    groupBox1_2->setMaximumSize(QSize(500, 16777215));
    groupBox1_2->setAlignment(Qt::AlignHCenter);
    gridLayout9 = new QGridLayout(groupBox1_2);
    gridLayout9->setSpacing(6);
    gridLayout9->setMargin(9);
    gridLayout9->setObjectName(QString::fromUtf8("gridLayout9"));
    wheel_slider_ = new QSlider(groupBox1_2);
    wheel_slider_->setObjectName(QString::fromUtf8("wheel_slider_"));
    wheel_slider_->setMaximum(10);
    wheel_slider_->setValue(5);
    wheel_slider_->setOrientation(Qt::Horizontal);

    gridLayout9->addWidget(wheel_slider_, 0, 0, 1, 2);

    TextLabel1_3 = new QLabel(groupBox1_2);
    TextLabel1_3->setObjectName(QString::fromUtf8("TextLabel1_3"));

    gridLayout9->addWidget(TextLabel1_3, 1, 0, 1, 1);

    TextLabel1_2_2 = new QLabel(groupBox1_2);
    TextLabel1_2_2->setObjectName(QString::fromUtf8("TextLabel1_2_2"));
    TextLabel1_2_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

    gridLayout9->addWidget(TextLabel1_2_2, 1, 1, 1, 1);


    gridLayout8->addWidget(groupBox1_2, 1, 0, 1, 1);

    groupBox1 = new QGroupBox(Mouse);
    groupBox1->setObjectName(QString::fromUtf8("groupBox1"));
    QSizePolicy sizePolicy4(static_cast<QSizePolicy::Policy>(7), static_cast<QSizePolicy::Policy>(5));
    sizePolicy4.setHorizontalStretch(0);
    sizePolicy4.setVerticalStretch(0);
    sizePolicy4.setHeightForWidth(groupBox1->sizePolicy().hasHeightForWidth());
    groupBox1->setSizePolicy(sizePolicy4);
    groupBox1->setMaximumSize(QSize(500, 16777215));
    groupBox1->setAlignment(Qt::AlignHCenter);
    gridLayout10 = new QGridLayout(groupBox1);
    gridLayout10->setSpacing(6);
    gridLayout10->setMargin(9);
    gridLayout10->setObjectName(QString::fromUtf8("gridLayout10"));
    slider_ = new QSlider(groupBox1);
    slider_->setObjectName(QString::fromUtf8("slider_"));
    slider_->setMaximum(10);
    slider_->setValue(5);
    slider_->setOrientation(Qt::Horizontal);

    gridLayout10->addWidget(slider_, 0, 0, 1, 2);

    TextLabel1_2 = new QLabel(groupBox1);
    TextLabel1_2->setObjectName(QString::fromUtf8("TextLabel1_2"));
    TextLabel1_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

    gridLayout10->addWidget(TextLabel1_2, 1, 1, 1, 1);

    TextLabel1 = new QLabel(groupBox1);
    TextLabel1->setObjectName(QString::fromUtf8("TextLabel1"));

    gridLayout10->addWidget(TextLabel1, 1, 0, 1, 1);


    gridLayout8->addWidget(groupBox1, 0, 0, 1, 1);

    widget_stack->addWidget(Mouse);
    Stereo = new QWidget();
    Stereo->setObjectName(QString::fromUtf8("Stereo"));
    gridLayout11 = new QGridLayout(Stereo);
    gridLayout11->setSpacing(6);
    gridLayout11->setMargin(9);
    gridLayout11->setObjectName(QString::fromUtf8("gridLayout11"));
    spacerItem2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

    gridLayout11->addItem(spacerItem2, 1, 0, 1, 1);

    spacerItem3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

    gridLayout11->addItem(spacerItem3, 0, 1, 1, 1);

    vboxLayout = new QVBoxLayout();
    vboxLayout->setSpacing(6);
    vboxLayout->setMargin(0);
    vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
    groupBox1_2_2 = new QGroupBox(Stereo);
    groupBox1_2_2->setObjectName(QString::fromUtf8("groupBox1_2_2"));
    groupBox1_2_2->setMaximumSize(QSize(400, 100));
    groupBox1_2_2->setAlignment(Qt::AlignHCenter);
    gridLayout12 = new QGridLayout(groupBox1_2_2);
    gridLayout12->setSpacing(6);
    gridLayout12->setMargin(9);
    gridLayout12->setObjectName(QString::fromUtf8("gridLayout12"));
    eye_distance_slider = new QSlider(groupBox1_2_2);
    eye_distance_slider->setObjectName(QString::fromUtf8("eye_distance_slider"));
    eye_distance_slider->setMaximum(40);
    eye_distance_slider->setSingleStep(5);
    eye_distance_slider->setPageStep(5);
    eye_distance_slider->setValue(20);
    eye_distance_slider->setOrientation(Qt::Horizontal);
    eye_distance_slider->setTickInterval(5);

    gridLayout12->addWidget(eye_distance_slider, 0, 0, 1, 2);

    eye_distance_label = new QLabel(groupBox1_2_2);
    eye_distance_label->setObjectName(QString::fromUtf8("eye_distance_label"));
    QSizePolicy sizePolicy5(static_cast<QSizePolicy::Policy>(0), static_cast<QSizePolicy::Policy>(0));
    sizePolicy5.setHorizontalStretch(0);
    sizePolicy5.setVerticalStretch(0);
    sizePolicy5.setHeightForWidth(eye_distance_label->sizePolicy().hasHeightForWidth());
    eye_distance_label->setSizePolicy(sizePolicy5);
    eye_distance_label->setMinimumSize(QSize(50, 25));
    eye_distance_label->setMaximumSize(QSize(35, 25));
    eye_distance_label->setAlignment(Qt::AlignCenter);

    gridLayout12->addWidget(eye_distance_label, 0, 2, 1, 1);

    TextLabel1_2_2_2 = new QLabel(groupBox1_2_2);
    TextLabel1_2_2_2->setObjectName(QString::fromUtf8("TextLabel1_2_2_2"));
    TextLabel1_2_2_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

    gridLayout12->addWidget(TextLabel1_2_2_2, 1, 1, 1, 1);

    TextLabel1_3_2 = new QLabel(groupBox1_2_2);
    TextLabel1_3_2->setObjectName(QString::fromUtf8("TextLabel1_3_2"));

    gridLayout12->addWidget(TextLabel1_3_2, 1, 0, 1, 1);


    vboxLayout->addWidget(groupBox1_2_2);

    groupBox1_2_2_2 = new QGroupBox(Stereo);
    groupBox1_2_2_2->setObjectName(QString::fromUtf8("groupBox1_2_2_2"));
    QSizePolicy sizePolicy6(static_cast<QSizePolicy::Policy>(7), static_cast<QSizePolicy::Policy>(5));
    sizePolicy6.setHorizontalStretch(0);
    sizePolicy6.setVerticalStretch(0);
    sizePolicy6.setHeightForWidth(groupBox1_2_2_2->sizePolicy().hasHeightForWidth());
    groupBox1_2_2_2->setSizePolicy(sizePolicy6);
    groupBox1_2_2_2->setMaximumSize(QSize(400, 100));
    groupBox1_2_2_2->setAlignment(Qt::AlignHCenter);
    gridLayout13 = new QGridLayout(groupBox1_2_2_2);
    gridLayout13->setSpacing(6);
    gridLayout13->setMargin(9);
    gridLayout13->setObjectName(QString::fromUtf8("gridLayout13"));
    TextLabel1_2_2_2_2 = new QLabel(groupBox1_2_2_2);
    TextLabel1_2_2_2_2->setObjectName(QString::fromUtf8("TextLabel1_2_2_2_2"));
    TextLabel1_2_2_2_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

    gridLayout13->addWidget(TextLabel1_2_2_2_2, 1, 1, 1, 1);

    focal_distance_label = new QLabel(groupBox1_2_2_2);
    focal_distance_label->setObjectName(QString::fromUtf8("focal_distance_label"));
    QSizePolicy sizePolicy7(static_cast<QSizePolicy::Policy>(0), static_cast<QSizePolicy::Policy>(0));
    sizePolicy7.setHorizontalStretch(0);
    sizePolicy7.setVerticalStretch(0);
    sizePolicy7.setHeightForWidth(focal_distance_label->sizePolicy().hasHeightForWidth());
    focal_distance_label->setSizePolicy(sizePolicy7);
    focal_distance_label->setMinimumSize(QSize(50, 25));
    focal_distance_label->setMaximumSize(QSize(35, 25));
    focal_distance_label->setAlignment(Qt::AlignCenter);

    gridLayout13->addWidget(focal_distance_label, 0, 2, 1, 1);

    focal_distance_slider = new QSlider(groupBox1_2_2_2);
    focal_distance_slider->setObjectName(QString::fromUtf8("focal_distance_slider"));
    focal_distance_slider->setMinimum(7);
    focal_distance_slider->setMaximum(100);
    focal_distance_slider->setSingleStep(5);
    focal_distance_slider->setPageStep(5);
    focal_distance_slider->setValue(40);
    focal_distance_slider->setOrientation(Qt::Horizontal);
    focal_distance_slider->setTickInterval(5);

    gridLayout13->addWidget(focal_distance_slider, 0, 0, 1, 2);

    TextLabel1_3_2_2 = new QLabel(groupBox1_2_2_2);
    TextLabel1_3_2_2->setObjectName(QString::fromUtf8("TextLabel1_3_2_2"));

    gridLayout13->addWidget(TextLabel1_3_2_2, 1, 0, 1, 1);


    vboxLayout->addWidget(groupBox1_2_2_2);

    swap_sss_button = new QCheckBox(Stereo);
    swap_sss_button->setObjectName(QString::fromUtf8("swap_sss_button"));

    vboxLayout->addWidget(swap_sss_button);


    gridLayout11->addLayout(vboxLayout, 0, 0, 1, 1);

    widget_stack->addWidget(Stereo);
    OpenGL = new QWidget();
    OpenGL->setObjectName(QString::fromUtf8("OpenGL"));
    gridLayout14 = new QGridLayout(OpenGL);
    gridLayout14->setSpacing(6);
    gridLayout14->setMargin(9);
    gridLayout14->setObjectName(QString::fromUtf8("gridLayout14"));
    gridLayout15 = new QGridLayout();
    gridLayout15->setSpacing(6);
    gridLayout15->setMargin(9);
    gridLayout15->setObjectName(QString::fromUtf8("gridLayout15"));
    vendor_label = new QLabel(OpenGL);
    vendor_label->setObjectName(QString::fromUtf8("vendor_label"));
    vendor_label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

    gridLayout15->addWidget(vendor_label, 0, 1, 1, 1);

    renderer_label = new QLabel(OpenGL);
    renderer_label->setObjectName(QString::fromUtf8("renderer_label"));
    renderer_label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

    gridLayout15->addWidget(renderer_label, 1, 1, 1, 1);

    textLabel1_2_3 = new QLabel(OpenGL);
    textLabel1_2_3->setObjectName(QString::fromUtf8("textLabel1_2_3"));
    QSizePolicy sizePolicy8(static_cast<QSizePolicy::Policy>(0), static_cast<QSizePolicy::Policy>(5));
    sizePolicy8.setHorizontalStretch(0);
    sizePolicy8.setVerticalStretch(0);
    sizePolicy8.setHeightForWidth(textLabel1_2_3->sizePolicy().hasHeightForWidth());
    textLabel1_2_3->setSizePolicy(sizePolicy8);
    textLabel1_2_3->setMinimumSize(QSize(160, 0));
    textLabel1_2_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

    gridLayout15->addWidget(textLabel1_2_3, 1, 0, 1, 1);

    version_label = new QLabel(OpenGL);
    version_label->setObjectName(QString::fromUtf8("version_label"));
    version_label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

    gridLayout15->addWidget(version_label, 2, 1, 1, 1);

    textLabel1_2 = new QLabel(OpenGL);
    textLabel1_2->setObjectName(QString::fromUtf8("textLabel1_2"));
    QSizePolicy sizePolicy9(static_cast<QSizePolicy::Policy>(0), static_cast<QSizePolicy::Policy>(5));
    sizePolicy9.setHorizontalStretch(0);
    sizePolicy9.setVerticalStretch(0);
    sizePolicy9.setHeightForWidth(textLabel1_2->sizePolicy().hasHeightForWidth());
    textLabel1_2->setSizePolicy(sizePolicy9);
    textLabel1_2->setMinimumSize(QSize(160, 0));
    textLabel1_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

    gridLayout15->addWidget(textLabel1_2, 2, 0, 1, 1);

    textLabel1 = new QLabel(OpenGL);
    textLabel1->setObjectName(QString::fromUtf8("textLabel1"));
    QSizePolicy sizePolicy10(static_cast<QSizePolicy::Policy>(0), static_cast<QSizePolicy::Policy>(5));
    sizePolicy10.setHorizontalStretch(0);
    sizePolicy10.setVerticalStretch(0);
    sizePolicy10.setHeightForWidth(textLabel1->sizePolicy().hasHeightForWidth());
    textLabel1->setSizePolicy(sizePolicy10);
    textLabel1->setMinimumSize(QSize(160, 0));
    textLabel1->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

    gridLayout15->addWidget(textLabel1, 0, 0, 1, 1);


    gridLayout14->addLayout(gridLayout15, 0, 0, 1, 1);

    use_vertex_buffers = new QCheckBox(OpenGL);
    use_vertex_buffers->setObjectName(QString::fromUtf8("use_vertex_buffers"));
    use_vertex_buffers->setChecked(true);

    gridLayout14->addWidget(use_vertex_buffers, 2, 0, 1, 1);

    extensions_list = new QListWidget(OpenGL);
    extensions_list->setObjectName(QString::fromUtf8("extensions_list"));

    gridLayout14->addWidget(extensions_list, 1, 0, 1, 1);

    widget_stack->addWidget(OpenGL);
    QWidget::setTabOrder(color_button, enable_fog);
    QWidget::setTabOrder(enable_fog, fog_slider);
    QWidget::setTabOrder(fog_slider, capping_color_button);
    QWidget::setTabOrder(capping_color_button, capping_transparency);
    QWidget::setTabOrder(capping_transparency, animation_smoothness);
    QWidget::setTabOrder(animation_smoothness, show_lights_);
    QWidget::setTabOrder(show_lights_, resolution_factor);
    QWidget::setTabOrder(resolution_factor, slider_);
    QWidget::setTabOrder(slider_, wheel_slider_);
    QWidget::setTabOrder(wheel_slider_, eye_distance_slider);
    QWidget::setTabOrder(eye_distance_slider, focal_distance_slider);
    QWidget::setTabOrder(focal_distance_slider, swap_sss_button);
    QWidget::setTabOrder(swap_sss_button, extensions_list);
    QWidget::setTabOrder(extensions_list, use_vertex_buffers);

    retranslateUi(StageSettingsData);

    QSize size(606, 395);
    size = size.expandedTo(StageSettingsData->minimumSizeHint());
    StageSettingsData->resize(size);


    widget_stack->setCurrentIndex(0);


    QMetaObject::connectSlotsByName(StageSettingsData);
    } // setupUi

    void retranslateUi(QWidget *StageSettingsData)
    {
    StageSettingsData->setWindowTitle(QApplication::translate("StageSettingsData", "StageSettings", 0, QApplication::UnicodeUTF8));
    fob_box->setToolTip(QApplication::translate("StageSettingsData", "The fog is currently not exported to POVRay", 0, QApplication::UnicodeUTF8));
    fob_box->setTitle(QApplication::translate("StageSettingsData", "Fog", 0, QApplication::UnicodeUTF8));
    enable_fog->setText(QApplication::translate("StageSettingsData", "Enable fog", 0, QApplication::UnicodeUTF8));
    fog_slider->setToolTip(QApplication::translate("StageSettingsData", "Intensity of fog", 0, QApplication::UnicodeUTF8));
    fog_slider->setWhatsThis(QApplication::translate("StageSettingsData", "Intensity of fog", 0, QApplication::UnicodeUTF8));
    max_label->setText(QApplication::translate("StageSettingsData", "max", 0, QApplication::UnicodeUTF8));
    min_label->setText(QApplication::translate("StageSettingsData", "min", 0, QApplication::UnicodeUTF8));
    offscreen_group->setToolTip(QApplication::translate("StageSettingsData", "Screenshots can also be created through offscreen rendering, which enables images larger than the screen resolution. Uncheck this if there are poblems with the resulting images.", 0, QApplication::UnicodeUTF8));
    offscreen_group->setTitle(QApplication::translate("StageSettingsData", "Use offscreen rendering for PNGs", 0, QApplication::UnicodeUTF8));
    factor_label->setText(QApplication::translate("StageSettingsData", "resolution factor", 0, QApplication::UnicodeUTF8));
    max_label1->setText(QApplication::translate("StageSettingsData", "(max width/height: 4096 pixels)", 0, QApplication::UnicodeUTF8));
    lights_box->setTitle(QApplication::translate("StageSettingsData", "Misc", 0, QApplication::UnicodeUTF8));
    use_preview->setToolTip(QApplication::translate("StageSettingsData", "Show the lightsources in the 3D view for easier positioning.", 0, QApplication::UnicodeUTF8));
    use_preview->setText(QApplication::translate("StageSettingsData", "Use faster preview models", 0, QApplication::UnicodeUTF8));
    show_fps->setToolTip(QApplication::translate("StageSettingsData", "Show the lightsources in the 3D view for easier positioning.", 0, QApplication::UnicodeUTF8));
    show_fps->setText(QApplication::translate("StageSettingsData", "Show frames per second (FPS)", 0, QApplication::UnicodeUTF8));
    show_lights_->setToolTip(QApplication::translate("StageSettingsData", "Show the lightsources in the 3D view for easier positioning.", 0, QApplication::UnicodeUTF8));
    show_lights_->setText(QApplication::translate("StageSettingsData", "Show lightsources in Scene", 0, QApplication::UnicodeUTF8));
    background_box->setToolTip(QApplication::translate("StageSettingsData", "Set the background color of the Scene.", 0, QApplication::UnicodeUTF8));
    background_box->setTitle(QApplication::translate("StageSettingsData", "Background color", 0, QApplication::UnicodeUTF8));
    color_sample->setText(QString());
    color_button->setText(QApplication::translate("StageSettingsData", "Edit", 0, QApplication::UnicodeUTF8));
    animation_box->setToolTip(QString());
    animation_box->setTitle(QApplication::translate("StageSettingsData", "Animation Smoothness", 0, QApplication::UnicodeUTF8));
    animation_smoothness->setToolTip(QApplication::translate("StageSettingsData", "Smoothness of the interpolation between stored 3D positions.", 0, QApplication::UnicodeUTF8));
    animation_smoothness->setWhatsThis(QString());
    min_label1->setText(QApplication::translate("StageSettingsData", "min", 0, QApplication::UnicodeUTF8));
    max_label2->setText(QApplication::translate("StageSettingsData", "max", 0, QApplication::UnicodeUTF8));
    capping_box->setToolTip(QApplication::translate("StageSettingsData", "Capping planes work almost like clipping planes, but create a solid volume.", 0, QApplication::UnicodeUTF8));
    capping_box->setTitle(QApplication::translate("StageSettingsData", "Capping", 0, QApplication::UnicodeUTF8));
    capping_color->setToolTip(QApplication::translate("StageSettingsData", "Color for Caping planes", 0, QApplication::UnicodeUTF8));
    capping_color->setText(QString());
    capping_color_button->setText(QApplication::translate("StageSettingsData", "Edit", 0, QApplication::UnicodeUTF8));
    label->setText(QApplication::translate("StageSettingsData", "Transparency", 0, QApplication::UnicodeUTF8));
    groupBox1_2->setToolTip(QApplication::translate("StageSettingsData", "Change sensitivity of mouse wheel. Higher sensitivity means more movement with less moving the wheel.", 0, QApplication::UnicodeUTF8));
    groupBox1_2->setTitle(QApplication::translate("StageSettingsData", "Mouse wheel sensitivity", 0, QApplication::UnicodeUTF8));
    TextLabel1_3->setText(QApplication::translate("StageSettingsData", "min", 0, QApplication::UnicodeUTF8));
    TextLabel1_2_2->setText(QApplication::translate("StageSettingsData", "max", 0, QApplication::UnicodeUTF8));
    groupBox1->setToolTip(QApplication::translate("StageSettingsData", "Change the mouse sensitivity. Greater sensitivity means greater mouse movement on the screen with less movement of the mouse.", 0, QApplication::UnicodeUTF8));
    groupBox1->setTitle(QApplication::translate("StageSettingsData", "Mouse sensitivity", 0, QApplication::UnicodeUTF8));
    TextLabel1_2->setText(QApplication::translate("StageSettingsData", "max", 0, QApplication::UnicodeUTF8));
    TextLabel1->setText(QApplication::translate("StageSettingsData", "min", 0, QApplication::UnicodeUTF8));
    groupBox1_2_2->setToolTip(QString());
    groupBox1_2_2->setTitle(QApplication::translate("StageSettingsData", "Stereo: Eye points distance", 0, QApplication::UnicodeUTF8));
    eye_distance_slider->setToolTip(QApplication::translate("StageSettingsData", "The greater the eye point distance is the greater is the stereo effect.", 0, QApplication::UnicodeUTF8));
    eye_distance_label->setText(QApplication::translate("StageSettingsData", "99.9", 0, QApplication::UnicodeUTF8));
    TextLabel1_2_2_2->setText(QApplication::translate("StageSettingsData", "max", 0, QApplication::UnicodeUTF8));
    TextLabel1_3_2->setText(QApplication::translate("StageSettingsData", "min", 0, QApplication::UnicodeUTF8));
    groupBox1_2_2_2->setToolTip(QString());
    groupBox1_2_2_2->setTitle(QApplication::translate("StageSettingsData", "Stereo: focal distance", 0, QApplication::UnicodeUTF8));
    TextLabel1_2_2_2_2->setText(QApplication::translate("StageSettingsData", "max", 0, QApplication::UnicodeUTF8));
    focal_distance_label->setText(QApplication::translate("StageSettingsData", "99.9", 0, QApplication::UnicodeUTF8));
    TextLabel1_3_2_2->setText(QApplication::translate("StageSettingsData", "min", 0, QApplication::UnicodeUTF8));
    swap_sss_button->setText(QApplication::translate("StageSettingsData", "Swap side by side stereo", 0, QApplication::UnicodeUTF8));
    vendor_label->setText(QApplication::translate("StageSettingsData", "undefined", 0, QApplication::UnicodeUTF8));
    renderer_label->setText(QApplication::translate("StageSettingsData", "undefined", 0, QApplication::UnicodeUTF8));
    textLabel1_2_3->setText(QApplication::translate("StageSettingsData", "Renderer:", 0, QApplication::UnicodeUTF8));
    version_label->setText(QApplication::translate("StageSettingsData", "undefined", 0, QApplication::UnicodeUTF8));
    textLabel1_2->setText(QApplication::translate("StageSettingsData", "Version:", 0, QApplication::UnicodeUTF8));
    textLabel1->setText(QApplication::translate("StageSettingsData", "Vendor:", 0, QApplication::UnicodeUTF8));
    use_vertex_buffers->setToolTip(QApplication::translate("StageSettingsData", "Select to use OpenGL vertex buffer. Results in greater performance.", 0, QApplication::UnicodeUTF8));
    use_vertex_buffers->setText(QApplication::translate("StageSettingsData", "Use OpenGL Vertex Buffer Objects", 0, QApplication::UnicodeUTF8));
    extensions_list->setToolTip(QApplication::translate("StageSettingsData", "Extensions supported by your graphics card", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(StageSettingsData);
    } // retranslateUi

};

namespace Ui {
    class StageSettingsData: public Ui_StageSettingsData {};
} // namespace Ui

#endif // STAGESETTINGSDATA_H
